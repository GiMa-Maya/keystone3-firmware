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

#ifndef LV_ATTRIBUTE_IMG_IMGBATTERYPOWER30
#define LV_ATTRIBUTE_IMG_IMGBATTERYPOWER30
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGBATTERYPOWER30 uint8_t imgBatteryPower30_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
    /*Pixel format: Alpha 8 bit, Red: 5 bit, Green: 6 bit, Blue: 5 bit  BUT the 2  color bytes are swapped*/
    0xfb, 0xe4, 0xfe, 0xfc, 0x25, 0xfe, 0xfc, 0x65, 0xfe, 0xfc, 0x86, 0xff, 0xfc, 0xc6, 0xff, 0xfd, 0x07, 0xff,
    0xfb, 0xe4, 0xff, 0xfc, 0x25, 0xfe, 0xfc, 0x65, 0xfe, 0xfc, 0x86, 0xfe, 0xfc, 0xc6, 0xfe, 0xfc, 0xe7, 0xff,
    0xfb, 0xe4, 0xff, 0xfc, 0x25, 0xff, 0xfc, 0x65, 0xfe, 0xfc, 0x86, 0xff, 0xfc, 0xc6, 0xfe, 0xfd, 0x07, 0xff,
    0xfb, 0xe4, 0xfe, 0xfc, 0x25, 0xfe, 0xfc, 0x65, 0xff, 0xfc, 0x86, 0xfe, 0xfc, 0xc6, 0xff, 0xfd, 0x07, 0xff,
    0xfb, 0xe4, 0xff, 0xfc, 0x25, 0xff, 0xfc, 0x65, 0xff, 0xfc, 0x86, 0xff, 0xfc, 0xc6, 0xff, 0xfd, 0x07, 0xff,
    0xfb, 0xe4, 0xff, 0xfc, 0x25, 0xfe, 0xfc, 0x65, 0xff, 0xfc, 0x86, 0xff, 0xfc, 0xc6, 0xfe, 0xfd, 0x07, 0xfe,
    0xfb, 0xe4, 0xfe, 0xfc, 0x25, 0xff, 0xfc, 0x65, 0xff, 0xfc, 0x86, 0xff, 0xfc, 0xc6, 0xfe, 0xfd, 0x07, 0xff,
    0xfb, 0xe4, 0xff, 0xfc, 0x25, 0xff, 0xfc, 0x65, 0xfe, 0xfc, 0x86, 0xff, 0xfc, 0xc6, 0xff, 0xfd, 0x07, 0xff,
    0xfb, 0xe4, 0xfe, 0xfc, 0x25, 0xff, 0xfc, 0x65, 0xfe, 0xfc, 0x86, 0xfe, 0xfc, 0xc6, 0xff, 0xfd, 0x07, 0xff,
    0xfb, 0xe4, 0xff, 0xfc, 0x25, 0xff, 0xfc, 0x65, 0xff, 0xfc, 0x86, 0xff, 0xfc, 0xc6, 0xff, 0xfd, 0x06, 0xfe,
#endif
};

const lv_img_dsc_t imgBatteryPower30 = {
    .header.always_zero = 0,
    .header.reserved = 0,
    .header.w = 6,
    .header.h = 10,
    .data_size = 60 * LV_IMG_PX_SIZE_ALPHA_BYTE,
    .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
    .data = imgBatteryPower30_map,
};
