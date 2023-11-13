#include "testscreen.h"

lv_obj_t *ui_ScreenTest;
lv_obj_t *lbl_speed;

void testscreen_init()
{
    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               true, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_ScreenTest = lv_obj_create(NULL);

    /* Create simple label */
    lbl_speed = lv_label_create(ui_ScreenTest);
    lv_label_set_text(lbl_speed, "42");
    lv_obj_set_style_text_font(lbl_speed, &bigfont_132_4bpp, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_align(lbl_speed, LV_ALIGN_CENTER, 0, 0);

    lv_disp_load_scr(ui_ScreenTest);
}


