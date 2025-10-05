// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from class `MR::Sphere2f`.
typedef struct MR_Sphere2f MR_Sphere2f;

/// Generated from class `MR::Sphere2d`.
typedef struct MR_Sphere2d MR_Sphere2d;

/// Generated from class `MR::Sphere3f`.
typedef struct MR_Sphere3f MR_Sphere3f;

/// Generated from class `MR::Sphere3d`.
typedef struct MR_Sphere3d MR_Sphere3d;

/// Returns a pointer to a member variable of class `MR::Sphere2f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_Sphere2f_Get_center(const MR_Sphere2f *_this);

/// Modifies a member variable of class `MR::Sphere2f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Sphere2f_Set_center(MR_Sphere2f *_this, MR_Vector2f value);

/// Returns a mutable pointer to a member variable of class `MR::Sphere2f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_Sphere2f_GetMutable_center(MR_Sphere2f *_this);

/// Returns a pointer to a member variable of class `MR::Sphere2f` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Sphere2f_Get_radius(const MR_Sphere2f *_this);

/// Modifies a member variable of class `MR::Sphere2f` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Sphere2f_Set_radius(MR_Sphere2f *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Sphere2f` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Sphere2f_GetMutable_radius(MR_Sphere2f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere2f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere2f *MR_Sphere2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Sphere2f_DestroyArray()`.
/// Use `MR_Sphere2f_OffsetMutablePtr()` and `MR_Sphere2f_OffsetPtr()` to access the array elements.
MRC_API MR_Sphere2f *MR_Sphere2f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Sphere2f *MR_Sphere2f_OffsetPtr(const MR_Sphere2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Sphere2f *MR_Sphere2f_OffsetMutablePtr(MR_Sphere2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Sphere2f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere2f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere2f *MR_Sphere2f_ConstructFromAnother(const MR_Sphere2f *_other);

/// Generated from a constructor of class `MR::Sphere2f`.
/// Parameter `c` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere2f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere2f *MR_Sphere2f_Construct(const MR_Vector2f *c, float r);

/// Destroys a heap-allocated instance of `MR_Sphere2f`. Does nothing if the pointer is null.
MRC_API void MR_Sphere2f_Destroy(const MR_Sphere2f *_this);

/// Destroys a heap-allocated array of `MR_Sphere2f`. Does nothing if the pointer is null.
MRC_API void MR_Sphere2f_DestroyArray(const MR_Sphere2f *_this);

/// Generated from a method of class `MR::Sphere2f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Sphere2f *MR_Sphere2f_AssignFromAnother(MR_Sphere2f *_this, const MR_Sphere2f *_other);

/// finds the closest point on sphere
/// Generated from a method of class `MR::Sphere2f` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Sphere2f_project(const MR_Sphere2f *_this, const MR_Vector2f *x);

/// returns signed distance from given point to this sphere:
/// positive - outside, zero - on sphere, negative - inside
/// Generated from a method of class `MR::Sphere2f` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API float MR_Sphere2f_distance(const MR_Sphere2f *_this, const MR_Vector2f *x);

/// returns squared distance from given point to this sphere
/// Generated from a method of class `MR::Sphere2f` named `distanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API float MR_Sphere2f_distanceSq(const MR_Sphere2f *_this, const MR_Vector2f *x);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Sphere2f(const MR_Sphere2f *a, const MR_Sphere2f *b);

/// Returns a pointer to a member variable of class `MR::Sphere2d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_Sphere2d_Get_center(const MR_Sphere2d *_this);

/// Modifies a member variable of class `MR::Sphere2d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Sphere2d_Set_center(MR_Sphere2d *_this, MR_Vector2d value);

/// Returns a mutable pointer to a member variable of class `MR::Sphere2d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_Sphere2d_GetMutable_center(MR_Sphere2d *_this);

/// Returns a pointer to a member variable of class `MR::Sphere2d` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Sphere2d_Get_radius(const MR_Sphere2d *_this);

/// Modifies a member variable of class `MR::Sphere2d` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Sphere2d_Set_radius(MR_Sphere2d *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::Sphere2d` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Sphere2d_GetMutable_radius(MR_Sphere2d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere2d_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere2d *MR_Sphere2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Sphere2d_DestroyArray()`.
/// Use `MR_Sphere2d_OffsetMutablePtr()` and `MR_Sphere2d_OffsetPtr()` to access the array elements.
MRC_API MR_Sphere2d *MR_Sphere2d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Sphere2d *MR_Sphere2d_OffsetPtr(const MR_Sphere2d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Sphere2d *MR_Sphere2d_OffsetMutablePtr(MR_Sphere2d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Sphere2d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere2d_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere2d *MR_Sphere2d_ConstructFromAnother(const MR_Sphere2d *_other);

/// Generated from a constructor of class `MR::Sphere2d`.
/// Parameter `c` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere2d_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere2d *MR_Sphere2d_Construct(const MR_Vector2d *c, double r);

/// Destroys a heap-allocated instance of `MR_Sphere2d`. Does nothing if the pointer is null.
MRC_API void MR_Sphere2d_Destroy(const MR_Sphere2d *_this);

/// Destroys a heap-allocated array of `MR_Sphere2d`. Does nothing if the pointer is null.
MRC_API void MR_Sphere2d_DestroyArray(const MR_Sphere2d *_this);

/// Generated from a method of class `MR::Sphere2d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Sphere2d *MR_Sphere2d_AssignFromAnother(MR_Sphere2d *_this, const MR_Sphere2d *_other);

/// finds the closest point on sphere
/// Generated from a method of class `MR::Sphere2d` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Sphere2d_project(const MR_Sphere2d *_this, const MR_Vector2d *x);

/// returns signed distance from given point to this sphere:
/// positive - outside, zero - on sphere, negative - inside
/// Generated from a method of class `MR::Sphere2d` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API double MR_Sphere2d_distance(const MR_Sphere2d *_this, const MR_Vector2d *x);

/// returns squared distance from given point to this sphere
/// Generated from a method of class `MR::Sphere2d` named `distanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API double MR_Sphere2d_distanceSq(const MR_Sphere2d *_this, const MR_Vector2d *x);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Sphere2d(const MR_Sphere2d *a, const MR_Sphere2d *b);

/// Returns a pointer to a member variable of class `MR::Sphere3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Sphere3f_Get_center(const MR_Sphere3f *_this);

/// Modifies a member variable of class `MR::Sphere3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Sphere3f_Set_center(MR_Sphere3f *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Sphere3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Sphere3f_GetMutable_center(MR_Sphere3f *_this);

/// Returns a pointer to a member variable of class `MR::Sphere3f` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Sphere3f_Get_radius(const MR_Sphere3f *_this);

/// Modifies a member variable of class `MR::Sphere3f` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Sphere3f_Set_radius(MR_Sphere3f *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Sphere3f` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Sphere3f_GetMutable_radius(MR_Sphere3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Sphere3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Sphere3f_DestroyArray()`.
/// Use `MR_Sphere3f_OffsetMutablePtr()` and `MR_Sphere3f_OffsetPtr()` to access the array elements.
MRC_API MR_Sphere3f *MR_Sphere3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Sphere3f *MR_Sphere3f_OffsetPtr(const MR_Sphere3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Sphere3f *MR_Sphere3f_OffsetMutablePtr(MR_Sphere3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Sphere3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Sphere3f_ConstructFromAnother(const MR_Sphere3f *_other);

/// Generated from a constructor of class `MR::Sphere3f`.
/// Parameter `c` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Sphere3f_Construct(const MR_Vector3f *c, float r);

/// Generated from a constructor of class `MR::Sphere3f`.
/// Parameter `l` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3f_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3f *MR_Sphere3f_Construct_MR_Vector3f(const MR_Sphere3f *l);

/// Destroys a heap-allocated instance of `MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Sphere3f_Destroy(const MR_Sphere3f *_this);

/// Destroys a heap-allocated array of `MR_Sphere3f`. Does nothing if the pointer is null.
MRC_API void MR_Sphere3f_DestroyArray(const MR_Sphere3f *_this);

/// Generated from a method of class `MR::Sphere3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Sphere3f *MR_Sphere3f_AssignFromAnother(MR_Sphere3f *_this, const MR_Sphere3f *_other);

/// finds the closest point on sphere
/// Generated from a method of class `MR::Sphere3f` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Sphere3f_project(const MR_Sphere3f *_this, const MR_Vector3f *x);

/// returns signed distance from given point to this sphere:
/// positive - outside, zero - on sphere, negative - inside
/// Generated from a method of class `MR::Sphere3f` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API float MR_Sphere3f_distance(const MR_Sphere3f *_this, const MR_Vector3f *x);

/// returns squared distance from given point to this sphere
/// Generated from a method of class `MR::Sphere3f` named `distanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API float MR_Sphere3f_distanceSq(const MR_Sphere3f *_this, const MR_Vector3f *x);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Sphere3f(const MR_Sphere3f *a, const MR_Sphere3f *b);

/// Returns a pointer to a member variable of class `MR::Sphere3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Sphere3d_Get_center(const MR_Sphere3d *_this);

/// Modifies a member variable of class `MR::Sphere3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Sphere3d_Set_center(MR_Sphere3d *_this, MR_Vector3d value);

/// Returns a mutable pointer to a member variable of class `MR::Sphere3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Sphere3d_GetMutable_center(MR_Sphere3d *_this);

/// Returns a pointer to a member variable of class `MR::Sphere3d` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Sphere3d_Get_radius(const MR_Sphere3d *_this);

/// Modifies a member variable of class `MR::Sphere3d` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Sphere3d_Set_radius(MR_Sphere3d *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::Sphere3d` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Sphere3d_GetMutable_radius(MR_Sphere3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3d_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3d *MR_Sphere3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Sphere3d_DestroyArray()`.
/// Use `MR_Sphere3d_OffsetMutablePtr()` and `MR_Sphere3d_OffsetPtr()` to access the array elements.
MRC_API MR_Sphere3d *MR_Sphere3d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Sphere3d *MR_Sphere3d_OffsetPtr(const MR_Sphere3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Sphere3d *MR_Sphere3d_OffsetMutablePtr(MR_Sphere3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Sphere3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3d_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3d *MR_Sphere3d_ConstructFromAnother(const MR_Sphere3d *_other);

/// Generated from a constructor of class `MR::Sphere3d`.
/// Parameter `c` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Sphere3d_Destroy()` to free it when you're done using it.
MRC_API MR_Sphere3d *MR_Sphere3d_Construct(const MR_Vector3d *c, double r);

/// Destroys a heap-allocated instance of `MR_Sphere3d`. Does nothing if the pointer is null.
MRC_API void MR_Sphere3d_Destroy(const MR_Sphere3d *_this);

/// Destroys a heap-allocated array of `MR_Sphere3d`. Does nothing if the pointer is null.
MRC_API void MR_Sphere3d_DestroyArray(const MR_Sphere3d *_this);

/// Generated from a method of class `MR::Sphere3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Sphere3d *MR_Sphere3d_AssignFromAnother(MR_Sphere3d *_this, const MR_Sphere3d *_other);

/// finds the closest point on sphere
/// Generated from a method of class `MR::Sphere3d` named `project`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Sphere3d_project(const MR_Sphere3d *_this, const MR_Vector3d *x);

/// returns signed distance from given point to this sphere:
/// positive - outside, zero - on sphere, negative - inside
/// Generated from a method of class `MR::Sphere3d` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API double MR_Sphere3d_distance(const MR_Sphere3d *_this, const MR_Vector3d *x);

/// returns squared distance from given point to this sphere
/// Generated from a method of class `MR::Sphere3d` named `distanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API double MR_Sphere3d_distanceSq(const MR_Sphere3d *_this, const MR_Vector3d *x);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Sphere3d(const MR_Sphere3d *a, const MR_Sphere3d *b);

#ifdef __cplusplus
} // extern "C"
#endif
