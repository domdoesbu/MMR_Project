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

typedef struct MR_AffineXf3d MR_AffineXf3d; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_NoInit MR_NoInit; // Defined in `#include <MRCMesh/MRMeshFwd.h>`.
typedef struct MR_std_pair_MR_Vector3d_MR_Vector3d MR_std_pair_MR_Vector3d_MR_Vector3d; // Defined in `#include <MRCMisc/std_pair_MR_Vector3d_MR_Vector3d.h>`.
typedef struct MR_std_pair_MR_Vector3f_MR_Vector3f MR_std_pair_MR_Vector3f_MR_Vector3f; // Defined in `#include <MRCMisc/std_pair_MR_Vector3f_MR_Vector3f.h>`.


/// three-dimensional vector
/// Generated from class `MR::Vector3b`.
typedef struct MR_Vector3b
{
    bool x;
    bool y;
    bool z;
} MR_Vector3b;

/// three-dimensional vector
/// Generated from class `MR::Vector3i`.
typedef struct MR_Vector3i
{
    int32_t x;
    int32_t y;
    int32_t z;
} MR_Vector3i;

/// three-dimensional vector
/// Generated from class `MR::Vector3i64`.
typedef struct MR_Vector3i64
{
    MR_int64_t x;
    MR_int64_t y;
    MR_int64_t z;
} MR_Vector3i64;

/// three-dimensional vector
/// Generated from class `MR::Vector3f`.
typedef struct MR_Vector3f
{
    float x;
    float y;
    float z;
} MR_Vector3f;

/// three-dimensional vector
/// Generated from class `MR::Vector3d`.
typedef struct MR_Vector3d
{
    double x;
    double y;
    double z;
} MR_Vector3d;

/// Returns a pointer to a member variable of class `MR::Vector3b` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector3b_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector3b MR_Vector3b_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector3b_DestroyArray()`.
/// Use `MR_Vector3b_OffsetMutablePtr()` and `MR_Vector3b_OffsetPtr()` to access the array elements.
MRC_API MR_Vector3b *MR_Vector3b_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector3b`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Vector3b_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector3b`.
MRC_API MR_Vector3b MR_Vector3b_Construct_3(bool x, bool y, bool z);

/// Generated from a method of class `MR::Vector3b` named `diagonal`.
MRC_API MR_Vector3b MR_Vector3b_diagonal(bool a);

/// Generated from a method of class `MR::Vector3b` named `plusX`.
MRC_API MR_Vector3b MR_Vector3b_plusX(void);

/// Generated from a method of class `MR::Vector3b` named `plusY`.
MRC_API MR_Vector3b MR_Vector3b_plusY(void);

/// Generated from a method of class `MR::Vector3b` named `plusZ`.
MRC_API MR_Vector3b MR_Vector3b_plusZ(void);

/// Generated from a method of class `MR::Vector3b` named `minusX`.
MRC_API MR_Vector3b MR_Vector3b_minusX(void);

/// Generated from a method of class `MR::Vector3b` named `minusY`.
MRC_API MR_Vector3b MR_Vector3b_minusY(void);

/// Generated from a method of class `MR::Vector3b` named `minusZ`.
MRC_API MR_Vector3b MR_Vector3b_minusZ(void);

/// Generated from a method of class `MR::Vector3b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_Vector3b_index_const(const MR_Vector3b *_this, int32_t e);

/// Generated from a method of class `MR::Vector3b` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_Vector3b_index(MR_Vector3b *_this, int32_t e);

/// Generated from a method of class `MR::Vector3b` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Vector3b_lengthSq(const MR_Vector3b *_this);

/// Generated from a method of class `MR::Vector3b` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector3b_length(const MR_Vector3b *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector3b(const MR_Vector3b *a, const MR_Vector3b *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector3b(const MR_Vector3b *a, const MR_Vector3b *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3b *MR_pos_MR_Vector3b(const MR_Vector3b *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector3i MR_neg_MR_Vector3b(const MR_Vector3b *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_add_MR_Vector3b(const MR_Vector3b *a, const MR_Vector3b *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_sub_MR_Vector3b(const MR_Vector3b *a, const MR_Vector3b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_mul_bool_MR_Vector3b(bool a, const MR_Vector3b *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_mul_MR_Vector3b_bool(const MR_Vector3b *b, bool a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector3i MR_div_MR_Vector3b_bool(MR_Vector3b b, bool a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3b *MR_add_assign_MR_Vector3b(MR_Vector3b *a, const MR_Vector3b *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3b *MR_sub_assign_MR_Vector3b(MR_Vector3b *a, const MR_Vector3b *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3b *MR_mul_assign_MR_Vector3b_bool(MR_Vector3b *a, bool b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3b *MR_div_assign_MR_Vector3b_bool(MR_Vector3b *a, bool b);

/// Returns a pointer to a member variable of class `MR::Vector3i` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector3i_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector3i MR_Vector3i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector3i_DestroyArray()`.
/// Use `MR_Vector3i_OffsetMutablePtr()` and `MR_Vector3i_OffsetPtr()` to access the array elements.
MRC_API MR_Vector3i *MR_Vector3i_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector3i`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Vector3i_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector3i`.
MRC_API MR_Vector3i MR_Vector3i_Construct_3(int32_t x, int32_t y, int32_t z);

// Here `T == U` doesn't seem to cause any issues in the C++ code, but we're still disabling it because it somehow gets emitted
//   when generating the bindings, and looks out of place there.
/// Generated from a constructor of class `MR::Vector3i`.
/// Parameter `v` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Vector3i_Construct_float(const MR_Vector3f *v);

/// Generated from a method of class `MR::Vector3i` named `diagonal`.
MRC_API MR_Vector3i MR_Vector3i_diagonal(int32_t a);

/// Generated from a method of class `MR::Vector3i` named `plusX`.
MRC_API MR_Vector3i MR_Vector3i_plusX(void);

/// Generated from a method of class `MR::Vector3i` named `plusY`.
MRC_API MR_Vector3i MR_Vector3i_plusY(void);

/// Generated from a method of class `MR::Vector3i` named `plusZ`.
MRC_API MR_Vector3i MR_Vector3i_plusZ(void);

/// Generated from a method of class `MR::Vector3i` named `minusX`.
MRC_API MR_Vector3i MR_Vector3i_minusX(void);

/// Generated from a method of class `MR::Vector3i` named `minusY`.
MRC_API MR_Vector3i MR_Vector3i_minusY(void);

/// Generated from a method of class `MR::Vector3i` named `minusZ`.
MRC_API MR_Vector3i MR_Vector3i_minusZ(void);

/// Generated from a method of class `MR::Vector3i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector3i_index_const(const MR_Vector3i *_this, int32_t e);

/// Generated from a method of class `MR::Vector3i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Vector3i_index(MR_Vector3i *_this, int32_t e);

/// Generated from a method of class `MR::Vector3i` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Vector3i_lengthSq(const MR_Vector3i *_this);

/// Generated from a method of class `MR::Vector3i` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector3i_length(const MR_Vector3i *_this);

/// returns one of 3 basis unit vector that makes the biggest angle with the direction specified by this
/// Generated from a method of class `MR::Vector3i` named `furthestBasisVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Vector3i_furthestBasisVector(const MR_Vector3i *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector3i(const MR_Vector3i *a, const MR_Vector3i *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector3i(const MR_Vector3i *a, const MR_Vector3i *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_pos_MR_Vector3i(const MR_Vector3i *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector3i MR_neg_MR_Vector3i(const MR_Vector3i *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_add_MR_Vector3i(const MR_Vector3i *a, const MR_Vector3i *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_sub_MR_Vector3i(const MR_Vector3i *a, const MR_Vector3i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_mul_int32_t_MR_Vector3i(int32_t a, const MR_Vector3i *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i MR_mul_MR_Vector3i_int32_t(const MR_Vector3i *b, int32_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector3i MR_div_MR_Vector3i_int32_t(MR_Vector3i b, int32_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_add_assign_MR_Vector3i(MR_Vector3i *a, const MR_Vector3i *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_sub_assign_MR_Vector3i(MR_Vector3i *a, const MR_Vector3i *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_mul_assign_MR_Vector3i_int32_t(MR_Vector3i *a, int32_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_div_assign_MR_Vector3i_int32_t(MR_Vector3i *a, int32_t b);

/// Returns a pointer to a member variable of class `MR::Vector3i64` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector3i64_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector3i64 MR_Vector3i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector3i64_DestroyArray()`.
/// Use `MR_Vector3i64_OffsetMutablePtr()` and `MR_Vector3i64_OffsetPtr()` to access the array elements.
MRC_API MR_Vector3i64 *MR_Vector3i64_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector3i64`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_Vector3i64_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector3i64`.
MRC_API MR_Vector3i64 MR_Vector3i64_Construct_3(MR_int64_t x, MR_int64_t y, MR_int64_t z);

/// Generated from a method of class `MR::Vector3i64` named `diagonal`.
MRC_API MR_Vector3i64 MR_Vector3i64_diagonal(MR_int64_t a);

/// Generated from a method of class `MR::Vector3i64` named `plusX`.
MRC_API MR_Vector3i64 MR_Vector3i64_plusX(void);

/// Generated from a method of class `MR::Vector3i64` named `plusY`.
MRC_API MR_Vector3i64 MR_Vector3i64_plusY(void);

/// Generated from a method of class `MR::Vector3i64` named `plusZ`.
MRC_API MR_Vector3i64 MR_Vector3i64_plusZ(void);

/// Generated from a method of class `MR::Vector3i64` named `minusX`.
MRC_API MR_Vector3i64 MR_Vector3i64_minusX(void);

/// Generated from a method of class `MR::Vector3i64` named `minusY`.
MRC_API MR_Vector3i64 MR_Vector3i64_minusY(void);

/// Generated from a method of class `MR::Vector3i64` named `minusZ`.
MRC_API MR_Vector3i64 MR_Vector3i64_minusZ(void);

/// Generated from a method of class `MR::Vector3i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_Vector3i64_index_const(const MR_Vector3i64 *_this, int32_t e);

/// Generated from a method of class `MR::Vector3i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_Vector3i64_index(MR_Vector3i64 *_this, int32_t e);

/// Generated from a method of class `MR::Vector3i64` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Vector3i64_lengthSq(const MR_Vector3i64 *_this);

/// Generated from a method of class `MR::Vector3i64` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector3i64_length(const MR_Vector3i64 *_this);

/// returns one of 3 basis unit vector that makes the biggest angle with the direction specified by this
/// Generated from a method of class `MR::Vector3i64` named `furthestBasisVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_Vector3i64_furthestBasisVector(const MR_Vector3i64 *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector3i64(const MR_Vector3i64 *a, const MR_Vector3i64 *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector3i64(const MR_Vector3i64 *a, const MR_Vector3i64 *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i64 *MR_pos_MR_Vector3i64(const MR_Vector3i64 *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_neg_MR_Vector3i64(const MR_Vector3i64 *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_add_MR_Vector3i64(const MR_Vector3i64 *a, const MR_Vector3i64 *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_sub_MR_Vector3i64(const MR_Vector3i64 *a, const MR_Vector3i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_mul_int64_t_MR_Vector3i64(MR_int64_t a, const MR_Vector3i64 *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_mul_MR_Vector3i64_int64_t(const MR_Vector3i64 *b, MR_int64_t a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector3i64 MR_div_MR_Vector3i64_int64_t(MR_Vector3i64 b, MR_int64_t a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i64 *MR_add_assign_MR_Vector3i64(MR_Vector3i64 *a, const MR_Vector3i64 *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i64 *MR_sub_assign_MR_Vector3i64(MR_Vector3i64 *a, const MR_Vector3i64 *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i64 *MR_mul_assign_MR_Vector3i64_int64_t(MR_Vector3i64 *a, MR_int64_t b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i64 *MR_div_assign_MR_Vector3i64_int64_t(MR_Vector3i64 *a, MR_int64_t b);

/// Returns a pointer to a member variable of class `MR::Vector3f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector3f_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector3f MR_Vector3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector3f_DestroyArray()`.
/// Use `MR_Vector3f_OffsetMutablePtr()` and `MR_Vector3f_OffsetPtr()` to access the array elements.
MRC_API MR_Vector3f *MR_Vector3f_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector3f`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Vector3f_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector3f`.
MRC_API MR_Vector3f MR_Vector3f_Construct_3(float x, float y, float z);

// Here `T == U` doesn't seem to cause any issues in the C++ code, but we're still disabling it because it somehow gets emitted
//   when generating the bindings, and looks out of place there.
/// Generated from a constructor of class `MR::Vector3f`.
/// Parameter `v` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Vector3f_Construct_double(const MR_Vector3d *v);

// Here `T == U` doesn't seem to cause any issues in the C++ code, but we're still disabling it because it somehow gets emitted
//   when generating the bindings, and looks out of place there.
/// Generated from a constructor of class `MR::Vector3f`.
/// Parameter `v` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Vector3f_Construct_int32_t(const MR_Vector3i *v);

/// Generated from a method of class `MR::Vector3f` named `diagonal`.
MRC_API MR_Vector3f MR_Vector3f_diagonal(float a);

/// Generated from a method of class `MR::Vector3f` named `plusX`.
MRC_API MR_Vector3f MR_Vector3f_plusX(void);

/// Generated from a method of class `MR::Vector3f` named `plusY`.
MRC_API MR_Vector3f MR_Vector3f_plusY(void);

/// Generated from a method of class `MR::Vector3f` named `plusZ`.
MRC_API MR_Vector3f MR_Vector3f_plusZ(void);

/// Generated from a method of class `MR::Vector3f` named `minusX`.
MRC_API MR_Vector3f MR_Vector3f_minusX(void);

/// Generated from a method of class `MR::Vector3f` named `minusY`.
MRC_API MR_Vector3f MR_Vector3f_minusY(void);

/// Generated from a method of class `MR::Vector3f` named `minusZ`.
MRC_API MR_Vector3f MR_Vector3f_minusZ(void);

/// Generated from a method of class `MR::Vector3f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Vector3f_index_const(const MR_Vector3f *_this, int32_t e);

/// Generated from a method of class `MR::Vector3f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Vector3f_index(MR_Vector3f *_this, int32_t e);

/// Generated from a method of class `MR::Vector3f` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Vector3f_lengthSq(const MR_Vector3f *_this);

/// Generated from a method of class `MR::Vector3f` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Vector3f_length(const MR_Vector3f *_this);

/// Generated from a method of class `MR::Vector3f` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Vector3f_normalized(const MR_Vector3f *_this);

/// returns one of 3 basis unit vector that makes the biggest angle with the direction specified by this
/// Generated from a method of class `MR::Vector3f` named `furthestBasisVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Vector3f_furthestBasisVector(const MR_Vector3f *_this);

/// returns 2 unit vector, which together with this vector make an orthogonal basis
/// Currently not implemented for integral vectors.
/// Generated from a method of class `MR::Vector3f` named `perpendicular`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Vector3f_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Vector3f_MR_Vector3f *MR_Vector3f_perpendicular(const MR_Vector3f *_this);

/// returns this vector transformed by xf if it is
/// Generated from a method of class `MR::Vector3f` named `transformed<float>`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Vector3f_transformed(const MR_Vector3f *_this, const MR_AffineXf3f *xf);

/// get rid of signed zero values to be sure that equal vectors have identical binary representation
/// Generated from a method of class `MR::Vector3f` named `unsignZeroValues`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Vector3f_unsignZeroValues(MR_Vector3f *_this);

/// Generated from a method of class `MR::Vector3f` named `isFinite`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Vector3f_isFinite(const MR_Vector3f *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector3f(const MR_Vector3f *a, const MR_Vector3f *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector3f(const MR_Vector3f *a, const MR_Vector3f *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_pos_MR_Vector3f(const MR_Vector3f *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector3f MR_neg_MR_Vector3f(const MR_Vector3f *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3f MR_add_MR_Vector3f(const MR_Vector3f *a, const MR_Vector3f *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3f MR_sub_MR_Vector3f(const MR_Vector3f *a, const MR_Vector3f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3f MR_mul_float_MR_Vector3f(float a, const MR_Vector3f *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3f MR_mul_MR_Vector3f_float(const MR_Vector3f *b, float a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector3f MR_div_MR_Vector3f_float(MR_Vector3f b, float a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_add_assign_MR_Vector3f(MR_Vector3f *a, const MR_Vector3f *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_sub_assign_MR_Vector3f(MR_Vector3f *a, const MR_Vector3f *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_mul_assign_MR_Vector3f_float(MR_Vector3f *a, float b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_div_assign_MR_Vector3f_float(MR_Vector3f *a, float b);

/// Returns a pointer to a member variable of class `MR::Vector3d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Vector3d_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Vector3d MR_Vector3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Vector3d_DestroyArray()`.
/// Use `MR_Vector3d_OffsetMutablePtr()` and `MR_Vector3d_OffsetPtr()` to access the array elements.
MRC_API MR_Vector3d *MR_Vector3d_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Vector3d`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Vector3d_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Vector3d`.
MRC_API MR_Vector3d MR_Vector3d_Construct_3(double x, double y, double z);

// Here `T == U` doesn't seem to cause any issues in the C++ code, but we're still disabling it because it somehow gets emitted
//   when generating the bindings, and looks out of place there.
/// Generated from a constructor of class `MR::Vector3d`.
/// Parameter `v` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Vector3d_Construct_float(const MR_Vector3f *v);

/// Generated from a method of class `MR::Vector3d` named `diagonal`.
MRC_API MR_Vector3d MR_Vector3d_diagonal(double a);

/// Generated from a method of class `MR::Vector3d` named `plusX`.
MRC_API MR_Vector3d MR_Vector3d_plusX(void);

/// Generated from a method of class `MR::Vector3d` named `plusY`.
MRC_API MR_Vector3d MR_Vector3d_plusY(void);

/// Generated from a method of class `MR::Vector3d` named `plusZ`.
MRC_API MR_Vector3d MR_Vector3d_plusZ(void);

/// Generated from a method of class `MR::Vector3d` named `minusX`.
MRC_API MR_Vector3d MR_Vector3d_minusX(void);

/// Generated from a method of class `MR::Vector3d` named `minusY`.
MRC_API MR_Vector3d MR_Vector3d_minusY(void);

/// Generated from a method of class `MR::Vector3d` named `minusZ`.
MRC_API MR_Vector3d MR_Vector3d_minusZ(void);

/// Generated from a method of class `MR::Vector3d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Vector3d_index_const(const MR_Vector3d *_this, int32_t e);

/// Generated from a method of class `MR::Vector3d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Vector3d_index(MR_Vector3d *_this, int32_t e);

/// Generated from a method of class `MR::Vector3d` named `lengthSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector3d_lengthSq(const MR_Vector3d *_this);

/// Generated from a method of class `MR::Vector3d` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Vector3d_length(const MR_Vector3d *_this);

/// Generated from a method of class `MR::Vector3d` named `normalized`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Vector3d_normalized(const MR_Vector3d *_this);

/// returns one of 3 basis unit vector that makes the biggest angle with the direction specified by this
/// Generated from a method of class `MR::Vector3d` named `furthestBasisVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Vector3d_furthestBasisVector(const MR_Vector3d *_this);

/// returns 2 unit vector, which together with this vector make an orthogonal basis
/// Currently not implemented for integral vectors.
/// Generated from a method of class `MR::Vector3d` named `perpendicular`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_Vector3d_MR_Vector3d_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_Vector3d_MR_Vector3d *MR_Vector3d_perpendicular(const MR_Vector3d *_this);

/// returns this vector transformed by xf if it is
/// Generated from a method of class `MR::Vector3d` named `transformed<double>`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Vector3d_transformed(const MR_Vector3d *_this, const MR_AffineXf3d *xf);

/// get rid of signed zero values to be sure that equal vectors have identical binary representation
/// Generated from a method of class `MR::Vector3d` named `unsignZeroValues`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Vector3d_unsignZeroValues(MR_Vector3d *_this);

/// Generated from a method of class `MR::Vector3d` named `isFinite`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Vector3d_isFinite(const MR_Vector3d *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Vector3d(const MR_Vector3d *a, const MR_Vector3d *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Vector3d(const MR_Vector3d *a, const MR_Vector3d *b);

// NOTE: We use `std::declval()` in the operators below because libclang 18 in our binding generator is bugged and chokes on decltyping `a.x` and such. TODO fix this when we update libclang.
/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_pos_MR_Vector3d(const MR_Vector3d *a);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Vector3d MR_neg_MR_Vector3d(const MR_Vector3d *a);

/// Generated from function `MR::operator+`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3d MR_add_MR_Vector3d(const MR_Vector3d *a, const MR_Vector3d *b);

/// Generated from function `MR::operator-`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3d MR_sub_MR_Vector3d(const MR_Vector3d *a, const MR_Vector3d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3d MR_mul_double_MR_Vector3d(double a, const MR_Vector3d *b);

/// Generated from function `MR::operator*`.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Vector3d MR_mul_MR_Vector3d_double(const MR_Vector3d *b, double a);

/// Generated from function `MR::operator/`.
MRC_API MR_Vector3d MR_div_MR_Vector3d_double(MR_Vector3d b, double a);

/// Generated from function `MR::operator+=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_add_assign_MR_Vector3d(MR_Vector3d *a, const MR_Vector3d *b);

/// Generated from function `MR::operator-=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_sub_assign_MR_Vector3d(MR_Vector3d *a, const MR_Vector3d *b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_mul_assign_MR_Vector3d_double(MR_Vector3d *a, double b);

/// Generated from function `MR::operator/=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_div_assign_MR_Vector3d_double(MR_Vector3d *a, double b);

/// dot product
/// Generated from function `MR::dot<float>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API float MR_dot_float_MR_Vector3f(const MR_Vector3f *a, const MR_Vector3f *b);

/// dot product
/// Generated from function `MR::dot<double>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API double MR_dot_double_MR_Vector3d(const MR_Vector3d *a, const MR_Vector3d *b);

/// dot product
/// Generated from function `MR::dot<bool>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API int32_t MR_dot_bool_MR_Vector3b(const MR_Vector3b *a, const MR_Vector3b *b);

/// dot product
/// Generated from function `MR::dot<int32_t>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API int32_t MR_dot_int32_t_MR_Vector3i(const MR_Vector3i *a, const MR_Vector3i *b);

/// dot product
/// Generated from function `MR::dot<MR_int64_t>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_int64_t MR_dot_int64_t_MR_Vector3i64(const MR_Vector3i64 *a, const MR_Vector3i64 *b);

#ifdef __cplusplus
} // extern "C"
#endif
