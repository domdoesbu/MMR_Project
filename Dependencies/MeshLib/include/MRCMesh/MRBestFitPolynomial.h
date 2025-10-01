// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_optional_double MR_std_optional_double; // Defined in `#include <MRCMisc/std_optional_double.h>`.
typedef struct MR_std_optional_float MR_std_optional_float; // Defined in `#include <MRCMisc/std_optional_float.h>`.
typedef struct MR_std_variant_MR_Polynomial_double_0_MR_Polynomial_double_1_MR_Polynomial_double_2_MR_Polynomial_double_3_MR_Polynomial_double_4_MR_Polynomial_double_5_MR_Polynomial_double_6 MR_std_variant_MR_Polynomial_double_0_MR_Polynomial_double_1_MR_Polynomial_double_2_MR_Polynomial_double_3_MR_Polynomial_double_4_MR_Polynomial_double_5_MR_Polynomial_double_6; // Defined in `#include <MRCMisc/std_variant_MR_Polynomial_double_0_MR_Polynomial_double_1_MR_Polynomial_double_2_MR_Polynomi__dfcd.h>`.
typedef struct MR_std_variant_MR_Polynomial_float_0_MR_Polynomial_float_1_MR_Polynomial_float_2_MR_Polynomial_float_3_MR_Polynomial_float_4_MR_Polynomial_float_5_MR_Polynomial_float_6 MR_std_variant_MR_Polynomial_float_0_MR_Polynomial_float_1_MR_Polynomial_float_2_MR_Polynomial_float_3_MR_Polynomial_float_4_MR_Polynomial_float_5_MR_Polynomial_float_6; // Defined in `#include <MRCMisc/std_variant_MR_Polynomial_float_0_MR_Polynomial_float_1_MR_Polynomial_float_2_MR_Polynomial___4993.h>`.
typedef struct MR_std_vector_double MR_std_vector_double; // Defined in `#include <MRCMisc/std_vector_double.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.


// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<float, 0>`.
typedef struct MR_Polynomial_float_0 MR_Polynomial_float_0;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<float, 1>`.
typedef struct MR_Polynomial_float_1 MR_Polynomial_float_1;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<float, 2>`.
typedef struct MR_Polynomial_float_2 MR_Polynomial_float_2;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<float, 3>`.
typedef struct MR_Polynomial_float_3 MR_Polynomial_float_3;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<float, 4>`.
typedef struct MR_Polynomial_float_4 MR_Polynomial_float_4;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<float, 5>`.
typedef struct MR_Polynomial_float_5 MR_Polynomial_float_5;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<float, 6>`.
typedef struct MR_Polynomial_float_6 MR_Polynomial_float_6;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<double, 0>`.
typedef struct MR_Polynomial_double_0 MR_Polynomial_double_0;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<double, 1>`.
typedef struct MR_Polynomial_double_1 MR_Polynomial_double_1;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<double, 2>`.
typedef struct MR_Polynomial_double_2 MR_Polynomial_double_2;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<double, 3>`.
typedef struct MR_Polynomial_double_3 MR_Polynomial_double_3;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<double, 4>`.
typedef struct MR_Polynomial_double_4 MR_Polynomial_double_4;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<double, 5>`.
typedef struct MR_Polynomial_double_5 MR_Polynomial_double_5;

// Please note that these template classes are explicitly instantiated in the corresponding .cpp files.
// The following degrees are instantiated: [2; 6].
/// Generated from class `MR::Polynomial<double, 6>`.
typedef struct MR_Polynomial_double_6 MR_Polynomial_double_6;

/// This is a unifying interface for a polynomial of some degree, known only in runtime
/// Generated from class `MR::PolynomialWrapper<float>`.
typedef struct MR_PolynomialWrapper_float MR_PolynomialWrapper_float;

/// This is a unifying interface for a polynomial of some degree, known only in runtime
/// Generated from class `MR::PolynomialWrapper<double>`.
typedef struct MR_PolynomialWrapper_double MR_PolynomialWrapper_double;

/// Generated from function `MR::canSolvePolynomial<MR_uint64_t>`.
MRC_API bool MR_canSolvePolynomial(MR_uint64_t degree);

/// Generated from function `MR::canMinimizePolynomial<MR_uint64_t>`.
MRC_API bool MR_canMinimizePolynomial(MR_uint64_t degree);

/// Returns a pointer to a member variable of class `MR::Polynomial<float, 0>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_float_0_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_0_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_0 *MR_Polynomial_float_0_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_float_0_DestroyArray()`.
/// Use `MR_Polynomial_float_0_OffsetMutablePtr()` and `MR_Polynomial_float_0_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_float_0 *MR_Polynomial_float_0_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_float_0 *MR_Polynomial_float_0_OffsetPtr(const MR_Polynomial_float_0 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_float_0 *MR_Polynomial_float_0_OffsetMutablePtr(MR_Polynomial_float_0 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<float, 0>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_0_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_0 *MR_Polynomial_float_0_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_float_0 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_float_0`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_0_Destroy(const MR_Polynomial_float_0 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_float_0`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_0_DestroyArray(const MR_Polynomial_float_0 *_this);

/// Generated from a method of class `MR::Polynomial<float, 0>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_float_0 *MR_Polynomial_float_0_AssignFromAnother(MR_Polynomial_float_0 *_this, MR_PassBy _other_pass_by, MR_Polynomial_float_0 *_other);

/// Generated from a method of class `MR::Polynomial<float, 0>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_0_call(const MR_Polynomial_float_0 *_this, float x);

/// Generated from a method of class `MR::Polynomial<float, 0>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_0_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_0 *MR_Polynomial_float_0_deriv(const MR_Polynomial_float_0 *_this);

/// Generated from a method of class `MR::Polynomial<float, 0>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_0_intervalMin(const MR_Polynomial_float_0 *_this, float a, float b);

/// Returns a pointer to a member variable of class `MR::Polynomial<float, 1>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_float_1_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_1_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_1 *MR_Polynomial_float_1_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_float_1_DestroyArray()`.
/// Use `MR_Polynomial_float_1_OffsetMutablePtr()` and `MR_Polynomial_float_1_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_float_1 *MR_Polynomial_float_1_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_float_1 *MR_Polynomial_float_1_OffsetPtr(const MR_Polynomial_float_1 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_float_1 *MR_Polynomial_float_1_OffsetMutablePtr(MR_Polynomial_float_1 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<float, 1>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_1_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_1 *MR_Polynomial_float_1_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_float_1 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_float_1`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_1_Destroy(const MR_Polynomial_float_1 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_float_1`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_1_DestroyArray(const MR_Polynomial_float_1 *_this);

/// Generated from a method of class `MR::Polynomial<float, 1>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_float_1 *MR_Polynomial_float_1_AssignFromAnother(MR_Polynomial_float_1 *_this, MR_PassBy _other_pass_by, MR_Polynomial_float_1 *_other);

/// Generated from a method of class `MR::Polynomial<float, 1>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_1_call(const MR_Polynomial_float_1 *_this, float x);

/// Generated from a method of class `MR::Polynomial<float, 1>` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float *MR_Polynomial_float_1_solve(const MR_Polynomial_float_1 *_this, float tol);

/// Generated from a method of class `MR::Polynomial<float, 1>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_0_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_0 *MR_Polynomial_float_1_deriv(const MR_Polynomial_float_1 *_this);

/// Generated from a method of class `MR::Polynomial<float, 1>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_1_intervalMin(const MR_Polynomial_float_1 *_this, float a, float b);

/// Returns a pointer to a member variable of class `MR::Polynomial<float, 2>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_float_2_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_2_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_2 *MR_Polynomial_float_2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_float_2_DestroyArray()`.
/// Use `MR_Polynomial_float_2_OffsetMutablePtr()` and `MR_Polynomial_float_2_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_float_2 *MR_Polynomial_float_2_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_float_2 *MR_Polynomial_float_2_OffsetPtr(const MR_Polynomial_float_2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_float_2 *MR_Polynomial_float_2_OffsetMutablePtr(MR_Polynomial_float_2 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<float, 2>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_2_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_2 *MR_Polynomial_float_2_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_float_2 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_float_2`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_2_Destroy(const MR_Polynomial_float_2 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_float_2`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_2_DestroyArray(const MR_Polynomial_float_2 *_this);

/// Generated from a method of class `MR::Polynomial<float, 2>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_float_2 *MR_Polynomial_float_2_AssignFromAnother(MR_Polynomial_float_2 *_this, MR_PassBy _other_pass_by, MR_Polynomial_float_2 *_other);

/// Generated from a method of class `MR::Polynomial<float, 2>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_2_call(const MR_Polynomial_float_2 *_this, float x);

/// Generated from a method of class `MR::Polynomial<float, 2>` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float *MR_Polynomial_float_2_solve(const MR_Polynomial_float_2 *_this, float tol);

/// Generated from a method of class `MR::Polynomial<float, 2>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_1_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_1 *MR_Polynomial_float_2_deriv(const MR_Polynomial_float_2 *_this);

/// Generated from a method of class `MR::Polynomial<float, 2>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_2_intervalMin(const MR_Polynomial_float_2 *_this, float a, float b);

/// Returns a pointer to a member variable of class `MR::Polynomial<float, 3>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_float_3_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_3_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_3 *MR_Polynomial_float_3_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_float_3_DestroyArray()`.
/// Use `MR_Polynomial_float_3_OffsetMutablePtr()` and `MR_Polynomial_float_3_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_float_3 *MR_Polynomial_float_3_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_float_3 *MR_Polynomial_float_3_OffsetPtr(const MR_Polynomial_float_3 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_float_3 *MR_Polynomial_float_3_OffsetMutablePtr(MR_Polynomial_float_3 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<float, 3>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_3_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_3 *MR_Polynomial_float_3_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_float_3 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_float_3`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_3_Destroy(const MR_Polynomial_float_3 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_float_3`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_3_DestroyArray(const MR_Polynomial_float_3 *_this);

/// Generated from a method of class `MR::Polynomial<float, 3>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_float_3 *MR_Polynomial_float_3_AssignFromAnother(MR_Polynomial_float_3 *_this, MR_PassBy _other_pass_by, MR_Polynomial_float_3 *_other);

/// Generated from a method of class `MR::Polynomial<float, 3>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_3_call(const MR_Polynomial_float_3 *_this, float x);

/// Generated from a method of class `MR::Polynomial<float, 3>` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float *MR_Polynomial_float_3_solve(const MR_Polynomial_float_3 *_this, float tol);

/// Generated from a method of class `MR::Polynomial<float, 3>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_2_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_2 *MR_Polynomial_float_3_deriv(const MR_Polynomial_float_3 *_this);

/// Generated from a method of class `MR::Polynomial<float, 3>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_3_intervalMin(const MR_Polynomial_float_3 *_this, float a, float b);

/// Returns a pointer to a member variable of class `MR::Polynomial<float, 4>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_float_4_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_4_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_4 *MR_Polynomial_float_4_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_float_4_DestroyArray()`.
/// Use `MR_Polynomial_float_4_OffsetMutablePtr()` and `MR_Polynomial_float_4_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_float_4 *MR_Polynomial_float_4_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_float_4 *MR_Polynomial_float_4_OffsetPtr(const MR_Polynomial_float_4 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_float_4 *MR_Polynomial_float_4_OffsetMutablePtr(MR_Polynomial_float_4 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<float, 4>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_4_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_4 *MR_Polynomial_float_4_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_float_4 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_float_4`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_4_Destroy(const MR_Polynomial_float_4 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_float_4`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_4_DestroyArray(const MR_Polynomial_float_4 *_this);

/// Generated from a method of class `MR::Polynomial<float, 4>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_float_4 *MR_Polynomial_float_4_AssignFromAnother(MR_Polynomial_float_4 *_this, MR_PassBy _other_pass_by, MR_Polynomial_float_4 *_other);

/// Generated from a method of class `MR::Polynomial<float, 4>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_4_call(const MR_Polynomial_float_4 *_this, float x);

/// Generated from a method of class `MR::Polynomial<float, 4>` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float *MR_Polynomial_float_4_solve(const MR_Polynomial_float_4 *_this, float tol);

/// Generated from a method of class `MR::Polynomial<float, 4>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_3_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_3 *MR_Polynomial_float_4_deriv(const MR_Polynomial_float_4 *_this);

/// Generated from a method of class `MR::Polynomial<float, 4>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_4_intervalMin(const MR_Polynomial_float_4 *_this, float a, float b);

/// Returns a pointer to a member variable of class `MR::Polynomial<float, 5>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_float_5_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_5_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_5 *MR_Polynomial_float_5_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_float_5_DestroyArray()`.
/// Use `MR_Polynomial_float_5_OffsetMutablePtr()` and `MR_Polynomial_float_5_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_float_5 *MR_Polynomial_float_5_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_float_5 *MR_Polynomial_float_5_OffsetPtr(const MR_Polynomial_float_5 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_float_5 *MR_Polynomial_float_5_OffsetMutablePtr(MR_Polynomial_float_5 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<float, 5>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_5_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_5 *MR_Polynomial_float_5_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_float_5 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_float_5`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_5_Destroy(const MR_Polynomial_float_5 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_float_5`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_5_DestroyArray(const MR_Polynomial_float_5 *_this);

/// Generated from a method of class `MR::Polynomial<float, 5>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_float_5 *MR_Polynomial_float_5_AssignFromAnother(MR_Polynomial_float_5 *_this, MR_PassBy _other_pass_by, MR_Polynomial_float_5 *_other);

/// Generated from a method of class `MR::Polynomial<float, 5>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_5_call(const MR_Polynomial_float_5 *_this, float x);

/// Generated from a method of class `MR::Polynomial<float, 5>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_4_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_4 *MR_Polynomial_float_5_deriv(const MR_Polynomial_float_5 *_this);

/// Generated from a method of class `MR::Polynomial<float, 5>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_5_intervalMin(const MR_Polynomial_float_5 *_this, float a, float b);

/// Returns a pointer to a member variable of class `MR::Polynomial<float, 6>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_float_6_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_6_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_6 *MR_Polynomial_float_6_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_float_6_DestroyArray()`.
/// Use `MR_Polynomial_float_6_OffsetMutablePtr()` and `MR_Polynomial_float_6_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_float_6 *MR_Polynomial_float_6_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_float_6 *MR_Polynomial_float_6_OffsetPtr(const MR_Polynomial_float_6 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_float_6 *MR_Polynomial_float_6_OffsetMutablePtr(MR_Polynomial_float_6 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<float, 6>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_6_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_6 *MR_Polynomial_float_6_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_float_6 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_float_6`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_6_Destroy(const MR_Polynomial_float_6 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_float_6`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_float_6_DestroyArray(const MR_Polynomial_float_6 *_this);

/// Generated from a method of class `MR::Polynomial<float, 6>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_float_6 *MR_Polynomial_float_6_AssignFromAnother(MR_Polynomial_float_6 *_this, MR_PassBy _other_pass_by, MR_Polynomial_float_6 *_other);

/// Generated from a method of class `MR::Polynomial<float, 6>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Polynomial_float_6_call(const MR_Polynomial_float_6 *_this, float x);

/// Generated from a method of class `MR::Polynomial<float, 6>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_float_5_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_float_5 *MR_Polynomial_float_6_deriv(const MR_Polynomial_float_6 *_this);

/// Returns a pointer to a member variable of class `MR::Polynomial<double, 0>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_double_0_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_0_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_0 *MR_Polynomial_double_0_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_double_0_DestroyArray()`.
/// Use `MR_Polynomial_double_0_OffsetMutablePtr()` and `MR_Polynomial_double_0_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_double_0 *MR_Polynomial_double_0_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_double_0 *MR_Polynomial_double_0_OffsetPtr(const MR_Polynomial_double_0 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_double_0 *MR_Polynomial_double_0_OffsetMutablePtr(MR_Polynomial_double_0 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<double, 0>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_0_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_0 *MR_Polynomial_double_0_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_double_0 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_double_0`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_0_Destroy(const MR_Polynomial_double_0 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_double_0`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_0_DestroyArray(const MR_Polynomial_double_0 *_this);

/// Generated from a method of class `MR::Polynomial<double, 0>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_double_0 *MR_Polynomial_double_0_AssignFromAnother(MR_Polynomial_double_0 *_this, MR_PassBy _other_pass_by, MR_Polynomial_double_0 *_other);

/// Generated from a method of class `MR::Polynomial<double, 0>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_0_call(const MR_Polynomial_double_0 *_this, double x);

/// Generated from a method of class `MR::Polynomial<double, 0>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_0_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_0 *MR_Polynomial_double_0_deriv(const MR_Polynomial_double_0 *_this);

/// Generated from a method of class `MR::Polynomial<double, 0>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_0_intervalMin(const MR_Polynomial_double_0 *_this, double a, double b);

/// Returns a pointer to a member variable of class `MR::Polynomial<double, 1>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_double_1_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_1_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_1 *MR_Polynomial_double_1_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_double_1_DestroyArray()`.
/// Use `MR_Polynomial_double_1_OffsetMutablePtr()` and `MR_Polynomial_double_1_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_double_1 *MR_Polynomial_double_1_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_double_1 *MR_Polynomial_double_1_OffsetPtr(const MR_Polynomial_double_1 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_double_1 *MR_Polynomial_double_1_OffsetMutablePtr(MR_Polynomial_double_1 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<double, 1>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_1_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_1 *MR_Polynomial_double_1_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_double_1 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_double_1`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_1_Destroy(const MR_Polynomial_double_1 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_double_1`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_1_DestroyArray(const MR_Polynomial_double_1 *_this);

/// Generated from a method of class `MR::Polynomial<double, 1>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_double_1 *MR_Polynomial_double_1_AssignFromAnother(MR_Polynomial_double_1 *_this, MR_PassBy _other_pass_by, MR_Polynomial_double_1 *_other);

/// Generated from a method of class `MR::Polynomial<double, 1>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_1_call(const MR_Polynomial_double_1 *_this, double x);

/// Generated from a method of class `MR::Polynomial<double, 1>` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_double_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_double *MR_Polynomial_double_1_solve(const MR_Polynomial_double_1 *_this, double tol);

/// Generated from a method of class `MR::Polynomial<double, 1>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_0_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_0 *MR_Polynomial_double_1_deriv(const MR_Polynomial_double_1 *_this);

/// Generated from a method of class `MR::Polynomial<double, 1>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_1_intervalMin(const MR_Polynomial_double_1 *_this, double a, double b);

/// Returns a pointer to a member variable of class `MR::Polynomial<double, 2>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_double_2_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_2_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_2 *MR_Polynomial_double_2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_double_2_DestroyArray()`.
/// Use `MR_Polynomial_double_2_OffsetMutablePtr()` and `MR_Polynomial_double_2_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_double_2 *MR_Polynomial_double_2_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_double_2 *MR_Polynomial_double_2_OffsetPtr(const MR_Polynomial_double_2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_double_2 *MR_Polynomial_double_2_OffsetMutablePtr(MR_Polynomial_double_2 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<double, 2>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_2_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_2 *MR_Polynomial_double_2_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_double_2 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_double_2`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_2_Destroy(const MR_Polynomial_double_2 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_double_2`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_2_DestroyArray(const MR_Polynomial_double_2 *_this);

/// Generated from a method of class `MR::Polynomial<double, 2>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_double_2 *MR_Polynomial_double_2_AssignFromAnother(MR_Polynomial_double_2 *_this, MR_PassBy _other_pass_by, MR_Polynomial_double_2 *_other);

/// Generated from a method of class `MR::Polynomial<double, 2>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_2_call(const MR_Polynomial_double_2 *_this, double x);

/// Generated from a method of class `MR::Polynomial<double, 2>` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_double_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_double *MR_Polynomial_double_2_solve(const MR_Polynomial_double_2 *_this, double tol);

/// Generated from a method of class `MR::Polynomial<double, 2>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_1_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_1 *MR_Polynomial_double_2_deriv(const MR_Polynomial_double_2 *_this);

/// Generated from a method of class `MR::Polynomial<double, 2>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_2_intervalMin(const MR_Polynomial_double_2 *_this, double a, double b);

/// Returns a pointer to a member variable of class `MR::Polynomial<double, 3>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_double_3_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_3_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_3 *MR_Polynomial_double_3_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_double_3_DestroyArray()`.
/// Use `MR_Polynomial_double_3_OffsetMutablePtr()` and `MR_Polynomial_double_3_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_double_3 *MR_Polynomial_double_3_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_double_3 *MR_Polynomial_double_3_OffsetPtr(const MR_Polynomial_double_3 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_double_3 *MR_Polynomial_double_3_OffsetMutablePtr(MR_Polynomial_double_3 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<double, 3>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_3_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_3 *MR_Polynomial_double_3_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_double_3 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_double_3`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_3_Destroy(const MR_Polynomial_double_3 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_double_3`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_3_DestroyArray(const MR_Polynomial_double_3 *_this);

/// Generated from a method of class `MR::Polynomial<double, 3>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_double_3 *MR_Polynomial_double_3_AssignFromAnother(MR_Polynomial_double_3 *_this, MR_PassBy _other_pass_by, MR_Polynomial_double_3 *_other);

/// Generated from a method of class `MR::Polynomial<double, 3>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_3_call(const MR_Polynomial_double_3 *_this, double x);

/// Generated from a method of class `MR::Polynomial<double, 3>` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_double_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_double *MR_Polynomial_double_3_solve(const MR_Polynomial_double_3 *_this, double tol);

/// Generated from a method of class `MR::Polynomial<double, 3>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_2_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_2 *MR_Polynomial_double_3_deriv(const MR_Polynomial_double_3 *_this);

/// Generated from a method of class `MR::Polynomial<double, 3>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_3_intervalMin(const MR_Polynomial_double_3 *_this, double a, double b);

/// Returns a pointer to a member variable of class `MR::Polynomial<double, 4>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_double_4_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_4_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_4 *MR_Polynomial_double_4_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_double_4_DestroyArray()`.
/// Use `MR_Polynomial_double_4_OffsetMutablePtr()` and `MR_Polynomial_double_4_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_double_4 *MR_Polynomial_double_4_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_double_4 *MR_Polynomial_double_4_OffsetPtr(const MR_Polynomial_double_4 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_double_4 *MR_Polynomial_double_4_OffsetMutablePtr(MR_Polynomial_double_4 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<double, 4>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_4_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_4 *MR_Polynomial_double_4_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_double_4 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_double_4`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_4_Destroy(const MR_Polynomial_double_4 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_double_4`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_4_DestroyArray(const MR_Polynomial_double_4 *_this);

/// Generated from a method of class `MR::Polynomial<double, 4>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_double_4 *MR_Polynomial_double_4_AssignFromAnother(MR_Polynomial_double_4 *_this, MR_PassBy _other_pass_by, MR_Polynomial_double_4 *_other);

/// Generated from a method of class `MR::Polynomial<double, 4>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_4_call(const MR_Polynomial_double_4 *_this, double x);

/// Generated from a method of class `MR::Polynomial<double, 4>` named `solve`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_double_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_double *MR_Polynomial_double_4_solve(const MR_Polynomial_double_4 *_this, double tol);

/// Generated from a method of class `MR::Polynomial<double, 4>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_3_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_3 *MR_Polynomial_double_4_deriv(const MR_Polynomial_double_4 *_this);

/// Generated from a method of class `MR::Polynomial<double, 4>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_4_intervalMin(const MR_Polynomial_double_4 *_this, double a, double b);

/// Returns a pointer to a member variable of class `MR::Polynomial<double, 5>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_double_5_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_5_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_5 *MR_Polynomial_double_5_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_double_5_DestroyArray()`.
/// Use `MR_Polynomial_double_5_OffsetMutablePtr()` and `MR_Polynomial_double_5_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_double_5 *MR_Polynomial_double_5_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_double_5 *MR_Polynomial_double_5_OffsetPtr(const MR_Polynomial_double_5 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_double_5 *MR_Polynomial_double_5_OffsetMutablePtr(MR_Polynomial_double_5 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<double, 5>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_5_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_5 *MR_Polynomial_double_5_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_double_5 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_double_5`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_5_Destroy(const MR_Polynomial_double_5 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_double_5`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_5_DestroyArray(const MR_Polynomial_double_5 *_this);

/// Generated from a method of class `MR::Polynomial<double, 5>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_double_5 *MR_Polynomial_double_5_AssignFromAnother(MR_Polynomial_double_5 *_this, MR_PassBy _other_pass_by, MR_Polynomial_double_5 *_other);

/// Generated from a method of class `MR::Polynomial<double, 5>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_5_call(const MR_Polynomial_double_5 *_this, double x);

/// Generated from a method of class `MR::Polynomial<double, 5>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_4_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_4 *MR_Polynomial_double_5_deriv(const MR_Polynomial_double_5 *_this);

/// Generated from a method of class `MR::Polynomial<double, 5>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_5_intervalMin(const MR_Polynomial_double_5 *_this, double a, double b);

/// Returns a pointer to a member variable of class `MR::Polynomial<double, 6>` named `n`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Polynomial_double_6_Get_n(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_6_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_6 *MR_Polynomial_double_6_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Polynomial_double_6_DestroyArray()`.
/// Use `MR_Polynomial_double_6_OffsetMutablePtr()` and `MR_Polynomial_double_6_OffsetPtr()` to access the array elements.
MRC_API MR_Polynomial_double_6 *MR_Polynomial_double_6_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Polynomial_double_6 *MR_Polynomial_double_6_OffsetPtr(const MR_Polynomial_double_6 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Polynomial_double_6 *MR_Polynomial_double_6_OffsetMutablePtr(MR_Polynomial_double_6 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Polynomial<double, 6>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_6_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_6 *MR_Polynomial_double_6_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Polynomial_double_6 *_other);

/// Destroys a heap-allocated instance of `MR_Polynomial_double_6`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_6_Destroy(const MR_Polynomial_double_6 *_this);

/// Destroys a heap-allocated array of `MR_Polynomial_double_6`. Does nothing if the pointer is null.
MRC_API void MR_Polynomial_double_6_DestroyArray(const MR_Polynomial_double_6 *_this);

/// Generated from a method of class `MR::Polynomial<double, 6>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Polynomial_double_6 *MR_Polynomial_double_6_AssignFromAnother(MR_Polynomial_double_6 *_this, MR_PassBy _other_pass_by, MR_Polynomial_double_6 *_other);

/// Generated from a method of class `MR::Polynomial<double, 6>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Polynomial_double_6_call(const MR_Polynomial_double_6 *_this, double x);

/// Generated from a method of class `MR::Polynomial<double, 6>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Polynomial_double_5_Destroy()` to free it when you're done using it.
MRC_API MR_Polynomial_double_5 *MR_Polynomial_double_6_deriv(const MR_Polynomial_double_6 *_this);

/// Returns a pointer to a member variable of class `MR::PolynomialWrapper<float>` named `poly`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_variant_MR_Polynomial_float_0_MR_Polynomial_float_1_MR_Polynomial_float_2_MR_Polynomial_float_3_MR_Polynomial_float_4_MR_Polynomial_float_5_MR_Polynomial_float_6 *MR_PolynomialWrapper_float_Get_poly(const MR_PolynomialWrapper_float *_this);

/// Modifies a member variable of class `MR::PolynomialWrapper<float>` named `poly`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolynomialWrapper_float_Set_poly(MR_PolynomialWrapper_float *_this, MR_PassBy value_pass_by, MR_std_variant_MR_Polynomial_float_0_MR_Polynomial_float_1_MR_Polynomial_float_2_MR_Polynomial_float_3_MR_Polynomial_float_4_MR_Polynomial_float_5_MR_Polynomial_float_6 *value);

/// Returns a mutable pointer to a member variable of class `MR::PolynomialWrapper<float>` named `poly`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_variant_MR_Polynomial_float_0_MR_Polynomial_float_1_MR_Polynomial_float_2_MR_Polynomial_float_3_MR_Polynomial_float_4_MR_Polynomial_float_5_MR_Polynomial_float_6 *MR_PolynomialWrapper_float_GetMutable_poly(MR_PolynomialWrapper_float *_this);

/// Generated from a constructor of class `MR::PolynomialWrapper<float>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_float_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_float *MR_PolynomialWrapper_float_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PolynomialWrapper_float *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolynomialWrapper_float *MR_PolynomialWrapper_float_OffsetPtr(const MR_PolynomialWrapper_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolynomialWrapper_float *MR_PolynomialWrapper_float_OffsetMutablePtr(MR_PolynomialWrapper_float *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_PolynomialWrapper_float`. Does nothing if the pointer is null.
MRC_API void MR_PolynomialWrapper_float_Destroy(const MR_PolynomialWrapper_float *_this);

/// Destroys a heap-allocated array of `MR_PolynomialWrapper_float`. Does nothing if the pointer is null.
MRC_API void MR_PolynomialWrapper_float_DestroyArray(const MR_PolynomialWrapper_float *_this);

/// Generated from a method of class `MR::PolynomialWrapper<float>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolynomialWrapper_float *MR_PolynomialWrapper_float_AssignFromAnother(MR_PolynomialWrapper_float *_this, MR_PassBy _other_pass_by, MR_PolynomialWrapper_float *_other);

/// Generated from a method of class `MR::PolynomialWrapper<float>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_PolynomialWrapper_float_call(const MR_PolynomialWrapper_float *_this, float x);

/// Generated from a method of class `MR::PolynomialWrapper<float>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_float_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_float *MR_PolynomialWrapper_float_deriv(const MR_PolynomialWrapper_float *_this);

/// Generated from a method of class `MR::PolynomialWrapper<float>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_float *MR_PolynomialWrapper_float_intervalMin(const MR_PolynomialWrapper_float *_this, float a, float b);

/// Returns a pointer to a member variable of class `MR::PolynomialWrapper<double>` named `poly`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_variant_MR_Polynomial_double_0_MR_Polynomial_double_1_MR_Polynomial_double_2_MR_Polynomial_double_3_MR_Polynomial_double_4_MR_Polynomial_double_5_MR_Polynomial_double_6 *MR_PolynomialWrapper_double_Get_poly(const MR_PolynomialWrapper_double *_this);

/// Modifies a member variable of class `MR::PolynomialWrapper<double>` named `poly`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolynomialWrapper_double_Set_poly(MR_PolynomialWrapper_double *_this, MR_PassBy value_pass_by, MR_std_variant_MR_Polynomial_double_0_MR_Polynomial_double_1_MR_Polynomial_double_2_MR_Polynomial_double_3_MR_Polynomial_double_4_MR_Polynomial_double_5_MR_Polynomial_double_6 *value);

/// Returns a mutable pointer to a member variable of class `MR::PolynomialWrapper<double>` named `poly`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_variant_MR_Polynomial_double_0_MR_Polynomial_double_1_MR_Polynomial_double_2_MR_Polynomial_double_3_MR_Polynomial_double_4_MR_Polynomial_double_5_MR_Polynomial_double_6 *MR_PolynomialWrapper_double_GetMutable_poly(MR_PolynomialWrapper_double *_this);

/// Generated from a constructor of class `MR::PolynomialWrapper<double>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_double_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_double *MR_PolynomialWrapper_double_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PolynomialWrapper_double *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolynomialWrapper_double *MR_PolynomialWrapper_double_OffsetPtr(const MR_PolynomialWrapper_double *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolynomialWrapper_double *MR_PolynomialWrapper_double_OffsetMutablePtr(MR_PolynomialWrapper_double *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_PolynomialWrapper_double`. Does nothing if the pointer is null.
MRC_API void MR_PolynomialWrapper_double_Destroy(const MR_PolynomialWrapper_double *_this);

/// Destroys a heap-allocated array of `MR_PolynomialWrapper_double`. Does nothing if the pointer is null.
MRC_API void MR_PolynomialWrapper_double_DestroyArray(const MR_PolynomialWrapper_double *_this);

/// Generated from a method of class `MR::PolynomialWrapper<double>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolynomialWrapper_double *MR_PolynomialWrapper_double_AssignFromAnother(MR_PolynomialWrapper_double *_this, MR_PassBy _other_pass_by, MR_PolynomialWrapper_double *_other);

/// Generated from a method of class `MR::PolynomialWrapper<double>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_PolynomialWrapper_double_call(const MR_PolynomialWrapper_double *_this, double x);

/// Generated from a method of class `MR::PolynomialWrapper<double>` named `deriv`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolynomialWrapper_double_Destroy()` to free it when you're done using it.
MRC_API MR_PolynomialWrapper_double *MR_PolynomialWrapper_double_deriv(const MR_PolynomialWrapper_double *_this);

/// Generated from a method of class `MR::PolynomialWrapper<double>` named `intervalMin`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_double_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_double *MR_PolynomialWrapper_double_intervalMin(const MR_PolynomialWrapper_double *_this, double a, double b);

#ifdef __cplusplus
} // extern "C"
#endif
