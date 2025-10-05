// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_DistanceFromWeightedPointsComputeParams MR_DistanceFromWeightedPointsComputeParams; // Defined in `#include <MRCMesh/MRClosestWeightedPoint.h>`.
typedef struct MR_DistanceFromWeightedPointsParams MR_DistanceFromWeightedPointsParams; // Defined in `#include <MRCMesh/MRClosestWeightedPoint.h>`.
typedef struct MR_DistanceVolumeParams MR_DistanceVolumeParams; // Defined in `#include <MRCVoxels/MRDistanceVolumeParams.h>`.
typedef struct MR_FunctionVolume MR_FunctionVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_MR_FunctionVolume_from_const_MR_Mesh_ref_const_MR_WeightedShell_DistanceVolumeCreationParams_ref MR_std_function_MR_FunctionVolume_from_const_MR_Mesh_ref_const_MR_WeightedShell_DistanceVolumeCreationParams_ref; // Defined in `#include <MRCMisc/std_function_MR_FunctionVolume_from_const_MR_Mesh_ref_const_MR_WeightedShell_DistanceVolumeC__fd48.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_vector_MR_WeightedShell_ParametersRegions_Region MR_std_vector_MR_WeightedShell_ParametersRegions_Region; // Defined in `#include <MRCMisc/std_vector_MR_WeightedShell_ParametersRegions_Region.h>`.


/// Generated from class `MR::WeightedShell::DistanceVolumeCreationParams`.
typedef struct MR_WeightedShell_DistanceVolumeCreationParams MR_WeightedShell_DistanceVolumeCreationParams;

/// Generated from class `MR::WeightedShell::ParametersBase`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::WeightedShell::ParametersMetric`
///     `MR::WeightedShell::ParametersRegions`
typedef struct MR_WeightedShell_ParametersBase MR_WeightedShell_ParametersBase;

/// Generated from class `MR::WeightedShell::ParametersMetric`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::WeightedShell::ParametersBase`
typedef struct MR_WeightedShell_ParametersMetric MR_WeightedShell_ParametersMetric;

/// Generated from class `MR::WeightedShell::ParametersRegions`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::WeightedShell::ParametersBase`
typedef struct MR_WeightedShell_ParametersRegions MR_WeightedShell_ParametersRegions;

/// Generated from class `MR::WeightedShell::ParametersRegions::Region`.
typedef struct MR_WeightedShell_ParametersRegions_Region MR_WeightedShell_ParametersRegions_Region;

/// Returns a pointer to a member variable of class `MR::WeightedShell::DistanceVolumeCreationParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceVolumeParams *MR_WeightedShell_DistanceVolumeCreationParams_Get_vol(const MR_WeightedShell_DistanceVolumeCreationParams *_this);

/// Modifies a member variable of class `MR::WeightedShell::DistanceVolumeCreationParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_DistanceVolumeCreationParams_Set_vol(MR_WeightedShell_DistanceVolumeCreationParams *_this, MR_PassBy value_pass_by, MR_DistanceVolumeParams *value);

/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::DistanceVolumeCreationParams` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceVolumeParams *MR_WeightedShell_DistanceVolumeCreationParams_GetMutable_vol(MR_WeightedShell_DistanceVolumeCreationParams *_this);

/// Returns a pointer to a member variable of class `MR::WeightedShell::DistanceVolumeCreationParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceFromWeightedPointsComputeParams *MR_WeightedShell_DistanceVolumeCreationParams_Get_dist(const MR_WeightedShell_DistanceVolumeCreationParams *_this);

/// Modifies a member variable of class `MR::WeightedShell::DistanceVolumeCreationParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_DistanceVolumeCreationParams_Set_dist(MR_WeightedShell_DistanceVolumeCreationParams *_this, MR_PassBy value_pass_by, MR_DistanceFromWeightedPointsComputeParams *value);

/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::DistanceVolumeCreationParams` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceFromWeightedPointsComputeParams *MR_WeightedShell_DistanceVolumeCreationParams_GetMutable_dist(MR_WeightedShell_DistanceVolumeCreationParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_DistanceVolumeCreationParams_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_DistanceVolumeCreationParams *MR_WeightedShell_DistanceVolumeCreationParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WeightedShell_DistanceVolumeCreationParams_DestroyArray()`.
/// Use `MR_WeightedShell_DistanceVolumeCreationParams_OffsetMutablePtr()` and `MR_WeightedShell_DistanceVolumeCreationParams_OffsetPtr()` to access the array elements.
MRC_API MR_WeightedShell_DistanceVolumeCreationParams *MR_WeightedShell_DistanceVolumeCreationParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::WeightedShell::DistanceVolumeCreationParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_DistanceVolumeCreationParams_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_DistanceVolumeCreationParams *MR_WeightedShell_DistanceVolumeCreationParams_ConstructFrom(MR_PassBy vol_pass_by, MR_DistanceVolumeParams *vol, MR_PassBy dist_pass_by, MR_DistanceFromWeightedPointsComputeParams *dist);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WeightedShell_DistanceVolumeCreationParams *MR_WeightedShell_DistanceVolumeCreationParams_OffsetPtr(const MR_WeightedShell_DistanceVolumeCreationParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WeightedShell_DistanceVolumeCreationParams *MR_WeightedShell_DistanceVolumeCreationParams_OffsetMutablePtr(MR_WeightedShell_DistanceVolumeCreationParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::WeightedShell::DistanceVolumeCreationParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_DistanceVolumeCreationParams_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_DistanceVolumeCreationParams *MR_WeightedShell_DistanceVolumeCreationParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_WeightedShell_DistanceVolumeCreationParams *_other);

/// Destroys a heap-allocated instance of `MR_WeightedShell_DistanceVolumeCreationParams`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_DistanceVolumeCreationParams_Destroy(const MR_WeightedShell_DistanceVolumeCreationParams *_this);

/// Destroys a heap-allocated array of `MR_WeightedShell_DistanceVolumeCreationParams`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_DistanceVolumeCreationParams_DestroyArray(const MR_WeightedShell_DistanceVolumeCreationParams *_this);

/// Generated from a method of class `MR::WeightedShell::DistanceVolumeCreationParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WeightedShell_DistanceVolumeCreationParams *MR_WeightedShell_DistanceVolumeCreationParams_AssignFromAnother(MR_WeightedShell_DistanceVolumeCreationParams *_this, MR_PassBy _other_pass_by, MR_WeightedShell_DistanceVolumeCreationParams *_other);

/// makes FunctionVolume representing minimal distance to weighted points
/// Generated from function `MR::WeightedShell::pointsToDistanceVolume`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolume *MR_WeightedShell_pointsToDistanceVolume(const MR_PointCloud *cloud, const MR_WeightedShell_DistanceVolumeCreationParams *params);

/// makes FunctionVolume representing minimal distance to mesh with weighted vertices
/// Generated from function `MR::WeightedShell::meshToDistanceVolume`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolume *MR_WeightedShell_meshToDistanceVolume(const MR_Mesh *mesh, const MR_WeightedShell_DistanceVolumeCreationParams *params);

/// build iso-surface of minimal distance to points corresponding to this value
/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersBase` named `offset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WeightedShell_ParametersBase_Get_offset(const MR_WeightedShell_ParametersBase *_this);

/// build iso-surface of minimal distance to points corresponding to this value
/// Modifies a member variable of class `MR::WeightedShell::ParametersBase` named `offset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersBase_Set_offset(MR_WeightedShell_ParametersBase *_this, float value);

/// build iso-surface of minimal distance to points corresponding to this value
/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersBase` named `offset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WeightedShell_ParametersBase_GetMutable_offset(MR_WeightedShell_ParametersBase *_this);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersBase` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WeightedShell_ParametersBase_Get_voxelSize(const MR_WeightedShell_ParametersBase *_this);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Modifies a member variable of class `MR::WeightedShell::ParametersBase` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersBase_Set_voxelSize(MR_WeightedShell_ParametersBase *_this, float value);

/// Size of voxel in grid conversions;
/// The user is responsible for setting some positive value here
/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersBase` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WeightedShell_ParametersBase_GetMutable_voxelSize(MR_WeightedShell_ParametersBase *_this);

/// number of voxels to compute near the offset (should be left default unless used for debugging)
/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersBase` named `numLayers`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WeightedShell_ParametersBase_Get_numLayers(const MR_WeightedShell_ParametersBase *_this);

/// number of voxels to compute near the offset (should be left default unless used for debugging)
/// Modifies a member variable of class `MR::WeightedShell::ParametersBase` named `numLayers`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersBase_Set_numLayers(MR_WeightedShell_ParametersBase *_this, float value);

/// number of voxels to compute near the offset (should be left default unless used for debugging)
/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersBase` named `numLayers`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WeightedShell_ParametersBase_GetMutable_numLayers(MR_WeightedShell_ParametersBase *_this);

/// Progress callback
/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersBase` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_WeightedShell_ParametersBase_Get_progress(const MR_WeightedShell_ParametersBase *_this);

/// Progress callback
/// Modifies a member variable of class `MR::WeightedShell::ParametersBase` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersBase_Set_progress(MR_WeightedShell_ParametersBase *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Progress callback
/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersBase` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_WeightedShell_ParametersBase_GetMutable_progress(MR_WeightedShell_ParametersBase *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersBase_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersBase_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WeightedShell_ParametersBase_DestroyArray()`.
/// Use `MR_WeightedShell_ParametersBase_OffsetMutablePtr()` and `MR_WeightedShell_ParametersBase_OffsetPtr()` to access the array elements.
MRC_API MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersBase_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::WeightedShell::ParametersBase` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersBase_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersBase_ConstructFrom(float offset, float voxelSize, float numLayers, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersBase_OffsetPtr(const MR_WeightedShell_ParametersBase *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersBase_OffsetMutablePtr(MR_WeightedShell_ParametersBase *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::WeightedShell::ParametersBase` to a derived class `MR::WeightedShell::ParametersMetric`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_WeightedShell_ParametersMetric *MR_WeightedShell_ParametersBase_StaticDowncastTo_MR_WeightedShell_ParametersMetric(const MR_WeightedShell_ParametersBase *object);

/// Downcasts an instance of `MR::WeightedShell::ParametersBase` to a derived class `MR::WeightedShell::ParametersMetric`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_WeightedShell_ParametersMetric *MR_WeightedShell_ParametersBase_MutableStaticDowncastTo_MR_WeightedShell_ParametersMetric(MR_WeightedShell_ParametersBase *object);

/// Downcasts an instance of `MR::WeightedShell::ParametersBase` to a derived class `MR::WeightedShell::ParametersRegions`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_WeightedShell_ParametersRegions *MR_WeightedShell_ParametersBase_StaticDowncastTo_MR_WeightedShell_ParametersRegions(const MR_WeightedShell_ParametersBase *object);

/// Downcasts an instance of `MR::WeightedShell::ParametersBase` to a derived class `MR::WeightedShell::ParametersRegions`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_WeightedShell_ParametersRegions *MR_WeightedShell_ParametersBase_MutableStaticDowncastTo_MR_WeightedShell_ParametersRegions(MR_WeightedShell_ParametersBase *object);

/// Generated from a constructor of class `MR::WeightedShell::ParametersBase`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersBase_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersBase_ConstructFromAnother(MR_PassBy _other_pass_by, MR_WeightedShell_ParametersBase *_other);

/// Destroys a heap-allocated instance of `MR_WeightedShell_ParametersBase`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_ParametersBase_Destroy(const MR_WeightedShell_ParametersBase *_this);

/// Destroys a heap-allocated array of `MR_WeightedShell_ParametersBase`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_ParametersBase_DestroyArray(const MR_WeightedShell_ParametersBase *_this);

/// Generated from a method of class `MR::WeightedShell::ParametersBase` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersBase_AssignFromAnother(MR_WeightedShell_ParametersBase *_this, MR_PassBy _other_pass_by, MR_WeightedShell_ParametersBase *_other);

/// parameters of distance finding
/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersMetric` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceFromWeightedPointsParams *MR_WeightedShell_ParametersMetric_Get_dist(const MR_WeightedShell_ParametersMetric *_this);

/// parameters of distance finding
/// Modifies a member variable of class `MR::WeightedShell::ParametersMetric` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersMetric_Set_dist(MR_WeightedShell_ParametersMetric *_this, MR_PassBy value_pass_by, MR_DistanceFromWeightedPointsParams *value);

/// parameters of distance finding
/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersMetric` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceFromWeightedPointsParams *MR_WeightedShell_ParametersMetric_GetMutable_dist(MR_WeightedShell_ParametersMetric *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersMetric_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersMetric *MR_WeightedShell_ParametersMetric_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WeightedShell_ParametersMetric_DestroyArray()`.
/// Use `MR_WeightedShell_ParametersMetric_OffsetMutablePtr()` and `MR_WeightedShell_ParametersMetric_OffsetPtr()` to access the array elements.
MRC_API MR_WeightedShell_ParametersMetric *MR_WeightedShell_ParametersMetric_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WeightedShell_ParametersMetric *MR_WeightedShell_ParametersMetric_OffsetPtr(const MR_WeightedShell_ParametersMetric *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WeightedShell_ParametersMetric *MR_WeightedShell_ParametersMetric_OffsetMutablePtr(MR_WeightedShell_ParametersMetric *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::WeightedShell::ParametersMetric` to its base class `MR::WeightedShell::ParametersBase`.
/// This version is acting on mutable pointers.
MRC_API const MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersMetric_UpcastTo_MR_WeightedShell_ParametersBase(const MR_WeightedShell_ParametersMetric *object);

/// Upcasts an instance of `MR::WeightedShell::ParametersMetric` to its base class `MR::WeightedShell::ParametersBase`.
MRC_API MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersMetric_MutableUpcastTo_MR_WeightedShell_ParametersBase(MR_WeightedShell_ParametersMetric *object);

/// Generated from a constructor of class `MR::WeightedShell::ParametersMetric`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersMetric_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersMetric *MR_WeightedShell_ParametersMetric_ConstructFromAnother(MR_PassBy _other_pass_by, MR_WeightedShell_ParametersMetric *_other);

/// Destroys a heap-allocated instance of `MR_WeightedShell_ParametersMetric`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_ParametersMetric_Destroy(const MR_WeightedShell_ParametersMetric *_this);

/// Destroys a heap-allocated array of `MR_WeightedShell_ParametersMetric`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_ParametersMetric_DestroyArray(const MR_WeightedShell_ParametersMetric *_this);

/// Generated from a method of class `MR::WeightedShell::ParametersMetric` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WeightedShell_ParametersMetric *MR_WeightedShell_ParametersMetric_AssignFromAnother(MR_WeightedShell_ParametersMetric *_this, MR_PassBy _other_pass_by, MR_WeightedShell_ParametersMetric *_other);

/// list of regions (overlappings are allowed) with corresponding offsets
/// the additional offset in overlaps is set to the average of the regions
/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersRegions` named `regions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_WeightedShell_ParametersRegions_Region *MR_WeightedShell_ParametersRegions_Get_regions(const MR_WeightedShell_ParametersRegions *_this);

/// list of regions (overlappings are allowed) with corresponding offsets
/// the additional offset in overlaps is set to the average of the regions
/// Modifies a member variable of class `MR::WeightedShell::ParametersRegions` named `regions`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersRegions_Set_regions(MR_WeightedShell_ParametersRegions *_this, MR_PassBy value_pass_by, MR_std_vector_MR_WeightedShell_ParametersRegions_Region *value);

/// list of regions (overlappings are allowed) with corresponding offsets
/// the additional offset in overlaps is set to the average of the regions
/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersRegions` named `regions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_WeightedShell_ParametersRegions_Region *MR_WeightedShell_ParametersRegions_GetMutable_regions(MR_WeightedShell_ParametersRegions *_this);

/// interpolation distance between the weights of the regions
/// determines the sharpness of transitions between different regions
/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersRegions` named `interpolationDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WeightedShell_ParametersRegions_Get_interpolationDist(const MR_WeightedShell_ParametersRegions *_this);

/// interpolation distance between the weights of the regions
/// determines the sharpness of transitions between different regions
/// Modifies a member variable of class `MR::WeightedShell::ParametersRegions` named `interpolationDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersRegions_Set_interpolationDist(MR_WeightedShell_ParametersRegions *_this, float value);

/// interpolation distance between the weights of the regions
/// determines the sharpness of transitions between different regions
/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersRegions` named `interpolationDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WeightedShell_ParametersRegions_GetMutable_interpolationDist(MR_WeightedShell_ParametersRegions *_this);

/// if true the distances grow in both directions from each triangle, reaching minimum in the triangle;
/// if false the distances grow to infinity in the direction of triangle's normals, and decrease to minus infinity in the opposite direction
/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersRegions` named `bidirectionalMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_WeightedShell_ParametersRegions_Get_bidirectionalMode(const MR_WeightedShell_ParametersRegions *_this);

/// if true the distances grow in both directions from each triangle, reaching minimum in the triangle;
/// if false the distances grow to infinity in the direction of triangle's normals, and decrease to minus infinity in the opposite direction
/// Modifies a member variable of class `MR::WeightedShell::ParametersRegions` named `bidirectionalMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersRegions_Set_bidirectionalMode(MR_WeightedShell_ParametersRegions *_this, bool value);

/// if true the distances grow in both directions from each triangle, reaching minimum in the triangle;
/// if false the distances grow to infinity in the direction of triangle's normals, and decrease to minus infinity in the opposite direction
/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersRegions` named `bidirectionalMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_WeightedShell_ParametersRegions_GetMutable_bidirectionalMode(MR_WeightedShell_ParametersRegions *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersRegions_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersRegions *MR_WeightedShell_ParametersRegions_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WeightedShell_ParametersRegions_DestroyArray()`.
/// Use `MR_WeightedShell_ParametersRegions_OffsetMutablePtr()` and `MR_WeightedShell_ParametersRegions_OffsetPtr()` to access the array elements.
MRC_API MR_WeightedShell_ParametersRegions *MR_WeightedShell_ParametersRegions_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WeightedShell_ParametersRegions *MR_WeightedShell_ParametersRegions_OffsetPtr(const MR_WeightedShell_ParametersRegions *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WeightedShell_ParametersRegions *MR_WeightedShell_ParametersRegions_OffsetMutablePtr(MR_WeightedShell_ParametersRegions *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::WeightedShell::ParametersRegions` to its base class `MR::WeightedShell::ParametersBase`.
/// This version is acting on mutable pointers.
MRC_API const MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersRegions_UpcastTo_MR_WeightedShell_ParametersBase(const MR_WeightedShell_ParametersRegions *object);

/// Upcasts an instance of `MR::WeightedShell::ParametersRegions` to its base class `MR::WeightedShell::ParametersBase`.
MRC_API MR_WeightedShell_ParametersBase *MR_WeightedShell_ParametersRegions_MutableUpcastTo_MR_WeightedShell_ParametersBase(MR_WeightedShell_ParametersRegions *object);

/// Generated from a constructor of class `MR::WeightedShell::ParametersRegions`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersRegions_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersRegions *MR_WeightedShell_ParametersRegions_ConstructFromAnother(MR_PassBy _other_pass_by, MR_WeightedShell_ParametersRegions *_other);

/// Destroys a heap-allocated instance of `MR_WeightedShell_ParametersRegions`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_ParametersRegions_Destroy(const MR_WeightedShell_ParametersRegions *_this);

/// Destroys a heap-allocated array of `MR_WeightedShell_ParametersRegions`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_ParametersRegions_DestroyArray(const MR_WeightedShell_ParametersRegions *_this);

/// Generated from a method of class `MR::WeightedShell::ParametersRegions` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WeightedShell_ParametersRegions *MR_WeightedShell_ParametersRegions_AssignFromAnother(MR_WeightedShell_ParametersRegions *_this, MR_PassBy _other_pass_by, MR_WeightedShell_ParametersRegions *_other);

/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersRegions::Region` named `verts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_WeightedShell_ParametersRegions_Region_Get_verts(const MR_WeightedShell_ParametersRegions_Region *_this);

/// Modifies a member variable of class `MR::WeightedShell::ParametersRegions::Region` named `verts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersRegions_Region_Set_verts(MR_WeightedShell_ParametersRegions_Region *_this, MR_PassBy value_pass_by, MR_VertBitSet *value);

/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersRegions::Region` named `verts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *MR_WeightedShell_ParametersRegions_Region_GetMutable_verts(MR_WeightedShell_ParametersRegions_Region *_this);

/// Returns a pointer to a member variable of class `MR::WeightedShell::ParametersRegions::Region` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WeightedShell_ParametersRegions_Region_Get_weight(const MR_WeightedShell_ParametersRegions_Region *_this);

/// Modifies a member variable of class `MR::WeightedShell::ParametersRegions::Region` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedShell_ParametersRegions_Region_Set_weight(MR_WeightedShell_ParametersRegions_Region *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::WeightedShell::ParametersRegions::Region` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WeightedShell_ParametersRegions_Region_GetMutable_weight(MR_WeightedShell_ParametersRegions_Region *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersRegions_Region_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersRegions_Region *MR_WeightedShell_ParametersRegions_Region_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WeightedShell_ParametersRegions_Region_DestroyArray()`.
/// Use `MR_WeightedShell_ParametersRegions_Region_OffsetMutablePtr()` and `MR_WeightedShell_ParametersRegions_Region_OffsetPtr()` to access the array elements.
MRC_API MR_WeightedShell_ParametersRegions_Region *MR_WeightedShell_ParametersRegions_Region_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::WeightedShell::ParametersRegions::Region` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersRegions_Region_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersRegions_Region *MR_WeightedShell_ParametersRegions_Region_ConstructFrom(MR_PassBy verts_pass_by, MR_VertBitSet *verts, float weight);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WeightedShell_ParametersRegions_Region *MR_WeightedShell_ParametersRegions_Region_OffsetPtr(const MR_WeightedShell_ParametersRegions_Region *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WeightedShell_ParametersRegions_Region *MR_WeightedShell_ParametersRegions_Region_OffsetMutablePtr(MR_WeightedShell_ParametersRegions_Region *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::WeightedShell::ParametersRegions::Region`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedShell_ParametersRegions_Region_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedShell_ParametersRegions_Region *MR_WeightedShell_ParametersRegions_Region_ConstructFromAnother(MR_PassBy _other_pass_by, MR_WeightedShell_ParametersRegions_Region *_other);

/// Destroys a heap-allocated instance of `MR_WeightedShell_ParametersRegions_Region`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_ParametersRegions_Region_Destroy(const MR_WeightedShell_ParametersRegions_Region *_this);

/// Destroys a heap-allocated array of `MR_WeightedShell_ParametersRegions_Region`. Does nothing if the pointer is null.
MRC_API void MR_WeightedShell_ParametersRegions_Region_DestroyArray(const MR_WeightedShell_ParametersRegions_Region *_this);

/// Generated from a method of class `MR::WeightedShell::ParametersRegions::Region` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WeightedShell_ParametersRegions_Region *MR_WeightedShell_ParametersRegions_Region_AssignFromAnother(MR_WeightedShell_ParametersRegions_Region *_this, MR_PassBy _other_pass_by, MR_WeightedShell_ParametersRegions_Region *_other);

/// consider a point cloud where each point has additive weight (taken from pointWeights and not from params),
/// and the distance to a point is considered equal to (euclidean distance - weight),
/// constructs iso-surface of such distance field corresponding to params.offset value using marching cubes
/// Generated from function `MR::WeightedShell::pointsShell`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `pointWeights` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_WeightedShell_pointsShell(const MR_PointCloud *cloud, const MR_VertScalars *pointWeights, const MR_WeightedShell_ParametersMetric *params);

/// consider a mesh where each vertex has additive weight (taken from vertWeights and not from params), and this weight is linearly interpolated in mesh triangles,
/// and the distance to a point is considered equal to (euclidean distance - weight),
/// constructs iso-surface of such distance field corresponding to params.offset value using marching cubes
/// Generated from function `MR::WeightedShell::meshShell`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `vertWeights` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_WeightedShell_meshShell_3_MR_VertScalars(const MR_Mesh *mesh, const MR_VertScalars *vertWeights, const MR_WeightedShell_ParametersMetric *params);

/// interpolate set of regions and assign weight to each vertex of the mesh
/// Generated from function `MR::WeightedShell::calculateShellWeightsFromRegions`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `regions` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_WeightedShell_calculateShellWeightsFromRegions(const MR_Mesh *mesh, const MR_std_vector_MR_WeightedShell_ParametersRegions_Region *regions, float interpolationDist);

/// this overload supports linear interpolation between the regions with different weight
/// Generated from function `MR::WeightedShell::meshShell`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_WeightedShell_meshShell_2(const MR_Mesh *mesh, const MR_WeightedShell_ParametersRegions *params);

/// this overload allows to control how distance volume is build during the offset
/// Generated from function `MR::WeightedShell::meshShell`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_WeightedShell_meshShell_3_MR_WeightedShell_ParametersRegions(const MR_Mesh *mesh, const MR_WeightedShell_ParametersRegions *params, MR_PassBy volumeBuilder_pass_by, MR_std_function_MR_FunctionVolume_from_const_MR_Mesh_ref_const_MR_WeightedShell_DistanceVolumeCreationParams_ref *volumeBuilder);

#ifdef __cplusplus
} // extern "C"
#endif
