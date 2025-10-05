// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_vector_MR_Vector2f MR_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_MR_Vector2f.h>`.


// computes the mesh of convex hull from given input points
/// Generated from function `MR::makeConvexHull`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `validPoints` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeConvexHull_2(const MR_VertCoords *points, const MR_VertBitSet *validPoints);

/// Generated from function `MR::makeConvexHull`.
/// Parameter `in` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeConvexHull_1_MR_Mesh(const MR_Mesh *in);

/// Generated from function `MR::makeConvexHull`.
/// Parameter `in` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeConvexHull_1_MR_PointCloud(const MR_PointCloud *in);

// computes the contour of convex hull from given input points
/// Generated from function `MR::makeConvexHull`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2f *MR_makeConvexHull_1_std_vector_MR_Vector2f(MR_PassBy points_pass_by, MR_std_vector_MR_Vector2f *points);

#ifdef __cplusplus
} // extern "C"
#endif
