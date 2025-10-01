// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshProjectionTransforms MR_MeshProjectionTransforms; // Defined in `#include <MRCMesh/MRMeshProject.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::ProjectAttributeParams`.
typedef struct MR_ProjectAttributeParams MR_ProjectAttributeParams;

/// Returns a pointer to a member variable of class `MR::ProjectAttributeParams` named `xfs`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshProjectionTransforms *MR_ProjectAttributeParams_Get_xfs(const MR_ProjectAttributeParams *_this);

/// Modifies a member variable of class `MR::ProjectAttributeParams` named `xfs`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_ProjectAttributeParams_Set_xfs(MR_ProjectAttributeParams *_this, const MR_MeshProjectionTransforms *value);

/// Returns a mutable pointer to a member variable of class `MR::ProjectAttributeParams` named `xfs`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshProjectionTransforms *MR_ProjectAttributeParams_GetMutable_xfs(MR_ProjectAttributeParams *_this);

/// Returns a pointer to a member variable of class `MR::ProjectAttributeParams` named `progressCb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_ProjectAttributeParams_Get_progressCb(const MR_ProjectAttributeParams *_this);

/// Modifies a member variable of class `MR::ProjectAttributeParams` named `progressCb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ProjectAttributeParams_Set_progressCb(MR_ProjectAttributeParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::ProjectAttributeParams` named `progressCb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_ProjectAttributeParams_GetMutable_progressCb(MR_ProjectAttributeParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ProjectAttributeParams_Destroy()` to free it when you're done using it.
MRC_API MR_ProjectAttributeParams *MR_ProjectAttributeParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ProjectAttributeParams_DestroyArray()`.
/// Use `MR_ProjectAttributeParams_OffsetMutablePtr()` and `MR_ProjectAttributeParams_OffsetPtr()` to access the array elements.
MRC_API MR_ProjectAttributeParams *MR_ProjectAttributeParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ProjectAttributeParams` elementwise.
/// Parameter `xfs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ProjectAttributeParams_Destroy()` to free it when you're done using it.
MRC_API MR_ProjectAttributeParams *MR_ProjectAttributeParams_ConstructFrom(const MR_MeshProjectionTransforms *xfs, MR_PassBy progressCb_pass_by, MR_std_function_bool_from_float *progressCb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ProjectAttributeParams *MR_ProjectAttributeParams_OffsetPtr(const MR_ProjectAttributeParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ProjectAttributeParams *MR_ProjectAttributeParams_OffsetMutablePtr(MR_ProjectAttributeParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ProjectAttributeParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ProjectAttributeParams_Destroy()` to free it when you're done using it.
MRC_API MR_ProjectAttributeParams *MR_ProjectAttributeParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ProjectAttributeParams *_other);

/// Destroys a heap-allocated instance of `MR_ProjectAttributeParams`. Does nothing if the pointer is null.
MRC_API void MR_ProjectAttributeParams_Destroy(const MR_ProjectAttributeParams *_this);

/// Destroys a heap-allocated array of `MR_ProjectAttributeParams`. Does nothing if the pointer is null.
MRC_API void MR_ProjectAttributeParams_DestroyArray(const MR_ProjectAttributeParams *_this);

/// Generated from a method of class `MR::ProjectAttributeParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ProjectAttributeParams *MR_ProjectAttributeParams_AssignFromAnother(MR_ProjectAttributeParams *_this, MR_PassBy _other_pass_by, MR_ProjectAttributeParams *_other);

#ifdef __cplusplus
} // extern "C"
#endif
