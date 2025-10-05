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

typedef struct MR_NoInit MR_NoInit; // Defined in `#include <MRCMesh/MRMeshFwd.h>`.


/// two-dimensional vector
/// Generated from class `MR::Vector2b`.
typedef struct MR_Vector2b
{
    bool x;
    bool y;
} MR_Vector2b;

/// two-dimensional vector
/// Generated from class `MR::Vector2i`.
typedef struct MR_Vector2i
{
    int32_t x;
    int32_t y;
} MR_Vector2i;

/// two-dimensional vector
/// Generated from class `MR::Vector2i64`.
typedef struct MR_Vector2i64
{
    MR_int64_t x;
    MR_int64_t y;
} MR_Vector2i64;

/// two-dimensional vector
/// Generated from class `MR::Vector2f`.
typedef struct MR_Vector2f
{
    float x;
    float y;
} MR_Vector2f;

/// two-dimensional vector
/// Generated from class `MR::Vector2d`.
typedef struct MR_Vector2d
{
    double x;
    double y;
} MR_Vector2d;

/// Returns a pointer to a member variable of class `MR::Vector2b` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector2b_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector2b MR_Vector2b_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector2b_DestroyArray()`.
/// Use `MR_Vector2b_OffsetMutablePtr()` and `MR_Vector2b_OffsetPtr()` to access the array elements.
MRC_API MR_Vector2b *MR_Vector2b_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector2b`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Vector2b_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector2b`.
MRC_API MR_Vector2b MR_Vector2b_Construct_2(bool x, bool y);

/// Generated from a method of class `MR::Vector2b` named `diagonal`.
MRC_API MR_Vector2b MR_Vector2b_diagonal(bool a);

/// Generated from a method of class `MR::Vector2b` named `plusX`.
MRC_API MR_Vector2b MR_Vector2b_plusX(void);

/// Generated from a method of class `MR::Vector2b` named `plusY`.
MRC_API MR_Vector2b MR_Vector2b_plusY(void);

/// Generated from a method of class `MR::Vector2b` named `minusX`.
MRC_API MR_Vector2b MR_Vector2b_minusX(void);

/// Generated from a method of class `MR::Vector2b` named `minusY`.
MRC_API MR_Vector2b MR_Vector2b_minusY(void);

/// Generated from a method of class `MR::Vector2b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_Vector2b_index_const(const MR_Vector2b *_this, int32_t e);

/// Generated from a method of class `MR::Vector2b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_Vector2b_index(MR_Vector2b *_this, int32_t e);

/// Generated from a method of class `MR::Vector2b` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Vector2b_lengthSq(const MR_Vector2b *_this);

/// Generated from a method of class `MR::Vector2b` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector2b_length(const MR_Vector2b *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector2b(const MR_Vector2b *a, const MR_Vector2b *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector2b(const MR_Vector2b *a, const MR_Vector2b *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2b *MR_pos_MR_Vector2b(const MR_Vector2b *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector2i MR_neg_MR_Vector2b(const MR_Vector2b *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_add_MR_Vector2b(const MR_Vector2b *a, const MR_Vector2b *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_sub_MR_Vector2b(const MR_Vector2b *a, const MR_Vector2b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_mul_bool_MR_Vector2b(bool a, const MR_Vector2b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_mul_MR_Vector2b_bool(const MR_Vector2b *b, bool a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector2i MR_div_MR_Vector2b_bool(MR_Vector2b b, bool a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2b *MR_add_assign_MR_Vector2b(MR_Vector2b *a, const MR_Vector2b *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2b *MR_sub_assign_MR_Vector2b(MR_Vector2b *a, const MR_Vector2b *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2b *MR_mul_assign_MR_Vector2b_bool(MR_Vector2b *a, bool b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2b *MR_div_assign_MR_Vector2b_bool(MR_Vector2b *a, bool b);

/// Returns a pointer to a member variable of class `MR::Vector2i` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector2i_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector2i MR_Vector2i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector2i_DestroyArray()`.
/// Use `MR_Vector2i_OffsetMutablePtr()` and `MR_Vector2i_OffsetPtr()` to access the array elements.
MRC_API MR_Vector2i *MR_Vector2i_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector2i`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector2i MR_Vector2i_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector2i`.
MRC_API MR_Vector2i MR_Vector2i_Construct_2(int32_t x, int32_t y);

/// Generated from a method of class `MR::Vector2i` named `diagonal`.
MRC_API MR_Vector2i MR_Vector2i_diagonal(int32_t a);

/// Generated from a method of class `MR::Vector2i` named `plusX`.
MRC_API MR_Vector2i MR_Vector2i_plusX(void);

/// Generated from a method of class `MR::Vector2i` named `plusY`.
MRC_API MR_Vector2i MR_Vector2i_plusY(void);

/// Generated from a method of class `MR::Vector2i` named `minusX`.
MRC_API MR_Vector2i MR_Vector2i_minusX(void);

/// Generated from a method of class `MR::Vector2i` named `minusY`.
MRC_API MR_Vector2i MR_Vector2i_minusY(void);

/// Generated from a method of class `MR::Vector2i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector2i_index_const(const MR_Vector2i *_this, int32_t e);

/// Generated from a method of class `MR::Vector2i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Vector2i_index(MR_Vector2i *_this, int32_t e);

/// Generated from a method of class `MR::Vector2i` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Vector2i_lengthSq(const MR_Vector2i *_this);

/// Generated from a method of class `MR::Vector2i` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector2i_length(const MR_Vector2i *_this);

/// returns one of 2 basis unit vector that makes the biggest angle with the direction specified by this
/// Generated from a method of class `MR::Vector2i` named `furthestBasisVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i MR_Vector2i_furthestBasisVector(const MR_Vector2i *_this);

/// returns same length vector orthogonal to this (rotated 90 degrees counter-clockwise)
/// Generated from a method of class `MR::Vector2i` named `perpendicular`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i MR_Vector2i_perpendicular(const MR_Vector2i *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector2i(const MR_Vector2i *a, const MR_Vector2i *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector2i(const MR_Vector2i *a, const MR_Vector2i *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_pos_MR_Vector2i(const MR_Vector2i *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector2i MR_neg_MR_Vector2i(const MR_Vector2i *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_add_MR_Vector2i(const MR_Vector2i *a, const MR_Vector2i *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_sub_MR_Vector2i(const MR_Vector2i *a, const MR_Vector2i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_mul_int32_t_MR_Vector2i(int32_t a, const MR_Vector2i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i MR_mul_MR_Vector2i_int32_t(const MR_Vector2i *b, int32_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector2i MR_div_MR_Vector2i_int32_t(MR_Vector2i b, int32_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_add_assign_MR_Vector2i(MR_Vector2i *a, const MR_Vector2i *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_sub_assign_MR_Vector2i(MR_Vector2i *a, const MR_Vector2i *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_mul_assign_MR_Vector2i_int32_t(MR_Vector2i *a, int32_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_div_assign_MR_Vector2i_int32_t(MR_Vector2i *a, int32_t b);

/// Returns a pointer to a member variable of class `MR::Vector2i64` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector2i64_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector2i64 MR_Vector2i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector2i64_DestroyArray()`.
/// Use `MR_Vector2i64_OffsetMutablePtr()` and `MR_Vector2i64_OffsetPtr()` to access the array elements.
MRC_API MR_Vector2i64 *MR_Vector2i64_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector2i64`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_Vector2i64_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector2i64`.
MRC_API MR_Vector2i64 MR_Vector2i64_Construct_2(MR_int64_t x, MR_int64_t y);

/// Generated from a method of class `MR::Vector2i64` named `diagonal`.
MRC_API MR_Vector2i64 MR_Vector2i64_diagonal(MR_int64_t a);

/// Generated from a method of class `MR::Vector2i64` named `plusX`.
MRC_API MR_Vector2i64 MR_Vector2i64_plusX(void);

/// Generated from a method of class `MR::Vector2i64` named `plusY`.
MRC_API MR_Vector2i64 MR_Vector2i64_plusY(void);

/// Generated from a method of class `MR::Vector2i64` named `minusX`.
MRC_API MR_Vector2i64 MR_Vector2i64_minusX(void);

/// Generated from a method of class `MR::Vector2i64` named `minusY`.
MRC_API MR_Vector2i64 MR_Vector2i64_minusY(void);

/// Generated from a method of class `MR::Vector2i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_Vector2i64_index_const(const MR_Vector2i64 *_this, int32_t e);

/// Generated from a method of class `MR::Vector2i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_Vector2i64_index(MR_Vector2i64 *_this, int32_t e);

/// Generated from a method of class `MR::Vector2i64` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Vector2i64_lengthSq(const MR_Vector2i64 *_this);

/// Generated from a method of class `MR::Vector2i64` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector2i64_length(const MR_Vector2i64 *_this);

/// returns one of 2 basis unit vector that makes the biggest angle with the direction specified by this
/// Generated from a method of class `MR::Vector2i64` named `furthestBasisVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_Vector2i64_furthestBasisVector(const MR_Vector2i64 *_this);

/// returns same length vector orthogonal to this (rotated 90 degrees counter-clockwise)
/// Generated from a method of class `MR::Vector2i64` named `perpendicular`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_Vector2i64_perpendicular(const MR_Vector2i64 *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector2i64(const MR_Vector2i64 *a, const MR_Vector2i64 *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector2i64(const MR_Vector2i64 *a, const MR_Vector2i64 *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i64 *MR_pos_MR_Vector2i64(const MR_Vector2i64 *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_neg_MR_Vector2i64(const MR_Vector2i64 *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_add_MR_Vector2i64(const MR_Vector2i64 *a, const MR_Vector2i64 *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_sub_MR_Vector2i64(const MR_Vector2i64 *a, const MR_Vector2i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_mul_int64_t_MR_Vector2i64(MR_int64_t a, const MR_Vector2i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_mul_MR_Vector2i64_int64_t(const MR_Vector2i64 *b, MR_int64_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector2i64 MR_div_MR_Vector2i64_int64_t(MR_Vector2i64 b, MR_int64_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i64 *MR_add_assign_MR_Vector2i64(MR_Vector2i64 *a, const MR_Vector2i64 *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i64 *MR_sub_assign_MR_Vector2i64(MR_Vector2i64 *a, const MR_Vector2i64 *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i64 *MR_mul_assign_MR_Vector2i64_int64_t(MR_Vector2i64 *a, MR_int64_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i64 *MR_div_assign_MR_Vector2i64_int64_t(MR_Vector2i64 *a, MR_int64_t b);

/// Returns a pointer to a member variable of class `MR::Vector2f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector2f_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector2f MR_Vector2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector2f_DestroyArray()`.
/// Use `MR_Vector2f_OffsetMutablePtr()` and `MR_Vector2f_OffsetPtr()` to access the array elements.
MRC_API MR_Vector2f *MR_Vector2f_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector2f`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Vector2f_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector2f`.
MRC_API MR_Vector2f MR_Vector2f_Construct_2(float x, float y);

/// Generated from a method of class `MR::Vector2f` named `diagonal`.
MRC_API MR_Vector2f MR_Vector2f_diagonal(float a);

/// Generated from a method of class `MR::Vector2f` named `plusX`.
MRC_API MR_Vector2f MR_Vector2f_plusX(void);

/// Generated from a method of class `MR::Vector2f` named `plusY`.
MRC_API MR_Vector2f MR_Vector2f_plusY(void);

/// Generated from a method of class `MR::Vector2f` named `minusX`.
MRC_API MR_Vector2f MR_Vector2f_minusX(void);

/// Generated from a method of class `MR::Vector2f` named `minusY`.
MRC_API MR_Vector2f MR_Vector2f_minusY(void);

/// Generated from a method of class `MR::Vector2f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Vector2f_index_const(const MR_Vector2f *_this, int32_t e);

/// Generated from a method of class `MR::Vector2f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Vector2f_index(MR_Vector2f *_this, int32_t e);

/// Generated from a method of class `MR::Vector2f` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Vector2f_lengthSq(const MR_Vector2f *_this);

/// Generated from a method of class `MR::Vector2f` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Vector2f_length(const MR_Vector2f *_this);

/// Generated from a method of class `MR::Vector2f` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Vector2f_normalized(const MR_Vector2f *_this);

/// returns one of 2 basis unit vector that makes the biggest angle with the direction specified by this
/// Generated from a method of class `MR::Vector2f` named `furthestBasisVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Vector2f_furthestBasisVector(const MR_Vector2f *_this);

/// returns same length vector orthogonal to this (rotated 90 degrees counter-clockwise)
/// Generated from a method of class `MR::Vector2f` named `perpendicular`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Vector2f_perpendicular(const MR_Vector2f *_this);

/// Generated from a method of class `MR::Vector2f` named `isFinite`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Vector2f_isFinite(const MR_Vector2f *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector2f(const MR_Vector2f *a, const MR_Vector2f *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector2f(const MR_Vector2f *a, const MR_Vector2f *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_pos_MR_Vector2f(const MR_Vector2f *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector2f MR_neg_MR_Vector2f(const MR_Vector2f *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2f MR_add_MR_Vector2f(const MR_Vector2f *a, const MR_Vector2f *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2f MR_sub_MR_Vector2f(const MR_Vector2f *a, const MR_Vector2f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2f MR_mul_float_MR_Vector2f(float a, const MR_Vector2f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2f MR_mul_MR_Vector2f_float(const MR_Vector2f *b, float a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector2f MR_div_MR_Vector2f_float(MR_Vector2f b, float a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_add_assign_MR_Vector2f(MR_Vector2f *a, const MR_Vector2f *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_sub_assign_MR_Vector2f(MR_Vector2f *a, const MR_Vector2f *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_mul_assign_MR_Vector2f_float(MR_Vector2f *a, float b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_div_assign_MR_Vector2f_float(MR_Vector2f *a, float b);

/// Returns a pointer to a member variable of class `MR::Vector2d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector2d_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector2d MR_Vector2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector2d_DestroyArray()`.
/// Use `MR_Vector2d_OffsetMutablePtr()` and `MR_Vector2d_OffsetPtr()` to access the array elements.
MRC_API MR_Vector2d *MR_Vector2d_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector2d`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Vector2d_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector2d`.
MRC_API MR_Vector2d MR_Vector2d_Construct_2(double x, double y);

/// Generated from a method of class `MR::Vector2d` named `diagonal`.
MRC_API MR_Vector2d MR_Vector2d_diagonal(double a);

/// Generated from a method of class `MR::Vector2d` named `plusX`.
MRC_API MR_Vector2d MR_Vector2d_plusX(void);

/// Generated from a method of class `MR::Vector2d` named `plusY`.
MRC_API MR_Vector2d MR_Vector2d_plusY(void);

/// Generated from a method of class `MR::Vector2d` named `minusX`.
MRC_API MR_Vector2d MR_Vector2d_minusX(void);

/// Generated from a method of class `MR::Vector2d` named `minusY`.
MRC_API MR_Vector2d MR_Vector2d_minusY(void);

/// Generated from a method of class `MR::Vector2d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Vector2d_index_const(const MR_Vector2d *_this, int32_t e);

/// Generated from a method of class `MR::Vector2d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Vector2d_index(MR_Vector2d *_this, int32_t e);

/// Generated from a method of class `MR::Vector2d` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector2d_lengthSq(const MR_Vector2d *_this);

/// Generated from a method of class `MR::Vector2d` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector2d_length(const MR_Vector2d *_this);

/// Generated from a method of class `MR::Vector2d` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Vector2d_normalized(const MR_Vector2d *_this);

/// returns one of 2 basis unit vector that makes the biggest angle with the direction specified by this
/// Generated from a method of class `MR::Vector2d` named `furthestBasisVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Vector2d_furthestBasisVector(const MR_Vector2d *_this);

/// returns same length vector orthogonal to this (rotated 90 degrees counter-clockwise)
/// Generated from a method of class `MR::Vector2d` named `perpendicular`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Vector2d_perpendicular(const MR_Vector2d *_this);

/// Generated from a method of class `MR::Vector2d` named `isFinite`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Vector2d_isFinite(const MR_Vector2d *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector2d(const MR_Vector2d *a, const MR_Vector2d *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector2d(const MR_Vector2d *a, const MR_Vector2d *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_pos_MR_Vector2d(const MR_Vector2d *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector2d MR_neg_MR_Vector2d(const MR_Vector2d *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2d MR_add_MR_Vector2d(const MR_Vector2d *a, const MR_Vector2d *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2d MR_sub_MR_Vector2d(const MR_Vector2d *a, const MR_Vector2d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2d MR_mul_double_MR_Vector2d(double a, const MR_Vector2d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector2d MR_mul_MR_Vector2d_double(const MR_Vector2d *b, double a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector2d MR_div_MR_Vector2d_double(MR_Vector2d b, double a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_add_assign_MR_Vector2d(MR_Vector2d *a, const MR_Vector2d *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_sub_assign_MR_Vector2d(MR_Vector2d *a, const MR_Vector2d *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_mul_assign_MR_Vector2d_double(MR_Vector2d *a, double b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_div_assign_MR_Vector2d_double(MR_Vector2d *a, double b);

/// cross product
/// Generated from function `MR::cross<float>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API float MR_cross(const MR_Vector2f *a, const MR_Vector2f *b);

/// dot product
/// Generated from function `MR::dot<bool>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API int32_t MR_dot_bool_MR_Vector2b(const MR_Vector2b *a, const MR_Vector2b *b);

/// dot product
/// Generated from function `MR::dot<int32_t>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API int32_t MR_dot_int32_t_MR_Vector2i(const MR_Vector2i *a, const MR_Vector2i *b);

/// dot product
/// Generated from function `MR::dot<MR_int64_t>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_int64_t MR_dot_int64_t_MR_Vector2i64(const MR_Vector2i64 *a, const MR_Vector2i64 *b);

/// dot product
/// Generated from function `MR::dot<float>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API float MR_dot_float_MR_Vector2f(const MR_Vector2f *a, const MR_Vector2f *b);

/// dot product
/// Generated from function `MR::dot<double>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API double MR_dot_double_MR_Vector2d(const MR_Vector2d *a, const MR_Vector2d *b);

#ifdef __cplusplus
} // extern "C"
#endif
