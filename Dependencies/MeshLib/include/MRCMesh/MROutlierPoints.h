// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_expected_MR_VertBitSet_std_string MR_expected_MR_VertBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_VertBitSet_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_vector_uint8_t MR_std_vector_uint8_t; // Defined in `#include <MRCMisc/std_vector_uint8_t.h>`.


/// Parameters of various criteria for detecting outlier points
/// Generated from class `MR::OutlierParams`.
typedef struct MR_OutlierParams MR_OutlierParams;

/// Types of outlier points
typedef int32_t MR_OutlierTypeMask;
enum // MR_OutlierTypeMask
{
    ///< Small groups of points that are far from the rest
    MR_OutlierTypeMask_SmallComponents = 1,
    ///< Points that have too few neighbors within the radius
    MR_OutlierTypeMask_WeaklyConnected = 2,
    ///< Points far from the surface approximating the nearest points
    MR_OutlierTypeMask_FarSurface = 4,
    ///< Points whose normals differ from the average norm of their nearest neighbors
    MR_OutlierTypeMask_AwayNormal = 8,
    MR_OutlierTypeMask_All = 15,
};

/// A class for searching for outliers of points
/// @detail The class caches the prepared search results, which allows to speed up the repeat search (while use same radius)
/// Generated from class `MR::OutliersDetector`.
typedef struct MR_OutliersDetector MR_OutliersDetector;

/// Outlier point search parameters
/// Generated from class `MR::FindOutliersParams`.
typedef struct MR_FindOutliersParams MR_FindOutliersParams;

/// Maximum points in the outlier component
/// Returns a pointer to a member variable of class `MR::OutlierParams` named `maxClusterSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_OutlierParams_Get_maxClusterSize(const MR_OutlierParams *_this);

/// Maximum points in the outlier component
/// Modifies a member variable of class `MR::OutlierParams` named `maxClusterSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OutlierParams_Set_maxClusterSize(MR_OutlierParams *_this, int32_t value);

/// Maximum points in the outlier component
/// Returns a mutable pointer to a member variable of class `MR::OutlierParams` named `maxClusterSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_OutlierParams_GetMutable_maxClusterSize(MR_OutlierParams *_this);

/// Maximum number of adjacent points for an outlier point
/// Returns a pointer to a member variable of class `MR::OutlierParams` named `maxNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_OutlierParams_Get_maxNeighbors(const MR_OutlierParams *_this);

/// Maximum number of adjacent points for an outlier point
/// Modifies a member variable of class `MR::OutlierParams` named `maxNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OutlierParams_Set_maxNeighbors(MR_OutlierParams *_this, int32_t value);

/// Maximum number of adjacent points for an outlier point
/// Returns a mutable pointer to a member variable of class `MR::OutlierParams` named `maxNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_OutlierParams_GetMutable_maxNeighbors(MR_OutlierParams *_this);

/// Minimum distance (as proportion of search radius) to the approximate surface from outliers point
/// Returns a pointer to a member variable of class `MR::OutlierParams` named `minHeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_OutlierParams_Get_minHeight(const MR_OutlierParams *_this);

/// Minimum distance (as proportion of search radius) to the approximate surface from outliers point
/// Modifies a member variable of class `MR::OutlierParams` named `minHeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OutlierParams_Set_minHeight(MR_OutlierParams *_this, float value);

/// Minimum distance (as proportion of search radius) to the approximate surface from outliers point
/// Returns a mutable pointer to a member variable of class `MR::OutlierParams` named `minHeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_OutlierParams_GetMutable_minHeight(MR_OutlierParams *_this);

/// Minimum angle of difference of normal at outlier points
/// @note available only if there are normals
/// Returns a pointer to a member variable of class `MR::OutlierParams` named `minAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_OutlierParams_Get_minAngle(const MR_OutlierParams *_this);

/// Minimum angle of difference of normal at outlier points
/// @note available only if there are normals
/// Modifies a member variable of class `MR::OutlierParams` named `minAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OutlierParams_Set_minAngle(MR_OutlierParams *_this, float value);

/// Minimum angle of difference of normal at outlier points
/// @note available only if there are normals
/// Returns a mutable pointer to a member variable of class `MR::OutlierParams` named `minAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_OutlierParams_GetMutable_minAngle(MR_OutlierParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OutlierParams_Destroy()` to free it when you're done using it.
MRC_API MR_OutlierParams *MR_OutlierParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OutlierParams_DestroyArray()`.
/// Use `MR_OutlierParams_OffsetMutablePtr()` and `MR_OutlierParams_OffsetPtr()` to access the array elements.
MRC_API MR_OutlierParams *MR_OutlierParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::OutlierParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OutlierParams_Destroy()` to free it when you're done using it.
MRC_API MR_OutlierParams *MR_OutlierParams_ConstructFrom(int32_t maxClusterSize, int32_t maxNeighbors, float minHeight, float minAngle);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OutlierParams *MR_OutlierParams_OffsetPtr(const MR_OutlierParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OutlierParams *MR_OutlierParams_OffsetMutablePtr(MR_OutlierParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OutlierParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OutlierParams_Destroy()` to free it when you're done using it.
MRC_API MR_OutlierParams *MR_OutlierParams_ConstructFromAnother(const MR_OutlierParams *_other);

/// Destroys a heap-allocated instance of `MR_OutlierParams`. Does nothing if the pointer is null.
MRC_API void MR_OutlierParams_Destroy(const MR_OutlierParams *_this);

/// Destroys a heap-allocated array of `MR_OutlierParams`. Does nothing if the pointer is null.
MRC_API void MR_OutlierParams_DestroyArray(const MR_OutlierParams *_this);

/// Generated from a method of class `MR::OutlierParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OutlierParams *MR_OutlierParams_AssignFromAnother(MR_OutlierParams *_this, const MR_OutlierParams *_other);

/// Generated from function `MR::operator&`.
MRC_API MR_OutlierTypeMask MR_bitand_MR_OutlierTypeMask(MR_OutlierTypeMask a, MR_OutlierTypeMask b);

/// Generated from function `MR::operator|`.
MRC_API MR_OutlierTypeMask MR_bitor_MR_OutlierTypeMask(MR_OutlierTypeMask a, MR_OutlierTypeMask b);

/// Generated from function `MR::operator~`.
MRC_API MR_OutlierTypeMask MR_compl_MR_OutlierTypeMask(MR_OutlierTypeMask a);

/// Generated from function `MR::operator&=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OutlierTypeMask *MR_bitand_assign_MR_OutlierTypeMask(MR_OutlierTypeMask *a, MR_OutlierTypeMask b);

/// Generated from function `MR::operator|=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OutlierTypeMask *MR_bitor_assign_MR_OutlierTypeMask(MR_OutlierTypeMask *a, MR_OutlierTypeMask b);

/// Generated from function `MR::operator*`.
MRC_API MR_OutlierTypeMask MR_mul_MR_OutlierTypeMask_bool(MR_OutlierTypeMask a, bool b);

/// Generated from function `MR::operator*`.
MRC_API MR_OutlierTypeMask MR_mul_bool_MR_OutlierTypeMask(bool a, MR_OutlierTypeMask b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OutlierTypeMask *MR_mul_assign_MR_OutlierTypeMask_bool(MR_OutlierTypeMask *a, bool b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OutliersDetector_Destroy()` to free it when you're done using it.
MRC_API MR_OutliersDetector *MR_OutliersDetector_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OutliersDetector_DestroyArray()`.
/// Use `MR_OutliersDetector_OffsetMutablePtr()` and `MR_OutliersDetector_OffsetPtr()` to access the array elements.
MRC_API MR_OutliersDetector *MR_OutliersDetector_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OutliersDetector *MR_OutliersDetector_OffsetPtr(const MR_OutliersDetector *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OutliersDetector *MR_OutliersDetector_OffsetMutablePtr(MR_OutliersDetector *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OutliersDetector`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OutliersDetector_Destroy()` to free it when you're done using it.
MRC_API MR_OutliersDetector *MR_OutliersDetector_ConstructFromAnother(MR_PassBy _other_pass_by, MR_OutliersDetector *_other);

/// Destroys a heap-allocated instance of `MR_OutliersDetector`. Does nothing if the pointer is null.
MRC_API void MR_OutliersDetector_Destroy(const MR_OutliersDetector *_this);

/// Destroys a heap-allocated array of `MR_OutliersDetector`. Does nothing if the pointer is null.
MRC_API void MR_OutliersDetector_DestroyArray(const MR_OutliersDetector *_this);

/// Generated from a method of class `MR::OutliersDetector` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OutliersDetector *MR_OutliersDetector_AssignFromAnother(MR_OutliersDetector *_this, MR_PassBy _other_pass_by, MR_OutliersDetector *_other);

/// Make a preliminary stage of outlier search. Caches the result
/// 
/// @param pc point cloud
/// @param radius radius of the search for neighboring points for analysis
/// @param mask mask of the types of outliers that are looking for
/// @param progress progress callback function
/// @return error text or nothing
/// Generated from a method of class `MR::OutliersDetector` named `prepare`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pc` can not be null. It is a single object.
/// Parameter `progress` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_OutliersDetector_prepare(MR_OutliersDetector *_this, const MR_PointCloud *pc, float radius, MR_OutlierTypeMask mask, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Set search parameters
/// Generated from a method of class `MR::OutliersDetector` named `setParams`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
MRC_API void MR_OutliersDetector_setParams(MR_OutliersDetector *_this, const MR_OutlierParams *params);

/// Get search parameters
/// Generated from a method of class `MR::OutliersDetector` named `getParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OutlierParams *MR_OutliersDetector_getParams(const MR_OutliersDetector *_this);

/// Make an outlier search based on preliminary data
/// @param mask mask of the types of outliers you are looking for
/// Generated from a method of class `MR::OutliersDetector` named `find`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `progress` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertBitSet_std_string *MR_OutliersDetector_find(MR_OutliersDetector *_this, MR_OutlierTypeMask mask, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Get statistics on the number of neighbors for each point
/// Generated from a method of class `MR::OutliersDetector` named `getWeaklyConnectedStat`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_uint8_t *MR_OutliersDetector_getWeaklyConnectedStat(MR_OutliersDetector *_this);

///< Parameters of various criteria for detecting outlier points
/// Returns a pointer to a member variable of class `MR::FindOutliersParams` named `finderParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OutlierParams *MR_FindOutliersParams_Get_finderParams(const MR_FindOutliersParams *_this);

///< Parameters of various criteria for detecting outlier points
/// Modifies a member variable of class `MR::FindOutliersParams` named `finderParams`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_FindOutliersParams_Set_finderParams(MR_FindOutliersParams *_this, const MR_OutlierParams *value);

///< Parameters of various criteria for detecting outlier points
/// Returns a mutable pointer to a member variable of class `MR::FindOutliersParams` named `finderParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OutlierParams *MR_FindOutliersParams_GetMutable_finderParams(MR_FindOutliersParams *_this);

///< Radius of the search for neighboring points for analysis
/// Returns a pointer to a member variable of class `MR::FindOutliersParams` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindOutliersParams_Get_radius(const MR_FindOutliersParams *_this);

///< Radius of the search for neighboring points for analysis
/// Modifies a member variable of class `MR::FindOutliersParams` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOutliersParams_Set_radius(MR_FindOutliersParams *_this, float value);

///< Radius of the search for neighboring points for analysis
/// Returns a mutable pointer to a member variable of class `MR::FindOutliersParams` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindOutliersParams_GetMutable_radius(MR_FindOutliersParams *_this);

///< Mask of the types of outliers that are looking for
/// Returns a pointer to a member variable of class `MR::FindOutliersParams` named `mask`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OutlierTypeMask *MR_FindOutliersParams_Get_mask(const MR_FindOutliersParams *_this);

///< Mask of the types of outliers that are looking for
/// Modifies a member variable of class `MR::FindOutliersParams` named `mask`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOutliersParams_Set_mask(MR_FindOutliersParams *_this, MR_OutlierTypeMask value);

///< Mask of the types of outliers that are looking for
/// Returns a mutable pointer to a member variable of class `MR::FindOutliersParams` named `mask`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OutlierTypeMask *MR_FindOutliersParams_GetMutable_mask(MR_FindOutliersParams *_this);

///< Progress callback
/// Returns a pointer to a member variable of class `MR::FindOutliersParams` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_FindOutliersParams_Get_progress(const MR_FindOutliersParams *_this);

///< Progress callback
/// Modifies a member variable of class `MR::FindOutliersParams` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOutliersParams_Set_progress(MR_FindOutliersParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

///< Progress callback
/// Returns a mutable pointer to a member variable of class `MR::FindOutliersParams` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_FindOutliersParams_GetMutable_progress(MR_FindOutliersParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindOutliersParams_Destroy()` to free it when you're done using it.
MRC_API MR_FindOutliersParams *MR_FindOutliersParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FindOutliersParams_DestroyArray()`.
/// Use `MR_FindOutliersParams_OffsetMutablePtr()` and `MR_FindOutliersParams_OffsetPtr()` to access the array elements.
MRC_API MR_FindOutliersParams *MR_FindOutliersParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FindOutliersParams` elementwise.
/// Parameter `finderParams` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindOutliersParams_Destroy()` to free it when you're done using it.
MRC_API MR_FindOutliersParams *MR_FindOutliersParams_ConstructFrom(const MR_OutlierParams *finderParams, float radius, MR_OutlierTypeMask mask, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FindOutliersParams *MR_FindOutliersParams_OffsetPtr(const MR_FindOutliersParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FindOutliersParams *MR_FindOutliersParams_OffsetMutablePtr(MR_FindOutliersParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FindOutliersParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindOutliersParams_Destroy()` to free it when you're done using it.
MRC_API MR_FindOutliersParams *MR_FindOutliersParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FindOutliersParams *_other);

/// Destroys a heap-allocated instance of `MR_FindOutliersParams`. Does nothing if the pointer is null.
MRC_API void MR_FindOutliersParams_Destroy(const MR_FindOutliersParams *_this);

/// Destroys a heap-allocated array of `MR_FindOutliersParams`. Does nothing if the pointer is null.
MRC_API void MR_FindOutliersParams_DestroyArray(const MR_FindOutliersParams *_this);

/// Generated from a method of class `MR::FindOutliersParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FindOutliersParams *MR_FindOutliersParams_AssignFromAnother(MR_FindOutliersParams *_this, MR_PassBy _other_pass_by, MR_FindOutliersParams *_other);

/// Finding outlier points
/// Generated from function `MR::findOutliers`.
/// Parameter `pc` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertBitSet_std_string *MR_findOutliers(const MR_PointCloud *pc, const MR_FindOutliersParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
