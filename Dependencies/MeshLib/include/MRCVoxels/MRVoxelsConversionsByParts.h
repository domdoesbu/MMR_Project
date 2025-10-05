// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PartMapping MR_PartMapping; // Defined in `#include <MRCMesh/MRPartMapping.h>`.
typedef struct MR_std_function_void_from_MR_Mesh_ref MR_std_function_void_from_MR_Mesh_ref; // Defined in `#include <MRCMisc/std_function_void_from_MR_Mesh_ref.h>`.
typedef struct MR_std_function_void_from_MR_Mesh_ref_const_MR_PartMapping_ref MR_std_function_void_from_MR_Mesh_ref_const_MR_PartMapping_ref; // Defined in `#include <MRCMisc/std_function_void_from_MR_Mesh_ref_const_MR_PartMapping_ref.h>`.
typedef struct MR_std_function_void_from_MR_Mesh_ref_float_float MR_std_function_void_from_MR_Mesh_ref_float_float; // Defined in `#include <MRCMisc/std_function_void_from_MR_Mesh_ref_float_float.h>`.


/**
* \struct MR::MergeVolumePartSettings
* \brief Parameters' structure for MR::mergeVolumePart
*
*
* \sa \ref mergeVolumePart
*/
/// Generated from class `MR::MergeVolumePartSettings`.
typedef struct MR_MergeVolumePartSettings MR_MergeVolumePartSettings;

/**
* \struct MR::VolumeToMeshByPartsSettings
* \brief Parameters' structure for MR::volumeToMeshByParts
*
*
* \sa \ref volumeToMeshByParts
*/
/// Generated from class `MR::VolumeToMeshByPartsSettings`.
typedef struct MR_VolumeToMeshByPartsSettings MR_VolumeToMeshByPartsSettings;

/// Returns a pointer to a member variable of class `MR::MergeVolumePartSettings` named `preCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_Mesh_ref_float_float *MR_MergeVolumePartSettings_Get_preCut(const MR_MergeVolumePartSettings *_this);

/// Modifies a member variable of class `MR::MergeVolumePartSettings` named `preCut`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MergeVolumePartSettings_Set_preCut(MR_MergeVolumePartSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_Mesh_ref_float_float *value);

/// Returns a mutable pointer to a member variable of class `MR::MergeVolumePartSettings` named `preCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_Mesh_ref_float_float *MR_MergeVolumePartSettings_GetMutable_preCut(MR_MergeVolumePartSettings *_this);

/// Returns a pointer to a member variable of class `MR::MergeVolumePartSettings` named `postCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_Mesh_ref *MR_MergeVolumePartSettings_Get_postCut(const MR_MergeVolumePartSettings *_this);

/// Modifies a member variable of class `MR::MergeVolumePartSettings` named `postCut`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MergeVolumePartSettings_Set_postCut(MR_MergeVolumePartSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_Mesh_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::MergeVolumePartSettings` named `postCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_Mesh_ref *MR_MergeVolumePartSettings_GetMutable_postCut(MR_MergeVolumePartSettings *_this);

/// Returns a pointer to a member variable of class `MR::MergeVolumePartSettings` named `postMerge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_Mesh_ref_const_MR_PartMapping_ref *MR_MergeVolumePartSettings_Get_postMerge(const MR_MergeVolumePartSettings *_this);

/// Modifies a member variable of class `MR::MergeVolumePartSettings` named `postMerge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MergeVolumePartSettings_Set_postMerge(MR_MergeVolumePartSettings *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_Mesh_ref_const_MR_PartMapping_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::MergeVolumePartSettings` named `postMerge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_Mesh_ref_const_MR_PartMapping_ref *MR_MergeVolumePartSettings_GetMutable_postMerge(MR_MergeVolumePartSettings *_this);

/// mapping with initialized maps required for the `postMerge` callback
/// Returns a pointer to a member variable of class `MR::MergeVolumePartSettings` named `mapping`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PartMapping *MR_MergeVolumePartSettings_Get_mapping(const MR_MergeVolumePartSettings *_this);

/// mapping with initialized maps required for the `postMerge` callback
/// Modifies a member variable of class `MR::MergeVolumePartSettings` named `mapping`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MergeVolumePartSettings_Set_mapping(MR_MergeVolumePartSettings *_this, const MR_PartMapping *value);

/// mapping with initialized maps required for the `postMerge` callback
/// Returns a mutable pointer to a member variable of class `MR::MergeVolumePartSettings` named `mapping`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PartMapping *MR_MergeVolumePartSettings_GetMutable_mapping(MR_MergeVolumePartSettings *_this);

/// origin (position of the (0;0;0) voxel) of the voxel volume part, usually specified for SimpleVolume
/// Returns a pointer to a member variable of class `MR::MergeVolumePartSettings` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MergeVolumePartSettings_Get_origin(const MR_MergeVolumePartSettings *_this);

/// origin (position of the (0;0;0) voxel) of the voxel volume part, usually specified for SimpleVolume
/// Modifies a member variable of class `MR::MergeVolumePartSettings` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MergeVolumePartSettings_Set_origin(MR_MergeVolumePartSettings *_this, MR_Vector3f value);

/// origin (position of the (0;0;0) voxel) of the voxel volume part, usually specified for SimpleVolume
/// Returns a mutable pointer to a member variable of class `MR::MergeVolumePartSettings` named `origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MergeVolumePartSettings_GetMutable_origin(MR_MergeVolumePartSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MergeVolumePartSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MergeVolumePartSettings *MR_MergeVolumePartSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MergeVolumePartSettings_DestroyArray()`.
/// Use `MR_MergeVolumePartSettings_OffsetMutablePtr()` and `MR_MergeVolumePartSettings_OffsetPtr()` to access the array elements.
MRC_API MR_MergeVolumePartSettings *MR_MergeVolumePartSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MergeVolumePartSettings` elementwise.
/// Parameter `mapping` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MergeVolumePartSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MergeVolumePartSettings *MR_MergeVolumePartSettings_ConstructFrom(MR_PassBy preCut_pass_by, MR_std_function_void_from_MR_Mesh_ref_float_float *preCut, MR_PassBy postCut_pass_by, MR_std_function_void_from_MR_Mesh_ref *postCut, MR_PassBy postMerge_pass_by, MR_std_function_void_from_MR_Mesh_ref_const_MR_PartMapping_ref *postMerge, const MR_PartMapping *mapping, MR_Vector3f origin);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MergeVolumePartSettings *MR_MergeVolumePartSettings_OffsetPtr(const MR_MergeVolumePartSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MergeVolumePartSettings *MR_MergeVolumePartSettings_OffsetMutablePtr(MR_MergeVolumePartSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MergeVolumePartSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MergeVolumePartSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MergeVolumePartSettings *MR_MergeVolumePartSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MergeVolumePartSettings *_other);

/// Destroys a heap-allocated instance of `MR_MergeVolumePartSettings`. Does nothing if the pointer is null.
MRC_API void MR_MergeVolumePartSettings_Destroy(const MR_MergeVolumePartSettings *_this);

/// Destroys a heap-allocated array of `MR_MergeVolumePartSettings`. Does nothing if the pointer is null.
MRC_API void MR_MergeVolumePartSettings_DestroyArray(const MR_MergeVolumePartSettings *_this);

/// Generated from a method of class `MR::MergeVolumePartSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MergeVolumePartSettings *MR_MergeVolumePartSettings_AssignFromAnother(MR_MergeVolumePartSettings *_this, MR_PassBy _other_pass_by, MR_MergeVolumePartSettings *_other);

// 256 MiB
/// Returns a pointer to a member variable of class `MR::VolumeToMeshByPartsSettings` named `maxVolumePartMemoryUsage`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_VolumeToMeshByPartsSettings_Get_maxVolumePartMemoryUsage(const MR_VolumeToMeshByPartsSettings *_this);

// 256 MiB
/// Modifies a member variable of class `MR::VolumeToMeshByPartsSettings` named `maxVolumePartMemoryUsage`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VolumeToMeshByPartsSettings_Set_maxVolumePartMemoryUsage(MR_VolumeToMeshByPartsSettings *_this, MR_uint64_t value);

// 256 MiB
/// Returns a mutable pointer to a member variable of class `MR::VolumeToMeshByPartsSettings` named `maxVolumePartMemoryUsage`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_VolumeToMeshByPartsSettings_GetMutable_maxVolumePartMemoryUsage(MR_VolumeToMeshByPartsSettings *_this);

/// overlap in voxels between two parts
/// Returns a pointer to a member variable of class `MR::VolumeToMeshByPartsSettings` named `stripeOverlap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_VolumeToMeshByPartsSettings_Get_stripeOverlap(const MR_VolumeToMeshByPartsSettings *_this);

/// overlap in voxels between two parts
/// Modifies a member variable of class `MR::VolumeToMeshByPartsSettings` named `stripeOverlap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VolumeToMeshByPartsSettings_Set_stripeOverlap(MR_VolumeToMeshByPartsSettings *_this, MR_uint64_t value);

/// overlap in voxels between two parts
/// Returns a mutable pointer to a member variable of class `MR::VolumeToMeshByPartsSettings` named `stripeOverlap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_VolumeToMeshByPartsSettings_GetMutable_stripeOverlap(MR_VolumeToMeshByPartsSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeToMeshByPartsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeToMeshByPartsSettings *MR_VolumeToMeshByPartsSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VolumeToMeshByPartsSettings_DestroyArray()`.
/// Use `MR_VolumeToMeshByPartsSettings_OffsetMutablePtr()` and `MR_VolumeToMeshByPartsSettings_OffsetPtr()` to access the array elements.
MRC_API MR_VolumeToMeshByPartsSettings *MR_VolumeToMeshByPartsSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VolumeToMeshByPartsSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeToMeshByPartsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeToMeshByPartsSettings *MR_VolumeToMeshByPartsSettings_ConstructFrom(MR_uint64_t maxVolumePartMemoryUsage, MR_uint64_t stripeOverlap);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VolumeToMeshByPartsSettings *MR_VolumeToMeshByPartsSettings_OffsetPtr(const MR_VolumeToMeshByPartsSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VolumeToMeshByPartsSettings *MR_VolumeToMeshByPartsSettings_OffsetMutablePtr(MR_VolumeToMeshByPartsSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VolumeToMeshByPartsSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VolumeToMeshByPartsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_VolumeToMeshByPartsSettings *MR_VolumeToMeshByPartsSettings_ConstructFromAnother(const MR_VolumeToMeshByPartsSettings *_other);

/// Destroys a heap-allocated instance of `MR_VolumeToMeshByPartsSettings`. Does nothing if the pointer is null.
MRC_API void MR_VolumeToMeshByPartsSettings_Destroy(const MR_VolumeToMeshByPartsSettings *_this);

/// Destroys a heap-allocated array of `MR_VolumeToMeshByPartsSettings`. Does nothing if the pointer is null.
MRC_API void MR_VolumeToMeshByPartsSettings_DestroyArray(const MR_VolumeToMeshByPartsSettings *_this);

/// Generated from a method of class `MR::VolumeToMeshByPartsSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VolumeToMeshByPartsSettings *MR_VolumeToMeshByPartsSettings_AssignFromAnother(MR_VolumeToMeshByPartsSettings *_this, const MR_VolumeToMeshByPartsSettings *_other);

#ifdef __cplusplus
} // extern "C"
#endif
