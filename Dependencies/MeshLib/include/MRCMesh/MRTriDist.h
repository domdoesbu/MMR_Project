// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// \brief computes the closest points on two triangles, and returns the 
/// squared distance between them.
/// 
/// \param s,t are the triangles, stored tri[point][dimension].
///
/// \details If the triangles are disjoint, p and q give the closest points of 
/// s and t respectively. However, if the triangles overlap, p and q 
/// are basically a random pair of points from the triangles, not 
/// coincident points on the intersection of the triangles, as might 
/// be expected.
/// Generated from function `MR::TriDist`.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `q` can not be null. It is a single object.
MRC_API float MR_TriDist(MR_Vector3f *p, MR_Vector3f *q, const MR_Vector3f *s, const MR_Vector3f *t);

/// Returns closest points between an segment pair.
/// Generated from function `MR::SegPoints`.
/// Parameter `VEC` can not be null. It is a single object.
/// Parameter `X` can not be null. It is a single object.
/// Parameter `Y` can not be null. It is a single object.
/// Parameter `P` can not be null. It is a single object.
/// Parameter `A` can not be null. It is a single object.
/// Parameter `Q` can not be null. It is a single object.
/// Parameter `B` can not be null. It is a single object.
MRC_API void MR_SegPoints(MR_Vector3f *VEC, MR_Vector3f *X, MR_Vector3f *Y, const MR_Vector3f *P, const MR_Vector3f *A, const MR_Vector3f *Q, const MR_Vector3f *B);

#ifdef __cplusplus
} // extern "C"
#endif
