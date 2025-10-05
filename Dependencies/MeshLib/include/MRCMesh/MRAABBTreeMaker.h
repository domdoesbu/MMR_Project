// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// returns the number of nodes in the binary tree with given number of leaves
/// Generated from function `MR::getNumNodes`.
MRC_API int32_t MR_getNumNodes(int32_t numLeaves);

#ifdef __cplusplus
} // extern "C"
#endif
