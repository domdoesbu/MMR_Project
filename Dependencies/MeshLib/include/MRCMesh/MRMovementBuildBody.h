// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_std_optional_MR_Vector3f MR_std_optional_MR_Vector3f; // Defined in `#include <MRCMisc/std_optional_MR_Vector3f.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.


/// Generated from class `MR::MovementBuildBodyParams`.
typedef struct MR_MovementBuildBodyParams MR_MovementBuildBodyParams;

/// if this flag is set, rotate body in trajectory vertices
/// according to its rotation
/// otherwise body movement will be done without any rotation
/// Returns a pointer to a member variable of class `MR::MovementBuildBodyParams` named `allowRotation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MovementBuildBodyParams_Get_allowRotation(const MR_MovementBuildBodyParams *_this);

/// if this flag is set, rotate body in trajectory vertices
/// according to its rotation
/// otherwise body movement will be done without any rotation
/// Modifies a member variable of class `MR::MovementBuildBodyParams` named `allowRotation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MovementBuildBodyParams_Set_allowRotation(MR_MovementBuildBodyParams *_this, bool value);

/// if this flag is set, rotate body in trajectory vertices
/// according to its rotation
/// otherwise body movement will be done without any rotation
/// Returns a mutable pointer to a member variable of class `MR::MovementBuildBodyParams` named `allowRotation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MovementBuildBodyParams_GetMutable_allowRotation(MR_MovementBuildBodyParams *_this);

/// point in body space that follows trajectory
/// if not set body bounding box center is used
/// Returns a pointer to a member variable of class `MR::MovementBuildBodyParams` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_optional_MR_Vector3f *MR_MovementBuildBodyParams_Get_center(const MR_MovementBuildBodyParams *_this);

/// point in body space that follows trajectory
/// if not set body bounding box center is used
/// Modifies a member variable of class `MR::MovementBuildBodyParams` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is optional. To keep it empty, pass a null pointer.
MRC_API void MR_MovementBuildBodyParams_Set_center(MR_MovementBuildBodyParams *_this, const MR_Vector3f *value);

/// point in body space that follows trajectory
/// if not set body bounding box center is used
/// Returns a mutable pointer to a member variable of class `MR::MovementBuildBodyParams` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Vector3f *MR_MovementBuildBodyParams_GetMutable_center(MR_MovementBuildBodyParams *_this);

/// facing direction of body, used for initial rotation (if allowRotation)
/// if not set body accumulative normal is used
/// Returns a pointer to a member variable of class `MR::MovementBuildBodyParams` named `bodyNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_optional_MR_Vector3f *MR_MovementBuildBodyParams_Get_bodyNormal(const MR_MovementBuildBodyParams *_this);

/// facing direction of body, used for initial rotation (if allowRotation)
/// if not set body accumulative normal is used
/// Modifies a member variable of class `MR::MovementBuildBodyParams` named `bodyNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is optional. To keep it empty, pass a null pointer.
MRC_API void MR_MovementBuildBodyParams_Set_bodyNormal(MR_MovementBuildBodyParams *_this, const MR_Vector3f *value);

/// facing direction of body, used for initial rotation (if allowRotation)
/// if not set body accumulative normal is used
/// Returns a mutable pointer to a member variable of class `MR::MovementBuildBodyParams` named `bodyNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Vector3f *MR_MovementBuildBodyParams_GetMutable_bodyNormal(MR_MovementBuildBodyParams *_this);

/// optional transform body space to trajectory space
/// Returns a pointer to a member variable of class `MR::MovementBuildBodyParams` named `b2tXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_MovementBuildBodyParams_Get_b2tXf(const MR_MovementBuildBodyParams *_this);

/// optional transform body space to trajectory space
/// Modifies a member variable of class `MR::MovementBuildBodyParams` named `b2tXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MovementBuildBodyParams_Set_b2tXf(MR_MovementBuildBodyParams *_this, const MR_AffineXf3f *value);

/// optional transform body space to trajectory space
/// Returns a mutable pointer to a member variable of class `MR::MovementBuildBodyParams` named `b2tXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_MovementBuildBodyParams_GetMutable_b2tXf(MR_MovementBuildBodyParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MovementBuildBodyParams_Destroy()` to free it when you're done using it.
MRC_API MR_MovementBuildBodyParams *MR_MovementBuildBodyParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MovementBuildBodyParams_DestroyArray()`.
/// Use `MR_MovementBuildBodyParams_OffsetMutablePtr()` and `MR_MovementBuildBodyParams_OffsetPtr()` to access the array elements.
MRC_API MR_MovementBuildBodyParams *MR_MovementBuildBodyParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MovementBuildBodyParams` elementwise.
/// Parameter `center` is optional. To keep it empty, pass a null pointer.
/// Parameter `bodyNormal` is optional. To keep it empty, pass a null pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MovementBuildBodyParams_Destroy()` to free it when you're done using it.
MRC_API MR_MovementBuildBodyParams *MR_MovementBuildBodyParams_ConstructFrom(bool allowRotation, const MR_Vector3f *center, const MR_Vector3f *bodyNormal, const MR_AffineXf3f *b2tXf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MovementBuildBodyParams *MR_MovementBuildBodyParams_OffsetPtr(const MR_MovementBuildBodyParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MovementBuildBodyParams *MR_MovementBuildBodyParams_OffsetMutablePtr(MR_MovementBuildBodyParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MovementBuildBodyParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MovementBuildBodyParams_Destroy()` to free it when you're done using it.
MRC_API MR_MovementBuildBodyParams *MR_MovementBuildBodyParams_ConstructFromAnother(const MR_MovementBuildBodyParams *_other);

/// Destroys a heap-allocated instance of `MR_MovementBuildBodyParams`. Does nothing if the pointer is null.
MRC_API void MR_MovementBuildBodyParams_Destroy(const MR_MovementBuildBodyParams *_this);

/// Destroys a heap-allocated array of `MR_MovementBuildBodyParams`. Does nothing if the pointer is null.
MRC_API void MR_MovementBuildBodyParams_DestroyArray(const MR_MovementBuildBodyParams *_this);

/// Generated from a method of class `MR::MovementBuildBodyParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MovementBuildBodyParams *MR_MovementBuildBodyParams_AssignFromAnother(MR_MovementBuildBodyParams *_this, const MR_MovementBuildBodyParams *_other);

/// makes mesh by moving `body` along `trajectory`
/// if allowRotation rotate it in corners
/// Generated from function `MR::makeMovementBuildBody`.
/// Parameter `body` can not be null. It is a single object.
/// Parameter `trajectory` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeMovementBuildBody(const MR_std_vector_std_vector_MR_Vector3f *body, const MR_std_vector_std_vector_MR_Vector3f *trajectory, const MR_MovementBuildBodyParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
