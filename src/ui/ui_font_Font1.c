/*******************************************************************************
 * Size: 30 px
 * Bpp: 4
 * Opts: --bpp 4 --size 30 --font C:\Users\super\OneDrive\Dokumente\square_projekt\F-Meter\assets\l_10646.ttf -o C:\Users\super\OneDrive\Dokumente\square_projekt\F-Meter\assets\ui_font_Font1.c --format lvgl -r 0x20-0x39 --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT1
#define UI_FONT_FONT1 1
#endif

#if UI_FONT_FONT1

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0xbf, 0xf3, 0xbf, 0xf3, 0xbf, 0xf3, 0xbf, 0xf3,
    0xbf, 0xf2, 0xaf, 0xf2, 0xaf, 0xf1, 0x9f, 0xf1,
    0x9f, 0xf0, 0x8f, 0xf0, 0x8f, 0xf0, 0x7f, 0xf0,
    0x7f, 0xe0, 0x6f, 0xe0, 0x6f, 0xd0, 0x3a, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x9d, 0xd2, 0xbf, 0xf3,
    0xbf, 0xf3,

    /* U+0022 "\"" */
    0x5f, 0xf7, 0x4, 0xff, 0x84, 0xff, 0x70, 0x3f,
    0xf8, 0x3f, 0xf6, 0x3, 0xff, 0x73, 0xff, 0x50,
    0x2f, 0xf6, 0x2f, 0xf4, 0x1, 0xff, 0x51, 0xff,
    0x30, 0xf, 0xf4, 0xf, 0xf2, 0x0, 0xff, 0x30,
    0x11, 0x0, 0x1, 0x10,

    /* U+0023 "#" */
    0x0, 0x0, 0x0, 0x0, 0xbf, 0x20, 0x0, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xd0, 0x0,
    0x4f, 0x90, 0x0, 0x0, 0x0, 0x0, 0x4, 0xf9,
    0x0, 0x8, 0xf5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x8f, 0x50, 0x0, 0xdf, 0x10, 0x0, 0x0, 0x0,
    0x0, 0xd, 0xf0, 0x0, 0x1f, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x1, 0xfc, 0x0, 0x5, 0xf8, 0x0,
    0x0, 0x2, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xa0, 0x4c, 0xcc, 0xce, 0xfc, 0xcc,
    0xcf, 0xfc, 0xcc, 0xc5, 0x0, 0x0, 0x0, 0xdf,
    0x0, 0x1, 0xfb, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1f, 0xc0, 0x0, 0x5f, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x5, 0xf8, 0x0, 0x9, 0xf4, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0x40, 0x0, 0xdf, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xf0, 0x0, 0x1f,
    0xc0, 0x0, 0x0, 0x8, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0x40, 0x8c, 0xcc, 0xef,
    0xec, 0xcc, 0xff, 0xdc, 0xcc, 0xc1, 0x0, 0x0,
    0x9, 0xf4, 0x0, 0xd, 0xf0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xdf, 0x0, 0x1, 0xfc, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x1f, 0xc0, 0x0, 0x6f, 0x70,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xf7, 0x0, 0xa,
    0xf3, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0x30,
    0x0, 0xef, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe,
    0xf0, 0x0, 0x2f, 0xb0, 0x0, 0x0, 0x0, 0x0,

    /* U+0024 "$" */
    0x0, 0x0, 0x0, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xf, 0x60, 0x0, 0x0, 0x0, 0x5, 0xbe,
    0xff, 0xec, 0x83, 0x0, 0xa, 0xff, 0xff, 0xff,
    0xff, 0xf1, 0x8, 0xff, 0xb3, 0xf6, 0x15, 0xaf,
    0x10, 0xff, 0xc0, 0xf, 0x60, 0x0, 0x0, 0x2f,
    0xf6, 0x0, 0xf6, 0x0, 0x0, 0x2, 0xff, 0x60,
    0xf, 0x60, 0x0, 0x0, 0xf, 0xfb, 0x0, 0xf6,
    0x0, 0x0, 0x0, 0x9f, 0xf9, 0x1f, 0x60, 0x0,
    0x0, 0x0, 0xcf, 0xfd, 0xf6, 0x0, 0x0, 0x0,
    0x0, 0xbf, 0xff, 0xa0, 0x0, 0x0, 0x0, 0x0,
    0x6f, 0xff, 0xe5, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0xfa, 0x0, 0x0, 0x0, 0x0, 0xfa, 0xef,
    0xf9, 0x0, 0x0, 0x0, 0xf, 0x61, 0xdf, 0xf2,
    0x0, 0x0, 0x0, 0xf6, 0x4, 0xff, 0x50, 0x0,
    0x0, 0xf, 0x60, 0x1f, 0xf6, 0x0, 0x0, 0x0,
    0xf6, 0x4, 0xff, 0x45, 0x10, 0x0, 0xf, 0x60,
    0xcf, 0xe0, 0xdf, 0xb7, 0x43, 0xfa, 0xdf, 0xf6,
    0xc, 0xff, 0xff, 0xff, 0xff, 0xf7, 0x0, 0x4,
    0x8b, 0xef, 0xff, 0xa3, 0x0, 0x0, 0x0, 0x0,
    0xf, 0x60, 0x0, 0x0, 0x0, 0x0, 0x0, 0xf6,
    0x0, 0x0, 0x0,

    /* U+0025 "%" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x1d, 0xf4, 0x0, 0x7d, 0xfe, 0xb3, 0x0, 0x0,
    0x0, 0x0, 0xbf, 0x80, 0xa, 0xfd, 0x79, 0xff,
    0x40, 0x0, 0x0, 0x7, 0xfc, 0x0, 0x5f, 0xe1,
    0x0, 0x7f, 0xd0, 0x0, 0x0, 0x3f, 0xe1, 0x0,
    0xaf, 0x90, 0x0, 0xf, 0xf3, 0x0, 0x1, 0xef,
    0x40, 0x0, 0xcf, 0x60, 0x0, 0xd, 0xf5, 0x0,
    0xb, 0xf8, 0x0, 0x0, 0xcf, 0x60, 0x0, 0xd,
    0xf5, 0x0, 0x7f, 0xb0, 0x0, 0x0, 0xaf, 0x80,
    0x0, 0xe, 0xf3, 0x4, 0xfe, 0x10, 0x0, 0x0,
    0x4f, 0xd0, 0x0, 0x4f, 0xd0, 0x1e, 0xf4, 0x0,
    0x0, 0x0, 0x9, 0xfa, 0x35, 0xef, 0x30, 0xcf,
    0x70, 0x0, 0x0, 0x0, 0x0, 0x5b, 0xdd, 0x92,
    0x8, 0xfb, 0x0, 0x1, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xe1, 0x3c, 0xff, 0xe8, 0x0,
    0x0, 0x0, 0x0, 0x1, 0xef, 0x32, 0xff, 0x75,
    0xcf, 0xa0, 0x0, 0x0, 0x0, 0xc, 0xf7, 0xc,
    0xf7, 0x0, 0xe, 0xf4, 0x0, 0x0, 0x0, 0x9f,
    0xb0, 0x1f, 0xf1, 0x0, 0x8, 0xfa, 0x0, 0x0,
    0x5, 0xfd, 0x10, 0x4f, 0xe0, 0x0, 0x6, 0xfc,
    0x0, 0x0, 0x2f, 0xf3, 0x0, 0x5f, 0xd0, 0x0,
    0x5, 0xfd, 0x0, 0x0, 0xdf, 0x60, 0x0, 0x4f,
    0xe0, 0x0, 0x6, 0xfc, 0x0, 0x9, 0xfa, 0x0,
    0x0, 0x1f, 0xf2, 0x0, 0x9, 0xf9, 0x0, 0x5f,
    0xd0, 0x0, 0x0, 0xb, 0xf8, 0x0, 0x1e, 0xf3,
    0x2, 0xff, 0x20, 0x0, 0x0, 0x2, 0xef, 0x97,
    0xdf, 0x90, 0xd, 0xf6, 0x0, 0x0, 0x0, 0x0,
    0x2a, 0xef, 0xd6, 0x0, 0x38, 0x60, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0026 "&" */
    0x0, 0x0, 0x0, 0x4, 0x77, 0x50, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x4e, 0xff, 0xff, 0xf6,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xff, 0xbb,
    0xff, 0xf5, 0x0, 0x0, 0x0, 0x0, 0xd, 0xff,
    0x40, 0x3, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0,
    0xff, 0xe0, 0x0, 0xc, 0xff, 0x0, 0x0, 0x0,
    0x0, 0xf, 0xfe, 0x0, 0x0, 0xdf, 0xe0, 0x0,
    0x0, 0x0, 0x0, 0xcf, 0xf2, 0x0, 0x3f, 0xf8,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0x90, 0x3e,
    0xfc, 0x0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xff,
    0xaf, 0xfa, 0x0, 0x0, 0x0, 0x0, 0x0, 0x29,
    0xff, 0xff, 0xd5, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x7f, 0xff, 0xdf, 0xf8, 0x0, 0x0, 0x1, 0x55,
    0x20, 0x7f, 0xfb, 0x22, 0xff, 0xf3, 0x0, 0x0,
    0x5f, 0xf7, 0x2f, 0xfc, 0x0, 0x7, 0xff, 0xd0,
    0x0, 0x6, 0xff, 0x59, 0xff, 0x40, 0x0, 0xc,
    0xff, 0x70, 0x0, 0x7f, 0xf3, 0xdf, 0xf0, 0x0,
    0x0, 0x3f, 0xff, 0x40, 0xa, 0xfe, 0xe, 0xff,
    0x0, 0x0, 0x0, 0x7f, 0xfe, 0x20, 0xef, 0x90,
    0xdf, 0xf3, 0x0, 0x0, 0x0, 0xbf, 0xfc, 0x6f,
    0xf2, 0xa, 0xff, 0x90, 0x0, 0x0, 0x1, 0xef,
    0xff, 0xf8, 0x0, 0x4f, 0xff, 0x40, 0x0, 0x0,
    0x3, 0xff, 0xfd, 0x0, 0x0, 0xbf, 0xff, 0x70,
    0x0, 0x1, 0x8f, 0xff, 0xf4, 0x0, 0x0, 0xbf,
    0xff, 0xeb, 0xac, 0xff, 0xfe, 0xff, 0xf3, 0x0,
    0x0, 0x6e, 0xff, 0xff, 0xff, 0xc5, 0xd, 0xff,
    0xe3, 0x0, 0x0, 0x3, 0x67, 0x75, 0x20, 0x0,
    0x0, 0x0, 0x0,

    /* U+0027 "'" */
    0x5f, 0xff, 0x33, 0xff, 0xf1, 0x2f, 0xff, 0x0,
    0xff, 0xe0, 0xf, 0xfd, 0x0, 0xdf, 0xb0, 0xc,
    0xfa, 0x0, 0x9d, 0x70,

    /* U+0028 "(" */
    0x0, 0x0, 0x0, 0x5, 0x0, 0x0, 0x1, 0xca,
    0x0, 0x0, 0x1d, 0xf6, 0x0, 0x0, 0xbf, 0x90,
    0x0, 0x7, 0xfd, 0x0, 0x0, 0x1f, 0xf5, 0x0,
    0x0, 0x9f, 0xd0, 0x0, 0x0, 0xff, 0x80, 0x0,
    0x5, 0xff, 0x30, 0x0, 0xa, 0xff, 0x0, 0x0,
    0xd, 0xfe, 0x0, 0x0, 0xf, 0xfc, 0x0, 0x0,
    0x2f, 0xfb, 0x0, 0x0, 0x2f, 0xfb, 0x0, 0x0,
    0x2f, 0xfb, 0x0, 0x0, 0x1f, 0xfb, 0x0, 0x0,
    0xf, 0xfd, 0x0, 0x0, 0xc, 0xff, 0x0, 0x0,
    0x8, 0xff, 0x10, 0x0, 0x3, 0xff, 0x50, 0x0,
    0x0, 0xcf, 0xa0, 0x0, 0x0, 0x5f, 0xf1, 0x0,
    0x0, 0xc, 0xf9, 0x0, 0x0, 0x2, 0xff, 0x30,
    0x0, 0x0, 0x5f, 0xe1, 0x0, 0x0, 0x6, 0xfa,
    0x0, 0x0, 0x0, 0x5a, 0x0, 0x0, 0x0, 0x0,

    /* U+0029 ")" */
    0x50, 0x0, 0x0, 0xe, 0xa0, 0x0, 0x0, 0xaf,
    0xa0, 0x0, 0x0, 0xcf, 0x70, 0x0, 0x2, 0xff,
    0x30, 0x0, 0x9, 0xfc, 0x0, 0x0, 0x2f, 0xf5,
    0x0, 0x0, 0xcf, 0xb0, 0x0, 0x7, 0xff, 0x10,
    0x0, 0x4f, 0xf6, 0x0, 0x2, 0xff, 0x90, 0x0,
    0xf, 0xfc, 0x0, 0x0, 0xff, 0xe0, 0x0, 0xf,
    0xfe, 0x0, 0x0, 0xff, 0xe0, 0x0, 0xf, 0xfd,
    0x0, 0x1, 0xff, 0xb0, 0x0, 0x3f, 0xf8, 0x0,
    0x6, 0xff, 0x40, 0x0, 0x9f, 0xe0, 0x0, 0xe,
    0xf8, 0x0, 0x5, 0xff, 0x10, 0x0, 0xdf, 0x80,
    0x0, 0x7f, 0xd0, 0x0, 0x4f, 0xf2, 0x0, 0xe,
    0xf3, 0x0, 0x0, 0xc3, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0,

    /* U+002A "*" */
    0x0, 0x0, 0xc, 0xf4, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xf2, 0x0, 0x0, 0x1, 0x0, 0x9, 0xf0,
    0x0, 0x0, 0xe, 0xb4, 0x7, 0xf0, 0x18, 0xe6,
    0x3f, 0xff, 0xd5, 0x48, 0xff, 0xfa, 0x0, 0x36,
    0x90, 0x6, 0x84, 0x10, 0x0, 0x0, 0x6a, 0x4c,
    0x0, 0x0, 0x0, 0x5, 0xfa, 0x2f, 0xb0, 0x0,
    0x0, 0x4f, 0xf1, 0x9, 0xfa, 0x0, 0x0, 0x7f,
    0x70, 0x1, 0xed, 0x10, 0x0, 0x3, 0x0, 0x0,
    0x30, 0x0,

    /* U+002B "+" */
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xca, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xca, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xca,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xca, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xca, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xca, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xca, 0x0, 0x0, 0x0, 0x0,
    0x11, 0x11, 0x11, 0x11, 0xdb, 0x11, 0x11, 0x11,
    0x11, 0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf9, 0x34, 0x44, 0x44, 0x44, 0xdc, 0x44,
    0x44, 0x44, 0x42, 0x0, 0x0, 0x0, 0x0, 0xca,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xca, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xca, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xca, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xca, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xca, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xca, 0x0, 0x0,
    0x0, 0x0,

    /* U+002C "," */
    0x9, 0x99, 0x41, 0xff, 0xf8, 0x1f, 0xff, 0x81,
    0xff, 0xf8, 0x0, 0xaf, 0x70, 0xc, 0xf5, 0x1,
    0xff, 0x0, 0xcf, 0x50, 0x8, 0x20, 0x0,

    /* U+002D "-" */
    0xac, 0xcc, 0xcc, 0xcc, 0xcc, 0xcc, 0xc2, 0xdf,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xf2,

    /* U+002E "." */
    0x9, 0x99, 0x41, 0xff, 0xf8, 0x1f, 0xff, 0x81,
    0xff, 0xf8,

    /* U+002F "/" */
    0x0, 0x0, 0x0, 0x3, 0xf5, 0x0, 0x0, 0x0,
    0x8, 0xf0, 0x0, 0x0, 0x0, 0xc, 0xb0, 0x0,
    0x0, 0x0, 0x1f, 0x60, 0x0, 0x0, 0x0, 0x6f,
    0x10, 0x0, 0x0, 0x0, 0xbd, 0x0, 0x0, 0x0,
    0x0, 0xf8, 0x0, 0x0, 0x0, 0x5, 0xf3, 0x0,
    0x0, 0x0, 0x9, 0xe0, 0x0, 0x0, 0x0, 0xe,
    0x90, 0x0, 0x0, 0x0, 0x3f, 0x40, 0x0, 0x0,
    0x0, 0x8f, 0x0, 0x0, 0x0, 0x0, 0xdb, 0x0,
    0x0, 0x0, 0x2, 0xf6, 0x0, 0x0, 0x0, 0x6,
    0xf1, 0x0, 0x0, 0x0, 0xb, 0xc0, 0x0, 0x0,
    0x0, 0xf, 0x70, 0x0, 0x0, 0x0, 0x5f, 0x30,
    0x0, 0x0, 0x0, 0xae, 0x0, 0x0, 0x0, 0x0,
    0xe9, 0x0, 0x0, 0x0, 0x3, 0xf4, 0x0, 0x0,
    0x0, 0x8, 0xf0, 0x0, 0x0, 0x0, 0xd, 0xa0,
    0x0, 0x0, 0x0, 0x2f, 0x60, 0x0, 0x0, 0x0,
    0x7f, 0x10, 0x0, 0x0, 0x0, 0x56, 0x0, 0x0,
    0x0, 0x0,

    /* U+0030 "0" */
    0x0, 0x0, 0x0, 0x26, 0x76, 0x20, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xbf, 0xff, 0xff, 0xb2, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xfc, 0xac, 0xff, 0xf2,
    0x0, 0x0, 0x1, 0xef, 0xf4, 0x0, 0x4, 0xff,
    0xe1, 0x0, 0x0, 0x8f, 0xf5, 0x0, 0x0, 0x5,
    0xff, 0x80, 0x0, 0x1f, 0xfd, 0x0, 0x0, 0x0,
    0xd, 0xff, 0x0, 0x6, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x8f, 0xf6, 0x0, 0xaf, 0xf4, 0x0, 0x0,
    0x0, 0x4, 0xff, 0xa0, 0xd, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x2f, 0xfd, 0x0, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x1, 0xff, 0xf0, 0xf, 0xff, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xff, 0x1, 0xff, 0xf0,
    0x0, 0x0, 0x0, 0x0, 0xff, 0xf1, 0xf, 0xff,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0x0, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xf0, 0xd,
    0xff, 0x20, 0x0, 0x0, 0x0, 0x2f, 0xfd, 0x0,
    0xaf, 0xf4, 0x0, 0x0, 0x0, 0x4, 0xff, 0xa0,
    0x6, 0xff, 0x80, 0x0, 0x0, 0x0, 0x8f, 0xf5,
    0x0, 0x1f, 0xfd, 0x0, 0x0, 0x0, 0xd, 0xff,
    0x0, 0x0, 0x9f, 0xf5, 0x0, 0x0, 0x5, 0xff,
    0x80, 0x0, 0x1, 0xef, 0xe4, 0x0, 0x4, 0xef,
    0xe1, 0x0, 0x0, 0x3, 0xff, 0xfc, 0xac, 0xff,
    0xf2, 0x0, 0x0, 0x0, 0x2, 0xcf, 0xff, 0xff,
    0xc2, 0x0, 0x0, 0x0, 0x0, 0x0, 0x26, 0x76,
    0x20, 0x0, 0x0, 0x0,

    /* U+0031 "1" */
    0x0, 0x0, 0x23, 0x37, 0xef, 0xff, 0xfc, 0x9f,
    0xff, 0xff, 0xc0, 0x0, 0x2f, 0xfc, 0x0, 0x2,
    0xff, 0xc0, 0x0, 0x2f, 0xfc, 0x0, 0x2, 0xff,
    0xc0, 0x0, 0x2f, 0xfc, 0x0, 0x2, 0xff, 0xc0,
    0x0, 0x2f, 0xfc, 0x0, 0x2, 0xff, 0xc0, 0x0,
    0x2f, 0xfc, 0x0, 0x2, 0xff, 0xc0, 0x0, 0x2f,
    0xfc, 0x0, 0x2, 0xff, 0xc0, 0x0, 0x2f, 0xfc,
    0x0, 0x2, 0xff, 0xc0, 0x0, 0x2f, 0xfc, 0x0,
    0x2, 0xff, 0xc0, 0x0, 0x2f, 0xfc, 0x0, 0x2,
    0xff, 0xc0, 0x0, 0x2f, 0xfc,

    /* U+0032 "2" */
    0x0, 0x0, 0x46, 0x77, 0x51, 0x0, 0x0, 0x5,
    0xbf, 0xff, 0xff, 0xff, 0xa1, 0x0, 0xf, 0xff,
    0xeb, 0xad, 0xff, 0xfe, 0x20, 0xf, 0x93, 0x0,
    0x0, 0x2c, 0xff, 0xc0, 0x1, 0x0, 0x0, 0x0,
    0x1, 0xff, 0xf3, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xaf, 0xf6, 0x0, 0x0, 0x0, 0x0, 0x0, 0x9f,
    0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0x1, 0xff, 0xf1, 0x0,
    0x0, 0x0, 0x0, 0xa, 0xff, 0x90, 0x0, 0x0,
    0x0, 0x0, 0x6f, 0xfd, 0x0, 0x0, 0x0, 0x0,
    0x5, 0xff, 0xd1, 0x0, 0x0, 0x0, 0x0, 0x7f,
    0xfc, 0x10, 0x0, 0x0, 0x0, 0x9, 0xff, 0xa0,
    0x0, 0x0, 0x0, 0x0, 0xaf, 0xf8, 0x0, 0x0,
    0x0, 0x0, 0xa, 0xff, 0x70, 0x0, 0x0, 0x0,
    0x0, 0x8f, 0xf8, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x0, 0xe, 0xff,
    0x50, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xff, 0x88,
    0x88, 0x88, 0x88, 0x83, 0x8f, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xf6, 0x8f, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xf6,

    /* U+0033 "3" */
    0x0, 0x35, 0x67, 0x64, 0x10, 0x0, 0x7, 0xef,
    0xff, 0xff, 0xff, 0xa1, 0x0, 0xaf, 0xfc, 0xab,
    0xcf, 0xff, 0xe1, 0x7, 0x50, 0x0, 0x0, 0x2d,
    0xff, 0x90, 0x0, 0x0, 0x0, 0x0, 0x3f, 0xfd,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0xf, 0xfd, 0x0, 0x0, 0x0,
    0x0, 0x4, 0xff, 0x80, 0x0, 0x0, 0x0, 0x1,
    0xdf, 0xd0, 0x0, 0x0, 0x1, 0x38, 0xef, 0xb1,
    0x0, 0x0, 0xff, 0xff, 0xfe, 0x40, 0x0, 0x0,
    0xe, 0xef, 0xff, 0xff, 0x91, 0x0, 0x0, 0x0,
    0x1, 0x5b, 0xff, 0xe3, 0x0, 0x0, 0x0, 0x0,
    0x7, 0xff, 0xe0, 0x0, 0x0, 0x0, 0x0, 0xc,
    0xff, 0x60, 0x0, 0x0, 0x0, 0x0, 0x7f, 0xfa,
    0x0, 0x0, 0x0, 0x0, 0x6, 0xff, 0xa0, 0x0,
    0x0, 0x0, 0x0, 0x9f, 0xf8, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0x49, 0x40, 0x0, 0x0, 0x3d,
    0xff, 0xc0, 0xff, 0xfc, 0xaa, 0xdf, 0xff, 0xd1,
    0xd, 0xff, 0xff, 0xff, 0xff, 0x90, 0x0, 0x1,
    0x46, 0x77, 0x63, 0x0, 0x0, 0x0,

    /* U+0034 "4" */
    0x0, 0x0, 0x0, 0x0, 0x2, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xc, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x9f, 0xff, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x5, 0xff, 0xdf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x2f, 0xfa, 0x8f, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0xdf, 0xd0, 0x8f, 0xf0, 0x0,
    0x0, 0x0, 0xa, 0xff, 0x20, 0x8f, 0xf0, 0x0,
    0x0, 0x0, 0x6f, 0xf5, 0x0, 0x8f, 0xf0, 0x0,
    0x0, 0x3, 0xff, 0x90, 0x0, 0x8f, 0xf0, 0x0,
    0x0, 0xd, 0xfc, 0x0, 0x0, 0x8f, 0xf0, 0x0,
    0x0, 0xaf, 0xe1, 0x0, 0x0, 0x8f, 0xf0, 0x0,
    0x7, 0xff, 0x40, 0x0, 0x0, 0x8f, 0xf0, 0x0,
    0x3f, 0xfb, 0x55, 0x55, 0x55, 0xaf, 0xf5, 0x54,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf0, 0x0,

    /* U+0035 "5" */
    0xf, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xf0, 0xf, 0xfc, 0x77,
    0x77, 0x77, 0x77, 0x0, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x0, 0xf, 0xf8, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xff, 0x80, 0x0, 0x0, 0x0, 0x0, 0xf,
    0xf8, 0x0, 0x0, 0x0, 0x0, 0x0, 0xff, 0x92,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xff, 0xd9,
    0x30, 0x0, 0x0, 0xff, 0xff, 0xff, 0xff, 0xa1,
    0x0, 0x1, 0x0, 0x25, 0xaf, 0xff, 0xc0, 0x0,
    0x0, 0x0, 0x0, 0x3e, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x4f, 0xff, 0x0, 0x0, 0x0, 0x0,
    0x0, 0xdf, 0xf4, 0x0, 0x0, 0x0, 0x0, 0xb,
    0xff, 0x50, 0x0, 0x0, 0x0, 0x0, 0xbf, 0xf5,
    0x0, 0x0, 0x0, 0x0, 0xe, 0xff, 0x30, 0x0,
    0x0, 0x0, 0x6, 0xff, 0xe0, 0x23, 0x0, 0x0,
    0x6, 0xff, 0xf5, 0x5, 0xfe, 0xca, 0xae, 0xff,
    0xf7, 0x0, 0x5f, 0xff, 0xff, 0xff, 0xc4, 0x0,
    0x0, 0x35, 0x77, 0x65, 0x10, 0x0, 0x0,

    /* U+0036 "6" */
    0x0, 0x0, 0x0, 0x36, 0x77, 0x53, 0x0, 0x0,
    0x0, 0x7, 0xef, 0xff, 0xff, 0xff, 0x80, 0x0,
    0xb, 0xff, 0xfc, 0xab, 0xdf, 0xfb, 0x0, 0x9,
    0xff, 0xa1, 0x0, 0x0, 0x4, 0x60, 0x4, 0xff,
    0xa0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xcf, 0xf1,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x2f, 0xfb, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0x70, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xbf, 0xf4, 0x4, 0xbe,
    0xfe, 0xa3, 0x0, 0xd, 0xff, 0x3a, 0xff, 0xff,
    0xff, 0xf8, 0x0, 0xef, 0xfc, 0xfa, 0x31, 0x27,
    0xff, 0xf7, 0xf, 0xff, 0xf6, 0x0, 0x0, 0x3,
    0xff, 0xf1, 0xff, 0xfb, 0x0, 0x0, 0x0, 0x9,
    0xff, 0x7e, 0xff, 0x60, 0x0, 0x0, 0x0, 0x4f,
    0xfb, 0xdf, 0xf4, 0x0, 0x0, 0x0, 0x2, 0xff,
    0xca, 0xff, 0x50, 0x0, 0x0, 0x0, 0x1f, 0xfc,
    0x7f, 0xf8, 0x0, 0x0, 0x0, 0x2, 0xff, 0xa1,
    0xff, 0xd0, 0x0, 0x0, 0x0, 0x6f, 0xf6, 0xa,
    0xff, 0x60, 0x0, 0x0, 0xd, 0xfe, 0x0, 0x2f,
    0xff, 0x60, 0x0, 0xa, 0xff, 0x60, 0x0, 0x4f,
    0xff, 0xda, 0xbe, 0xff, 0x80, 0x0, 0x0, 0x3c,
    0xff, 0xff, 0xfe, 0x50, 0x0, 0x0, 0x0, 0x2,
    0x67, 0x63, 0x0, 0x0, 0x0,

    /* U+0037 "7" */
    0xcf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x2c,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf2, 0x8a,
    0xaa, 0xaa, 0xaa, 0xaa, 0xae, 0xff, 0x20, 0x0,
    0x0, 0x0, 0x0, 0x2, 0xff, 0x90, 0x0, 0x0,
    0x0, 0x0, 0x0, 0xcf, 0xd0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x6f, 0xf3, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1f, 0xf9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xb, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0, 0x5,
    0xff, 0x50, 0x0, 0x0, 0x0, 0x0, 0x1, 0xef,
    0xb0, 0x0, 0x0, 0x0, 0x0, 0x0, 0xaf, 0xf2,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x4f, 0xf9, 0x0,
    0x0, 0x0, 0x0, 0x0, 0xd, 0xff, 0x10, 0x0,
    0x0, 0x0, 0x0, 0x8, 0xff, 0x80, 0x0, 0x0,
    0x0, 0x0, 0x2, 0xff, 0xf1, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xaf, 0xf9, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x2f, 0xff, 0x20, 0x0, 0x0, 0x0, 0x0,
    0x8, 0xff, 0xc0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xef, 0xf7, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2f,
    0xff, 0x20, 0x0, 0x0, 0x0, 0x0, 0x5, 0xff,
    0xf0, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0038 "8" */
    0x0, 0x0, 0x1, 0x57, 0x76, 0x30, 0x0, 0x0,
    0x0, 0x1, 0xaf, 0xff, 0xff, 0xfd, 0x40, 0x0,
    0x0, 0x1d, 0xff, 0xeb, 0xbe, 0xff, 0xf4, 0x0,
    0x0, 0xbf, 0xf5, 0x0, 0x0, 0x6f, 0xfe, 0x0,
    0x1, 0xff, 0x90, 0x0, 0x0, 0x9, 0xff, 0x20,
    0x3, 0xff, 0x60, 0x0, 0x0, 0x6, 0xff, 0x20,
    0x3, 0xff, 0x90, 0x0, 0x0, 0x9, 0xfe, 0x0,
    0x0, 0xef, 0xf3, 0x0, 0x0, 0x1e, 0xf7, 0x0,
    0x0, 0x7f, 0xff, 0x60, 0x0, 0xbf, 0xb0, 0x0,
    0x0, 0x8, 0xff, 0xfc, 0x4c, 0xfa, 0x0, 0x0,
    0x0, 0x0, 0x7f, 0xff, 0xff, 0x90, 0x0, 0x0,
    0x0, 0x7, 0xff, 0xaf, 0xff, 0xfb, 0x10, 0x0,
    0x0, 0x9f, 0xf4, 0x2, 0xbf, 0xff, 0xe3, 0x0,
    0x6, 0xff, 0x50, 0x0, 0x5, 0xef, 0xfe, 0x10,
    0xe, 0xfd, 0x0, 0x0, 0x0, 0x1d, 0xff, 0xa0,
    0x3f, 0xf9, 0x0, 0x0, 0x0, 0x3, 0xff, 0xf0,
    0x6f, 0xf8, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf1,
    0x5f, 0xfa, 0x0, 0x0, 0x0, 0x0, 0xff, 0xf0,
    0x2f, 0xff, 0x20, 0x0, 0x0, 0x5, 0xff, 0xb0,
    0xa, 0xff, 0xd3, 0x0, 0x0, 0x5f, 0xff, 0x30,
    0x1, 0xcf, 0xff, 0xca, 0xbe, 0xff, 0xf6, 0x0,
    0x0, 0x8, 0xef, 0xff, 0xff, 0xfc, 0x30, 0x0,
    0x0, 0x0, 0x3, 0x67, 0x75, 0x20, 0x0, 0x0,

    /* U+0039 "9" */
    0x0, 0x0, 0x3, 0x67, 0x62, 0x0, 0x0, 0x0,
    0x0, 0x6, 0xef, 0xff, 0xff, 0xc3, 0x0, 0x0,
    0x0, 0x9f, 0xfe, 0xba, 0xdf, 0xff, 0x40, 0x0,
    0x7, 0xff, 0xa0, 0x0, 0x4, 0xef, 0xf2, 0x0,
    0x1f, 0xfc, 0x0, 0x0, 0x0, 0x4f, 0xfb, 0x0,
    0x6f, 0xf6, 0x0, 0x0, 0x0, 0xb, 0xff, 0x20,
    0x9f, 0xf3, 0x0, 0x0, 0x0, 0x6, 0xff, 0x70,
    0xbf, 0xf3, 0x0, 0x0, 0x0, 0x4, 0xff, 0xb0,
    0xaf, 0xf4, 0x0, 0x0, 0x0, 0x4, 0xff, 0xd0,
    0x6f, 0xf9, 0x0, 0x0, 0x0, 0x8, 0xff, 0xf0,
    0x1f, 0xff, 0x30, 0x0, 0x0, 0x3f, 0xff, 0xf0,
    0x6, 0xff, 0xe6, 0x10, 0x27, 0xfd, 0xff, 0xf0,
    0x0, 0x6f, 0xff, 0xff, 0xff, 0xb4, 0xff, 0xd0,
    0x0, 0x2, 0xae, 0xff, 0xc5, 0x4, 0xff, 0xc0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x7, 0xff, 0x80,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xa, 0xff, 0x40,
    0x0, 0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x6f, 0xf9, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x2, 0xef, 0xf1, 0x0,
    0x5, 0x40, 0x0, 0x0, 0x4e, 0xff, 0x60, 0x0,
    0x9, 0xff, 0xca, 0xad, 0xff, 0xf7, 0x0, 0x0,
    0x8, 0xff, 0xff, 0xff, 0xfc, 0x40, 0x0, 0x0,
    0x0, 0x14, 0x67, 0x75, 0x20, 0x0, 0x0, 0x0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 152, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 152, .box_w = 4, .box_h = 21, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 42, .adv_w = 179, .box_w = 9, .box_h = 8, .ofs_x = 1, .ofs_y = 15},
    {.bitmap_index = 78, .adv_w = 304, .box_w = 19, .box_h = 21, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 304, .box_w = 13, .box_h = 25, .ofs_x = 3, .ofs_y = -2},
    {.bitmap_index = 441, .adv_w = 321, .box_w = 20, .box_h = 23, .ofs_x = 0, .ofs_y = -1},
    {.bitmap_index = 671, .adv_w = 335, .box_w = 19, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 890, .adv_w = 110, .box_w = 5, .box_h = 8, .ofs_x = 1, .ofs_y = 15},
    {.bitmap_index = 910, .adv_w = 156, .box_w = 8, .box_h = 28, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1022, .adv_w = 156, .box_w = 7, .box_h = 28, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 1120, .adv_w = 231, .box_w = 12, .box_h = 11, .ofs_x = 1, .ofs_y = 10},
    {.bitmap_index = 1186, .adv_w = 382, .box_w = 18, .box_h = 18, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1348, .adv_w = 152, .box_w = 5, .box_h = 9, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1371, .adv_w = 278, .box_w = 14, .box_h = 2, .ofs_x = 2, .ofs_y = 8},
    {.bitmap_index = 1385, .adv_w = 152, .box_w = 5, .box_h = 4, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1395, .adv_w = 252, .box_w = 10, .box_h = 26, .ofs_x = 3, .ofs_y = -5},
    {.bitmap_index = 1525, .adv_w = 304, .box_w = 17, .box_h = 23, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1721, .adv_w = 304, .box_w = 7, .box_h = 22, .ofs_x = 4, .ofs_y = 0},
    {.bitmap_index = 1798, .adv_w = 304, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1952, .adv_w = 304, .box_w = 13, .box_h = 23, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 2102, .adv_w = 304, .box_w = 16, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2270, .adv_w = 304, .box_w = 13, .box_h = 22, .ofs_x = 3, .ofs_y = -1},
    {.bitmap_index = 2413, .adv_w = 304, .box_w = 15, .box_h = 23, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2586, .adv_w = 304, .box_w = 15, .box_h = 21, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2744, .adv_w = 304, .box_w = 16, .box_h = 23, .ofs_x = 2, .ofs_y = -1},
    {.bitmap_index = 2928, .adv_w = 304, .box_w = 16, .box_h = 23, .ofs_x = 2, .ofs_y = -1}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 26, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LV_VERSION_CHECK(8, 0, 0)
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = NULL,
    .kern_scale = 0,
    .cmap_num = 1,
    .bpp = 4,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LV_VERSION_CHECK(8, 0, 0)
    .cache = &cache
#endif
};


/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LV_VERSION_CHECK(8, 0, 0)
const lv_font_t ui_font_Font1 = {
#else
lv_font_t ui_font_Font1 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 28,          /*The maximum line height required by the font*/
    .base_line = 5,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if UI_FONT_FONT1*/
