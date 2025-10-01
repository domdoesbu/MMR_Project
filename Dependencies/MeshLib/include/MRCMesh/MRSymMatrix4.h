// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// symmetric 4x4 matrix
/// Generated from class `MR::SymMatrix4b`.
typedef struct MR_SymMatrix4b MR_SymMatrix4b;

/// symmetric 4x4 matrix
/// Generated from class `MR::SymMatrix4i`.
typedef struct MR_SymMatrix4i MR_SymMatrix4i;

/// symmetric 4x4 matrix
/// Generated from class `MR::SymMatrix4i64`.
typedef struct MR_SymMatrix4i64 MR_SymMatrix4i64;

/// symmetric 4x4 matrix
/// Generated from class `MR::SymMatrix4f`.
typedef struct MR_SymMatrix4f MR_SymMatrix4f;

/// symmetric 4x4 matrix
/// Generated from class `MR::SymMatrix4d`.
typedef struct MR_SymMatrix4d MR_SymMatrix4d;

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_xx(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_xx(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_xx(MR_SymMatrix4b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_xy(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_xy(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_xy(MR_SymMatrix4b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_xz(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_xz(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_xz(MR_SymMatrix4b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_xw(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_xw(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_xw(MR_SymMatrix4b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_yy(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_yy(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_yy(MR_SymMatrix4b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_yz(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_yz(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_yz(MR_SymMatrix4b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_yw(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_yw(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_yw(MR_SymMatrix4b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_zz(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_zz(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_zz(MR_SymMatrix4b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_zw(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_zw(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_zw(MR_SymMatrix4b *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4b` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SymMatrix4b_Get_ww(const MR_SymMatrix4b *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4b` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4b_Set_ww(MR_SymMatrix4b *_this, bool value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4b` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SymMatrix4b_GetMutable_ww(MR_SymMatrix4b *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix4b_DestroyArray()`.
/// Use `MR_SymMatrix4b_OffsetMutablePtr()` and `MR_SymMatrix4b_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix4b *MR_SymMatrix4b_OffsetPtr(const MR_SymMatrix4b *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_OffsetMutablePtr(MR_SymMatrix4b *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix4b`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_ConstructFromAnother(const MR_SymMatrix4b *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix4b`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4b_Destroy(const MR_SymMatrix4b *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix4b`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4b_DestroyArray(const MR_SymMatrix4b *_this);

/// Generated from a method of class `MR::SymMatrix4b` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_AssignFromAnother(MR_SymMatrix4b *_this, const MR_SymMatrix4b *_other);

/// Generated from a method of class `MR::SymMatrix4b` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_identity(void);

/// Generated from a method of class `MR::SymMatrix4b` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4b_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_diagonal(bool diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix4b` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SymMatrix4b_trace(const MR_SymMatrix4b *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 16 squared elements
/// Generated from a method of class `MR::SymMatrix4b` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SymMatrix4b_normSq(const MR_SymMatrix4b *_this);

/// Generated from a method of class `MR::SymMatrix4b` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_add_assign(MR_SymMatrix4b *_this, const MR_SymMatrix4b *b);

/// Generated from a method of class `MR::SymMatrix4b` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_sub_assign(MR_SymMatrix4b *_this, const MR_SymMatrix4b *b);

/// Generated from a method of class `MR::SymMatrix4b` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_mul_assign(MR_SymMatrix4b *_this, bool b);

/// Generated from a method of class `MR::SymMatrix4b` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4b *MR_SymMatrix4b_div_assign(MR_SymMatrix4b *_this, bool b);

/// Generated from a method of class `MR::SymMatrix4b` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_SymMatrix4b(const MR_SymMatrix4b *_this, const MR_SymMatrix4b *_1);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_xx(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_xx(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_xx(MR_SymMatrix4i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_xy(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_xy(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_xy(MR_SymMatrix4i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_xz(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_xz(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_xz(MR_SymMatrix4i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_xw(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_xw(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_xw(MR_SymMatrix4i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_yy(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_yy(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_yy(MR_SymMatrix4i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_yz(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_yz(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_yz(MR_SymMatrix4i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_yw(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_yw(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_yw(MR_SymMatrix4i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_zz(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_zz(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_zz(MR_SymMatrix4i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_zw(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_zw(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_zw(MR_SymMatrix4i *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymMatrix4i_Get_ww(const MR_SymMatrix4i *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i_Set_ww(MR_SymMatrix4i *_this, int32_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymMatrix4i_GetMutable_ww(MR_SymMatrix4i *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix4i_DestroyArray()`.
/// Use `MR_SymMatrix4i_OffsetMutablePtr()` and `MR_SymMatrix4i_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix4i *MR_SymMatrix4i_OffsetPtr(const MR_SymMatrix4i *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_OffsetMutablePtr(MR_SymMatrix4i *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix4i`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_ConstructFromAnother(const MR_SymMatrix4i *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix4i`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4i_Destroy(const MR_SymMatrix4i *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix4i`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4i_DestroyArray(const MR_SymMatrix4i *_this);

/// Generated from a method of class `MR::SymMatrix4i` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_AssignFromAnother(MR_SymMatrix4i *_this, const MR_SymMatrix4i *_other);

/// Generated from a method of class `MR::SymMatrix4i` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_identity(void);

/// Generated from a method of class `MR::SymMatrix4i` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4i_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_diagonal(int32_t diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix4i` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SymMatrix4i_trace(const MR_SymMatrix4i *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 16 squared elements
/// Generated from a method of class `MR::SymMatrix4i` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_SymMatrix4i_normSq(const MR_SymMatrix4i *_this);

/// Generated from a method of class `MR::SymMatrix4i` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_add_assign(MR_SymMatrix4i *_this, const MR_SymMatrix4i *b);

/// Generated from a method of class `MR::SymMatrix4i` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_sub_assign(MR_SymMatrix4i *_this, const MR_SymMatrix4i *b);

/// Generated from a method of class `MR::SymMatrix4i` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_mul_assign(MR_SymMatrix4i *_this, int32_t b);

/// Generated from a method of class `MR::SymMatrix4i` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i *MR_SymMatrix4i_div_assign(MR_SymMatrix4i *_this, int32_t b);

/// Generated from a method of class `MR::SymMatrix4i` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_SymMatrix4i(const MR_SymMatrix4i *_this, const MR_SymMatrix4i *_1);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_xx(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_xx(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_xx(MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_xy(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_xy(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_xy(MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_xz(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_xz(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_xz(MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_xw(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_xw(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_xw(MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_yy(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_yy(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_yy(MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_yz(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_yz(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_yz(MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_yw(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_yw(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_yw(MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_zz(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_zz(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_zz(MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_zw(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_zw(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_zw(MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4i64` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_SymMatrix4i64_Get_ww(const MR_SymMatrix4i64 *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4i64` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4i64_Set_ww(MR_SymMatrix4i64 *_this, MR_int64_t value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4i64` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_SymMatrix4i64_GetMutable_ww(MR_SymMatrix4i64 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix4i64_DestroyArray()`.
/// Use `MR_SymMatrix4i64_OffsetMutablePtr()` and `MR_SymMatrix4i64_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix4i64 *MR_SymMatrix4i64_OffsetPtr(const MR_SymMatrix4i64 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_OffsetMutablePtr(MR_SymMatrix4i64 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix4i64`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_ConstructFromAnother(const MR_SymMatrix4i64 *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix4i64`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4i64_Destroy(const MR_SymMatrix4i64 *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix4i64`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4i64_DestroyArray(const MR_SymMatrix4i64 *_this);

/// Generated from a method of class `MR::SymMatrix4i64` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_AssignFromAnother(MR_SymMatrix4i64 *_this, const MR_SymMatrix4i64 *_other);

/// Generated from a method of class `MR::SymMatrix4i64` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_identity(void);

/// Generated from a method of class `MR::SymMatrix4i64` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4i64_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_diagonal(MR_int64_t diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix4i64` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_SymMatrix4i64_trace(const MR_SymMatrix4i64 *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 16 squared elements
/// Generated from a method of class `MR::SymMatrix4i64` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_SymMatrix4i64_normSq(const MR_SymMatrix4i64 *_this);

/// Generated from a method of class `MR::SymMatrix4i64` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_add_assign(MR_SymMatrix4i64 *_this, const MR_SymMatrix4i64 *b);

/// Generated from a method of class `MR::SymMatrix4i64` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_sub_assign(MR_SymMatrix4i64 *_this, const MR_SymMatrix4i64 *b);

/// Generated from a method of class `MR::SymMatrix4i64` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_mul_assign(MR_SymMatrix4i64 *_this, MR_int64_t b);

/// Generated from a method of class `MR::SymMatrix4i64` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4i64 *MR_SymMatrix4i64_div_assign(MR_SymMatrix4i64 *_this, MR_int64_t b);

/// Generated from a method of class `MR::SymMatrix4i64` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_SymMatrix4i64(const MR_SymMatrix4i64 *_this, const MR_SymMatrix4i64 *_1);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_xx(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_xx(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_xx(MR_SymMatrix4f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_xy(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_xy(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_xy(MR_SymMatrix4f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_xz(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_xz(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_xz(MR_SymMatrix4f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_xw(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_xw(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_xw(MR_SymMatrix4f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_yy(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_yy(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_yy(MR_SymMatrix4f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_yz(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_yz(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_yz(MR_SymMatrix4f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_yw(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_yw(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_yw(MR_SymMatrix4f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_zz(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_zz(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_zz(MR_SymMatrix4f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_zw(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_zw(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_zw(MR_SymMatrix4f *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4f` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymMatrix4f_Get_ww(const MR_SymMatrix4f *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4f` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4f_Set_ww(MR_SymMatrix4f *_this, float value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4f` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymMatrix4f_GetMutable_ww(MR_SymMatrix4f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix4f_DestroyArray()`.
/// Use `MR_SymMatrix4f_OffsetMutablePtr()` and `MR_SymMatrix4f_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix4f *MR_SymMatrix4f_OffsetPtr(const MR_SymMatrix4f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_OffsetMutablePtr(MR_SymMatrix4f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix4f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_ConstructFromAnother(const MR_SymMatrix4f *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix4f`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4f_Destroy(const MR_SymMatrix4f *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix4f`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4f_DestroyArray(const MR_SymMatrix4f *_this);

/// Generated from a method of class `MR::SymMatrix4f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_AssignFromAnother(MR_SymMatrix4f *_this, const MR_SymMatrix4f *_other);

/// Generated from a method of class `MR::SymMatrix4f` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_identity(void);

/// Generated from a method of class `MR::SymMatrix4f` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4f_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_diagonal(float diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix4f` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SymMatrix4f_trace(const MR_SymMatrix4f *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 16 squared elements
/// Generated from a method of class `MR::SymMatrix4f` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_SymMatrix4f_normSq(const MR_SymMatrix4f *_this);

/// Generated from a method of class `MR::SymMatrix4f` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_add_assign(MR_SymMatrix4f *_this, const MR_SymMatrix4f *b);

/// Generated from a method of class `MR::SymMatrix4f` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_sub_assign(MR_SymMatrix4f *_this, const MR_SymMatrix4f *b);

/// Generated from a method of class `MR::SymMatrix4f` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_mul_assign(MR_SymMatrix4f *_this, float b);

/// Generated from a method of class `MR::SymMatrix4f` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4f *MR_SymMatrix4f_div_assign(MR_SymMatrix4f *_this, float b);

/// Generated from a method of class `MR::SymMatrix4f` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_SymMatrix4f(const MR_SymMatrix4f *_this, const MR_SymMatrix4f *_1);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_xx(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_xx(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `xx`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_xx(MR_SymMatrix4d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_xy(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_xy(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `xy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_xy(MR_SymMatrix4d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_xz(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_xz(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `xz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_xz(MR_SymMatrix4d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_xw(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_xw(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `xw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_xw(MR_SymMatrix4d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_yy(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_yy(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `yy`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_yy(MR_SymMatrix4d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_yz(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_yz(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `yz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_yz(MR_SymMatrix4d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_yw(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_yw(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `yw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_yw(MR_SymMatrix4d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_zz(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_zz(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `zz`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_zz(MR_SymMatrix4d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_zw(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_zw(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `zw`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_zw(MR_SymMatrix4d *_this);

/// zero matrix by default
/// Returns a pointer to a member variable of class `MR::SymMatrix4d` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SymMatrix4d_Get_ww(const MR_SymMatrix4d *_this);

/// zero matrix by default
/// Modifies a member variable of class `MR::SymMatrix4d` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymMatrix4d_Set_ww(MR_SymMatrix4d *_this, double value);

/// zero matrix by default
/// Returns a mutable pointer to a member variable of class `MR::SymMatrix4d` named `ww`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SymMatrix4d_GetMutable_ww(MR_SymMatrix4d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymMatrix4d_DestroyArray()`.
/// Use `MR_SymMatrix4d_OffsetMutablePtr()` and `MR_SymMatrix4d_OffsetPtr()` to access the array elements.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymMatrix4d *MR_SymMatrix4d_OffsetPtr(const MR_SymMatrix4d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_OffsetMutablePtr(MR_SymMatrix4d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SymMatrix4d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_ConstructFromAnother(const MR_SymMatrix4d *_other);

/// Destroys a heap-allocated instance of `MR_SymMatrix4d`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4d_Destroy(const MR_SymMatrix4d *_this);

/// Destroys a heap-allocated array of `MR_SymMatrix4d`. Does nothing if the pointer is null.
MRC_API void MR_SymMatrix4d_DestroyArray(const MR_SymMatrix4d *_this);

/// Generated from a method of class `MR::SymMatrix4d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_AssignFromAnother(MR_SymMatrix4d *_this, const MR_SymMatrix4d *_other);

/// Generated from a method of class `MR::SymMatrix4d` named `identity`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_identity(void);

/// Generated from a method of class `MR::SymMatrix4d` named `diagonal`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymMatrix4d_Destroy()` to free it when you're done using it.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_diagonal(double diagVal);

/// computes trace of the matrix
/// Generated from a method of class `MR::SymMatrix4d` named `trace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_SymMatrix4d_trace(const MR_SymMatrix4d *_this);

/// computes the squared norm of the matrix, which is equal to the sum of 16 squared elements
/// Generated from a method of class `MR::SymMatrix4d` named `normSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_SymMatrix4d_normSq(const MR_SymMatrix4d *_this);

/// Generated from a method of class `MR::SymMatrix4d` named `operator+=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_add_assign(MR_SymMatrix4d *_this, const MR_SymMatrix4d *b);

/// Generated from a method of class `MR::SymMatrix4d` named `operator-=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_sub_assign(MR_SymMatrix4d *_this, const MR_SymMatrix4d *b);

/// Generated from a method of class `MR::SymMatrix4d` named `operator*=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_mul_assign(MR_SymMatrix4d *_this, double b);

/// Generated from a method of class `MR::SymMatrix4d` named `operator/=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymMatrix4d *MR_SymMatrix4d_div_assign(MR_SymMatrix4d *_this, double b);

/// Generated from a method of class `MR::SymMatrix4d` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_SymMatrix4d(const MR_SymMatrix4d *_this, const MR_SymMatrix4d *_1);

#ifdef __cplusplus
} // extern "C"
#endif
