#if defined(LV_LVGL_H_INCLUDE_SIMPLE)
#include "lvgl.h"
#else
#include "../lvgl/lvgl.h"
#endif

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_IMGJUPITER
#define LV_ATTRIBUTE_IMG_IMGJUPITER
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_LARGE_CONST LV_ATTRIBUTE_IMG_IMGJUPITER uint8_t imgJupiter_map[] = {
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format:  Blue: 5 bit Green: 6 bit, Red: 5 bit, Alpha 8 bit  BUT the 2  color bytes are swapped*/
  0x00, 0x00, 0x00, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x01, 0xC7, 0x8F, 0x11, 0xCF, 0xD1, 0x20, 0xCF, 0xD1, 0x20, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0xFF, 0xFF, 0x01, 0x00, 0x00, 0x02, 0x84, 0x10, 0x02, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0x00, 0x00, 0x03, 0xC7, 0x70, 0x62, 0xCF, 0x90, 0xA0, 0xCF, 0x91, 0xDF, 0xCF, 0xB1, 0xFE, 0xCF, 0x90, 0xFF, 0xCF, 0x90, 0xD0, 0xCF, 0x90, 0xA0, 0xBF, 0x50, 0x22, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x5A, 0xAB, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x84, 0x10, 0x02, 0x00, 0x00, 0x03, 0x5A, 0xAB, 0x03, 0x42, 0x08, 0x04, 0x42, 0x08, 0x04, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0x42, 0x08, 0x04, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0xC7, 0x50, 0x22, 0xCF, 0x90, 0xA1, 0xCF, 0x91, 0xDF, 0xCF, 0x90, 0xFE, 0xCF, 0x90, 0xFF, 0xC7, 0x90, 0xA1, 0xBF, 0x0F, 0x23, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0x84, 0x10, 0x02, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0xA7, 0x33, 0x42, 0xAF, 0x33, 0x91, 0xAF, 0x52, 0xA1, 0xB7, 0x72, 0xB0, 0xB7, 0x52, 0x91, 0xBF, 0x71, 0x71, 0xB7, 0x31, 0x43, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x42, 0x08, 0x04, 0x00, 0x00, 0x04, 0xC7, 0x70, 0x62, 0xCF, 0x91, 0xDF, 0xCF, 0x90, 0xFF, 0xCF, 0x91, 0xDF, 0xC7, 0x70, 0x42, 0x5A, 0xAB, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x84, 0x10, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x96, 0xF3, 0x23, 0x9F, 0x33, 0x71, 0xA7, 0x33, 0x72, 0xA7, 0x53, 0x81, 0xAF, 0x53, 0xB0, 0xB7, 0x72, 0xD0, 0xB7, 0x72, 0xFF, 0xBF, 0x72, 0xFF, 0xBF, 0x91, 0xDF, 0xBF, 0x71, 0xA1, 0xBF, 0x10, 0x23, 0x42, 0x08, 0x04, 0x00, 0x00, 0x04, 0xC7, 0x0F, 0x23, 0xCF, 0x90, 0xA1, 0xCF, 0x90, 0xFE, 0xCF, 0x90, 0xFF, 0xC7, 0x70, 0x52, 0x42, 0x08, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x5A, 0xAB, 0x03, 0x5A, 0xAB, 0x03, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x42, 0x08, 0x04, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x42, 0x08, 0x04, 0x9E, 0xB0, 0x24, 0xAF, 0x52, 0x62, 0xB7, 0x72, 0xC1, 0xBF, 0x71, 0xFF, 0xC7, 0x91, 0xFF, 0xC7, 0x71, 0xA1, 0xB6, 0xF0, 0x24, 0x31, 0xA6, 0x05, 0x00, 0x00, 0x04, 0xC7, 0x50, 0x43, 0xCF, 0x91, 0xDF, 0xCF, 0xB1, 0xEE, 0xBF, 0x50, 0x22, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x5A, 0xAB, 0x03, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x7E, 0xB4, 0x23, 0x86, 0xB3, 0x23, 0x31, 0xA6, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, 0x05, 0x31, 0xA6, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, 0x05, 0xA6, 0xB0, 0x25, 0xBF, 0x72, 0xA1, 0xBF, 0x91, 0xFE, 0xC7, 0x91, 0xEF, 0xC7, 0x71, 0x81, 0x31, 0xA6, 0x05, 0x00, 0x00, 0x04, 0xBE, 0xEF, 0x24, 0xCF, 0x91, 0xDF, 0xCF, 0x90, 0xC0, 0x5A, 0xAB, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x76, 0x75, 0x23, 0x7E, 0xF6, 0xC0, 0x7F, 0x16, 0xEF, 0x87, 0x15, 0xFF, 0x8F, 0x15, 0xFF, 0x8F, 0x15, 0xFE, 0x97, 0x34, 0xD0, 0x97, 0x14, 0xB1, 0x96, 0xF3, 0x63, 0x8D, 0xB1, 0x15, 0x31, 0xA6, 0x05, 0x31, 0xA6, 0x05, 0x31, 0xA6, 0x05, 0xAE, 0xF0, 0x34, 0xBF, 0x72, 0xDF, 0xBF, 0x91, 0xFF, 0xBF, 0x71, 0xB0, 0xB6, 0xF0, 0x24, 0x31, 0xA6, 0x05, 0xAE, 0x0D, 0x14, 0xCF, 0x90, 0xD0, 0xC7, 0x70, 0x42, 0x00, 0x00, 0x00, 
  0x5E, 0x35, 0x12, 0x6E, 0xD7, 0xD0, 0x76, 0xD6, 0xD0, 0x76, 0xF6, 0xB0, 0x7E, 0xF6, 0xB0, 0x86, 0xF5, 0xC1, 0x87, 0x15, 0xD0, 0x8F, 0x15, 0xFF, 0x8F, 0x35, 0xFF, 0x97, 0x34, 0xFF, 0x97, 0x34, 0xEF, 0x9F, 0x34, 0xA1, 0x8E, 0x51, 0x25, 0x31, 0xA6, 0x05, 0x00, 0x00, 0x05, 0x00, 0x00, 0x05, 0xB7, 0x51, 0x82, 0xBF, 0x72, 0xFF, 0xBF, 0x91, 0xDF, 0xAE, 0xB0, 0x24, 0x00, 0x00, 0x04, 0xB6, 0xCF, 0x13, 0xCF, 0x90, 0x91, 0x00, 0x00, 0x00, 
  0x66, 0x37, 0x12, 0x5D, 0x93, 0x14, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x31, 0xA6, 0x05, 0x7E, 0x73, 0x24, 0x8E, 0xF4, 0x62, 0x8F, 0x15, 0xC1, 0x8F, 0x34, 0xFE, 0x97, 0x34, 0xFF, 0x9F, 0x34, 0xFF, 0x9F, 0x13, 0x83, 0x31, 0xA6, 0x05, 0x31, 0xA6, 0x05, 0x31, 0xA6, 0x05, 0xAF, 0x31, 0x54, 0xB7, 0x72, 0xEE, 0xBF, 0x71, 0xE0, 0xAE, 0xB0, 0x24, 0x31, 0xA6, 0x05, 0xB6, 0x4D, 0x13, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x42, 0x08, 0x04, 0x4D, 0x52, 0x15, 0x5E, 0x56, 0x34, 0x66, 0x56, 0x44, 0x66, 0x55, 0x34, 0x31, 0xA6, 0x05, 0x29, 0x65, 0x06, 0x00, 0x00, 0x05, 0x31, 0xA6, 0x05, 0x7E, 0x52, 0x25, 0x8F, 0x14, 0xA1, 0x97, 0x34, 0xFF, 0x97, 0x34, 0xFF, 0x9F, 0x34, 0xE0, 0x86, 0x51, 0x25, 0x31, 0xA6, 0x05, 0x31, 0xA6, 0x05, 0xAE, 0xF1, 0x34, 0xB7, 0x72, 0xEF, 0xB7, 0x72, 0xD0, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x4E, 0x78, 0x31, 0x56, 0x99, 0xC0, 0x5E, 0xB8, 0xFF, 0x5E, 0xB8, 0xFF, 0x66, 0xD8, 0xFF, 0x66, 0xD7, 0xFF, 0x6E, 0xD7, 0xFF, 0x6E, 0xD7, 0xC0, 0x6E, 0xB6, 0x63, 0x6E, 0x14, 0x25, 0x00, 0x00, 0x06, 0x29, 0x65, 0x06, 0x7E, 0x52, 0x25, 0x8F, 0x15, 0xDF, 0x97, 0x34, 0xFF, 0x97, 0x34, 0xFF, 0x97, 0x13, 0x73, 0x31, 0xA6, 0x05, 0x29, 0x65, 0x06, 0xA6, 0xD1, 0x34, 0xB7, 0x72, 0xEF, 0xB7, 0x52, 0x82, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 
  0x46, 0x9A, 0x7F, 0x4E, 0x99, 0xFF, 0x4E, 0x99, 0xFE, 0x56, 0xB9, 0xFE, 0x5E, 0xB8, 0xFF, 0x5E, 0xB8, 0xFF, 0x66, 0xD7, 0xFF, 0x66, 0xD7, 0xFE, 0x6E, 0xD7, 0xFF, 0x76, 0xF6, 0xFF, 0x76, 0xD6, 0xA1, 0x6D, 0xF3, 0x26, 0x00, 0x00, 0x06, 0x29, 0x65, 0x06, 0x8E, 0xF4, 0x82, 0x8F, 0x35, 0xFE, 0x97, 0x34, 0xFF, 0x97, 0x14, 0x82, 0x31, 0xA6, 0x05, 0x31, 0xA6, 0x05, 0xA7, 0x32, 0x62, 0xAF, 0x52, 0xEF, 0x8E, 0x10, 0x14, 0x00, 0x00, 0x00, 
  0x46, 0x59, 0x21, 0x45, 0xD6, 0x25, 0x31, 0xA6, 0x05, 0x29, 0x65, 0x06, 0x29, 0x65, 0x06, 0x56, 0x36, 0x34, 0x5E, 0x97, 0x63, 0x66, 0xB7, 0xB0, 0x66, 0xD7, 0xFF, 0x6E, 0xD7, 0xFF, 0x6E, 0xD7, 0xFE, 0x76, 0xF6, 0xE0, 0x76, 0xB6, 0x63, 0x00, 0x00, 0x06, 0x29, 0x65, 0x06, 0x86, 0xF4, 0x73, 0x8F, 0x15, 0xFF, 0x97, 0x34, 0xFF, 0x8E, 0xF4, 0x63, 0x00, 0x00, 0x05, 0x31, 0xA6, 0x05, 0xA7, 0x33, 0xB0, 0xA7, 0x33, 0x72, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x35, 0xD8, 0x24, 0x3E, 0x59, 0x53, 0x46, 0x59, 0x63, 0x46, 0x38, 0x43, 0x45, 0x55, 0x15, 0x29, 0x65, 0x06, 0x31, 0xA6, 0x05, 0x5D, 0xF5, 0x26, 0x66, 0xB7, 0xA1, 0x66, 0xD7, 0xFF, 0x6E, 0xD7, 0xFF, 0x6E, 0xD7, 0xFF, 0x76, 0xD6, 0x82, 0x29, 0x65, 0x06, 0x31, 0xA6, 0x05, 0x86, 0xF4, 0x62, 0x8F, 0x15, 0xFF, 0x8F, 0x15, 0xEF, 0x86, 0x73, 0x24, 0x31, 0xA6, 0x05, 0x96, 0xF2, 0x23, 0x9F, 0x33, 0x81, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x36, 0x5B, 0xDF, 0x36, 0x7B, 0xFE, 0x3E, 0x7A, 0xFF, 0x46, 0x7A, 0xFF, 0x46, 0x99, 0xFF, 0x4E, 0x79, 0xD1, 0x4E, 0x78, 0x63, 0x4D, 0xD5, 0x25, 0x29, 0x65, 0x06, 0x55, 0xD5, 0x25, 0x66, 0xD7, 0xD0, 0x66, 0xD7, 0xFE, 0x6E, 0xD7, 0xFF, 0x6E, 0xD6, 0xA1, 0x29, 0x65, 0x06, 0x29, 0x65, 0x06, 0x7E, 0xD5, 0x92, 0x87, 0x15, 0xFF, 0x8F, 0x15, 0xC0, 0x31, 0xA6, 0x05, 0x00, 0x00, 0x04, 0x96, 0xB3, 0x24, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x2E, 0x3B, 0x82, 0x2E, 0x5B, 0xFE, 0x36, 0x7B, 0xFF, 0x3E, 0x7A, 0xFE, 0x3E, 0x7A, 0xFF, 0x46, 0x7A, 0xFF, 0x46, 0x99, 0xFF, 0x4E, 0x99, 0xE0, 0x4E, 0x78, 0x82, 0x29, 0x65, 0x06, 0x29, 0x65, 0x06, 0x5E, 0x97, 0x82, 0x66, 0xD7, 0xFF, 0x6E, 0xD7, 0xFF, 0x6E, 0xD7, 0x91, 0x00, 0x00, 0x05, 0x31, 0xA6, 0x05, 0x7E, 0xF6, 0xD0, 0x87, 0x15, 0xFE, 0x65, 0x51, 0x15, 0x42, 0x08, 0x04, 0x42, 0x08, 0x04, 0x00, 0x00, 0x00, 
  0x84, 0x10, 0x02, 0x42, 0x08, 0x04, 0x2D, 0xDA, 0x24, 0x2D, 0xB9, 0x34, 0x36, 0x3A, 0x63, 0x36, 0x5A, 0xA1, 0x3E, 0x7A, 0xFE, 0x3E, 0x7A, 0xFE, 0x46, 0x9A, 0xFF, 0x4E, 0x99, 0xFF, 0x4E, 0x99, 0xDF, 0x4D, 0xD6, 0x25, 0x00, 0x00, 0x06, 0x5E, 0x97, 0x82, 0x66, 0xB8, 0xFF, 0x66, 0xD7, 0xFF, 0x66, 0x76, 0x54, 0x42, 0x08, 0x04, 0x76, 0x95, 0x43, 0x7E, 0xF6, 0xFE, 0x7E, 0xD5, 0x62, 0x00, 0x00, 0x04, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x1D, 0x99, 0x24, 0x26, 0x1B, 0x82, 0x26, 0x1A, 0x54, 0x31, 0xA6, 0x05, 0x35, 0xB7, 0x25, 0x36, 0x5A, 0x82, 0x3E, 0x7A, 0xFE, 0x3E, 0x7A, 0xFF, 0x46, 0x9A, 0xFF, 0x46, 0x99, 0xE0, 0x45, 0xB6, 0x25, 0x29, 0x65, 0x06, 0x5E, 0xB8, 0xC0, 0x5E, 0xB8, 0xFF, 0x66, 0xB7, 0xE0, 0x00, 0x00, 0x05, 0x31, 0xA6, 0x05, 0x76, 0xD6, 0xC0, 0x76, 0xD6, 0x81, 0x31, 0xA6, 0x05, 0x5A, 0xAB, 0x03, 0x00, 0x00, 0x00, 
  0x84, 0x10, 0x02, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x1E, 0x1C, 0x82, 0x1E, 0x3C, 0xFF, 0x26, 0x3C, 0xE0, 0x26, 0x3B, 0xA1, 0x25, 0x78, 0x25, 0x35, 0xB7, 0x25, 0x3E, 0x7A, 0xDF, 0x3E, 0x7A, 0xFF, 0x46, 0x7A, 0xFF, 0x46, 0x99, 0xDF, 0x3D, 0x14, 0x16, 0x4D, 0x54, 0x15, 0x56, 0xB8, 0xEE, 0x5E, 0xB8, 0xFF, 0x56, 0x57, 0x44, 0x31, 0xA6, 0x05, 0x6E, 0xB7, 0x92, 0x66, 0x76, 0x33, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x00, 0x00, 0x00, 
  0x84, 0x10, 0x02, 0x42, 0x08, 0x04, 0x00, 0x00, 0x04, 0x31, 0xA6, 0x05, 0x1E, 0x1C, 0x73, 0x1E, 0x3C, 0xFF, 0x1E, 0x3C, 0xFE, 0x26, 0x3C, 0xE0, 0x26, 0x1A, 0x54, 0x24, 0xD3, 0x16, 0x36, 0x5A, 0xB1, 0x3E, 0x7A, 0xFF, 0x3E, 0x7A, 0xFF, 0x46, 0x59, 0x82, 0x00, 0x00, 0x06, 0x4E, 0x78, 0x82, 0x56, 0x99, 0xFF, 0x56, 0x98, 0x92, 0x00, 0x00, 0x04, 0x5D, 0x93, 0x14, 0x42, 0x08, 0x04, 0x00, 0x00, 0x04, 0x5A, 0xAB, 0x03, 0x00, 0x00, 0x00, 
  0x84, 0x10, 0x02, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x1D, 0x9A, 0x24, 0x1E, 0x3C, 0xC0, 0x1E, 0x3C, 0xFE, 0x26, 0x3C, 0xFE, 0x26, 0x3B, 0x82, 0x35, 0x55, 0x15, 0x36, 0x5B, 0xD0, 0x36, 0x7B, 0xFE, 0x3E, 0x7A, 0xEF, 0x35, 0x55, 0x15, 0x45, 0x96, 0x14, 0x4E, 0x99, 0xFF, 0x4E, 0x79, 0x82, 0x00, 0x00, 0x05, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x5A, 0xAB, 0x03, 0x42, 0x08, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x01, 0x42, 0x08, 0x04, 0x42, 0x08, 0x04, 0x42, 0x08, 0x04, 0x00, 0x00, 0x04, 0x31, 0xA6, 0x05, 0x31, 0xA6, 0x05, 0x15, 0xDB, 0x43, 0x1E, 0x3C, 0xA1, 0x1E, 0x3C, 0xDF, 0x25, 0xFB, 0x53, 0x2D, 0xB8, 0x25, 0x2E, 0x5B, 0xEF, 0x36, 0x5B, 0xFE, 0x36, 0x3A, 0x63, 0x31, 0xA6, 0x05, 0x46, 0x58, 0x33, 0x42, 0x08, 0x04, 0x00, 0x00, 0x04, 0x42, 0x08, 0x04, 0x42, 0x08, 0x04, 0x5A, 0xAB, 0x03, 0x42, 0x08, 0x04, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x26, 0x3A, 0x11, 0x00, 0x00, 0x01, 0x26, 0x3A, 0x11, 0x26, 0x3A, 0x11, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00
#endif
};

const lv_img_dsc_t imgJupiter = {
  .header.always_zero = 0,
  .header.w = 24,
  .header.h = 24,
  .data_size = 576 * LV_IMG_PX_SIZE_ALPHA_BYTE,
  .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
  .data = imgJupiter_map,
};
