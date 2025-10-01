// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// 2- or 3-dimensional line: cross( x - p, d ) = 0
/// Generated from class `MR::Line2f`.
typedef struct MR_Line2f MR_Line2f;

/// 2- or 3-dimensional line: cross( x - p, d ) = 0
/// Generated from class `MR::Line2d`.
typedef struct MR_Line2d MR_Line2d;

/// 2- or 3-dimensional line: cross( x - p, d ) = 0
/// Generated from class `MR::Line3f`.
typedef struct MR_Line3f MR_Line3f;

/// 2- or 3-dimensional line: cross( x - p, d ) = 0
/// Generated from class `MR::Line3d`.
typedef struct MR_Line3d MR_Line3d;

/// Returns a pointer to a member variable of class `MR::Line2f` named `p`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_Line2f_Get_p(const MR_Line2f *_this);

/// Modifies a member variable of class `MR::Line2f` named `p`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line2f_Set_p(MR_Line2f *_this, MR_Vector2f value);

/// Returns a mutable pointer to a member variable of class `MR::Line2f` named `p`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_Line2f_GetMutable_p(MR_Line2f *_this);

/// Returns a pointer to a member variable of class `MR::Line2f` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_Line2f_Get_d(const MR_Line2f *_this);

/// Modifies a member variable of class `MR::Line2f` named `d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line2f_Set_d(MR_Line2f *_this, MR_Vector2f value);

/// Returns a mutable pointer to a member variable of class `MR::Line2f` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_Line2f_GetMutable_d(MR_Line2f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2f_Destroy()` to free it when you're done using it.
MRC_API MR_Line2f *MR_Line2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Line2f_DestroyArray()`.
/// Use `MR_Line2f_OffsetMutablePtr()` and `MR_Line2f_OffsetPtr()` to access the array elements.
MRC_API MR_Line2f *MR_Line2f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Line2f *MR_Line2f_OffsetPtr(const MR_Line2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Line2f *MR_Line2f_OffsetMutablePtr(MR_Line2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Line2f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2f_Destroy()` to free it when you're done using it.
MRC_API MR_Line2f *MR_Line2f_ConstructFromAnother(const MR_Line2f *_other);

/// Generated from a constructor of class `MR::Line2f`.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2f_Destroy()` to free it when you're done using it.
MRC_API MR_Line2f *MR_Line2f_Construct(const MR_Vector2f *p, const MR_Vector2f *d);

/// Destroys a heap-allocated instance of `MR_Line2f`. Does nothing if the pointer is null.
MRC_API void MR_Line2f_Destroy(const MR_Line2f *_this);

/// Destroys a heap-allocated array of `MR_Line2f`. Does nothing if the pointer is null.
MRC_API void MR_Line2f_DestroyArray(const MR_Line2f *_this);

/// Generated from a method of class `MR::Line2f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line2f *MR_Line2f_AssignFromAnother(MR_Line2f *_this, const MR_Line2f *_other);

/// returns point on the line, where param=0 returns p and param=1 returns p+d
/// Generated from a method of class `MR::Line2f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Line2f_call(const MR_Line2f *_this, float param);

/// returns squared distance from given point to this line
/// Generated from a method of class `MR::Line2f` named `distanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API float MR_Line2f_distanceSq(const MR_Line2f *_this, const MR_Vector2f *x);

/// returns same line represented with flipped direction of d-vector
/// Generated from a method of class `MR::Line2f` named `operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2f_Destroy()` to free it when you're done using it.
MRC_API MR_Line2f *MR_neg_MR_Line2f(const MR_Line2f *_this);

/// returns same representation
/// Generated from a method of class `MR::Line2f` named `operator+`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line2f *MR_pos_MR_Line2f(const MR_Line2f *_this);

/// returns same line represented with unit d-vector
/// Generated from a method of class `MR::Line2f` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2f_Destroy()` to free it when you're done using it.
MRC_API MR_Line2f *MR_Line2f_normalized(const MR_Line2f *_this);

/// finds the closest point on line
/// Generated from a method of class `MR::Line2f` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Line2f_project(const MR_Line2f *_this, const MR_Vector2f *x);

/// Returns a pointer to a member variable of class `MR::Line2d` named `p`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_Line2d_Get_p(const MR_Line2d *_this);

/// Modifies a member variable of class `MR::Line2d` named `p`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line2d_Set_p(MR_Line2d *_this, MR_Vector2d value);

/// Returns a mutable pointer to a member variable of class `MR::Line2d` named `p`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_Line2d_GetMutable_p(MR_Line2d *_this);

/// Returns a pointer to a member variable of class `MR::Line2d` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_Line2d_Get_d(const MR_Line2d *_this);

/// Modifies a member variable of class `MR::Line2d` named `d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line2d_Set_d(MR_Line2d *_this, MR_Vector2d value);

/// Returns a mutable pointer to a member variable of class `MR::Line2d` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_Line2d_GetMutable_d(MR_Line2d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2d_Destroy()` to free it when you're done using it.
MRC_API MR_Line2d *MR_Line2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Line2d_DestroyArray()`.
/// Use `MR_Line2d_OffsetMutablePtr()` and `MR_Line2d_OffsetPtr()` to access the array elements.
MRC_API MR_Line2d *MR_Line2d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Line2d *MR_Line2d_OffsetPtr(const MR_Line2d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Line2d *MR_Line2d_OffsetMutablePtr(MR_Line2d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Line2d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2d_Destroy()` to free it when you're done using it.
MRC_API MR_Line2d *MR_Line2d_ConstructFromAnother(const MR_Line2d *_other);

/// Generated from a constructor of class `MR::Line2d`.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2d_Destroy()` to free it when you're done using it.
MRC_API MR_Line2d *MR_Line2d_Construct(const MR_Vector2d *p, const MR_Vector2d *d);

/// Destroys a heap-allocated instance of `MR_Line2d`. Does nothing if the pointer is null.
MRC_API void MR_Line2d_Destroy(const MR_Line2d *_this);

/// Destroys a heap-allocated array of `MR_Line2d`. Does nothing if the pointer is null.
MRC_API void MR_Line2d_DestroyArray(const MR_Line2d *_this);

/// Generated from a method of class `MR::Line2d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line2d *MR_Line2d_AssignFromAnother(MR_Line2d *_this, const MR_Line2d *_other);

/// returns point on the line, where param=0 returns p and param=1 returns p+d
/// Generated from a method of class `MR::Line2d` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Line2d_call(const MR_Line2d *_this, double param);

/// returns squared distance from given point to this line
/// Generated from a method of class `MR::Line2d` named `distanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API double MR_Line2d_distanceSq(const MR_Line2d *_this, const MR_Vector2d *x);

/// returns same line represented with flipped direction of d-vector
/// Generated from a method of class `MR::Line2d` named `operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2d_Destroy()` to free it when you're done using it.
MRC_API MR_Line2d *MR_neg_MR_Line2d(const MR_Line2d *_this);

/// returns same representation
/// Generated from a method of class `MR::Line2d` named `operator+`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line2d *MR_pos_MR_Line2d(const MR_Line2d *_this);

/// returns same line represented with unit d-vector
/// Generated from a method of class `MR::Line2d` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line2d_Destroy()` to free it when you're done using it.
MRC_API MR_Line2d *MR_Line2d_normalized(const MR_Line2d *_this);

/// finds the closest point on line
/// Generated from a method of class `MR::Line2d` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Line2d_project(const MR_Line2d *_this, const MR_Vector2d *x);

/// Returns a pointer to a member variable of class `MR::Line3f` named `p`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Line3f_Get_p(const MR_Line3f *_this);

/// Modifies a member variable of class `MR::Line3f` named `p`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3f_Set_p(MR_Line3f *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Line3f` named `p`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Line3f_GetMutable_p(MR_Line3f *_this);

/// Returns a pointer to a member variable of class `MR::Line3f` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Line3f_Get_d(const MR_Line3f *_this);

/// Modifies a member variable of class `MR::Line3f` named `d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3f_Set_d(MR_Line3f *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Line3f` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Line3f_GetMutable_d(MR_Line3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3f_Destroy()` to free it when you're done using it.
MRC_API MR_Line3f *MR_Line3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Line3f_DestroyArray()`.
/// Use `MR_Line3f_OffsetMutablePtr()` and `MR_Line3f_OffsetPtr()` to access the array elements.
MRC_API MR_Line3f *MR_Line3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Line3f *MR_Line3f_OffsetPtr(const MR_Line3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Line3f *MR_Line3f_OffsetMutablePtr(MR_Line3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Line3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3f_Destroy()` to free it when you're done using it.
MRC_API MR_Line3f *MR_Line3f_ConstructFromAnother(const MR_Line3f *_other);

/// Generated from a constructor of class `MR::Line3f`.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3f_Destroy()` to free it when you're done using it.
MRC_API MR_Line3f *MR_Line3f_Construct(const MR_Vector3f *p, const MR_Vector3f *d);

/// Generated from a constructor of class `MR::Line3f`.
/// Parameter `l` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3f_Destroy()` to free it when you're done using it.
MRC_API MR_Line3f *MR_Line3f_Construct_MR_Vector3d(const MR_Line3d *l);

/// Destroys a heap-allocated instance of `MR_Line3f`. Does nothing if the pointer is null.
MRC_API void MR_Line3f_Destroy(const MR_Line3f *_this);

/// Destroys a heap-allocated array of `MR_Line3f`. Does nothing if the pointer is null.
MRC_API void MR_Line3f_DestroyArray(const MR_Line3f *_this);

/// Generated from a method of class `MR::Line3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3f *MR_Line3f_AssignFromAnother(MR_Line3f *_this, const MR_Line3f *_other);

/// returns point on the line, where param=0 returns p and param=1 returns p+d
/// Generated from a method of class `MR::Line3f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Line3f_call(const MR_Line3f *_this, float param);

/// returns squared distance from given point to this line
/// Generated from a method of class `MR::Line3f` named `distanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API float MR_Line3f_distanceSq(const MR_Line3f *_this, const MR_Vector3f *x);

/// returns same line represented with flipped direction of d-vector
/// Generated from a method of class `MR::Line3f` named `operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3f_Destroy()` to free it when you're done using it.
MRC_API MR_Line3f *MR_neg_MR_Line3f(const MR_Line3f *_this);

/// returns same representation
/// Generated from a method of class `MR::Line3f` named `operator+`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line3f *MR_pos_MR_Line3f(const MR_Line3f *_this);

/// returns same line represented with unit d-vector
/// Generated from a method of class `MR::Line3f` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3f_Destroy()` to free it when you're done using it.
MRC_API MR_Line3f *MR_Line3f_normalized(const MR_Line3f *_this);

/// finds the closest point on line
/// Generated from a method of class `MR::Line3f` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Line3f_project(const MR_Line3f *_this, const MR_Vector3f *x);

/// Returns a pointer to a member variable of class `MR::Line3d` named `p`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Line3d_Get_p(const MR_Line3d *_this);

/// Modifies a member variable of class `MR::Line3d` named `p`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3d_Set_p(MR_Line3d *_this, MR_Vector3d value);

/// Returns a mutable pointer to a member variable of class `MR::Line3d` named `p`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Line3d_GetMutable_p(MR_Line3d *_this);

/// Returns a pointer to a member variable of class `MR::Line3d` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Line3d_Get_d(const MR_Line3d *_this);

/// Modifies a member variable of class `MR::Line3d` named `d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3d_Set_d(MR_Line3d *_this, MR_Vector3d value);

/// Returns a mutable pointer to a member variable of class `MR::Line3d` named `d`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Line3d_GetMutable_d(MR_Line3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3d_Destroy()` to free it when you're done using it.
MRC_API MR_Line3d *MR_Line3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Line3d_DestroyArray()`.
/// Use `MR_Line3d_OffsetMutablePtr()` and `MR_Line3d_OffsetPtr()` to access the array elements.
MRC_API MR_Line3d *MR_Line3d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Line3d *MR_Line3d_OffsetPtr(const MR_Line3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Line3d *MR_Line3d_OffsetMutablePtr(MR_Line3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Line3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3d_Destroy()` to free it when you're done using it.
MRC_API MR_Line3d *MR_Line3d_ConstructFromAnother(const MR_Line3d *_other);

/// Generated from a constructor of class `MR::Line3d`.
/// Parameter `p` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3d_Destroy()` to free it when you're done using it.
MRC_API MR_Line3d *MR_Line3d_Construct(const MR_Vector3d *p, const MR_Vector3d *d);

/// Destroys a heap-allocated instance of `MR_Line3d`. Does nothing if the pointer is null.
MRC_API void MR_Line3d_Destroy(const MR_Line3d *_this);

/// Destroys a heap-allocated array of `MR_Line3d`. Does nothing if the pointer is null.
MRC_API void MR_Line3d_DestroyArray(const MR_Line3d *_this);

/// Generated from a method of class `MR::Line3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3d *MR_Line3d_AssignFromAnother(MR_Line3d *_this, const MR_Line3d *_other);

/// returns point on the line, where param=0 returns p and param=1 returns p+d
/// Generated from a method of class `MR::Line3d` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Line3d_call(const MR_Line3d *_this, double param);

/// returns squared distance from given point to this line
/// Generated from a method of class `MR::Line3d` named `distanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API double MR_Line3d_distanceSq(const MR_Line3d *_this, const MR_Vector3d *x);

/// returns same line represented with flipped direction of d-vector
/// Generated from a method of class `MR::Line3d` named `operator-`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3d_Destroy()` to free it when you're done using it.
MRC_API MR_Line3d *MR_neg_MR_Line3d(const MR_Line3d *_this);

/// returns same representation
/// Generated from a method of class `MR::Line3d` named `operator+`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line3d *MR_pos_MR_Line3d(const MR_Line3d *_this);

/// returns same line represented with unit d-vector
/// Generated from a method of class `MR::Line3d` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3d_Destroy()` to free it when you're done using it.
MRC_API MR_Line3d *MR_Line3d_normalized(const MR_Line3d *_this);

/// finds the closest point on line
/// Generated from a method of class `MR::Line3d` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Line3d_project(const MR_Line3d *_this, const MR_Vector3d *x);

#ifdef __cplusplus
} // extern "C"
#endif
