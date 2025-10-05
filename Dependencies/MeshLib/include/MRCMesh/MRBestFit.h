// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>
#include <MRCMisc/std_array_MR_AffineXf3d_4.h>
#include <MRCMisc/std_array_MR_AffineXf3f_4.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Line3d MR_Line3d; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Line3f MR_Line3f; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Matrix3d MR_Matrix3d; // Defined in `#include <MRCMesh/MRMatrix3.h>`.
typedef struct MR_Matrix3f MR_Matrix3f; // Defined in `#include <MRCMesh/MRMatrix3.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_Plane3d MR_Plane3d; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_PointCloudPart MR_PointCloudPart; // Defined in `#include <MRCMesh/MRPointCloudPart.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.


/// Class to accumulate points and make best line / plane approximation
/// Generated from class `MR::PointAccumulator`.
typedef struct MR_PointAccumulator MR_PointAccumulator;

/// Class to accumulate planes to find then their crossing point
/// Generated from class `MR::PlaneAccumulator`.
typedef struct MR_PlaneAccumulator MR_PlaneAccumulator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointAccumulator_Destroy()` to free it when you're done using it.
MRC_API MR_PointAccumulator *MR_PointAccumulator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointAccumulator_DestroyArray()`.
/// Use `MR_PointAccumulator_OffsetMutablePtr()` and `MR_PointAccumulator_OffsetPtr()` to access the array elements.
MRC_API MR_PointAccumulator *MR_PointAccumulator_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointAccumulator *MR_PointAccumulator_OffsetPtr(const MR_PointAccumulator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointAccumulator *MR_PointAccumulator_OffsetMutablePtr(MR_PointAccumulator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointAccumulator`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointAccumulator_Destroy()` to free it when you're done using it.
MRC_API MR_PointAccumulator *MR_PointAccumulator_ConstructFromAnother(const MR_PointAccumulator *_other);

/// Destroys a heap-allocated instance of `MR_PointAccumulator`. Does nothing if the pointer is null.
MRC_API void MR_PointAccumulator_Destroy(const MR_PointAccumulator *_this);

/// Destroys a heap-allocated array of `MR_PointAccumulator`. Does nothing if the pointer is null.
MRC_API void MR_PointAccumulator_DestroyArray(const MR_PointAccumulator *_this);

/// Generated from a method of class `MR::PointAccumulator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointAccumulator *MR_PointAccumulator_AssignFromAnother(MR_PointAccumulator *_this, const MR_PointAccumulator *_other);

/// Generated from a method of class `MR::PointAccumulator` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_PointAccumulator_addPoint_1_MR_Vector3d(MR_PointAccumulator *_this, const MR_Vector3d *pt);

/// Generated from a method of class `MR::PointAccumulator` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_PointAccumulator_addPoint_2_MR_Vector3d(MR_PointAccumulator *_this, const MR_Vector3d *pt, double weight);

/// Generated from a method of class `MR::PointAccumulator` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_PointAccumulator_addPoint_1_MR_Vector3f(MR_PointAccumulator *_this, const MR_Vector3f *pt);

/// Generated from a method of class `MR::PointAccumulator` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_PointAccumulator_addPoint_2_MR_Vector3f(MR_PointAccumulator *_this, const MR_Vector3f *pt, float weight);

/// computes the best approximating plane from the accumulated points
/// Generated from a method of class `MR::PointAccumulator` named `getBestPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_PointAccumulator_getBestPlane(const MR_PointAccumulator *_this);

/// Generated from a method of class `MR::PointAccumulator` named `getBestPlanef`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_PointAccumulator_getBestPlanef(const MR_PointAccumulator *_this);

/// computes the best approximating line from the accumulated points
/// Generated from a method of class `MR::PointAccumulator` named `getBestLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3d_Destroy()` to free it when you're done using it.
MRC_API MR_Line3d *MR_PointAccumulator_getBestLine(const MR_PointAccumulator *_this);

/// Generated from a method of class `MR::PointAccumulator` named `getBestLinef`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3f_Destroy()` to free it when you're done using it.
MRC_API MR_Line3f *MR_PointAccumulator_getBestLinef(const MR_PointAccumulator *_this);

/// computes centroid and eigenvectors/eigenvalues of the covariance matrix of the accumulated points
/// Generated from a method of class `MR::PointAccumulator` named `getCenteredCovarianceEigen`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `centroid` can not be null. It is a single object.
/// Parameter `eigenvectors` can not be null. It is a single object.
/// Parameter `eigenvalues` can not be null. It is a single object.
MRC_API bool MR_PointAccumulator_getCenteredCovarianceEigen_MR_Vector3d(const MR_PointAccumulator *_this, MR_Vector3d *centroid, MR_Matrix3d *eigenvectors, MR_Vector3d *eigenvalues);

/// Generated from a method of class `MR::PointAccumulator` named `getCenteredCovarianceEigen`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `centroid` can not be null. It is a single object.
/// Parameter `eigenvectors` can not be null. It is a single object.
/// Parameter `eigenvalues` can not be null. It is a single object.
MRC_API bool MR_PointAccumulator_getCenteredCovarianceEigen_MR_Vector3f(const MR_PointAccumulator *_this, MR_Vector3f *centroid, MR_Matrix3f *eigenvectors, MR_Vector3f *eigenvalues);

/// returns the transformation that maps (0,0,0) into point centroid,
/// and maps vectors (1,0,0), (0,1,0), (0,0,1) into first, second, third eigenvectors corresponding to ascending eigenvalues
/// Generated from a method of class `MR::PointAccumulator` named `getBasicXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_PointAccumulator_getBasicXf(const MR_PointAccumulator *_this);

/// Generated from a method of class `MR::PointAccumulator` named `getBasicXf3f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_PointAccumulator_getBasicXf3f(const MR_PointAccumulator *_this);

/// returns 4 transformations, each maps (0,0,0) into point centroid,
/// and maps vectors (1,0,0), (0,1,0), (0,0,1) into +/- first, +/- second, +/- third eigenvectors (forming positive reference frame) corresponding to ascending eigenvalues
/// Generated from a method of class `MR::PointAccumulator` named `get4BasicXfs`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_array_MR_AffineXf3d_4 MR_PointAccumulator_get4BasicXfs(const MR_PointAccumulator *_this);

/// Generated from a method of class `MR::PointAccumulator` named `get4BasicXfs3f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_array_MR_AffineXf3f_4 MR_PointAccumulator_get4BasicXfs3f(const MR_PointAccumulator *_this);

/// Generated from a method of class `MR::PointAccumulator` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PointAccumulator_valid(const MR_PointAccumulator *_this);

/// Adds in existing PointAccumulator all given points
/// Generated from function `MR::accumulatePoints`.
/// Parameter `accum` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_accumulatePoints_std_vector_MR_Vector3f(MR_PointAccumulator *accum, const MR_std_vector_MR_Vector3f *points, const MR_AffineXf3f *xf);

/// Adds in existing PointAccumulator all given weighed points
/// Generated from function `MR::accumulateWeighedPoints`.
/// Parameter `accum` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `weights` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_accumulateWeighedPoints(MR_PointAccumulator *accum, const MR_std_vector_MR_Vector3f *points, const MR_std_vector_float *weights, const MR_AffineXf3f *xf);

/// Adds in existing PointAccumulator all mesh face centers with the weight equal to face area
/// Generated from function `MR::accumulateFaceCenters`.
/// Parameter `accum` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_accumulateFaceCenters(MR_PointAccumulator *accum, const MR_MeshPart *mp, const MR_AffineXf3f *xf);

/// Adds in existing PointAccumulator all line centers with the weight equal to the length line
/// Generated from function `MR::accumulateLineCenters`.
/// Parameter `accum` can not be null. It is a single object.
/// Parameter `pl` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_accumulateLineCenters(MR_PointAccumulator *accum, const MR_Polyline3 *pl, const MR_AffineXf3f *xf);

/// Adds in existing PointAccumulator all points from the cloud (region) with weight 1
/// Generated from function `MR::accumulatePoints`.
/// Parameter `accum` can not be null. It is a single object.
/// Parameter `pcp` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
MRC_API void MR_accumulatePoints_MR_PointCloudPart(MR_PointAccumulator *accum, const MR_PointCloudPart *pcp, const MR_AffineXf3f *xf);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlaneAccumulator_Destroy()` to free it when you're done using it.
MRC_API MR_PlaneAccumulator *MR_PlaneAccumulator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PlaneAccumulator_DestroyArray()`.
/// Use `MR_PlaneAccumulator_OffsetMutablePtr()` and `MR_PlaneAccumulator_OffsetPtr()` to access the array elements.
MRC_API MR_PlaneAccumulator *MR_PlaneAccumulator_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PlaneAccumulator *MR_PlaneAccumulator_OffsetPtr(const MR_PlaneAccumulator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PlaneAccumulator *MR_PlaneAccumulator_OffsetMutablePtr(MR_PlaneAccumulator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PlaneAccumulator`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlaneAccumulator_Destroy()` to free it when you're done using it.
MRC_API MR_PlaneAccumulator *MR_PlaneAccumulator_ConstructFromAnother(const MR_PlaneAccumulator *_other);

/// Destroys a heap-allocated instance of `MR_PlaneAccumulator`. Does nothing if the pointer is null.
MRC_API void MR_PlaneAccumulator_Destroy(const MR_PlaneAccumulator *_this);

/// Destroys a heap-allocated array of `MR_PlaneAccumulator`. Does nothing if the pointer is null.
MRC_API void MR_PlaneAccumulator_DestroyArray(const MR_PlaneAccumulator *_this);

/// Generated from a method of class `MR::PlaneAccumulator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlaneAccumulator *MR_PlaneAccumulator_AssignFromAnother(MR_PlaneAccumulator *_this, const MR_PlaneAccumulator *_other);

/// Generated from a method of class `MR::PlaneAccumulator` named `addPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pl` can not be null. It is a single object.
MRC_API void MR_PlaneAccumulator_addPlane_MR_Plane3d(MR_PlaneAccumulator *_this, const MR_Plane3d *pl);

/// Generated from a method of class `MR::PlaneAccumulator` named `addPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pl` can not be null. It is a single object.
MRC_API void MR_PlaneAccumulator_addPlane_MR_Plane3f(MR_PlaneAccumulator *_this, const MR_Plane3f *pl);

/// computes the point that minimizes the sum of squared distances to accumulated planes;
/// if such point is not unique then returns the one closest to p0
/// \param tol relative epsilon-tolerance for too small number detection
/// \param rank optional output for solution matrix rank according to given tolerance
/// \param space rank=1: unit normal to solution plane, rank=2: unit direction of solution line, rank=3: zero vector
/// Generated from a method of class `MR::PlaneAccumulator` named `findBestCrossPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p0` can not be null. It is a single object.
/// Parameter `rank` defaults to a null pointer in C++.
/// Parameter `space` defaults to a null pointer in C++.
MRC_API MR_Vector3d MR_PlaneAccumulator_findBestCrossPoint_MR_Vector3d(const MR_PlaneAccumulator *_this, const MR_Vector3d *p0, double tol, int32_t *rank, MR_Vector3d *space);

/// Generated from a method of class `MR::PlaneAccumulator` named `findBestCrossPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p0` can not be null. It is a single object.
/// Parameter `rank` defaults to a null pointer in C++.
/// Parameter `space` defaults to a null pointer in C++.
MRC_API MR_Vector3f MR_PlaneAccumulator_findBestCrossPoint_MR_Vector3f(const MR_PlaneAccumulator *_this, const MR_Vector3f *p0, float tol, int32_t *rank, MR_Vector3f *space);

#ifdef __cplusplus
} // extern "C"
#endif
