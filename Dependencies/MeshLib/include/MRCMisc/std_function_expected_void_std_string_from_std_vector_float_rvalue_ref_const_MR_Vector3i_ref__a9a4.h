// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Vector3i MR_Vector3i; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.


/// Stores a functor of type: `expected<void, std::string>(std::vector<float> &&, const MR::Vector3i &, int32_t)`. Possibly stateful.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_DestroyArray()`.
/// Use `MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_OffsetMutablePtr()` and `MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_OffsetPtr()` to access the array elements.
MRC_API MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_AssignFromAnother(MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *_this, MR_PassBy other_pass_by, MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *other);

/// Destroys a heap-allocated instance of `MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t`. Does nothing if the pointer is null.
MRC_API void MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_Destroy(const MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *_this);

/// Destroys a heap-allocated array of `MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t`. Does nothing if the pointer is null.
MRC_API void MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_DestroyArray(const MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_OffsetPtr(const MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_OffsetMutablePtr(MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *ptr, ptrdiff_t i);

/// Assign a stateless function.
/// Parameter `_this` can not be null. It is a single object.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Callback parameter `_2` will never be null. It is non-owning, do NOT destroy it.
/// Callback parameter `_return_pass_by` is an output parameter. It's will never be null, and initially points to a zeroed variable.
MRC_API void MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_Assign(MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *_this, MR_expected_void_std_string *(*func)(MR_PassBy *_return_pass_by, MR_std_vector_float *_1, const MR_Vector3i *_2, int32_t _3));

/// Assign a function with an extra user data pointer.
/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
/// Parameter `_this` can not be null. It is a single object.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Callback parameter `_2` will never be null. It is non-owning, do NOT destroy it.
/// Callback parameter `_return_pass_by` is an output parameter. It's will never be null, and initially points to a zeroed variable.
/// How to use `userdata_callback`:
///   The `_this_userdata` parameter will never be null.
///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
MRC_API void MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t_AssignWithDataPtr(MR_std_function_expected_void_std_string_from_std_vector_float_rvalue_ref_const_MR_Vector3i_ref_int32_t *_this, MR_expected_void_std_string *(*func)(MR_PassBy *_return_pass_by, MR_std_vector_float *_1, const MR_Vector3i *_2, int32_t _3, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

#ifdef __cplusplus
} // extern "C"
#endif
