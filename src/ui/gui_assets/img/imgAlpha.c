#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGALPHA
#define LV_ATTRIBUTE_IMG_IMGALPHA
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGALPHA uint8_t imgAlpha_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
    /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x27, 0x0D, 0xFE, 0x07, 0x1D, 0xFE, 0x26, 0x2C, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x07, 0x29, 0xFE, 0x07, 0x20, 0xDD, 0xA9, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC4, 0x08, 0x04, 0xFE, 0x47, 0x1C, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x07, 0x1D, 0xFD, 0x4B, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xC4, 0x08, 0x04, 0xF5, 0xE7, 0x2A, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x07, 0x29, 0xFD, 0x4B, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFE, 0x47, 0x1C, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x07, 0x1D, 0x00, 0x00, 0x00,
    0xDD, 0xA4, 0x07, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xEE, 0x27, 0x0D,
    0xFE, 0x46, 0x20, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x07, 0x1D,
    0xF6, 0x07, 0x2A, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0x2D,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x40, 0xFE, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x40, 0xFE, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x66, 0xF6, 0x26, 0x73, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xB3, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0xF2, 0xF6, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xB3, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x66, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0x8C, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xB3, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x73, 0xFE, 0x06, 0x80, 0xFE, 0x06, 0x4D, 0xF6, 0x06, 0xA6, 0xFE, 0x06, 0xCC, 0xF6, 0x06, 0xB3, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xB3, 0xFE, 0x26, 0x66, 0xF6, 0x06, 0xA6, 0xFE, 0x06, 0xCC, 0xF6, 0x06, 0xA6, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x40, 0xFE, 0x06, 0x8C, 0xFE, 0x06, 0xB3, 0xFE, 0x06, 0xCC, 0xF6, 0x06, 0xA6, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x4D, 0xFE, 0x06, 0xFF, 0xFE, 0x26, 0x66, 0xF6, 0x26, 0x40, 0xFE, 0x06, 0xFF, 0xFE, 0x26, 0x66, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xE5, 0xF6, 0x06, 0xD9, 0xFE, 0x06, 0x99, 0xF6, 0x06, 0x80, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xF2, 0xFE, 0x26, 0x59, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xF6, 0x06, 0xD9, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0x8C, 0xF6, 0x06, 0x80, 0xFE, 0x06, 0xBF, 0xFE, 0x06, 0xF2, 0xF6, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x66, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0x8C, 0xF6, 0x06, 0x80, 0xFE, 0x06, 0xBF, 0xFE, 0x06, 0xF2, 0xF6, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x80, 0xFE, 0x06, 0xE5, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xCC, 0xF6, 0x06, 0xA6, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xFF, 0xFE, 0x26, 0x59, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xFF, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xF2, 0xFE, 0x06, 0x8C, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x26, 0x40, 0xFE, 0x06, 0xF2, 0xFE, 0x06, 0x80, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0x80, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x26, 0x73, 0xFE, 0x06, 0xF2, 0xF6, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xF2, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0x80, 0xFE, 0x06, 0xFF, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0x99, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x4D, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0x80, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x66, 0xFE, 0x06, 0xFF, 0xFE, 0x06, 0xF2, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0xFF, 0xFE, 0x06, 0x80, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xE5, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x66, 0xFE, 0x06, 0xFF, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xB3, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0x99, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x66, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0xE5, 0xF6, 0x06, 0xD9, 0xFE, 0x06, 0xF2, 0xFE, 0x06, 0x80, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xCC, 0xF6, 0x06, 0x80, 0xF6, 0x06, 0x80, 0xF6, 0x06, 0x80, 0xF6, 0x06, 0x80, 0xF6, 0x06, 0xBF, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xE5, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x66, 0xFE, 0x06, 0xFF, 0xF6, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xB3, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0x99, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x4D, 0xFE, 0x06, 0xFF, 0xFE, 0x06, 0x99, 0xFE, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0x80, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x4D, 0xFE, 0x06, 0xFF, 0xFE, 0x06, 0x73, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x66, 0xFE, 0x06, 0xFF, 0xFE, 0x26, 0x59, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xFF, 0xF6, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xE5, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xB3, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0x99, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x8C, 0xFE, 0x06, 0xF2, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x4D, 0xFE, 0x06, 0xFF, 0xFE, 0x06, 0x80, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x80, 0xFE, 0x06, 0xE5, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xD9, 0xFE, 0x06, 0x99, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xF2, 0xFE, 0x06, 0xB2, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x66, 0xFE, 0x06, 0xFF, 0xFE, 0x06, 0x8C, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xB3, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0x99, 0xFE, 0x26, 0x33, 0xF6, 0x26, 0x73, 0xFE, 0x06, 0xFF, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x40, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xFF, 0xFE, 0x06, 0x80, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xD9, 0xF6, 0x06, 0xB3, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xF2, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xD9, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xFF, 0xFE, 0x06, 0xF2, 0xFE, 0x06, 0xFF, 0xF6, 0x06, 0xA6, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0xB3, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0xCC, 0xFE, 0x06, 0x99, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0xA6, 0xFE, 0x06, 0xFF, 0xFE, 0x06, 0xE5, 0xFE, 0x06, 0xF2, 0xFE, 0x06, 0x8C, 0xF6, 0x06, 0xB3, 0xFE, 0x06, 0x80, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xE5, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x40, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x40, 0xFE, 0x26, 0x4D, 0xFE, 0x26, 0x40, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33,
    0xF6, 0x26, 0x2D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xE5, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x06, 0x2A,
    0xFE, 0x07, 0x1D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x99, 0xFE, 0x06, 0xE5, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x07, 0x20,
    0xEE, 0x27, 0x0D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x06, 0x8C, 0xFE, 0x06, 0xCC, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0xAB, 0x06,
    0x00, 0x00, 0x00, 0xFE, 0x07, 0x1D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x07, 0x1D, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFD, 0x4B, 0x03, 0xFE, 0x47, 0x29, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF5, 0xE7, 0x2A, 0xFD, 0x4B, 0x03, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFD, 0x4B, 0x03, 0xFE, 0x07, 0x1D, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x07, 0x1D, 0xFD, 0x4B, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0xA5, 0x06, 0xFE, 0x46, 0x20, 0xF6, 0x07, 0x2A, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xFE, 0x26, 0x33, 0xF6, 0x26, 0x2D, 0xFE, 0x07, 0x1D, 0xEE, 0x27, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#endif
};

const lv_img_dsc_t imgAlpha = {
    .header.always_zero = 0,
    .header.w = 55,
    .header.h = 28,
    .data_size = 1540 * LV_IMG_PX_SIZE_ALPHA_BYTE,
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = imgAlpha_map,
};
