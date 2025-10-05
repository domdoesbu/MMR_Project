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

typedef struct MR_NoInit MR_NoInit; // Defined in `#include <MRCMesh/MRMeshFwd.h>`.


/// four-dimensional vector
/// Generated from class `MR::Vector4b`.
typedef struct MR_Vector4b
{
    bool x;
    bool y;
    bool z;
    bool w;
} MR_Vector4b;

/// four-dimensional vector
/// Generated from class `MR::Vector4i`.
typedef struct MR_Vector4i
{
    int32_t x;
    int32_t y;
    int32_t z;
    int32_t w;
} MR_Vector4i;

/// four-dimensional vector
/// Generated from class `MR::Vector4i64`.
typedef struct MR_Vector4i64
{
    MR_int64_t x;
    MR_int64_t y;
    MR_int64_t z;
    MR_int64_t w;
} MR_Vector4i64;

/// four-dimensional vector
/// Generated from class `MR::Vector4f`.
typedef struct MR_Vector4f
{
    float x;
    float y;
    float z;
    float w;
} MR_Vector4f;

/// four-dimensional vector
/// Generated from class `MR::Vector4d`.
typedef struct MR_Vector4d
{
    double x;
    double y;
    double z;
    double w;
} MR_Vector4d;

/// Returns a pointer to a member variable of class `MR::Vector4b` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector4b_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector4b MR_Vector4b_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector4b_DestroyArray()`.
/// Use `MR_Vector4b_OffsetMutablePtr()` and `MR_Vector4b_OffsetPtr()` to access the array elements.
MRC_API MR_Vector4b *MR_Vector4b_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector4b`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector4b MR_Vector4b_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector4b`.
MRC_API MR_Vector4b MR_Vector4b_Construct_4(bool x, bool y, bool z, bool w);

/// Generated from a method of class `MR::Vector4b` named `diagonal`.
MRC_API MR_Vector4b MR_Vector4b_diagonal(bool a);

/// Generated from a method of class `MR::Vector4b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_Vector4b_index_const(const MR_Vector4b *_this, int32_t e);

/// Generated from a method of class `MR::Vector4b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_Vector4b_index(MR_Vector4b *_this, int32_t e);

/// Generated from a method of class `MR::Vector4b` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Vector4b_lengthSq(const MR_Vector4b *_this);

/// Generated from a method of class `MR::Vector4b` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector4b_length(const MR_Vector4b *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector4b(const MR_Vector4b *a, const MR_Vector4b *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector4b(const MR_Vector4b *a, const MR_Vector4b *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4b *MR_pos_MR_Vector4b(const MR_Vector4b *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector4i MR_neg_MR_Vector4b(const MR_Vector4b *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_add_MR_Vector4b(const MR_Vector4b *a, const MR_Vector4b *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_sub_MR_Vector4b(const MR_Vector4b *a, const MR_Vector4b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_mul_bool_MR_Vector4b(bool a, const MR_Vector4b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_mul_MR_Vector4b_bool(const MR_Vector4b *b, bool a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector4i MR_div_MR_Vector4b_bool(MR_Vector4b b, bool a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4b *MR_add_assign_MR_Vector4b(MR_Vector4b *a, const MR_Vector4b *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4b *MR_sub_assign_MR_Vector4b(MR_Vector4b *a, const MR_Vector4b *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4b *MR_mul_assign_MR_Vector4b_bool(MR_Vector4b *a, bool b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4b *MR_div_assign_MR_Vector4b_bool(MR_Vector4b *a, bool b);

/// Returns a pointer to a member variable of class `MR::Vector4i` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector4i_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector4i MR_Vector4i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector4i_DestroyArray()`.
/// Use `MR_Vector4i_OffsetMutablePtr()` and `MR_Vector4i_OffsetPtr()` to access the array elements.
MRC_API MR_Vector4i *MR_Vector4i_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector4i`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector4i MR_Vector4i_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector4i`.
MRC_API MR_Vector4i MR_Vector4i_Construct_4(int32_t x, int32_t y, int32_t z, int32_t w);

/// Generated from a method of class `MR::Vector4i` named `diagonal`.
MRC_API MR_Vector4i MR_Vector4i_diagonal(int32_t a);

/// Generated from a method of class `MR::Vector4i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector4i_index_const(const MR_Vector4i *_this, int32_t e);

/// Generated from a method of class `MR::Vector4i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Vector4i_index(MR_Vector4i *_this, int32_t e);

/// Generated from a method of class `MR::Vector4i` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Vector4i_lengthSq(const MR_Vector4i *_this);

/// Generated from a method of class `MR::Vector4i` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector4i_length(const MR_Vector4i *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector4i(const MR_Vector4i *a, const MR_Vector4i *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector4i(const MR_Vector4i *a, const MR_Vector4i *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4i *MR_pos_MR_Vector4i(const MR_Vector4i *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector4i MR_neg_MR_Vector4i(const MR_Vector4i *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_add_MR_Vector4i(const MR_Vector4i *a, const MR_Vector4i *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_sub_MR_Vector4i(const MR_Vector4i *a, const MR_Vector4i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_mul_int32_t_MR_Vector4i(int32_t a, const MR_Vector4i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i MR_mul_MR_Vector4i_int32_t(const MR_Vector4i *b, int32_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector4i MR_div_MR_Vector4i_int32_t(MR_Vector4i b, int32_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i *MR_add_assign_MR_Vector4i(MR_Vector4i *a, const MR_Vector4i *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i *MR_sub_assign_MR_Vector4i(MR_Vector4i *a, const MR_Vector4i *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i *MR_mul_assign_MR_Vector4i_int32_t(MR_Vector4i *a, int32_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i *MR_div_assign_MR_Vector4i_int32_t(MR_Vector4i *a, int32_t b);

/// Returns a pointer to a member variable of class `MR::Vector4i64` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector4i64_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector4i64 MR_Vector4i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector4i64_DestroyArray()`.
/// Use `MR_Vector4i64_OffsetMutablePtr()` and `MR_Vector4i64_OffsetPtr()` to access the array elements.
MRC_API MR_Vector4i64 *MR_Vector4i64_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector4i64`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector4i64 MR_Vector4i64_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector4i64`.
MRC_API MR_Vector4i64 MR_Vector4i64_Construct_4(MR_int64_t x, MR_int64_t y, MR_int64_t z, MR_int64_t w);

/// Generated from a method of class `MR::Vector4i64` named `diagonal`.
MRC_API MR_Vector4i64 MR_Vector4i64_diagonal(MR_int64_t a);

/// Generated from a method of class `MR::Vector4i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_Vector4i64_index_const(const MR_Vector4i64 *_this, int32_t e);

/// Generated from a method of class `MR::Vector4i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_Vector4i64_index(MR_Vector4i64 *_this, int32_t e);

/// Generated from a method of class `MR::Vector4i64` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Vector4i64_lengthSq(const MR_Vector4i64 *_this);

/// Generated from a method of class `MR::Vector4i64` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector4i64_length(const MR_Vector4i64 *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector4i64(const MR_Vector4i64 *a, const MR_Vector4i64 *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector4i64(const MR_Vector4i64 *a, const MR_Vector4i64 *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4i64 *MR_pos_MR_Vector4i64(const MR_Vector4i64 *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector4i64 MR_neg_MR_Vector4i64(const MR_Vector4i64 *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i64 MR_add_MR_Vector4i64(const MR_Vector4i64 *a, const MR_Vector4i64 *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i64 MR_sub_MR_Vector4i64(const MR_Vector4i64 *a, const MR_Vector4i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i64 MR_mul_int64_t_MR_Vector4i64(MR_int64_t a, const MR_Vector4i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4i64 MR_mul_MR_Vector4i64_int64_t(const MR_Vector4i64 *b, MR_int64_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector4i64 MR_div_MR_Vector4i64_int64_t(MR_Vector4i64 b, MR_int64_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i64 *MR_add_assign_MR_Vector4i64(MR_Vector4i64 *a, const MR_Vector4i64 *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i64 *MR_sub_assign_MR_Vector4i64(MR_Vector4i64 *a, const MR_Vector4i64 *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i64 *MR_mul_assign_MR_Vector4i64_int64_t(MR_Vector4i64 *a, MR_int64_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i64 *MR_div_assign_MR_Vector4i64_int64_t(MR_Vector4i64 *a, MR_int64_t b);

/// Returns a pointer to a member variable of class `MR::Vector4f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector4f_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector4f MR_Vector4f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector4f_DestroyArray()`.
/// Use `MR_Vector4f_OffsetMutablePtr()` and `MR_Vector4f_OffsetPtr()` to access the array elements.
MRC_API MR_Vector4f *MR_Vector4f_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector4f`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector4f MR_Vector4f_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector4f`.
MRC_API MR_Vector4f MR_Vector4f_Construct_4(float x, float y, float z, float w);

/// Generated from a method of class `MR::Vector4f` named `diagonal`.
MRC_API MR_Vector4f MR_Vector4f_diagonal(float a);

/// Generated from a method of class `MR::Vector4f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Vector4f_index_const(const MR_Vector4f *_this, int32_t e);

/// Generated from a method of class `MR::Vector4f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Vector4f_index(MR_Vector4f *_this, int32_t e);

/// Generated from a method of class `MR::Vector4f` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Vector4f_lengthSq(const MR_Vector4f *_this);

/// Generated from a method of class `MR::Vector4f` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Vector4f_length(const MR_Vector4f *_this);

/// Generated from a method of class `MR::Vector4f` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector4f MR_Vector4f_normalized(const MR_Vector4f *_this);

/// assuming this is a point represented in homogeneous 4D coordinates, returns the point as 3D-vector
/// Generated from a method of class `MR::Vector4f` named `proj3d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Vector4f_proj3d(const MR_Vector4f *_this);

/// Generated from a method of class `MR::Vector4f` named `isFinite`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Vector4f_isFinite(const MR_Vector4f *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector4f(const MR_Vector4f *a, const MR_Vector4f *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector4f(const MR_Vector4f *a, const MR_Vector4f *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4f *MR_pos_MR_Vector4f(const MR_Vector4f *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector4f MR_neg_MR_Vector4f(const MR_Vector4f *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4f MR_add_MR_Vector4f(const MR_Vector4f *a, const MR_Vector4f *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4f MR_sub_MR_Vector4f(const MR_Vector4f *a, const MR_Vector4f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4f MR_mul_float_MR_Vector4f(float a, const MR_Vector4f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4f MR_mul_MR_Vector4f_float(const MR_Vector4f *b, float a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector4f MR_div_MR_Vector4f_float(MR_Vector4f b, float a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4f *MR_add_assign_MR_Vector4f(MR_Vector4f *a, const MR_Vector4f *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4f *MR_sub_assign_MR_Vector4f(MR_Vector4f *a, const MR_Vector4f *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4f *MR_mul_assign_MR_Vector4f_float(MR_Vector4f *a, float b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4f *MR_div_assign_MR_Vector4f_float(MR_Vector4f *a, float b);

/// Returns a pointer to a member variable of class `MR::Vector4d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector4d_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector4d MR_Vector4d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector4d_DestroyArray()`.
/// Use `MR_Vector4d_OffsetMutablePtr()` and `MR_Vector4d_OffsetPtr()` to access the array elements.
MRC_API MR_Vector4d *MR_Vector4d_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector4d`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector4d MR_Vector4d_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector4d`.
MRC_API MR_Vector4d MR_Vector4d_Construct_4(double x, double y, double z, double w);

/// Generated from a method of class `MR::Vector4d` named `diagonal`.
MRC_API MR_Vector4d MR_Vector4d_diagonal(double a);

/// Generated from a method of class `MR::Vector4d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Vector4d_index_const(const MR_Vector4d *_this, int32_t e);

/// Generated from a method of class `MR::Vector4d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Vector4d_index(MR_Vector4d *_this, int32_t e);

/// Generated from a method of class `MR::Vector4d` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector4d_lengthSq(const MR_Vector4d *_this);

/// Generated from a method of class `MR::Vector4d` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector4d_length(const MR_Vector4d *_this);

/// Generated from a method of class `MR::Vector4d` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector4d MR_Vector4d_normalized(const MR_Vector4d *_this);

/// assuming this is a point represented in homogeneous 4D coordinates, returns the point as 3D-vector
/// Generated from a method of class `MR::Vector4d` named `proj3d`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Vector4d_proj3d(const MR_Vector4d *_this);

/// Generated from a method of class `MR::Vector4d` named `isFinite`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Vector4d_isFinite(const MR_Vector4d *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector4d(const MR_Vector4d *a, const MR_Vector4d *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector4d(const MR_Vector4d *a, const MR_Vector4d *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4d *MR_pos_MR_Vector4d(const MR_Vector4d *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector4d MR_neg_MR_Vector4d(const MR_Vector4d *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4d MR_add_MR_Vector4d(const MR_Vector4d *a, const MR_Vector4d *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4d MR_sub_MR_Vector4d(const MR_Vector4d *a, const MR_Vector4d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4d MR_mul_double_MR_Vector4d(double a, const MR_Vector4d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector4d MR_mul_MR_Vector4d_double(const MR_Vector4d *b, double a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector4d MR_div_MR_Vector4d_double(MR_Vector4d b, double a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4d *MR_add_assign_MR_Vector4d(MR_Vector4d *a, const MR_Vector4d *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4d *MR_sub_assign_MR_Vector4d(MR_Vector4d *a, const MR_Vector4d *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4d *MR_mul_assign_MR_Vector4d_double(MR_Vector4d *a, double b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4d *MR_div_assign_MR_Vector4d_double(MR_Vector4d *a, double b);

/// dot product
/// Generated from function `MR::dot<bool>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API int32_t MR_dot_bool_MR_Vector4b(const MR_Vector4b *a, const MR_Vector4b *b);

/// dot product
/// Generated from function `MR::dot<int32_t>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API int32_t MR_dot_int32_t_MR_Vector4i(const MR_Vector4i *a, const MR_Vector4i *b);

/// dot product
/// Generated from function `MR::dot<MR_int64_t>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_int64_t MR_dot_int64_t_MR_Vector4i64(const MR_Vector4i64 *a, const MR_Vector4i64 *b);

/// dot product
/// Generated from function `MR::dot<float>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API float MR_dot_float_MR_Vector4f(const MR_Vector4f *a, const MR_Vector4f *b);

/// dot product
/// Generated from function `MR::dot<double>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API double MR_dot_double_MR_Vector4d(const MR_Vector4d *a, const MR_Vector4d *b);

#ifdef __cplusplus
} // extern "C"
#endif
