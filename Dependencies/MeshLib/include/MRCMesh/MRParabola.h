// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Represents quadratic function f(x) = a*x*x + b*x + c
/// Generated from class `MR::Parabolaf`.
typedef struct MR_Parabolaf MR_Parabolaf;

/// Represents quadratic function f(x) = a*x*x + b*x + c
/// Generated from class `MR::Parabolad`.
typedef struct MR_Parabolad MR_Parabolad;

/// Returns a pointer to a member variable of class `MR::Parabolaf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Parabolaf_Get_a(const MR_Parabolaf *_this);

/// Modifies a member variable of class `MR::Parabolaf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Parabolaf_Set_a(MR_Parabolaf *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Parabolaf` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Parabolaf_GetMutable_a(MR_Parabolaf *_this);

/// Returns a pointer to a member variable of class `MR::Parabolaf` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Parabolaf_Get_b(const MR_Parabolaf *_this);

/// Modifies a member variable of class `MR::Parabolaf` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Parabolaf_Set_b(MR_Parabolaf *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Parabolaf` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Parabolaf_GetMutable_b(MR_Parabolaf *_this);

/// Returns a pointer to a member variable of class `MR::Parabolaf` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Parabolaf_Get_c(const MR_Parabolaf *_this);

/// Modifies a member variable of class `MR::Parabolaf` named `c`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Parabolaf_Set_c(MR_Parabolaf *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Parabolaf` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Parabolaf_GetMutable_c(MR_Parabolaf *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parabolaf_Destroy()` to free it when you're done using it.
MRC_API MR_Parabolaf *MR_Parabolaf_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Parabolaf_DestroyArray()`.
/// Use `MR_Parabolaf_OffsetMutablePtr()` and `MR_Parabolaf_OffsetPtr()` to access the array elements.
MRC_API MR_Parabolaf *MR_Parabolaf_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Parabolaf *MR_Parabolaf_OffsetPtr(const MR_Parabolaf *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Parabolaf *MR_Parabolaf_OffsetMutablePtr(MR_Parabolaf *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Parabolaf`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parabolaf_Destroy()` to free it when you're done using it.
MRC_API MR_Parabolaf *MR_Parabolaf_ConstructFromAnother(const MR_Parabolaf *_other);

/// Generated from a constructor of class `MR::Parabolaf`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parabolaf_Destroy()` to free it when you're done using it.
MRC_API MR_Parabolaf *MR_Parabolaf_Construct(float a, float b, float c);

/// Destroys a heap-allocated instance of `MR_Parabolaf`. Does nothing if the pointer is null.
MRC_API void MR_Parabolaf_Destroy(const MR_Parabolaf *_this);

/// Destroys a heap-allocated array of `MR_Parabolaf`. Does nothing if the pointer is null.
MRC_API void MR_Parabolaf_DestroyArray(const MR_Parabolaf *_this);

/// Generated from a method of class `MR::Parabolaf` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Parabolaf *MR_Parabolaf_AssignFromAnother(MR_Parabolaf *_this, const MR_Parabolaf *_other);

/// compute value of quadratic function at any x
/// Generated from a method of class `MR::Parabolaf` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Parabolaf_call(const MR_Parabolaf *_this, float x);

/// argument (x) where parabola reaches extremal value: minimum for a > 0, maximum for a < 0
/// Generated from a method of class `MR::Parabolaf` named `extremArg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Parabolaf_extremArg(const MR_Parabolaf *_this);

/// value (y) where parabola reaches extremal value: minimum for a > 0, maximum for a < 0
/// Generated from a method of class `MR::Parabolaf` named `extremVal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Parabolaf_extremVal(const MR_Parabolaf *_this);

/// Returns a pointer to a member variable of class `MR::Parabolad` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Parabolad_Get_a(const MR_Parabolad *_this);

/// Modifies a member variable of class `MR::Parabolad` named `a`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Parabolad_Set_a(MR_Parabolad *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::Parabolad` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Parabolad_GetMutable_a(MR_Parabolad *_this);

/// Returns a pointer to a member variable of class `MR::Parabolad` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Parabolad_Get_b(const MR_Parabolad *_this);

/// Modifies a member variable of class `MR::Parabolad` named `b`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Parabolad_Set_b(MR_Parabolad *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::Parabolad` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Parabolad_GetMutable_b(MR_Parabolad *_this);

/// Returns a pointer to a member variable of class `MR::Parabolad` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Parabolad_Get_c(const MR_Parabolad *_this);

/// Modifies a member variable of class `MR::Parabolad` named `c`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Parabolad_Set_c(MR_Parabolad *_this, double value);

/// Returns a mutable pointer to a member variable of class `MR::Parabolad` named `c`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Parabolad_GetMutable_c(MR_Parabolad *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parabolad_Destroy()` to free it when you're done using it.
MRC_API MR_Parabolad *MR_Parabolad_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Parabolad_DestroyArray()`.
/// Use `MR_Parabolad_OffsetMutablePtr()` and `MR_Parabolad_OffsetPtr()` to access the array elements.
MRC_API MR_Parabolad *MR_Parabolad_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Parabolad *MR_Parabolad_OffsetPtr(const MR_Parabolad *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Parabolad *MR_Parabolad_OffsetMutablePtr(MR_Parabolad *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Parabolad`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parabolad_Destroy()` to free it when you're done using it.
MRC_API MR_Parabolad *MR_Parabolad_ConstructFromAnother(const MR_Parabolad *_other);

/// Generated from a constructor of class `MR::Parabolad`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parabolad_Destroy()` to free it when you're done using it.
MRC_API MR_Parabolad *MR_Parabolad_Construct(double a, double b, double c);

/// Destroys a heap-allocated instance of `MR_Parabolad`. Does nothing if the pointer is null.
MRC_API void MR_Parabolad_Destroy(const MR_Parabolad *_this);

/// Destroys a heap-allocated array of `MR_Parabolad`. Does nothing if the pointer is null.
MRC_API void MR_Parabolad_DestroyArray(const MR_Parabolad *_this);

/// Generated from a method of class `MR::Parabolad` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Parabolad *MR_Parabolad_AssignFromAnother(MR_Parabolad *_this, const MR_Parabolad *_other);

/// compute value of quadratic function at any x
/// Generated from a method of class `MR::Parabolad` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Parabolad_call(const MR_Parabolad *_this, double x);

/// argument (x) where parabola reaches extremal value: minimum for a > 0, maximum for a < 0
/// Generated from a method of class `MR::Parabolad` named `extremArg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Parabolad_extremArg(const MR_Parabolad *_this);

/// value (y) where parabola reaches extremal value: minimum for a > 0, maximum for a < 0
/// Generated from a method of class `MR::Parabolad` named `extremVal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Parabolad_extremVal(const MR_Parabolad *_this);

#ifdef __cplusplus
} // extern "C"
#endif
