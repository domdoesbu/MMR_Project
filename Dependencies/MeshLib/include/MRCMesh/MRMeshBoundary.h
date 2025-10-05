// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


/// adds triangles along the boundary to straighten it;
/// \details new triangle is added only if 
///  1) aspect ratio of the new triangle is at most maxTriAspectRatio,
///  2) dot product of its normal with neighbor triangles is at least minNeiNormalsDot.
/// Generated from function `MR::straightenBoundary`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `newFaces` defaults to a null pointer in C++.
MRC_API void MR_straightenBoundary(MR_Mesh *mesh, MR_EdgeId bd, float minNeiNormalsDot, float maxTriAspectRatio, MR_FaceBitSet *newFaces);

#ifdef __cplusplus
} // extern "C"
#endif
