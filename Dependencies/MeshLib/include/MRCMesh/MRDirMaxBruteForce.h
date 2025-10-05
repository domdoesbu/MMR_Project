// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshVertPart MR_MeshVertPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MinMaxArg_float_MR_VertId MR_MinMaxArg_float_MR_VertId; // Defined in `#include <MRCMesh/MRMinMaxArg.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Vector2f MR_Vector2f; // Defined in `#include <MRCMesh/MRVector2.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.


/// finds the point having the largest projection on given direction by traversing all region points
/// Generated from function `MR::findDirMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_VertId MR_findDirMaxBruteForce_3_const_MR_Vector3f_ref_MR_VertCoords(const MR_Vector3f *dir, const MR_VertCoords *points, const MR_VertBitSet *region);

/// finds the point having the largest projection on given direction by traversing all region points
/// Generated from function `MR::findDirMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_VertId MR_findDirMaxBruteForce_3_const_MR_Vector2f_ref(const MR_Vector2f *dir, const MR_VertCoords2 *points, const MR_VertBitSet *region);

/// finds the point in the cloud having the largest projection on given direction by traversing all valid points
/// Generated from function `MR::findDirMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_VertId MR_findDirMaxBruteForce_3_const_MR_Vector3f_ref_MR_PointCloud(const MR_Vector3f *dir, const MR_PointCloud *cloud, const MR_VertBitSet *region);

/// finds the vertex in the polyline having the largest projection on given direction by traversing all valid vertices
/// Generated from function `MR::findDirMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
MRC_API MR_VertId MR_findDirMaxBruteForce_2_const_MR_Vector3f_ref_MR_Polyline3(const MR_Vector3f *dir, const MR_Polyline3 *polyline);

/// finds the vertex in the polyline having the largest projection on given direction by traversing all valid vertices
/// Generated from function `MR::findDirMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
MRC_API MR_VertId MR_findDirMaxBruteForce_2_const_MR_Vector2f_ref(const MR_Vector2f *dir, const MR_Polyline2 *polyline);

/// finds the vertex in the mesh part having the largest projection on given direction by traversing all (region) faces
/// Generated from function `MR::findDirMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
MRC_API MR_VertId MR_findDirMaxBruteForce_2_const_MR_Vector3f_ref_MR_MeshPart(const MR_Vector3f *dir, const MR_MeshPart *mp);

/// finds the vertex in the mesh part having the largest projection on given direction by traversing all (region) vertices
/// Generated from function `MR::findDirMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
MRC_API MR_VertId MR_findDirMaxBruteForce_2_const_MR_Vector3f_ref_MR_MeshVertPart(const MR_Vector3f *dir, const MR_MeshVertPart *mp);

/// finds the points having the smallest and the largest projections on given direction by traversing all region points
/// Generated from function `MR::findDirMinMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_findDirMinMaxBruteForce_3_const_MR_Vector3f_ref_MR_VertCoords(const MR_Vector3f *dir, const MR_VertCoords *points, const MR_VertBitSet *region);

/// finds the points having the smallest and the largest projections on given direction by traversing all region points
/// Generated from function `MR::findDirMinMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_findDirMinMaxBruteForce_3_const_MR_Vector2f_ref(const MR_Vector2f *dir, const MR_VertCoords2 *points, const MR_VertBitSet *region);

/// finds the points in the cloud having the smallest and the largest projections on given direction by traversing all valid points
/// Generated from function `MR::findDirMinMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_findDirMinMaxBruteForce_3_const_MR_Vector3f_ref_MR_PointCloud(const MR_Vector3f *dir, const MR_PointCloud *cloud, const MR_VertBitSet *region);

/// finds the vertex in the polyline having the smallest and the largest projections on given direction by traversing all valid vertices
/// Generated from function `MR::findDirMinMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_findDirMinMaxBruteForce_2_const_MR_Vector3f_ref_MR_Polyline3(const MR_Vector3f *dir, const MR_Polyline3 *polyline);

/// finds the vertex in the polyline having the smallest and the largest projections on given direction by traversing all valid vertices
/// Generated from function `MR::findDirMinMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_findDirMinMaxBruteForce_2_const_MR_Vector2f_ref(const MR_Vector2f *dir, const MR_Polyline2 *polyline);

/// finds the vertices in the mesh part having the smallest and the largest projections on given direction by traversing all (region) faces
/// Generated from function `MR::findDirMinMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_findDirMinMaxBruteForce_2_const_MR_Vector3f_ref_MR_MeshPart(const MR_Vector3f *dir, const MR_MeshPart *mp);

/// finds the vertices in the mesh part having the smallest and the largest projections on given direction by traversing all (region) vertices
/// Generated from function `MR::findDirMinMaxBruteForce`.
/// Parameter `dir` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_findDirMinMaxBruteForce_2_const_MR_Vector3f_ref_MR_MeshVertPart(const MR_Vector3f *dir, const MR_MeshVertPart *mp);

#ifdef __cplusplus
} // extern "C"
#endif
