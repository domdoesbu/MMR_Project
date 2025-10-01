// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreePoints MR_AABBTreePoints; // Defined in `#include <MRCMesh/MRAABBTreePoints.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshVertPart MR_MeshVertPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Vector2f MR_Vector2f; // Defined in `#include <MRCMesh/MRVector2.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// finds the vertex in the mesh part having the largest projection on given direction,
/// optionally uses aabb-tree inside for faster computation
/// Generated from function `MR::findDirMax`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `m` can not be null. It is a single object.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
MRC_API MR_VertId MR_findDirMax_3_const_MR_Vector3f_ref_MR_Mesh(const MR_Vector3f *dir, const MR_Mesh *m, const MR_UseAABBTree *u);

/// finds the vertex in the mesh part having the largest projection on given direction,
/// optionally uses aabb-tree inside for faster computation
/// Generated from function `MR::findDirMax`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
MRC_API MR_VertId MR_findDirMax_3_const_MR_Vector3f_ref_MR_MeshPart(const MR_Vector3f *dir, const MR_MeshPart *mp, const MR_UseAABBTree *u);

/// finds the vertex in the mesh part having the largest projection on given direction,
/// optionally uses aabb-points-tree inside for faster computation
/// Generated from function `MR::findDirMax`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
MRC_API MR_VertId MR_findDirMax_3_const_MR_Vector3f_ref_MR_MeshVertPart(const MR_Vector3f *dir, const MR_MeshVertPart *mp, const MR_UseAABBTree *u);

/// finds the vertex in the polyline having the largest projection on given direction,
/// optionally uses aabb-tree inside for faster computation
/// Generated from function `MR::findDirMax`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
MRC_API MR_VertId MR_findDirMax_3_const_MR_Vector3f_ref_MR_Polyline3(const MR_Vector3f *dir, const MR_Polyline3 *polyline, const MR_UseAABBTree *u);

/// finds the vertex in the polyline having the largest projection on given direction,
/// optionally uses aabb-tree inside for faster computation
/// Generated from function `MR::findDirMax`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
MRC_API MR_VertId MR_findDirMax_3_const_MR_Vector2f_ref(const MR_Vector2f *dir, const MR_Polyline2 *polyline, const MR_UseAABBTree *u);

/// finds the point in the cloud having the largest projection on given direction,
/// optionally uses aabb-tree inside for faster computation
/// Generated from function `MR::findDirMax`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
MRC_API MR_VertId MR_findDirMax_4(const MR_Vector3f *dir, const MR_PointCloud *cloud, const MR_VertBitSet *region, const MR_UseAABBTree *u);

/// finds the point in the tree having the largest projection on given direction
/// Generated from function `MR::findDirMax`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_VertId MR_findDirMax_3_const_MR_Vector3f_ref_MR_AABBTreePoints(const MR_Vector3f *dir, const MR_AABBTreePoints *tree, const MR_VertBitSet *region);

#ifdef __cplusplus
} // extern "C"
#endif
