// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// rigid (with scale) transformation that multiplies all distances on same scale: y = s*A*x + b,
/// where s is a scalar, A is rotation matrix 3x3 stored as 3 angles, and b is shift vector
/// Generated from class `MR::RigidScaleXf3f`.
typedef struct MR_RigidScaleXf3f MR_RigidScaleXf3f;

/// rigid (with scale) transformation that multiplies all distances on same scale: y = s*A*x + b,
/// where s is a scalar, A is rotation matrix 3x3 stored as 3 angles, and b is shift vector
/// Generated from class `MR::RigidScaleXf3d`.
typedef struct MR_RigidScaleXf3d MR_RigidScaleXf3d;

///< rotation angles relative to x,y,z axes
/// Returns a pointer to a member variable of class `MR::RigidScaleXf3f` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_RigidScaleXf3f_Get_a(const MR_RigidScaleXf3f *_this);

///< rotation angles relative to x,y,z axes
/// Modifies a member variable of class `MR::RigidScaleXf3f` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RigidScaleXf3f_Set_a(MR_RigidScaleXf3f *_this, MR_Vector3f value);

///< rotation angles relative to x,y,z axes
/// Returns a mutable pointer to a member variable of class `MR::RigidScaleXf3f` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_RigidScaleXf3f_GetMutable_a(MR_RigidScaleXf3f *_this);

///< shift
/// Returns a pointer to a member variable of class `MR::RigidScaleXf3f` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_RigidScaleXf3f_Get_b(const MR_RigidScaleXf3f *_this);

///< shift
/// Modifies a member variable of class `MR::RigidScaleXf3f` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RigidScaleXf3f_Set_b(MR_RigidScaleXf3f *_this, MR_Vector3f value);

///< shift
/// Returns a mutable pointer to a member variable of class `MR::RigidScaleXf3f` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_RigidScaleXf3f_GetMutable_b(MR_RigidScaleXf3f *_this);

///< scaling
/// Returns a pointer to a member variable of class `MR::RigidScaleXf3f` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RigidScaleXf3f_Get_s(const MR_RigidScaleXf3f *_this);

///< scaling
/// Modifies a member variable of class `MR::RigidScaleXf3f` named `s`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RigidScaleXf3f_Set_s(MR_RigidScaleXf3f *_this, float value);

///< scaling
/// Returns a mutable pointer to a member variable of class `MR::RigidScaleXf3f` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RigidScaleXf3f_GetMutable_s(MR_RigidScaleXf3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3f *MR_RigidScaleXf3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RigidScaleXf3f_DestroyArray()`.
/// Use `MR_RigidScaleXf3f_OffsetMutablePtr()` and `MR_RigidScaleXf3f_OffsetPtr()` to access the array elements.
MRC_API MR_RigidScaleXf3f *MR_RigidScaleXf3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RigidScaleXf3f *MR_RigidScaleXf3f_OffsetPtr(const MR_RigidScaleXf3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RigidScaleXf3f *MR_RigidScaleXf3f_OffsetMutablePtr(MR_RigidScaleXf3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::RigidScaleXf3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3f *MR_RigidScaleXf3f_ConstructFromAnother(const MR_RigidScaleXf3f *_other);

/// Generated from a constructor of class `MR::RigidScaleXf3f`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3f_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3f *MR_RigidScaleXf3f_Construct(const MR_Vector3f *a, const MR_Vector3f *b, float s);

/// Destroys a heap-allocated instance of `MR_RigidScaleXf3f`. Does nothing if the pointer is null.
MRC_API void MR_RigidScaleXf3f_Destroy(const MR_RigidScaleXf3f *_this);

/// Destroys a heap-allocated array of `MR_RigidScaleXf3f`. Does nothing if the pointer is null.
MRC_API void MR_RigidScaleXf3f_DestroyArray(const MR_RigidScaleXf3f *_this);

/// Generated from a method of class `MR::RigidScaleXf3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RigidScaleXf3f *MR_RigidScaleXf3f_AssignFromAnother(MR_RigidScaleXf3f *_this, const MR_RigidScaleXf3f *_other);

/// converts this into rigid (with scale) transformation, which non-linearly depends on angles
/// Generated from a method of class `MR::RigidScaleXf3f` named `rigidScaleXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_RigidScaleXf3f_rigidScaleXf(const MR_RigidScaleXf3f *_this);

/// converts this into not-rigid transformation but with matrix, which linearly depends on angles
/// Generated from a method of class `MR::RigidScaleXf3f` named `linearXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_RigidScaleXf3f_linearXf(const MR_RigidScaleXf3f *_this);

///< rotation angles relative to x,y,z axes
/// Returns a pointer to a member variable of class `MR::RigidScaleXf3d` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_RigidScaleXf3d_Get_a(const MR_RigidScaleXf3d *_this);

///< rotation angles relative to x,y,z axes
/// Modifies a member variable of class `MR::RigidScaleXf3d` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RigidScaleXf3d_Set_a(MR_RigidScaleXf3d *_this, MR_Vector3d value);

///< rotation angles relative to x,y,z axes
/// Returns a mutable pointer to a member variable of class `MR::RigidScaleXf3d` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_RigidScaleXf3d_GetMutable_a(MR_RigidScaleXf3d *_this);

///< shift
/// Returns a pointer to a member variable of class `MR::RigidScaleXf3d` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_RigidScaleXf3d_Get_b(const MR_RigidScaleXf3d *_this);

///< shift
/// Modifies a member variable of class `MR::RigidScaleXf3d` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RigidScaleXf3d_Set_b(MR_RigidScaleXf3d *_this, MR_Vector3d value);

///< shift
/// Returns a mutable pointer to a member variable of class `MR::RigidScaleXf3d` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_RigidScaleXf3d_GetMutable_b(MR_RigidScaleXf3d *_this);

///< scaling
/// Returns a pointer to a member variable of class `MR::RigidScaleXf3d` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_RigidScaleXf3d_Get_s(const MR_RigidScaleXf3d *_this);

///< scaling
/// Modifies a member variable of class `MR::RigidScaleXf3d` named `s`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RigidScaleXf3d_Set_s(MR_RigidScaleXf3d *_this, double value);

///< scaling
/// Returns a mutable pointer to a member variable of class `MR::RigidScaleXf3d` named `s`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_RigidScaleXf3d_GetMutable_s(MR_RigidScaleXf3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3d_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3d *MR_RigidScaleXf3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RigidScaleXf3d_DestroyArray()`.
/// Use `MR_RigidScaleXf3d_OffsetMutablePtr()` and `MR_RigidScaleXf3d_OffsetPtr()` to access the array elements.
MRC_API MR_RigidScaleXf3d *MR_RigidScaleXf3d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RigidScaleXf3d *MR_RigidScaleXf3d_OffsetPtr(const MR_RigidScaleXf3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RigidScaleXf3d *MR_RigidScaleXf3d_OffsetMutablePtr(MR_RigidScaleXf3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::RigidScaleXf3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3d_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3d *MR_RigidScaleXf3d_ConstructFromAnother(const MR_RigidScaleXf3d *_other);

/// Generated from a constructor of class `MR::RigidScaleXf3d`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RigidScaleXf3d_Destroy()` to free it when you're done using it.
MRC_API MR_RigidScaleXf3d *MR_RigidScaleXf3d_Construct(const MR_Vector3d *a, const MR_Vector3d *b, double s);

/// Destroys a heap-allocated instance of `MR_RigidScaleXf3d`. Does nothing if the pointer is null.
MRC_API void MR_RigidScaleXf3d_Destroy(const MR_RigidScaleXf3d *_this);

/// Destroys a heap-allocated array of `MR_RigidScaleXf3d`. Does nothing if the pointer is null.
MRC_API void MR_RigidScaleXf3d_DestroyArray(const MR_RigidScaleXf3d *_this);

/// Generated from a method of class `MR::RigidScaleXf3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RigidScaleXf3d *MR_RigidScaleXf3d_AssignFromAnother(MR_RigidScaleXf3d *_this, const MR_RigidScaleXf3d *_other);

/// converts this into rigid (with scale) transformation, which non-linearly depends on angles
/// Generated from a method of class `MR::RigidScaleXf3d` named `rigidScaleXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_RigidScaleXf3d_rigidScaleXf(const MR_RigidScaleXf3d *_this);

/// converts this into not-rigid transformation but with matrix, which linearly depends on angles
/// Generated from a method of class `MR::RigidScaleXf3d` named `linearXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_RigidScaleXf3d_linearXf(const MR_RigidScaleXf3d *_this);

#ifdef __cplusplus
} // extern "C"
#endif
