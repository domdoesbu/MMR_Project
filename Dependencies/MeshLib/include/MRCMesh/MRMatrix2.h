// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// arbitrary 2x2 matrix
/// Generated from class `MR::Matrix2b`.
typedef struct MR_Matrix2b
{
    /// rows, identity matrix by default
    MR_Vector2b x;
    MR_Vector2b y;
} MR_Matrix2b;

/// arbitrary 2x2 matrix
/// Generated from class `MR::Matrix2i`.
typedef struct MR_Matrix2i
{
    /// rows, identity matrix by default
    MR_Vector2i x;
    MR_Vector2i y;
} MR_Matrix2i;

/// arbitrary 2x2 matrix
/// Generated from class `MR::Matrix2i64`.
typedef struct MR_Matrix2i64
{
    /// rows, identity matrix by default
    MR_Vector2i64 x;
    MR_Vector2i64 y;
} MR_Matrix2i64;

/// arbitrary 2x2 matrix
/// Generated from class `MR::Matrix2f`.
typedef struct MR_Matrix2f
{
    /// rows, identity matrix by default
    MR_Vector2f x;
    MR_Vector2f y;
} MR_Matrix2f;

/// arbitrary 2x2 matrix
/// Generated from class `MR::Matrix2d`.
typedef struct MR_Matrix2d
{
    /// rows, identity matrix by default
    MR_Vector2d x;
    MR_Vector2d y;
} MR_Matrix2d;

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix2b MR_Matrix2b_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix2b_DestroyArray()`.
/// Use `MR_Matrix2b_OffsetMutablePtr()` and `MR_Matrix2b_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix2b *MR_Matrix2b_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 2 rows
/// Generated from a constructor of class `MR::Matrix2b`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2b MR_Matrix2b_Construct(const MR_Vector2b *x, const MR_Vector2b *y);

/// Generated from a method of class `MR::Matrix2b` named `zero`.
MRC_API MR_Matrix2b MR_Matrix2b_zero(void);

/// Generated from a method of class `MR::Matrix2b` named `identity`.
MRC_API MR_Matrix2b MR_Matrix2b_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix2b` named `scale`.
MRC_API MR_Matrix2b MR_Matrix2b_scale_1_bool(bool s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix2b` named `scale`.
MRC_API MR_Matrix2b MR_Matrix2b_scale_2(bool sx, bool sy);

/// Generated from a method of class `MR::Matrix2b` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix2b MR_Matrix2b_scale_1_MR_Vector2b(const MR_Vector2b *s);

/// constructs a matrix from its 2 rows
/// Generated from a method of class `MR::Matrix2b` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2b MR_Matrix2b_fromRows(const MR_Vector2b *x, const MR_Vector2b *y);

/// constructs a matrix from its 2 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY ) into vectors ( x, y ) respectively
/// Generated from a method of class `MR::Matrix2b` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2b MR_Matrix2b_fromColumns(const MR_Vector2b *x, const MR_Vector2b *y);

/// row access
/// Generated from a method of class `MR::Matrix2b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2b *MR_Matrix2b_index_const(const MR_Matrix2b *_this, int32_t row);

/// Generated from a method of class `MR::Matrix2b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2b *MR_Matrix2b_index(MR_Matrix2b *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix2b` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Matrix2b_col(const MR_Matrix2b *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix2b` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Matrix2b_trace(const MR_Matrix2b *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix2b` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Matrix2b_normSq(const MR_Matrix2b *_this);

/// Generated from a method of class `MR::Matrix2b` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix2b_norm(const MR_Matrix2b *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix2b` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Matrix2b_det(const MR_Matrix2b *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix2b` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix2b MR_Matrix2b_transposed(const MR_Matrix2b *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix2b(const MR_Matrix2b *a, const MR_Matrix2b *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix2b(const MR_Matrix2b *a, const MR_Matrix2b *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_add_MR_Matrix2b(const MR_Matrix2b *a, const MR_Matrix2b *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_sub_MR_Matrix2b(const MR_Matrix2b *a, const MR_Matrix2b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_mul_bool_MR_Matrix2b(bool a, const MR_Matrix2b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_mul_MR_Matrix2b_bool(const MR_Matrix2b *b, bool a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix2i MR_div_MR_Matrix2b_bool(MR_Matrix2b b, bool a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2b *MR_add_assign_MR_Matrix2b(MR_Matrix2b *a, const MR_Matrix2b *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2b *MR_sub_assign_MR_Matrix2b(MR_Matrix2b *a, const MR_Matrix2b *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2b *MR_mul_assign_MR_Matrix2b_bool(MR_Matrix2b *a, bool b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2b *MR_div_assign_MR_Matrix2b_bool(MR_Matrix2b *a, bool b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_mul_MR_Matrix2b_MR_Vector2b(const MR_Matrix2b *a, const MR_Vector2b *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_mul_MR_Matrix2b(const MR_Matrix2b *a, const MR_Matrix2b *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix2i MR_Matrix2i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix2i_DestroyArray()`.
/// Use `MR_Matrix2i_OffsetMutablePtr()` and `MR_Matrix2i_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix2i *MR_Matrix2i_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 2 rows
/// Generated from a constructor of class `MR::Matrix2i`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_Matrix2i_Construct(const MR_Vector2i *x, const MR_Vector2i *y);

/// Generated from a method of class `MR::Matrix2i` named `zero`.
MRC_API MR_Matrix2i MR_Matrix2i_zero(void);

/// Generated from a method of class `MR::Matrix2i` named `identity`.
MRC_API MR_Matrix2i MR_Matrix2i_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix2i` named `scale`.
MRC_API MR_Matrix2i MR_Matrix2i_scale_1_int32_t(int32_t s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix2i` named `scale`.
MRC_API MR_Matrix2i MR_Matrix2i_scale_2(int32_t sx, int32_t sy);

/// Generated from a method of class `MR::Matrix2i` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_Matrix2i_scale_1_MR_Vector2i(const MR_Vector2i *s);

/// constructs a matrix from its 2 rows
/// Generated from a method of class `MR::Matrix2i` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_Matrix2i_fromRows(const MR_Vector2i *x, const MR_Vector2i *y);

/// constructs a matrix from its 2 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY ) into vectors ( x, y ) respectively
/// Generated from a method of class `MR::Matrix2i` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_Matrix2i_fromColumns(const MR_Vector2i *x, const MR_Vector2i *y);

/// row access
/// Generated from a method of class `MR::Matrix2i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_Matrix2i_index_const(const MR_Matrix2i *_this, int32_t row);

/// Generated from a method of class `MR::Matrix2i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_Matrix2i_index(MR_Matrix2i *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix2i` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i MR_Matrix2i_col(const MR_Matrix2i *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix2i` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Matrix2i_trace(const MR_Matrix2i *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix2i` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Matrix2i_normSq(const MR_Matrix2i *_this);

/// Generated from a method of class `MR::Matrix2i` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix2i_norm(const MR_Matrix2i *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix2i` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Matrix2i_det(const MR_Matrix2i *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix2i` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_Matrix2i_transposed(const MR_Matrix2i *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix2i(const MR_Matrix2i *a, const MR_Matrix2i *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix2i(const MR_Matrix2i *a, const MR_Matrix2i *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_add_MR_Matrix2i(const MR_Matrix2i *a, const MR_Matrix2i *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_sub_MR_Matrix2i(const MR_Matrix2i *a, const MR_Matrix2i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_mul_int32_t_MR_Matrix2i(int32_t a, const MR_Matrix2i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_mul_MR_Matrix2i_int32_t(const MR_Matrix2i *b, int32_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix2i MR_div_MR_Matrix2i_int32_t(MR_Matrix2i b, int32_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2i *MR_add_assign_MR_Matrix2i(MR_Matrix2i *a, const MR_Matrix2i *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2i *MR_sub_assign_MR_Matrix2i(MR_Matrix2i *a, const MR_Matrix2i *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2i *MR_mul_assign_MR_Matrix2i_int32_t(MR_Matrix2i *a, int32_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2i *MR_div_assign_MR_Matrix2i_int32_t(MR_Matrix2i *a, int32_t b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_mul_MR_Matrix2i_MR_Vector2i(const MR_Matrix2i *a, const MR_Vector2i *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i MR_mul_MR_Matrix2i(const MR_Matrix2i *a, const MR_Matrix2i *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix2i64 MR_Matrix2i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix2i64_DestroyArray()`.
/// Use `MR_Matrix2i64_OffsetMutablePtr()` and `MR_Matrix2i64_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix2i64 *MR_Matrix2i64_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 2 rows
/// Generated from a constructor of class `MR::Matrix2i64`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_Matrix2i64_Construct(const MR_Vector2i64 *x, const MR_Vector2i64 *y);

/// Generated from a method of class `MR::Matrix2i64` named `zero`.
MRC_API MR_Matrix2i64 MR_Matrix2i64_zero(void);

/// Generated from a method of class `MR::Matrix2i64` named `identity`.
MRC_API MR_Matrix2i64 MR_Matrix2i64_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix2i64` named `scale`.
MRC_API MR_Matrix2i64 MR_Matrix2i64_scale_1_int64_t(MR_int64_t s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix2i64` named `scale`.
MRC_API MR_Matrix2i64 MR_Matrix2i64_scale_2(MR_int64_t sx, MR_int64_t sy);

/// Generated from a method of class `MR::Matrix2i64` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_Matrix2i64_scale_1_MR_Vector2i64(const MR_Vector2i64 *s);

/// constructs a matrix from its 2 rows
/// Generated from a method of class `MR::Matrix2i64` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_Matrix2i64_fromRows(const MR_Vector2i64 *x, const MR_Vector2i64 *y);

/// constructs a matrix from its 2 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY ) into vectors ( x, y ) respectively
/// Generated from a method of class `MR::Matrix2i64` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_Matrix2i64_fromColumns(const MR_Vector2i64 *x, const MR_Vector2i64 *y);

/// row access
/// Generated from a method of class `MR::Matrix2i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i64 *MR_Matrix2i64_index_const(const MR_Matrix2i64 *_this, int32_t row);

/// Generated from a method of class `MR::Matrix2i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i64 *MR_Matrix2i64_index(MR_Matrix2i64 *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix2i64` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_Matrix2i64_col(const MR_Matrix2i64 *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix2i64` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Matrix2i64_trace(const MR_Matrix2i64 *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix2i64` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Matrix2i64_normSq(const MR_Matrix2i64 *_this);

/// Generated from a method of class `MR::Matrix2i64` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix2i64_norm(const MR_Matrix2i64 *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix2i64` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Matrix2i64_det(const MR_Matrix2i64 *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix2i64` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_Matrix2i64_transposed(const MR_Matrix2i64 *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix2i64(const MR_Matrix2i64 *a, const MR_Matrix2i64 *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix2i64(const MR_Matrix2i64 *a, const MR_Matrix2i64 *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_add_MR_Matrix2i64(const MR_Matrix2i64 *a, const MR_Matrix2i64 *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_sub_MR_Matrix2i64(const MR_Matrix2i64 *a, const MR_Matrix2i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_mul_int64_t_MR_Matrix2i64(MR_int64_t a, const MR_Matrix2i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_mul_MR_Matrix2i64_int64_t(const MR_Matrix2i64 *b, MR_int64_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix2i64 MR_div_MR_Matrix2i64_int64_t(MR_Matrix2i64 b, MR_int64_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2i64 *MR_add_assign_MR_Matrix2i64(MR_Matrix2i64 *a, const MR_Matrix2i64 *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2i64 *MR_sub_assign_MR_Matrix2i64(MR_Matrix2i64 *a, const MR_Matrix2i64 *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2i64 *MR_mul_assign_MR_Matrix2i64_int64_t(MR_Matrix2i64 *a, MR_int64_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2i64 *MR_div_assign_MR_Matrix2i64_int64_t(MR_Matrix2i64 *a, MR_int64_t b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_mul_MR_Matrix2i64_MR_Vector2i64(const MR_Matrix2i64 *a, const MR_Vector2i64 *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2i64 MR_mul_MR_Matrix2i64(const MR_Matrix2i64 *a, const MR_Matrix2i64 *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix2f MR_Matrix2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix2f_DestroyArray()`.
/// Use `MR_Matrix2f_OffsetMutablePtr()` and `MR_Matrix2f_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix2f *MR_Matrix2f_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 2 rows
/// Generated from a constructor of class `MR::Matrix2f`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_Matrix2f_Construct(const MR_Vector2f *x, const MR_Vector2f *y);

/// Generated from a method of class `MR::Matrix2f` named `zero`.
MRC_API MR_Matrix2f MR_Matrix2f_zero(void);

/// Generated from a method of class `MR::Matrix2f` named `identity`.
MRC_API MR_Matrix2f MR_Matrix2f_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix2f` named `scale`.
MRC_API MR_Matrix2f MR_Matrix2f_scale_1_float(float s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix2f` named `scale`.
MRC_API MR_Matrix2f MR_Matrix2f_scale_2(float sx, float sy);

/// Generated from a method of class `MR::Matrix2f` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_Matrix2f_scale_1_MR_Vector2f(const MR_Vector2f *s);

/// creates matrix representing rotation around origin on given angle
/// Generated from a method of class `MR::Matrix2f` named `rotation`.
MRC_API MR_Matrix2f MR_Matrix2f_rotation_1(float angle);

/// creates matrix representing rotation that after application to (from) makes (to) vector
/// Generated from a method of class `MR::Matrix2f` named `rotation`.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `to` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_Matrix2f_rotation_2(const MR_Vector2f *from, const MR_Vector2f *to);

/// constructs a matrix from its 2 rows
/// Generated from a method of class `MR::Matrix2f` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_Matrix2f_fromRows(const MR_Vector2f *x, const MR_Vector2f *y);

/// constructs a matrix from its 2 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY ) into vectors ( x, y ) respectively
/// Generated from a method of class `MR::Matrix2f` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_Matrix2f_fromColumns(const MR_Vector2f *x, const MR_Vector2f *y);

/// row access
/// Generated from a method of class `MR::Matrix2f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_Matrix2f_index_const(const MR_Matrix2f *_this, int32_t row);

/// Generated from a method of class `MR::Matrix2f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_Matrix2f_index(MR_Matrix2f *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix2f` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Matrix2f_col(const MR_Matrix2f *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix2f` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix2f_trace(const MR_Matrix2f *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix2f` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix2f_normSq(const MR_Matrix2f *_this);

/// Generated from a method of class `MR::Matrix2f` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix2f_norm(const MR_Matrix2f *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix2f` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix2f_det(const MR_Matrix2f *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::Matrix2f` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_Matrix2f_inverse(const MR_Matrix2f *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix2f` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_Matrix2f_transposed(const MR_Matrix2f *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix2f(const MR_Matrix2f *a, const MR_Matrix2f *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix2f(const MR_Matrix2f *a, const MR_Matrix2f *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_add_MR_Matrix2f(const MR_Matrix2f *a, const MR_Matrix2f *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_sub_MR_Matrix2f(const MR_Matrix2f *a, const MR_Matrix2f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_mul_float_MR_Matrix2f(float a, const MR_Matrix2f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_mul_MR_Matrix2f_float(const MR_Matrix2f *b, float a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix2f MR_div_MR_Matrix2f_float(MR_Matrix2f b, float a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2f *MR_add_assign_MR_Matrix2f(MR_Matrix2f *a, const MR_Matrix2f *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2f *MR_sub_assign_MR_Matrix2f(MR_Matrix2f *a, const MR_Matrix2f *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2f *MR_mul_assign_MR_Matrix2f_float(MR_Matrix2f *a, float b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2f *MR_div_assign_MR_Matrix2f_float(MR_Matrix2f *a, float b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2f MR_mul_MR_Matrix2f_MR_Vector2f(const MR_Matrix2f *a, const MR_Vector2f *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2f MR_mul_MR_Matrix2f(const MR_Matrix2f *a, const MR_Matrix2f *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix2d MR_Matrix2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix2d_DestroyArray()`.
/// Use `MR_Matrix2d_OffsetMutablePtr()` and `MR_Matrix2d_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix2d *MR_Matrix2d_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 2 rows
/// Generated from a constructor of class `MR::Matrix2d`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_Matrix2d_Construct(const MR_Vector2d *x, const MR_Vector2d *y);

/// Generated from a method of class `MR::Matrix2d` named `zero`.
MRC_API MR_Matrix2d MR_Matrix2d_zero(void);

/// Generated from a method of class `MR::Matrix2d` named `identity`.
MRC_API MR_Matrix2d MR_Matrix2d_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix2d` named `scale`.
MRC_API MR_Matrix2d MR_Matrix2d_scale_1_double(double s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix2d` named `scale`.
MRC_API MR_Matrix2d MR_Matrix2d_scale_2(double sx, double sy);

/// Generated from a method of class `MR::Matrix2d` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_Matrix2d_scale_1_MR_Vector2d(const MR_Vector2d *s);

/// creates matrix representing rotation around origin on given angle
/// Generated from a method of class `MR::Matrix2d` named `rotation`.
MRC_API MR_Matrix2d MR_Matrix2d_rotation_1(double angle);

/// creates matrix representing rotation that after application to (from) makes (to) vector
/// Generated from a method of class `MR::Matrix2d` named `rotation`.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `to` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_Matrix2d_rotation_2(const MR_Vector2d *from, const MR_Vector2d *to);

/// constructs a matrix from its 2 rows
/// Generated from a method of class `MR::Matrix2d` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_Matrix2d_fromRows(const MR_Vector2d *x, const MR_Vector2d *y);

/// constructs a matrix from its 2 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY ) into vectors ( x, y ) respectively
/// Generated from a method of class `MR::Matrix2d` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_Matrix2d_fromColumns(const MR_Vector2d *x, const MR_Vector2d *y);

/// row access
/// Generated from a method of class `MR::Matrix2d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_Matrix2d_index_const(const MR_Matrix2d *_this, int32_t row);

/// Generated from a method of class `MR::Matrix2d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_Matrix2d_index(MR_Matrix2d *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix2d` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Matrix2d_col(const MR_Matrix2d *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix2d` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix2d_trace(const MR_Matrix2d *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix2d` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix2d_normSq(const MR_Matrix2d *_this);

/// Generated from a method of class `MR::Matrix2d` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix2d_norm(const MR_Matrix2d *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix2d` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix2d_det(const MR_Matrix2d *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::Matrix2d` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_Matrix2d_inverse(const MR_Matrix2d *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix2d` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_Matrix2d_transposed(const MR_Matrix2d *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix2d(const MR_Matrix2d *a, const MR_Matrix2d *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix2d(const MR_Matrix2d *a, const MR_Matrix2d *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_add_MR_Matrix2d(const MR_Matrix2d *a, const MR_Matrix2d *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_sub_MR_Matrix2d(const MR_Matrix2d *a, const MR_Matrix2d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_mul_double_MR_Matrix2d(double a, const MR_Matrix2d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_mul_MR_Matrix2d_double(const MR_Matrix2d *b, double a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix2d MR_div_MR_Matrix2d_double(MR_Matrix2d b, double a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2d *MR_add_assign_MR_Matrix2d(MR_Matrix2d *a, const MR_Matrix2d *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2d *MR_sub_assign_MR_Matrix2d(MR_Matrix2d *a, const MR_Matrix2d *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2d *MR_mul_assign_MR_Matrix2d_double(MR_Matrix2d *a, double b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix2d *MR_div_assign_MR_Matrix2d_double(MR_Matrix2d *a, double b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2d MR_mul_MR_Matrix2d_MR_Vector2d(const MR_Matrix2d *a, const MR_Vector2d *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix2d MR_mul_MR_Matrix2d(const MR_Matrix2d *a, const MR_Matrix2d *b);

#ifdef __cplusplus
} // extern "C"
#endif
