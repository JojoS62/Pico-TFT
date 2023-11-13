#ifndef _SCREEN_I2C_EEPROM_H_
#define _SCREEN_I2C_EEPROM_H_

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif

class Screen_i2c_eeprom {
    public:
    Screen_i2c_eeprom();

    void build_screen();
    void update();
    void set_id(const uint8_t* id);

    private:
    lv_disp_t *dispp;
    lv_theme_t *theme;
    lv_style_t style_lbl;
    lv_obj_t *ui_ScreenI2C_EEPROM;

    lv_obj_t *lbl_manufacturer_code;
    lv_obj_t *lbl_device_code;
    lv_obj_t *lbl_serial_no;

    lv_obj_t *val_manufacturer_code;
    lv_obj_t *val_device_code;
    lv_obj_t *val_serial_no;

    uint8_t serial_no[6];
    uint8_t serial_no_old[6];
};

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif // _SCREEN_I2C_EEPROM_H_