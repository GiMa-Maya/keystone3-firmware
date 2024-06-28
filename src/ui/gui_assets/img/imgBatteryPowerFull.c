#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGBATTERYPOWERFULL
#define LV_ATTRIBUTE_IMG_IMGBATTERYPOWERFULL
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGBATTERYPOWERFULL uint8_t imgBatteryPowerFull_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x3D, 0xCC, 0xFE, 0x3D, 0xED, 0xFE, 0x46, 0x0D, 0xFF, 0x46, 0x2D, 0xFE, 0x4E, 0x2E, 0xFF, 0x56, 0x4E, 0xFF, 0x56, 0x6F, 0xFF, 0x5E, 0x8F, 0xFF, 0x5E, 0xB0, 0xFE, 0x66, 0xB0, 0xFF, 0x6E, 0xD1, 0xFF, 0x6E, 0xF1, 0xFF, 0x76, 0xF1, 0xFF, 0x77, 0x12, 0xFF, 0x7F, 0x32, 0xFE, 0x87, 0x53, 0xFF, 0x87, 0x53, 0xFF, 0x8F, 0x74, 0xFF, 0x8F, 0x94, 0xFF, 0x97, 0xB5, 0xFE, 
  0x3D, 0xCC, 0xFF, 0x3D, 0xED, 0xFE, 0x46, 0x0D, 0xFF, 0x46, 0x2E, 0xFE, 0x4E, 0x2E, 0xFF, 0x56, 0x4E, 0xFF, 0x56, 0x6F, 0xFE, 0x5E, 0x8F, 0xFF, 0x66, 0x90, 0xFF, 0x66, 0xB0, 0xFF, 0x6E, 0xD1, 0xFF, 0x6E, 0xF1, 0xFF, 0x77, 0x12, 0xFE, 0x77, 0x12, 0xFF, 0x7F, 0x32, 0xFF, 0x87, 0x53, 0xFE, 0x87, 0x73, 0xFE, 0x8F, 0x74, 0xFF, 0x8F, 0x94, 0xFF, 0x97, 0xB5, 0xFF, 
  0x3D, 0xCC, 0xFE, 0x3D, 0xED, 0xFE, 0x46, 0x0D, 0xFF, 0x46, 0x2E, 0xFE, 0x4E, 0x2E, 0xFF, 0x56, 0x4E, 0xFF, 0x56, 0x6F, 0xFF, 0x5E, 0x8F, 0xFE, 0x66, 0x90, 0xFF, 0x66, 0xB0, 0xFE, 0x6E, 0xD1, 0xFE, 0x6E, 0xF1, 0xFE, 0x77, 0x12, 0xFE, 0x77, 0x12, 0xFF, 0x7F, 0x32, 0xFF, 0x87, 0x53, 0xFE, 0x87, 0x53, 0xFF, 0x8F, 0x74, 0xFF, 0x8F, 0x94, 0xFF, 0x97, 0xB5, 0xFE, 
  0x3D, 0xCC, 0xFF, 0x3D, 0xED, 0xFF, 0x46, 0x0D, 0xFF, 0x46, 0x0E, 0xFF, 0x4E, 0x2E, 0xFF, 0x56, 0x4E, 0xFF, 0x56, 0x6F, 0xFF, 0x5E, 0x8F, 0xFF, 0x5E, 0x90, 0xFF, 0x66, 0xB0, 0xFE, 0x6E, 0xD1, 0xFF, 0x6E, 0xF1, 0xFF, 0x76, 0xF2, 0xFF, 0x77, 0x12, 0xFF, 0x7F, 0x32, 0xFF, 0x87, 0x53, 0xFF, 0x87, 0x53, 0xFF, 0x8F, 0x74, 0xFF, 0x8F, 0x94, 0xFF, 0x97, 0xB5, 0xFF, 
  0x3D, 0xCC, 0xFE, 0x3D, 0xED, 0xFF, 0x46, 0x0D, 0xFF, 0x46, 0x2E, 0xFE, 0x4E, 0x2E, 0xFF, 0x56, 0x4E, 0xFF, 0x56, 0x6F, 0xFF, 0x5E, 0x8F, 0xFF, 0x5E, 0x90, 0xFF, 0x66, 0xB0, 0xFF, 0x6E, 0xD1, 0xFF, 0x6E, 0xF1, 0xFF, 0x77, 0x12, 0xFE, 0x77, 0x12, 0xFE, 0x7F, 0x32, 0xFF, 0x87, 0x53, 0xFF, 0x87, 0x53, 0xFF, 0x8F, 0x74, 0xFF, 0x8F, 0x94, 0xFE, 0x97, 0xB5, 0xFF, 
  0x3D, 0xCC, 0xFF, 0x3D, 0xED, 0xFF, 0x46, 0x0D, 0xFF, 0x46, 0x2E, 0xFF, 0x4E, 0x2E, 0xFF, 0x56, 0x4E, 0xFF, 0x56, 0x6F, 0xFF, 0x5E, 0x8F, 0xFF, 0x5E, 0x90, 0xFF, 0x66, 0xB0, 0xFF, 0x6E, 0xD1, 0xFE, 0x6E, 0xF1, 0xFF, 0x76, 0xF1, 0xFF, 0x77, 0x12, 0xFF, 0x7F, 0x32, 0xFE, 0x87, 0x53, 0xFF, 0x87, 0x73, 0xFF, 0x8F, 0x74, 0xFF, 0x8F, 0x94, 0xFF, 0x97, 0xB5, 0xFF, 
  0x3D, 0xCC, 0xFF, 0x3D, 0xED, 0xFF, 0x46, 0x0D, 0xFF, 0x46, 0x0E, 0xFF, 0x4E, 0x2E, 0xFE, 0x56, 0x4E, 0xFE, 0x56, 0x6F, 0xFF, 0x5E, 0x8F, 0xFF, 0x5E, 0x90, 0xFF, 0x66, 0xB0, 0xFE, 0x6E, 0xD1, 0xFF, 0x6E, 0xD1, 0xFF, 0x77, 0x12, 0xFF, 0x7F, 0x12, 0xFF, 0x7F, 0x32, 0xFE, 0x87, 0x53, 0xFF, 0x87, 0x73, 0xFE, 0x8F, 0x74, 0xFF, 0x8F, 0x94, 0xFF, 0x97, 0xB5, 0xFF, 
  0x3D, 0xCC, 0xFF, 0x3D, 0xED, 0xFE, 0x46, 0x0D, 0xFF, 0x4E, 0x0E, 0xFF, 0x4E, 0x2E, 0xFF, 0x56, 0x4E, 0xFF, 0x56, 0x6F, 0xFE, 0x5E, 0x8F, 0xFF, 0x5E, 0x90, 0xFF, 0x66, 0xB0, 0xFF, 0x6E, 0xD1, 0xFE, 0x6E, 0xF1, 0xFF, 0x76, 0xF1, 0xFF, 0x77, 0x12, 0xFE, 0x7F, 0x32, 0xFF, 0x87, 0x53, 0xFF, 0x87, 0x73, 0xFF, 0x8F, 0x74, 0xFE, 0x8F, 0x94, 0xFF, 0x97, 0xB5, 0xFF, 
  0x3D, 0xCC, 0xFF, 0x3D, 0xED, 0xFF, 0x46, 0x0D, 0xFF, 0x46, 0x2D, 0xFE, 0x4E, 0x2E, 0xFF, 0x56, 0x4E, 0xFF, 0x56, 0x6F, 0xFE, 0x5E, 0x8F, 0xFF, 0x66, 0x90, 0xFF, 0x66, 0xB0, 0xFF, 0x6E, 0xD1, 0xFF, 0x6E, 0xF1, 0xFF, 0x76, 0xF2, 0xFF, 0x77, 0x12, 0xFF, 0x7F, 0x32, 0xFF, 0x87, 0x53, 0xFF, 0x87, 0x53, 0xFF, 0x8F, 0x74, 0xFF, 0x8F, 0x94, 0xFF, 0x97, 0xB5, 0xFF, 
  0x3D, 0xCC, 0xFE, 0x3D, 0xED, 0xFE, 0x46, 0x0D, 0xFF, 0x46, 0x2E, 0xFF, 0x4E, 0x2E, 0xFF, 0x56, 0x4E, 0xFE, 0x56, 0x6F, 0xFF, 0x5E, 0x8F, 0xFE, 0x5E, 0x90, 0xFE, 0x66, 0xB0, 0xFF, 0x6E, 0xD1, 0xFE, 0x6E, 0xF1, 0xFF, 0x76, 0xF2, 0xFF, 0x7F, 0x12, 0xFF, 0x7F, 0x32, 0xFF, 0x87, 0x53, 0xFE, 0x87, 0x53, 0xFF, 0x8F, 0x74, 0xFF, 0x8F, 0x94, 0xFE, 0x97, 0xB5, 0xFF
#endif
};

const lv_img_dsc_t imgBatteryPowerFull = {
  .header.always_zero = 0,
  .header.w = 20,
  .header.h = 10,
  .data_size = 200 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = imgBatteryPowerFull_map,
};
