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

typedef struct MR_Matrix3d MR_Matrix3d; // Defined in `#include <MRCMesh/MRMatrix3.h>`.
typedef struct MR_Matrix3f MR_Matrix3f; // Defined in `#include <MRCMesh/MRMatrix3.h>`.


/// symmetric 3x3 matrix
/// Generated from class `MR::SymMatrix3b`.
typedef struct MR_SymMatrix3b MR_SymMatrix3b;

/// symmetric 3x3 matrix
/// Generated from class `MR::SymMatrix3i`.
typedef struct MR_SymMatrix3i MR_SymMatrix3i;

/// symmetric 3x3 matrix
/// Generated from class `MR::SymMatrix3i64`.
typedef struct MR_SymMatrix3i64 MR_SymMatrix3i64;

/// symmetric 3x3 matrix
/// Generated from class `MR::SymMatrix3f`.
typedef struct MR_SymMatrix3f MR_SymMatrix3f;

/// symmetric 3x3 matrix
/// Generated from class `MR::SymMatrix3d`.
typedef struct MR_SymMatrix3d MR_SymMatrix3d;

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3b` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix3b_Get_xx(const MR_SymMatrix3b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3b` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3b_Set_xx(MR_SymMatrix3b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3b` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix3b_GetMutable_xx(MR_SymMatrix3b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3b` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix3b_Get_xy(const MR_SymMatrix3b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3b` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3b_Set_xy(MR_SymMatrix3b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3b` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix3b_GetMutable_xy(MR_SymMatrix3b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3b` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix3b_Get_xz(const MR_SymMatrix3b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3b` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3b_Set_xz(MR_SymMatrix3b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3b` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix3b_GetMutable_xz(MR_SymMatrix3b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3b` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix3b_Get_yy(const MR_SymMatrix3b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3b` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3b_Set_yy(MR_SymMatrix3b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3b` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix3b_GetMutable_yy(MR_SymMatrix3b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3b` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix3b_Get_yz(const MR_SymMatrix3b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3b` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3b_Set_yz(MR_SymMatrix3b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3b` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix3b_GetMutable_yz(MR_SymMatrix3b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3b` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix3b_Get_zz(const MR_SymMatrix3b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3b` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3b_Set_zz(MR_SymMatrix3b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3b` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix3b_GetMutable_zz(MR_SymMatrix3b *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix3b_DestroyArray()`.
/// Use `MR_SymMatrix3b_OffsetMutablePtr()` and `MR_SymMatrix3b_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix3b *MR_SymMatrix3b_OffsetPtr(const MR_SymMatrix3b *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_OffsetMutablePtr(MR_SymMatrix3b *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix3b`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_ConstructFromAnother(const MR_SymMatrix3b *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix3b`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3b_Destroy(const MR_SymMatrix3b *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix3b`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3b_DestroyArray(const MR_SymMatrix3b *_this);

/// Generated from a method of class `MR::SymMatrix3b` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_AssignFromAnother(MR_SymMatrix3b *_this, const MR_SymMatrix3b *_other);

/// Generated from a method of class `MR::SymMatrix3b` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_identity(void);

/// Generated from a method of class `MR::SymMatrix3b` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_diagonal(bool diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix3b` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SymMatrix3b_trace(const MR_SymMatrix3b *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 9 squared elements
/// Generated from a method of class `MR::SymMatrix3b` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SymMatrix3b_normSq(const MR_SymMatrix3b *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix3b` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SymMatrix3b_det(const MR_SymMatrix3b *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix3b` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_inverse_0(const MR_SymMatrix3b *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix3b` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_inverse_1(const MR_SymMatrix3b *_this, bool det);

/// Generated from a method of class `MR::SymMatrix3b` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_add_assign(MR_SymMatrix3b *_this, const MR_SymMatrix3b *b);

/// Generated from a method of class `MR::SymMatrix3b` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_sub_assign(MR_SymMatrix3b *_this, const MR_SymMatrix3b *b);

/// Generated from a method of class `MR::SymMatrix3b` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_mul_assign(MR_SymMatrix3b *_this, bool b);

/// Generated from a method of class `MR::SymMatrix3b` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3b *MR_SymMatrix3b_div_assign(MR_SymMatrix3b *_this, bool b);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix3i_Get_xx(const MR_SymMatrix3i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i_Set_xx(MR_SymMatrix3i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix3i_GetMutable_xx(MR_SymMatrix3i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix3i_Get_xy(const MR_SymMatrix3i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i_Set_xy(MR_SymMatrix3i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix3i_GetMutable_xy(MR_SymMatrix3i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix3i_Get_xz(const MR_SymMatrix3i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i_Set_xz(MR_SymMatrix3i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix3i_GetMutable_xz(MR_SymMatrix3i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix3i_Get_yy(const MR_SymMatrix3i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i_Set_yy(MR_SymMatrix3i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix3i_GetMutable_yy(MR_SymMatrix3i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix3i_Get_yz(const MR_SymMatrix3i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i_Set_yz(MR_SymMatrix3i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix3i_GetMutable_yz(MR_SymMatrix3i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix3i_Get_zz(const MR_SymMatrix3i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i_Set_zz(MR_SymMatrix3i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix3i_GetMutable_zz(MR_SymMatrix3i *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix3i_DestroyArray()`.
/// Use `MR_SymMatrix3i_OffsetMutablePtr()` and `MR_SymMatrix3i_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix3i *MR_SymMatrix3i_OffsetPtr(const MR_SymMatrix3i *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_OffsetMutablePtr(MR_SymMatrix3i *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix3i`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_ConstructFromAnother(const MR_SymMatrix3i *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix3i`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3i_Destroy(const MR_SymMatrix3i *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix3i`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3i_DestroyArray(const MR_SymMatrix3i *_this);

/// Generated from a method of class `MR::SymMatrix3i` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_AssignFromAnother(MR_SymMatrix3i *_this, const MR_SymMatrix3i *_other);

/// Generated from a method of class `MR::SymMatrix3i` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_identity(void);

/// Generated from a method of class `MR::SymMatrix3i` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_diagonal(int32_t diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix3i` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SymMatrix3i_trace(const MR_SymMatrix3i *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 9 squared elements
/// Generated from a method of class `MR::SymMatrix3i` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SymMatrix3i_normSq(const MR_SymMatrix3i *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix3i` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SymMatrix3i_det(const MR_SymMatrix3i *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix3i` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_inverse_0(const MR_SymMatrix3i *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix3i` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_inverse_1(const MR_SymMatrix3i *_this, int32_t det);

/// Generated from a method of class `MR::SymMatrix3i` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_add_assign(MR_SymMatrix3i *_this, const MR_SymMatrix3i *b);

/// Generated from a method of class `MR::SymMatrix3i` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_sub_assign(MR_SymMatrix3i *_this, const MR_SymMatrix3i *b);

/// Generated from a method of class `MR::SymMatrix3i` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_mul_assign(MR_SymMatrix3i *_this, int32_t b);

/// Generated from a method of class `MR::SymMatrix3i` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i *MR_SymMatrix3i_div_assign(MR_SymMatrix3i *_this, int32_t b);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i64` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix3i64_Get_xx(const MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i64` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i64_Set_xx(MR_SymMatrix3i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i64` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix3i64_GetMutable_xx(MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i64` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix3i64_Get_xy(const MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i64` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i64_Set_xy(MR_SymMatrix3i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i64` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix3i64_GetMutable_xy(MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i64` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix3i64_Get_xz(const MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i64` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i64_Set_xz(MR_SymMatrix3i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i64` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix3i64_GetMutable_xz(MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i64` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix3i64_Get_yy(const MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i64` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i64_Set_yy(MR_SymMatrix3i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i64` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix3i64_GetMutable_yy(MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i64` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix3i64_Get_yz(const MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i64` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i64_Set_yz(MR_SymMatrix3i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i64` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix3i64_GetMutable_yz(MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3i64` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix3i64_Get_zz(const MR_SymMatrix3i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3i64` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3i64_Set_zz(MR_SymMatrix3i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3i64` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix3i64_GetMutable_zz(MR_SymMatrix3i64 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix3i64_DestroyArray()`.
/// Use `MR_SymMatrix3i64_OffsetMutablePtr()` and `MR_SymMatrix3i64_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix3i64 *MR_SymMatrix3i64_OffsetPtr(const MR_SymMatrix3i64 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_OffsetMutablePtr(MR_SymMatrix3i64 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix3i64`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_ConstructFromAnother(const MR_SymMatrix3i64 *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix3i64`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3i64_Destroy(const MR_SymMatrix3i64 *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix3i64`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3i64_DestroyArray(const MR_SymMatrix3i64 *_this);

/// Generated from a method of class `MR::SymMatrix3i64` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_AssignFromAnother(MR_SymMatrix3i64 *_this, const MR_SymMatrix3i64 *_other);

/// Generated from a method of class `MR::SymMatrix3i64` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_identity(void);

/// Generated from a method of class `MR::SymMatrix3i64` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_diagonal(MR_int64_t diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix3i64` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_SymMatrix3i64_trace(const MR_SymMatrix3i64 *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 9 squared elements
/// Generated from a method of class `MR::SymMatrix3i64` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_SymMatrix3i64_normSq(const MR_SymMatrix3i64 *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix3i64` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_SymMatrix3i64_det(const MR_SymMatrix3i64 *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix3i64` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_inverse_0(const MR_SymMatrix3i64 *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix3i64` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_inverse_1(const MR_SymMatrix3i64 *_this, MR_int64_t det);

/// Generated from a method of class `MR::SymMatrix3i64` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_add_assign(MR_SymMatrix3i64 *_this, const MR_SymMatrix3i64 *b);

/// Generated from a method of class `MR::SymMatrix3i64` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_sub_assign(MR_SymMatrix3i64 *_this, const MR_SymMatrix3i64 *b);

/// Generated from a method of class `MR::SymMatrix3i64` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_mul_assign(MR_SymMatrix3i64 *_this, MR_int64_t b);

/// Generated from a method of class `MR::SymMatrix3i64` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3i64 *MR_SymMatrix3i64_div_assign(MR_SymMatrix3i64 *_this, MR_int64_t b);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3f` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix3f_Get_xx(const MR_SymMatrix3f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3f` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3f_Set_xx(MR_SymMatrix3f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3f` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix3f_GetMutable_xx(MR_SymMatrix3f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3f` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix3f_Get_xy(const MR_SymMatrix3f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3f` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3f_Set_xy(MR_SymMatrix3f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3f` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix3f_GetMutable_xy(MR_SymMatrix3f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3f` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix3f_Get_xz(const MR_SymMatrix3f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3f` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3f_Set_xz(MR_SymMatrix3f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3f` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix3f_GetMutable_xz(MR_SymMatrix3f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3f` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix3f_Get_yy(const MR_SymMatrix3f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3f` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3f_Set_yy(MR_SymMatrix3f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3f` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix3f_GetMutable_yy(MR_SymMatrix3f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3f` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix3f_Get_yz(const MR_SymMatrix3f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3f` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3f_Set_yz(MR_SymMatrix3f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3f` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix3f_GetMutable_yz(MR_SymMatrix3f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3f` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix3f_Get_zz(const MR_SymMatrix3f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3f` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3f_Set_zz(MR_SymMatrix3f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3f` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix3f_GetMutable_zz(MR_SymMatrix3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix3f_DestroyArray()`.
/// Use `MR_SymMatrix3f_OffsetMutablePtr()` and `MR_SymMatrix3f_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix3f *MR_SymMatrix3f_OffsetPtr(const MR_SymMatrix3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_OffsetMutablePtr(MR_SymMatrix3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_ConstructFromAnother(const MR_SymMatrix3f *_other);

/// Generated from a constructor of class `MR::SymMatrix3f`.
/// Parameter `m` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_Construct(const MR_SymMatrix3f *m);

/// Destroys a heap-allocated instance of `MR_SymMatrix3f`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3f_Destroy(const MR_SymMatrix3f *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix3f`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3f_DestroyArray(const MR_SymMatrix3f *_this);

/// Generated from a method of class `MR::SymMatrix3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_AssignFromAnother(MR_SymMatrix3f *_this, const MR_SymMatrix3f *_other);

/// Generated from a method of class `MR::SymMatrix3f` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_identity(void);

/// Generated from a method of class `MR::SymMatrix3f` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_diagonal(float diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix3f` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SymMatrix3f_trace(const MR_SymMatrix3f *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 9 squared elements
/// Generated from a method of class `MR::SymMatrix3f` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SymMatrix3f_normSq(const MR_SymMatrix3f *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix3f` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SymMatrix3f_det(const MR_SymMatrix3f *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix3f` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_inverse_0(const MR_SymMatrix3f *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix3f` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_inverse_1(const MR_SymMatrix3f *_this, float det);

/// Generated from a method of class `MR::SymMatrix3f` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_add_assign(MR_SymMatrix3f *_this, const MR_SymMatrix3f *b);

/// Generated from a method of class `MR::SymMatrix3f` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_sub_assign(MR_SymMatrix3f *_this, const MR_SymMatrix3f *b);

/// Generated from a method of class `MR::SymMatrix3f` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_mul_assign(MR_SymMatrix3f *_this, float b);

/// Generated from a method of class `MR::SymMatrix3f` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_div_assign(MR_SymMatrix3f *_this, float b);

/// returns eigenvalues of the matrix in ascending order (diagonal matrix L), and
/// optionally returns corresponding unit eigenvectors in the rows of orthogonal matrix V,
/// M*V^T = V^T*L; M = V^T*L*V
/// Generated from a method of class `MR::SymMatrix3f` named `eigens`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `eigenvectors` defaults to a null pointer in C++.
MRC_API MR_Vector3f MR_SymMatrix3f_eigens(const MR_SymMatrix3f *_this, MR_Matrix3f *eigenvectors);

/// computes not-unit eigenvector corresponding to a not-repeating eigenvalue
/// Generated from a method of class `MR::SymMatrix3f` named `eigenvector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_SymMatrix3f_eigenvector(const MR_SymMatrix3f *_this, float eigenvalue);

/// for not-degenerate matrix returns just inverse matrix, otherwise
/// returns degenerate matrix, which performs inversion on not-kernel subspace;
/// \param tol relative epsilon-tolerance for too small number detection
/// \param rank optional output for this matrix rank according to given tolerance
/// \param space rank=1: unit direction of solution line, rank=2: unit normal to solution plane, rank=3: zero vector
/// Generated from a method of class `MR::SymMatrix3f` named `pseudoinverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `tol` has a default argument: `std::numeric_limits<float>::epsilon()`, pass a null pointer to use it.
/// Parameter `rank` defaults to a null pointer in C++.
/// Parameter `space` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3f *MR_SymMatrix3f_pseudoinverse(const MR_SymMatrix3f *_this, const float *tol, int32_t *rank, MR_Vector3f *space);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3d` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix3d_Get_xx(const MR_SymMatrix3d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3d` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3d_Set_xx(MR_SymMatrix3d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3d` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix3d_GetMutable_xx(MR_SymMatrix3d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3d` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix3d_Get_xy(const MR_SymMatrix3d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3d` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3d_Set_xy(MR_SymMatrix3d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3d` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix3d_GetMutable_xy(MR_SymMatrix3d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3d` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix3d_Get_xz(const MR_SymMatrix3d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3d` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3d_Set_xz(MR_SymMatrix3d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3d` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix3d_GetMutable_xz(MR_SymMatrix3d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3d` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix3d_Get_yy(const MR_SymMatrix3d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3d` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3d_Set_yy(MR_SymMatrix3d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3d` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix3d_GetMutable_yy(MR_SymMatrix3d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3d` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix3d_Get_yz(const MR_SymMatrix3d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3d` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3d_Set_yz(MR_SymMatrix3d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3d` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix3d_GetMutable_yz(MR_SymMatrix3d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix3d` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix3d_Get_zz(const MR_SymMatrix3d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix3d` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix3d_Set_zz(MR_SymMatrix3d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix3d` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix3d_GetMutable_zz(MR_SymMatrix3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix3d_DestroyArray()`.
/// Use `MR_SymMatrix3d_OffsetMutablePtr()` and `MR_SymMatrix3d_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix3d *MR_SymMatrix3d_OffsetPtr(const MR_SymMatrix3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_OffsetMutablePtr(MR_SymMatrix3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_ConstructFromAnother(const MR_SymMatrix3d *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix3d`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3d_Destroy(const MR_SymMatrix3d *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix3d`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix3d_DestroyArray(const MR_SymMatrix3d *_this);

/// Generated from a method of class `MR::SymMatrix3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_AssignFromAnother(MR_SymMatrix3d *_this, const MR_SymMatrix3d *_other);

/// Generated from a method of class `MR::SymMatrix3d` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_identity(void);

/// Generated from a method of class `MR::SymMatrix3d` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_diagonal(double diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix3d` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_SymMatrix3d_trace(const MR_SymMatrix3d *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 9 squared elements
/// Generated from a method of class `MR::SymMatrix3d` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_SymMatrix3d_normSq(const MR_SymMatrix3d *_this);

/// computes determinant of the matrix
/// Generated from a method of class `MR::SymMatrix3d` named `det`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_SymMatrix3d_det(const MR_SymMatrix3d *_this);

/// computes inverse matrix
/// Generated from a method of class `MR::SymMatrix3d` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_inverse_0(const MR_SymMatrix3d *_this);

/// computes inverse matrix given determinant of this
/// Generated from a method of class `MR::SymMatrix3d` named `inverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_inverse_1(const MR_SymMatrix3d *_this, double det);

/// Generated from a method of class `MR::SymMatrix3d` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_add_assign(MR_SymMatrix3d *_this, const MR_SymMatrix3d *b);

/// Generated from a method of class `MR::SymMatrix3d` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_sub_assign(MR_SymMatrix3d *_this, const MR_SymMatrix3d *b);

/// Generated from a method of class `MR::SymMatrix3d` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_mul_assign(MR_SymMatrix3d *_this, double b);

/// Generated from a method of class `MR::SymMatrix3d` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_div_assign(MR_SymMatrix3d *_this, double b);

/// returns eigenvalues of the matrix in ascending order (diagonal matrix L), and
/// optionally returns corresponding unit eigenvectors in the rows of orthogonal matrix V,
/// M*V^T = V^T*L; M = V^T*L*V
/// Generated from a method of class `MR::SymMatrix3d` named `eigens`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `eigenvectors` defaults to a null pointer in C++.
MRC_API MR_Vector3d MR_SymMatrix3d_eigens(const MR_SymMatrix3d *_this, MR_Matrix3d *eigenvectors);

/// computes not-unit eigenvector corresponding to a not-repeating eigenvalue
/// Generated from a method of class `MR::SymMatrix3d` named `eigenvector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_SymMatrix3d_eigenvector(const MR_SymMatrix3d *_this, double eigenvalue);

/// for not-degenerate matrix returns just inverse matrix, otherwise
/// returns degenerate matrix, which performs inversion on not-kernel subspace;
/// \param tol relative epsilon-tolerance for too small number detection
/// \param rank optional output for this matrix rank according to given tolerance
/// \param space rank=1: unit direction of solution line, rank=2: unit normal to solution plane, rank=3: zero vector
/// Generated from a method of class `MR::SymMatrix3d` named `pseudoinverse`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `tol` has a default argument: `std::numeric_limits<double>::epsilon()`, pass a null pointer to use it.
/// Parameter `rank` defaults to a null pointer in C++.
/// Parameter `space` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix3d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix3d *MR_SymMatrix3d_pseudoinverse(const MR_SymMatrix3d *_this, const double *tol, int32_t *rank, MR_Vector3d *space);

#ifdef __cplusplus
} // extern "C"
#endif
