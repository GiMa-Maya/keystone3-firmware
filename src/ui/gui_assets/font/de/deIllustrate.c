/*******************************************************************************
 * Size: 20 px
 * Bpp: 2
 * Opts: --bpp 2 --size 20 --no-compress --font NotoSans-Regular.ttf --symbols "!#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\]^_`abcdefghijklmnopqrstuvwxyz{|}~£¥·ÄÖÜßáäñóöü€  --format lvgl -o ../gui_assets/font/de/deIllustrate.c
 ******************************************************************************/

#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#ifndef DEILLUSTRATE
#define DEILLUSTRATE 1
#endif

#if DEILLUSTRATE

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */

    /* U+0021 "!" */
    0x79, 0xe7, 0x8e, 0x38, 0xe3, 0x4d, 0x34, 0xd1,
    0x9, 0xbd, 0xe0,

    /* U+0022 "\"" */
    0xb0, 0xfb, 0xe, 0xb0, 0xe7, 0xe, 0x70, 0xa0,
    0x0,

    /* U+0023 "#" */
    0x0, 0x34, 0x38, 0x0, 0x1c, 0xd, 0x0, 0xb,
    0x3, 0x0, 0x3, 0x81, 0xc0, 0x3f, 0xff, 0xff,
    0x41, 0x75, 0x79, 0x40, 0x1c, 0xd, 0x0, 0x7,
    0x3, 0x0, 0x2, 0xc1, 0xc0, 0x2f, 0xff, 0xff,
    0x81, 0x79, 0x79, 0x40, 0xc, 0xd, 0x0, 0x7,
    0x3, 0x0, 0x2, 0xc1, 0xc0, 0x0,

    /* U+0024 "$" */
    0x0, 0xd0, 0x0, 0xd, 0x0, 0x1f, 0xfe, 0x43,
    0xee, 0xb8, 0xb0, 0xd0, 0xb, 0xd, 0x0, 0xb8,
    0xd0, 0x3, 0xfe, 0x0, 0x6, 0xfe, 0x0, 0xe,
    0xbc, 0x0, 0xd2, 0xd0, 0xd, 0x1d, 0x90, 0xd7,
    0xcf, 0xff, 0xf0, 0x16, 0xe0, 0x0, 0xd, 0x0,
    0x0, 0x40, 0x0,

    /* U+0025 "%" */
    0xb, 0xe0, 0x3, 0xc0, 0x2d, 0x74, 0x7, 0x0,
    0x38, 0x38, 0xe, 0x0, 0x34, 0x2c, 0x1c, 0x0,
    0x34, 0x2c, 0x38, 0x0, 0x38, 0x2c, 0xb3, 0xf4,
    0x2c, 0x34, 0xdb, 0x6c, 0xf, 0xf2, 0xcd, 0xd,
    0x0, 0x7, 0xc, 0xe, 0x0, 0xe, 0x1c, 0xe,
    0x0, 0x1c, 0xc, 0xe, 0x0, 0x38, 0xd, 0xd,
    0x0, 0xb0, 0xb, 0x2c, 0x0, 0xd0, 0x2, 0xf4,

    /* U+0026 "&" */
    0x7, 0xfd, 0x0, 0x0, 0xfa, 0xf0, 0x0, 0x2c,
    0x7, 0x80, 0x2, 0xc0, 0x74, 0x0, 0xf, 0xf,
    0x0, 0x0, 0x7f, 0xc0, 0x0, 0xb, 0xf0, 0x0,
    0x3, 0xe7, 0xc0, 0x78, 0xb8, 0x1f, 0xb, 0xf,
    0x0, 0x7d, 0xf0, 0xf0, 0x1, 0xfc, 0xb, 0x40,
    0xf, 0xc0, 0x3e, 0x5b, 0xef, 0x0, 0xbf, 0xd0,
    0x7c,

    /* U+0027 "'" */
    0xb2, 0xcb, 0x1c, 0x70, 0x0,

    /* U+0028 "(" */
    0x2, 0xc0, 0x74, 0xf, 0x1, 0xe0, 0x2c, 0x3,
    0xc0, 0x3c, 0x3, 0x80, 0x38, 0x3, 0x80, 0x38,
    0x3, 0xc0, 0x3c, 0x1, 0xd0, 0xe, 0x0, 0xb0,
    0x3, 0x80, 0x8,

    /* U+0029 ")" */
    0x38, 0x1, 0xd0, 0xf, 0x0, 0xb4, 0x3, 0x80,
    0x3c, 0x3, 0xc0, 0x2c, 0x2, 0xc0, 0x2c, 0x2,
    0xc0, 0x3c, 0x3, 0xc0, 0x74, 0xb, 0x0, 0xe0,
    0x2c, 0x2, 0x0,

    /* U+002A "*" */
    0x0, 0x74, 0x0, 0x1, 0xd0, 0x0, 0x3, 0x0,
    0xf, 0x9d, 0xbc, 0x2f, 0xff, 0xe0, 0x3, 0xf0,
    0x0, 0x2c, 0xe0, 0x1, 0xe2, 0xd0, 0x7, 0x3,
    0x40, 0x0, 0x0, 0x0,

    /* U+002B "+" */
    0x0, 0xd0, 0x0, 0xd, 0x0, 0x0, 0xd0, 0x0,
    0xd, 0x0, 0x0, 0xd0, 0xf, 0xff, 0xfd, 0x55,
    0xe5, 0x40, 0xd, 0x0, 0x0, 0xd0, 0x0, 0xd,
    0x0,

    /* U+002C "," */
    0xe, 0x1d, 0x2c, 0x38, 0x34,

    /* U+002D "-" */
    0x2a, 0x93, 0xfe,

    /* U+002E "." */
    0x26, 0xf7, 0x80,

    /* U+002F "/" */
    0x0, 0x2c, 0x0, 0x38, 0x0, 0x74, 0x0, 0xf0,
    0x0, 0xe0, 0x2, 0xc0, 0x3, 0xc0, 0x7, 0x40,
    0xb, 0x0, 0xe, 0x0, 0x1d, 0x0, 0x3c, 0x0,
    0x34, 0x0, 0xb0, 0x0,

    /* U+0030 "0" */
    0x1, 0xfe, 0x0, 0x2f, 0xaf, 0x1, 0xe0, 0x1e,
    0xb, 0x0, 0x3c, 0x3c, 0x0, 0xb0, 0xf0, 0x1,
    0xd3, 0x80, 0x7, 0x4e, 0x0, 0x1d, 0x3c, 0x0,
    0x74, 0xf0, 0x2, 0xd2, 0xc0, 0xf, 0x3, 0x80,
    0x78, 0xb, 0xeb, 0xc0, 0x7, 0xf8, 0x0,

    /* U+0031 "1" */
    0x0, 0xf0, 0x1f, 0xc2, 0xeb, 0x9, 0x2c, 0x0,
    0xb0, 0x2, 0xc0, 0xb, 0x0, 0x2c, 0x0, 0xb0,
    0x2, 0xc0, 0xb, 0x0, 0x2c, 0x0, 0xb0, 0x2,
    0xc0,

    /* U+0032 "2" */
    0x6, 0xfe, 0x0, 0xbe, 0xaf, 0x0, 0x40, 0x1e,
    0x0, 0x0, 0x3c, 0x0, 0x0, 0xe0, 0x0, 0x7,
    0x40, 0x0, 0x3c, 0x0, 0x3, 0xc0, 0x0, 0x3c,
    0x0, 0x3, 0xc0, 0x0, 0x3c, 0x0, 0x3, 0xc0,
    0x0, 0x3f, 0xaa, 0xa4, 0xff, 0xff, 0xd0,

    /* U+0033 "3" */
    0x7, 0xfe, 0x40, 0xbe, 0x6f, 0x40, 0x0, 0xf,
    0x0, 0x0, 0x3c, 0x0, 0x1, 0xe0, 0x6, 0xbe,
    0x0, 0x3f, 0xe4, 0x0, 0x1, 0xb8, 0x0, 0x0,
    0xf0, 0x0, 0x2, 0xd0, 0x0, 0xb, 0x0, 0x0,
    0x3c, 0x3e, 0xab, 0xd0, 0x7f, 0xf8, 0x0,

    /* U+0034 "4" */
    0x0, 0x3, 0xc0, 0x0, 0xf, 0xc0, 0x0, 0x2e,
    0xc0, 0x0, 0x72, 0xc0, 0x0, 0xd2, 0xc0, 0x3,
    0x82, 0xc0, 0xb, 0x2, 0xc0, 0x1d, 0x2, 0xc0,
    0x38, 0x2, 0xc0, 0xbf, 0xff, 0xfc, 0x6a, 0xab,
    0xe8, 0x0, 0x2, 0xc0, 0x0, 0x2, 0xc0, 0x0,
    0x2, 0xc0,

    /* U+0035 "5" */
    0x3f, 0xff, 0x43, 0xea, 0xa0, 0x38, 0x0, 0x3,
    0x40, 0x0, 0x74, 0x0, 0x7, 0xff, 0x80, 0x2a,
    0xaf, 0x40, 0x0, 0x3c, 0x0, 0x2, 0xc0, 0x0,
    0x2d, 0x0, 0x2, 0xc0, 0x0, 0x7c, 0xba, 0xaf,
    0x6, 0xff, 0x80,

    /* U+0036 "6" */
    0x1, 0xbf, 0x40, 0xbe, 0x50, 0x2d, 0x0, 0x3,
    0x80, 0x0, 0x70, 0x0, 0xb, 0x2f, 0xe0, 0xfe,
    0x5b, 0x8f, 0x40, 0x2c, 0xf0, 0x1, 0xdf, 0x0,
    0x1d, 0xb0, 0x1, 0xd3, 0xc0, 0x3c, 0x1f, 0xaf,
    0x40, 0x7f, 0xd0,

    /* U+0037 "7" */
    0x3f, 0xff, 0xf4, 0xaa, 0xab, 0xd0, 0x0, 0xf,
    0x0, 0x0, 0x74, 0x0, 0x3, 0xc0, 0x0, 0x1e,
    0x0, 0x0, 0xb0, 0x0, 0x3, 0x80, 0x0, 0x2c,
    0x0, 0x0, 0xe0, 0x0, 0xb, 0x40, 0x0, 0x3c,
    0x0, 0x2, 0xd0, 0x0, 0xf, 0x0, 0x0,

    /* U+0038 "8" */
    0x2, 0xff, 0x40, 0x3e, 0x6f, 0x41, 0xd0, 0xf,
    0xb, 0x0, 0x3c, 0x1e, 0x0, 0xe0, 0x2e, 0x1f,
    0x0, 0x2f, 0xe0, 0x1, 0xf7, 0xe0, 0x1e, 0x1,
    0xf0, 0xf0, 0x1, 0xd3, 0x80, 0x7, 0x4f, 0x0,
    0x2c, 0x1f, 0x97, 0xe0, 0xb, 0xfd, 0x0,

    /* U+0039 "9" */
    0xb, 0xf8, 0x3, 0xea, 0xf0, 0xb4, 0x3, 0x8f,
    0x0, 0x2c, 0xf0, 0x1, 0xdf, 0x0, 0x2d, 0x78,
    0xb, 0xd2, 0xff, 0x9d, 0x0, 0x42, 0xc0, 0x0,
    0x3c, 0x0, 0x7, 0x80, 0x0, 0xf0, 0x26, 0xbd,
    0x3, 0xfe, 0x0,

    /* U+003A ":" */
    0x7a, 0xf2, 0x40, 0x0, 0x0, 0x0, 0x26, 0xf7,
    0x80,

    /* U+003B ";" */
    0x1e, 0x2f, 0x9, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x1e, 0x2d, 0x3c, 0x38, 0x30,

    /* U+003C "<" */
    0x0, 0x0, 0x0, 0x0, 0x1d, 0x0, 0x1f, 0xc0,
    0x1f, 0x80, 0x1f, 0x80, 0xf, 0x80, 0x0, 0xbd,
    0x0, 0x0, 0xbe, 0x0, 0x0, 0x7e, 0x40, 0x0,
    0x7d, 0x0, 0x0, 0x40,

    /* U+003D "=" */
    0x0, 0x0, 0xf, 0xff, 0xfd, 0x55, 0x55, 0x40,
    0x0, 0x0, 0x0, 0x0, 0xf, 0xff, 0xfd, 0x55,
    0x55, 0x40,

    /* U+003E ">" */
    0x0, 0x0, 0xe, 0x0, 0x0, 0xbd, 0x0, 0x0,
    0xbd, 0x0, 0x0, 0x7d, 0x0, 0x0, 0x7d, 0x0,
    0xb, 0xd0, 0x1f, 0xd0, 0x2f, 0x80, 0xf, 0x80,
    0x0, 0x40, 0x0, 0x0,

    /* U+003F "?" */
    0x2f, 0xf4, 0x2e, 0xaf, 0x80, 0x0, 0xf0, 0x0,
    0x2c, 0x0, 0xf, 0x0, 0xb, 0x40, 0xf, 0x40,
    0xf, 0x0, 0x3, 0x40, 0x0, 0xc0, 0x0, 0x0,
    0x0, 0x9, 0x0, 0xb, 0xc0, 0x1, 0xe0, 0x0,

    /* U+0040 "@" */
    0x0, 0x2f, 0xfe, 0x0, 0x2, 0xf9, 0x5b, 0xd0,
    0xb, 0x40, 0x0, 0x74, 0x2c, 0xb, 0xfd, 0x2c,
    0x38, 0x3d, 0x5d, 0xe, 0x70, 0x70, 0xd, 0xa,
    0xb0, 0xf0, 0xd, 0xb, 0xe0, 0xe0, 0x1d, 0xa,
    0xe0, 0xb0, 0x2d, 0xe, 0xe0, 0x74, 0x3e, 0x2c,
    0xb0, 0x2f, 0xd3, 0xf4, 0x34, 0x0, 0x0, 0x0,
    0x2d, 0x0, 0x0, 0x0, 0xb, 0x90, 0x7, 0x0,
    0x1, 0xff, 0xfe, 0x0, 0x0, 0x0, 0x0, 0x0,

    /* U+0041 "A" */
    0x0, 0x2d, 0x0, 0x0, 0xf, 0xc0, 0x0, 0x7,
    0xb0, 0x0, 0x3, 0xce, 0x0, 0x0, 0xd2, 0xc0,
    0x0, 0xb0, 0x74, 0x0, 0x38, 0xf, 0x0, 0x1d,
    0x2, 0xc0, 0xf, 0xff, 0xf8, 0x3, 0xea, 0xaf,
    0x2, 0xc0, 0x1, 0xd0, 0xf0, 0x0, 0x3c, 0x74,
    0x0, 0xb, 0x3c, 0x0, 0x1, 0xe0,

    /* U+0042 "B" */
    0x3f, 0xff, 0x80, 0xfa, 0xaf, 0xc3, 0x80, 0xb,
    0x4e, 0x0, 0x1d, 0x38, 0x0, 0xb0, 0xfa, 0xaf,
    0x43, 0xff, 0xf8, 0xe, 0x0, 0x7c, 0x38, 0x0,
    0x38, 0xe0, 0x0, 0xf3, 0x80, 0x3, 0xce, 0x0,
    0x2e, 0x3e, 0xab, 0xf0, 0xff, 0xfe, 0x0,

    /* U+0043 "C" */
    0x0, 0xbf, 0xe4, 0xb, 0xfa, 0xb8, 0x1f, 0x0,
    0x0, 0x3c, 0x0, 0x0, 0x78, 0x0, 0x0, 0xb4,
    0x0, 0x0, 0xf0, 0x0, 0x0, 0xf0, 0x0, 0x0,
    0xb4, 0x0, 0x0, 0x78, 0x0, 0x0, 0x3c, 0x0,
    0x0, 0x2f, 0x0, 0x0, 0xb, 0xfa, 0xb4, 0x1,
    0xbf, 0xe0,

    /* U+0044 "D" */
    0x3f, 0xff, 0x40, 0xf, 0xaa, 0xfc, 0x3, 0x80,
    0x7, 0xc0, 0xe0, 0x0, 0x78, 0x38, 0x0, 0xf,
    0xe, 0x0, 0x2, 0xd3, 0x80, 0x0, 0xb4, 0xe0,
    0x0, 0x2d, 0x38, 0x0, 0xb, 0xe, 0x0, 0x3,
    0xc3, 0x80, 0x2, 0xe0, 0xe0, 0x2, 0xf0, 0x3e,
    0xab, 0xf0, 0xf, 0xff, 0x90, 0x0,

    /* U+0045 "E" */
    0x3f, 0xff, 0xcf, 0xaa, 0xa3, 0x80, 0x0, 0xe0,
    0x0, 0x38, 0x0, 0xf, 0xaa, 0x93, 0xff, 0xf8,
    0xe0, 0x0, 0x38, 0x0, 0xe, 0x0, 0x3, 0x80,
    0x0, 0xe0, 0x0, 0x3e, 0xaa, 0x8f, 0xff, 0xf0,

    /* U+0046 "F" */
    0x3f, 0xff, 0xcf, 0xaa, 0xa3, 0x80, 0x0, 0xe0,
    0x0, 0x38, 0x0, 0xe, 0x0, 0x3, 0xea, 0xa4,
    0xff, 0xfe, 0x38, 0x0, 0xe, 0x0, 0x3, 0x80,
    0x0, 0xe0, 0x0, 0x38, 0x0, 0xe, 0x0, 0x0,

    /* U+0047 "G" */
    0x0, 0x7f, 0xf9, 0x1, 0xfe, 0xaf, 0x81, 0xf4,
    0x0, 0x0, 0xf0, 0x0, 0x0, 0x78, 0x0, 0x0,
    0x2d, 0x0, 0x0, 0xf, 0x0, 0x2a, 0xa3, 0xc0,
    0xf, 0xfc, 0xb0, 0x0, 0xb, 0x1e, 0x0, 0x2,
    0xc3, 0xc0, 0x0, 0xb0, 0xbc, 0x0, 0x2c, 0xb,
    0xfa, 0xaf, 0x0, 0x2f, 0xfe, 0x40,

    /* U+0048 "H" */
    0x38, 0x0, 0xf, 0x38, 0x0, 0xf, 0x38, 0x0,
    0xf, 0x38, 0x0, 0xf, 0x38, 0x0, 0xf, 0x38,
    0x0, 0xf, 0x3f, 0xff, 0xff, 0x3e, 0xaa, 0xaf,
    0x38, 0x0, 0xf, 0x38, 0x0, 0xf, 0x38, 0x0,
    0xf, 0x38, 0x0, 0xf, 0x38, 0x0, 0xf, 0x38,
    0x0, 0xf,

    /* U+0049 "I" */
    0x3f, 0xf0, 0xb8, 0xb, 0x40, 0xb4, 0xb, 0x40,
    0xb4, 0xb, 0x40, 0xb4, 0xb, 0x40, 0xb4, 0xb,
    0x40, 0xb4, 0xb, 0x83, 0xff,

    /* U+004A "J" */
    0x0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0,
    0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0,
    0xe0, 0xe, 0x0, 0xe0, 0xe, 0x0, 0xe0, 0x1d,
    0x6b, 0xc7, 0xe0,

    /* U+004B "K" */
    0x38, 0x0, 0x78, 0x38, 0x1, 0xe0, 0x38, 0x7,
    0xc0, 0x38, 0xf, 0x0, 0x38, 0x3c, 0x0, 0x38,
    0xf0, 0x0, 0x3f, 0xf0, 0x0, 0x3f, 0xb8, 0x0,
    0x3c, 0x3d, 0x0, 0x38, 0xf, 0x0, 0x38, 0x7,
    0xc0, 0x38, 0x2, 0xe0, 0x38, 0x0, 0xf4, 0x38,
    0x0, 0x3c,

    /* U+004C "L" */
    0x38, 0x0, 0xe, 0x0, 0x3, 0x80, 0x0, 0xe0,
    0x0, 0x38, 0x0, 0xe, 0x0, 0x3, 0x80, 0x0,
    0xe0, 0x0, 0x38, 0x0, 0xe, 0x0, 0x3, 0x80,
    0x0, 0xe0, 0x0, 0x3e, 0xaa, 0x8f, 0xff, 0xf0,

    /* U+004D "M" */
    0x3f, 0x0, 0x0, 0xbc, 0x3f, 0x0, 0x0, 0xfc,
    0x3b, 0x80, 0x1, 0xec, 0x3a, 0xc0, 0x3, 0xec,
    0x39, 0xd0, 0x3, 0x6c, 0x38, 0xe0, 0xb, 0x2c,
    0x38, 0xb0, 0xe, 0x2c, 0x38, 0x34, 0x1c, 0x2c,
    0x38, 0x3c, 0x3c, 0x2c, 0x38, 0x1c, 0x34, 0x2c,
    0x38, 0xe, 0xb0, 0x2c, 0x38, 0xb, 0xe0, 0x2c,
    0x38, 0x7, 0xd0, 0x2c, 0x38, 0x3, 0xc0, 0x2c,

    /* U+004E "N" */
    0x3d, 0x0, 0x7, 0x4f, 0xc0, 0x1, 0xd3, 0xf8,
    0x0, 0x74, 0xeb, 0x40, 0x1d, 0x38, 0xf0, 0x7,
    0x4e, 0x1e, 0x1, 0xd3, 0x83, 0xc0, 0x74, 0xe0,
    0x3c, 0x1d, 0x38, 0x7, 0x47, 0x4e, 0x0, 0xf1,
    0xd3, 0x80, 0xe, 0x74, 0xe0, 0x1, 0xed, 0x38,
    0x0, 0x3f, 0x4e, 0x0, 0x3, 0xd0,

    /* U+004F "O" */
    0x1, 0xbf, 0xe0, 0x0, 0xbe, 0xaf, 0xd0, 0x2f,
    0x0, 0x1f, 0x3, 0xc0, 0x0, 0x78, 0x74, 0x0,
    0x3, 0xcb, 0x0, 0x0, 0x2d, 0xf0, 0x0, 0x2,
    0xdf, 0x0, 0x0, 0x2d, 0xb4, 0x0, 0x2, 0xd7,
    0x40, 0x0, 0x3c, 0x3c, 0x0, 0x7, 0x82, 0xf0,
    0x1, 0xf0, 0xb, 0xea, 0xfd, 0x0, 0x1b, 0xfe,
    0x0,

    /* U+0050 "P" */
    0x3f, 0xfe, 0x0, 0xfa, 0xbf, 0x3, 0x80, 0x1f,
    0xe, 0x0, 0x3c, 0x38, 0x0, 0xf0, 0xe0, 0x3,
    0xc3, 0x80, 0x7d, 0xf, 0xff, 0xd0, 0x3e, 0xa4,
    0x0, 0xe0, 0x0, 0x3, 0x80, 0x0, 0xe, 0x0,
    0x0, 0x38, 0x0, 0x0, 0xe0, 0x0, 0x0,

    /* U+0051 "Q" */
    0x1, 0xbf, 0xe0, 0x0, 0xbe, 0xaf, 0xd0, 0x2f,
    0x0, 0x1f, 0x3, 0xc0, 0x0, 0x78, 0x74, 0x0,
    0x3, 0xcb, 0x0, 0x0, 0x2d, 0xf0, 0x0, 0x2,
    0xdf, 0x0, 0x0, 0x2d, 0xb4, 0x0, 0x2, 0xd7,
    0x40, 0x0, 0x3c, 0x3c, 0x0, 0x7, 0x82, 0xf0,
    0x1, 0xf0, 0xb, 0xea, 0xfd, 0x0, 0x1b, 0xfe,
    0x0, 0x0, 0x1, 0xf0, 0x0, 0x0, 0x7, 0xc0,
    0x0, 0x0, 0x1f, 0x0,

    /* U+0052 "R" */
    0x3f, 0xfe, 0x0, 0x3e, 0xaf, 0xd0, 0x38, 0x1,
    0xf0, 0x38, 0x0, 0xf0, 0x38, 0x0, 0xf0, 0x38,
    0x1, 0xe0, 0x3e, 0xab, 0xc0, 0x3f, 0xfe, 0x0,
    0x38, 0xf, 0x0, 0x38, 0xb, 0x40, 0x38, 0x3,
    0xc0, 0x38, 0x1, 0xe0, 0x38, 0x0, 0xf0, 0x38,
    0x0, 0x3c,

    /* U+0053 "S" */
    0xb, 0xfe, 0x3, 0xfa, 0xf4, 0xb4, 0x0, 0xf,
    0x0, 0x0, 0xb0, 0x0, 0x3, 0xd0, 0x0, 0x1f,
    0xe0, 0x0, 0x1b, 0xe0, 0x0, 0xb, 0x80, 0x0,
    0x3c, 0x0, 0x3, 0xc0, 0x0, 0x7c, 0xfa, 0xbf,
    0x7, 0xff, 0x80,

    /* U+0054 "T" */
    0xff, 0xff, 0xfd, 0xaa, 0xfa, 0xa0, 0x7, 0x40,
    0x0, 0x1d, 0x0, 0x0, 0x74, 0x0, 0x1, 0xd0,
    0x0, 0x7, 0x40, 0x0, 0x1d, 0x0, 0x0, 0x74,
    0x0, 0x1, 0xd0, 0x0, 0x7, 0x40, 0x0, 0x1d,
    0x0, 0x0, 0x74, 0x0, 0x1, 0xd0, 0x0,

    /* U+0055 "U" */
    0x38, 0x0, 0xf, 0x38, 0x0, 0xf, 0x38, 0x0,
    0xf, 0x38, 0x0, 0xf, 0x38, 0x0, 0xf, 0x38,
    0x0, 0xf, 0x38, 0x0, 0xf, 0x38, 0x0, 0xf,
    0x38, 0x0, 0xf, 0x38, 0x0, 0xf, 0x3c, 0x0,
    0x1e, 0x2e, 0x0, 0x3c, 0xf, 0xea, 0xf4, 0x1,
    0xff, 0x80,

    /* U+0056 "V" */
    0xf0, 0x0, 0xf, 0x74, 0x0, 0x1d, 0x3c, 0x0,
    0x3c, 0x2c, 0x0, 0x38, 0x1d, 0x0, 0xb4, 0xf,
    0x0, 0xf0, 0xb, 0x0, 0xe0, 0x7, 0x82, 0xd0,
    0x3, 0xc3, 0xc0, 0x2, 0xd7, 0x80, 0x0, 0xeb,
    0x0, 0x0, 0xff, 0x0, 0x0, 0x7d, 0x0, 0x0,
    0x3c, 0x0,

    /* U+0057 "W" */
    0xb4, 0x0, 0xf4, 0x0, 0xb1, 0xe0, 0x3, 0xe0,
    0x3, 0xc3, 0xc0, 0x1e, 0xc0, 0xe, 0xf, 0x0,
    0xb7, 0x0, 0x74, 0x2d, 0x3, 0x8e, 0x2, 0xc0,
    0x78, 0x1d, 0x3c, 0xf, 0x0, 0xf0, 0xb0, 0x70,
    0x38, 0x2, 0xc3, 0x80, 0xd1, 0xd0, 0x7, 0x4d,
    0x3, 0xcb, 0x0, 0xe, 0xb0, 0xb, 0x3c, 0x0,
    0x3e, 0xc0, 0x1e, 0xd0, 0x0, 0xbe, 0x0, 0x3f,
    0x0, 0x1, 0xf4, 0x0, 0xbc, 0x0, 0x3, 0xc0,
    0x1, 0xe0, 0x0,

    /* U+0058 "X" */
    0x78, 0x0, 0x3c, 0x2d, 0x0, 0xb4, 0xf, 0x0,
    0xe0, 0x7, 0x83, 0xc0, 0x2, 0xd7, 0x40, 0x0,
    0xfe, 0x0, 0x0, 0x7c, 0x0, 0x0, 0xbd, 0x0,
    0x1, 0xdf, 0x0, 0x3, 0xc3, 0x80, 0xb, 0x2,
    0xd0, 0x1e, 0x0, 0xf0, 0x3c, 0x0, 0x78, 0xb4,
    0x0, 0x2d,

    /* U+0059 "Y" */
    0xb0, 0x0, 0x3c, 0x38, 0x0, 0x74, 0x2d, 0x0,
    0xf0, 0xf, 0x1, 0xd0, 0xb, 0x43, 0xc0, 0x3,
    0xcb, 0x40, 0x1, 0xde, 0x0, 0x0, 0xfc, 0x0,
    0x0, 0x78, 0x0, 0x0, 0x38, 0x0, 0x0, 0x38,
    0x0, 0x0, 0x38, 0x0, 0x0, 0x38, 0x0, 0x0,
    0x38, 0x0,

    /* U+005A "Z" */
    0x3f, 0xff, 0xf4, 0xaa, 0xab, 0xd0, 0x0, 0x1e,
    0x0, 0x0, 0xf0, 0x0, 0xb, 0x40, 0x0, 0x78,
    0x0, 0x3, 0xc0, 0x0, 0x2d, 0x0, 0x1, 0xe0,
    0x0, 0xf, 0x0, 0x0, 0xf0, 0x0, 0x7, 0x80,
    0x0, 0x3e, 0xaa, 0xa4, 0xff, 0xff, 0xe0,

    /* U+005B "[" */
    0x7f, 0xc7, 0x94, 0x74, 0x7, 0x40, 0x74, 0x7,
    0x40, 0x74, 0x7, 0x40, 0x74, 0x7, 0x40, 0x74,
    0x7, 0x40, 0x74, 0x7, 0x40, 0x74, 0x7, 0x40,
    0x7f, 0xc1, 0x54,

    /* U+005C "\\" */
    0xb0, 0x0, 0x34, 0x0, 0x3c, 0x0, 0x1d, 0x0,
    0xe, 0x0, 0xb, 0x0, 0x7, 0x40, 0x3, 0xc0,
    0x2, 0xc0, 0x0, 0xe0, 0x0, 0xf0, 0x0, 0x74,
    0x0, 0x38, 0x0, 0x2c,

    /* U+005D "]" */
    0xbf, 0xc5, 0xf0, 0x2c, 0xb, 0x2, 0xc0, 0xb0,
    0x2c, 0xb, 0x2, 0xc0, 0xb0, 0x2c, 0xb, 0x2,
    0xc0, 0xb0, 0x2c, 0xf, 0xbf, 0xc5, 0x50,

    /* U+005E "^" */
    0x0, 0x34, 0x0, 0x2, 0xf0, 0x0, 0xd, 0xd0,
    0x0, 0xb2, 0xc0, 0x3, 0x43, 0x40, 0x2c, 0xb,
    0x0, 0xd0, 0xd, 0xb, 0x0, 0x2c, 0x38, 0x0,
    0x34,

    /* U+005F "_" */
    0x0, 0x0, 0x3, 0xff, 0xff, 0x0, 0x0, 0x0,

    /* U+0060 "`" */
    0x3c, 0x3, 0xc0, 0x38,

    /* U+0061 "a" */
    0x6, 0xff, 0x40, 0xb9, 0xbc, 0x0, 0x1, 0xd0,
    0x0, 0xe, 0x0, 0x0, 0xe0, 0x6f, 0xfe, 0x2f,
    0x41, 0xe3, 0xc0, 0xe, 0x3c, 0x2, 0xe2, 0xe5,
    0xbe, 0xb, 0xf8, 0xe0,

    /* U+0062 "b" */
    0x74, 0x0, 0x1, 0xd0, 0x0, 0x7, 0x40, 0x0,
    0x1d, 0x0, 0x0, 0x75, 0xfe, 0x1, 0xfe, 0xaf,
    0x7, 0xc0, 0x1e, 0x1e, 0x0, 0x3c, 0x78, 0x0,
    0xb1, 0xd0, 0x2, 0xc7, 0x80, 0xb, 0x1e, 0x0,
    0x3c, 0x7c, 0x1, 0xe1, 0xee, 0x6f, 0x7, 0x1f,
    0xe0, 0x0,

    /* U+0063 "c" */
    0x7, 0xfe, 0x2f, 0xae, 0x78, 0x0, 0xb0, 0x0,
    0xf0, 0x0, 0xf0, 0x0, 0xf0, 0x0, 0xb0, 0x0,
    0x78, 0x0, 0x2f, 0xaa, 0x7, 0xfd,

    /* U+0064 "d" */
    0x0, 0x0, 0xe0, 0x0, 0xe, 0x0, 0x0, 0xe0,
    0x0, 0xe, 0xb, 0xf8, 0xe2, 0xf6, 0xfe, 0x78,
    0x3, 0xeb, 0x0, 0x1e, 0xf0, 0x0, 0xef, 0x0,
    0xe, 0xf0, 0x0, 0xeb, 0x0, 0x1e, 0x78, 0x3,
    0xe3, 0xf6, 0xee, 0xb, 0xf8, 0xe0,

    /* U+0065 "e" */
    0x7, 0xf9, 0x2, 0xe6, 0xf4, 0x78, 0x3, 0xcb,
    0x0, 0x2c, 0xff, 0xff, 0xdf, 0x55, 0x54, 0xf0,
    0x0, 0xb, 0x40, 0x0, 0x7c, 0x0, 0x2, 0xfa,
    0xbc, 0x6, 0xfe, 0x40,

    /* U+0066 "f" */
    0x1, 0xfd, 0x7, 0xd9, 0xb, 0x0, 0xf, 0x0,
    0x7f, 0xf8, 0x5f, 0x50, 0xf, 0x0, 0xf, 0x0,
    0xf, 0x0, 0xf, 0x0, 0xf, 0x0, 0xf, 0x0,
    0xf, 0x0, 0xf, 0x0, 0xf, 0x0,

    /* U+0067 "g" */
    0xb, 0xf8, 0xe2, 0xfa, 0xee, 0x78, 0x3, 0xeb,
    0x0, 0x1e, 0xf0, 0x0, 0xef, 0x0, 0xe, 0xf0,
    0x0, 0xeb, 0x0, 0x1e, 0x78, 0x2, 0xe2, 0xf6,
    0xfe, 0xb, 0xf8, 0xe0, 0x0, 0xe, 0x0, 0x1,
    0xd0, 0x0, 0x3c, 0x3e, 0x6f, 0x82, 0xff, 0xd0,

    /* U+0068 "h" */
    0x74, 0x0, 0x7, 0x40, 0x0, 0x74, 0x0, 0x7,
    0x40, 0x0, 0x75, 0xff, 0x47, 0xfa, 0xbc, 0x7c,
    0x1, 0xe7, 0x80, 0xe, 0x78, 0x0, 0xe7, 0x40,
    0xe, 0x74, 0x0, 0xe7, 0x40, 0xe, 0x74, 0x0,
    0xe7, 0x40, 0xe, 0x74, 0x0, 0xe0,

    /* U+0069 "i" */
    0x75, 0xe0, 0x0, 0x75, 0xd7, 0x5d, 0x75, 0xd7,
    0x5d, 0x75, 0xd7, 0x40,

    /* U+006A "j" */
    0x1, 0xd0, 0x1e, 0x0, 0x0, 0x0, 0x1, 0xd0,
    0x1d, 0x1, 0xd0, 0x1d, 0x1, 0xd0, 0x1d, 0x1,
    0xd0, 0x1d, 0x1, 0xd0, 0x1d, 0x1, 0xd0, 0x1d,
    0x1, 0xd0, 0x1d, 0x2b, 0xc3, 0xf4,

    /* U+006B "k" */
    0x74, 0x0, 0x7, 0x40, 0x0, 0x74, 0x0, 0x7,
    0x40, 0x0, 0x74, 0x7, 0x87, 0x41, 0xf0, 0x74,
    0x3c, 0x7, 0x4f, 0x0, 0x77, 0xc0, 0x7, 0xfd,
    0x0, 0x7c, 0xf0, 0x7, 0x43, 0xc0, 0x74, 0x1e,
    0x7, 0x40, 0xb4, 0x74, 0x3, 0xc0,

    /* U+006C "l" */
    0x75, 0xd7, 0x5d, 0x75, 0xd7, 0x5d, 0x75, 0xd7,
    0x5d, 0x75, 0xd7, 0x40,

    /* U+006D "m" */
    0x71, 0xfe, 0xb, 0xf8, 0x1e, 0xeb, 0xfb, 0xaf,
    0x87, 0xc0, 0x3f, 0x0, 0xf1, 0xe0, 0xb, 0x40,
    0x2c, 0x78, 0x1, 0xd0, 0xb, 0x1d, 0x0, 0x74,
    0x2, 0xc7, 0x40, 0x1d, 0x0, 0xb1, 0xd0, 0x7,
    0x40, 0x2c, 0x74, 0x1, 0xd0, 0xb, 0x1d, 0x0,
    0x74, 0x2, 0xc7, 0x40, 0x1d, 0x0, 0xb0,

    /* U+006E "n" */
    0x71, 0xff, 0x47, 0xba, 0xbc, 0x7c, 0x1, 0xe7,
    0x80, 0xe, 0x78, 0x0, 0xe7, 0x40, 0xe, 0x74,
    0x0, 0xe7, 0x40, 0xe, 0x74, 0x0, 0xe7, 0x40,
    0xe, 0x74, 0x0, 0xe0,

    /* U+006F "o" */
    0x7, 0xfd, 0x0, 0xbe, 0xbe, 0x7, 0x80, 0x2d,
    0x2c, 0x0, 0x3c, 0xf0, 0x0, 0xf3, 0xc0, 0x3,
    0xcf, 0x0, 0xf, 0x2c, 0x0, 0x3c, 0x38, 0x2,
    0xd0, 0xbe, 0xbe, 0x0, 0x7f, 0xd0, 0x0,

    /* U+0070 "p" */
    0x71, 0xfe, 0x1, 0xee, 0xaf, 0x7, 0xc0, 0x1e,
    0x1e, 0x0, 0x3c, 0x74, 0x0, 0xb1, 0xd0, 0x2,
    0xc7, 0x80, 0xb, 0x1e, 0x0, 0x3c, 0x7c, 0x1,
    0xe1, 0xfe, 0x6f, 0x7, 0x5f, 0xe0, 0x1d, 0x0,
    0x0, 0x74, 0x0, 0x1, 0xd0, 0x0, 0x7, 0x40,
    0x0, 0x1d, 0x0, 0x0,

    /* U+0071 "q" */
    0xb, 0xf8, 0xe2, 0xf6, 0xee, 0x78, 0x3, 0xeb,
    0x0, 0x1e, 0xf0, 0x0, 0xef, 0x0, 0xe, 0xf0,
    0x0, 0xeb, 0x0, 0x1e, 0x78, 0x3, 0xe3, 0xf6,
    0xfe, 0xb, 0xf8, 0xe0, 0x0, 0xe, 0x0, 0x0,
    0xe0, 0x0, 0xe, 0x0, 0x0, 0xe0, 0x0, 0xe,

    /* U+0072 "r" */
    0x70, 0xfd, 0xdf, 0xa7, 0xe0, 0x1f, 0x0, 0x78,
    0x1, 0xd0, 0x7, 0x40, 0x1d, 0x0, 0x74, 0x1,
    0xd0, 0x7, 0x40, 0x0,

    /* U+0073 "s" */
    0x1f, 0xf8, 0xb9, 0x6c, 0xf0, 0x0, 0xf0, 0x0,
    0x7e, 0x0, 0xb, 0xf4, 0x0, 0x7d, 0x0, 0xe,
    0x0, 0xe, 0xe9, 0xbc, 0x7f, 0xe0,

    /* U+0074 "t" */
    0x5, 0x0, 0x28, 0x0, 0xe0, 0x1f, 0xfe, 0x5e,
    0x54, 0x38, 0x0, 0xe0, 0x3, 0x80, 0xe, 0x0,
    0x38, 0x0, 0xe0, 0x3, 0xc0, 0xf, 0x94, 0xb,
    0xe0,

    /* U+0075 "u" */
    0x74, 0x0, 0xe7, 0x40, 0xe, 0x74, 0x0, 0xe7,
    0x40, 0xe, 0x74, 0x0, 0xe7, 0x40, 0xe, 0x74,
    0x0, 0xe7, 0x40, 0x1e, 0x78, 0x2, 0xe3, 0xe5,
    0xbe, 0xb, 0xf8, 0xe0,

    /* U+0076 "v" */
    0xf0, 0x0, 0xf1, 0xd0, 0x3, 0x83, 0xc0, 0x2c,
    0xb, 0x0, 0xf0, 0x1d, 0x7, 0x40, 0x3c, 0x2c,
    0x0, 0xb0, 0xf0, 0x0, 0xd7, 0x40, 0x3, 0xec,
    0x0, 0x7, 0xe0, 0x0, 0xf, 0x40, 0x0,

    /* U+0077 "w" */
    0xb0, 0x3, 0xc0, 0x1d, 0x74, 0xb, 0xd0, 0x2c,
    0x38, 0xe, 0xe0, 0x3c, 0x3c, 0xd, 0xb0, 0x38,
    0x2c, 0x1c, 0x70, 0x74, 0x1d, 0x3c, 0x34, 0xb0,
    0xe, 0x38, 0x3c, 0xe0, 0xf, 0x70, 0x2d, 0xd0,
    0xb, 0xb0, 0x1e, 0xc0, 0x3, 0xe0, 0xf, 0xc0,
    0x3, 0xd0, 0xb, 0x80,

    /* U+0078 "x" */
    0x3c, 0x1, 0xe0, 0x78, 0xf, 0x0, 0xb0, 0xb4,
    0x0, 0xf7, 0x80, 0x1, 0xfc, 0x0, 0x3, 0xd0,
    0x0, 0x2f, 0xc0, 0x0, 0xe3, 0xc0, 0xf, 0x7,
    0x40, 0xb4, 0xf, 0x7, 0x80, 0xf, 0x0,

    /* U+0079 "y" */
    0xf0, 0x0, 0xf1, 0xd0, 0x3, 0x83, 0xc0, 0x2d,
    0xb, 0x0, 0xf0, 0xe, 0x7, 0x80, 0x3c, 0x2c,
    0x0, 0x74, 0xf0, 0x0, 0xe7, 0x40, 0x2, 0xec,
    0x0, 0x7, 0xe0, 0x0, 0xf, 0x40, 0x0, 0x3c,
    0x0, 0x0, 0xe0, 0x0, 0xb, 0x0, 0x5, 0xb8,
    0x0, 0x2f, 0x80, 0x0,

    /* U+007A "z" */
    0x3f, 0xff, 0x45, 0x57, 0xd0, 0x0, 0xe0, 0x0,
    0xf0, 0x0, 0xb4, 0x0, 0x78, 0x0, 0x3c, 0x0,
    0x2d, 0x0, 0x1e, 0x0, 0xf, 0x55, 0x43, 0xff,
    0xf8,

    /* U+007B "{" */
    0x0, 0x7c, 0xb, 0xd0, 0x3c, 0x0, 0xe0, 0x3,
    0x80, 0xe, 0x0, 0x38, 0x2, 0xd0, 0x7d, 0x0,
    0x7c, 0x0, 0x38, 0x0, 0xe0, 0x3, 0x80, 0xe,
    0x0, 0x3c, 0x0, 0xb8, 0x0, 0xfc, 0x0, 0x10,

    /* U+007C "|" */
    0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc,

    /* U+007D "}" */
    0x78, 0x0, 0x2f, 0x0, 0x7, 0x80, 0x3, 0x80,
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0x2, 0xd0,
    0x0, 0xbc, 0x2, 0xe4, 0x3, 0x80, 0x3, 0x80,
    0x3, 0x80, 0x3, 0x80, 0x3, 0x80, 0xf, 0x40,
    0x7d, 0x0, 0x10, 0x0,

    /* U+007E "~" */
    0x0, 0x0, 0xb, 0xfd, 0x9, 0xd5, 0xff, 0xc0,
    0x0, 0x50,

    /* U+00A3 "£" */
    0x0, 0xbf, 0xd0, 0xf, 0x9a, 0xc0, 0x78, 0x0,
    0x1, 0xd0, 0x0, 0x7, 0x40, 0x0, 0x1d, 0x0,
    0x7, 0xff, 0xf4, 0x6, 0xe5, 0x40, 0x7, 0x40,
    0x0, 0x1d, 0x0, 0x0, 0x74, 0x0, 0x3, 0xc0,
    0x0, 0x3e, 0xaa, 0xa5, 0xff, 0xff, 0xe0,

    /* U+00A5 "¥" */
    0x74, 0x0, 0x3c, 0x3c, 0x0, 0x74, 0x1d, 0x0,
    0xe0, 0xb, 0x2, 0xc0, 0x3, 0x43, 0x80, 0x2,
    0xcb, 0x0, 0x0, 0xed, 0x0, 0xf, 0xff, 0xe0,
    0x0, 0x78, 0x0, 0x0, 0x38, 0x0, 0xf, 0xff,
    0xe0, 0x0, 0x78, 0x0, 0x0, 0x38, 0x0, 0x0,
    0x38, 0x0,

    /* U+00B7 "·" */
    0x26, 0xf7, 0x80,

    /* U+00C4 "Ä" */
    0x1, 0xd2, 0xc0, 0x0, 0x74, 0xb0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x2d, 0x0,
    0x0, 0xf, 0xc0, 0x0, 0x7, 0xb0, 0x0, 0x3,
    0xce, 0x0, 0x0, 0xd2, 0xc0, 0x0, 0xb0, 0x74,
    0x0, 0x38, 0xf, 0x0, 0x1d, 0x2, 0xc0, 0xf,
    0xff, 0xf8, 0x3, 0xea, 0xaf, 0x2, 0xc0, 0x1,
    0xd0, 0xf0, 0x0, 0x3c, 0x74, 0x0, 0xb, 0x3c,
    0x0, 0x1, 0xe0,

    /* U+00D6 "Ö" */
    0x0, 0xe0, 0xd0, 0x0, 0xe, 0xd, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
    0x0, 0x0, 0x1b, 0xfe, 0x0, 0xb, 0xea, 0xfd,
    0x2, 0xf0, 0x1, 0xf0, 0x3c, 0x0, 0x7, 0x87,
    0x40, 0x0, 0x3c, 0xb0, 0x0, 0x2, 0xdf, 0x0,
    0x0, 0x2d, 0xf0, 0x0, 0x2, 0xdb, 0x40, 0x0,
    0x2d, 0x74, 0x0, 0x3, 0xc3, 0xc0, 0x0, 0x78,
    0x2f, 0x0, 0x1f, 0x0, 0xbe, 0xaf, 0xd0, 0x1,
    0xbf, 0xe0, 0x0,

    /* U+00DC "Ü" */
    0x1, 0xd2, 0xc0, 0x1, 0xc2, 0xc0, 0x0, 0x0,
    0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x38,
    0x0, 0xf, 0x38, 0x0, 0xf, 0x38, 0x0, 0xf,
    0x38, 0x0, 0xf, 0x38, 0x0, 0xf, 0x38, 0x0,
    0xf, 0x38, 0x0, 0xf, 0x38, 0x0, 0xf, 0x38,
    0x0, 0xf, 0x38, 0x0, 0xf, 0x3c, 0x0, 0x1e,
    0x2e, 0x0, 0x3c, 0xf, 0xea, 0xf4, 0x1, 0xff,
    0x80,

    /* U+00DF "ß" */
    0x7, 0xfe, 0x0, 0xbe, 0x6f, 0x3, 0x80, 0x1d,
    0x1d, 0x0, 0x74, 0x74, 0x7, 0xc1, 0xd0, 0x78,
    0x7, 0x43, 0xc0, 0x1d, 0xf, 0x0, 0x74, 0x1f,
    0x41, 0xd0, 0xf, 0x87, 0x40, 0xb, 0x5d, 0x0,
    0xe, 0x74, 0x0, 0x39, 0xd3, 0x97, 0xd7, 0x47,
    0xfd, 0x0,

    /* U+00E1 "á" */
    0x0, 0xf, 0x40, 0x2, 0xd0, 0x0, 0x34, 0x0,
    0x0, 0x0, 0x6, 0xff, 0x40, 0xb9, 0xbc, 0x0,
    0x1, 0xd0, 0x0, 0xe, 0x0, 0x0, 0xe0, 0x6f,
    0xfe, 0x2f, 0x41, 0xe3, 0xc0, 0xe, 0x3c, 0x2,
    0xe2, 0xe5, 0xbe, 0xb, 0xf8, 0xe0,

    /* U+00E4 "ä" */
    0x3, 0x87, 0x40, 0x38, 0x74, 0x0, 0x0, 0x0,
    0x6f, 0xf4, 0xb, 0x9b, 0xc0, 0x0, 0x1d, 0x0,
    0x0, 0xe0, 0x0, 0xe, 0x6, 0xff, 0xe2, 0xf4,
    0x1e, 0x3c, 0x0, 0xe3, 0xc0, 0x2e, 0x2e, 0x5b,
    0xe0, 0xbf, 0x8e,

    /* U+00F1 "ñ" */
    0x0, 0x0, 0x0, 0xff, 0xf8, 0x5, 0x54, 0x0,
    0x0, 0x0, 0x71, 0xff, 0x47, 0xba, 0xbc, 0x7c,
    0x1, 0xe7, 0x80, 0xe, 0x78, 0x0, 0xe7, 0x40,
    0xe, 0x74, 0x0, 0xe7, 0x40, 0xe, 0x74, 0x0,
    0xe7, 0x40, 0xe, 0x74, 0x0, 0xe0,

    /* U+00F3 "ó" */
    0x0, 0x1e, 0x0, 0x0, 0xe0, 0x0, 0xa, 0x0,
    0x0, 0x0, 0x0, 0x7, 0xfd, 0x0, 0xbe, 0xbe,
    0x7, 0x80, 0x2d, 0x2c, 0x0, 0x3c, 0xf0, 0x0,
    0xf3, 0xc0, 0x3, 0xcf, 0x0, 0xf, 0x2c, 0x0,
    0x3c, 0x38, 0x2, 0xd0, 0xbe, 0xbe, 0x0, 0x7f,
    0xd0, 0x0,

    /* U+00F6 "ö" */
    0xb, 0xe, 0x0, 0x2c, 0x38, 0x0, 0x0, 0x0,
    0x1, 0xff, 0x40, 0x2f, 0xaf, 0x81, 0xe0, 0xb,
    0x4b, 0x0, 0xf, 0x3c, 0x0, 0x3c, 0xf0, 0x0,
    0xf3, 0xc0, 0x3, 0xcb, 0x0, 0xf, 0xe, 0x0,
    0xb4, 0x2f, 0xaf, 0x80, 0x1f, 0xf4, 0x0,

    /* U+00FC "ü" */
    0x7, 0xb, 0x0, 0x70, 0xb0, 0x0, 0x0, 0x7,
    0x40, 0xe, 0x74, 0x0, 0xe7, 0x40, 0xe, 0x74,
    0x0, 0xe7, 0x40, 0xe, 0x74, 0x0, 0xe7, 0x40,
    0xe, 0x74, 0x1, 0xe7, 0x80, 0x2e, 0x3e, 0x5b,
    0xe0, 0xbf, 0x8e,

    /* U+20AC "€" */
    0x0, 0x2f, 0xf4, 0x1, 0xfa, 0xbc, 0x3, 0xc0,
    0x0, 0xb, 0x40, 0x0, 0xf, 0x0, 0x0, 0xbf,
    0xff, 0x80, 0x1e, 0x55, 0x0, 0xe, 0x0, 0x0,
    0xbf, 0xff, 0x0, 0x1f, 0x55, 0x0, 0xb, 0x40,
    0x0, 0x3, 0xc0, 0x0, 0x1, 0xfa, 0xb8, 0x0,
    0x2f, 0xf4
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 83, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 0, .adv_w = 86, .box_w = 3, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 11, .adv_w = 131, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 20, .adv_w = 207, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 183, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 109, .adv_w = 266, .box_w = 16, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 165, .adv_w = 234, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 214, .adv_w = 72, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 219, .adv_w = 96, .box_w = 6, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 246, .adv_w = 96, .box_w = 6, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 273, .adv_w = 176, .box_w = 11, .box_h = 10, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 301, .adv_w = 183, .box_w = 10, .box_h = 10, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 326, .adv_w = 86, .box_w = 4, .box_h = 5, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 331, .adv_w = 103, .box_w = 6, .box_h = 2, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 334, .adv_w = 86, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 337, .adv_w = 119, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 365, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 404, .adv_w = 183, .box_w = 7, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 429, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 468, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 507, .adv_w = 183, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 549, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 584, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 619, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 658, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 697, .adv_w = 183, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 86, .box_w = 3, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 741, .adv_w = 86, .box_w = 4, .box_h = 14, .ofs_x = 0, .ofs_y = -3},
    {.bitmap_index = 755, .adv_w = 183, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 783, .adv_w = 183, .box_w = 10, .box_h = 7, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 801, .adv_w = 183, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 829, .adv_w = 139, .box_w = 9, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 861, .adv_w = 288, .box_w = 16, .box_h = 16, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 925, .adv_w = 204, .box_w = 13, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 971, .adv_w = 208, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1010, .adv_w = 202, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1052, .adv_w = 234, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1098, .adv_w = 178, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 166, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1162, .adv_w = 233, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1208, .adv_w = 237, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1250, .adv_w = 108, .box_w = 6, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1271, .adv_w = 87, .box_w = 6, .box_h = 18, .ofs_x = -2, .ofs_y = -4},
    {.bitmap_index = 1298, .adv_w = 198, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1340, .adv_w = 168, .box_w = 9, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1372, .adv_w = 290, .box_w = 16, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1428, .adv_w = 243, .box_w = 13, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1474, .adv_w = 250, .box_w = 14, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1523, .adv_w = 194, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1562, .adv_w = 250, .box_w = 14, .box_h = 17, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 1622, .adv_w = 199, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1664, .adv_w = 176, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1699, .adv_w = 178, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1738, .adv_w = 234, .box_w = 12, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1780, .adv_w = 192, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1822, .adv_w = 298, .box_w = 19, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1889, .adv_w = 188, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1931, .adv_w = 181, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1973, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2012, .adv_w = 105, .box_w = 6, .box_h = 18, .ofs_x = 1, .ofs_y = -4},
    {.bitmap_index = 2039, .adv_w = 119, .box_w = 8, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2067, .adv_w = 105, .box_w = 5, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2090, .adv_w = 183, .box_w = 11, .box_h = 9, .ofs_x = 0, .ofs_y = 5},
    {.bitmap_index = 2115, .adv_w = 142, .box_w = 10, .box_h = 3, .ofs_x = -1, .ofs_y = -4},
    {.bitmap_index = 2123, .adv_w = 90, .box_w = 5, .box_h = 3, .ofs_x = 0, .ofs_y = 12},
    {.bitmap_index = 2127, .adv_w = 180, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2155, .adv_w = 197, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2197, .adv_w = 154, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2219, .adv_w = 197, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2257, .adv_w = 180, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2285, .adv_w = 110, .box_w = 8, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2315, .adv_w = 197, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2355, .adv_w = 198, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2393, .adv_w = 83, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2405, .adv_w = 83, .box_w = 6, .box_h = 20, .ofs_x = -2, .ofs_y = -5},
    {.bitmap_index = 2435, .adv_w = 171, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2473, .adv_w = 83, .box_w = 3, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2485, .adv_w = 299, .box_w = 17, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2532, .adv_w = 198, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2560, .adv_w = 194, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2591, .adv_w = 197, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2635, .adv_w = 197, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = -5},
    {.bitmap_index = 2675, .adv_w = 132, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2695, .adv_w = 153, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2717, .adv_w = 116, .box_w = 7, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2742, .adv_w = 198, .box_w = 10, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 2770, .adv_w = 163, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2801, .adv_w = 252, .box_w = 16, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2845, .adv_w = 169, .box_w = 11, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2876, .adv_w = 163, .box_w = 11, .box_h = 16, .ofs_x = 0, .ofs_y = -5},
    {.bitmap_index = 2920, .adv_w = 150, .box_w = 9, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 2945, .adv_w = 122, .box_w = 7, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 2977, .adv_w = 176, .box_w = 3, .box_h = 20, .ofs_x = 4, .ofs_y = -5},
    {.bitmap_index = 2992, .adv_w = 122, .box_w = 8, .box_h = 18, .ofs_x = 0, .ofs_y = -4},
    {.bitmap_index = 3028, .adv_w = 183, .box_w = 10, .box_h = 4, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 3038, .adv_w = 183, .box_w = 11, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3077, .adv_w = 183, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3119, .adv_w = 86, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 3122, .adv_w = 204, .box_w = 13, .box_h = 18, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3181, .adv_w = 250, .box_w = 14, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3248, .adv_w = 234, .box_w = 12, .box_h = 19, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3305, .adv_w = 202, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3347, .adv_w = 180, .box_w = 10, .box_h = 15, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3385, .adv_w = 180, .box_w = 10, .box_h = 14, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 3420, .adv_w = 198, .box_w = 10, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3458, .adv_w = 194, .box_w = 11, .box_h = 15, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3500, .adv_w = 194, .box_w = 11, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3539, .adv_w = 198, .box_w = 10, .box_h = 14, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 3574, .adv_w = 183, .box_w = 12, .box_h = 14, .ofs_x = 0, .ofs_y = 0}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/

static const uint16_t unicode_list_1[] = {
    0x0, 0x2, 0x14, 0x21, 0x33, 0x39, 0x3c, 0x3e,
    0x41, 0x4e, 0x50, 0x53, 0x59, 0x2009
};

/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    },
    {
        .range_start = 163, .range_length = 8202, .glyph_id_start = 96,
        .unicode_list = unicode_list_1, .glyph_id_ofs_list = NULL, .list_length = 14, .type = LV_FONT_FMT_TXT_CMAP_SPARSE_TINY
    }
};



/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
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
    .bpp = 2,
    .kern_classes = 0,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t deIllustrate = {
#else
lv_font_t deIllustrate = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 30,          /*The maximum line height required by the font*/
    .base_line = 7,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if DEILLUSTRATE*/

