/**************************************************************************************************
 * Copyright (c) keyst.one. 2020-2025. All rights reserved.
 * Description: Hardware version.
 * Author: leon sun
 * Create: 2023-5-12
 ************************************************************************************************/


#ifndef _HARDWARE_VERSION_H
#define _HARDWARE_VERSION_H

#include "stdint.h"
#include "stdbool.h"

typedef enum {
    VERSION_EVT0 = 0,
    VERSION_EVT1,
    VERSION_DVT1,
    VERSION_DVT2,
    VERSION_V3_0,   // pvt version
    VERSION_V3_1,
    VERSION_NONE,
} HardwareVersion;


HardwareVersion GetHardwareVersion(void);
char *GetHardwareVersionString(void);


#endif
