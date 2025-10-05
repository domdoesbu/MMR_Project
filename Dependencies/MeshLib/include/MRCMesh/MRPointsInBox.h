// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreePoints MR_AABBTreePoints; // Defined in `#include <MRCMesh/MRAABBTreePoints.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Box3f MR_Box3f; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_std_function_void_from_MR_VertId_const_MR_Vector3f_ref MR_std_function_void_from_MR_VertId_const_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_void_from_MR_VertId_const_MR_Vector3f_ref.h>`.


/// Finds all valid points of pointCloud that are inside or on the surface of given box

/// \param xf points-to-center transformation, if not specified then identity transformation is assumed
/// Generated from function `MR::findPointsInBox`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `foundCallback` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_findPointsInBox_MR_PointCloud(const MR_PointCloud *pointCloud, const MR_Box3f *box, const MR_std_function_void_from_MR_VertId_const_MR_Vector3f_ref *foundCallback, const MR_AffineXf3f *xf);

/// Finds all valid vertices of the mesh that are inside or on the surface of given box

/// \param xf points-to-center transformation, if not specified then identity transformation is assumed
/// Generated from function `MR::findPointsInBox`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `foundCallback` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_findPointsInBox_MR_Mesh(const MR_Mesh *mesh, const MR_Box3f *box, const MR_std_function_void_from_MR_VertId_const_MR_Vector3f_ref *foundCallback, const MR_AffineXf3f *xf);

/// Finds all points in tree that are inside or on the surface of given box

/// \param xf points-to-center transformation, if not specified then identity transformation is assumed
/// Generated from function `MR::findPointsInBox`.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `foundCallback` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_findPointsInBox_MR_AABBTreePoints(const MR_AABBTreePoints *tree, const MR_Box3f *box, const MR_std_function_void_from_MR_VertId_const_MR_Vector3f_ref *foundCallback, const MR_AffineXf3f *xf);

#ifdef __cplusplus
} // extern "C"
#endif
