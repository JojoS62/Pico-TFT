#ifndef _TESTSCREEN_H_
#define _TESTSCREEN_H_

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

LV_FONT_DECLARE(bigfont);
LV_FONT_DECLARE(bigfont_132_4bpp);

extern lv_obj_t * ui_ScreenTest;
extern lv_obj_t *lbl_speed;

void testscreen_init();

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
