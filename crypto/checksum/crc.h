/**************************************************************************************************
 * Copyright (c) keyst.one. 2020-2025. All rights reserved.
 * Description: crc checksum.
 * Author: leon sun
 * Create: 2022-12-26
 ************************************************************************************************/

#ifndef _CRC_H
#define _CRC_H

#include "stdint.h"
#include "stdbool.h"

#define FINGER_PRINT_STANDARD_CRC               (1)

uint16_t crc16_ccitt(const uint8_t *puchMsg, uint32_t usDataLen);
uint32_t crc32_ieee(uint32_t crc, const uint8_t *buffer, uint32_t size);

#endif
