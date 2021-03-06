#include "lvgl.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

#ifndef LV_ATTRIBUTE_IMG_BLUETOOTH
#define LV_ATTRIBUTE_IMG_BLUETOOTH
#endif

const LV_ATTRIBUTE_MEM_ALIGN LV_ATTRIBUTE_IMG_BLUETOOTH uint8_t bluetooth_map[] = {
#if LV_COLOR_DEPTH == 1 || LV_COLOR_DEPTH == 8
  /*Pixel format: Red: 3 bit, Green: 3 bit, Blue: 2 bit*/
  0x00, 0x00, 0x00, 0x00, 0x25, 0xdb, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x49, 0x00, 0x25, 0xff, 0xdb, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0xb7, 0xb6, 0x25, 0xdb, 0xb7, 0xb7, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xdb, 0xdb, 0xff, 0xff, 0x6e, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xdb, 0xff, 0x92, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xdb, 0xff, 0x92, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0xdb, 0xdb, 0xff, 0xff, 0x6e, 0x00, 0x00, 
  0x00, 0x00, 0xb7, 0xb6, 0x25, 0xdb, 0xb7, 0xb7, 0x00, 0x00, 
  0x00, 0x00, 0x49, 0x00, 0x25, 0xff, 0xdb, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x25, 0xdb, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP == 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x29, 0xf8, 0xc5, 0x61, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xe8, 0x41, 0x00, 0x00, 0x65, 0x29, 0xff, 0xff, 0xb6, 0xb5, 0x21, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x76, 0xb5, 0xf3, 0x9c, 0x45, 0x29, 0x59, 0xce, 0x55, 0xad, 0x35, 0xad, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x20, 0x00, 0x18, 0xc6, 0x96, 0xb5, 0xdb, 0xde, 0xdb, 0xde, 0x2c, 0x63, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x21, 0x08, 0x41, 0x08, 0x59, 0xce, 0xff, 0xff, 0x8e, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x10, 0x39, 0xce, 0xff, 0xff, 0xae, 0x73, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x41, 0x08, 0xd7, 0xbd, 0xb6, 0xb5, 0xdb, 0xde, 0xbb, 0xde, 0x2c, 0x63, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x96, 0xb5, 0xd3, 0x9c, 0x45, 0x29, 0x79, 0xce, 0x55, 0xad, 0x35, 0xad, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xc7, 0x39, 0x00, 0x00, 0x45, 0x29, 0xff, 0xff, 0xb7, 0xbd, 0x21, 0x08, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x45, 0x29, 0xf8, 0xc5, 0x41, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 16 && LV_COLOR_16_SWAP != 0
  /*Pixel format: Red: 5 bit, Green: 6 bit, Blue: 5 bit BUT the 2 bytes are swapped*/
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x45, 0xc5, 0xf8, 0x08, 0x61, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x41, 0xe8, 0x00, 0x00, 0x29, 0x65, 0xff, 0xff, 0xb5, 0xb6, 0x08, 0x21, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xb5, 0x76, 0x9c, 0xf3, 0x29, 0x45, 0xce, 0x59, 0xad, 0x55, 0xad, 0x35, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0xc6, 0x18, 0xb5, 0x96, 0xde, 0xdb, 0xde, 0xdb, 0x63, 0x2c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x21, 0x08, 0x41, 0xce, 0x59, 0xff, 0xff, 0x73, 0x8e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x82, 0xce, 0x39, 0xff, 0xff, 0x73, 0xae, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x08, 0x41, 0xbd, 0xd7, 0xb5, 0xb6, 0xde, 0xdb, 0xde, 0xbb, 0x63, 0x2c, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0xb5, 0x96, 0x9c, 0xd3, 0x29, 0x45, 0xce, 0x79, 0xad, 0x55, 0xad, 0x35, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x39, 0xc7, 0x00, 0x00, 0x29, 0x45, 0xff, 0xff, 0xbd, 0xb7, 0x08, 0x21, 0x00, 0x00, 0x00, 0x00, 
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x45, 0xc5, 0xf8, 0x08, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
#endif
#if LV_COLOR_DEPTH == 32
  /*Pixel format: Fix 0xFF: 8 bit, Red: 8 bit, Green: 8 bit, Blue: 8 bit*/
  0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x01, 0x01, 0x01, 0xff, 0x29, 0x29, 0x29, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0x0b, 0x0b, 0x0b, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x3d, 0x3d, 0x3d, 0xff, 0x00, 0x00, 0x00, 0xff, 0x2b, 0x2b, 0x2b, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 0xb3, 0xb3, 0xb3, 0xff, 0x05, 0x05, 0x05, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0xff, 0xad, 0xad, 0xad, 0xff, 0x9c, 0x9c, 0x9c, 0xff, 0x2a, 0x2a, 0x2a, 0xff, 0xc9, 0xc9, 0xc9, 0xff, 0xaa, 0xaa, 0xaa, 0xff, 0xa6, 0xa6, 0xa6, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x03, 0x03, 0x03, 0xff, 0xc1, 0xc1, 0xc1, 0xff, 0xb1, 0xb1, 0xb1, 0xff, 0xd9, 0xd9, 0xd9, 0xff, 0xd7, 0xd7, 0xd7, 0xff, 0x64, 0x64, 0x64, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x02, 0x02, 0x02, 0xff, 0x00, 0x00, 0x00, 0xff, 0x05, 0x05, 0x05, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0xc7, 0xc7, 0xc7, 0xff, 0xff, 0xff, 0xff, 0xff, 0x71, 0x71, 0x71, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0xff, 0x0f, 0x0f, 0x0f, 0xff, 0xc5, 0xc5, 0xc5, 0xff, 0xfd, 0xfd, 0xfd, 0xff, 0x73, 0x73, 0x73, 0xff, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x09, 0x09, 0x09, 0xff, 0xba, 0xba, 0xba, 0xff, 0xb4, 0xb4, 0xb4, 0xff, 0xd9, 0xd9, 0xd9, 0xff, 0xd6, 0xd6, 0xd6, 0xff, 0x63, 0x63, 0x63, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0xff, 0xaf, 0xaf, 0xaf, 0xff, 0x9a, 0x9a, 0x9a, 0xff, 0x2a, 0x2a, 0x2a, 0xff, 0xcb, 0xcb, 0xcb, 0xff, 0xa9, 0xa9, 0xa9, 0xff, 0xa6, 0xa6, 0xa6, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x02, 0x02, 0x02, 0xff, 0x00, 0x00, 0x00, 0xff, 0x3a, 0x3a, 0x3a, 0xff, 0x01, 0x01, 0x01, 0xff, 0x2a, 0x2a, 0x2a, 0xff, 0xfe, 0xfe, 0xfe, 0xff, 0xb5, 0xb5, 0xb5, 0xff, 0x05, 0x05, 0x05, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
  0x00, 0x00, 0x00, 0xff, 0x02, 0x02, 0x02, 0xff, 0x01, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0xff, 0x29, 0x29, 0x29, 0xff, 0xbd, 0xbd, 0xbd, 0xff, 0x0a, 0x0a, 0x0a, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0xff, 
#endif
};

const lv_img_dsc_t bluetooth = {
  .header.always_zero = 0,
  .header.w = 10,
  .header.h = 10,
  .data_size = 100 * LV_COLOR_SIZE / 8,
  .header.cf = LV_IMG_CF_TRUE_COLOR,
  .data = bluetooth_map,
};
