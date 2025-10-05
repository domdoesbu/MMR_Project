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

typedef struct MR_Matrix2d MR_Matrix2d; // Defined in `#include <MRCMesh/MRMatrix2.h>`.
typedef struct MR_Matrix2f MR_Matrix2f; // Defined in `#include <MRCMesh/MRMatrix2.h>`.


/// symmetric 2x2 matrix
/// Generated from class `MR::SymMatrix2b`.
typedef struct MR_SymMatrix2b MR_SymMatrix2b;

/// symmetric 2x2 matrix
/// Generated from class `MR::SymMatrix2i`.
typedef struct MR_SymMatrix2i MR_SymMatrix2i;

/// symmetric 2x2 matrix
/// Generated from class `MR::SymMatrix2i64`.
typedef struct MR_SymMatrix2i64 MR_SymMatrix2i64;

/// symmetric 2x2 matrix
/// Generated from class `MR::SymMatrix2f`.
typedef struct MR_SymMatrix2f MR_SymMatrix2f;

/// symmetric 2x2 matrix
/// Generated from class `MR::SymMatrix2d`.
typedef struct MR_SymMatrix2d MR_SymMatrix2d;

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2b` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix2b_Get_xx(const MR_SymMatrix2b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2b` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2b_Set_xx(MR_SymMatrix2b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2b` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix2b_GetMutable_xx(MR_SymMatrix2b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2b` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix2b_Get_xy(const MR_SymMatrix2b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2b` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2b_Set_xy(MR_SymMatrix2b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2b` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix2b_GetMutable_xy(MR_SymMatrix2b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2b` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix2b_Get_yy(const MR_SymMatrix2b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2b` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2b_Set_yy(MR_SymMatrix2b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2b` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix2b_GetMutable_yy(MR_SymMatrix2b *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix2b_DestroyArray()`.
/// Use `MR_SymMatrix2b_OffsetMutablePtr()` and `MR_SymMatrix2b_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix2b *MR_SymMatrix2b_OffsetPtr(const MR_SymMatrix2b *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_OffsetMutablePtr(MR_SymMatrix2b *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix2b`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_ConstructFromAnother(const MR_SymMatrix2b *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix2b`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2b_Destroy(const MR_SymMatrix2b *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix2b`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2b_DestroyArray(const MR_SymMatrix2b *_this);

/// Generated from a method of class `MR::SymMatrix2b` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_AssignFromAnother(MR_SymMatrix2b *_this, const MR_SymMatrix2b *_other);

/// Generated from a method of class `MR::SymMatrix2b` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_identity(void);

/// Generated from a method of class `MR::SymMatrix2b` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_diagonal(bool diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix2b` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SymMatrix2b_trace(const MR_SymMatrix2b *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 4 squared elements
/// Generated from a method of class `MR::SymMatrix2b` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SymMatrix2b_normSq(const MR_SymMatrix2b *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix2b` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SymMatrix2b_det(const MR_SymMatrix2b *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix2b` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_inverse_0(const MR_SymMatrix2b *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix2b` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_inverse_1(const MR_SymMatrix2b *_this, bool det);

/// Generated from a method of class `MR::SymMatrix2b` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_add_assign(MR_SymMatrix2b *_this, const MR_SymMatrix2b *b);

/// Generated from a method of class `MR::SymMatrix2b` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_sub_assign(MR_SymMatrix2b *_this, const MR_SymMatrix2b *b);

/// Generated from a method of class `MR::SymMatrix2b` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_mul_assign(MR_SymMatrix2b *_this, bool b);

/// Generated from a method of class `MR::SymMatrix2b` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2b *MR_SymMatrix2b_div_assign(MR_SymMatrix2b *_this, bool b);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2i` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix2i_Get_xx(const MR_SymMatrix2i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2i` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2i_Set_xx(MR_SymMatrix2i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2i` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix2i_GetMutable_xx(MR_SymMatrix2i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2i` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix2i_Get_xy(const MR_SymMatrix2i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2i` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2i_Set_xy(MR_SymMatrix2i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2i` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix2i_GetMutable_xy(MR_SymMatrix2i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2i` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix2i_Get_yy(const MR_SymMatrix2i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2i` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2i_Set_yy(MR_SymMatrix2i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2i` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix2i_GetMutable_yy(MR_SymMatrix2i *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix2i_DestroyArray()`.
/// Use `MR_SymMatrix2i_OffsetMutablePtr()` and `MR_SymMatrix2i_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix2i *MR_SymMatrix2i_OffsetPtr(const MR_SymMatrix2i *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_OffsetMutablePtr(MR_SymMatrix2i *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix2i`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_ConstructFromAnother(const MR_SymMatrix2i *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix2i`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2i_Destroy(const MR_SymMatrix2i *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix2i`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2i_DestroyArray(const MR_SymMatrix2i *_this);

/// Generated from a method of class `MR::SymMatrix2i` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_AssignFromAnother(MR_SymMatrix2i *_this, const MR_SymMatrix2i *_other);

/// Generated from a method of class `MR::SymMatrix2i` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_identity(void);

/// Generated from a method of class `MR::SymMatrix2i` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_diagonal(int32_t diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix2i` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SymMatrix2i_trace(const MR_SymMatrix2i *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 4 squared elements
/// Generated from a method of class `MR::SymMatrix2i` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SymMatrix2i_normSq(const MR_SymMatrix2i *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix2i` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SymMatrix2i_det(const MR_SymMatrix2i *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix2i` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_inverse_0(const MR_SymMatrix2i *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix2i` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_inverse_1(const MR_SymMatrix2i *_this, int32_t det);

/// Generated from a method of class `MR::SymMatrix2i` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_add_assign(MR_SymMatrix2i *_this, const MR_SymMatrix2i *b);

/// Generated from a method of class `MR::SymMatrix2i` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_sub_assign(MR_SymMatrix2i *_this, const MR_SymMatrix2i *b);

/// Generated from a method of class `MR::SymMatrix2i` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_mul_assign(MR_SymMatrix2i *_this, int32_t b);

/// Generated from a method of class `MR::SymMatrix2i` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i *MR_SymMatrix2i_div_assign(MR_SymMatrix2i *_this, int32_t b);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2i64` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix2i64_Get_xx(const MR_SymMatrix2i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2i64` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2i64_Set_xx(MR_SymMatrix2i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2i64` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix2i64_GetMutable_xx(MR_SymMatrix2i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2i64` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix2i64_Get_xy(const MR_SymMatrix2i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2i64` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2i64_Set_xy(MR_SymMatrix2i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2i64` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix2i64_GetMutable_xy(MR_SymMatrix2i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2i64` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix2i64_Get_yy(const MR_SymMatrix2i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2i64` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2i64_Set_yy(MR_SymMatrix2i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2i64` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix2i64_GetMutable_yy(MR_SymMatrix2i64 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix2i64_DestroyArray()`.
/// Use `MR_SymMatrix2i64_OffsetMutablePtr()` and `MR_SymMatrix2i64_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix2i64 *MR_SymMatrix2i64_OffsetPtr(const MR_SymMatrix2i64 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_OffsetMutablePtr(MR_SymMatrix2i64 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix2i64`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_ConstructFromAnother(const MR_SymMatrix2i64 *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix2i64`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2i64_Destroy(const MR_SymMatrix2i64 *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix2i64`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2i64_DestroyArray(const MR_SymMatrix2i64 *_this);

/// Generated from a method of class `MR::SymMatrix2i64` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_AssignFromAnother(MR_SymMatrix2i64 *_this, const MR_SymMatrix2i64 *_other);

/// Generated from a method of class `MR::SymMatrix2i64` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_identity(void);

/// Generated from a method of class `MR::SymMatrix2i64` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_diagonal(MR_int64_t diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix2i64` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_SymMatrix2i64_trace(const MR_SymMatrix2i64 *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 4 squared elements
/// Generated from a method of class `MR::SymMatrix2i64` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_SymMatrix2i64_normSq(const MR_SymMatrix2i64 *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix2i64` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_SymMatrix2i64_det(const MR_SymMatrix2i64 *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix2i64` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_inverse_0(const MR_SymMatrix2i64 *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix2i64` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_inverse_1(const MR_SymMatrix2i64 *_this, MR_int64_t det);

/// Generated from a method of class `MR::SymMatrix2i64` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_add_assign(MR_SymMatrix2i64 *_this, const MR_SymMatrix2i64 *b);

/// Generated from a method of class `MR::SymMatrix2i64` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_sub_assign(MR_SymMatrix2i64 *_this, const MR_SymMatrix2i64 *b);

/// Generated from a method of class `MR::SymMatrix2i64` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_mul_assign(MR_SymMatrix2i64 *_this, MR_int64_t b);

/// Generated from a method of class `MR::SymMatrix2i64` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2i64 *MR_SymMatrix2i64_div_assign(MR_SymMatrix2i64 *_this, MR_int64_t b);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2f` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix2f_Get_xx(const MR_SymMatrix2f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2f` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2f_Set_xx(MR_SymMatrix2f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2f` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix2f_GetMutable_xx(MR_SymMatrix2f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2f` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix2f_Get_xy(const MR_SymMatrix2f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2f` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2f_Set_xy(MR_SymMatrix2f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2f` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix2f_GetMutable_xy(MR_SymMatrix2f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2f` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix2f_Get_yy(const MR_SymMatrix2f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2f` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2f_Set_yy(MR_SymMatrix2f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2f` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix2f_GetMutable_yy(MR_SymMatrix2f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix2f_DestroyArray()`.
/// Use `MR_SymMatrix2f_OffsetMutablePtr()` and `MR_SymMatrix2f_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix2f *MR_SymMatrix2f_OffsetPtr(const MR_SymMatrix2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_OffsetMutablePtr(MR_SymMatrix2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix2f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_ConstructFromAnother(const MR_SymMatrix2f *_other);

/// Generated from a constructor of class `MR::SymMatrix2f`.
/// Parameter `m` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_Construct(const MR_SymMatrix2f *m);

/// Destroys a heap-allocated instance of `MR_SymMatrix2f`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2f_Destroy(const MR_SymMatrix2f *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix2f`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2f_DestroyArray(const MR_SymMatrix2f *_this);

/// Generated from a method of class `MR::SymMatrix2f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_AssignFromAnother(MR_SymMatrix2f *_this, const MR_SymMatrix2f *_other);

/// Generated from a method of class `MR::SymMatrix2f` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_identity(void);

/// Generated from a method of class `MR::SymMatrix2f` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_diagonal(float diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix2f` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SymMatrix2f_trace(const MR_SymMatrix2f *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 4 squared elements
/// Generated from a method of class `MR::SymMatrix2f` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SymMatrix2f_normSq(const MR_SymMatrix2f *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix2f` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SymMatrix2f_det(const MR_SymMatrix2f *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix2f` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_inverse_0(const MR_SymMatrix2f *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix2f` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_inverse_1(const MR_SymMatrix2f *_this, float det);

/// Generated from a method of class `MR::SymMatrix2f` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_add_assign(MR_SymMatrix2f *_this, const MR_SymMatrix2f *b);

/// Generated from a method of class `MR::SymMatrix2f` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_sub_assign(MR_SymMatrix2f *_this, const MR_SymMatrix2f *b);

/// Generated from a method of class `MR::SymMatrix2f` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_mul_assign(MR_SymMatrix2f *_this, float b);

/// Generated from a method of class `MR::SymMatrix2f` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_div_assign(MR_SymMatrix2f *_this, float b);

/// returns eigenvalues of the matrix in ascending order (diagonal matrix L), and
/// optionally returns corresponding unit eigenvectors in the rows of orthogonal matrix V,
/// M*V^T = V^T*L; M = V^T*L*V
/// Generated from a method of class `MR::SymMatrix2f` named `eigens`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `eigenvectors` defaults to a null pointer in C++.
MRC_API MR_Vector2f MR_SymMatrix2f_eigens(const MR_SymMatrix2f *_this, MR_Matrix2f *eigenvectors);

/// computes not-unit eigenvector corresponding to a not-repeating eigenvalue
/// Generated from a method of class `MR::SymMatrix2f` named `eigenvector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_SymMatrix2f_eigenvector(const MR_SymMatrix2f *_this, float eigenvalue);

/// computes not-unit eigenvector corresponding to maximum eigenvalue
/// Generated from a method of class `MR::SymMatrix2f` named `maxEigenvector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_SymMatrix2f_maxEigenvector(const MR_SymMatrix2f *_this);

/// for not-degenerate matrix returns just inverse matrix, otherwise
/// returns degenerate matrix, which performs inversion on not-kernel subspace;
/// \param tol relative epsilon-tolerance for too small number detection
/// \param rank optional output for this matrix rank according to given tolerance
/// \param space rank=1: unit direction of solution line, rank=2: zero vector
/// Generated from a method of class `MR::SymMatrix2f` named `pseudoinverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `tol` has a default argument: `std::numeric_limits<float>::epsilon()`, pass a null pointer to use it.
/// Parameter `rank` defaults to a null pointer in C++.
/// Parameter `space` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2f *MR_SymMatrix2f_pseudoinverse(const MR_SymMatrix2f *_this, const float *tol, int32_t *rank, MR_Vector2f *space);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2d` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix2d_Get_xx(const MR_SymMatrix2d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2d` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2d_Set_xx(MR_SymMatrix2d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2d` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix2d_GetMutable_xx(MR_SymMatrix2d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2d` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix2d_Get_xy(const MR_SymMatrix2d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2d` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2d_Set_xy(MR_SymMatrix2d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2d` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix2d_GetMutable_xy(MR_SymMatrix2d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix2d` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix2d_Get_yy(const MR_SymMatrix2d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix2d` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix2d_Set_yy(MR_SymMatrix2d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix2d` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix2d_GetMutable_yy(MR_SymMatrix2d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix2d_DestroyArray()`.
/// Use `MR_SymMatrix2d_OffsetMutablePtr()` and `MR_SymMatrix2d_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix2d *MR_SymMatrix2d_OffsetPtr(const MR_SymMatrix2d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_OffsetMutablePtr(MR_SymMatrix2d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix2d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_ConstructFromAnother(const MR_SymMatrix2d *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix2d`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2d_Destroy(const MR_SymMatrix2d *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix2d`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix2d_DestroyArray(const MR_SymMatrix2d *_this);

/// Generated from a method of class `MR::SymMatrix2d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_AssignFromAnother(MR_SymMatrix2d *_this, const MR_SymMatrix2d *_other);

/// Generated from a method of class `MR::SymMatrix2d` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_identity(void);

/// Generated from a method of class `MR::SymMatrix2d` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_diagonal(double diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix2d` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_SymMatrix2d_trace(const MR_SymMatrix2d *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 4 squared elements
/// Generated from a method of class `MR::SymMatrix2d` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_SymMatrix2d_normSq(const MR_SymMatrix2d *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix2d` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_SymMatrix2d_det(const MR_SymMatrix2d *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix2d` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_inverse_0(const MR_SymMatrix2d *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix2d` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_inverse_1(const MR_SymMatrix2d *_this, double det);

/// Generated from a method of class `MR::SymMatrix2d` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_add_assign(MR_SymMatrix2d *_this, const MR_SymMatrix2d *b);

/// Generated from a method of class `MR::SymMatrix2d` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_sub_assign(MR_SymMatrix2d *_this, const MR_SymMatrix2d *b);

/// Generated from a method of class `MR::SymMatrix2d` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_mul_assign(MR_SymMatrix2d *_this, double b);

/// Generated from a method of class `MR::SymMatrix2d` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_div_assign(MR_SymMatrix2d *_this, double b);

/// returns eigenvalues of the matrix in ascending order (diagonal matrix L), and
/// optionally returns corresponding unit eigenvectors in the rows of orthogonal matrix V,
/// M*V^T = V^T*L; M = V^T*L*V
/// Generated from a method of class `MR::SymMatrix2d` named `eigens`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `eigenvectors` defaults to a null pointer in C++.
MRC_API MR_Vector2d MR_SymMatrix2d_eigens(const MR_SymMatrix2d *_this, MR_Matrix2d *eigenvectors);

/// computes not-unit eigenvector corresponding to a not-repeating eigenvalue
/// Generated from a method of class `MR::SymMatrix2d` named `eigenvector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_SymMatrix2d_eigenvector(const MR_SymMatrix2d *_this, double eigenvalue);

/// computes not-unit eigenvector corresponding to maximum eigenvalue
/// Generated from a method of class `MR::SymMatrix2d` named `maxEigenvector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_SymMatrix2d_maxEigenvector(const MR_SymMatrix2d *_this);

/// for not-degenerate matrix returns just inverse matrix, otherwise
/// returns degenerate matrix, which performs inversion on not-kernel subspace;
/// \param tol relative epsilon-tolerance for too small number detection
/// \param rank optional output for this matrix rank according to given tolerance
/// \param space rank=1: unit direction of solution line, rank=2: zero vector
/// Generated from a method of class `MR::SymMatrix2d` named `pseudoinverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `tol` has a default argument: `std::numeric_limits<double>::epsilon()`, pass a null pointer to use it.
/// Parameter `rank` defaults to a null pointer in C++.
/// Parameter `space` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix2d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix2d *MR_SymMatrix2d_pseudoinverse(const MR_SymMatrix2d *_this, const double *tol, int32_t *rank, MR_Vector2d *space);

#ifdef __cplusplus
} // extern "C"
#endif
