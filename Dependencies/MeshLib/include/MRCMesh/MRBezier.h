// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>
#include <MRCMisc/std_array_double_4.h>
#include <MRCMisc/std_array_float_4.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Cubic Bezier curve
/// Generated from class `MR::CubicBezierCurve2f`.
typedef struct MR_CubicBezierCurve2f MR_CubicBezierCurve2f;

/// Cubic Bezier curve
/// Generated from class `MR::CubicBezierCurve2d`.
typedef struct MR_CubicBezierCurve2d MR_CubicBezierCurve2d;

/// Cubic Bezier curve
/// Generated from class `MR::CubicBezierCurve3f`.
typedef struct MR_CubicBezierCurve3f MR_CubicBezierCurve3f;

/// Cubic Bezier curve
/// Generated from class `MR::CubicBezierCurve3d`.
typedef struct MR_CubicBezierCurve3d MR_CubicBezierCurve3d;

/// Returns a pointer to a member variable of class `MR::CubicBezierCurve2f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_CubicBezierCurve2f_Get_elements(void);

/// 4 control points
/// Returns a pointer to a member variable of class `MR::CubicBezierCurve2f` named `p`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_CubicBezierCurve2f_Get_p(const MR_CubicBezierCurve2f *_this);

/// 4 control points
/// Returns a mutable pointer to a member variable of class `MR::CubicBezierCurve2f` named `p`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_CubicBezierCurve2f_GetMutable_p(MR_CubicBezierCurve2f *_this);

/// Returns the size of the array member of class `MR::CubicBezierCurve2f` named `p`. The size is `4`.
MRC_API size_t MR_CubicBezierCurve2f_GetSize_p(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CubicBezierCurve2f_Destroy()` to free it when you're done using it.
MRC_API MR_CubicBezierCurve2f *MR_CubicBezierCurve2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CubicBezierCurve2f_DestroyArray()`.
/// Use `MR_CubicBezierCurve2f_OffsetMutablePtr()` and `MR_CubicBezierCurve2f_OffsetPtr()` to access the array elements.
MRC_API MR_CubicBezierCurve2f *MR_CubicBezierCurve2f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CubicBezierCurve2f *MR_CubicBezierCurve2f_OffsetPtr(const MR_CubicBezierCurve2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CubicBezierCurve2f *MR_CubicBezierCurve2f_OffsetMutablePtr(MR_CubicBezierCurve2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CubicBezierCurve2f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CubicBezierCurve2f_Destroy()` to free it when you're done using it.
MRC_API MR_CubicBezierCurve2f *MR_CubicBezierCurve2f_ConstructFromAnother(const MR_CubicBezierCurve2f *_other);

/// Destroys a heap-allocated instance of `MR_CubicBezierCurve2f`. Does nothing if the pointer is null.
MRC_API void MR_CubicBezierCurve2f_Destroy(const MR_CubicBezierCurve2f *_this);

/// Destroys a heap-allocated array of `MR_CubicBezierCurve2f`. Does nothing if the pointer is null.
MRC_API void MR_CubicBezierCurve2f_DestroyArray(const MR_CubicBezierCurve2f *_this);

/// Generated from a method of class `MR::CubicBezierCurve2f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CubicBezierCurve2f *MR_CubicBezierCurve2f_AssignFromAnother(MR_CubicBezierCurve2f *_this, const MR_CubicBezierCurve2f *_other);

/// computes point on the curve from parameter value
/// Generated from a method of class `MR::CubicBezierCurve2f` named `getPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_CubicBezierCurve2f_getPoint(const MR_CubicBezierCurve2f *_this, float t);

/// computes weights of every control point for given parameter value, the sum of all weights is equal to 1
/// Generated from a method of class `MR::CubicBezierCurve2f` named `getWeights`.
MRC_API MR_std_array_float_4 MR_CubicBezierCurve2f_getWeights(float t);

/// Returns a pointer to a member variable of class `MR::CubicBezierCurve2d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_CubicBezierCurve2d_Get_elements(void);

/// 4 control points
/// Returns a pointer to a member variable of class `MR::CubicBezierCurve2d` named `p`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_CubicBezierCurve2d_Get_p(const MR_CubicBezierCurve2d *_this);

/// 4 control points
/// Returns a mutable pointer to a member variable of class `MR::CubicBezierCurve2d` named `p`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_CubicBezierCurve2d_GetMutable_p(MR_CubicBezierCurve2d *_this);

/// Returns the size of the array member of class `MR::CubicBezierCurve2d` named `p`. The size is `4`.
MRC_API size_t MR_CubicBezierCurve2d_GetSize_p(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CubicBezierCurve2d_Destroy()` to free it when you're done using it.
MRC_API MR_CubicBezierCurve2d *MR_CubicBezierCurve2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CubicBezierCurve2d_DestroyArray()`.
/// Use `MR_CubicBezierCurve2d_OffsetMutablePtr()` and `MR_CubicBezierCurve2d_OffsetPtr()` to access the array elements.
MRC_API MR_CubicBezierCurve2d *MR_CubicBezierCurve2d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CubicBezierCurve2d *MR_CubicBezierCurve2d_OffsetPtr(const MR_CubicBezierCurve2d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CubicBezierCurve2d *MR_CubicBezierCurve2d_OffsetMutablePtr(MR_CubicBezierCurve2d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CubicBezierCurve2d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CubicBezierCurve2d_Destroy()` to free it when you're done using it.
MRC_API MR_CubicBezierCurve2d *MR_CubicBezierCurve2d_ConstructFromAnother(const MR_CubicBezierCurve2d *_other);

/// Destroys a heap-allocated instance of `MR_CubicBezierCurve2d`. Does nothing if the pointer is null.
MRC_API void MR_CubicBezierCurve2d_Destroy(const MR_CubicBezierCurve2d *_this);

/// Destroys a heap-allocated array of `MR_CubicBezierCurve2d`. Does nothing if the pointer is null.
MRC_API void MR_CubicBezierCurve2d_DestroyArray(const MR_CubicBezierCurve2d *_this);

/// Generated from a method of class `MR::CubicBezierCurve2d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CubicBezierCurve2d *MR_CubicBezierCurve2d_AssignFromAnother(MR_CubicBezierCurve2d *_this, const MR_CubicBezierCurve2d *_other);

/// computes point on the curve from parameter value
/// Generated from a method of class `MR::CubicBezierCurve2d` named `getPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_CubicBezierCurve2d_getPoint(const MR_CubicBezierCurve2d *_this, double t);

/// computes weights of every control point for given parameter value, the sum of all weights is equal to 1
/// Generated from a method of class `MR::CubicBezierCurve2d` named `getWeights`.
MRC_API MR_std_array_double_4 MR_CubicBezierCurve2d_getWeights(double t);

/// Returns a pointer to a member variable of class `MR::CubicBezierCurve3f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_CubicBezierCurve3f_Get_elements(void);

/// 4 control points
/// Returns a pointer to a member variable of class `MR::CubicBezierCurve3f` named `p`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_CubicBezierCurve3f_Get_p(const MR_CubicBezierCurve3f *_this);

/// 4 control points
/// Returns a mutable pointer to a member variable of class `MR::CubicBezierCurve3f` named `p`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_CubicBezierCurve3f_GetMutable_p(MR_CubicBezierCurve3f *_this);

/// Returns the size of the array member of class `MR::CubicBezierCurve3f` named `p`. The size is `4`.
MRC_API size_t MR_CubicBezierCurve3f_GetSize_p(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CubicBezierCurve3f_Destroy()` to free it when you're done using it.
MRC_API MR_CubicBezierCurve3f *MR_CubicBezierCurve3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CubicBezierCurve3f_DestroyArray()`.
/// Use `MR_CubicBezierCurve3f_OffsetMutablePtr()` and `MR_CubicBezierCurve3f_OffsetPtr()` to access the array elements.
MRC_API MR_CubicBezierCurve3f *MR_CubicBezierCurve3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CubicBezierCurve3f *MR_CubicBezierCurve3f_OffsetPtr(const MR_CubicBezierCurve3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CubicBezierCurve3f *MR_CubicBezierCurve3f_OffsetMutablePtr(MR_CubicBezierCurve3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CubicBezierCurve3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CubicBezierCurve3f_Destroy()` to free it when you're done using it.
MRC_API MR_CubicBezierCurve3f *MR_CubicBezierCurve3f_ConstructFromAnother(const MR_CubicBezierCurve3f *_other);

/// Destroys a heap-allocated instance of `MR_CubicBezierCurve3f`. Does nothing if the pointer is null.
MRC_API void MR_CubicBezierCurve3f_Destroy(const MR_CubicBezierCurve3f *_this);

/// Destroys a heap-allocated array of `MR_CubicBezierCurve3f`. Does nothing if the pointer is null.
MRC_API void MR_CubicBezierCurve3f_DestroyArray(const MR_CubicBezierCurve3f *_this);

/// Generated from a method of class `MR::CubicBezierCurve3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CubicBezierCurve3f *MR_CubicBezierCurve3f_AssignFromAnother(MR_CubicBezierCurve3f *_this, const MR_CubicBezierCurve3f *_other);

/// computes point on the curve from parameter value
/// Generated from a method of class `MR::CubicBezierCurve3f` named `getPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_CubicBezierCurve3f_getPoint(const MR_CubicBezierCurve3f *_this, float t);

/// computes weights of every control point for given parameter value, the sum of all weights is equal to 1
/// Generated from a method of class `MR::CubicBezierCurve3f` named `getWeights`.
MRC_API MR_std_array_float_4 MR_CubicBezierCurve3f_getWeights(float t);

/// Returns a pointer to a member variable of class `MR::CubicBezierCurve3d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_CubicBezierCurve3d_Get_elements(void);

/// 4 control points
/// Returns a pointer to a member variable of class `MR::CubicBezierCurve3d` named `p`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_CubicBezierCurve3d_Get_p(const MR_CubicBezierCurve3d *_this);

/// 4 control points
/// Returns a mutable pointer to a member variable of class `MR::CubicBezierCurve3d` named `p`. This is a pointer to the first element of an array.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_CubicBezierCurve3d_GetMutable_p(MR_CubicBezierCurve3d *_this);

/// Returns the size of the array member of class `MR::CubicBezierCurve3d` named `p`. The size is `4`.
MRC_API size_t MR_CubicBezierCurve3d_GetSize_p(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CubicBezierCurve3d_Destroy()` to free it when you're done using it.
MRC_API MR_CubicBezierCurve3d *MR_CubicBezierCurve3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CubicBezierCurve3d_DestroyArray()`.
/// Use `MR_CubicBezierCurve3d_OffsetMutablePtr()` and `MR_CubicBezierCurve3d_OffsetPtr()` to access the array elements.
MRC_API MR_CubicBezierCurve3d *MR_CubicBezierCurve3d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CubicBezierCurve3d *MR_CubicBezierCurve3d_OffsetPtr(const MR_CubicBezierCurve3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CubicBezierCurve3d *MR_CubicBezierCurve3d_OffsetMutablePtr(MR_CubicBezierCurve3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CubicBezierCurve3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CubicBezierCurve3d_Destroy()` to free it when you're done using it.
MRC_API MR_CubicBezierCurve3d *MR_CubicBezierCurve3d_ConstructFromAnother(const MR_CubicBezierCurve3d *_other);

/// Destroys a heap-allocated instance of `MR_CubicBezierCurve3d`. Does nothing if the pointer is null.
MRC_API void MR_CubicBezierCurve3d_Destroy(const MR_CubicBezierCurve3d *_this);

/// Destroys a heap-allocated array of `MR_CubicBezierCurve3d`. Does nothing if the pointer is null.
MRC_API void MR_CubicBezierCurve3d_DestroyArray(const MR_CubicBezierCurve3d *_this);

/// Generated from a method of class `MR::CubicBezierCurve3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CubicBezierCurve3d *MR_CubicBezierCurve3d_AssignFromAnother(MR_CubicBezierCurve3d *_this, const MR_CubicBezierCurve3d *_other);

/// computes point on the curve from parameter value
/// Generated from a method of class `MR::CubicBezierCurve3d` named `getPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_CubicBezierCurve3d_getPoint(const MR_CubicBezierCurve3d *_this, double t);

/// computes weights of every control point for given parameter value, the sum of all weights is equal to 1
/// Generated from a method of class `MR::CubicBezierCurve3d` named `getWeights`.
MRC_API MR_std_array_double_4 MR_CubicBezierCurve3d_getWeights(double t);

#ifdef __cplusplus
} // extern "C"
#endif
