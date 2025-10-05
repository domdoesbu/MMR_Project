// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// stores useful precomputed values for presented direction vector
/// \details allows to avoid repeatable computations during intersection finding
/// Generated from class `MR::IntersectionPrecomputes2<float>`.
typedef struct MR_IntersectionPrecomputes2_float MR_IntersectionPrecomputes2_float;

/// stores useful precomputed values for presented direction vector
/// \details allows to avoid repeatable computations during intersection finding
/// Generated from class `MR::IntersectionPrecomputes2<double>`.
typedef struct MR_IntersectionPrecomputes2_double MR_IntersectionPrecomputes2_double;

// {1 / dir}
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `invDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_IntersectionPrecomputes2_float_Get_invDir(const MR_IntersectionPrecomputes2_float *_this);

// {1 / dir}
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<float>` named `invDir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_float_Set_invDir(MR_IntersectionPrecomputes2_float *_this, MR_Vector2f value);

// {1 / dir}
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `invDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_IntersectionPrecomputes2_float_GetMutable_invDir(MR_IntersectionPrecomputes2_float *_this);

// [0]max, [1]next, [2]next-next
// f.e. {1,2} => {1,0}
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `maxDimIdxY`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes2_float_Get_maxDimIdxY(const MR_IntersectionPrecomputes2_float *_this);

// [0]max, [1]next, [2]next-next
// f.e. {1,2} => {1,0}
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<float>` named `maxDimIdxY`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_float_Set_maxDimIdxY(MR_IntersectionPrecomputes2_float *_this, int32_t value);

// [0]max, [1]next, [2]next-next
// f.e. {1,2} => {1,0}
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `maxDimIdxY`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes2_float_GetMutable_maxDimIdxY(MR_IntersectionPrecomputes2_float *_this);

/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes2_float_Get_idxX(const MR_IntersectionPrecomputes2_float *_this);

/// Modifies a member variable of class `MR::IntersectionPrecomputes2<float>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_float_Set_idxX(MR_IntersectionPrecomputes2_float *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes2_float_GetMutable_idxX(MR_IntersectionPrecomputes2_float *_this);

/// stores signs of direction vector;
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `sign`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_IntersectionPrecomputes2_float_Get_sign(const MR_IntersectionPrecomputes2_float *_this);

/// stores signs of direction vector;
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<float>` named `sign`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_float_Set_sign(MR_IntersectionPrecomputes2_float *_this, MR_Vector2i value);

/// stores signs of direction vector;
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `sign`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_IntersectionPrecomputes2_float_GetMutable_sign(MR_IntersectionPrecomputes2_float *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_IntersectionPrecomputes2_float_Get_Sx(const MR_IntersectionPrecomputes2_float *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<float>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_float_Set_Sx(MR_IntersectionPrecomputes2_float *_this, float value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_IntersectionPrecomputes2_float_GetMutable_Sx(MR_IntersectionPrecomputes2_float *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_IntersectionPrecomputes2_float_Get_Sy(const MR_IntersectionPrecomputes2_float *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<float>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_float_Set_Sy(MR_IntersectionPrecomputes2_float *_this, float value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<float>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_IntersectionPrecomputes2_float_GetMutable_Sy(MR_IntersectionPrecomputes2_float *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes2_float_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes2_float *MR_IntersectionPrecomputes2_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IntersectionPrecomputes2_float_DestroyArray()`.
/// Use `MR_IntersectionPrecomputes2_float_OffsetMutablePtr()` and `MR_IntersectionPrecomputes2_float_OffsetPtr()` to access the array elements.
MRC_API MR_IntersectionPrecomputes2_float *MR_IntersectionPrecomputes2_float_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IntersectionPrecomputes2_float *MR_IntersectionPrecomputes2_float_OffsetPtr(const MR_IntersectionPrecomputes2_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IntersectionPrecomputes2_float *MR_IntersectionPrecomputes2_float_OffsetMutablePtr(MR_IntersectionPrecomputes2_float *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IntersectionPrecomputes2<float>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes2_float_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes2_float *MR_IntersectionPrecomputes2_float_ConstructFromAnother(const MR_IntersectionPrecomputes2_float *_other);

/// Generated from a constructor of class `MR::IntersectionPrecomputes2<float>`.
/// Parameter `dir` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes2_float_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes2_float *MR_IntersectionPrecomputes2_float_Construct(const MR_Vector2f *dir);

/// Destroys a heap-allocated instance of `MR_IntersectionPrecomputes2_float`. Does nothing if the pointer is null.
MRC_API void MR_IntersectionPrecomputes2_float_Destroy(const MR_IntersectionPrecomputes2_float *_this);

/// Destroys a heap-allocated array of `MR_IntersectionPrecomputes2_float`. Does nothing if the pointer is null.
MRC_API void MR_IntersectionPrecomputes2_float_DestroyArray(const MR_IntersectionPrecomputes2_float *_this);

/// Generated from a method of class `MR::IntersectionPrecomputes2<float>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IntersectionPrecomputes2_float *MR_IntersectionPrecomputes2_float_AssignFromAnother(MR_IntersectionPrecomputes2_float *_this, const MR_IntersectionPrecomputes2_float *_other);

// {1 / dir}
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `invDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_IntersectionPrecomputes2_double_Get_invDir(const MR_IntersectionPrecomputes2_double *_this);

// {1 / dir}
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<double>` named `invDir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_double_Set_invDir(MR_IntersectionPrecomputes2_double *_this, MR_Vector2d value);

// {1 / dir}
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `invDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_IntersectionPrecomputes2_double_GetMutable_invDir(MR_IntersectionPrecomputes2_double *_this);

// [0]max, [1]next, [2]next-next
// f.e. {1,2} => {1,0}
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `maxDimIdxY`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes2_double_Get_maxDimIdxY(const MR_IntersectionPrecomputes2_double *_this);

// [0]max, [1]next, [2]next-next
// f.e. {1,2} => {1,0}
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<double>` named `maxDimIdxY`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_double_Set_maxDimIdxY(MR_IntersectionPrecomputes2_double *_this, int32_t value);

// [0]max, [1]next, [2]next-next
// f.e. {1,2} => {1,0}
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `maxDimIdxY`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes2_double_GetMutable_maxDimIdxY(MR_IntersectionPrecomputes2_double *_this);

/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes2_double_Get_idxX(const MR_IntersectionPrecomputes2_double *_this);

/// Modifies a member variable of class `MR::IntersectionPrecomputes2<double>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_double_Set_idxX(MR_IntersectionPrecomputes2_double *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes2_double_GetMutable_idxX(MR_IntersectionPrecomputes2_double *_this);

/// stores signs of direction vector;
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `sign`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_IntersectionPrecomputes2_double_Get_sign(const MR_IntersectionPrecomputes2_double *_this);

/// stores signs of direction vector;
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<double>` named `sign`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_double_Set_sign(MR_IntersectionPrecomputes2_double *_this, MR_Vector2i value);

/// stores signs of direction vector;
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `sign`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_IntersectionPrecomputes2_double_GetMutable_sign(MR_IntersectionPrecomputes2_double *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_IntersectionPrecomputes2_double_Get_Sx(const MR_IntersectionPrecomputes2_double *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<double>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_double_Set_Sx(MR_IntersectionPrecomputes2_double *_this, double value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_IntersectionPrecomputes2_double_GetMutable_Sx(MR_IntersectionPrecomputes2_double *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_IntersectionPrecomputes2_double_Get_Sy(const MR_IntersectionPrecomputes2_double *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes2<double>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes2_double_Set_Sy(MR_IntersectionPrecomputes2_double *_this, double value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes2<double>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_IntersectionPrecomputes2_double_GetMutable_Sy(MR_IntersectionPrecomputes2_double *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes2_double_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes2_double *MR_IntersectionPrecomputes2_double_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IntersectionPrecomputes2_double_DestroyArray()`.
/// Use `MR_IntersectionPrecomputes2_double_OffsetMutablePtr()` and `MR_IntersectionPrecomputes2_double_OffsetPtr()` to access the array elements.
MRC_API MR_IntersectionPrecomputes2_double *MR_IntersectionPrecomputes2_double_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IntersectionPrecomputes2_double *MR_IntersectionPrecomputes2_double_OffsetPtr(const MR_IntersectionPrecomputes2_double *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IntersectionPrecomputes2_double *MR_IntersectionPrecomputes2_double_OffsetMutablePtr(MR_IntersectionPrecomputes2_double *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IntersectionPrecomputes2<double>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes2_double_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes2_double *MR_IntersectionPrecomputes2_double_ConstructFromAnother(const MR_IntersectionPrecomputes2_double *_other);

/// Generated from a constructor of class `MR::IntersectionPrecomputes2<double>`.
/// Parameter `dir` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes2_double_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes2_double *MR_IntersectionPrecomputes2_double_Construct(const MR_Vector2d *dir);

/// Destroys a heap-allocated instance of `MR_IntersectionPrecomputes2_double`. Does nothing if the pointer is null.
MRC_API void MR_IntersectionPrecomputes2_double_Destroy(const MR_IntersectionPrecomputes2_double *_this);

/// Destroys a heap-allocated array of `MR_IntersectionPrecomputes2_double`. Does nothing if the pointer is null.
MRC_API void MR_IntersectionPrecomputes2_double_DestroyArray(const MR_IntersectionPrecomputes2_double *_this);

/// Generated from a method of class `MR::IntersectionPrecomputes2<double>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IntersectionPrecomputes2_double *MR_IntersectionPrecomputes2_double_AssignFromAnother(MR_IntersectionPrecomputes2_double *_this, const MR_IntersectionPrecomputes2_double *_other);

#ifdef __cplusplus
} // extern "C"
#endif
