// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif


/// quickly tests whether given float is not-a-number
/// Generated from function `MR::isNanFast`.
MRC_API bool MR_isNanFast(float f);

#ifdef __cplusplus
} // extern "C"
#endif
