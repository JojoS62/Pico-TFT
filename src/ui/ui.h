// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.2.1
// LVGL VERSION: 8.2.0
// PROJECT: SquareLine_Project

#ifndef _SQUARELINE_PROJECT_UI_H
#define _SQUARELINE_PROJECT_UI_H

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

extern lv_obj_t * ui_ScreenMain;
extern lv_obj_t * ui_Panel1;
extern lv_obj_t * ui_Panel2;
extern lv_obj_t * ui_lblFrequencyCurrent;
extern lv_obj_t * ui_lblFrequencyUnit1;
extern lv_obj_t * ui_PanelFrequencyMean;
extern lv_obj_t * ui_lblFrequency;
extern lv_obj_t * ui_lblFrequencyText;
extern lv_obj_t * ui_lblFrequencyUnit;
extern lv_obj_t * ui_PanelFrequencyMax;
extern lv_obj_t * ui_lblFrequency1;
extern lv_obj_t * ui_lblFrequencyText1;
extern lv_obj_t * ui_lblFrequencyUnit2;
extern lv_obj_t * ui_PanelFrequencyMin;
extern lv_obj_t * ui_lblFrequency2;
extern lv_obj_t * ui_lblFrequencyText2;
extern lv_obj_t * ui_lblFrequencyUnit3;
extern lv_obj_t * ui_PanelFrequencyStdDev;
extern lv_obj_t * ui_lblFrequency3;
extern lv_obj_t * ui_lblFrequencyText3;
extern lv_obj_t * ui_lblFrequencyUnit4;
void ui_event_ButtonMenu(lv_event_t * e);
extern lv_obj_t * ui_ButtonMenu;
extern lv_obj_t * ui_Label5;
extern lv_obj_t * ui_Label3;
void ui_event_ButtonMenuGraph(lv_event_t * e);
extern lv_obj_t * ui_ButtonMenuGraph;
extern lv_obj_t * ui_Label6;
extern lv_obj_t * ui_ScreenSettings;
extern lv_obj_t * ui_Panel4;
extern lv_obj_t * ui_Paneldigits;
extern lv_obj_t * ui_lblDigits;
extern lv_obj_t * ui_DropdownDigits;
extern lv_obj_t * ui_PanelIntTime;
extern lv_obj_t * ui_lblIntTime;
extern lv_obj_t * ui_DropdownIntTime;
extern lv_obj_t * ui_Panel3;
extern lv_obj_t * ui_lblFrequencyText5;
extern lv_obj_t * ui_Switch2;
extern lv_obj_t * ui_Label2;
void ui_event_ButtonMenuBack1(lv_event_t * e);
extern lv_obj_t * ui_ButtonMenuBack1;
extern lv_obj_t * ui_Label4;
extern lv_obj_t * ui_ScreenGraph;
extern lv_obj_t * ui_Chart2;
void ui_event_ButtonMenuBack2(lv_event_t * e);
extern lv_obj_t * ui_ButtonMenuBack2;
extern lv_obj_t * ui_Label1;






void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
