// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Line3d MR_Line3d; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Line3f MR_Line3f; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Vector3d MR_Vector3d; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


// A class describing a cylinder as a mathematical object.A cylinder is represented by a centerline, a radius, and a length.template <typename T>
// TODO: Cylinder3 could be infinite. For example for infinite Cylinder3 we could use negative length or length = -1
/// Generated from class `MR::Cylinder3f`.
typedef struct MR_Cylinder3f MR_Cylinder3f;

// A class describing a cylinder as a mathematical object.A cylinder is represented by a centerline, a radius, and a length.template <typename T>
// TODO: Cylinder3 could be infinite. For example for infinite Cylinder3 we could use negative length or length = -1
/// Generated from class `MR::Cylinder3d`.
typedef struct MR_Cylinder3d MR_Cylinder3d;

/// Returns a pointer to a member variable of class `MR::Cylinder3f` named `mainAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line3f *MR_Cylinder3f_Get_mainAxis(const MR_Cylinder3f *_this);

/// Modifies a member variable of class `MR::Cylinder3f` named `mainAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_Cylinder3f_Set_mainAxis(MR_Cylinder3f *_this, const MR_Line3f *value);

/// Returns a mutable pointer to a member variable of class `MR::Cylinder3f` named `mainAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3f *MR_Cylinder3f_GetMutable_mainAxis(MR_Cylinder3f *_this);

/// Returns a pointer to a member variable of class `MR::Cylinder3f` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Cylinder3f_Get_radius(const MR_Cylinder3f *_this);

/// Modifies a member variable of class `MR::Cylinder3f` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cylinder3f_Set_radius(MR_Cylinder3f *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Cylinder3f` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Cylinder3f_GetMutable_radius(MR_Cylinder3f *_this);

/// Returns a pointer to a member variable of class `MR::Cylinder3f` named `length`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Cylinder3f_Get_length(const MR_Cylinder3f *_this);

/// Modifies a member variable of class `MR::Cylinder3f` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cylinder3f_Set_length(MR_Cylinder3f *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Cylinder3f` named `length`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Cylinder3f_GetMutable_length(MR_Cylinder3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cylinder3f_Destroy()` to free it when you're done using it.
MRC_API MR_Cylinder3f *MR_Cylinder3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Cylinder3f_DestroyArray()`.
/// Use `MR_Cylinder3f_OffsetMutablePtr()` and `MR_Cylinder3f_OffsetPtr()` to access the array elements.
MRC_API MR_Cylinder3f *MR_Cylinder3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Cylinder3f *MR_Cylinder3f_OffsetPtr(const MR_Cylinder3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Cylinder3f *MR_Cylinder3f_OffsetMutablePtr(MR_Cylinder3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Cylinder3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cylinder3f_Destroy()` to free it when you're done using it.
MRC_API MR_Cylinder3f *MR_Cylinder3f_ConstructFromAnother(const MR_Cylinder3f *_other);

/// Generated from a constructor of class `MR::Cylinder3f`.
/// Parameter `inCenter` can not be null. It is a single object.
/// Parameter `inDirectoin` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cylinder3f_Destroy()` to free it when you're done using it.
MRC_API MR_Cylinder3f *MR_Cylinder3f_Construct_4(const MR_Vector3f *inCenter, const MR_Vector3f *inDirectoin, float inRadius, float inLength);

/// Generated from a constructor of class `MR::Cylinder3f`.
/// Parameter `inAxis` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cylinder3f_Destroy()` to free it when you're done using it.
MRC_API MR_Cylinder3f *MR_Cylinder3f_Construct_3(const MR_Line3f *inAxis, float inRadius, float inLength);

/// Destroys a heap-allocated instance of `MR_Cylinder3f`. Does nothing if the pointer is null.
MRC_API void MR_Cylinder3f_Destroy(const MR_Cylinder3f *_this);

/// Destroys a heap-allocated array of `MR_Cylinder3f`. Does nothing if the pointer is null.
MRC_API void MR_Cylinder3f_DestroyArray(const MR_Cylinder3f *_this);

/// Generated from a method of class `MR::Cylinder3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Cylinder3f *MR_Cylinder3f_AssignFromAnother(MR_Cylinder3f *_this, const MR_Cylinder3f *_other);

/// Generated from a method of class `MR::Cylinder3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Cylinder3f_center(MR_Cylinder3f *_this);

/// Generated from a method of class `MR::Cylinder3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Cylinder3f_center_const(const MR_Cylinder3f *_this);

/// Generated from a method of class `MR::Cylinder3f` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Cylinder3f_direction(MR_Cylinder3f *_this);

/// Generated from a method of class `MR::Cylinder3f` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Cylinder3f_direction_const(const MR_Cylinder3f *_this);

/// Returns a pointer to a member variable of class `MR::Cylinder3d` named `mainAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line3d *MR_Cylinder3d_Get_mainAxis(const MR_Cylinder3d *_this);

/// Modifies a member variable of class `MR::Cylinder3d` named `mainAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_Cylinder3d_Set_mainAxis(MR_Cylinder3d *_this, const MR_Line3d *value);

/// Returns a mutable pointer to a member variable of class `MR::Cylinder3d` named `mainAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3d *MR_Cylinder3d_GetMutable_mainAxis(MR_Cylinder3d *_this);

/// Returns a pointer to a member variable of class `MR::Cylinder3d` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Cylinder3d_Get_radius(const MR_Cylinder3d *_this);

/// Modifies a member variable of class `MR::Cylinder3d` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cylinder3d_Set_radius(MR_Cylinder3d *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::Cylinder3d` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Cylinder3d_GetMutable_radius(MR_Cylinder3d *_this);

/// Returns a pointer to a member variable of class `MR::Cylinder3d` named `length`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Cylinder3d_Get_length(const MR_Cylinder3d *_this);

/// Modifies a member variable of class `MR::Cylinder3d` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cylinder3d_Set_length(MR_Cylinder3d *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::Cylinder3d` named `length`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Cylinder3d_GetMutable_length(MR_Cylinder3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cylinder3d_Destroy()` to free it when you're done using it.
MRC_API MR_Cylinder3d *MR_Cylinder3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Cylinder3d_DestroyArray()`.
/// Use `MR_Cylinder3d_OffsetMutablePtr()` and `MR_Cylinder3d_OffsetPtr()` to access the array elements.
MRC_API MR_Cylinder3d *MR_Cylinder3d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Cylinder3d *MR_Cylinder3d_OffsetPtr(const MR_Cylinder3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Cylinder3d *MR_Cylinder3d_OffsetMutablePtr(MR_Cylinder3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Cylinder3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cylinder3d_Destroy()` to free it when you're done using it.
MRC_API MR_Cylinder3d *MR_Cylinder3d_ConstructFromAnother(const MR_Cylinder3d *_other);

/// Generated from a constructor of class `MR::Cylinder3d`.
/// Parameter `inCenter` can not be null. It is a single object.
/// Parameter `inDirectoin` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cylinder3d_Destroy()` to free it when you're done using it.
MRC_API MR_Cylinder3d *MR_Cylinder3d_Construct_4(const MR_Vector3d *inCenter, const MR_Vector3d *inDirectoin, double inRadius, double inLength);

/// Generated from a constructor of class `MR::Cylinder3d`.
/// Parameter `inAxis` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cylinder3d_Destroy()` to free it when you're done using it.
MRC_API MR_Cylinder3d *MR_Cylinder3d_Construct_3(const MR_Line3d *inAxis, double inRadius, double inLength);

/// Destroys a heap-allocated instance of `MR_Cylinder3d`. Does nothing if the pointer is null.
MRC_API void MR_Cylinder3d_Destroy(const MR_Cylinder3d *_this);

/// Destroys a heap-allocated array of `MR_Cylinder3d`. Does nothing if the pointer is null.
MRC_API void MR_Cylinder3d_DestroyArray(const MR_Cylinder3d *_this);

/// Generated from a method of class `MR::Cylinder3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Cylinder3d *MR_Cylinder3d_AssignFromAnother(MR_Cylinder3d *_this, const MR_Cylinder3d *_other);

/// Generated from a method of class `MR::Cylinder3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Cylinder3d_center(MR_Cylinder3d *_this);

/// Generated from a method of class `MR::Cylinder3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Cylinder3d_center_const(const MR_Cylinder3d *_this);

/// Generated from a method of class `MR::Cylinder3d` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Cylinder3d_direction(MR_Cylinder3d *_this);

/// Generated from a method of class `MR::Cylinder3d` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Cylinder3d_direction_const(const MR_Cylinder3d *_this);

#ifdef __cplusplus
} // extern "C"
#endif
