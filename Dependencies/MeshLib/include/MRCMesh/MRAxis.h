// (C) 2024, AMV Consulting
#pragma once

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef int32_t MR_Axis;
enum // MR_Axis
{
    MR_Axis_X = 0,
    MR_Axis_Y = 1,
    MR_Axis_Z = 2,
    MR_Axis_Count = 3,
};

#ifdef __cplusplus
} // extern "C"
#endif
