#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_EMOJISTAR
#define LV_ATTRIBUTE_IMG_EMOJISTAR
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_EMOJISTAR uint8_t emojiStar_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
    /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x73, 0xFF, 0xFF, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x73, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x3A, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0E, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x56, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0E, 0xFF, 0xFF, 0x56, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0x48, 0xFF, 0xFF, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0xFF, 0xFF, 0x65, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0x65, 0xFF, 0xFF, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0E, 0xFF, 0xFF, 0x3A, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0x3A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0x0E, 0xFF, 0xFF, 0xBA, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xC8, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0x1D, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x56, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xBA, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xBA, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xD7, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x39, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x73, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x2B, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x72, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x72, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x9E, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x9E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x3A, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xC8, 0xFF, 0xFF, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x3A, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0x2C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x3A, 0xFF, 0xFF, 0x73, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x56, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x56, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x56, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x56, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x56, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x73, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x65, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x73, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x73, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0x65, 0xFF, 0xFF, 0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0xFF, 0xFF, 0x56, 0xFF, 0xFF, 0xAC, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x73, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0x72, 0xFF, 0xFF, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0xFF, 0xFF, 0x72, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0xE5, 0xFF, 0xFF, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x81, 0xFF, 0xFF, 0xD7, 0xFF, 0xFF, 0x80, 0xFF, 0xFF, 0x39, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x39, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xC9, 0xFF, 0xFF, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#endif
};

const lv_img_dsc_t emojiStar = {
    .header.always_zero = 0,
    .header.w = 36,
    .header.h = 36,
    .data_size = 1296 * LV_IMG_PX_SIZE_ALPHA_BYTE,
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = emojiStar_map,
};
