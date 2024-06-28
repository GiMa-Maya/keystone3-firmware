#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGLOCK
#define LV_ATTRIBUTE_IMG_IMGLOCK
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGLOCK uint8_t imgLock_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0B, 0xFF, 0xFF, 0x51, 0xFF, 0xFF, 0x85, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x85, 0xFF, 0xFF, 0x47, 0xFF, 0xFF, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x15, 0xFF, 0xFF, 0x99, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x7B, 0xFF, 0xFF, 0x29, 0xFF, 0xFF, 0x0A, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x29, 0xFF, 0xFF, 0x84, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x99, 0xFF, 0xFF, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x7B, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x66, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x7A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x1F, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x8E, 0xFF, 0xFF, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x0A, 0xFF, 0xFF, 0x99, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x47, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x66, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x48, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x52, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x52, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x52, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x52, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x52, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x29, 0xFF, 0xFF, 0x47, 0xFF, 0xFF, 0x47, 0xFF, 0xFF, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x52, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x51, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x52, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x52, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x15, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x66, 0xFF, 0xFF, 0x66, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x29, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x52, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x52, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x47, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x66, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x66, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x48, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x66, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x48, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0x52, 0xFF, 0xFF, 0x66, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x14, 
  0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x51, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0x8E, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x8F, 0xFF, 0xFF, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0xFF, 0xFF, 0x14, 0xFF, 0xFF, 0x8E, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0x14, 0xFF, 0xFF, 0x8E, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xA3, 0xFF, 0xFF, 0xA3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
#endif
};

const lv_img_dsc_t imgLock = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 22,
  .data_size = 440 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = imgLock_map,
};
