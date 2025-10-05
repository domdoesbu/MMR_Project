// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMesh/MRMatrix3.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMesh/MRVector4.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// arbitrary 4x4 matrix
/// Generated from class `MR::Matrix4b`.
typedef struct MR_Matrix4b
{
    /// rows, identity matrix by default
    MR_Vector4b x;
    MR_Vector4b y;
    MR_Vector4b z;
    MR_Vector4b w;
} MR_Matrix4b;

/// arbitrary 4x4 matrix
/// Generated from class `MR::Matrix4i`.
typedef struct MR_Matrix4i
{
    /// rows, identity matrix by default
    MR_Vector4i x;
    MR_Vector4i y;
    MR_Vector4i z;
    MR_Vector4i w;
} MR_Matrix4i;

/// arbitrary 4x4 matrix
/// Generated from class `MR::Matrix4i64`.
typedef struct MR_Matrix4i64
{
    /// rows, identity matrix by default
    MR_Vector4i64 x;
    MR_Vector4i64 y;
    MR_Vector4i64 z;
    MR_Vector4i64 w;
} MR_Matrix4i64;

/// arbitrary 4x4 matrix
/// Generated from class `MR::Matrix4f`.
typedef struct MR_Matrix4f
{
    /// rows, identity matrix by default
    MR_Vector4f x;
    MR_Vector4f y;
    MR_Vector4f z;
    MR_Vector4f w;
} MR_Matrix4f;

/// arbitrary 4x4 matrix
/// Generated from class `MR::Matrix4d`.
typedef struct MR_Matrix4d
{
    /// rows, identity matrix by default
    MR_Vector4d x;
    MR_Vector4d y;
    MR_Vector4d z;
    MR_Vector4d w;
} MR_Matrix4d;

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix4b MR_Matrix4b_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix4b_DestroyArray()`.
/// Use `MR_Matrix4b_OffsetMutablePtr()` and `MR_Matrix4b_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix4b *MR_Matrix4b_DefaultConstructArray(size_t num_elems);

/// initializes matrix from 4 row-vectors
/// Generated from a constructor of class `MR::Matrix4b`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
/// Parameter `w` can not be null. It is a single object.
MRC_API MR_Matrix4b MR_Matrix4b_Construct_4(const MR_Vector4b *x, const MR_Vector4b *y, const MR_Vector4b *z, const MR_Vector4b *w);

/// construct from rotation matrix and translation vector
/// Generated from a constructor of class `MR::Matrix4b`.
/// Parameter `r` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API MR_Matrix4b MR_Matrix4b_Construct_2(const MR_Matrix3b *r, const MR_Vector3b *t);

/// Generated from a method of class `MR::Matrix4b` named `zero`.
MRC_API MR_Matrix4b MR_Matrix4b_zero(void);

/// Generated from a method of class `MR::Matrix4b` named `identity`.
MRC_API MR_Matrix4b MR_Matrix4b_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix4b` named `scale`.
MRC_API MR_Matrix4b MR_Matrix4b_scale(bool s);

/// element access
/// Generated from a method of class `MR::Matrix4b` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_Matrix4b_call_const(const MR_Matrix4b *_this, int32_t row, int32_t col);

/// Generated from a method of class `MR::Matrix4b` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_Matrix4b_call(MR_Matrix4b *_this, int32_t row, int32_t col);

/// row access
/// Generated from a method of class `MR::Matrix4b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4b *MR_Matrix4b_index_const(const MR_Matrix4b *_this, int32_t row);

/// Generated from a method of class `MR::Matrix4b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4b *MR_Matrix4b_index(MR_Matrix4b *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix4b` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector4b MR_Matrix4b_col(const MR_Matrix4b *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix4b` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Matrix4b_trace(const MR_Matrix4b *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix4b` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Matrix4b_normSq(const MR_Matrix4b *_this);

/// Generated from a method of class `MR::Matrix4b` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix4b_norm(const MR_Matrix4b *_this);

/// computes submatrix of the matrix with excluded i-th row and j-th column
/// Generated from a method of class `MR::Matrix4b` named `submatrix3`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3b MR_Matrix4b_submatrix3(const MR_Matrix4b *_this, int32_t i, int32_t j);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix4b` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Matrix4b_det(const MR_Matrix4b *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix4b` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix4b MR_Matrix4b_transposed(const MR_Matrix4b *_this);

/// Generated from a method of class `MR::Matrix4b` named `getRotation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3b MR_Matrix4b_getRotation(const MR_Matrix4b *_this);

/// Generated from a method of class `MR::Matrix4b` named `setRotation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rot` can not be null. It is a single object.
MRC_API void MR_Matrix4b_setRotation(MR_Matrix4b *_this, const MR_Matrix3b *rot);

/// Generated from a method of class `MR::Matrix4b` named `getTranslation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Matrix4b_getTranslation(const MR_Matrix4b *_this);

/// Generated from a method of class `MR::Matrix4b` named `setTranslation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API void MR_Matrix4b_setTranslation(MR_Matrix4b *_this, const MR_Vector3b *t);

/// Generated from a method of class `MR::Matrix4b` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool *MR_Matrix4b_data(MR_Matrix4b *_this);

/// Generated from a method of class `MR::Matrix4b` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const bool *MR_Matrix4b_data_const(const MR_Matrix4b *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix4b(const MR_Matrix4b *a, const MR_Matrix4b *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix4b(const MR_Matrix4b *a, const MR_Matrix4b *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_add_MR_Matrix4b(const MR_Matrix4b *a, const MR_Matrix4b *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_sub_MR_Matrix4b(const MR_Matrix4b *a, const MR_Matrix4b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_mul_bool_MR_Matrix4b(bool a, const MR_Matrix4b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_mul_MR_Matrix4b_bool(const MR_Matrix4b *b, bool a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix4i MR_div_MR_Matrix4b_bool(MR_Matrix4b b, bool a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4b *MR_add_assign_MR_Matrix4b(MR_Matrix4b *a, const MR_Matrix4b *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4b *MR_sub_assign_MR_Matrix4b(MR_Matrix4b *a, const MR_Matrix4b *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4b *MR_mul_assign_MR_Matrix4b_bool(MR_Matrix4b *a, bool b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4b *MR_div_assign_MR_Matrix4b_bool(MR_Matrix4b *a, bool b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_mul_MR_Matrix4b_MR_Vector4b(const MR_Matrix4b *a, const MR_Vector4b *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_mul_MR_Matrix4b(const MR_Matrix4b *a, const MR_Matrix4b *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix4i MR_Matrix4i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix4i_DestroyArray()`.
/// Use `MR_Matrix4i_OffsetMutablePtr()` and `MR_Matrix4i_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix4i *MR_Matrix4i_DefaultConstructArray(size_t num_elems);

/// initializes matrix from 4 row-vectors
/// Generated from a constructor of class `MR::Matrix4i`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
/// Parameter `w` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_Matrix4i_Construct_4(const MR_Vector4i *x, const MR_Vector4i *y, const MR_Vector4i *z, const MR_Vector4i *w);

/// construct from rotation matrix and translation vector
/// Generated from a constructor of class `MR::Matrix4i`.
/// Parameter `r` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_Matrix4i_Construct_2(const MR_Matrix3i *r, const MR_Vector3i *t);

/// Generated from a method of class `MR::Matrix4i` named `zero`.
MRC_API MR_Matrix4i MR_Matrix4i_zero(void);

/// Generated from a method of class `MR::Matrix4i` named `identity`.
MRC_API MR_Matrix4i MR_Matrix4i_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix4i` named `scale`.
MRC_API MR_Matrix4i MR_Matrix4i_scale(int32_t s);

/// element access
/// Generated from a method of class `MR::Matrix4i` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Matrix4i_call_const(const MR_Matrix4i *_this, int32_t row, int32_t col);

/// Generated from a method of class `MR::Matrix4i` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Matrix4i_call(MR_Matrix4i *_this, int32_t row, int32_t col);

/// row access
/// Generated from a method of class `MR::Matrix4i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4i *MR_Matrix4i_index_const(const MR_Matrix4i *_this, int32_t row);

/// Generated from a method of class `MR::Matrix4i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i *MR_Matrix4i_index(MR_Matrix4i *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix4i` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector4i MR_Matrix4i_col(const MR_Matrix4i *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix4i` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Matrix4i_trace(const MR_Matrix4i *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix4i` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Matrix4i_normSq(const MR_Matrix4i *_this);

/// Generated from a method of class `MR::Matrix4i` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix4i_norm(const MR_Matrix4i *_this);

/// computes submatrix of the matrix with excluded i-th row and j-th column
/// Generated from a method of class `MR::Matrix4i` named `submatrix3`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_Matrix4i_submatrix3(const MR_Matrix4i *_this, int32_t i, int32_t j);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix4i` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Matrix4i_det(const MR_Matrix4i *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix4i` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_Matrix4i_transposed(const MR_Matrix4i *_this);

/// Generated from a method of class `MR::Matrix4i` named `getRotation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_Matrix4i_getRotation(const MR_Matrix4i *_this);

/// Generated from a method of class `MR::Matrix4i` named `setRotation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rot` can not be null. It is a single object.
MRC_API void MR_Matrix4i_setRotation(MR_Matrix4i *_this, const MR_Matrix3i *rot);

/// Generated from a method of class `MR::Matrix4i` named `getTranslation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Matrix4i_getTranslation(const MR_Matrix4i *_this);

/// Generated from a method of class `MR::Matrix4i` named `setTranslation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API void MR_Matrix4i_setTranslation(MR_Matrix4i *_this, const MR_Vector3i *t);

/// Generated from a method of class `MR::Matrix4i` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t *MR_Matrix4i_data(MR_Matrix4i *_this);

/// Generated from a method of class `MR::Matrix4i` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const int32_t *MR_Matrix4i_data_const(const MR_Matrix4i *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix4i(const MR_Matrix4i *a, const MR_Matrix4i *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix4i(const MR_Matrix4i *a, const MR_Matrix4i *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_add_MR_Matrix4i(const MR_Matrix4i *a, const MR_Matrix4i *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_sub_MR_Matrix4i(const MR_Matrix4i *a, const MR_Matrix4i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_mul_int32_t_MR_Matrix4i(int32_t a, const MR_Matrix4i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_mul_MR_Matrix4i_int32_t(const MR_Matrix4i *b, int32_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix4i MR_div_MR_Matrix4i_int32_t(MR_Matrix4i b, int32_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4i *MR_add_assign_MR_Matrix4i(MR_Matrix4i *a, const MR_Matrix4i *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4i *MR_sub_assign_MR_Matrix4i(MR_Matrix4i *a, const MR_Matrix4i *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4i *MR_mul_assign_MR_Matrix4i_int32_t(MR_Matrix4i *a, int32_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4i *MR_div_assign_MR_Matrix4i_int32_t(MR_Matrix4i *a, int32_t b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_mul_MR_Matrix4i_MR_Vector4i(const MR_Matrix4i *a, const MR_Vector4i *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i MR_mul_MR_Matrix4i(const MR_Matrix4i *a, const MR_Matrix4i *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix4i64 MR_Matrix4i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix4i64_DestroyArray()`.
/// Use `MR_Matrix4i64_OffsetMutablePtr()` and `MR_Matrix4i64_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix4i64 *MR_Matrix4i64_DefaultConstructArray(size_t num_elems);

/// initializes matrix from 4 row-vectors
/// Generated from a constructor of class `MR::Matrix4i64`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
/// Parameter `w` can not be null. It is a single object.
MRC_API MR_Matrix4i64 MR_Matrix4i64_Construct_4(const MR_Vector4i64 *x, const MR_Vector4i64 *y, const MR_Vector4i64 *z, const MR_Vector4i64 *w);

/// construct from rotation matrix and translation vector
/// Generated from a constructor of class `MR::Matrix4i64`.
/// Parameter `r` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API MR_Matrix4i64 MR_Matrix4i64_Construct_2(const MR_Matrix3i64 *r, const MR_Vector3i64 *t);

/// Generated from a method of class `MR::Matrix4i64` named `zero`.
MRC_API MR_Matrix4i64 MR_Matrix4i64_zero(void);

/// Generated from a method of class `MR::Matrix4i64` named `identity`.
MRC_API MR_Matrix4i64 MR_Matrix4i64_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix4i64` named `scale`.
MRC_API MR_Matrix4i64 MR_Matrix4i64_scale(MR_int64_t s);

/// element access
/// Generated from a method of class `MR::Matrix4i64` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_Matrix4i64_call_const(const MR_Matrix4i64 *_this, int32_t row, int32_t col);

/// Generated from a method of class `MR::Matrix4i64` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_Matrix4i64_call(MR_Matrix4i64 *_this, int32_t row, int32_t col);

/// row access
/// Generated from a method of class `MR::Matrix4i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4i64 *MR_Matrix4i64_index_const(const MR_Matrix4i64 *_this, int32_t row);

/// Generated from a method of class `MR::Matrix4i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i64 *MR_Matrix4i64_index(MR_Matrix4i64 *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix4i64` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector4i64 MR_Matrix4i64_col(const MR_Matrix4i64 *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix4i64` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Matrix4i64_trace(const MR_Matrix4i64 *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix4i64` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Matrix4i64_normSq(const MR_Matrix4i64 *_this);

/// Generated from a method of class `MR::Matrix4i64` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix4i64_norm(const MR_Matrix4i64 *_this);

/// computes submatrix of the matrix with excluded i-th row and j-th column
/// Generated from a method of class `MR::Matrix4i64` named `submatrix3`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_Matrix4i64_submatrix3(const MR_Matrix4i64 *_this, int32_t i, int32_t j);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix4i64` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Matrix4i64_det(const MR_Matrix4i64 *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix4i64` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix4i64 MR_Matrix4i64_transposed(const MR_Matrix4i64 *_this);

/// Generated from a method of class `MR::Matrix4i64` named `getRotation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_Matrix4i64_getRotation(const MR_Matrix4i64 *_this);

/// Generated from a method of class `MR::Matrix4i64` named `setRotation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rot` can not be null. It is a single object.
MRC_API void MR_Matrix4i64_setRotation(MR_Matrix4i64 *_this, const MR_Matrix3i64 *rot);

/// Generated from a method of class `MR::Matrix4i64` named `getTranslation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_Matrix4i64_getTranslation(const MR_Matrix4i64 *_this);

/// Generated from a method of class `MR::Matrix4i64` named `setTranslation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API void MR_Matrix4i64_setTranslation(MR_Matrix4i64 *_this, const MR_Vector3i64 *t);

/// Generated from a method of class `MR::Matrix4i64` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t *MR_Matrix4i64_data(MR_Matrix4i64 *_this);

/// Generated from a method of class `MR::Matrix4i64` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_int64_t *MR_Matrix4i64_data_const(const MR_Matrix4i64 *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix4i64(const MR_Matrix4i64 *a, const MR_Matrix4i64 *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix4i64(const MR_Matrix4i64 *a, const MR_Matrix4i64 *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i64 MR_add_MR_Matrix4i64(const MR_Matrix4i64 *a, const MR_Matrix4i64 *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i64 MR_sub_MR_Matrix4i64(const MR_Matrix4i64 *a, const MR_Matrix4i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i64 MR_mul_int64_t_MR_Matrix4i64(MR_int64_t a, const MR_Matrix4i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i64 MR_mul_MR_Matrix4i64_int64_t(const MR_Matrix4i64 *b, MR_int64_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix4i64 MR_div_MR_Matrix4i64_int64_t(MR_Matrix4i64 b, MR_int64_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4i64 *MR_add_assign_MR_Matrix4i64(MR_Matrix4i64 *a, const MR_Matrix4i64 *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4i64 *MR_sub_assign_MR_Matrix4i64(MR_Matrix4i64 *a, const MR_Matrix4i64 *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4i64 *MR_mul_assign_MR_Matrix4i64_int64_t(MR_Matrix4i64 *a, MR_int64_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4i64 *MR_div_assign_MR_Matrix4i64_int64_t(MR_Matrix4i64 *a, MR_int64_t b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i64 MR_mul_MR_Matrix4i64_MR_Vector4i64(const MR_Matrix4i64 *a, const MR_Vector4i64 *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4i64 MR_mul_MR_Matrix4i64(const MR_Matrix4i64 *a, const MR_Matrix4i64 *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix4f MR_Matrix4f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix4f_DestroyArray()`.
/// Use `MR_Matrix4f_OffsetMutablePtr()` and `MR_Matrix4f_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix4f *MR_Matrix4f_DefaultConstructArray(size_t num_elems);

/// initializes matrix from 4 row-vectors
/// Generated from a constructor of class `MR::Matrix4f`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
/// Parameter `w` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_Matrix4f_Construct_4(const MR_Vector4f *x, const MR_Vector4f *y, const MR_Vector4f *z, const MR_Vector4f *w);

/// construct from rotation matrix and translation vector
/// Generated from a constructor of class `MR::Matrix4f`.
/// Parameter `r` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_Matrix4f_Construct_2(const MR_Matrix3f *r, const MR_Vector3f *t);

// Currently `AffineXf3<long long>` doesn't seem to compile, so we disable this constructor for `Matrix4<long long>`, because otherwise
// mrbind instantiates the entire `AffineXf3<long long>` and chokes on it.
/// Generated from a constructor of class `MR::Matrix4f`.
/// Parameter `xf` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_Matrix4f_Construct_float(const MR_AffineXf3f *xf);

/// Generated from a conversion operator of class `MR::Matrix4f` to type `MR::AffineXf3f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_Matrix4f_ConvertTo_MR_AffineXf3f(const MR_Matrix4f *_this);

/// Generated from a method of class `MR::Matrix4f` named `zero`.
MRC_API MR_Matrix4f MR_Matrix4f_zero(void);

/// Generated from a method of class `MR::Matrix4f` named `identity`.
MRC_API MR_Matrix4f MR_Matrix4f_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix4f` named `scale`.
MRC_API MR_Matrix4f MR_Matrix4f_scale(float s);

/// element access
/// Generated from a method of class `MR::Matrix4f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Matrix4f_call_const_2(const MR_Matrix4f *_this, int32_t row, int32_t col);

/// Generated from a method of class `MR::Matrix4f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Matrix4f_call(MR_Matrix4f *_this, int32_t row, int32_t col);

/// row access
/// Generated from a method of class `MR::Matrix4f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4f *MR_Matrix4f_index_const(const MR_Matrix4f *_this, int32_t row);

/// Generated from a method of class `MR::Matrix4f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4f *MR_Matrix4f_index(MR_Matrix4f *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix4f` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector4f MR_Matrix4f_col(const MR_Matrix4f *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix4f` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix4f_trace(const MR_Matrix4f *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix4f` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix4f_normSq(const MR_Matrix4f *_this);

/// Generated from a method of class `MR::Matrix4f` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix4f_norm(const MR_Matrix4f *_this);

/// computes submatrix of the matrix with excluded i-th row and j-th column
/// Generated from a method of class `MR::Matrix4f` named `submatrix3`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix4f_submatrix3(const MR_Matrix4f *_this, int32_t i, int32_t j);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix4f` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix4f_det(const MR_Matrix4f *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::Matrix4f` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_Matrix4f_inverse(const MR_Matrix4f *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix4f` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_Matrix4f_transposed(const MR_Matrix4f *_this);

/// Generated from a method of class `MR::Matrix4f` named `getRotation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix4f_getRotation(const MR_Matrix4f *_this);

/// Generated from a method of class `MR::Matrix4f` named `setRotation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rot` can not be null. It is a single object.
MRC_API void MR_Matrix4f_setRotation(MR_Matrix4f *_this, const MR_Matrix3f *rot);

/// Generated from a method of class `MR::Matrix4f` named `getTranslation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Matrix4f_getTranslation(const MR_Matrix4f *_this);

/// Generated from a method of class `MR::Matrix4f` named `setTranslation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API void MR_Matrix4f_setTranslation(MR_Matrix4f *_this, const MR_Vector3f *t);

/// Generated from a method of class `MR::Matrix4f` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float *MR_Matrix4f_data(MR_Matrix4f *_this);

/// Generated from a method of class `MR::Matrix4f` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const float *MR_Matrix4f_data_const(const MR_Matrix4f *_this);

/// converts 3d-vector b in 4d-vector (b,1), multiplies matrix on it,
/// and assuming the result is in homogeneous coordinates returns it as 3d-vector
/// Generated from a method of class `MR::Matrix4f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Matrix4f_call_const_1(const MR_Matrix4f *_this, const MR_Vector3f *b);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix4f(const MR_Matrix4f *a, const MR_Matrix4f *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix4f(const MR_Matrix4f *a, const MR_Matrix4f *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_add_MR_Matrix4f(const MR_Matrix4f *a, const MR_Matrix4f *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_sub_MR_Matrix4f(const MR_Matrix4f *a, const MR_Matrix4f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_mul_float_MR_Matrix4f(float a, const MR_Matrix4f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_mul_MR_Matrix4f_float(const MR_Matrix4f *b, float a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix4f MR_div_MR_Matrix4f_float(MR_Matrix4f b, float a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4f *MR_add_assign_MR_Matrix4f(MR_Matrix4f *a, const MR_Matrix4f *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4f *MR_sub_assign_MR_Matrix4f(MR_Matrix4f *a, const MR_Matrix4f *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4f *MR_mul_assign_MR_Matrix4f_float(MR_Matrix4f *a, float b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4f *MR_div_assign_MR_Matrix4f_float(MR_Matrix4f *a, float b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4f MR_mul_MR_Matrix4f_MR_Vector4f(const MR_Matrix4f *a, const MR_Vector4f *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4f MR_mul_MR_Matrix4f(const MR_Matrix4f *a, const MR_Matrix4f *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix4d MR_Matrix4d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix4d_DestroyArray()`.
/// Use `MR_Matrix4d_OffsetMutablePtr()` and `MR_Matrix4d_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix4d *MR_Matrix4d_DefaultConstructArray(size_t num_elems);

/// initializes matrix from 4 row-vectors
/// Generated from a constructor of class `MR::Matrix4d`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
/// Parameter `w` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_Matrix4d_Construct_4(const MR_Vector4d *x, const MR_Vector4d *y, const MR_Vector4d *z, const MR_Vector4d *w);

/// construct from rotation matrix and translation vector
/// Generated from a constructor of class `MR::Matrix4d`.
/// Parameter `r` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_Matrix4d_Construct_2(const MR_Matrix3d *r, const MR_Vector3d *t);

// Currently `AffineXf3<long long>` doesn't seem to compile, so we disable this constructor for `Matrix4<long long>`, because otherwise
// mrbind instantiates the entire `AffineXf3<long long>` and chokes on it.
/// Generated from a constructor of class `MR::Matrix4d`.
/// Parameter `xf` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_Matrix4d_Construct_double(const MR_AffineXf3d *xf);

/// Generated from a conversion operator of class `MR::Matrix4d` to type `MR::AffineXf3d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_Matrix4d_ConvertTo_MR_AffineXf3d(const MR_Matrix4d *_this);

/// Generated from a method of class `MR::Matrix4d` named `zero`.
MRC_API MR_Matrix4d MR_Matrix4d_zero(void);

/// Generated from a method of class `MR::Matrix4d` named `identity`.
MRC_API MR_Matrix4d MR_Matrix4d_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix4d` named `scale`.
MRC_API MR_Matrix4d MR_Matrix4d_scale(double s);

/// element access
/// Generated from a method of class `MR::Matrix4d` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Matrix4d_call_const_2(const MR_Matrix4d *_this, int32_t row, int32_t col);

/// Generated from a method of class `MR::Matrix4d` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Matrix4d_call(MR_Matrix4d *_this, int32_t row, int32_t col);

/// row access
/// Generated from a method of class `MR::Matrix4d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4d *MR_Matrix4d_index_const(const MR_Matrix4d *_this, int32_t row);

/// Generated from a method of class `MR::Matrix4d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4d *MR_Matrix4d_index(MR_Matrix4d *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix4d` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector4d MR_Matrix4d_col(const MR_Matrix4d *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix4d` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix4d_trace(const MR_Matrix4d *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix4d` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix4d_normSq(const MR_Matrix4d *_this);

/// Generated from a method of class `MR::Matrix4d` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix4d_norm(const MR_Matrix4d *_this);

/// computes submatrix of the matrix with excluded i-th row and j-th column
/// Generated from a method of class `MR::Matrix4d` named `submatrix3`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix4d_submatrix3(const MR_Matrix4d *_this, int32_t i, int32_t j);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix4d` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix4d_det(const MR_Matrix4d *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::Matrix4d` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_Matrix4d_inverse(const MR_Matrix4d *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix4d` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_Matrix4d_transposed(const MR_Matrix4d *_this);

/// Generated from a method of class `MR::Matrix4d` named `getRotation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix4d_getRotation(const MR_Matrix4d *_this);

/// Generated from a method of class `MR::Matrix4d` named `setRotation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rot` can not be null. It is a single object.
MRC_API void MR_Matrix4d_setRotation(MR_Matrix4d *_this, const MR_Matrix3d *rot);

/// Generated from a method of class `MR::Matrix4d` named `getTranslation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Matrix4d_getTranslation(const MR_Matrix4d *_this);

/// Generated from a method of class `MR::Matrix4d` named `setTranslation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
MRC_API void MR_Matrix4d_setTranslation(MR_Matrix4d *_this, const MR_Vector3d *t);

/// Generated from a method of class `MR::Matrix4d` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double *MR_Matrix4d_data(MR_Matrix4d *_this);

/// Generated from a method of class `MR::Matrix4d` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const double *MR_Matrix4d_data_const(const MR_Matrix4d *_this);

/// converts 3d-vector b in 4d-vector (b,1), multiplies matrix on it,
/// and assuming the result is in homogeneous coordinates returns it as 3d-vector
/// Generated from a method of class `MR::Matrix4d` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Matrix4d_call_const_1(const MR_Matrix4d *_this, const MR_Vector3d *b);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix4d(const MR_Matrix4d *a, const MR_Matrix4d *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix4d(const MR_Matrix4d *a, const MR_Matrix4d *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_add_MR_Matrix4d(const MR_Matrix4d *a, const MR_Matrix4d *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_sub_MR_Matrix4d(const MR_Matrix4d *a, const MR_Matrix4d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_mul_double_MR_Matrix4d(double a, const MR_Matrix4d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_mul_MR_Matrix4d_double(const MR_Matrix4d *b, double a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix4d MR_div_MR_Matrix4d_double(MR_Matrix4d b, double a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4d *MR_add_assign_MR_Matrix4d(MR_Matrix4d *a, const MR_Matrix4d *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4d *MR_sub_assign_MR_Matrix4d(MR_Matrix4d *a, const MR_Matrix4d *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4d *MR_mul_assign_MR_Matrix4d_double(MR_Matrix4d *a, double b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix4d *MR_div_assign_MR_Matrix4d_double(MR_Matrix4d *a, double b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4d MR_mul_MR_Matrix4d_MR_Vector4d(const MR_Matrix4d *a, const MR_Vector4d *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix4d MR_mul_MR_Matrix4d(const MR_Matrix4d *a, const MR_Matrix4d *b);

#ifdef __cplusplus
} // extern "C"
#endif
