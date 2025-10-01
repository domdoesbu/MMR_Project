// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreePoints MR_AABBTreePoints; // Defined in `#include <MRCMesh/MRAABBTreePoints.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_BitSet MR_BitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Buffer_MR_VertId MR_Buffer_MR_VertId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_FewSmallest_MR_PointsProjectionResult MR_FewSmallest_MR_PointsProjectionResult; // Defined in `#include <MRCMesh/MRFewSmallest.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_PointCloudPart MR_PointCloudPart; // Defined in `#include <MRCMesh/MRPointCloudPart.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_MR_VertId MR_std_function_bool_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_bool_from_MR_VertId.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_pair_MR_VertId_MR_VertId MR_std_pair_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/std_pair_MR_VertId_MR_VertId.h>`.
typedef struct MR_std_vector_MR_PointsProjectionResult MR_std_vector_MR_PointsProjectionResult; // Defined in `#include <MRCMisc/std_vector_MR_PointsProjectionResult.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/// Generated from class `MR::PointsProjectionResult`.
typedef struct MR_PointsProjectionResult MR_PointsProjectionResult;

/// settings for \ref IPointsProjector::findProjections
/// Generated from class `MR::FindProjectionOnPointsSettings`.
typedef struct MR_FindProjectionOnPointsSettings MR_FindProjectionOnPointsSettings;

/// abstract class for computing the closest points of point clouds
/// Generated from class `MR::IPointsProjector`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::PointsProjector`
typedef struct MR_IPointsProjector MR_IPointsProjector;

/// default implementation of IPointsProjector
/// Generated from class `MR::PointsProjector`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::IPointsProjector`
typedef struct MR_PointsProjector MR_PointsProjector;

/// squared distance from pt to proj
/// Returns a pointer to a member variable of class `MR::PointsProjectionResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointsProjectionResult_Get_distSq(const MR_PointsProjectionResult *_this);

/// squared distance from pt to proj
/// Modifies a member variable of class `MR::PointsProjectionResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsProjectionResult_Set_distSq(MR_PointsProjectionResult *_this, float value);

/// squared distance from pt to proj
/// Returns a mutable pointer to a member variable of class `MR::PointsProjectionResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointsProjectionResult_GetMutable_distSq(MR_PointsProjectionResult *_this);

/// the closest vertex in point cloud
/// Returns a pointer to a member variable of class `MR::PointsProjectionResult` named `vId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PointsProjectionResult_Get_vId(const MR_PointsProjectionResult *_this);

/// the closest vertex in point cloud
/// Modifies a member variable of class `MR::PointsProjectionResult` named `vId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsProjectionResult_Set_vId(MR_PointsProjectionResult *_this, MR_VertId value);

/// the closest vertex in point cloud
/// Returns a mutable pointer to a member variable of class `MR::PointsProjectionResult` named `vId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PointsProjectionResult_GetMutable_vId(MR_PointsProjectionResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_PointsProjectionResult *MR_PointsProjectionResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointsProjectionResult_DestroyArray()`.
/// Use `MR_PointsProjectionResult_OffsetMutablePtr()` and `MR_PointsProjectionResult_OffsetPtr()` to access the array elements.
MRC_API MR_PointsProjectionResult *MR_PointsProjectionResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PointsProjectionResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_PointsProjectionResult *MR_PointsProjectionResult_ConstructFrom(float distSq, MR_VertId vId);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointsProjectionResult *MR_PointsProjectionResult_OffsetPtr(const MR_PointsProjectionResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointsProjectionResult *MR_PointsProjectionResult_OffsetMutablePtr(MR_PointsProjectionResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointsProjectionResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_PointsProjectionResult *MR_PointsProjectionResult_ConstructFromAnother(const MR_PointsProjectionResult *_other);

/// Destroys a heap-allocated instance of `MR_PointsProjectionResult`. Does nothing if the pointer is null.
MRC_API void MR_PointsProjectionResult_Destroy(const MR_PointsProjectionResult *_this);

/// Destroys a heap-allocated array of `MR_PointsProjectionResult`. Does nothing if the pointer is null.
MRC_API void MR_PointsProjectionResult_DestroyArray(const MR_PointsProjectionResult *_this);

/// Generated from a method of class `MR::PointsProjectionResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsProjectionResult *MR_PointsProjectionResult_AssignFromAnother(MR_PointsProjectionResult *_this, const MR_PointsProjectionResult *_other);

/**
* \brief computes the closest point on point cloud to given point
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger than the function exits returning upDistLimitSq and no valid point
* \param xf pointcloud-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
* \param skipCb callback to discard VertId projection candidate
*/
/// Generated from function `MR::findProjectionOnPoints`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `pcp` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `skipCb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_PointsProjectionResult *MR_findProjectionOnPoints_6(const MR_Vector3f *pt, const MR_PointCloudPart *pcp, const float *upDistLimitSq, const MR_AffineXf3f *xf, const float *loDistLimitSq, MR_PassBy skipCb_pass_by, MR_std_function_bool_from_MR_VertId *skipCb);

/**
* \brief computes the closest point on AABBTreePoints to given point
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger than the function exits returning upDistLimitSq and no valid point
* \param xf pointcloud-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
* \param region if not nullptr, all points not from the given region will be ignored
* \param skipCb callback to discard VertId projection candidate
*/
/// Generated from function `MR::findProjectionOnPoints`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `skipCb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_PointsProjectionResult *MR_findProjectionOnPoints_7(const MR_Vector3f *pt, const MR_AABBTreePoints *tree, const float *upDistLimitSq, const MR_AffineXf3f *xf, const float *loDistLimitSq, const MR_VertBitSet *region, MR_PassBy skipCb_pass_by, MR_std_function_bool_from_MR_VertId *skipCb);

/**
* \brief finds a number of the closest points in the cloud (as configured in \param res) to given point
* \param upDistLimitSq upper limit on the distance in question, points with larger distance than it will not be returned
* \param xf pointcloud-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, the algorithm can return given number of points within this distance even skipping closer ones
*/
/// Generated from function `MR::findFewClosestPoints`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `pc` can not be null. It is a single object.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
MRC_API void MR_findFewClosestPoints(const MR_Vector3f *pt, const MR_PointCloud *pc, MR_FewSmallest_MR_PointsProjectionResult *res, const float *upDistLimitSq, const MR_AffineXf3f *xf, const float *loDistLimitSq);

/**
* \brief finds given number of closest points (excluding itself) to each valid point in the cloud;
* \param numNei the number of closest points to find for each point
* \return a buffer where for every valid point with index `i` its neighbours are stored at indices [i*numNei; (i+1)*numNei)
*/
/// Generated from function `MR::findNClosestPointsPerPoint`.
/// Parameter `pc` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Buffer_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_Buffer_MR_VertId *MR_findNClosestPointsPerPoint(const MR_PointCloud *pc, int32_t numNei, const MR_std_function_bool_from_float *progress);

/// finds two closest points (first id < second id) in whole point cloud
/// Generated from function `MR::findTwoClosestPoints`.
/// Parameter `pc` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_VertId_MR_VertId *MR_findTwoClosestPoints(const MR_PointCloud *pc, const MR_std_function_bool_from_float *progress);

/// bitset of valid input points
/// Returns a pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BitSet *const *MR_FindProjectionOnPointsSettings_Get_valid(const MR_FindProjectionOnPointsSettings *_this);

/// bitset of valid input points
/// Modifies a member variable of class `MR::FindProjectionOnPointsSettings` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindProjectionOnPointsSettings_Set_valid(MR_FindProjectionOnPointsSettings *_this, const MR_BitSet *value);

/// bitset of valid input points
/// Returns a mutable pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BitSet **MR_FindProjectionOnPointsSettings_GetMutable_valid(MR_FindProjectionOnPointsSettings *_this);

/// affine transformation for input points
/// Returns a pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_FindProjectionOnPointsSettings_Get_xf(const MR_FindProjectionOnPointsSettings *_this);

/// affine transformation for input points
/// Modifies a member variable of class `MR::FindProjectionOnPointsSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindProjectionOnPointsSettings_Set_xf(MR_FindProjectionOnPointsSettings *_this, const MR_AffineXf3f *value);

/// affine transformation for input points
/// Returns a mutable pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_FindProjectionOnPointsSettings_GetMutable_xf(MR_FindProjectionOnPointsSettings *_this);

/// upper limit on the distance in question, if the real distance is larger than the function exits returning upDistLimitSq and no valid point
/// Returns a pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `upDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindProjectionOnPointsSettings_Get_upDistLimitSq(const MR_FindProjectionOnPointsSettings *_this);

/// upper limit on the distance in question, if the real distance is larger than the function exits returning upDistLimitSq and no valid point
/// Modifies a member variable of class `MR::FindProjectionOnPointsSettings` named `upDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindProjectionOnPointsSettings_Set_upDistLimitSq(MR_FindProjectionOnPointsSettings *_this, float value);

/// upper limit on the distance in question, if the real distance is larger than the function exits returning upDistLimitSq and no valid point
/// Returns a mutable pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `upDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindProjectionOnPointsSettings_GetMutable_upDistLimitSq(MR_FindProjectionOnPointsSettings *_this);

/// low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
/// Returns a pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `loDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindProjectionOnPointsSettings_Get_loDistLimitSq(const MR_FindProjectionOnPointsSettings *_this);

/// low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
/// Modifies a member variable of class `MR::FindProjectionOnPointsSettings` named `loDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindProjectionOnPointsSettings_Set_loDistLimitSq(MR_FindProjectionOnPointsSettings *_this, float value);

/// low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
/// Returns a mutable pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `loDistLimitSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindProjectionOnPointsSettings_GetMutable_loDistLimitSq(MR_FindProjectionOnPointsSettings *_this);

/// if true, discards a projection candidate with the same index as the target point
/// Returns a pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `skipSameIndex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_FindProjectionOnPointsSettings_Get_skipSameIndex(const MR_FindProjectionOnPointsSettings *_this);

/// if true, discards a projection candidate with the same index as the target point
/// Modifies a member variable of class `MR::FindProjectionOnPointsSettings` named `skipSameIndex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindProjectionOnPointsSettings_Set_skipSameIndex(MR_FindProjectionOnPointsSettings *_this, bool value);

/// if true, discards a projection candidate with the same index as the target point
/// Returns a mutable pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `skipSameIndex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_FindProjectionOnPointsSettings_GetMutable_skipSameIndex(MR_FindProjectionOnPointsSettings *_this);

/// progress callback
/// Returns a pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_FindProjectionOnPointsSettings_Get_cb(const MR_FindProjectionOnPointsSettings *_this);

/// progress callback
/// Modifies a member variable of class `MR::FindProjectionOnPointsSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindProjectionOnPointsSettings_Set_cb(MR_FindProjectionOnPointsSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// progress callback
/// Returns a mutable pointer to a member variable of class `MR::FindProjectionOnPointsSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_FindProjectionOnPointsSettings_GetMutable_cb(MR_FindProjectionOnPointsSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindProjectionOnPointsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindProjectionOnPointsSettings *MR_FindProjectionOnPointsSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FindProjectionOnPointsSettings_DestroyArray()`.
/// Use `MR_FindProjectionOnPointsSettings_OffsetMutablePtr()` and `MR_FindProjectionOnPointsSettings_OffsetPtr()` to access the array elements.
MRC_API MR_FindProjectionOnPointsSettings *MR_FindProjectionOnPointsSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FindProjectionOnPointsSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindProjectionOnPointsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindProjectionOnPointsSettings *MR_FindProjectionOnPointsSettings_ConstructFrom(const MR_BitSet *valid, const MR_AffineXf3f *xf, float upDistLimitSq, float loDistLimitSq, bool skipSameIndex, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FindProjectionOnPointsSettings *MR_FindProjectionOnPointsSettings_OffsetPtr(const MR_FindProjectionOnPointsSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FindProjectionOnPointsSettings *MR_FindProjectionOnPointsSettings_OffsetMutablePtr(MR_FindProjectionOnPointsSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FindProjectionOnPointsSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindProjectionOnPointsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindProjectionOnPointsSettings *MR_FindProjectionOnPointsSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FindProjectionOnPointsSettings *_other);

/// Destroys a heap-allocated instance of `MR_FindProjectionOnPointsSettings`. Does nothing if the pointer is null.
MRC_API void MR_FindProjectionOnPointsSettings_Destroy(const MR_FindProjectionOnPointsSettings *_this);

/// Destroys a heap-allocated array of `MR_FindProjectionOnPointsSettings`. Does nothing if the pointer is null.
MRC_API void MR_FindProjectionOnPointsSettings_DestroyArray(const MR_FindProjectionOnPointsSettings *_this);

/// Generated from a method of class `MR::FindProjectionOnPointsSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FindProjectionOnPointsSettings *MR_FindProjectionOnPointsSettings_AssignFromAnother(MR_FindProjectionOnPointsSettings *_this, MR_PassBy _other_pass_by, MR_FindProjectionOnPointsSettings *_other);

/// Destroys a heap-allocated instance of `MR_IPointsProjector`. Does nothing if the pointer is null.
MRC_API void MR_IPointsProjector_Destroy(const MR_IPointsProjector *_this);

/// Destroys a heap-allocated array of `MR_IPointsProjector`. Does nothing if the pointer is null.
MRC_API void MR_IPointsProjector_DestroyArray(const MR_IPointsProjector *_this);

/// sets the reference point cloud
/// Generated from a method of class `MR::IPointsProjector` named `setPointCloud`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_IPointsProjector_setPointCloud(MR_IPointsProjector *_this, const MR_PointCloud *pointCloud);

/// computes the closest points on point cloud to given points
/// Generated from a method of class `MR::IPointsProjector` named `findProjections`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `results` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_IPointsProjector_findProjections(const MR_IPointsProjector *_this, MR_std_vector_MR_PointsProjectionResult *results, const MR_std_vector_MR_Vector3f *points, const MR_FindProjectionOnPointsSettings *settings);

/// Returns amount of memory needed to compute projections
/// Generated from a method of class `MR::IPointsProjector` named `projectionsHeapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_IPointsProjector_projectionsHeapBytes(const MR_IPointsProjector *_this, MR_uint64_t numProjections);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IPointsProjector *MR_IPointsProjector_OffsetPtr(const MR_IPointsProjector *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IPointsProjector *MR_IPointsProjector_OffsetMutablePtr(MR_IPointsProjector *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::IPointsProjector` to a derived class `MR::PointsProjector`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointsProjector *MR_IPointsProjector_StaticDowncastTo_MR_PointsProjector(const MR_IPointsProjector *object);

/// Downcasts an instance of `MR::IPointsProjector` to a derived class `MR::PointsProjector`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointsProjector *MR_IPointsProjector_MutableStaticDowncastTo_MR_PointsProjector(MR_IPointsProjector *object);

/// Downcasts an instance of `MR::IPointsProjector` to a derived class `MR::PointsProjector`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PointsProjector *MR_IPointsProjector_DynamicDowncastTo_MR_PointsProjector(const MR_IPointsProjector *object);

/// Downcasts an instance of `MR::IPointsProjector` to a derived class `MR::PointsProjector`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PointsProjector *MR_IPointsProjector_MutableDynamicDowncastTo_MR_PointsProjector(MR_IPointsProjector *object);

/// Downcasts an instance of `MR::IPointsProjector` to a derived class `MR::PointsProjector`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointsProjector *MR_IPointsProjector_DynamicDowncastToOrFail_MR_PointsProjector(const MR_IPointsProjector *object);

/// Downcasts an instance of `MR::IPointsProjector` to a derived class `MR::PointsProjector`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsProjector *MR_IPointsProjector_MutableDynamicDowncastToOrFail_MR_PointsProjector(MR_IPointsProjector *object);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsProjector_Destroy()` to free it when you're done using it.
MRC_API MR_PointsProjector *MR_PointsProjector_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointsProjector_DestroyArray()`.
/// Use `MR_PointsProjector_OffsetMutablePtr()` and `MR_PointsProjector_OffsetPtr()` to access the array elements.
MRC_API MR_PointsProjector *MR_PointsProjector_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointsProjector *MR_PointsProjector_OffsetPtr(const MR_PointsProjector *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointsProjector *MR_PointsProjector_OffsetMutablePtr(MR_PointsProjector *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PointsProjector` to its base class `MR::IPointsProjector`.
/// This version is acting on mutable pointers.
MRC_API const MR_IPointsProjector *MR_PointsProjector_UpcastTo_MR_IPointsProjector(const MR_PointsProjector *object);

/// Upcasts an instance of `MR::PointsProjector` to its base class `MR::IPointsProjector`.
MRC_API MR_IPointsProjector *MR_PointsProjector_MutableUpcastTo_MR_IPointsProjector(MR_PointsProjector *object);

/// Generated from a constructor of class `MR::PointsProjector`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsProjector_Destroy()` to free it when you're done using it.
MRC_API MR_PointsProjector *MR_PointsProjector_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointsProjector *_other);

/// Destroys a heap-allocated instance of `MR_PointsProjector`. Does nothing if the pointer is null.
MRC_API void MR_PointsProjector_Destroy(const MR_PointsProjector *_this);

/// Destroys a heap-allocated array of `MR_PointsProjector`. Does nothing if the pointer is null.
MRC_API void MR_PointsProjector_DestroyArray(const MR_PointsProjector *_this);

/// Generated from a method of class `MR::PointsProjector` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsProjector *MR_PointsProjector_AssignFromAnother(MR_PointsProjector *_this, MR_PassBy _other_pass_by, MR_PointsProjector *_other);

/// sets the reference point cloud
/// Generated from a method of class `MR::PointsProjector` named `setPointCloud`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsProjector_setPointCloud(MR_PointsProjector *_this, const MR_PointCloud *pointCloud);

/// computes the closest points on point cloud to given points
/// Generated from a method of class `MR::PointsProjector` named `findProjections`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `results` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsProjector_findProjections(const MR_PointsProjector *_this, MR_std_vector_MR_PointsProjectionResult *results, const MR_std_vector_MR_Vector3f *points, const MR_FindProjectionOnPointsSettings *settings);

/// Returns amount of memory needed to compute projections
/// Generated from a method of class `MR::PointsProjector` named `projectionsHeapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PointsProjector_projectionsHeapBytes(const MR_PointsProjector *_this, MR_uint64_t numProjections);

#ifdef __cplusplus
} // extern "C"
#endif
