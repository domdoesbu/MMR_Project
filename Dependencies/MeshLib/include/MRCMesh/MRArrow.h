// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


// creates hollow arrow from the 'base' to the 'vert'. Number of points on the circle 'qual' is between 3 and 256
/// Generated from function `MR::makeArrow`.
/// Parameter `base` can not be null. It is a single object.
/// Parameter `vert` can not be null. It is a single object.
/// Parameter `thickness` is a single object.
/// Parameter `thickness` has a default argument: `0.0500000007F`, pass a null pointer to use it.
/// Parameter `coneRadius` is a single object.
/// Parameter `coneRadius` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `coneSize` has a default argument: `0.200000003F`, pass a null pointer to use it.
/// Parameter `qual` has a default argument: `32`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeArrow(const MR_Vector3f *base, const MR_Vector3f *vert, const float *thickness, const float *coneRadius, const float *coneSize, const int32_t *qual);

// creates the mesh with 3 axis arrows
/// Generated from function `MR::makeBasisAxes`.
/// Parameter `size` is a single object.
/// Parameter `size` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `thickness` is a single object.
/// Parameter `thickness` has a default argument: `0.0500000007F`, pass a null pointer to use it.
/// Parameter `coneRadius` is a single object.
/// Parameter `coneRadius` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `coneSize` has a default argument: `0.200000003F`, pass a null pointer to use it.
/// Parameter `qual` has a default argument: `32`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeBasisAxes(const float *size, const float *thickness, const float *coneRadius, const float *coneSize, const int32_t *qual);

#ifdef __cplusplus
} // extern "C"
#endif
