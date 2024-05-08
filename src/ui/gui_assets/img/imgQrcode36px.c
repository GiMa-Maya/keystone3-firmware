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

#ifndef LV_ATTRIBUTE_IMG_IMGQRCODE36PX
#define LV_ATTRIBUTE_IMG_IMGQRCODE36PX
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGQRCODE36PX uint8_t imgQrcode36px_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
    /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xbf, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0xbf, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xbf, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0xbf, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xbf, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0xbf, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xbf, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0xbf, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xbf, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0xbf, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xbf, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xbf, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0xbf, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xbf, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0xbf, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x80, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0xff, 0x27, 0x19, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x27, 0x19, 0x40, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x80, 0x27, 0x19, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
#endif
};

const lv_img_dsc_t imgQrcode36px = {
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 36,
    .header.h = 36,
    .data_size = 1296 * LV_IMG_PX_SIZE_ALPHA_BYTE,
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = imgQrcode36px_map,
};
