#include "screen_i2_eeprom.h"
#include <string>

Screen_i2c_eeprom::Screen_i2c_eeprom()
{
}

void Screen_i2c_eeprom::build_screen()
{
    dispp = lv_disp_get_default();
    theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, &lv_font_montserrat_30);

    lv_disp_set_theme(dispp, theme);

    // style
    lv_style_init(&style_lbl);
    lv_style_set_text_color(&style_lbl, lv_palette_main(LV_PALETTE_YELLOW));
    // lv_style_set_bg_opa(&style_lbl, LV_OPA_100);
    // lv_style_set_bg_color(&style_lbl, lv_palette_main(LV_PALETTE_GREEN));
    lv_style_set_text_font(&style_lbl, &lv_font_montserrat_20);

    ui_ScreenI2C_EEPROM = lv_obj_create(NULL);
    lv_obj_add_style(ui_ScreenI2C_EEPROM, &style_lbl, LV_STATE_DEFAULT);

    /* Create simple label */
    lbl_manufacturer_code = lv_label_create(ui_ScreenI2C_EEPROM);
    lv_label_set_text(lbl_manufacturer_code, "Manufacturer");
    lv_obj_align(lbl_manufacturer_code, LV_ALIGN_TOP_LEFT, 10, 10);

    lbl_device_code = lv_label_create(ui_ScreenI2C_EEPROM);
    lv_label_set_text(lbl_device_code, "Device Code");
    lv_obj_align_to(lbl_device_code, lbl_manufacturer_code, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 10);

    lbl_serial_no = lv_label_create(ui_ScreenI2C_EEPROM);
    lv_label_set_text(lbl_serial_no, "Unique ID");
    lv_obj_align_to(lbl_serial_no, lbl_device_code, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 10);

    val_manufacturer_code = lv_label_create(ui_ScreenI2C_EEPROM);
    lv_label_set_text(val_manufacturer_code, "0x00");
    lv_obj_align(val_manufacturer_code, LV_ALIGN_TOP_LEFT, 160, 10);

    val_device_code = lv_label_create(ui_ScreenI2C_EEPROM);
    lv_label_set_text(val_device_code, "0x00");
    lv_obj_align_to(val_device_code, val_manufacturer_code, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 10);

    val_serial_no = lv_label_create(ui_ScreenI2C_EEPROM);
    lv_label_set_text(val_serial_no, "0x00");
    lv_obj_align_to(val_serial_no, val_device_code, LV_ALIGN_OUT_BOTTOM_LEFT, 0, 10);

    lv_disp_load_scr(ui_ScreenI2C_EEPROM);
}

void Screen_i2c_eeprom::update()
{
    if (memcmp(serial_no, serial_no_old, sizeof(serial_no))) {
        char buffer[32];

        snprintf(buffer, sizeof(buffer), "%02x", serial_no[0]);
        lv_label_set_text(val_manufacturer_code, buffer);

        snprintf(buffer, sizeof(buffer), "%02x", serial_no[1]);
        lv_label_set_text(val_device_code, buffer);

        snprintf(buffer, sizeof(buffer), "%02x %02x %02x %02x", serial_no[2], serial_no[3], serial_no[4], serial_no[5]);
        lv_label_set_text(val_serial_no, buffer);

        memcpy(serial_no_old, serial_no, sizeof(serial_no_old));
    }
}

void Screen_i2c_eeprom::set_id(const uint8_t* id)
{
    memcpy(serial_no, id, sizeof(serial_no));
}
