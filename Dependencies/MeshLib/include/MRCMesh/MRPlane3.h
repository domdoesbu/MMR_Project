// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// 3-dimensional plane: dot(n,x) - d = 0
/// Generated from class `MR::Plane3f`.
typedef struct MR_Plane3f MR_Plane3f;

/// 3-dimensional plane: dot(n,x) - d = 0
/// Generated from class `MR::Plane3d`.
typedef struct MR_Plane3d MR_Plane3d;

/// Returns a pointer to a member variable of class `MR::Plane3f` named `n`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Plane3f_Get_n(const MR_Plane3f *_this);

/// Modifies a member variable of class `MR::Plane3f` named `n`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Plane3f_Set_n(MR_Plane3f *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Plane3f` named `n`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Plane3f_GetMutable_n(MR_Plane3f *_this);

/// Returns a pointer to a member variable of class `MR::Plane3f` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Plane3f_Get_d(const MR_Plane3f *_this);

/// Modifies a member variable of class `MR::Plane3f` named `d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Plane3f_Set_d(MR_Plane3f *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Plane3f` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Plane3f_GetMutable_d(MR_Plane3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_Plane3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Plane3f_DestroyArray()`.
/// Use `MR_Plane3f_OffsetMutablePtr()` and `MR_Plane3f_OffsetPtr()` to access the array elements.
MRC_API MR_Plane3f *MR_Plane3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Plane3f *MR_Plane3f_OffsetPtr(const MR_Plane3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Plane3f *MR_Plane3f_OffsetMutablePtr(MR_Plane3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Plane3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_Plane3f_ConstructFromAnother(const MR_Plane3f *_other);

/// Generated from a constructor of class `MR::Plane3f`.
/// Parameter `n` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_Plane3f_Construct(const MR_Vector3f *n, float d);

/// Generated from a constructor of class `MR::Plane3f`.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_Plane3f_Construct_double(const MR_Plane3d *p);

/// Generated from a constructor of class `MR::Plane3f`.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_Plane3f_Construct_float(const MR_Plane3f *p);

/// Destroys a heap-allocated instance of `MR_Plane3f`. Does nothing if the pointer is null.
MRC_API void MR_Plane3f_Destroy(const MR_Plane3f *_this);

/// Destroys a heap-allocated array of `MR_Plane3f`. Does nothing if the pointer is null.
MRC_API void MR_Plane3f_DestroyArray(const MR_Plane3f *_this);

/// Generated from a method of class `MR::Plane3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Plane3f *MR_Plane3f_AssignFromAnother(MR_Plane3f *_this, const MR_Plane3f *_other);

/// Generated from a method of class `MR::Plane3f` named `fromDirAndPt`.
/// Parameter `n` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_Plane3f_fromDirAndPt(const MR_Vector3f *n, const MR_Vector3f *p);

/// returns distance from given point to this plane (if n is a unit vector)
/// Generated from a method of class `MR::Plane3f` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API float MR_Plane3f_distance(const MR_Plane3f *_this, const MR_Vector3f *x);

/// returns same plane represented with flipped direction of n-vector
/// Generated from a method of class `MR::Plane3f` named `operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_neg_MR_Plane3f(const MR_Plane3f *_this);

/// returns same representation
/// Generated from a method of class `MR::Plane3f` named `operator+`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Plane3f *MR_pos_MR_Plane3f(const MR_Plane3f *_this);

/// returns same plane represented with unit n-vector
/// Generated from a method of class `MR::Plane3f` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3f_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3f *MR_Plane3f_normalized(const MR_Plane3f *_this);

/// finds the closest point on plane
/// Generated from a method of class `MR::Plane3f` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Plane3f_project(const MR_Plane3f *_this, const MR_Vector3f *p);

/// Returns a pointer to a member variable of class `MR::Plane3d` named `n`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Plane3d_Get_n(const MR_Plane3d *_this);

/// Modifies a member variable of class `MR::Plane3d` named `n`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Plane3d_Set_n(MR_Plane3d *_this, MR_Vector3d value);

/// Returns a mutable pointer to a member variable of class `MR::Plane3d` named `n`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Plane3d_GetMutable_n(MR_Plane3d *_this);

/// Returns a pointer to a member variable of class `MR::Plane3d` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Plane3d_Get_d(const MR_Plane3d *_this);

/// Modifies a member variable of class `MR::Plane3d` named `d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Plane3d_Set_d(MR_Plane3d *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::Plane3d` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Plane3d_GetMutable_d(MR_Plane3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_Plane3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Plane3d_DestroyArray()`.
/// Use `MR_Plane3d_OffsetMutablePtr()` and `MR_Plane3d_OffsetPtr()` to access the array elements.
MRC_API MR_Plane3d *MR_Plane3d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Plane3d *MR_Plane3d_OffsetPtr(const MR_Plane3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Plane3d *MR_Plane3d_OffsetMutablePtr(MR_Plane3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Plane3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_Plane3d_ConstructFromAnother(const MR_Plane3d *_other);

/// Generated from a constructor of class `MR::Plane3d`.
/// Parameter `n` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_Plane3d_Construct(const MR_Vector3d *n, double d);

/// Generated from a constructor of class `MR::Plane3d`.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_Plane3d_Construct_float(const MR_Plane3f *p);

/// Destroys a heap-allocated instance of `MR_Plane3d`. Does nothing if the pointer is null.
MRC_API void MR_Plane3d_Destroy(const MR_Plane3d *_this);

/// Destroys a heap-allocated array of `MR_Plane3d`. Does nothing if the pointer is null.
MRC_API void MR_Plane3d_DestroyArray(const MR_Plane3d *_this);

/// Generated from a method of class `MR::Plane3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Plane3d *MR_Plane3d_AssignFromAnother(MR_Plane3d *_this, const MR_Plane3d *_other);

/// Generated from a method of class `MR::Plane3d` named `fromDirAndPt`.
/// Parameter `n` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_Plane3d_fromDirAndPt(const MR_Vector3d *n, const MR_Vector3d *p);

/// returns distance from given point to this plane (if n is a unit vector)
/// Generated from a method of class `MR::Plane3d` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API double MR_Plane3d_distance(const MR_Plane3d *_this, const MR_Vector3d *x);

/// returns same plane represented with flipped direction of n-vector
/// Generated from a method of class `MR::Plane3d` named `operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_neg_MR_Plane3d(const MR_Plane3d *_this);

/// returns same representation
/// Generated from a method of class `MR::Plane3d` named `operator+`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Plane3d *MR_pos_MR_Plane3d(const MR_Plane3d *_this);

/// returns same plane represented with unit n-vector
/// Generated from a method of class `MR::Plane3d` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Plane3d_Destroy()` to free it when you're done using it.
MRC_API MR_Plane3d *MR_Plane3d_normalized(const MR_Plane3d *_this);

/// finds the closest point on plane
/// Generated from a method of class `MR::Plane3d` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Plane3d_project(const MR_Plane3d *_this, const MR_Vector3d *p);

#ifdef __cplusplus
} // extern "C"
#endif
