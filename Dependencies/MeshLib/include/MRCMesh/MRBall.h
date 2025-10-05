// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// a ball = points surrounded by a sphere in arbitrary space with vector type V
/// Generated from class `MR::Ball1f`.
typedef struct MR_Ball1f MR_Ball1f;

/// a ball = points surrounded by a sphere in arbitrary space with vector type V
/// Generated from class `MR::Ball1d`.
typedef struct MR_Ball1d MR_Ball1d;

/// a ball = points surrounded by a sphere in arbitrary space with vector type V
/// Generated from class `MR::Ball2f`.
typedef struct MR_Ball2f MR_Ball2f;

/// a ball = points surrounded by a sphere in arbitrary space with vector type V
/// Generated from class `MR::Ball2d`.
typedef struct MR_Ball2d MR_Ball2d;

/// a ball = points surrounded by a sphere in arbitrary space with vector type V
/// Generated from class `MR::Ball3f`.
typedef struct MR_Ball3f MR_Ball3f;

/// a ball = points surrounded by a sphere in arbitrary space with vector type V
/// Generated from class `MR::Ball3d`.
typedef struct MR_Ball3d MR_Ball3d;

/// Returns a pointer to a member variable of class `MR::Ball1f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Ball1f_Get_elements(void);

///< ball's center
/// Returns a pointer to a member variable of class `MR::Ball1f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Ball1f_Get_center(const MR_Ball1f *_this);

///< ball's center
/// Modifies a member variable of class `MR::Ball1f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball1f_Set_center(MR_Ball1f *_this, float value);

///< ball's center
/// Returns a mutable pointer to a member variable of class `MR::Ball1f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Ball1f_GetMutable_center(MR_Ball1f *_this);

///< ball's squared radius
/// Returns a pointer to a member variable of class `MR::Ball1f` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Ball1f_Get_radiusSq(const MR_Ball1f *_this);

///< ball's squared radius
/// Modifies a member variable of class `MR::Ball1f` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball1f_Set_radiusSq(MR_Ball1f *_this, float value);

///< ball's squared radius
/// Returns a mutable pointer to a member variable of class `MR::Ball1f` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Ball1f_GetMutable_radiusSq(MR_Ball1f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball1f_Destroy()` to free it when you're done using it.
MRC_API MR_Ball1f *MR_Ball1f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Ball1f_DestroyArray()`.
/// Use `MR_Ball1f_OffsetMutablePtr()` and `MR_Ball1f_OffsetPtr()` to access the array elements.
MRC_API MR_Ball1f *MR_Ball1f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Ball1f` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball1f_Destroy()` to free it when you're done using it.
MRC_API MR_Ball1f *MR_Ball1f_ConstructFrom(float center, float radiusSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Ball1f *MR_Ball1f_OffsetPtr(const MR_Ball1f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Ball1f *MR_Ball1f_OffsetMutablePtr(MR_Ball1f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Ball1f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball1f_Destroy()` to free it when you're done using it.
MRC_API MR_Ball1f *MR_Ball1f_ConstructFromAnother(const MR_Ball1f *_other);

/// Destroys a heap-allocated instance of `MR_Ball1f`. Does nothing if the pointer is null.
MRC_API void MR_Ball1f_Destroy(const MR_Ball1f *_this);

/// Destroys a heap-allocated array of `MR_Ball1f`. Does nothing if the pointer is null.
MRC_API void MR_Ball1f_DestroyArray(const MR_Ball1f *_this);

/// Generated from a method of class `MR::Ball1f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Ball1f *MR_Ball1f_AssignFromAnother(MR_Ball1f *_this, const MR_Ball1f *_other);

/// returns true if given point is strictly inside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball1f` named `inside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball1f_inside(const MR_Ball1f *_this, const float *pt);

/// returns true if given point is strictly outside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball1f` named `outside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball1f_outside(const MR_Ball1f *_this, const float *pt);

/// Returns a pointer to a member variable of class `MR::Ball1d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Ball1d_Get_elements(void);

///< ball's center
/// Returns a pointer to a member variable of class `MR::Ball1d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Ball1d_Get_center(const MR_Ball1d *_this);

///< ball's center
/// Modifies a member variable of class `MR::Ball1d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball1d_Set_center(MR_Ball1d *_this, double value);

///< ball's center
/// Returns a mutable pointer to a member variable of class `MR::Ball1d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Ball1d_GetMutable_center(MR_Ball1d *_this);

///< ball's squared radius
/// Returns a pointer to a member variable of class `MR::Ball1d` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Ball1d_Get_radiusSq(const MR_Ball1d *_this);

///< ball's squared radius
/// Modifies a member variable of class `MR::Ball1d` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball1d_Set_radiusSq(MR_Ball1d *_this, double value);

///< ball's squared radius
/// Returns a mutable pointer to a member variable of class `MR::Ball1d` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Ball1d_GetMutable_radiusSq(MR_Ball1d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball1d_Destroy()` to free it when you're done using it.
MRC_API MR_Ball1d *MR_Ball1d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Ball1d_DestroyArray()`.
/// Use `MR_Ball1d_OffsetMutablePtr()` and `MR_Ball1d_OffsetPtr()` to access the array elements.
MRC_API MR_Ball1d *MR_Ball1d_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Ball1d` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball1d_Destroy()` to free it when you're done using it.
MRC_API MR_Ball1d *MR_Ball1d_ConstructFrom(double center, double radiusSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Ball1d *MR_Ball1d_OffsetPtr(const MR_Ball1d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Ball1d *MR_Ball1d_OffsetMutablePtr(MR_Ball1d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Ball1d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball1d_Destroy()` to free it when you're done using it.
MRC_API MR_Ball1d *MR_Ball1d_ConstructFromAnother(const MR_Ball1d *_other);

/// Destroys a heap-allocated instance of `MR_Ball1d`. Does nothing if the pointer is null.
MRC_API void MR_Ball1d_Destroy(const MR_Ball1d *_this);

/// Destroys a heap-allocated array of `MR_Ball1d`. Does nothing if the pointer is null.
MRC_API void MR_Ball1d_DestroyArray(const MR_Ball1d *_this);

/// Generated from a method of class `MR::Ball1d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Ball1d *MR_Ball1d_AssignFromAnother(MR_Ball1d *_this, const MR_Ball1d *_other);

/// returns true if given point is strictly inside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball1d` named `inside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball1d_inside(const MR_Ball1d *_this, const double *pt);

/// returns true if given point is strictly outside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball1d` named `outside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball1d_outside(const MR_Ball1d *_this, const double *pt);

/// Returns a pointer to a member variable of class `MR::Ball2f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Ball2f_Get_elements(void);

///< ball's center
/// Returns a pointer to a member variable of class `MR::Ball2f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_Ball2f_Get_center(const MR_Ball2f *_this);

///< ball's center
/// Modifies a member variable of class `MR::Ball2f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball2f_Set_center(MR_Ball2f *_this, MR_Vector2f value);

///< ball's center
/// Returns a mutable pointer to a member variable of class `MR::Ball2f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_Ball2f_GetMutable_center(MR_Ball2f *_this);

///< ball's squared radius
/// Returns a pointer to a member variable of class `MR::Ball2f` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Ball2f_Get_radiusSq(const MR_Ball2f *_this);

///< ball's squared radius
/// Modifies a member variable of class `MR::Ball2f` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball2f_Set_radiusSq(MR_Ball2f *_this, float value);

///< ball's squared radius
/// Returns a mutable pointer to a member variable of class `MR::Ball2f` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Ball2f_GetMutable_radiusSq(MR_Ball2f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball2f_Destroy()` to free it when you're done using it.
MRC_API MR_Ball2f *MR_Ball2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Ball2f_DestroyArray()`.
/// Use `MR_Ball2f_OffsetMutablePtr()` and `MR_Ball2f_OffsetPtr()` to access the array elements.
MRC_API MR_Ball2f *MR_Ball2f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Ball2f` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball2f_Destroy()` to free it when you're done using it.
MRC_API MR_Ball2f *MR_Ball2f_ConstructFrom(MR_Vector2f center, float radiusSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Ball2f *MR_Ball2f_OffsetPtr(const MR_Ball2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Ball2f *MR_Ball2f_OffsetMutablePtr(MR_Ball2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Ball2f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball2f_Destroy()` to free it when you're done using it.
MRC_API MR_Ball2f *MR_Ball2f_ConstructFromAnother(const MR_Ball2f *_other);

/// Destroys a heap-allocated instance of `MR_Ball2f`. Does nothing if the pointer is null.
MRC_API void MR_Ball2f_Destroy(const MR_Ball2f *_this);

/// Destroys a heap-allocated array of `MR_Ball2f`. Does nothing if the pointer is null.
MRC_API void MR_Ball2f_DestroyArray(const MR_Ball2f *_this);

/// Generated from a method of class `MR::Ball2f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Ball2f *MR_Ball2f_AssignFromAnother(MR_Ball2f *_this, const MR_Ball2f *_other);

/// returns true if given point is strictly inside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball2f` named `inside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball2f_inside(const MR_Ball2f *_this, const MR_Vector2f *pt);

/// returns true if given point is strictly outside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball2f` named `outside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball2f_outside(const MR_Ball2f *_this, const MR_Vector2f *pt);

/// Returns a pointer to a member variable of class `MR::Ball2d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Ball2d_Get_elements(void);

///< ball's center
/// Returns a pointer to a member variable of class `MR::Ball2d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_Ball2d_Get_center(const MR_Ball2d *_this);

///< ball's center
/// Modifies a member variable of class `MR::Ball2d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball2d_Set_center(MR_Ball2d *_this, MR_Vector2d value);

///< ball's center
/// Returns a mutable pointer to a member variable of class `MR::Ball2d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_Ball2d_GetMutable_center(MR_Ball2d *_this);

///< ball's squared radius
/// Returns a pointer to a member variable of class `MR::Ball2d` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Ball2d_Get_radiusSq(const MR_Ball2d *_this);

///< ball's squared radius
/// Modifies a member variable of class `MR::Ball2d` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball2d_Set_radiusSq(MR_Ball2d *_this, double value);

///< ball's squared radius
/// Returns a mutable pointer to a member variable of class `MR::Ball2d` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Ball2d_GetMutable_radiusSq(MR_Ball2d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball2d_Destroy()` to free it when you're done using it.
MRC_API MR_Ball2d *MR_Ball2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Ball2d_DestroyArray()`.
/// Use `MR_Ball2d_OffsetMutablePtr()` and `MR_Ball2d_OffsetPtr()` to access the array elements.
MRC_API MR_Ball2d *MR_Ball2d_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Ball2d` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball2d_Destroy()` to free it when you're done using it.
MRC_API MR_Ball2d *MR_Ball2d_ConstructFrom(MR_Vector2d center, double radiusSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Ball2d *MR_Ball2d_OffsetPtr(const MR_Ball2d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Ball2d *MR_Ball2d_OffsetMutablePtr(MR_Ball2d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Ball2d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball2d_Destroy()` to free it when you're done using it.
MRC_API MR_Ball2d *MR_Ball2d_ConstructFromAnother(const MR_Ball2d *_other);

/// Destroys a heap-allocated instance of `MR_Ball2d`. Does nothing if the pointer is null.
MRC_API void MR_Ball2d_Destroy(const MR_Ball2d *_this);

/// Destroys a heap-allocated array of `MR_Ball2d`. Does nothing if the pointer is null.
MRC_API void MR_Ball2d_DestroyArray(const MR_Ball2d *_this);

/// Generated from a method of class `MR::Ball2d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Ball2d *MR_Ball2d_AssignFromAnother(MR_Ball2d *_this, const MR_Ball2d *_other);

/// returns true if given point is strictly inside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball2d` named `inside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball2d_inside(const MR_Ball2d *_this, const MR_Vector2d *pt);

/// returns true if given point is strictly outside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball2d` named `outside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball2d_outside(const MR_Ball2d *_this, const MR_Vector2d *pt);

/// Returns a pointer to a member variable of class `MR::Ball3f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Ball3f_Get_elements(void);

///< ball's center
/// Returns a pointer to a member variable of class `MR::Ball3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Ball3f_Get_center(const MR_Ball3f *_this);

///< ball's center
/// Modifies a member variable of class `MR::Ball3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball3f_Set_center(MR_Ball3f *_this, MR_Vector3f value);

///< ball's center
/// Returns a mutable pointer to a member variable of class `MR::Ball3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Ball3f_GetMutable_center(MR_Ball3f *_this);

///< ball's squared radius
/// Returns a pointer to a member variable of class `MR::Ball3f` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Ball3f_Get_radiusSq(const MR_Ball3f *_this);

///< ball's squared radius
/// Modifies a member variable of class `MR::Ball3f` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball3f_Set_radiusSq(MR_Ball3f *_this, float value);

///< ball's squared radius
/// Returns a mutable pointer to a member variable of class `MR::Ball3f` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Ball3f_GetMutable_radiusSq(MR_Ball3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball3f_Destroy()` to free it when you're done using it.
MRC_API MR_Ball3f *MR_Ball3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Ball3f_DestroyArray()`.
/// Use `MR_Ball3f_OffsetMutablePtr()` and `MR_Ball3f_OffsetPtr()` to access the array elements.
MRC_API MR_Ball3f *MR_Ball3f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Ball3f` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball3f_Destroy()` to free it when you're done using it.
MRC_API MR_Ball3f *MR_Ball3f_ConstructFrom(MR_Vector3f center, float radiusSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Ball3f *MR_Ball3f_OffsetPtr(const MR_Ball3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Ball3f *MR_Ball3f_OffsetMutablePtr(MR_Ball3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Ball3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball3f_Destroy()` to free it when you're done using it.
MRC_API MR_Ball3f *MR_Ball3f_ConstructFromAnother(const MR_Ball3f *_other);

/// Destroys a heap-allocated instance of `MR_Ball3f`. Does nothing if the pointer is null.
MRC_API void MR_Ball3f_Destroy(const MR_Ball3f *_this);

/// Destroys a heap-allocated array of `MR_Ball3f`. Does nothing if the pointer is null.
MRC_API void MR_Ball3f_DestroyArray(const MR_Ball3f *_this);

/// Generated from a method of class `MR::Ball3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Ball3f *MR_Ball3f_AssignFromAnother(MR_Ball3f *_this, const MR_Ball3f *_other);

/// returns true if given point is strictly inside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball3f` named `inside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball3f_inside(const MR_Ball3f *_this, const MR_Vector3f *pt);

/// returns true if given point is strictly outside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball3f` named `outside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball3f_outside(const MR_Ball3f *_this, const MR_Vector3f *pt);

/// Returns a pointer to a member variable of class `MR::Ball3d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Ball3d_Get_elements(void);

///< ball's center
/// Returns a pointer to a member variable of class `MR::Ball3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Ball3d_Get_center(const MR_Ball3d *_this);

///< ball's center
/// Modifies a member variable of class `MR::Ball3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball3d_Set_center(MR_Ball3d *_this, MR_Vector3d value);

///< ball's center
/// Returns a mutable pointer to a member variable of class `MR::Ball3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Ball3d_GetMutable_center(MR_Ball3d *_this);

///< ball's squared radius
/// Returns a pointer to a member variable of class `MR::Ball3d` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Ball3d_Get_radiusSq(const MR_Ball3d *_this);

///< ball's squared radius
/// Modifies a member variable of class `MR::Ball3d` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Ball3d_Set_radiusSq(MR_Ball3d *_this, double value);

///< ball's squared radius
/// Returns a mutable pointer to a member variable of class `MR::Ball3d` named `radiusSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Ball3d_GetMutable_radiusSq(MR_Ball3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball3d_Destroy()` to free it when you're done using it.
MRC_API MR_Ball3d *MR_Ball3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Ball3d_DestroyArray()`.
/// Use `MR_Ball3d_OffsetMutablePtr()` and `MR_Ball3d_OffsetPtr()` to access the array elements.
MRC_API MR_Ball3d *MR_Ball3d_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Ball3d` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball3d_Destroy()` to free it when you're done using it.
MRC_API MR_Ball3d *MR_Ball3d_ConstructFrom(MR_Vector3d center, double radiusSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Ball3d *MR_Ball3d_OffsetPtr(const MR_Ball3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Ball3d *MR_Ball3d_OffsetMutablePtr(MR_Ball3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Ball3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Ball3d_Destroy()` to free it when you're done using it.
MRC_API MR_Ball3d *MR_Ball3d_ConstructFromAnother(const MR_Ball3d *_other);

/// Destroys a heap-allocated instance of `MR_Ball3d`. Does nothing if the pointer is null.
MRC_API void MR_Ball3d_Destroy(const MR_Ball3d *_this);

/// Destroys a heap-allocated array of `MR_Ball3d`. Does nothing if the pointer is null.
MRC_API void MR_Ball3d_DestroyArray(const MR_Ball3d *_this);

/// Generated from a method of class `MR::Ball3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Ball3d *MR_Ball3d_AssignFromAnother(MR_Ball3d *_this, const MR_Ball3d *_other);

/// returns true if given point is strictly inside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball3d` named `inside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball3d_inside(const MR_Ball3d *_this, const MR_Vector3d *pt);

/// returns true if given point is strictly outside the ball (not on its spherical surface)
/// Generated from a method of class `MR::Ball3d` named `outside`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Ball3d_outside(const MR_Ball3d *_this, const MR_Vector3d *pt);

#ifdef __cplusplus
} // extern "C"
#endif
