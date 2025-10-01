// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>

#ifdef __cplusplus
extern "C" {
#endif


/// A fixed-size array of `MR::Vector3f` of size 3.
typedef struct MR_std_array_MR_Vector3f_3
{
    MR_Vector3f elems[3];
} MR_std_array_MR_Vector3f_3;

#ifdef __cplusplus
} // extern "C"
#endif
