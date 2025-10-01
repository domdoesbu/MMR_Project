// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box3f MR_Box3f; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// creates cube's topology with 8 vertices, 12 triangular faces, 18 undirected edges.
/// The order of vertices:
///   0_v: x=min, y=min, z=min
///   1_v: x=min, y=max, z=min
///   2_v: x=max, y=max, z=min
///   3_v: x=max, y=min, z=min
///   4_v: x=min, y=min, z=max
///   5_v: x=min, y=max, z=max
///   6_v: x=max, y=max, z=max
///   7_v: x=max, y=min, z=max
/// Generated from function `MR::makeCubeTopology`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopology_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopology *MR_makeCubeTopology(void);

/// creates box mesh with given min-corner (base) and given size in every dimension;
/// with default parameters, creates unit cube mesh with the centroid in (0,0,0)
/// Generated from function `MR::makeCube`.
/// Parameter `size` is a single object.
/// Parameter `size` has a default argument: `Vector3f::diagonal(1.F)`, pass a null pointer to use it.
/// Parameter `base` is a single object.
/// Parameter `base` has a default argument: `Vector3f::diagonal(-0.5F)`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeCube(const MR_Vector3f *size, const MR_Vector3f *base);

/// creates parallelepiped mesh with given min-corner \p base and given directional vectors \p size
/// Generated from function `MR::makeParallelepiped`.
/// Parameter `base` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeParallelepiped(const MR_Vector3f *side, const MR_Vector3f *base);

/// creates mesh visualizing a box
/// Generated from function `MR::makeBoxMesh`.
/// Parameter `box` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeBoxMesh(const MR_Box3f *box);

#ifdef __cplusplus
} // extern "C"
#endif
