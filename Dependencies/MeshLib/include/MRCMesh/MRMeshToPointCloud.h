// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


///  Mesh to PointCloud
/// Generated from function `MR::meshToPointCloud`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `saveNormals` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `verts` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloud_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloud *MR_meshToPointCloud(const MR_Mesh *mesh, const bool *saveNormals, const MR_VertBitSet *verts);

#ifdef __cplusplus
} // extern "C"
#endif
