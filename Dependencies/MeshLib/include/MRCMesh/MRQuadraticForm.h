// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_SymMatrix2d MR_SymMatrix2d; // Defined in `#include <MRCMesh/MRSymMatrix2.h>`.
typedef struct MR_SymMatrix2f MR_SymMatrix2f; // Defined in `#include <MRCMesh/MRSymMatrix2.h>`.
typedef struct MR_SymMatrix3d MR_SymMatrix3d; // Defined in `#include <MRCMesh/MRSymMatrix3.h>`.
typedef struct MR_SymMatrix3f MR_SymMatrix3f; // Defined in `#include <MRCMesh/MRSymMatrix3.h>`.
typedef struct MR_Vector2d MR_Vector2d; // Defined in `#include <MRCMesh/MRVector2.h>`.
typedef struct MR_Vector2f MR_Vector2f; // Defined in `#include <MRCMesh/MRVector2.h>`.
typedef struct MR_Vector3d MR_Vector3d; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// quadratic form: f = x^T A x + c
/// Generated from class `MR::QuadraticForm2f`.
typedef struct MR_QuadraticForm2f MR_QuadraticForm2f;

/// quadratic form: f = x^T A x + c
/// Generated from class `MR::QuadraticForm2d`.
typedef struct MR_QuadraticForm2d MR_QuadraticForm2d;

/// quadratic form: f = x^T A x + c
/// Generated from class `MR::QuadraticForm3f`.
typedef struct MR_QuadraticForm3f MR_QuadraticForm3f;

/// quadratic form: f = x^T A x + c
/// Generated from class `MR::QuadraticForm3d`.
typedef struct MR_QuadraticForm3d MR_QuadraticForm3d;

/// Returns a pointer to a member variable of class `MR::QuadraticForm2f` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SymMatrix2f *MR_QuadraticForm2f_Get_A(const MR_QuadraticForm2f *_this);

/// Modifies a member variable of class `MR::QuadraticForm2f` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2f_Set_A(MR_QuadraticForm2f *_this, const MR_SymMatrix2f *value);

/// Returns a mutable pointer to a member variable of class `MR::QuadraticForm2f` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2f *MR_QuadraticForm2f_GetMutable_A(MR_QuadraticForm2f *_this);

/// Returns a pointer to a member variable of class `MR::QuadraticForm2f` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_QuadraticForm2f_Get_c(const MR_QuadraticForm2f *_this);

/// Modifies a member variable of class `MR::QuadraticForm2f` named `c`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2f_Set_c(MR_QuadraticForm2f *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::QuadraticForm2f` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_QuadraticForm2f_GetMutable_c(MR_QuadraticForm2f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm2f_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm2f *MR_QuadraticForm2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_QuadraticForm2f_DestroyArray()`.
/// Use `MR_QuadraticForm2f_OffsetMutablePtr()` and `MR_QuadraticForm2f_OffsetPtr()` to access the array elements.
MRC_API MR_QuadraticForm2f *MR_QuadraticForm2f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::QuadraticForm2f` elementwise.
/// Parameter `A` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm2f_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm2f *MR_QuadraticForm2f_ConstructFrom(const MR_SymMatrix2f *A, float c);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_QuadraticForm2f *MR_QuadraticForm2f_OffsetPtr(const MR_QuadraticForm2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_QuadraticForm2f *MR_QuadraticForm2f_OffsetMutablePtr(MR_QuadraticForm2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::QuadraticForm2f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm2f_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm2f *MR_QuadraticForm2f_ConstructFromAnother(const MR_QuadraticForm2f *_other);

/// Destroys a heap-allocated instance of `MR_QuadraticForm2f`. Does nothing if the pointer is null.
MRC_API void MR_QuadraticForm2f_Destroy(const MR_QuadraticForm2f *_this);

/// Destroys a heap-allocated array of `MR_QuadraticForm2f`. Does nothing if the pointer is null.
MRC_API void MR_QuadraticForm2f_DestroyArray(const MR_QuadraticForm2f *_this);

/// Generated from a method of class `MR::QuadraticForm2f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_QuadraticForm2f *MR_QuadraticForm2f_AssignFromAnother(MR_QuadraticForm2f *_this, const MR_QuadraticForm2f *_other);

/// evaluates the function at given x
/// Generated from a method of class `MR::QuadraticForm2f` named `eval`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API float MR_QuadraticForm2f_eval(const MR_QuadraticForm2f *_this, const MR_Vector2f *x);

/// adds to this squared distance to the origin point
/// Generated from a method of class `MR::QuadraticForm2f` named `addDistToOrigin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2f_addDistToOrigin(MR_QuadraticForm2f *_this, float weight);

/// adds to this squared distance to plane passing via origin with given unit normal
/// Generated from a method of class `MR::QuadraticForm2f` named `addDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `planeUnitNormal` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2f_addDistToPlane_1(MR_QuadraticForm2f *_this, const MR_Vector2f *planeUnitNormal);

/// Generated from a method of class `MR::QuadraticForm2f` named `addDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `planeUnitNormal` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2f_addDistToPlane_2(MR_QuadraticForm2f *_this, const MR_Vector2f *planeUnitNormal, float weight);

/// adds to this squared distance to line passing via origin with given unit direction
/// Generated from a method of class `MR::QuadraticForm2f` named `addDistToLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `lineUnitDir` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2f_addDistToLine_1(MR_QuadraticForm2f *_this, const MR_Vector2f *lineUnitDir);

/// Generated from a method of class `MR::QuadraticForm2f` named `addDistToLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `lineUnitDir` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2f_addDistToLine_2(MR_QuadraticForm2f *_this, const MR_Vector2f *lineUnitDir, float weight);

/// Returns a pointer to a member variable of class `MR::QuadraticForm2d` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SymMatrix2d *MR_QuadraticForm2d_Get_A(const MR_QuadraticForm2d *_this);

/// Modifies a member variable of class `MR::QuadraticForm2d` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2d_Set_A(MR_QuadraticForm2d *_this, const MR_SymMatrix2d *value);

/// Returns a mutable pointer to a member variable of class `MR::QuadraticForm2d` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2d *MR_QuadraticForm2d_GetMutable_A(MR_QuadraticForm2d *_this);

/// Returns a pointer to a member variable of class `MR::QuadraticForm2d` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_QuadraticForm2d_Get_c(const MR_QuadraticForm2d *_this);

/// Modifies a member variable of class `MR::QuadraticForm2d` named `c`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2d_Set_c(MR_QuadraticForm2d *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::QuadraticForm2d` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_QuadraticForm2d_GetMutable_c(MR_QuadraticForm2d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm2d_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm2d *MR_QuadraticForm2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_QuadraticForm2d_DestroyArray()`.
/// Use `MR_QuadraticForm2d_OffsetMutablePtr()` and `MR_QuadraticForm2d_OffsetPtr()` to access the array elements.
MRC_API MR_QuadraticForm2d *MR_QuadraticForm2d_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::QuadraticForm2d` elementwise.
/// Parameter `A` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm2d_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm2d *MR_QuadraticForm2d_ConstructFrom(const MR_SymMatrix2d *A, double c);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_QuadraticForm2d *MR_QuadraticForm2d_OffsetPtr(const MR_QuadraticForm2d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_QuadraticForm2d *MR_QuadraticForm2d_OffsetMutablePtr(MR_QuadraticForm2d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::QuadraticForm2d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm2d_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm2d *MR_QuadraticForm2d_ConstructFromAnother(const MR_QuadraticForm2d *_other);

/// Destroys a heap-allocated instance of `MR_QuadraticForm2d`. Does nothing if the pointer is null.
MRC_API void MR_QuadraticForm2d_Destroy(const MR_QuadraticForm2d *_this);

/// Destroys a heap-allocated array of `MR_QuadraticForm2d`. Does nothing if the pointer is null.
MRC_API void MR_QuadraticForm2d_DestroyArray(const MR_QuadraticForm2d *_this);

/// Generated from a method of class `MR::QuadraticForm2d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_QuadraticForm2d *MR_QuadraticForm2d_AssignFromAnother(MR_QuadraticForm2d *_this, const MR_QuadraticForm2d *_other);

/// evaluates the function at given x
/// Generated from a method of class `MR::QuadraticForm2d` named `eval`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API double MR_QuadraticForm2d_eval(const MR_QuadraticForm2d *_this, const MR_Vector2d *x);

/// adds to this squared distance to the origin point
/// Generated from a method of class `MR::QuadraticForm2d` named `addDistToOrigin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2d_addDistToOrigin(MR_QuadraticForm2d *_this, double weight);

/// adds to this squared distance to plane passing via origin with given unit normal
/// Generated from a method of class `MR::QuadraticForm2d` named `addDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `planeUnitNormal` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2d_addDistToPlane_1(MR_QuadraticForm2d *_this, const MR_Vector2d *planeUnitNormal);

/// Generated from a method of class `MR::QuadraticForm2d` named `addDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `planeUnitNormal` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2d_addDistToPlane_2(MR_QuadraticForm2d *_this, const MR_Vector2d *planeUnitNormal, double weight);

/// adds to this squared distance to line passing via origin with given unit direction
/// Generated from a method of class `MR::QuadraticForm2d` named `addDistToLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `lineUnitDir` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2d_addDistToLine_1(MR_QuadraticForm2d *_this, const MR_Vector2d *lineUnitDir);

/// Generated from a method of class `MR::QuadraticForm2d` named `addDistToLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `lineUnitDir` can not be null. It is a single object.
MRC_API void MR_QuadraticForm2d_addDistToLine_2(MR_QuadraticForm2d *_this, const MR_Vector2d *lineUnitDir, double weight);

/// Returns a pointer to a member variable of class `MR::QuadraticForm3f` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SymMatrix3f *MR_QuadraticForm3f_Get_A(const MR_QuadraticForm3f *_this);

/// Modifies a member variable of class `MR::QuadraticForm3f` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3f_Set_A(MR_QuadraticForm3f *_this, const MR_SymMatrix3f *value);

/// Returns a mutable pointer to a member variable of class `MR::QuadraticForm3f` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3f *MR_QuadraticForm3f_GetMutable_A(MR_QuadraticForm3f *_this);

/// Returns a pointer to a member variable of class `MR::QuadraticForm3f` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_QuadraticForm3f_Get_c(const MR_QuadraticForm3f *_this);

/// Modifies a member variable of class `MR::QuadraticForm3f` named `c`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3f_Set_c(MR_QuadraticForm3f *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::QuadraticForm3f` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_QuadraticForm3f_GetMutable_c(MR_QuadraticForm3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm3f_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm3f *MR_QuadraticForm3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_QuadraticForm3f_DestroyArray()`.
/// Use `MR_QuadraticForm3f_OffsetMutablePtr()` and `MR_QuadraticForm3f_OffsetPtr()` to access the array elements.
MRC_API MR_QuadraticForm3f *MR_QuadraticForm3f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::QuadraticForm3f` elementwise.
/// Parameter `A` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm3f_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm3f *MR_QuadraticForm3f_ConstructFrom(const MR_SymMatrix3f *A, float c);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_QuadraticForm3f *MR_QuadraticForm3f_OffsetPtr(const MR_QuadraticForm3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_QuadraticForm3f *MR_QuadraticForm3f_OffsetMutablePtr(MR_QuadraticForm3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::QuadraticForm3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm3f_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm3f *MR_QuadraticForm3f_ConstructFromAnother(const MR_QuadraticForm3f *_other);

/// Destroys a heap-allocated instance of `MR_QuadraticForm3f`. Does nothing if the pointer is null.
MRC_API void MR_QuadraticForm3f_Destroy(const MR_QuadraticForm3f *_this);

/// Destroys a heap-allocated array of `MR_QuadraticForm3f`. Does nothing if the pointer is null.
MRC_API void MR_QuadraticForm3f_DestroyArray(const MR_QuadraticForm3f *_this);

/// Generated from a method of class `MR::QuadraticForm3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_QuadraticForm3f *MR_QuadraticForm3f_AssignFromAnother(MR_QuadraticForm3f *_this, const MR_QuadraticForm3f *_other);

/// evaluates the function at given x
/// Generated from a method of class `MR::QuadraticForm3f` named `eval`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API float MR_QuadraticForm3f_eval(const MR_QuadraticForm3f *_this, const MR_Vector3f *x);

/// adds to this squared distance to the origin point
/// Generated from a method of class `MR::QuadraticForm3f` named `addDistToOrigin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3f_addDistToOrigin(MR_QuadraticForm3f *_this, float weight);

/// adds to this squared distance to plane passing via origin with given unit normal
/// Generated from a method of class `MR::QuadraticForm3f` named `addDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `planeUnitNormal` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3f_addDistToPlane_1(MR_QuadraticForm3f *_this, const MR_Vector3f *planeUnitNormal);

/// Generated from a method of class `MR::QuadraticForm3f` named `addDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `planeUnitNormal` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3f_addDistToPlane_2(MR_QuadraticForm3f *_this, const MR_Vector3f *planeUnitNormal, float weight);

/// adds to this squared distance to line passing via origin with given unit direction
/// Generated from a method of class `MR::QuadraticForm3f` named `addDistToLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `lineUnitDir` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3f_addDistToLine_1(MR_QuadraticForm3f *_this, const MR_Vector3f *lineUnitDir);

/// Generated from a method of class `MR::QuadraticForm3f` named `addDistToLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `lineUnitDir` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3f_addDistToLine_2(MR_QuadraticForm3f *_this, const MR_Vector3f *lineUnitDir, float weight);

/// Returns a pointer to a member variable of class `MR::QuadraticForm3d` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SymMatrix3d *MR_QuadraticForm3d_Get_A(const MR_QuadraticForm3d *_this);

/// Modifies a member variable of class `MR::QuadraticForm3d` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3d_Set_A(MR_QuadraticForm3d *_this, const MR_SymMatrix3d *value);

/// Returns a mutable pointer to a member variable of class `MR::QuadraticForm3d` named `A`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3d *MR_QuadraticForm3d_GetMutable_A(MR_QuadraticForm3d *_this);

/// Returns a pointer to a member variable of class `MR::QuadraticForm3d` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_QuadraticForm3d_Get_c(const MR_QuadraticForm3d *_this);

/// Modifies a member variable of class `MR::QuadraticForm3d` named `c`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3d_Set_c(MR_QuadraticForm3d *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::QuadraticForm3d` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_QuadraticForm3d_GetMutable_c(MR_QuadraticForm3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm3d_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm3d *MR_QuadraticForm3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_QuadraticForm3d_DestroyArray()`.
/// Use `MR_QuadraticForm3d_OffsetMutablePtr()` and `MR_QuadraticForm3d_OffsetPtr()` to access the array elements.
MRC_API MR_QuadraticForm3d *MR_QuadraticForm3d_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::QuadraticForm3d` elementwise.
/// Parameter `A` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm3d_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm3d *MR_QuadraticForm3d_ConstructFrom(const MR_SymMatrix3d *A, double c);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_QuadraticForm3d *MR_QuadraticForm3d_OffsetPtr(const MR_QuadraticForm3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_QuadraticForm3d *MR_QuadraticForm3d_OffsetMutablePtr(MR_QuadraticForm3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::QuadraticForm3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_QuadraticForm3d_Destroy()` to free it when you're done using it.
MRC_API MR_QuadraticForm3d *MR_QuadraticForm3d_ConstructFromAnother(const MR_QuadraticForm3d *_other);

/// Destroys a heap-allocated instance of `MR_QuadraticForm3d`. Does nothing if the pointer is null.
MRC_API void MR_QuadraticForm3d_Destroy(const MR_QuadraticForm3d *_this);

/// Destroys a heap-allocated array of `MR_QuadraticForm3d`. Does nothing if the pointer is null.
MRC_API void MR_QuadraticForm3d_DestroyArray(const MR_QuadraticForm3d *_this);

/// Generated from a method of class `MR::QuadraticForm3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_QuadraticForm3d *MR_QuadraticForm3d_AssignFromAnother(MR_QuadraticForm3d *_this, const MR_QuadraticForm3d *_other);

/// evaluates the function at given x
/// Generated from a method of class `MR::QuadraticForm3d` named `eval`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `x` can not be null. It is a single object.
MRC_API double MR_QuadraticForm3d_eval(const MR_QuadraticForm3d *_this, const MR_Vector3d *x);

/// adds to this squared distance to the origin point
/// Generated from a method of class `MR::QuadraticForm3d` named `addDistToOrigin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3d_addDistToOrigin(MR_QuadraticForm3d *_this, double weight);

/// adds to this squared distance to plane passing via origin with given unit normal
/// Generated from a method of class `MR::QuadraticForm3d` named `addDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `planeUnitNormal` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3d_addDistToPlane_1(MR_QuadraticForm3d *_this, const MR_Vector3d *planeUnitNormal);

/// Generated from a method of class `MR::QuadraticForm3d` named `addDistToPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `planeUnitNormal` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3d_addDistToPlane_2(MR_QuadraticForm3d *_this, const MR_Vector3d *planeUnitNormal, double weight);

/// adds to this squared distance to line passing via origin with given unit direction
/// Generated from a method of class `MR::QuadraticForm3d` named `addDistToLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `lineUnitDir` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3d_addDistToLine_1(MR_QuadraticForm3d *_this, const MR_Vector3d *lineUnitDir);

/// Generated from a method of class `MR::QuadraticForm3d` named `addDistToLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `lineUnitDir` can not be null. It is a single object.
MRC_API void MR_QuadraticForm3d_addDistToLine_2(MR_QuadraticForm3d *_this, const MR_Vector3d *lineUnitDir, double weight);

#ifdef __cplusplus
} // extern "C"
#endif
