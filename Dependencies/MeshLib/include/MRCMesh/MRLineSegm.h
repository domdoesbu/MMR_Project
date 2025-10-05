// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


// a segment of straight dimensional line
/// Generated from class `MR::LineSegm2f`.
typedef struct MR_LineSegm2f MR_LineSegm2f;

// a segment of straight dimensional line
/// Generated from class `MR::LineSegm2d`.
typedef struct MR_LineSegm2d MR_LineSegm2d;

// a segment of straight dimensional line
/// Generated from class `MR::LineSegm3f`.
typedef struct MR_LineSegm3f MR_LineSegm3f;

// a segment of straight dimensional line
/// Generated from class `MR::LineSegm3d`.
typedef struct MR_LineSegm3d MR_LineSegm3d;

/// Returns a pointer to a member variable of class `MR::LineSegm2f` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_LineSegm2f_Get_a(const MR_LineSegm2f *_this);

/// Modifies a member variable of class `MR::LineSegm2f` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineSegm2f_Set_a(MR_LineSegm2f *_this, MR_Vector2f value);

/// Returns a mutable pointer to a member variable of class `MR::LineSegm2f` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_LineSegm2f_GetMutable_a(MR_LineSegm2f *_this);

/// Returns a pointer to a member variable of class `MR::LineSegm2f` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_LineSegm2f_Get_b(const MR_LineSegm2f *_this);

/// Modifies a member variable of class `MR::LineSegm2f` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineSegm2f_Set_b(MR_LineSegm2f *_this, MR_Vector2f value);

/// Returns a mutable pointer to a member variable of class `MR::LineSegm2f` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_LineSegm2f_GetMutable_b(MR_LineSegm2f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm2f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm2f *MR_LineSegm2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LineSegm2f_DestroyArray()`.
/// Use `MR_LineSegm2f_OffsetMutablePtr()` and `MR_LineSegm2f_OffsetPtr()` to access the array elements.
MRC_API MR_LineSegm2f *MR_LineSegm2f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LineSegm2f *MR_LineSegm2f_OffsetPtr(const MR_LineSegm2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LineSegm2f *MR_LineSegm2f_OffsetMutablePtr(MR_LineSegm2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LineSegm2f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm2f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm2f *MR_LineSegm2f_ConstructFromAnother(const MR_LineSegm2f *_other);

/// Generated from a constructor of class `MR::LineSegm2f`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm2f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm2f *MR_LineSegm2f_Construct(const MR_Vector2f *a, const MR_Vector2f *b);

/// Destroys a heap-allocated instance of `MR_LineSegm2f`. Does nothing if the pointer is null.
MRC_API void MR_LineSegm2f_Destroy(const MR_LineSegm2f *_this);

/// Destroys a heap-allocated array of `MR_LineSegm2f`. Does nothing if the pointer is null.
MRC_API void MR_LineSegm2f_DestroyArray(const MR_LineSegm2f *_this);

/// Generated from a method of class `MR::LineSegm2f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LineSegm2f *MR_LineSegm2f_AssignFromAnother(MR_LineSegm2f *_this, const MR_LineSegm2f *_other);

/// returns directional vector of the line
/// Generated from a method of class `MR::LineSegm2f` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_LineSegm2f_dir(const MR_LineSegm2f *_this);

/// returns squared length of this line segment
/// Generated from a method of class `MR::LineSegm2f` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_LineSegm2f_lengthSq(const MR_LineSegm2f *_this);

/// returns the length of this line segment
/// Generated from a method of class `MR::LineSegm2f` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_LineSegm2f_length(const MR_LineSegm2f *_this);

/// returns point on the line, where param=0 returns a and param=1 returns b
/// Generated from a method of class `MR::LineSegm2f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_LineSegm2f_call(const MR_LineSegm2f *_this, float param);

/// Returns a pointer to a member variable of class `MR::LineSegm2d` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_LineSegm2d_Get_a(const MR_LineSegm2d *_this);

/// Modifies a member variable of class `MR::LineSegm2d` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineSegm2d_Set_a(MR_LineSegm2d *_this, MR_Vector2d value);

/// Returns a mutable pointer to a member variable of class `MR::LineSegm2d` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_LineSegm2d_GetMutable_a(MR_LineSegm2d *_this);

/// Returns a pointer to a member variable of class `MR::LineSegm2d` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_LineSegm2d_Get_b(const MR_LineSegm2d *_this);

/// Modifies a member variable of class `MR::LineSegm2d` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineSegm2d_Set_b(MR_LineSegm2d *_this, MR_Vector2d value);

/// Returns a mutable pointer to a member variable of class `MR::LineSegm2d` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_LineSegm2d_GetMutable_b(MR_LineSegm2d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm2d_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm2d *MR_LineSegm2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LineSegm2d_DestroyArray()`.
/// Use `MR_LineSegm2d_OffsetMutablePtr()` and `MR_LineSegm2d_OffsetPtr()` to access the array elements.
MRC_API MR_LineSegm2d *MR_LineSegm2d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LineSegm2d *MR_LineSegm2d_OffsetPtr(const MR_LineSegm2d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LineSegm2d *MR_LineSegm2d_OffsetMutablePtr(MR_LineSegm2d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LineSegm2d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm2d_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm2d *MR_LineSegm2d_ConstructFromAnother(const MR_LineSegm2d *_other);

/// Generated from a constructor of class `MR::LineSegm2d`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm2d_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm2d *MR_LineSegm2d_Construct(const MR_Vector2d *a, const MR_Vector2d *b);

/// Destroys a heap-allocated instance of `MR_LineSegm2d`. Does nothing if the pointer is null.
MRC_API void MR_LineSegm2d_Destroy(const MR_LineSegm2d *_this);

/// Destroys a heap-allocated array of `MR_LineSegm2d`. Does nothing if the pointer is null.
MRC_API void MR_LineSegm2d_DestroyArray(const MR_LineSegm2d *_this);

/// Generated from a method of class `MR::LineSegm2d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LineSegm2d *MR_LineSegm2d_AssignFromAnother(MR_LineSegm2d *_this, const MR_LineSegm2d *_other);

/// returns directional vector of the line
/// Generated from a method of class `MR::LineSegm2d` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_LineSegm2d_dir(const MR_LineSegm2d *_this);

/// returns squared length of this line segment
/// Generated from a method of class `MR::LineSegm2d` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_LineSegm2d_lengthSq(const MR_LineSegm2d *_this);

/// returns the length of this line segment
/// Generated from a method of class `MR::LineSegm2d` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_LineSegm2d_length(const MR_LineSegm2d *_this);

/// returns point on the line, where param=0 returns a and param=1 returns b
/// Generated from a method of class `MR::LineSegm2d` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_LineSegm2d_call(const MR_LineSegm2d *_this, double param);

/// Returns a pointer to a member variable of class `MR::LineSegm3f` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_LineSegm3f_Get_a(const MR_LineSegm3f *_this);

/// Modifies a member variable of class `MR::LineSegm3f` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineSegm3f_Set_a(MR_LineSegm3f *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::LineSegm3f` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_LineSegm3f_GetMutable_a(MR_LineSegm3f *_this);

/// Returns a pointer to a member variable of class `MR::LineSegm3f` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_LineSegm3f_Get_b(const MR_LineSegm3f *_this);

/// Modifies a member variable of class `MR::LineSegm3f` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineSegm3f_Set_b(MR_LineSegm3f *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::LineSegm3f` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_LineSegm3f_GetMutable_b(MR_LineSegm3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm3f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm3f *MR_LineSegm3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LineSegm3f_DestroyArray()`.
/// Use `MR_LineSegm3f_OffsetMutablePtr()` and `MR_LineSegm3f_OffsetPtr()` to access the array elements.
MRC_API MR_LineSegm3f *MR_LineSegm3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LineSegm3f *MR_LineSegm3f_OffsetPtr(const MR_LineSegm3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LineSegm3f *MR_LineSegm3f_OffsetMutablePtr(MR_LineSegm3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LineSegm3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm3f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm3f *MR_LineSegm3f_ConstructFromAnother(const MR_LineSegm3f *_other);

/// Generated from a constructor of class `MR::LineSegm3f`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm3f_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm3f *MR_LineSegm3f_Construct(const MR_Vector3f *a, const MR_Vector3f *b);

/// Destroys a heap-allocated instance of `MR_LineSegm3f`. Does nothing if the pointer is null.
MRC_API void MR_LineSegm3f_Destroy(const MR_LineSegm3f *_this);

/// Destroys a heap-allocated array of `MR_LineSegm3f`. Does nothing if the pointer is null.
MRC_API void MR_LineSegm3f_DestroyArray(const MR_LineSegm3f *_this);

/// Generated from a method of class `MR::LineSegm3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LineSegm3f *MR_LineSegm3f_AssignFromAnother(MR_LineSegm3f *_this, const MR_LineSegm3f *_other);

/// returns directional vector of the line
/// Generated from a method of class `MR::LineSegm3f` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_LineSegm3f_dir(const MR_LineSegm3f *_this);

/// returns squared length of this line segment
/// Generated from a method of class `MR::LineSegm3f` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_LineSegm3f_lengthSq(const MR_LineSegm3f *_this);

/// returns the length of this line segment
/// Generated from a method of class `MR::LineSegm3f` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_LineSegm3f_length(const MR_LineSegm3f *_this);

/// returns point on the line, where param=0 returns a and param=1 returns b
/// Generated from a method of class `MR::LineSegm3f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_LineSegm3f_call(const MR_LineSegm3f *_this, float param);

/// Returns a pointer to a member variable of class `MR::LineSegm3d` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_LineSegm3d_Get_a(const MR_LineSegm3d *_this);

/// Modifies a member variable of class `MR::LineSegm3d` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineSegm3d_Set_a(MR_LineSegm3d *_this, MR_Vector3d value);

/// Returns a mutable pointer to a member variable of class `MR::LineSegm3d` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_LineSegm3d_GetMutable_a(MR_LineSegm3d *_this);

/// Returns a pointer to a member variable of class `MR::LineSegm3d` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_LineSegm3d_Get_b(const MR_LineSegm3d *_this);

/// Modifies a member variable of class `MR::LineSegm3d` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineSegm3d_Set_b(MR_LineSegm3d *_this, MR_Vector3d value);

/// Returns a mutable pointer to a member variable of class `MR::LineSegm3d` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_LineSegm3d_GetMutable_b(MR_LineSegm3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm3d_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm3d *MR_LineSegm3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LineSegm3d_DestroyArray()`.
/// Use `MR_LineSegm3d_OffsetMutablePtr()` and `MR_LineSegm3d_OffsetPtr()` to access the array elements.
MRC_API MR_LineSegm3d *MR_LineSegm3d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LineSegm3d *MR_LineSegm3d_OffsetPtr(const MR_LineSegm3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LineSegm3d *MR_LineSegm3d_OffsetMutablePtr(MR_LineSegm3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LineSegm3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm3d_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm3d *MR_LineSegm3d_ConstructFromAnother(const MR_LineSegm3d *_other);

/// Generated from a constructor of class `MR::LineSegm3d`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineSegm3d_Destroy()` to free it when you're done using it.
MRC_API MR_LineSegm3d *MR_LineSegm3d_Construct(const MR_Vector3d *a, const MR_Vector3d *b);

/// Destroys a heap-allocated instance of `MR_LineSegm3d`. Does nothing if the pointer is null.
MRC_API void MR_LineSegm3d_Destroy(const MR_LineSegm3d *_this);

/// Destroys a heap-allocated array of `MR_LineSegm3d`. Does nothing if the pointer is null.
MRC_API void MR_LineSegm3d_DestroyArray(const MR_LineSegm3d *_this);

/// Generated from a method of class `MR::LineSegm3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LineSegm3d *MR_LineSegm3d_AssignFromAnother(MR_LineSegm3d *_this, const MR_LineSegm3d *_other);

/// returns directional vector of the line
/// Generated from a method of class `MR::LineSegm3d` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_LineSegm3d_dir(const MR_LineSegm3d *_this);

/// returns squared length of this line segment
/// Generated from a method of class `MR::LineSegm3d` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_LineSegm3d_lengthSq(const MR_LineSegm3d *_this);

/// returns the length of this line segment
/// Generated from a method of class `MR::LineSegm3d` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_LineSegm3d_length(const MR_LineSegm3d *_this);

/// returns point on the line, where param=0 returns a and param=1 returns b
/// Generated from a method of class `MR::LineSegm3d` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_LineSegm3d_call(const MR_LineSegm3d *_this, double param);

#ifdef __cplusplus
} // extern "C"
#endif
