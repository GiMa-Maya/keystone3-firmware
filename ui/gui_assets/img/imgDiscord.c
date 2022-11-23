#ifdef __has_include
#if __has_include("lvgl.h")
#ifndef LV_LVGL_H_INCLUDE_SIMPLE
#define LV_LVGL_H_INCLUDE_SIMPLE
#endif
#endif
#endif

#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif


#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGDISCORD
#define LV_ATTRIBUTE_IMG_IMGDISCORD
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGDISCORD uint8_t imgDiscord_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
    /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x1f, 0x10, 0xa4, 0x3f, 0x40, 0xac, 0x3f, 0x90, 0xac, 0x3f, 0xcf, 0xac, 0x3f, 0xaf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xcf, 0xac, 0x3f, 0x90, 0xac, 0x3f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x3f, 0x40, 0xac, 0x3f, 0x90, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x80, 0xac, 0x5f, 0x6f, 0xac, 0x3f, 0x80, 0xac, 0x3f, 0x9f, 0xac, 0x3f, 0x9f, 0xac, 0x3f, 0x80, 0xac, 0x5f, 0x6f, 0xac, 0x3f, 0x8f, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0x9f, 0xa4, 0x1f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x3f, 0x40, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xdf, 0xa4, 0x1f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x7f, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x1f, 0x20, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xef, 0xa4, 0x1f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x60, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x40, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xa0, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0x40, 0x00, 0x00, 0x00, 0xa4, 0x1f, 0x20, 0xac, 0x3f, 0x90, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x90, 0xa4, 0x1f, 0x10, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x60, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xef, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x5f, 0x30, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x5f, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xbf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x40, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xa4, 0x1f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x50, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x70, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x80, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x70, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xa0, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xa0, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x5f, 0x30, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xbf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xdf, 0xa4, 0x1f, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x7f, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x1f, 0x20, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xb0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xbf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xbf, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xdf, 0xac, 0x3f, 0xcf, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xbf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xbf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xbf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0xa0, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xcf, 0xac, 0x3f, 0xa0, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0x80, 0xac, 0x3f, 0xbf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x9f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x1f, 0x20, 0xac, 0x3f, 0xa0, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0x9f, 0xa4, 0x1f, 0x20, 0xac, 0x3f, 0x40, 0xac, 0x3f, 0x90, 0xac, 0x3f, 0xbf, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0xbf, 0xac, 0x3f, 0x90, 0xac, 0x3f, 0x40, 0xa4, 0x1f, 0x10, 0xac, 0x3f, 0x7f, 0xac, 0x3f, 0xef, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xaf, 0xa4, 0x1f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x60, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xdf, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xa4, 0x1f, 0x20, 0xa4, 0x1f, 0x20, 0xa4, 0x1f, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xdf, 0xac, 0x3f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x60, 0xac, 0x5f, 0xdf, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x5f, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x40, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xff, 0xac, 0x3f, 0xbf, 0xac, 0x5f, 0x5f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x40, 0xac, 0x3f, 0xa0, 0xac, 0x3f, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xac, 0x3f, 0x90, 0xac, 0x3f, 0x90, 0xac, 0x3f, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
};

const lv_img_dsc_t imgDiscord = {
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 36,
    .header.h = 36,
    .data_size = 1296 * LV_IMG_PX_SIZE_ALPHA_BYTE,
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = imgDiscord_map,
};
