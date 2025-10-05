// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointsToDistanceVolumeParams MR_PointsToDistanceVolumeParams; // Defined in `#include <MRCVoxels/MRPointsToDistanceVolume.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::DistanceVolumeParams`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::PointsToDistanceVolumeParams`
typedef struct MR_DistanceVolumeParams MR_DistanceVolumeParams;

/// origin point of voxels box
/// Returns a pointer to a member variable of class `MR::DistanceVolumeParams` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_DistanceVolumeParams_Get_origin(const MR_DistanceVolumeParams *_this);

/// origin point of voxels box
/// Modifies a member variable of class `MR::DistanceVolumeParams` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceVolumeParams_Set_origin(MR_DistanceVolumeParams *_this, MR_Vector3f value);

/// origin point of voxels box
/// Returns a mutable pointer to a member variable of class `MR::DistanceVolumeParams` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_DistanceVolumeParams_GetMutable_origin(MR_DistanceVolumeParams *_this);

/// progress callback
/// Returns a pointer to a member variable of class `MR::DistanceVolumeParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_DistanceVolumeParams_Get_cb(const MR_DistanceVolumeParams *_this);

/// progress callback
/// Modifies a member variable of class `MR::DistanceVolumeParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceVolumeParams_Set_cb(MR_DistanceVolumeParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// progress callback
/// Returns a mutable pointer to a member variable of class `MR::DistanceVolumeParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_DistanceVolumeParams_GetMutable_cb(MR_DistanceVolumeParams *_this);

/// size of voxel on each axis
/// Returns a pointer to a member variable of class `MR::DistanceVolumeParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_DistanceVolumeParams_Get_voxelSize(const MR_DistanceVolumeParams *_this);

/// size of voxel on each axis
/// Modifies a member variable of class `MR::DistanceVolumeParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceVolumeParams_Set_voxelSize(MR_DistanceVolumeParams *_this, MR_Vector3f value);

/// size of voxel on each axis
/// Returns a mutable pointer to a member variable of class `MR::DistanceVolumeParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_DistanceVolumeParams_GetMutable_voxelSize(MR_DistanceVolumeParams *_this);

/// num voxels along each axis
/// Returns a pointer to a member variable of class `MR::DistanceVolumeParams` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_DistanceVolumeParams_Get_dimensions(const MR_DistanceVolumeParams *_this);

/// num voxels along each axis
/// Modifies a member variable of class `MR::DistanceVolumeParams` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceVolumeParams_Set_dimensions(MR_DistanceVolumeParams *_this, MR_Vector3i value);

/// num voxels along each axis
/// Returns a mutable pointer to a member variable of class `MR::DistanceVolumeParams` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_DistanceVolumeParams_GetMutable_dimensions(MR_DistanceVolumeParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceVolumeParams *MR_DistanceVolumeParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DistanceVolumeParams_DestroyArray()`.
/// Use `MR_DistanceVolumeParams_OffsetMutablePtr()` and `MR_DistanceVolumeParams_OffsetPtr()` to access the array elements.
MRC_API MR_DistanceVolumeParams *MR_DistanceVolumeParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DistanceVolumeParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceVolumeParams *MR_DistanceVolumeParams_ConstructFrom(MR_Vector3f origin, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, MR_Vector3f voxelSize, MR_Vector3i dimensions);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DistanceVolumeParams *MR_DistanceVolumeParams_OffsetPtr(const MR_DistanceVolumeParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DistanceVolumeParams *MR_DistanceVolumeParams_OffsetMutablePtr(MR_DistanceVolumeParams *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::DistanceVolumeParams` to a derived class `MR::PointsToDistanceVolumeParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointsToDistanceVolumeParams *MR_DistanceVolumeParams_StaticDowncastTo_MR_PointsToDistanceVolumeParams(const MR_DistanceVolumeParams *object);

/// Downcasts an instance of `MR::DistanceVolumeParams` to a derived class `MR::PointsToDistanceVolumeParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointsToDistanceVolumeParams *MR_DistanceVolumeParams_MutableStaticDowncastTo_MR_PointsToDistanceVolumeParams(MR_DistanceVolumeParams *object);

/// Generated from a constructor of class `MR::DistanceVolumeParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceVolumeParams_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceVolumeParams *MR_DistanceVolumeParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DistanceVolumeParams *_other);

/// Destroys a heap-allocated instance of `MR_DistanceVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_DistanceVolumeParams_Destroy(const MR_DistanceVolumeParams *_this);

/// Destroys a heap-allocated array of `MR_DistanceVolumeParams`. Does nothing if the pointer is null.
MRC_API void MR_DistanceVolumeParams_DestroyArray(const MR_DistanceVolumeParams *_this);

/// Generated from a method of class `MR::DistanceVolumeParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceVolumeParams *MR_DistanceVolumeParams_AssignFromAnother(MR_DistanceVolumeParams *_this, MR_PassBy _other_pass_by, MR_DistanceVolumeParams *_other);

#ifdef __cplusplus
} // extern "C"
#endif
