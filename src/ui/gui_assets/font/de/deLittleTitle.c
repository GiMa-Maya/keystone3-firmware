/*******************************************************************************
 * Size: 28 px
 * Bpp: 1
 * Opts: --bpp 1 --size 28 --no-compress --font NotoSans-Regular.ttf --symbols "!%(),-./0123456789:?ABCDEFGHIKLMNOPQRSTUVWXZabcdefghiklmnoprstuvwxyzÄÖÜäöü  --format lvgl -o ../gui_assets/font/de/deLittleTitle.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef DELITTLETITLE
#define DELITTLETITLE 1
#endif

#if DELITTLETITLE

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x1f, 0xf0,

    /* U+0022 "\"" */
    0xc7, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6,

    /* U+0025 "%" */
    0x3c, 0x3, 0x83, 0xf0, 0x18, 0x39, 0x81, 0xc1,
    0x86, 0xc, 0xc, 0x30, 0xe0, 0x61, 0x8e, 0x3,
    0xc, 0x60, 0x18, 0x67, 0x0, 0xc3, 0x33, 0xe3,
    0x33, 0xbf, 0x9f, 0x99, 0x8c, 0x79, 0x98, 0x30,
    0xc, 0xc1, 0x80, 0xc6, 0xc, 0x6, 0x30, 0x60,
    0x61, 0x83, 0x7, 0xc, 0x18, 0x30, 0x31, 0x83,
    0x1, 0xfc, 0x18, 0x7, 0xc0,

    /* U+0028 "(" */
    0xe, 0x38, 0x61, 0xc3, 0xe, 0x1c, 0x38, 0xe1,
    0xc3, 0x87, 0xe, 0x1c, 0x38, 0x70, 0xf0, 0xe1,
    0xc1, 0x83, 0x83, 0x7, 0x7,

    /* U+0029 ")" */
    0xe0, 0xe0, 0xc1, 0xc1, 0x83, 0x87, 0xe, 0xe,
    0x1c, 0x38, 0x70, 0xe1, 0xc3, 0x87, 0x1c, 0x38,
    0x70, 0xc3, 0x86, 0x1c, 0x70,

    /* U+002C "," */
    0x77, 0x76, 0x6c,

    /* U+002D "-" */
    0xff, 0xfc,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x0, 0xc0, 0x70, 0x18, 0xe, 0x3, 0x0, 0xc0,
    0x70, 0x18, 0x6, 0x3, 0x80, 0xc0, 0x70, 0x18,
    0x6, 0x3, 0x80, 0xc0, 0x30, 0x1c, 0x6, 0x3,
    0x80,

    /* U+0030 "0" */
    0xf, 0xc0, 0x7f, 0x83, 0x87, 0x1c, 0xe, 0x70,
    0x3b, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xdc, 0xe, 0x70, 0x38, 0xe1, 0xc1,
    0xfe, 0x3, 0xf0,

    /* U+0031 "1" */
    0x7, 0x1f, 0x3f, 0x77, 0xe7, 0x47, 0x7, 0x7,
    0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7, 0x7,
    0x7, 0x7, 0x7, 0x7,

    /* U+0032 "2" */
    0xf, 0xc3, 0xff, 0x3c, 0x3c, 0x80, 0x70, 0x3,
    0x80, 0x1c, 0x0, 0xe0, 0x7, 0x0, 0x70, 0x7,
    0x80, 0x38, 0x3, 0x80, 0x38, 0x3, 0x80, 0x38,
    0x3, 0x80, 0x38, 0x3, 0x80, 0x3f, 0xff, 0xff,
    0xf0,

    /* U+0033 "3" */
    0x1f, 0xc3, 0xff, 0xbc, 0x1c, 0x80, 0x70, 0x3,
    0x80, 0x1c, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xfe,
    0x7, 0xf8, 0x1, 0xe0, 0x7, 0x80, 0x1c, 0x0,
    0xe0, 0x7, 0x0, 0x7e, 0x7, 0xbf, 0xf8, 0xff,
    0x0,

    /* U+0034 "4" */
    0x0, 0xf0, 0x1, 0xe0, 0x7, 0xc0, 0x1b, 0x80,
    0x37, 0x0, 0xce, 0x3, 0x9c, 0x6, 0x38, 0x18,
    0x70, 0x70, 0xe0, 0xc1, 0xc3, 0x3, 0x8e, 0x7,
    0x1f, 0xff, 0xff, 0xff, 0x80, 0x38, 0x0, 0x70,
    0x0, 0xe0, 0x1, 0xc0, 0x3, 0x80,

    /* U+0035 "5" */
    0x7f, 0xe3, 0xff, 0x18, 0x0, 0xc0, 0x6, 0x0,
    0x30, 0x1, 0x80, 0xc, 0x0, 0x7f, 0x87, 0xff,
    0x0, 0x3c, 0x0, 0xf0, 0x3, 0x80, 0x1c, 0x0,
    0xe0, 0x7, 0x0, 0x76, 0x7, 0xbf, 0xf8, 0xff,
    0x0,

    /* U+0036 "6" */
    0x3, 0xe0, 0x7f, 0xf, 0x0, 0x70, 0x7, 0x0,
    0x38, 0x1, 0x80, 0x1c, 0xf8, 0xef, 0xe7, 0xc7,
    0xbc, 0x1f, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xee, 0x7, 0x70, 0x71, 0xc7, 0x87, 0xf8, 0x1f,
    0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xc0, 0xe, 0x0, 0x60, 0x7,
    0x0, 0x30, 0x3, 0x80, 0x1c, 0x0, 0xc0, 0xe,
    0x0, 0x60, 0x7, 0x0, 0x30, 0x3, 0x80, 0x1c,
    0x1, 0xc0, 0xe, 0x0, 0x60, 0x7, 0x0, 0x30,
    0x0,

    /* U+0038 "8" */
    0x1f, 0xc1, 0xff, 0xc7, 0x7, 0x38, 0xe, 0xe0,
    0x3b, 0x80, 0xef, 0x7, 0x9e, 0x3c, 0x3f, 0xc0,
    0x3e, 0x3, 0xfe, 0x1e, 0x3c, 0x70, 0x3b, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xf0, 0x3d, 0xe1, 0xe3,
    0xff, 0x7, 0xf0,

    /* U+0039 "9" */
    0xf, 0x81, 0xfe, 0x1e, 0x38, 0xe0, 0xee, 0x3,
    0x70, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x7b, 0x87,
    0xdf, 0xee, 0x3e, 0x70, 0x3, 0x80, 0x18, 0x1,
    0xc0, 0xe, 0x0, 0xe0, 0xf, 0xf, 0xe0, 0x7c,
    0x0,

    /* U+003A ":" */
    0xff, 0x80, 0x0, 0x0, 0xf, 0xf8,

    /* U+003F "?" */
    0x3f, 0x1f, 0xf9, 0x7, 0x0, 0x70, 0xe, 0x1,
    0xc0, 0x38, 0xe, 0x3, 0xc0, 0xf0, 0x1c, 0x7,
    0x0, 0xc0, 0x18, 0x3, 0x0, 0x0, 0x0, 0x3,
    0x80, 0x70, 0xe, 0x0,

    /* U+0041 "A" */
    0x0, 0xc0, 0x0, 0x78, 0x0, 0x1e, 0x0, 0xf,
    0x80, 0x3, 0x70, 0x0, 0xcc, 0x0, 0x73, 0x80,
    0x18, 0xe0, 0xe, 0x18, 0x3, 0x87, 0x0, 0xc0,
    0xc0, 0x70, 0x38, 0x1f, 0xfe, 0x7, 0xff, 0x83,
    0x80, 0x70, 0xc0, 0x1c, 0x70, 0x3, 0x1c, 0x0,
    0xe6, 0x0, 0x1b, 0x80, 0x7,

    /* U+0042 "B" */
    0xff, 0xc3, 0xff, 0xce, 0xf, 0x38, 0xe, 0xe0,
    0x3b, 0x80, 0xee, 0x3, 0xb8, 0xc, 0xe0, 0x73,
    0xff, 0xf, 0xfe, 0x38, 0x1e, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x3f, 0x81, 0xef,
    0xff, 0x3f, 0xf0,

    /* U+0043 "C" */
    0x3, 0xfc, 0x1f, 0xfc, 0x78, 0x19, 0xc0, 0x7,
    0x80, 0xe, 0x0, 0x3c, 0x0, 0x70, 0x0, 0xe0,
    0x1, 0xc0, 0x3, 0x80, 0x7, 0x0, 0xe, 0x0,
    0x1c, 0x0, 0x1c, 0x0, 0x38, 0x0, 0x38, 0x0,
    0x3c, 0xc, 0x3f, 0xf8, 0x1f, 0xe0,

    /* U+0044 "D" */
    0xff, 0xc0, 0xff, 0xf0, 0xe0, 0x78, 0xe0, 0x1c,
    0xe0, 0xe, 0xe0, 0xe, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0xf, 0xe0, 0xe, 0xe0, 0x1e,
    0xe0, 0x1c, 0xe0, 0x78, 0xff, 0xf0, 0xff, 0x80,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0x80, 0x70, 0xe, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1f, 0xff, 0xff, 0xf0,
    0xe, 0x1, 0xc0, 0x38, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0xff, 0xff, 0xf0,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0x80, 0x70, 0xe, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1c, 0x3, 0xff, 0xff,
    0xfe, 0x1, 0xc0, 0x38, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0x80, 0x70, 0x0,

    /* U+0047 "G" */
    0x1, 0xfe, 0x7, 0xff, 0x87, 0xc0, 0xc7, 0x80,
    0x7, 0x80, 0x3, 0x80, 0x3, 0xc0, 0x1, 0xc0,
    0x0, 0xe0, 0x0, 0x70, 0x1f, 0xf8, 0xf, 0xfc,
    0x0, 0x7e, 0x0, 0x3f, 0x80, 0x1d, 0xc0, 0xe,
    0xe0, 0x7, 0x38, 0x3, 0x8f, 0x1, 0xc3, 0xff,
    0xe0, 0x7f, 0xc0,

    /* U+0048 "H" */
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xff, 0xff, 0xff, 0xff, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,

    /* U+0049 "I" */
    0xff, 0xfc, 0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38,
    0x70, 0xe1, 0xc3, 0x87, 0xe, 0x1c, 0x38, 0x73,
    0xff, 0xf0,

    /* U+004B "K" */
    0xe0, 0x1d, 0xc0, 0x73, 0x80, 0xe7, 0x3, 0x8e,
    0xe, 0x1c, 0x38, 0x38, 0xe0, 0x73, 0x80, 0xee,
    0x1, 0xfc, 0x3, 0xfc, 0x7, 0x9c, 0xe, 0x1c,
    0x1c, 0x38, 0x38, 0x38, 0x70, 0x38, 0xe0, 0x39,
    0xc0, 0x73, 0x80, 0x77, 0x0, 0x70,

    /* U+004C "L" */
    0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xe,
    0x0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0,
    0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0,
    0xe0, 0xe, 0x0, 0xff, 0xff, 0xff,

    /* U+004D "M" */
    0xf0, 0x0, 0xff, 0x0, 0x1f, 0xf0, 0x1, 0xff,
    0x80, 0x3f, 0xd8, 0x3, 0x7d, 0x80, 0x37, 0xdc,
    0x6, 0x7c, 0xc0, 0x67, 0xce, 0x6, 0x7c, 0x60,
    0xc7, 0xc6, 0xc, 0x7c, 0x71, 0xc7, 0xc3, 0x18,
    0x7c, 0x31, 0x87, 0xc3, 0xb0, 0x7c, 0x1b, 0x7,
    0xc1, 0xf0, 0x7c, 0xe, 0x7, 0xc0, 0xe0, 0x7c,
    0xe, 0x7,

    /* U+004E "N" */
    0xe0, 0x7, 0xf0, 0x7, 0xf0, 0x7, 0xf8, 0x7,
    0xd8, 0x7, 0xdc, 0x7, 0xce, 0x7, 0xc6, 0x7,
    0xc7, 0x7, 0xc3, 0x87, 0xc3, 0x87, 0xc1, 0xc7,
    0xc0, 0xe7, 0xc0, 0xe7, 0xc0, 0x77, 0xc0, 0x37,
    0xc0, 0x3f, 0xc0, 0x1f, 0xc0, 0x1f, 0xc0, 0xf,

    /* U+004F "O" */
    0x3, 0xf8, 0x1, 0xff, 0xc0, 0x78, 0x3c, 0x1c,
    0x1, 0xc7, 0x0, 0x1c, 0xe0, 0x3, 0xb8, 0x0,
    0x3f, 0x0, 0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f,
    0x80, 0x3, 0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0,
    0x1, 0xdc, 0x0, 0x73, 0x80, 0xe, 0x38, 0x3,
    0x83, 0xc1, 0xe0, 0x3f, 0xf8, 0x1, 0xfc, 0x0,

    /* U+0050 "P" */
    0xff, 0x87, 0xff, 0x38, 0x3d, 0xc0, 0xfe, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x77, 0x7,
    0xbf, 0xf9, 0xff, 0xe, 0x0, 0x70, 0x3, 0x80,
    0x1c, 0x0, 0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0,
    0x0,

    /* U+0051 "Q" */
    0x3, 0xf8, 0x1, 0xff, 0xc0, 0x78, 0x3c, 0x1c,
    0x1, 0xc7, 0x0, 0x1c, 0xe0, 0x3, 0xb8, 0x0,
    0x3f, 0x0, 0x7, 0xe0, 0x0, 0xfc, 0x0, 0x1f,
    0x80, 0x3, 0xf0, 0x0, 0x7e, 0x0, 0xf, 0xc0,
    0x1, 0xdc, 0x0, 0x73, 0x80, 0xe, 0x38, 0x3,
    0x83, 0xc1, 0xe0, 0x3f, 0xf8, 0x1, 0xfc, 0x0,
    0x1, 0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0,
    0x3c, 0x0, 0x3, 0xc0,

    /* U+0052 "R" */
    0xff, 0x83, 0xff, 0x8e, 0xf, 0x38, 0x1e, 0xe0,
    0x3b, 0x80, 0xee, 0x3, 0xb8, 0xe, 0xe0, 0x73,
    0x83, 0xcf, 0xfc, 0x3f, 0xe0, 0xe1, 0x83, 0x87,
    0xe, 0xe, 0x38, 0x18, 0xe0, 0x73, 0x80, 0xee,
    0x3, 0xb8, 0x7,

    /* U+0053 "S" */
    0x7, 0xf0, 0x7f, 0xe3, 0x81, 0x9c, 0x0, 0x70,
    0x1, 0xc0, 0x7, 0x0, 0xe, 0x0, 0x3f, 0x0,
    0x7f, 0x0, 0x7f, 0x0, 0x3e, 0x0, 0x3c, 0x0,
    0x70, 0x1, 0xc0, 0x7, 0x0, 0x3f, 0x81, 0xef,
    0xff, 0xf, 0xf0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xfc, 0xe, 0x0, 0x1c, 0x0,
    0x38, 0x0, 0x70, 0x0, 0xe0, 0x1, 0xc0, 0x3,
    0x80, 0x7, 0x0, 0xe, 0x0, 0x1c, 0x0, 0x38,
    0x0, 0x70, 0x0, 0xe0, 0x1, 0xc0, 0x3, 0x80,
    0x7, 0x0, 0xe, 0x0, 0x1c, 0x0,

    /* U+0055 "U" */
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0xf,
    0x70, 0xe, 0x38, 0x3c, 0x1f, 0xf8, 0xf, 0xe0,

    /* U+0056 "V" */
    0xe0, 0x3, 0xb0, 0x1, 0x9c, 0x1, 0xce, 0x0,
    0xe3, 0x0, 0x61, 0xc0, 0x70, 0xe0, 0x30, 0x30,
    0x38, 0x1c, 0x1c, 0xe, 0xc, 0x3, 0xe, 0x1,
    0xc7, 0x0, 0xe3, 0x0, 0x33, 0x80, 0x1d, 0xc0,
    0x6, 0xc0, 0x3, 0x60, 0x1, 0xf0, 0x0, 0x70,
    0x0, 0x38, 0x0,

    /* U+0057 "W" */
    0xe0, 0x1c, 0x1, 0xd8, 0x7, 0x80, 0x67, 0x1,
    0xe0, 0x39, 0xc0, 0x78, 0xe, 0x30, 0x3f, 0x3,
    0xc, 0xd, 0xc0, 0xc3, 0x83, 0x30, 0x70, 0xe1,
    0xcc, 0x1c, 0x18, 0x73, 0x86, 0x6, 0x18, 0x61,
    0x81, 0xc6, 0x18, 0xe0, 0x73, 0x87, 0x38, 0xc,
    0xc0, 0xcc, 0x3, 0x30, 0x33, 0x0, 0xfc, 0xf,
    0xc0, 0x3f, 0x3, 0xf0, 0x7, 0x80, 0x78, 0x1,
    0xe0, 0x1e, 0x0, 0x78, 0x7, 0x80, 0x1c, 0x0,
    0xc0,

    /* U+0058 "X" */
    0x70, 0x6, 0x70, 0xe, 0x38, 0xc, 0x1c, 0x1c,
    0x1c, 0x38, 0xe, 0x30, 0x6, 0x70, 0x7, 0xe0,
    0x3, 0xc0, 0x1, 0xc0, 0x3, 0xc0, 0x3, 0xe0,
    0x6, 0x70, 0xe, 0x70, 0xc, 0x38, 0x1c, 0x18,
    0x38, 0x1c, 0x30, 0xe, 0x70, 0x6, 0xe0, 0x7,

    /* U+005A "Z" */
    0xff, 0xfb, 0xff, 0xe0, 0x3, 0x80, 0x1c, 0x0,
    0xe0, 0x3, 0x80, 0x1c, 0x0, 0x60, 0x3, 0x80,
    0x1c, 0x0, 0x60, 0x3, 0x80, 0xc, 0x0, 0x70,
    0x3, 0x80, 0xc, 0x0, 0x70, 0x3, 0x80, 0xf,
    0xff, 0xff, 0xff,

    /* U+0061 "a" */
    0xf, 0xc3, 0xfe, 0x10, 0xf0, 0x7, 0x0, 0x70,
    0x7, 0x1f, 0xf7, 0xff, 0xf0, 0x7e, 0x7, 0xe0,
    0x7e, 0xf, 0xf1, 0xf7, 0xf7, 0x3e, 0x30,

    /* U+0062 "b" */
    0xe0, 0x3, 0x80, 0xe, 0x0, 0x38, 0x0, 0xe0,
    0x3, 0x80, 0xe, 0x7c, 0x3b, 0xfc, 0xf8, 0x7b,
    0xc0, 0xee, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0xc0, 0xef,
    0x87, 0xbb, 0xfc, 0xc7, 0xc0,

    /* U+0063 "c" */
    0xf, 0xc7, 0xf9, 0xe1, 0x38, 0xe, 0x1, 0xc0,
    0x38, 0x7, 0x0, 0xe0, 0x1c, 0x3, 0x80, 0x38,
    0x7, 0x82, 0x7f, 0xc3, 0xf0,

    /* U+0064 "d" */
    0x0, 0x1c, 0x0, 0x70, 0x1, 0xc0, 0x7, 0x0,
    0x1c, 0x0, 0x70, 0xf9, 0xcf, 0xf7, 0x78, 0x7d,
    0xc0, 0xfe, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1d, 0xc0, 0xf7,
    0x87, 0xcf, 0xf7, 0xf, 0x9c,

    /* U+0065 "e" */
    0xf, 0x81, 0xff, 0x1e, 0x3c, 0xe0, 0xee, 0x3,
    0xf0, 0x1f, 0xff, 0xff, 0xff, 0xe0, 0x7, 0x0,
    0x38, 0x0, 0xe0, 0x7, 0x81, 0x1f, 0xf8, 0x3f,
    0x80,

    /* U+0066 "f" */
    0x7, 0xe3, 0xf8, 0xf0, 0x1c, 0x3, 0x80, 0x70,
    0x1f, 0xe7, 0xfc, 0x38, 0x7, 0x0, 0xe0, 0x1c,
    0x3, 0x80, 0x70, 0xe, 0x1, 0xc0, 0x38, 0x7,
    0x0, 0xe0, 0x1c, 0x3, 0x80,

    /* U+0067 "g" */
    0xf, 0x9c, 0xff, 0x77, 0x87, 0xdc, 0xf, 0xe0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xdc, 0xf, 0x78, 0x7c, 0xff,
    0x70, 0xf9, 0xc0, 0x7, 0x0, 0x1c, 0x0, 0x70,
    0x3, 0x98, 0x1e, 0x7f, 0xf0, 0x7f, 0x0,

    /* U+0068 "h" */
    0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0x70, 0x3, 0x9f, 0x1d, 0xfe, 0xf8, 0x77, 0x81,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xfc, 0x7, 0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0,
    0x7e, 0x3, 0x80,

    /* U+0069 "i" */
    0xff, 0x80, 0x3f, 0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+006B "k" */
    0xe0, 0x7, 0x0, 0x38, 0x1, 0xc0, 0xe, 0x0,
    0x70, 0x3, 0x81, 0xdc, 0x1c, 0xe1, 0xc7, 0x1c,
    0x39, 0xc1, 0xcc, 0xe, 0xe0, 0x7f, 0x3, 0xdc,
    0x1c, 0x70, 0xe1, 0xc7, 0xe, 0x38, 0x39, 0xc0,
    0xee, 0x3, 0x80,

    /* U+006C "l" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe,

    /* U+006D "m" */
    0xe7, 0xc3, 0xe7, 0x7f, 0x7f, 0xbe, 0x3f, 0x1f,
    0xe0, 0xf0, 0x7e, 0x7, 0x3, 0xf0, 0x38, 0x1f,
    0x81, 0xc0, 0xfc, 0xe, 0x7, 0xe0, 0x70, 0x3f,
    0x3, 0x81, 0xf8, 0x1c, 0xf, 0xc0, 0xe0, 0x7e,
    0x7, 0x3, 0xf0, 0x38, 0x1f, 0x81, 0xc0, 0xe0,

    /* U+006E "n" */
    0xe7, 0xc7, 0x7f, 0xbe, 0x1d, 0xe0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xe0,

    /* U+006F "o" */
    0xf, 0xc0, 0xff, 0xc7, 0x87, 0x9c, 0xe, 0xe0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x1, 0xdc, 0xe, 0x78, 0x78, 0xff,
    0xc0, 0xfc, 0x0,

    /* U+0070 "p" */
    0xe7, 0xc3, 0xbf, 0xcf, 0x87, 0xbc, 0xe, 0xe0,
    0x1f, 0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f,
    0x80, 0x7e, 0x3, 0xfc, 0xe, 0xf8, 0x7b, 0xbf,
    0xce, 0x7c, 0x38, 0x0, 0xe0, 0x3, 0x80, 0xe,
    0x0, 0x38, 0x0, 0xe0, 0x3, 0x80, 0x0,

    /* U+0072 "r" */
    0xe7, 0xf7, 0xff, 0x1e, 0xf, 0x7, 0x3, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe, 0x7, 0x3,
    0x80,

    /* U+0073 "s" */
    0x1f, 0x8f, 0xfb, 0xc3, 0x70, 0xe, 0x1, 0xe0,
    0x1f, 0x80, 0xfc, 0x7, 0xc0, 0x3c, 0x3, 0x80,
    0x7c, 0x1f, 0xff, 0x9f, 0xc0,

    /* U+0074 "t" */
    0x18, 0xc, 0x6, 0x7, 0x7, 0xff, 0xfc, 0xe0,
    0x70, 0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0,
    0xe0, 0x70, 0x3c, 0xf, 0xc3, 0xe0,

    /* U+0075 "u" */
    0xe0, 0x3f, 0x1, 0xf8, 0xf, 0xc0, 0x7e, 0x3,
    0xf0, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0xff, 0xf, 0xbf, 0xdc, 0xfc,
    0xe0,

    /* U+0076 "v" */
    0xe0, 0x1d, 0x80, 0x77, 0x1, 0x9c, 0xe, 0x30,
    0x38, 0xe0, 0xc3, 0x87, 0x6, 0x18, 0x1c, 0x60,
    0x33, 0x80, 0xcc, 0x3, 0xf0, 0x7, 0x80, 0x1e,
    0x0, 0x78, 0x0,

    /* U+0077 "w" */
    0xe0, 0x38, 0x1d, 0x81, 0xe0, 0x67, 0x7, 0x81,
    0x9c, 0x1e, 0xe, 0x30, 0xfc, 0x30, 0xc3, 0x30,
    0xc3, 0x8c, 0xc7, 0xe, 0x73, 0x9c, 0x19, 0x86,
    0x60, 0x66, 0x19, 0x81, 0xf8, 0x7e, 0x7, 0xc0,
    0xf8, 0xf, 0x3, 0xc0, 0x3c, 0xf, 0x0, 0xe0,
    0x3c, 0x0,

    /* U+0078 "x" */
    0x70, 0x1c, 0xe0, 0xe1, 0x83, 0x7, 0x1c, 0xe,
    0xe0, 0x1b, 0x0, 0x78, 0x0, 0xe0, 0x7, 0xc0,
    0x3b, 0x0, 0xce, 0x7, 0x1c, 0x38, 0x38, 0xc0,
    0xe7, 0x1, 0xc0,

    /* U+0079 "y" */
    0xe0, 0x1f, 0x80, 0x66, 0x3, 0x9c, 0xe, 0x70,
    0x30, 0xc1, 0xc3, 0x87, 0x6, 0x18, 0x1c, 0xe0,
    0x73, 0x0, 0xcc, 0x3, 0xf0, 0x7, 0x80, 0x1e,
    0x0, 0x78, 0x0, 0xc0, 0x7, 0x0, 0x18, 0x0,
    0xe0, 0x7, 0x0, 0xfc, 0x3, 0xc0, 0x0,

    /* U+007A "z" */
    0x7f, 0xef, 0xfc, 0x3, 0x80, 0xe0, 0x38, 0x7,
    0x1, 0xc0, 0x70, 0xc, 0x3, 0x80, 0xe0, 0x38,
    0x7, 0x1, 0xff, 0xff, 0xf8,

    /* U+00C4 "Ä" */
    0x7, 0x38, 0x1, 0xce, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x30, 0x0, 0xc, 0x0,
    0x7, 0x80, 0x1, 0xe0, 0x0, 0xfc, 0x0, 0x33,
    0x0, 0x1c, 0xe0, 0x7, 0x18, 0x1, 0x86, 0x0,
    0xe1, 0xc0, 0x30, 0x30, 0x1c, 0xe, 0x7, 0xff,
    0x81, 0xff, 0xe0, 0xe0, 0x1c, 0x30, 0x3, 0x1c,
    0x0, 0xe7, 0x0, 0x39, 0x80, 0x6, 0xe0, 0x1,
    0xc0,

    /* U+00D6 "Ö" */
    0x7, 0x38, 0x0, 0xe7, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x7, 0xf0, 0x3, 0xff,
    0x80, 0xf0, 0x78, 0x38, 0x3, 0x8e, 0x0, 0x39,
    0xc0, 0x7, 0x70, 0x0, 0x7e, 0x0, 0xf, 0xc0,
    0x1, 0xf8, 0x0, 0x3f, 0x0, 0x7, 0xe0, 0x0,
    0xfc, 0x0, 0x1f, 0x80, 0x3, 0xb8, 0x0, 0xe7,
    0x0, 0x1c, 0x70, 0x7, 0x7, 0x83, 0xc0, 0x7f,
    0xf0, 0x3, 0xf8, 0x0,

    /* U+00DC "Ü" */
    0xe, 0x70, 0xe, 0x70, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7, 0xe0, 0x7,
    0xe0, 0xf, 0x70, 0xe, 0x38, 0x3c, 0x1f, 0xf8,
    0xf, 0xe0,

    /* U+00E4 "ä" */
    0x18, 0xe1, 0x8e, 0x0, 0x0, 0x0, 0x0, 0x0,
    0xfc, 0x3f, 0xe1, 0xf, 0x0, 0x70, 0x7, 0x0,
    0x71, 0xff, 0x7f, 0xff, 0x7, 0xe0, 0x7e, 0x7,
    0xe0, 0xff, 0x1f, 0x7f, 0xb3, 0xe3,

    /* U+00F6 "ö" */
    0x1c, 0xe0, 0x73, 0x80, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x3f, 0x3, 0xff, 0x1e, 0x1e, 0x70, 0x3b,
    0x80, 0x7e, 0x1, 0xf8, 0x7, 0xe0, 0x1f, 0x80,
    0x7e, 0x1, 0xf8, 0x7, 0x70, 0x39, 0xe1, 0xe3,
    0xff, 0x3, 0xf0,

    /* U+00FC "ü" */
    0x18, 0xe0, 0xc7, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x70, 0x1f, 0x80, 0xfc, 0x7, 0xe0, 0x3f, 0x1,
    0xf8, 0xf, 0xc0, 0x7e, 0x3, 0xf0, 0x1f, 0x80,
    0xfc, 0x7, 0xe0, 0x7b, 0x87, 0xdf, 0xf6, 0x3e,
    0x30
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 116, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 121, .box_w = 3, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 9, .adv_w = 183, .box_w = 8, .box_h = 7, .ofs_x = 2, .ofs_y = 13},
    {.bitmap_index = 16, .adv_w = 372, .box_w = 21, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 69, .adv_w = 134, .box_w = 7, .box_h = 24, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 90, .adv_w = 134, .box_w = 7, .box_h = 24, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 111, .adv_w = 120, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 114, .adv_w = 144, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 116, .adv_w = 120, .box_w = 3, .box_h = 3, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 167, .box_w = 10, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 256, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 178, .adv_w = 256, .box_w = 8, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 231, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 264, .adv_w = 256, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 302, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 335, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 368, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 256, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 436, .adv_w = 256, .box_w = 13, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 469, .adv_w = 120, .box_w = 3, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 475, .adv_w = 194, .box_w = 11, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 286, .box_w = 18, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 291, .box_w = 14, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 583, .adv_w = 283, .box_w = 15, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 621, .adv_w = 327, .box_w = 16, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 249, .box_w = 11, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 689, .adv_w = 233, .box_w = 11, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 326, .box_w = 17, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 332, .box_w = 16, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 800, .adv_w = 152, .box_w = 7, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 818, .adv_w = 277, .box_w = 15, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 235, .box_w = 12, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 406, .box_w = 20, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 340, .box_w = 16, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 976, .adv_w = 350, .box_w = 19, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1024, .adv_w = 271, .box_w = 13, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1057, .adv_w = 350, .box_w = 19, .box_h = 25, .ofs_x = 2, .ofs_y = -5},
    {.bitmap_index = 1117, .adv_w = 279, .box_w = 14, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1152, .adv_w = 246, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 249, .box_w = 15, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1225, .adv_w = 327, .box_w = 16, .box_h = 20, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 1265, .adv_w = 269, .box_w = 17, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1308, .adv_w = 417, .box_w = 26, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1373, .adv_w = 263, .box_w = 16, .box_h = 20, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1413, .adv_w = 256, .box_w = 14, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1448, .adv_w = 251, .box_w = 12, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1471, .adv_w = 276, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1508, .adv_w = 215, .box_w = 11, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1529, .adv_w = 276, .box_w = 14, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1566, .adv_w = 253, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1591, .adv_w = 154, .box_w = 11, .box_h = 21, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1620, .adv_w = 276, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 1659, .adv_w = 277, .box_w = 13, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1694, .adv_w = 116, .box_w = 3, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1702, .adv_w = 239, .box_w = 13, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1737, .adv_w = 116, .box_w = 3, .box_h = 21, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1745, .adv_w = 419, .box_w = 21, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1785, .adv_w = 277, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1810, .adv_w = 271, .box_w = 14, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1837, .adv_w = 276, .box_w = 14, .box_h = 22, .ofs_x = 2, .ofs_y = -7},
    {.bitmap_index = 1876, .adv_w = 185, .box_w = 9, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1893, .adv_w = 215, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1914, .adv_w = 162, .box_w = 9, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1936, .adv_w = 277, .box_w = 13, .box_h = 15, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 1961, .adv_w = 228, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1988, .adv_w = 352, .box_w = 22, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2030, .adv_w = 237, .box_w = 14, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2057, .adv_w = 228, .box_w = 14, .box_h = 22, .ofs_x = 0, .ofs_y = -7},
    {.bitmap_index = 2096, .adv_w = 211, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2117, .adv_w = 286, .box_w = 18, .box_h = 25, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2174, .adv_w = 350, .box_w = 19, .box_h = 25, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2234, .adv_w = 327, .box_w = 16, .box_h = 25, .ofs_x = 3, .ofs_y = 0},
    {.bitmap_index = 2284, .adv_w = 251, .box_w = 12, .box_h = 20, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2314, .adv_w = 271, .box_w = 14, .box_h = 20, .ofs_x = 2, .ofs_y = 0},
    {.bitmap_index = 2349, .adv_w = 277, .box_w = 13, .box_h = 20, .ofs_x = 2, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint8_t glyph_id_ofs_list_0[] = {
    0, 1, 2, 0, 0, 3, 0, 0,
    4, 5, 0, 0, 6, 7, 8, 9,
    10, 11, 12, 13, 14, 15, 16, 17,
    18, 19, 20, 0, 0, 0, 0, 21,
    0, 22, 23, 24, 25, 26, 27, 28,
    29, 30, 0, 31, 32, 33, 34, 35,
    36, 37, 38, 39, 40, 41, 42, 43,
    44, 0, 45, 0, 0, 0, 0, 0,
    0, 46, 47, 48, 49, 50, 51, 52,
    53, 54, 0, 55, 56, 57, 58, 59,
    60, 0, 61, 62, 63, 64, 65, 66,
    67, 68, 69
};

static const uint16_t unicode_list_1[] = {
    0x0, 0x12, 0x18, 0x20, 0x32, 0x38
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 91, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = glyph_id_ofs_list_0, .list_length = 91, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_FULL
    },
    {
        .range_start = 196, .range_length = 57, .glyph_id_start = 71,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 6, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
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
    .cmap_num = 2,
    .bpp = 1,
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
const lv_font_t deLittleTitle = {
#else
lv_font_t deLittleTitle = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 40,          /*The maximum line height required by the font*/
    .base_line = 9,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -3,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc           /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
};



#endif /*#if DELITTLETITLE*/

