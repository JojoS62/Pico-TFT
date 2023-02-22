#include <TFT_eSPI.h>
#include <lvgl.h>
#include "ui/ui.h" 
#include "ui/ui_helpers.h"

void touch_calibrate();
void loop_calibrate();

// tft.pushImageDMA(0, sel * DHEIGHT / 2, DWIDTH, DHEIGHT / 2, sprPtr[sel]);

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

/*Read the touchpad*/
void my_touchpad_read(lv_indev_drv_t *indev_driver, lv_indev_data_t *data) {
  uint16_t touchX, touchY;

  bool touched = tft.getTouch(&touchX, &touchY, 600);

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

void setup() {
  Serial1.begin(115200); /* prepare for possible serial debug */

  String LVGL_Arduino = "Hello Arduino! ";
  LVGL_Arduino += String('V') + lv_version_major() + "." + lv_version_minor() +
                  "." + lv_version_patch();

  Serial1.println(LVGL_Arduino);
  Serial1.println("I am LVGL_Arduino");

  lv_init();

#if LV_USE_LOG != 0
  lv_log_register_print_cb(
      my_print); /* register print function for debugging */
#endif

  tft.init(0);        /* TFT init */
  tft.setRotation(3); /* Landscape orientation, flipped */

  Serial1.printf("TFT_WIDTH: %d  TFT_HEIGHT: %d\ntft.witdht: %d  tft.height: %d\n", TFT_WIDTH, TFT_HEIGHT, tft.width(), tft.height());

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
  tft.setTouch(calData);

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

  /*Initialize the (dummy) input device driver*/
  static lv_indev_drv_t indev_drv;
  lv_indev_drv_init(&indev_drv);
  indev_drv.type = LV_INDEV_TYPE_POINTER;
  indev_drv.read_cb = my_touchpad_read;
  lv_indev_drv_register(&indev_drv);

  /* Create simple label */
  // lv_obj_t *label = lv_label_create(lv_scr_act());
  // lv_label_set_text(label, LVGL_Arduino.c_str());
  // lv_obj_align(label, LV_ALIGN_CENTER, 0, 0);
  
  ui_init();

  Serial1.println("Setup done");
}

unsigned long previousMillis = 0;

void loop() {
#ifdef USE_CALIBRATE
  loop_calibrate();
#else
  lv_timer_handler(); /* let the GUI do its work */

  unsigned long currentMillis = millis();
  if (currentMillis - previousMillis >= 200UL) {
    // save the last time you blinked the LED
    previousMillis = currentMillis;

    double val = 15.0 + rand() * 0.000000001;
    char buffer[20];
    snprintf(buffer, sizeof(buffer), "%12.9f", val);
    _ui_label_set_property(ui_lblFrequency, _UI_LABEL_PROPERTY_TEXT, buffer);
  }

  delay(5);
#endif
}

//------------------------------------------------------------------------------------------

void loop_calibrate(void) {
  uint16_t x = 0, y = 0; // To store the touch coordinates

  // Pressed will be set true is there is a valid touch on the screen
  bool pressed = tft.getTouch(&x, &y);

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

  tft.calibrateTouch(calData, TFT_MAGENTA, TFT_BLACK, 15);

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

