// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>

#ifdef __cplusplus
extern "C" {
#endif


/// A fixed-size array of `MR::VertId` of size 3.
typedef struct MR_std_array_MR_VertId_3
{
    MR_VertId elems[3];
} MR_std_array_MR_VertId_3;

#ifdef __cplusplus
} // extern "C"
#endif
