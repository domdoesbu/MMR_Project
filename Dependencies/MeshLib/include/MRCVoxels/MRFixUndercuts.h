// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_double_from_const_MR_FaceBitSet_ref_const_MR_FixUndercuts_FindParams_ref MR_std_function_double_from_const_MR_FaceBitSet_ref_const_MR_FixUndercuts_FindParams_ref; // Defined in `#include <MRCMisc/std_function_double_from_const_MR_FaceBitSet_ref_const_MR_FixUndercuts_FindParams_ref.h>`.


/// Parameters that is used to find undercuts
/// Generated from class `MR::FixUndercuts::FindParams`.
typedef struct MR_FixUndercuts_FindParams MR_FixUndercuts_FindParams;

/// Fix undercuts function parameters
/// Generated from class `MR::FixUndercuts::FixParams`.
typedef struct MR_FixUndercuts_FixParams MR_FixUndercuts_FixParams;

/// Generated from class `MR::FixUndercuts::ImproveDirectionParameters`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::FixUndercuts::DistMapImproveDirectionParameters`
typedef struct MR_FixUndercuts_ImproveDirectionParameters MR_FixUndercuts_ImproveDirectionParameters;

/// Generated from class `MR::FixUndercuts::DistMapImproveDirectionParameters`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::FixUndercuts::ImproveDirectionParameters`
typedef struct MR_FixUndercuts_DistMapImproveDirectionParameters MR_FixUndercuts_DistMapImproveDirectionParameters;

/// Primitives that are not visible from up direction are considered as undercuts (fix undercuts is performed downwards (in `-direction`))
/// Returns a pointer to a member variable of class `MR::FixUndercuts::FindParams` named `upDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_FixUndercuts_FindParams_Get_upDirection(const MR_FixUndercuts_FindParams *_this);

/// Primitives that are not visible from up direction are considered as undercuts (fix undercuts is performed downwards (in `-direction`))
/// Modifies a member variable of class `MR::FixUndercuts::FindParams` named `upDirection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_FindParams_Set_upDirection(MR_FixUndercuts_FindParams *_this, MR_Vector3f value);

/// Primitives that are not visible from up direction are considered as undercuts (fix undercuts is performed downwards (in `-direction`))
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::FindParams` named `upDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_FixUndercuts_FindParams_GetMutable_upDirection(MR_FixUndercuts_FindParams *_this);

/// vertical angle of fixed undercut walls (note that this value is approximate - it defines "camera" position for internal projective transformation)
/// 0 - strictly vertical walls of undercuts area
/// positive - expanding downwards walls
/// negative - shrinking downwards walls
/// Returns a pointer to a member variable of class `MR::FixUndercuts::FindParams` named `wallAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixUndercuts_FindParams_Get_wallAngle(const MR_FixUndercuts_FindParams *_this);

/// vertical angle of fixed undercut walls (note that this value is approximate - it defines "camera" position for internal projective transformation)
/// 0 - strictly vertical walls of undercuts area
/// positive - expanding downwards walls
/// negative - shrinking downwards walls
/// Modifies a member variable of class `MR::FixUndercuts::FindParams` named `wallAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_FindParams_Set_wallAngle(MR_FixUndercuts_FindParams *_this, float value);

/// vertical angle of fixed undercut walls (note that this value is approximate - it defines "camera" position for internal projective transformation)
/// 0 - strictly vertical walls of undercuts area
/// positive - expanding downwards walls
/// negative - shrinking downwards walls
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::FindParams` named `wallAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixUndercuts_FindParams_GetMutable_wallAngle(MR_FixUndercuts_FindParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_FindParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_FindParams *MR_FixUndercuts_FindParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FixUndercuts_FindParams_DestroyArray()`.
/// Use `MR_FixUndercuts_FindParams_OffsetMutablePtr()` and `MR_FixUndercuts_FindParams_OffsetPtr()` to access the array elements.
MRC_API MR_FixUndercuts_FindParams *MR_FixUndercuts_FindParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FixUndercuts::FindParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_FindParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_FindParams *MR_FixUndercuts_FindParams_ConstructFrom(MR_Vector3f upDirection, float wallAngle);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FixUndercuts_FindParams *MR_FixUndercuts_FindParams_OffsetPtr(const MR_FixUndercuts_FindParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FixUndercuts_FindParams *MR_FixUndercuts_FindParams_OffsetMutablePtr(MR_FixUndercuts_FindParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FixUndercuts::FindParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_FindParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_FindParams *MR_FixUndercuts_FindParams_ConstructFromAnother(const MR_FixUndercuts_FindParams *_other);

/// Destroys a heap-allocated instance of `MR_FixUndercuts_FindParams`. Does nothing if the pointer is null.
MRC_API void MR_FixUndercuts_FindParams_Destroy(const MR_FixUndercuts_FindParams *_this);

/// Destroys a heap-allocated array of `MR_FixUndercuts_FindParams`. Does nothing if the pointer is null.
MRC_API void MR_FixUndercuts_FindParams_DestroyArray(const MR_FixUndercuts_FindParams *_this);

/// Generated from a method of class `MR::FixUndercuts::FindParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FixUndercuts_FindParams *MR_FixUndercuts_FindParams_AssignFromAnother(MR_FixUndercuts_FindParams *_this, const MR_FixUndercuts_FindParams *_other);

/// parameters of what is considered as undercut
/// Returns a pointer to a member variable of class `MR::FixUndercuts::FixParams` named `findParameters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FixUndercuts_FindParams *MR_FixUndercuts_FixParams_Get_findParameters(const MR_FixUndercuts_FixParams *_this);

/// parameters of what is considered as undercut
/// Modifies a member variable of class `MR::FixUndercuts::FixParams` named `findParameters`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_FixParams_Set_findParameters(MR_FixUndercuts_FixParams *_this, const MR_FixUndercuts_FindParams *value);

/// parameters of what is considered as undercut
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::FixParams` named `findParameters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FixUndercuts_FindParams *MR_FixUndercuts_FixParams_GetMutable_findParameters(MR_FixUndercuts_FixParams *_this);

/// voxel size for internal computations: lower size - better precision but more system resources required
/// Returns a pointer to a member variable of class `MR::FixUndercuts::FixParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixUndercuts_FixParams_Get_voxelSize(const MR_FixUndercuts_FixParams *_this);

/// voxel size for internal computations: lower size - better precision but more system resources required
/// Modifies a member variable of class `MR::FixUndercuts::FixParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_FixParams_Set_voxelSize(MR_FixUndercuts_FixParams *_this, float value);

/// voxel size for internal computations: lower size - better precision but more system resources required
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::FixParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixUndercuts_FixParams_GetMutable_voxelSize(MR_FixUndercuts_FixParams *_this);

/// minimum extension of bottom part of the mesh
/// Returns a pointer to a member variable of class `MR::FixUndercuts::FixParams` named `bottomExtension`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixUndercuts_FixParams_Get_bottomExtension(const MR_FixUndercuts_FixParams *_this);

/// minimum extension of bottom part of the mesh
/// Modifies a member variable of class `MR::FixUndercuts::FixParams` named `bottomExtension`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_FixParams_Set_bottomExtension(MR_FixUndercuts_FixParams *_this, float value);

/// minimum extension of bottom part of the mesh
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::FixParams` named `bottomExtension`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixUndercuts_FixParams_GetMutable_bottomExtension(MR_FixUndercuts_FixParams *_this);

/// if set - only this region will be fixed (but still all mesh will be rebuild)
/// Returns a pointer to a member variable of class `MR::FixUndercuts::FixParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *const *MR_FixUndercuts_FixParams_Get_region(const MR_FixUndercuts_FixParams *_this);

/// if set - only this region will be fixed (but still all mesh will be rebuild)
/// Modifies a member variable of class `MR::FixUndercuts::FixParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_FixParams_Set_region(MR_FixUndercuts_FixParams *_this, const MR_FaceBitSet *value);

/// if set - only this region will be fixed (but still all mesh will be rebuild)
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::FixParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet **MR_FixUndercuts_FixParams_GetMutable_region(MR_FixUndercuts_FixParams *_this);

/// if true applies one iterations of gaussian filtering for voxels, useful if thin walls expected
/// Returns a pointer to a member variable of class `MR::FixUndercuts::FixParams` named `smooth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_FixUndercuts_FixParams_Get_smooth(const MR_FixUndercuts_FixParams *_this);

/// if true applies one iterations of gaussian filtering for voxels, useful if thin walls expected
/// Modifies a member variable of class `MR::FixUndercuts::FixParams` named `smooth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_FixParams_Set_smooth(MR_FixUndercuts_FixParams *_this, bool value);

/// if true applies one iterations of gaussian filtering for voxels, useful if thin walls expected
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::FixParams` named `smooth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_FixUndercuts_FixParams_GetMutable_smooth(MR_FixUndercuts_FixParams *_this);

/// Returns a pointer to a member variable of class `MR::FixUndercuts::FixParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_FixUndercuts_FixParams_Get_cb(const MR_FixUndercuts_FixParams *_this);

/// Modifies a member variable of class `MR::FixUndercuts::FixParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_FixParams_Set_cb(MR_FixUndercuts_FixParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::FixParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_FixUndercuts_FixParams_GetMutable_cb(MR_FixUndercuts_FixParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_FixParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_FixParams *MR_FixUndercuts_FixParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FixUndercuts_FixParams_DestroyArray()`.
/// Use `MR_FixUndercuts_FixParams_OffsetMutablePtr()` and `MR_FixUndercuts_FixParams_OffsetPtr()` to access the array elements.
MRC_API MR_FixUndercuts_FixParams *MR_FixUndercuts_FixParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FixUndercuts::FixParams` elementwise.
/// Parameter `findParameters` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_FixParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_FixParams *MR_FixUndercuts_FixParams_ConstructFrom(const MR_FixUndercuts_FindParams *findParameters, float voxelSize, float bottomExtension, const MR_FaceBitSet *region, bool smooth, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FixUndercuts_FixParams *MR_FixUndercuts_FixParams_OffsetPtr(const MR_FixUndercuts_FixParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FixUndercuts_FixParams *MR_FixUndercuts_FixParams_OffsetMutablePtr(MR_FixUndercuts_FixParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FixUndercuts::FixParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_FixParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_FixParams *MR_FixUndercuts_FixParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FixUndercuts_FixParams *_other);

/// Destroys a heap-allocated instance of `MR_FixUndercuts_FixParams`. Does nothing if the pointer is null.
MRC_API void MR_FixUndercuts_FixParams_Destroy(const MR_FixUndercuts_FixParams *_this);

/// Destroys a heap-allocated array of `MR_FixUndercuts_FixParams`. Does nothing if the pointer is null.
MRC_API void MR_FixUndercuts_FixParams_DestroyArray(const MR_FixUndercuts_FixParams *_this);

/// Generated from a method of class `MR::FixUndercuts::FixParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FixUndercuts_FixParams *MR_FixUndercuts_FixParams_AssignFromAnother(MR_FixUndercuts_FixParams *_this, MR_PassBy _other_pass_by, MR_FixUndercuts_FixParams *_other);

/// Fixes undercut areas by building vertical walls under it,
/// algorithm is performed in voxel space, so the mesh is completely rebuilt after this operation
/// Generated from function `MR::FixUndercuts::fix`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_FixUndercuts_fix(MR_Mesh *mesh, const MR_FixUndercuts_FixParams *params);

/// returns the metric that computes total area of undercut faces
/// Generated from function `MR::FixUndercuts::getUndercutAreaMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_double_from_const_MR_FaceBitSet_ref_const_MR_FixUndercuts_FindParams_ref_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_double_from_const_MR_FaceBitSet_ref_const_MR_FixUndercuts_FindParams_ref *MR_FixUndercuts_getUndercutAreaMetric(const MR_Mesh *mesh);

/// returns the metric that computes summed absolute projected area of undercut
/// Generated from function `MR::FixUndercuts::getUndercutAreaProjectionMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_double_from_const_MR_FaceBitSet_ref_const_MR_FixUndercuts_FindParams_ref_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_double_from_const_MR_FaceBitSet_ref_const_MR_FixUndercuts_FindParams_ref *MR_FixUndercuts_getUndercutAreaProjectionMetric(const MR_Mesh *mesh);

/// Adds undercuts to \param outUndercuts
/// if metric is set returns metric of found undercuts, otherwise returns DBL_MAX
/// Generated from function `MR::FixUndercuts::find`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `outUndercuts` can not be null. It is a single object.
/// Parameter `metric` is a single object.
/// Parameter `metric` has a default argument: `{}`, pass a null pointer to use it.
MRC_API double MR_FixUndercuts_find_4(const MR_Mesh *mesh, const MR_FixUndercuts_FindParams *params, MR_FaceBitSet *outUndercuts, const MR_std_function_double_from_const_MR_FaceBitSet_ref_const_MR_FixUndercuts_FindParams_ref *metric);

/// Adds undercuts to \param outUndercuts
/// Generated from function `MR::FixUndercuts::find`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `outUndercuts` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_find_3(const MR_Mesh *mesh, const MR_FixUndercuts_FindParams *params, MR_VertBitSet *outUndercuts);

/// Fast score undercuts projected area via distance map with given resolution
/// lower resolution means lower precision, but faster work
/// \note does not support wallAngle yet
/// Generated from function `MR::FixUndercuts::scoreUndercuts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `upDirection` can not be null. It is a single object.
/// Parameter `resolution` can not be null. It is a single object.
MRC_API double MR_FixUndercuts_scoreUndercuts(const MR_Mesh *mesh, const MR_Vector3f *upDirection, const MR_Vector2i *resolution);

// Hint direction which will be improved
/// Returns a pointer to a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `hintDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_FixUndercuts_ImproveDirectionParameters_Get_hintDirection(const MR_FixUndercuts_ImproveDirectionParameters *_this);

// Hint direction which will be improved
/// Modifies a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `hintDirection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_ImproveDirectionParameters_Set_hintDirection(MR_FixUndercuts_ImproveDirectionParameters *_this, MR_Vector3f value);

// Hint direction which will be improved
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `hintDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_FixUndercuts_ImproveDirectionParameters_GetMutable_hintDirection(MR_FixUndercuts_ImproveDirectionParameters *_this);

// Radial step given in radians look improveDirection comment
/// Returns a pointer to a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `baseAngleStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixUndercuts_ImproveDirectionParameters_Get_baseAngleStep(const MR_FixUndercuts_ImproveDirectionParameters *_this);

// Radial step given in radians look improveDirection comment
/// Modifies a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `baseAngleStep`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_ImproveDirectionParameters_Set_baseAngleStep(MR_FixUndercuts_ImproveDirectionParameters *_this, float value);

// Radial step given in radians look improveDirection comment
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `baseAngleStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixUndercuts_ImproveDirectionParameters_GetMutable_baseAngleStep(MR_FixUndercuts_ImproveDirectionParameters *_this);

// Maximum radial line given in radians look improveDirection comment
/// Returns a pointer to a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `maxBaseAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixUndercuts_ImproveDirectionParameters_Get_maxBaseAngle(const MR_FixUndercuts_ImproveDirectionParameters *_this);

// Maximum radial line given in radians look improveDirection comment
/// Modifies a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `maxBaseAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_ImproveDirectionParameters_Set_maxBaseAngle(MR_FixUndercuts_ImproveDirectionParameters *_this, float value);

// Maximum radial line given in radians look improveDirection comment
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `maxBaseAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixUndercuts_ImproveDirectionParameters_GetMutable_maxBaseAngle(MR_FixUndercuts_ImproveDirectionParameters *_this);

// Polar angle step
/// Returns a pointer to a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `polarAngleStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixUndercuts_ImproveDirectionParameters_Get_polarAngleStep(const MR_FixUndercuts_ImproveDirectionParameters *_this);

// Polar angle step
/// Modifies a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `polarAngleStep`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_ImproveDirectionParameters_Set_polarAngleStep(MR_FixUndercuts_ImproveDirectionParameters *_this, float value);

// Polar angle step
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::ImproveDirectionParameters` named `polarAngleStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixUndercuts_ImproveDirectionParameters_GetMutable_polarAngleStep(MR_FixUndercuts_ImproveDirectionParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_ImproveDirectionParameters_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_ImproveDirectionParameters *MR_FixUndercuts_ImproveDirectionParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FixUndercuts_ImproveDirectionParameters_DestroyArray()`.
/// Use `MR_FixUndercuts_ImproveDirectionParameters_OffsetMutablePtr()` and `MR_FixUndercuts_ImproveDirectionParameters_OffsetPtr()` to access the array elements.
MRC_API MR_FixUndercuts_ImproveDirectionParameters *MR_FixUndercuts_ImproveDirectionParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FixUndercuts::ImproveDirectionParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_ImproveDirectionParameters_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_ImproveDirectionParameters *MR_FixUndercuts_ImproveDirectionParameters_ConstructFrom(MR_Vector3f hintDirection, float baseAngleStep, float maxBaseAngle, float polarAngleStep);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FixUndercuts_ImproveDirectionParameters *MR_FixUndercuts_ImproveDirectionParameters_OffsetPtr(const MR_FixUndercuts_ImproveDirectionParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FixUndercuts_ImproveDirectionParameters *MR_FixUndercuts_ImproveDirectionParameters_OffsetMutablePtr(MR_FixUndercuts_ImproveDirectionParameters *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::FixUndercuts::ImproveDirectionParameters` to a derived class `MR::FixUndercuts::DistMapImproveDirectionParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_FixUndercuts_DistMapImproveDirectionParameters *MR_FixUndercuts_ImproveDirectionParameters_StaticDowncastTo_MR_FixUndercuts_DistMapImproveDirectionParameters(const MR_FixUndercuts_ImproveDirectionParameters *object);

/// Downcasts an instance of `MR::FixUndercuts::ImproveDirectionParameters` to a derived class `MR::FixUndercuts::DistMapImproveDirectionParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_FixUndercuts_DistMapImproveDirectionParameters *MR_FixUndercuts_ImproveDirectionParameters_MutableStaticDowncastTo_MR_FixUndercuts_DistMapImproveDirectionParameters(MR_FixUndercuts_ImproveDirectionParameters *object);

/// Generated from a constructor of class `MR::FixUndercuts::ImproveDirectionParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_ImproveDirectionParameters_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_ImproveDirectionParameters *MR_FixUndercuts_ImproveDirectionParameters_ConstructFromAnother(const MR_FixUndercuts_ImproveDirectionParameters *_other);

/// Destroys a heap-allocated instance of `MR_FixUndercuts_ImproveDirectionParameters`. Does nothing if the pointer is null.
MRC_API void MR_FixUndercuts_ImproveDirectionParameters_Destroy(const MR_FixUndercuts_ImproveDirectionParameters *_this);

/// Destroys a heap-allocated array of `MR_FixUndercuts_ImproveDirectionParameters`. Does nothing if the pointer is null.
MRC_API void MR_FixUndercuts_ImproveDirectionParameters_DestroyArray(const MR_FixUndercuts_ImproveDirectionParameters *_this);

/// Generated from a method of class `MR::FixUndercuts::ImproveDirectionParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FixUndercuts_ImproveDirectionParameters *MR_FixUndercuts_ImproveDirectionParameters_AssignFromAnother(MR_FixUndercuts_ImproveDirectionParameters *_this, const MR_FixUndercuts_ImproveDirectionParameters *_other);

// Resolution of distance map, lower it is, faster score works
/// Returns a pointer to a member variable of class `MR::FixUndercuts::DistMapImproveDirectionParameters` named `distanceMapResolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_FixUndercuts_DistMapImproveDirectionParameters_Get_distanceMapResolution(const MR_FixUndercuts_DistMapImproveDirectionParameters *_this);

// Resolution of distance map, lower it is, faster score works
/// Modifies a member variable of class `MR::FixUndercuts::DistMapImproveDirectionParameters` named `distanceMapResolution`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixUndercuts_DistMapImproveDirectionParameters_Set_distanceMapResolution(MR_FixUndercuts_DistMapImproveDirectionParameters *_this, MR_Vector2i value);

// Resolution of distance map, lower it is, faster score works
/// Returns a mutable pointer to a member variable of class `MR::FixUndercuts::DistMapImproveDirectionParameters` named `distanceMapResolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_FixUndercuts_DistMapImproveDirectionParameters_GetMutable_distanceMapResolution(MR_FixUndercuts_DistMapImproveDirectionParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_DistMapImproveDirectionParameters_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_DistMapImproveDirectionParameters *MR_FixUndercuts_DistMapImproveDirectionParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FixUndercuts_DistMapImproveDirectionParameters_DestroyArray()`.
/// Use `MR_FixUndercuts_DistMapImproveDirectionParameters_OffsetMutablePtr()` and `MR_FixUndercuts_DistMapImproveDirectionParameters_OffsetPtr()` to access the array elements.
MRC_API MR_FixUndercuts_DistMapImproveDirectionParameters *MR_FixUndercuts_DistMapImproveDirectionParameters_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FixUndercuts_DistMapImproveDirectionParameters *MR_FixUndercuts_DistMapImproveDirectionParameters_OffsetPtr(const MR_FixUndercuts_DistMapImproveDirectionParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FixUndercuts_DistMapImproveDirectionParameters *MR_FixUndercuts_DistMapImproveDirectionParameters_OffsetMutablePtr(MR_FixUndercuts_DistMapImproveDirectionParameters *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::FixUndercuts::DistMapImproveDirectionParameters` to its base class `MR::FixUndercuts::ImproveDirectionParameters`.
/// This version is acting on mutable pointers.
MRC_API const MR_FixUndercuts_ImproveDirectionParameters *MR_FixUndercuts_DistMapImproveDirectionParameters_UpcastTo_MR_FixUndercuts_ImproveDirectionParameters(const MR_FixUndercuts_DistMapImproveDirectionParameters *object);

/// Upcasts an instance of `MR::FixUndercuts::DistMapImproveDirectionParameters` to its base class `MR::FixUndercuts::ImproveDirectionParameters`.
MRC_API MR_FixUndercuts_ImproveDirectionParameters *MR_FixUndercuts_DistMapImproveDirectionParameters_MutableUpcastTo_MR_FixUndercuts_ImproveDirectionParameters(MR_FixUndercuts_DistMapImproveDirectionParameters *object);

/// Generated from a constructor of class `MR::FixUndercuts::DistMapImproveDirectionParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixUndercuts_DistMapImproveDirectionParameters_Destroy()` to free it when you're done using it.
MRC_API MR_FixUndercuts_DistMapImproveDirectionParameters *MR_FixUndercuts_DistMapImproveDirectionParameters_ConstructFromAnother(const MR_FixUndercuts_DistMapImproveDirectionParameters *_other);

/// Destroys a heap-allocated instance of `MR_FixUndercuts_DistMapImproveDirectionParameters`. Does nothing if the pointer is null.
MRC_API void MR_FixUndercuts_DistMapImproveDirectionParameters_Destroy(const MR_FixUndercuts_DistMapImproveDirectionParameters *_this);

/// Destroys a heap-allocated array of `MR_FixUndercuts_DistMapImproveDirectionParameters`. Does nothing if the pointer is null.
MRC_API void MR_FixUndercuts_DistMapImproveDirectionParameters_DestroyArray(const MR_FixUndercuts_DistMapImproveDirectionParameters *_this);

/// Generated from a method of class `MR::FixUndercuts::DistMapImproveDirectionParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FixUndercuts_DistMapImproveDirectionParameters *MR_FixUndercuts_DistMapImproveDirectionParameters_AssignFromAnother(MR_FixUndercuts_DistMapImproveDirectionParameters *_this, const MR_FixUndercuts_DistMapImproveDirectionParameters *_other);

// Parallel finds best of several directions defined by ImproveDirectionParameters struct
/// \note does not support wallAngle yet
///                      ________
///        Top view:    /  \__/  \-----> maximum radial line   Side view:  |    /    _/
///                    /  / \/ \  \                                        |   /   _/ - maxBaseAngle
///                   |--|------|--|                                       |  /  _/     difference between two angles is baseAngleStep
///                    \  \_/\_/  /                                        | / _/
///                     \__/__\__/                                         |/_/
/// This picture shows polarAngle = 60 deg
/// Generated from function `MR::FixUndercuts::improveDirection`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
MRC_API MR_Vector3f MR_FixUndercuts_improveDirection(const MR_Mesh *mesh, const MR_FixUndercuts_ImproveDirectionParameters *params, const MR_std_function_double_from_const_MR_FaceBitSet_ref_const_MR_FixUndercuts_FindParams_ref *metric);

/// Score candidates with distance maps, lower resolution -> faster score
/// \note does not support wallAngle yet
/// Generated from function `MR::FixUndercuts::distMapImproveDirection`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
MRC_API MR_Vector3f MR_FixUndercuts_distMapImproveDirection(const MR_Mesh *mesh, const MR_FixUndercuts_DistMapImproveDirectionParameters *params);

#ifdef __cplusplus
} // extern "C"
#endif
