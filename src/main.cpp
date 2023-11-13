#include <TFT_eSPI.h>
#include <lvgl.h>
#include "ui/ui.h" 
#include "ui/ui_helpers.h"
#include "testscreen.h"
#include "screen_i2_eeprom.h"
#include "Wire.h"

Screen_i2c_eeprom screen_i2c_eeeprom;

constexpr uint8_t eeprom_adr = 0xa0 / 2;
uint8_t id_code[6];

void touch_calibrate();
void loop_calibrate();

static lv_disp_draw_buf_t draw_buf;
static lv_color_t buf[TFT_HEIGHT * 20];

TFT_eSPI tft = TFT_eSPI();

#if LV_USE_LOG != 0
void my_print(const char *buf) { Serial1.println(buf); }
#endif

/* Display flushing */
void my_disp_flush(lv_disp_drv_t *disp, const lv_area_t *area,
                   lv_color_t *color_p) {
  uint32_t w = (area->x2 - area->x1 + 1);
  uint32_t h = (area->y2 - area->y1 + 1);

  tft.startWrite();
  tft.setAddrWindow(area->x1, area->y1, w, h);
  tft.pushColors((uint16_t *)&color_p->full, w * h, true);
  tft.endWrite();

  lv_disp_flush_ready(disp);
}

/*Get the currently being pressed key.  0 if no key is pressed*/
static uint32_t keypad_get_key(void)
{
    static bool btnAOld = false;
    static bool btnBOld = false;
    static bool btnCOld = false;
    bool btnA = digitalReadFast(7);
    bool btnB = digitalReadFast(8);
    bool btnC = digitalReadFast(9);

    uint32_t key = 0;

    if (btnA && !btnAOld) {
      key = 1;
        _ui_screen_change(ui_ScreenSettings, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    btnAOld = btnA;

    if (btnB && !btnBOld) {
      key = 5;
        _ui_screen_change(ui_ScreenMain, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    btnBOld = btnB;

    if (btnC && !btnCOld) {
      key = 2;
        _ui_screen_change(ui_ScreenGraph, LV_SCR_LOAD_ANIM_NONE, 0, 0);
    }
    btnCOld = btnC;

    return key;
}

/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
  uint16_t touchX, touchY;

#ifdef USE_TOUCH
  bool touched = tft.getTouch(&touchX, &touchY, 600);
#else
  bool touched = false;
#endif

  if (!touched) {
    data->state = LV_INDEV_STATE_REL;
  } else {
    data->state = LV_INDEV_STATE_PR;

    /*Set the coordinates*/
    data->point.x = touchX;
    data->point.y = touchY;

    Serial1.print("Data x ");
    Serial1.println(touchX);

    Serial1.print("Data y ");
    Serial1.println(touchY);
  }
}

/*Read the control buttons */
void my_buttons_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data)
{
    static uint32_t last_key = 0;

    /*Get the current x and y coordinates*/
    data->point.x = 0;
    data->point.y = 0;

    /*Get whether the a key is pressed and save the pressed key*/
    uint32_t act_key = keypad_get_key();
    if(act_key != 0) {
        data->state = LV_INDEV_STATE_PR;

        /*Translate the keys to LVGL control characters according to your key definitions*/
        switch(act_key) {
            case 1:
                act_key = LV_KEY_NEXT;
                break;
            case 2:
                act_key = LV_KEY_PREV;
                break;
            case 3:
                act_key = LV_KEY_LEFT;
                break;
            case 4:
                act_key = LV_KEY_RIGHT;
                break;
            case 5:
                act_key = LV_KEY_ENTER;
                break;
        }

        last_key = act_key;
    }
    else {
        data->state = LV_INDEV_STATE_REL;
    }

    data->key = last_key;
}

void formatFreqText(double val, char *buffer, size_t bufSize)
{
    snprintf(buffer, bufSize, "%12.9f", val);
    char* idx = strchr(buffer, '.');
    if (idx) {
      *idx = ',';
      *(idx+12) = 0;
      *(idx+11) = *(idx+9);
      *(idx+10) = *(idx+8);
      *(idx+9) = *(idx+7);
      *(idx+8) = '.';
      *(idx+7) = *(idx+5);
      *(idx+6) = *(idx+4);
      *(idx+5) = *(idx+3);
      *(idx+4) = '.';
    }
}

void setup() {
  Serial1.begin(115200); /* prepare for possible serial debug */

  String LVGL_Arduino = "Hello Arduino! ";
  LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() + "." + lv_version_patch();

  Serial1.println(LVGL_Arduino);
  Serial1.println("I am LVGL_Arduino");

  lv_init();

#if LV_USE_LOG != 0
  lv_log_register_print_cb(
      my_print); /* register print function for debugging */
#endif

  tft.init(0);        /* TFT init */
  tft.setRotation(3); /* Landscape orientation, flipped */

  Serial1.printf("TFT_WIDTH: %d  TFT_HEIGHT: %d\ntft.witdht: %d  tft.height: %d\n\n", TFT_WIDTH, TFT_HEIGHT, tft.width(), tft.height());

  tft.fillScreen(TFT_BLACK);

#ifdef USE_CALIBRATE
  tft.fillScreen(TFT_BLACK);
  tft.drawCentreString("Touch screen to test!",tft.width()/2, tft.height()/2, 2);
  
  touch_calibrate();

  return;
#endif

  /*Set the touchscreen calibration data,
   the actual data for your display can be acquired using
   the Generic -> Touch_calibrate example from the TFT_eSPI library*/
  uint16_t calData[5] = { 426, 3455, 348, 3431, 1 };
#ifdef USE_TOUCH
  tft.setTouch(calData);
#endif

  lv_disp_draw_buf_init(&draw_buf, buf, NULL, tft.width() * 20);

  /*Initialize the display*/
  static lv_disp_drv_t disp_drv;
  lv_disp_drv_init(&disp_drv);
  /*Change the following line to your display resolution*/
  disp_drv.hor_res = tft.width();
  disp_drv.ver_res = tft.height();
  disp_drv.flush_cb = my_disp_flush;
  disp_drv.draw_buf = &draw_buf;
  lv_disp_drv_register(&disp_drv);

  /*Initialize the touch input device driver*/
  static lv_indev_drv_t indev_drv_touch;
  lv_indev_drv_init(&indev_drv_touch);
  indev_drv_touch.type = LV_INDEV_TYPE_POINTER;
  indev_drv_touch.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv_touch);

  /*Initialize the buttons input device driver*/
  static lv_indev_drv_t indev_drv_button;
  lv_indev_drv_init(&indev_drv_button);
  indev_drv_button.type = LV_INDEV_TYPE_KEYPAD;
  indev_drv_button.read_cb = my_buttons_read;
  lv_indev_drv_register(&indev_drv_button);

  // testscreen_init();
  // ui_init();
  screen_i2c_eeeprom.build_screen();

  Wire1.setSDA(18);
  Wire1.setSCL(19);
  Wire1.begin();

  Wire1.beginTransmission(eeprom_adr);
  Wire1.write(0xfa);
  uint8_t ack = Wire1.endTransmission();

  Wire1.requestFrom(eeprom_adr, 6);
  if (Wire1.available()) {
    int rc =  Wire1.readBytes(id_code, sizeof(id_code));
  }

  Serial1.printf("EEPROM read: ack: %02x  mfct: %02x  device: %02x  id:  %02x %02x %02x %02x\n", 
    ack, id_code[0], id_code[1], id_code[2], id_code[3],  id_code[4], id_code[5]);

  screen_i2c_eeeprom.set_id(id_code);

  Serial1.println("Setup done");
}

unsigned long previousMillis = 0;
float speed = 0.0f;
float diff = 0.1f;

void loop() {
#ifdef USE_CALIBRATE
  loop_calibrate();
#else
  lv_timer_handler(); /* let the GUI do its work */

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= 50UL) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    screen_i2c_eeeprom.update();

  }

  delay(5);
#endif
}

//------------------------------------------------------------------------------------------

void loop_calibrate(void) {
  uint16_t x = 0, y = 0; // To store the touch coordinates

  // Pressed will be set true is there is a valid touch on the screen
  bool pressed = false; // tft.getTouch(&x, &y);

  // Draw a white spot at the detected coordinates
  if (pressed) {
    tft.fillCircle(x, y, 2, TFT_WHITE);
    //Serial1.print("x,y = ");
    //Serial1.print(x);
    //Serial1.print(",");
    //Serial1.println(y);
  }
}

//------------------------------------------------------------------------------------------

// Code to run a screen calibration, not needed when calibration values set in setup()
void touch_calibrate()
{
  uint16_t calData[5];
  uint8_t calDataOK = 0;

  // Calibrate
  tft.fillScreen(TFT_BLACK);
  tft.setCursor(20, 0);
  tft.setTextFont(2);
  tft.setTextSize(1);
  tft.setTextColor(TFT_WHITE, TFT_BLACK);

  tft.println("Touch corners as indicated");

  tft.setTextFont(1);
  tft.println();

  // tft.calibrateTouch(calData, TFT_MAGENTA, TFT_BLACK, 15);

  Serial1.println(); Serial1.println();
  Serial1.println("// Use this calibration code in setup():");
  Serial1.print("  uint16_t calData[5] = ");
  Serial1.print("{ ");

  for (uint8_t i = 0; i < 5; i++)
  {
    Serial1.print(calData[i]);
    if (i < 4) Serial1.print(", ");
  }

  Serial1.println(" };");
  Serial1.print("  tft.setTouch(calData);");
  Serial1.println(); Serial1.println();

  tft.fillScreen(TFT_BLACK);
  
  tft.setTextColor(TFT_GREEN, TFT_BLACK);
  tft.println("Calibration complete!");
  tft.println("Calibration code sent to Serial port.");

  delay(4000);
}

