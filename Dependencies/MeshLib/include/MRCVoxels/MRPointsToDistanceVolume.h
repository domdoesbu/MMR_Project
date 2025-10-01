// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_DistanceVolumeParams MR_DistanceVolumeParams; // Defined in `#include <MRCVoxels/MRDistanceVolumeParams.h>`.
typedef struct MR_FunctionVolume MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_SimpleVolume_std_string MR_expected_MR_SimpleVolume_std_string; // Defined in `#include <MRCMisc/expected_MR_SimpleVolume_std_string.h>`.
typedef struct MR_expected_MR_VertColors_std_string MR_expected_MR_VertColors_std_string; // Defined in `#include <MRCMisc/expected_MR_VertColors_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::PointsToDistanceVolumeParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::DistanceVolumeParams`
typedef struct MR_PointsToDistanceVolumeParams MR_PointsToDistanceVolumeParams;

/// it the distance of highest influence of a point;
/// the maximal influence distance is 3*sigma; beyond that distance the influence is strictly zero
/// Returns a pointer to a member variable of class `MR::PointsToDistanceVolumeParams` named `sigma`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointsToDistanceVolumeParams_Get_sigma(const MR_PointsToDistanceVolumeParams *_this);

/// it the distance of highest influence of a point;
/// the maximal influence distance is 3*sigma; beyond that distance the influence is strictly zero
/// Modifies a member variable of class `MR::PointsToDistanceVolumeParams` named `sigma`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToDistanceVolumeParams_Set_sigma(MR_PointsToDistanceVolumeParams *_this, float value);

/// it the distance of highest influence of a point;
/// the maximal influence distance is 3*sigma; beyond that distance the influence is strictly zero
/// Returns a mutable pointer to a member variable of class `MR::PointsToDistanceVolumeParams` named `sigma`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointsToDistanceVolumeParams_GetMutable_sigma(MR_PointsToDistanceVolumeParams *_this);

/// minimum sum of influence weights from surrounding points for a voxel to get a value, meaning that there shall be at least this number of points in close proximity
/// Returns a pointer to a member variable of class `MR::PointsToDistanceVolumeParams` named `minWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointsToDistanceVolumeParams_Get_minWeight(const MR_PointsToDistanceVolumeParams *_this);

/// minimum sum of influence weights from surrounding points for a voxel to get a value, meaning that there shall be at least this number of points in close proximity
/// Modifies a member variable of class `MR::PointsToDistanceVolumeParams` named `minWeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToDistanceVolumeParams_Set_minWeight(MR_PointsToDistanceVolumeParams *_this, float value);

/// minimum sum of influence weights from surrounding points for a voxel to get a value, meaning that there shall be at least this number of points in close proximity
/// Returns a mutable pointer to a member variable of class `MR::PointsToDistanceVolumeParams` named `minWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointsToDistanceVolumeParams_GetMutable_minWeight(MR_PointsToDistanceVolumeParams *_this);

/// optional input: if this pointer is set then function will use these normals instead of ones present in cloud
/// Returns a pointer to a member variable of class `MR::PointsToDistanceVolumeParams` named `ptNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *const *MR_PointsToDistanceVolumeParams_Get_ptNormals(const MR_PointsToDistanceVolumeParams *_this);

/// optional input: if this pointer is set then function will use these normals instead of ones present in cloud
/// Modifies a member variable of class `MR::PointsToDistanceVolumeParams` named `ptNormals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsToDistanceVolumeParams_Set_ptNormals(MR_PointsToDistanceVolumeParams *_this, const MR_VertCoords *value);

/// optional input: if this pointer is set then function will use these normals instead of ones present in cloud
/// Returns a mutable pointer to a member variable of class `MR::PointsToDistanceVolumeParams` named `ptNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords **MR_PointsToDistanceVolumeParams_GetMutable_ptNormals(MR_PointsToDistanceVolumeParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsToDistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_PointsToDistanceVolumeParams *MR_PointsToDistanceVolumeParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointsToDistanceVolumeParams_DestroyArray()`.
/// Use `MR_PointsToDistanceVolumeParams_OffsetMutablePtr()` and `MR_PointsToDistanceVolumeParams_OffsetPtr()` to access the array elements.
MRC_API MR_PointsToDistanceVolumeParams *MR_PointsToDistanceVolumeParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointsToDistanceVolumeParams *MR_PointsToDistanceVolumeParams_OffsetPtr(const MR_PointsToDistanceVolumeParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointsToDistanceVolumeParams *MR_PointsToDistanceVolumeParams_OffsetMutablePtr(MR_PointsToDistanceVolumeParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PointsToDistanceVolumeParams` to its base class `MR::DistanceVolumeParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceVolumeParams *MR_PointsToDistanceVolumeParams_UpcastTo_MR_DistanceVolumeParams(const MR_PointsToDistanceVolumeParams *object);

/// Upcasts an instance of `MR::PointsToDistanceVolumeParams` to its base class `MR::DistanceVolumeParams`.
MRC_API MR_DistanceVolumeParams *MR_PointsToDistanceVolumeParams_MutableUpcastTo_MR_DistanceVolumeParams(MR_PointsToDistanceVolumeParams *object);

/// Generated from a constructor of class `MR::PointsToDistanceVolumeParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsToDistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_PointsToDistanceVolumeParams *MR_PointsToDistanceVolumeParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointsToDistanceVolumeParams *_other);

/// Destroys a heap-allocated instance of `MR_PointsToDistanceVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_PointsToDistanceVolumeParams_Destroy(const MR_PointsToDistanceVolumeParams *_this);

/// Destroys a heap-allocated array of `MR_PointsToDistanceVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_PointsToDistanceVolumeParams_DestroyArray(const MR_PointsToDistanceVolumeParams *_this);

/// Generated from a method of class `MR::PointsToDistanceVolumeParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsToDistanceVolumeParams *MR_PointsToDistanceVolumeParams_AssignFromAnother(MR_PointsToDistanceVolumeParams *_this, MR_PassBy _other_pass_by, MR_PointsToDistanceVolumeParams *_other);

/// makes SimpleVolume filled with signed distances to points with normals
/// Generated from function `MR::pointsToDistanceVolume`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_SimpleVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_SimpleVolume_std_string *MR_pointsToDistanceVolume(const MR_PointCloud *cloud, const MR_PointsToDistanceVolumeParams *params);

/// makes FunctionVolume representing signed distances to points with normals
/// Generated from function `MR::pointsToDistanceFunctionVolume`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolume *MR_pointsToDistanceFunctionVolume(const MR_PointCloud *cloud, const MR_PointsToDistanceVolumeParams *params);

/// given
/// \param cloud      a point cloud
/// \param colors     colors of each point in the cloud
/// \param tgtPoints  some target points
/// \param tgtVerts   mask of valid target points
/// \param sigma      the distance of highest influence of a point
/// \param cb         progress callback
/// computes the colors in valid target points by averaging the colors from the point cloud
/// Generated from function `MR::calcAvgColors`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `colors` can not be null. It is a single object.
/// Parameter `tgtPoints` can not be null. It is a single object.
/// Parameter `tgtVerts` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VertColors_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VertColors_std_string *MR_calcAvgColors(const MR_PointCloud *cloud, const MR_VertColors *colors, const MR_VertCoords *tgtPoints, const MR_VertBitSet *tgtVerts, float sigma, const MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
