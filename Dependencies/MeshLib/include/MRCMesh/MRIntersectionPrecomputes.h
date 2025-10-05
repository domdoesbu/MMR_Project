// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// stores useful precomputed values for presented direction vector
/// \details allows to avoid repeatable computations during intersection finding
/// Generated from class `MR::IntersectionPrecomputes<double>`.
typedef struct MR_IntersectionPrecomputes_double MR_IntersectionPrecomputes_double;

/// Generated from class `MR::IntersectionPrecomputes<float>`.
typedef struct MR_IntersectionPrecomputes_float MR_IntersectionPrecomputes_float;

// {1 / dir}
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `invDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_IntersectionPrecomputes_double_Get_invDir(const MR_IntersectionPrecomputes_double *_this);

// {1 / dir}
/// Modifies a member variable of class `MR::IntersectionPrecomputes<double>` named `invDir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_double_Set_invDir(MR_IntersectionPrecomputes_double *_this, MR_Vector3d value);

// {1 / dir}
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `invDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_IntersectionPrecomputes_double_GetMutable_invDir(MR_IntersectionPrecomputes_double *_this);

// [0]max, [1]next, [2]next-next
// f.e. {1,2,-3} => {2,1,0}
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `maxDimIdxZ`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes_double_Get_maxDimIdxZ(const MR_IntersectionPrecomputes_double *_this);

// [0]max, [1]next, [2]next-next
// f.e. {1,2,-3} => {2,1,0}
/// Modifies a member variable of class `MR::IntersectionPrecomputes<double>` named `maxDimIdxZ`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_double_Set_maxDimIdxZ(MR_IntersectionPrecomputes_double *_this, int32_t value);

// [0]max, [1]next, [2]next-next
// f.e. {1,2,-3} => {2,1,0}
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `maxDimIdxZ`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes_double_GetMutable_maxDimIdxZ(MR_IntersectionPrecomputes_double *_this);

/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes_double_Get_idxX(const MR_IntersectionPrecomputes_double *_this);

/// Modifies a member variable of class `MR::IntersectionPrecomputes<double>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_double_Set_idxX(MR_IntersectionPrecomputes_double *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes_double_GetMutable_idxX(MR_IntersectionPrecomputes_double *_this);

/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `idxY`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes_double_Get_idxY(const MR_IntersectionPrecomputes_double *_this);

/// Modifies a member variable of class `MR::IntersectionPrecomputes<double>` named `idxY`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_double_Set_idxY(MR_IntersectionPrecomputes_double *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `idxY`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes_double_GetMutable_idxY(MR_IntersectionPrecomputes_double *_this);

/// stores signs of direction vector;
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `sign`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_IntersectionPrecomputes_double_Get_sign(const MR_IntersectionPrecomputes_double *_this);

/// stores signs of direction vector;
/// Modifies a member variable of class `MR::IntersectionPrecomputes<double>` named `sign`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_double_Set_sign(MR_IntersectionPrecomputes_double *_this, MR_Vector3i value);

/// stores signs of direction vector;
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `sign`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_IntersectionPrecomputes_double_GetMutable_sign(MR_IntersectionPrecomputes_double *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_IntersectionPrecomputes_double_Get_Sx(const MR_IntersectionPrecomputes_double *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes<double>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_double_Set_Sx(MR_IntersectionPrecomputes_double *_this, double value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_IntersectionPrecomputes_double_GetMutable_Sx(MR_IntersectionPrecomputes_double *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_IntersectionPrecomputes_double_Get_Sy(const MR_IntersectionPrecomputes_double *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes<double>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_double_Set_Sy(MR_IntersectionPrecomputes_double *_this, double value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_IntersectionPrecomputes_double_GetMutable_Sy(MR_IntersectionPrecomputes_double *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `Sz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_IntersectionPrecomputes_double_Get_Sz(const MR_IntersectionPrecomputes_double *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes<double>` named `Sz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_double_Set_Sz(MR_IntersectionPrecomputes_double *_this, double value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<double>` named `Sz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_IntersectionPrecomputes_double_GetMutable_Sz(MR_IntersectionPrecomputes_double *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes_double_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes_double *MR_IntersectionPrecomputes_double_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IntersectionPrecomputes_double_DestroyArray()`.
/// Use `MR_IntersectionPrecomputes_double_OffsetMutablePtr()` and `MR_IntersectionPrecomputes_double_OffsetPtr()` to access the array elements.
MRC_API MR_IntersectionPrecomputes_double *MR_IntersectionPrecomputes_double_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IntersectionPrecomputes_double *MR_IntersectionPrecomputes_double_OffsetPtr(const MR_IntersectionPrecomputes_double *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IntersectionPrecomputes_double *MR_IntersectionPrecomputes_double_OffsetMutablePtr(MR_IntersectionPrecomputes_double *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IntersectionPrecomputes<double>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes_double_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes_double *MR_IntersectionPrecomputes_double_ConstructFromAnother(const MR_IntersectionPrecomputes_double *_other);

/// Generated from a constructor of class `MR::IntersectionPrecomputes<double>`.
/// Parameter `dir` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes_double_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes_double *MR_IntersectionPrecomputes_double_Construct(const MR_Vector3d *dir);

/// Destroys a heap-allocated instance of `MR_IntersectionPrecomputes_double`. Does nothing if the pointer is null.
MRC_API void MR_IntersectionPrecomputes_double_Destroy(const MR_IntersectionPrecomputes_double *_this);

/// Destroys a heap-allocated array of `MR_IntersectionPrecomputes_double`. Does nothing if the pointer is null.
MRC_API void MR_IntersectionPrecomputes_double_DestroyArray(const MR_IntersectionPrecomputes_double *_this);

/// Generated from a method of class `MR::IntersectionPrecomputes<double>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IntersectionPrecomputes_double *MR_IntersectionPrecomputes_double_AssignFromAnother(MR_IntersectionPrecomputes_double *_this, const MR_IntersectionPrecomputes_double *_other);

/**
* \brief finds index of maximum axis and stores it into dimZ
* \details http://jcgt.org/published/0002/01/05/paper.pdf
* Example input: dir = (1,1,-2). Result: dimZ = 2, dimX = 1, dimY = 0.
* \param[out] dimX are filled by right-hand rule from dimZ
* \param[out] dimY are filled by right-hand rule from dimZ
* \param[out] dimZ index of maximum axis
*/
/// Generated from function `MR::findMaxVectorDim<float>`.
/// Parameter `dimX` can not be null. It is a single object.
/// Parameter `dimY` can not be null. It is a single object.
/// Parameter `dimZ` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
MRC_API void MR_findMaxVectorDim_float(int32_t *dimX, int32_t *dimY, int32_t *dimZ, const MR_Vector3f *dir);

/**
* \brief finds index of maximum axis and stores it into dimZ
* \details http://jcgt.org/published/0002/01/05/paper.pdf
* Example input: dir = (1,1,-2). Result: dimZ = 2, dimX = 1, dimY = 0.
* \param[out] dimX are filled by right-hand rule from dimZ
* \param[out] dimY are filled by right-hand rule from dimZ
* \param[out] dimZ index of maximum axis
*/
/// Generated from function `MR::findMaxVectorDim<double>`.
/// Parameter `dimX` can not be null. It is a single object.
/// Parameter `dimY` can not be null. It is a single object.
/// Parameter `dimZ` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
MRC_API void MR_findMaxVectorDim_double(int32_t *dimX, int32_t *dimY, int32_t *dimZ, const MR_Vector3d *dir);

// [0]max, [1]next, [2]next-next
// f.e. {1,2,-3} => {2,1,0}
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `maxDimIdxZ`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes_float_Get_maxDimIdxZ(const MR_IntersectionPrecomputes_float *_this);

// [0]max, [1]next, [2]next-next
// f.e. {1,2,-3} => {2,1,0}
/// Modifies a member variable of class `MR::IntersectionPrecomputes<float>` named `maxDimIdxZ`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_float_Set_maxDimIdxZ(MR_IntersectionPrecomputes_float *_this, int32_t value);

// [0]max, [1]next, [2]next-next
// f.e. {1,2,-3} => {2,1,0}
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `maxDimIdxZ`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes_float_GetMutable_maxDimIdxZ(MR_IntersectionPrecomputes_float *_this);

/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes_float_Get_idxX(const MR_IntersectionPrecomputes_float *_this);

/// Modifies a member variable of class `MR::IntersectionPrecomputes<float>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_float_Set_idxX(MR_IntersectionPrecomputes_float *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `idxX`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes_float_GetMutable_idxX(MR_IntersectionPrecomputes_float *_this);

/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `idxY`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_IntersectionPrecomputes_float_Get_idxY(const MR_IntersectionPrecomputes_float *_this);

/// Modifies a member variable of class `MR::IntersectionPrecomputes<float>` named `idxY`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_float_Set_idxY(MR_IntersectionPrecomputes_float *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `idxY`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_IntersectionPrecomputes_float_GetMutable_idxY(MR_IntersectionPrecomputes_float *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_IntersectionPrecomputes_float_Get_Sx(const MR_IntersectionPrecomputes_float *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes<float>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_float_Set_Sx(MR_IntersectionPrecomputes_float *_this, float value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `Sx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_IntersectionPrecomputes_float_GetMutable_Sx(MR_IntersectionPrecomputes_float *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_IntersectionPrecomputes_float_Get_Sy(const MR_IntersectionPrecomputes_float *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes<float>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_float_Set_Sy(MR_IntersectionPrecomputes_float *_this, float value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `Sy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_IntersectionPrecomputes_float_GetMutable_Sy(MR_IntersectionPrecomputes_float *_this);

/// precomputed factors
/// Returns a pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `Sz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_IntersectionPrecomputes_float_Get_Sz(const MR_IntersectionPrecomputes_float *_this);

/// precomputed factors
/// Modifies a member variable of class `MR::IntersectionPrecomputes<float>` named `Sz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IntersectionPrecomputes_float_Set_Sz(MR_IntersectionPrecomputes_float *_this, float value);

/// precomputed factors
/// Returns a mutable pointer to a member variable of class `MR::IntersectionPrecomputes<float>` named `Sz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_IntersectionPrecomputes_float_GetMutable_Sz(MR_IntersectionPrecomputes_float *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes_float_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes_float *MR_IntersectionPrecomputes_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IntersectionPrecomputes_float_DestroyArray()`.
/// Use `MR_IntersectionPrecomputes_float_OffsetMutablePtr()` and `MR_IntersectionPrecomputes_float_OffsetPtr()` to access the array elements.
MRC_API MR_IntersectionPrecomputes_float *MR_IntersectionPrecomputes_float_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IntersectionPrecomputes_float *MR_IntersectionPrecomputes_float_OffsetPtr(const MR_IntersectionPrecomputes_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IntersectionPrecomputes_float *MR_IntersectionPrecomputes_float_OffsetMutablePtr(MR_IntersectionPrecomputes_float *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IntersectionPrecomputes<float>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes_float_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes_float *MR_IntersectionPrecomputes_float_ConstructFromAnother(const MR_IntersectionPrecomputes_float *_other);

/// Generated from a constructor of class `MR::IntersectionPrecomputes<float>`.
/// Parameter `dir` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IntersectionPrecomputes_float_Destroy()` to free it when you're done using it.
MRC_API MR_IntersectionPrecomputes_float *MR_IntersectionPrecomputes_float_Construct(const MR_Vector3f *dir);

/// Destroys a heap-allocated instance of `MR_IntersectionPrecomputes_float`. Does nothing if the pointer is null.
MRC_API void MR_IntersectionPrecomputes_float_Destroy(const MR_IntersectionPrecomputes_float *_this);

/// Destroys a heap-allocated array of `MR_IntersectionPrecomputes_float`. Does nothing if the pointer is null.
MRC_API void MR_IntersectionPrecomputes_float_DestroyArray(const MR_IntersectionPrecomputes_float *_this);

/// Generated from a method of class `MR::IntersectionPrecomputes<float>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IntersectionPrecomputes_float *MR_IntersectionPrecomputes_float_AssignFromAnother(MR_IntersectionPrecomputes_float *_this, const MR_IntersectionPrecomputes_float *_other);

#ifdef __cplusplus
} // extern "C"
#endif
