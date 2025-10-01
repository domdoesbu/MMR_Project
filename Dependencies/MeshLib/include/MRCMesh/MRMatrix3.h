// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// arbitrary 3x3 matrix
/// Generated from class `MR::Matrix3b`.
typedef struct MR_Matrix3b
{
    /// rows, identity matrix by default
    MR_Vector3b x;
    MR_Vector3b y;
    MR_Vector3b z;
} MR_Matrix3b;

/// Generated from class `MR::Matrix3<bool>::QR`.
typedef struct MR_Matrix3_bool_QR MR_Matrix3_bool_QR;

/// arbitrary 3x3 matrix
/// Generated from class `MR::Matrix3i`.
typedef struct MR_Matrix3i
{
    /// rows, identity matrix by default
    MR_Vector3i x;
    MR_Vector3i y;
    MR_Vector3i z;
} MR_Matrix3i;

/// Generated from class `MR::Matrix3<int32_t>::QR`.
typedef struct MR_Matrix3_int32_t_QR MR_Matrix3_int32_t_QR;

/// arbitrary 3x3 matrix
/// Generated from class `MR::Matrix3i64`.
typedef struct MR_Matrix3i64
{
    /// rows, identity matrix by default
    MR_Vector3i64 x;
    MR_Vector3i64 y;
    MR_Vector3i64 z;
} MR_Matrix3i64;

/// Generated from class `MR::Matrix3<MR_int64_t>::QR`.
typedef struct MR_Matrix3_int64_t_QR MR_Matrix3_int64_t_QR;

/// arbitrary 3x3 matrix
/// Generated from class `MR::Matrix3f`.
typedef struct MR_Matrix3f
{
    /// rows, identity matrix by default
    MR_Vector3f x;
    MR_Vector3f y;
    MR_Vector3f z;
} MR_Matrix3f;

/// Generated from class `MR::Matrix3<float>::QR`.
typedef struct MR_Matrix3_float_QR MR_Matrix3_float_QR;

/// arbitrary 3x3 matrix
/// Generated from class `MR::Matrix3d`.
typedef struct MR_Matrix3d
{
    /// rows, identity matrix by default
    MR_Vector3d x;
    MR_Vector3d y;
    MR_Vector3d z;
} MR_Matrix3d;

/// Generated from class `MR::Matrix3<double>::QR`.
typedef struct MR_Matrix3_double_QR MR_Matrix3_double_QR;

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix3b MR_Matrix3b_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3b_DestroyArray()`.
/// Use `MR_Matrix3b_OffsetMutablePtr()` and `MR_Matrix3b_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3b *MR_Matrix3b_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 3 rows
/// Generated from a constructor of class `MR::Matrix3b`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3b MR_Matrix3b_Construct(const MR_Vector3b *x, const MR_Vector3b *y, const MR_Vector3b *z);

/// Generated from a method of class `MR::Matrix3b` named `zero`.
MRC_API MR_Matrix3b MR_Matrix3b_zero(void);

/// Generated from a method of class `MR::Matrix3b` named `identity`.
MRC_API MR_Matrix3b MR_Matrix3b_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix3b` named `scale`.
MRC_API MR_Matrix3b MR_Matrix3b_scale_1_bool(bool s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix3b` named `scale`.
MRC_API MR_Matrix3b MR_Matrix3b_scale_3(bool sx, bool sy, bool sz);

/// Generated from a method of class `MR::Matrix3b` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix3b MR_Matrix3b_scale_1_MR_Vector3b(const MR_Vector3b *s);

/// constructs a matrix from its 3 rows
/// Generated from a method of class `MR::Matrix3b` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3b MR_Matrix3b_fromRows(const MR_Vector3b *x, const MR_Vector3b *y, const MR_Vector3b *z);

/// constructs a matrix from its 3 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY, plusZ ) into vectors ( x, y, z ) respectively
/// Generated from a method of class `MR::Matrix3b` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3b MR_Matrix3b_fromColumns(const MR_Vector3b *x, const MR_Vector3b *y, const MR_Vector3b *z);

/// row access
/// Generated from a method of class `MR::Matrix3b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3b *MR_Matrix3b_index_const(const MR_Matrix3b *_this, int32_t row);

/// Generated from a method of class `MR::Matrix3b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3b *MR_Matrix3b_index(MR_Matrix3b *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix3b` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Matrix3b_col(const MR_Matrix3b *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix3b` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Matrix3b_trace(const MR_Matrix3b *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix3b` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Matrix3b_normSq(const MR_Matrix3b *_this);

/// Generated from a method of class `MR::Matrix3b` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix3b_norm(const MR_Matrix3b *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix3b` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Matrix3b_det(const MR_Matrix3b *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix3b` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3b MR_Matrix3b_transposed(const MR_Matrix3b *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<bool>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3b *MR_Matrix3_bool_QR_Get_q(const MR_Matrix3_bool_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<bool>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_bool_QR_Set_q(MR_Matrix3_bool_QR *_this, MR_Matrix3b value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<bool>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3b *MR_Matrix3_bool_QR_GetMutable_q(MR_Matrix3_bool_QR *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<bool>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3b *MR_Matrix3_bool_QR_Get_r(const MR_Matrix3_bool_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<bool>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_bool_QR_Set_r(MR_Matrix3_bool_QR *_this, MR_Matrix3b value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<bool>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3b *MR_Matrix3_bool_QR_GetMutable_r(MR_Matrix3_bool_QR *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_bool_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_bool_QR *MR_Matrix3_bool_QR_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3_bool_QR_DestroyArray()`.
/// Use `MR_Matrix3_bool_QR_OffsetMutablePtr()` and `MR_Matrix3_bool_QR_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3_bool_QR *MR_Matrix3_bool_QR_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Matrix3<bool>::QR` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_bool_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_bool_QR *MR_Matrix3_bool_QR_ConstructFrom(MR_Matrix3b q, MR_Matrix3b r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Matrix3_bool_QR *MR_Matrix3_bool_QR_OffsetPtr(const MR_Matrix3_bool_QR *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Matrix3_bool_QR *MR_Matrix3_bool_QR_OffsetMutablePtr(MR_Matrix3_bool_QR *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Matrix3<bool>::QR`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_bool_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_bool_QR *MR_Matrix3_bool_QR_ConstructFromAnother(const MR_Matrix3_bool_QR *_other);

/// Destroys a heap-allocated instance of `MR_Matrix3_bool_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_bool_QR_Destroy(const MR_Matrix3_bool_QR *_this);

/// Destroys a heap-allocated array of `MR_Matrix3_bool_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_bool_QR_DestroyArray(const MR_Matrix3_bool_QR *_this);

/// Generated from a method of class `MR::Matrix3<bool>::QR` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3_bool_QR *MR_Matrix3_bool_QR_AssignFromAnother(MR_Matrix3_bool_QR *_this, const MR_Matrix3_bool_QR *_other);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix3b(const MR_Matrix3b *a, const MR_Matrix3b *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix3b(const MR_Matrix3b *a, const MR_Matrix3b *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_add_MR_Matrix3b(const MR_Matrix3b *a, const MR_Matrix3b *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_sub_MR_Matrix3b(const MR_Matrix3b *a, const MR_Matrix3b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_mul_bool_MR_Matrix3b(bool a, const MR_Matrix3b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_mul_MR_Matrix3b_bool(const MR_Matrix3b *b, bool a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix3i MR_div_MR_Matrix3b_bool(MR_Matrix3b b, bool a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3b *MR_add_assign_MR_Matrix3b(MR_Matrix3b *a, const MR_Matrix3b *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3b *MR_sub_assign_MR_Matrix3b(MR_Matrix3b *a, const MR_Matrix3b *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3b *MR_mul_assign_MR_Matrix3b_bool(MR_Matrix3b *a, bool b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3b *MR_div_assign_MR_Matrix3b_bool(MR_Matrix3b *a, bool b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_mul_MR_Matrix3b_MR_Vector3b(const MR_Matrix3b *a, const MR_Vector3b *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_mul_MR_Matrix3b(const MR_Matrix3b *a, const MR_Matrix3b *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix3i MR_Matrix3i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3i_DestroyArray()`.
/// Use `MR_Matrix3i_OffsetMutablePtr()` and `MR_Matrix3i_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3i *MR_Matrix3i_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 3 rows
/// Generated from a constructor of class `MR::Matrix3i`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_Matrix3i_Construct(const MR_Vector3i *x, const MR_Vector3i *y, const MR_Vector3i *z);

/// Generated from a method of class `MR::Matrix3i` named `zero`.
MRC_API MR_Matrix3i MR_Matrix3i_zero(void);

/// Generated from a method of class `MR::Matrix3i` named `identity`.
MRC_API MR_Matrix3i MR_Matrix3i_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix3i` named `scale`.
MRC_API MR_Matrix3i MR_Matrix3i_scale_1_int32_t(int32_t s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix3i` named `scale`.
MRC_API MR_Matrix3i MR_Matrix3i_scale_3(int32_t sx, int32_t sy, int32_t sz);

/// Generated from a method of class `MR::Matrix3i` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_Matrix3i_scale_1_MR_Vector3i(const MR_Vector3i *s);

/// constructs a matrix from its 3 rows
/// Generated from a method of class `MR::Matrix3i` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_Matrix3i_fromRows(const MR_Vector3i *x, const MR_Vector3i *y, const MR_Vector3i *z);

/// constructs a matrix from its 3 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY, plusZ ) into vectors ( x, y, z ) respectively
/// Generated from a method of class `MR::Matrix3i` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_Matrix3i_fromColumns(const MR_Vector3i *x, const MR_Vector3i *y, const MR_Vector3i *z);

/// row access
/// Generated from a method of class `MR::Matrix3i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_Matrix3i_index_const(const MR_Matrix3i *_this, int32_t row);

/// Generated from a method of class `MR::Matrix3i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_Matrix3i_index(MR_Matrix3i *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix3i` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Matrix3i_col(const MR_Matrix3i *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix3i` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Matrix3i_trace(const MR_Matrix3i *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix3i` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Matrix3i_normSq(const MR_Matrix3i *_this);

/// Generated from a method of class `MR::Matrix3i` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix3i_norm(const MR_Matrix3i *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix3i` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Matrix3i_det(const MR_Matrix3i *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix3i` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_Matrix3i_transposed(const MR_Matrix3i *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<int32_t>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3i *MR_Matrix3_int32_t_QR_Get_q(const MR_Matrix3_int32_t_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<int32_t>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_int32_t_QR_Set_q(MR_Matrix3_int32_t_QR *_this, MR_Matrix3i value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<int32_t>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i *MR_Matrix3_int32_t_QR_GetMutable_q(MR_Matrix3_int32_t_QR *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<int32_t>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3i *MR_Matrix3_int32_t_QR_Get_r(const MR_Matrix3_int32_t_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<int32_t>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_int32_t_QR_Set_r(MR_Matrix3_int32_t_QR *_this, MR_Matrix3i value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<int32_t>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i *MR_Matrix3_int32_t_QR_GetMutable_r(MR_Matrix3_int32_t_QR *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_int32_t_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_int32_t_QR *MR_Matrix3_int32_t_QR_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3_int32_t_QR_DestroyArray()`.
/// Use `MR_Matrix3_int32_t_QR_OffsetMutablePtr()` and `MR_Matrix3_int32_t_QR_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3_int32_t_QR *MR_Matrix3_int32_t_QR_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Matrix3<int32_t>::QR` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_int32_t_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_int32_t_QR *MR_Matrix3_int32_t_QR_ConstructFrom(MR_Matrix3i q, MR_Matrix3i r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Matrix3_int32_t_QR *MR_Matrix3_int32_t_QR_OffsetPtr(const MR_Matrix3_int32_t_QR *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Matrix3_int32_t_QR *MR_Matrix3_int32_t_QR_OffsetMutablePtr(MR_Matrix3_int32_t_QR *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Matrix3<int32_t>::QR`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_int32_t_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_int32_t_QR *MR_Matrix3_int32_t_QR_ConstructFromAnother(const MR_Matrix3_int32_t_QR *_other);

/// Destroys a heap-allocated instance of `MR_Matrix3_int32_t_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_int32_t_QR_Destroy(const MR_Matrix3_int32_t_QR *_this);

/// Destroys a heap-allocated array of `MR_Matrix3_int32_t_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_int32_t_QR_DestroyArray(const MR_Matrix3_int32_t_QR *_this);

/// Generated from a method of class `MR::Matrix3<int32_t>::QR` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3_int32_t_QR *MR_Matrix3_int32_t_QR_AssignFromAnother(MR_Matrix3_int32_t_QR *_this, const MR_Matrix3_int32_t_QR *_other);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix3i(const MR_Matrix3i *a, const MR_Matrix3i *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix3i(const MR_Matrix3i *a, const MR_Matrix3i *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_add_MR_Matrix3i(const MR_Matrix3i *a, const MR_Matrix3i *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_sub_MR_Matrix3i(const MR_Matrix3i *a, const MR_Matrix3i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_mul_int32_t_MR_Matrix3i(int32_t a, const MR_Matrix3i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_mul_MR_Matrix3i_int32_t(const MR_Matrix3i *b, int32_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix3i MR_div_MR_Matrix3i_int32_t(MR_Matrix3i b, int32_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i *MR_add_assign_MR_Matrix3i(MR_Matrix3i *a, const MR_Matrix3i *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i *MR_sub_assign_MR_Matrix3i(MR_Matrix3i *a, const MR_Matrix3i *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i *MR_mul_assign_MR_Matrix3i_int32_t(MR_Matrix3i *a, int32_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i *MR_div_assign_MR_Matrix3i_int32_t(MR_Matrix3i *a, int32_t b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_mul_MR_Matrix3i_MR_Vector3i(const MR_Matrix3i *a, const MR_Vector3i *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i MR_mul_MR_Matrix3i(const MR_Matrix3i *a, const MR_Matrix3i *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix3i64 MR_Matrix3i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3i64_DestroyArray()`.
/// Use `MR_Matrix3i64_OffsetMutablePtr()` and `MR_Matrix3i64_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3i64 *MR_Matrix3i64_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 3 rows
/// Generated from a constructor of class `MR::Matrix3i64`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_Matrix3i64_Construct(const MR_Vector3i64 *x, const MR_Vector3i64 *y, const MR_Vector3i64 *z);

/// Generated from a method of class `MR::Matrix3i64` named `zero`.
MRC_API MR_Matrix3i64 MR_Matrix3i64_zero(void);

/// Generated from a method of class `MR::Matrix3i64` named `identity`.
MRC_API MR_Matrix3i64 MR_Matrix3i64_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix3i64` named `scale`.
MRC_API MR_Matrix3i64 MR_Matrix3i64_scale_1_int64_t(MR_int64_t s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix3i64` named `scale`.
MRC_API MR_Matrix3i64 MR_Matrix3i64_scale_3(MR_int64_t sx, MR_int64_t sy, MR_int64_t sz);

/// Generated from a method of class `MR::Matrix3i64` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_Matrix3i64_scale_1_MR_Vector3i64(const MR_Vector3i64 *s);

/// constructs a matrix from its 3 rows
/// Generated from a method of class `MR::Matrix3i64` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_Matrix3i64_fromRows(const MR_Vector3i64 *x, const MR_Vector3i64 *y, const MR_Vector3i64 *z);

/// constructs a matrix from its 3 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY, plusZ ) into vectors ( x, y, z ) respectively
/// Generated from a method of class `MR::Matrix3i64` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_Matrix3i64_fromColumns(const MR_Vector3i64 *x, const MR_Vector3i64 *y, const MR_Vector3i64 *z);

/// row access
/// Generated from a method of class `MR::Matrix3i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i64 *MR_Matrix3i64_index_const(const MR_Matrix3i64 *_this, int32_t row);

/// Generated from a method of class `MR::Matrix3i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i64 *MR_Matrix3i64_index(MR_Matrix3i64 *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix3i64` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_Matrix3i64_col(const MR_Matrix3i64 *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix3i64` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Matrix3i64_trace(const MR_Matrix3i64 *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix3i64` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Matrix3i64_normSq(const MR_Matrix3i64 *_this);

/// Generated from a method of class `MR::Matrix3i64` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix3i64_norm(const MR_Matrix3i64 *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix3i64` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Matrix3i64_det(const MR_Matrix3i64 *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix3i64` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_Matrix3i64_transposed(const MR_Matrix3i64 *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<MR_int64_t>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3i64 *MR_Matrix3_int64_t_QR_Get_q(const MR_Matrix3_int64_t_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<MR_int64_t>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_int64_t_QR_Set_q(MR_Matrix3_int64_t_QR *_this, MR_Matrix3i64 value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<MR_int64_t>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i64 *MR_Matrix3_int64_t_QR_GetMutable_q(MR_Matrix3_int64_t_QR *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<MR_int64_t>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3i64 *MR_Matrix3_int64_t_QR_Get_r(const MR_Matrix3_int64_t_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<MR_int64_t>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_int64_t_QR_Set_r(MR_Matrix3_int64_t_QR *_this, MR_Matrix3i64 value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<MR_int64_t>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i64 *MR_Matrix3_int64_t_QR_GetMutable_r(MR_Matrix3_int64_t_QR *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_int64_t_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_int64_t_QR *MR_Matrix3_int64_t_QR_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3_int64_t_QR_DestroyArray()`.
/// Use `MR_Matrix3_int64_t_QR_OffsetMutablePtr()` and `MR_Matrix3_int64_t_QR_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3_int64_t_QR *MR_Matrix3_int64_t_QR_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Matrix3<MR_int64_t>::QR` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_int64_t_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_int64_t_QR *MR_Matrix3_int64_t_QR_ConstructFrom(MR_Matrix3i64 q, MR_Matrix3i64 r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Matrix3_int64_t_QR *MR_Matrix3_int64_t_QR_OffsetPtr(const MR_Matrix3_int64_t_QR *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Matrix3_int64_t_QR *MR_Matrix3_int64_t_QR_OffsetMutablePtr(MR_Matrix3_int64_t_QR *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Matrix3<MR_int64_t>::QR`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_int64_t_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_int64_t_QR *MR_Matrix3_int64_t_QR_ConstructFromAnother(const MR_Matrix3_int64_t_QR *_other);

/// Destroys a heap-allocated instance of `MR_Matrix3_int64_t_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_int64_t_QR_Destroy(const MR_Matrix3_int64_t_QR *_this);

/// Destroys a heap-allocated array of `MR_Matrix3_int64_t_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_int64_t_QR_DestroyArray(const MR_Matrix3_int64_t_QR *_this);

/// Generated from a method of class `MR::Matrix3<MR_int64_t>::QR` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3_int64_t_QR *MR_Matrix3_int64_t_QR_AssignFromAnother(MR_Matrix3_int64_t_QR *_this, const MR_Matrix3_int64_t_QR *_other);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix3i64(const MR_Matrix3i64 *a, const MR_Matrix3i64 *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix3i64(const MR_Matrix3i64 *a, const MR_Matrix3i64 *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_add_MR_Matrix3i64(const MR_Matrix3i64 *a, const MR_Matrix3i64 *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_sub_MR_Matrix3i64(const MR_Matrix3i64 *a, const MR_Matrix3i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_mul_int64_t_MR_Matrix3i64(MR_int64_t a, const MR_Matrix3i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_mul_MR_Matrix3i64_int64_t(const MR_Matrix3i64 *b, MR_int64_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix3i64 MR_div_MR_Matrix3i64_int64_t(MR_Matrix3i64 b, MR_int64_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i64 *MR_add_assign_MR_Matrix3i64(MR_Matrix3i64 *a, const MR_Matrix3i64 *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i64 *MR_sub_assign_MR_Matrix3i64(MR_Matrix3i64 *a, const MR_Matrix3i64 *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i64 *MR_mul_assign_MR_Matrix3i64_int64_t(MR_Matrix3i64 *a, MR_int64_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3i64 *MR_div_assign_MR_Matrix3i64_int64_t(MR_Matrix3i64 *a, MR_int64_t b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_mul_MR_Matrix3i64_MR_Vector3i64(const MR_Matrix3i64 *a, const MR_Vector3i64 *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3i64 MR_mul_MR_Matrix3i64(const MR_Matrix3i64 *a, const MR_Matrix3i64 *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix3f MR_Matrix3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3f_DestroyArray()`.
/// Use `MR_Matrix3f_OffsetMutablePtr()` and `MR_Matrix3f_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3f *MR_Matrix3f_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 3 rows
/// Generated from a constructor of class `MR::Matrix3f`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_Construct(const MR_Vector3f *x, const MR_Vector3f *y, const MR_Vector3f *z);

/// Generated from a constructor of class `MR::Matrix3f`.
/// Parameter `m` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_Construct_float(const MR_Matrix3f *m);

/// Generated from a constructor of class `MR::Matrix3f`.
/// Parameter `m` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_Construct_double(const MR_Matrix3d *m);

/// Generated from a method of class `MR::Matrix3f` named `zero`.
MRC_API MR_Matrix3f MR_Matrix3f_zero(void);

/// Generated from a method of class `MR::Matrix3f` named `identity`.
MRC_API MR_Matrix3f MR_Matrix3f_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix3f` named `scale`.
MRC_API MR_Matrix3f MR_Matrix3f_scale_1_float(float s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix3f` named `scale`.
MRC_API MR_Matrix3f MR_Matrix3f_scale_3(float sx, float sy, float sz);

/// Generated from a method of class `MR::Matrix3f` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_scale_1_MR_Vector3f(const MR_Vector3f *s);

/// creates matrix representing rotation around given axis on given angle
/// Generated from a method of class `MR::Matrix3f` named `rotation`.
/// Parameter `axis` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_rotation_float(const MR_Vector3f *axis, float angle);

/// creates matrix representing rotation that after application to (from) makes (to) vector
/// Generated from a method of class `MR::Matrix3f` named `rotation`.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `to` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_rotation_MR_Vector3f(const MR_Vector3f *from, const MR_Vector3f *to);

/// creates matrix representing rotation from 3 Euler angles: R=R(z)*R(y)*R(x)
/// see more https://en.wikipedia.org/wiki/Euler_angles#Conventions_by_intrinsic_rotations
/// Generated from a method of class `MR::Matrix3f` named `rotationFromEuler`.
/// Parameter `eulerAngles` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_rotationFromEuler(const MR_Vector3f *eulerAngles);

/// returns linear by angles approximation of the rotation matrix, which is close to true rotation matrix for small angles
/// Generated from a method of class `MR::Matrix3f` named `approximateLinearRotationMatrixFromEuler`.
/// Parameter `eulerAngles` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_approximateLinearRotationMatrixFromEuler(const MR_Vector3f *eulerAngles);

/// constructs a matrix from its 3 rows
/// Generated from a method of class `MR::Matrix3f` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_fromRows(const MR_Vector3f *x, const MR_Vector3f *y, const MR_Vector3f *z);

/// constructs a matrix from its 3 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY, plusZ ) into vectors ( x, y, z ) respectively
/// Generated from a method of class `MR::Matrix3f` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_fromColumns(const MR_Vector3f *x, const MR_Vector3f *y, const MR_Vector3f *z);

/// row access
/// Generated from a method of class `MR::Matrix3f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Matrix3f_index_const(const MR_Matrix3f *_this, int32_t row);

/// Generated from a method of class `MR::Matrix3f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Matrix3f_index(MR_Matrix3f *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix3f` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Matrix3f_col(const MR_Matrix3f *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix3f` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix3f_trace(const MR_Matrix3f *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix3f` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix3f_normSq(const MR_Matrix3f *_this);

/// Generated from a method of class `MR::Matrix3f` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix3f_norm(const MR_Matrix3f *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix3f` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Matrix3f_det(const MR_Matrix3f *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::Matrix3f` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_inverse(const MR_Matrix3f *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix3f` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_Matrix3f_transposed(const MR_Matrix3f *_this);

/// returns 3 Euler angles, assuming this is a rotation matrix composed as follows: R=R(z)*R(y)*R(x)
/// Generated from a method of class `MR::Matrix3f` named `toEulerAngles`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Matrix3f_toEulerAngles(const MR_Matrix3f *_this);

/// decompose this matrix on the product Q*R, where Q is orthogonal and R is upper triangular
/// Generated from a method of class `MR::Matrix3f` named `qr`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_float_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_float_QR *MR_Matrix3f_qr(const MR_Matrix3f *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<float>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3f *MR_Matrix3_float_QR_Get_q(const MR_Matrix3_float_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<float>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_float_QR_Set_q(MR_Matrix3_float_QR *_this, MR_Matrix3f value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<float>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3f *MR_Matrix3_float_QR_GetMutable_q(MR_Matrix3_float_QR *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<float>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3f *MR_Matrix3_float_QR_Get_r(const MR_Matrix3_float_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<float>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_float_QR_Set_r(MR_Matrix3_float_QR *_this, MR_Matrix3f value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<float>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3f *MR_Matrix3_float_QR_GetMutable_r(MR_Matrix3_float_QR *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_float_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_float_QR *MR_Matrix3_float_QR_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3_float_QR_DestroyArray()`.
/// Use `MR_Matrix3_float_QR_OffsetMutablePtr()` and `MR_Matrix3_float_QR_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3_float_QR *MR_Matrix3_float_QR_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Matrix3<float>::QR` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_float_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_float_QR *MR_Matrix3_float_QR_ConstructFrom(MR_Matrix3f q, MR_Matrix3f r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Matrix3_float_QR *MR_Matrix3_float_QR_OffsetPtr(const MR_Matrix3_float_QR *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Matrix3_float_QR *MR_Matrix3_float_QR_OffsetMutablePtr(MR_Matrix3_float_QR *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Matrix3<float>::QR`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_float_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_float_QR *MR_Matrix3_float_QR_ConstructFromAnother(const MR_Matrix3_float_QR *_other);

/// Destroys a heap-allocated instance of `MR_Matrix3_float_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_float_QR_Destroy(const MR_Matrix3_float_QR *_this);

/// Destroys a heap-allocated array of `MR_Matrix3_float_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_float_QR_DestroyArray(const MR_Matrix3_float_QR *_this);

/// Generated from a method of class `MR::Matrix3<float>::QR` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3_float_QR *MR_Matrix3_float_QR_AssignFromAnother(MR_Matrix3_float_QR *_this, const MR_Matrix3_float_QR *_other);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix3f(const MR_Matrix3f *a, const MR_Matrix3f *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix3f(const MR_Matrix3f *a, const MR_Matrix3f *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_add_MR_Matrix3f(const MR_Matrix3f *a, const MR_Matrix3f *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_sub_MR_Matrix3f(const MR_Matrix3f *a, const MR_Matrix3f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_mul_float_MR_Matrix3f(float a, const MR_Matrix3f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_mul_MR_Matrix3f_float(const MR_Matrix3f *b, float a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix3f MR_div_MR_Matrix3f_float(MR_Matrix3f b, float a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3f *MR_add_assign_MR_Matrix3f(MR_Matrix3f *a, const MR_Matrix3f *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3f *MR_sub_assign_MR_Matrix3f(MR_Matrix3f *a, const MR_Matrix3f *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3f *MR_mul_assign_MR_Matrix3f_float(MR_Matrix3f *a, float b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3f *MR_div_assign_MR_Matrix3f_float(MR_Matrix3f *a, float b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3f MR_mul_MR_Matrix3f_MR_Vector3f(const MR_Matrix3f *a, const MR_Vector3f *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3f MR_mul_MR_Matrix3f(const MR_Matrix3f *a, const MR_Matrix3f *b);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Matrix3d MR_Matrix3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3d_DestroyArray()`.
/// Use `MR_Matrix3d_OffsetMutablePtr()` and `MR_Matrix3d_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3d *MR_Matrix3d_DefaultConstructArray(size_t num_elems);

/// initializes matrix from its 3 rows
/// Generated from a constructor of class `MR::Matrix3d`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_Construct(const MR_Vector3d *x, const MR_Vector3d *y, const MR_Vector3d *z);

/// Generated from a constructor of class `MR::Matrix3d`.
/// Parameter `m` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_Construct_double(const MR_Matrix3d *m);

/// Generated from a method of class `MR::Matrix3d` named `zero`.
MRC_API MR_Matrix3d MR_Matrix3d_zero(void);

/// Generated from a method of class `MR::Matrix3d` named `identity`.
MRC_API MR_Matrix3d MR_Matrix3d_identity(void);

/// returns a matrix that scales uniformly
/// Generated from a method of class `MR::Matrix3d` named `scale`.
MRC_API MR_Matrix3d MR_Matrix3d_scale_1_double(double s);

/// returns a matrix that has its own scale along each axis
/// Generated from a method of class `MR::Matrix3d` named `scale`.
MRC_API MR_Matrix3d MR_Matrix3d_scale_3(double sx, double sy, double sz);

/// Generated from a method of class `MR::Matrix3d` named `scale`.
/// Parameter `s` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_scale_1_MR_Vector3d(const MR_Vector3d *s);

/// creates matrix representing rotation around given axis on given angle
/// Generated from a method of class `MR::Matrix3d` named `rotation`.
/// Parameter `axis` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_rotation_double(const MR_Vector3d *axis, double angle);

/// creates matrix representing rotation that after application to (from) makes (to) vector
/// Generated from a method of class `MR::Matrix3d` named `rotation`.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `to` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_rotation_MR_Vector3d(const MR_Vector3d *from, const MR_Vector3d *to);

/// creates matrix representing rotation from 3 Euler angles: R=R(z)*R(y)*R(x)
/// see more https://en.wikipedia.org/wiki/Euler_angles#Conventions_by_intrinsic_rotations
/// Generated from a method of class `MR::Matrix3d` named `rotationFromEuler`.
/// Parameter `eulerAngles` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_rotationFromEuler(const MR_Vector3d *eulerAngles);

/// returns linear by angles approximation of the rotation matrix, which is close to true rotation matrix for small angles
/// Generated from a method of class `MR::Matrix3d` named `approximateLinearRotationMatrixFromEuler`.
/// Parameter `eulerAngles` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_approximateLinearRotationMatrixFromEuler(const MR_Vector3d *eulerAngles);

/// constructs a matrix from its 3 rows
/// Generated from a method of class `MR::Matrix3d` named `fromRows`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_fromRows(const MR_Vector3d *x, const MR_Vector3d *y, const MR_Vector3d *z);

/// constructs a matrix from its 3 columns;
/// use this method to get the matrix that transforms basis vectors ( plusX, plusY, plusZ ) into vectors ( x, y, z ) respectively
/// Generated from a method of class `MR::Matrix3d` named `fromColumns`.
/// Parameter `x` can not be null. It is a single object.
/// Parameter `y` can not be null. It is a single object.
/// Parameter `z` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_fromColumns(const MR_Vector3d *x, const MR_Vector3d *y, const MR_Vector3d *z);

/// row access
/// Generated from a method of class `MR::Matrix3d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Matrix3d_index_const(const MR_Matrix3d *_this, int32_t row);

/// Generated from a method of class `MR::Matrix3d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Matrix3d_index(MR_Matrix3d *_this, int32_t row);

/// column access
/// Generated from a method of class `MR::Matrix3d` named `col`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Matrix3d_col(const MR_Matrix3d *_this, int32_t i);

/// computes trace of the matrix
/// Generated from a method of class `MR::Matrix3d` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix3d_trace(const MR_Matrix3d *_this);

/// compute sum of squared matrix elements
/// Generated from a method of class `MR::Matrix3d` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix3d_normSq(const MR_Matrix3d *_this);

/// Generated from a method of class `MR::Matrix3d` named `norm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix3d_norm(const MR_Matrix3d *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::Matrix3d` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Matrix3d_det(const MR_Matrix3d *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::Matrix3d` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_inverse(const MR_Matrix3d *_this);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix3d` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_Matrix3d_transposed(const MR_Matrix3d *_this);

/// returns 3 Euler angles, assuming this is a rotation matrix composed as follows: R=R(z)*R(y)*R(x)
/// Generated from a method of class `MR::Matrix3d` named `toEulerAngles`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Matrix3d_toEulerAngles(const MR_Matrix3d *_this);

/// decompose this matrix on the product Q*R, where Q is orthogonal and R is upper triangular
/// Generated from a method of class `MR::Matrix3d` named `qr`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_double_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_double_QR *MR_Matrix3d_qr(const MR_Matrix3d *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<double>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3d *MR_Matrix3_double_QR_Get_q(const MR_Matrix3_double_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<double>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_double_QR_Set_q(MR_Matrix3_double_QR *_this, MR_Matrix3d value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<double>::QR` named `q`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3d *MR_Matrix3_double_QR_GetMutable_q(MR_Matrix3_double_QR *_this);

/// Returns a pointer to a member variable of class `MR::Matrix3<double>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix3d *MR_Matrix3_double_QR_Get_r(const MR_Matrix3_double_QR *_this);

/// Modifies a member variable of class `MR::Matrix3<double>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix3_double_QR_Set_r(MR_Matrix3_double_QR *_this, MR_Matrix3d value);

/// Returns a mutable pointer to a member variable of class `MR::Matrix3<double>::QR` named `r`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3d *MR_Matrix3_double_QR_GetMutable_r(MR_Matrix3_double_QR *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_double_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_double_QR *MR_Matrix3_double_QR_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix3_double_QR_DestroyArray()`.
/// Use `MR_Matrix3_double_QR_OffsetMutablePtr()` and `MR_Matrix3_double_QR_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix3_double_QR *MR_Matrix3_double_QR_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Matrix3<double>::QR` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_double_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_double_QR *MR_Matrix3_double_QR_ConstructFrom(MR_Matrix3d q, MR_Matrix3d r);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Matrix3_double_QR *MR_Matrix3_double_QR_OffsetPtr(const MR_Matrix3_double_QR *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Matrix3_double_QR *MR_Matrix3_double_QR_OffsetMutablePtr(MR_Matrix3_double_QR *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Matrix3<double>::QR`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix3_double_QR_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix3_double_QR *MR_Matrix3_double_QR_ConstructFromAnother(const MR_Matrix3_double_QR *_other);

/// Destroys a heap-allocated instance of `MR_Matrix3_double_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_double_QR_Destroy(const MR_Matrix3_double_QR *_this);

/// Destroys a heap-allocated array of `MR_Matrix3_double_QR`. Does nothing if the pointer is null.
MRC_API void MR_Matrix3_double_QR_DestroyArray(const MR_Matrix3_double_QR *_this);

/// Generated from a method of class `MR::Matrix3<double>::QR` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3_double_QR *MR_Matrix3_double_QR_AssignFromAnother(MR_Matrix3_double_QR *_this, const MR_Matrix3_double_QR *_other);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Matrix3d(const MR_Matrix3d *a, const MR_Matrix3d *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Matrix3d(const MR_Matrix3d *a, const MR_Matrix3d *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_add_MR_Matrix3d(const MR_Matrix3d *a, const MR_Matrix3d *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_sub_MR_Matrix3d(const MR_Matrix3d *a, const MR_Matrix3d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_mul_double_MR_Matrix3d(double a, const MR_Matrix3d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_mul_MR_Matrix3d_double(const MR_Matrix3d *b, double a);

/// Generated from function `MR::operator/`.
MRC_API MR_Matrix3d MR_div_MR_Matrix3d_double(MR_Matrix3d b, double a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3d *MR_add_assign_MR_Matrix3d(MR_Matrix3d *a, const MR_Matrix3d *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3d *MR_sub_assign_MR_Matrix3d(MR_Matrix3d *a, const MR_Matrix3d *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3d *MR_mul_assign_MR_Matrix3d_double(MR_Matrix3d *a, double b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix3d *MR_div_assign_MR_Matrix3d_double(MR_Matrix3d *a, double b);

/// x = a * b
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3d MR_mul_MR_Matrix3d_MR_Vector3d(const MR_Matrix3d *a, const MR_Vector3d *b);

/// product of two matrices
/// Generated from function `MR::operator*`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Matrix3d MR_mul_MR_Matrix3d(const MR_Matrix3d *a, const MR_Matrix3d *b);

#ifdef __cplusplus
} // extern "C"
#endif
