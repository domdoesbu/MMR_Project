// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>

#ifdef __cplusplus
extern "C" {
#endif


/// A fixed-size array of `MR::AffineXf3f` of size 4.
typedef struct MR_std_array_MR_AffineXf3f_4
{
    MR_AffineXf3f elems[4];
} MR_std_array_MR_AffineXf3f_4;

#ifdef __cplusplus
} // extern "C"
#endif
