#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGDISCORD
#define LV_ATTRIBUTE_IMG_IMGDISCORD
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGDISCORD uint8_t imgDiscord_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xB4, 0x1F, 0x10, 0xA4, 0x5F, 0x40, 0xAC, 0x3F, 0x8F, 0xA4, 0x3F, 0xCF, 0xAC, 0x3F, 0xAF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xCF, 0xAC, 0x3F, 0x8F, 0xA4, 0x5F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x5F, 0x40, 0xAC, 0x3F, 0x8F, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x80, 0xA4, 0x3F, 0x70, 0xA4, 0x3F, 0x80, 0xA4, 0x3F, 0x9F, 0xAC, 0x3F, 0x8F, 0xA4, 0x3F, 0x80, 0xA4, 0x3F, 0x70, 0xA4, 0x3F, 0x8F, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xEF, 0xAC, 0x3F, 0x9F, 0xAC, 0x5F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x5F, 0x40, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xDF, 0xB4, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x5F, 0x7F, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x5F, 0x20, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xEF, 0xB4, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x3F, 0x60, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xEF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x5F, 0x40, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x3F, 0x9F, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0x40, 0x00, 0x00, 0x00, 0xAC, 0x5F, 0x20, 0xA4, 0x3F, 0x90, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xAC, 0x3F, 0x90, 0xB4, 0x1F, 0x10, 0x00, 0x00, 0x00, 0xAC, 0x3F, 0x60, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xEF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x3F, 0x30, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xAC, 0x3F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xBF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0x40, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x5F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0x50, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0x70, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xAC, 0x3F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0x80, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0x70, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xA0, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x3F, 0x9F, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x3F, 0x30, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xBF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xDF, 0xAC, 0x5F, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x5F, 0x7F, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xAC, 0x5F, 0x7F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x5F, 0x20, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xB0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xBF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xBF, 0xAC, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xCF, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xBF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xBF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xA0, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xCF, 0xA4, 0x3F, 0xA0, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0x80, 0xA4, 0x3F, 0xBF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0x9F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x5F, 0x20, 0xA4, 0x3F, 0xA0, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xAC, 0x3F, 0x9F, 0xAC, 0x5F, 0x20, 0xA4, 0x3F, 0x40, 0xAC, 0x3F, 0x90, 0xA4, 0x3F, 0xBF, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0xBF, 0xAC, 0x3F, 0x90, 0xA4, 0x3F, 0x40, 0xB4, 0x1F, 0x10, 0xAC, 0x5F, 0x7F, 0xA4, 0x3F, 0xEF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xAC, 0x3F, 0xAF, 0xB4, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x3F, 0x60, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xDF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x5F, 0x20, 0xA4, 0x5F, 0x20, 0xB4, 0x1F, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xAC, 0x3F, 0x60, 0xA4, 0x3F, 0xDF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xAC, 0x3F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0x40, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xFF, 0xA4, 0x3F, 0xBF, 0xAC, 0x3F, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0x40, 0xA4, 0x3F, 0xA0, 0xA4, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xA4, 0x3F, 0x90, 0xAC, 0x3F, 0x90, 0xA4, 0x3F, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#endif
};

const lv_img_dsc_t imgDiscord = {
  .header.always_zero = 0,
  .header.w = 36,
  .header.h = 36,
  .data_size = 1296 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = imgDiscord_map,
};
