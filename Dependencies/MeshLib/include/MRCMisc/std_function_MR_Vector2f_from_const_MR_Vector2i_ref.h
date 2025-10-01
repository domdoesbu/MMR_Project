// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Vector2i MR_Vector2i; // Defined in `#include <MRCMesh/MRVector2.h>`.


/// Stores a functor of type: `MR::Vector2f(const MR::Vector2i &)`. Possibly stateful.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_DestroyArray()`.
/// Use `MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_OffsetMutablePtr()` and `MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_OffsetPtr()` to access the array elements.
MRC_API MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_AssignFromAnother(MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *_this, MR_PassBy other_pass_by, MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *other);

/// Destroys a heap-allocated instance of `MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref`. Does nothing if the pointer is null.
MRC_API void MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_Destroy(const MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *_this);

/// Destroys a heap-allocated array of `MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref`. Does nothing if the pointer is null.
MRC_API void MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_DestroyArray(const MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_OffsetPtr(const MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_OffsetMutablePtr(MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *ptr, ptrdiff_t i);

/// Assign a stateless function.
/// Parameter `_this` can not be null. It is a single object.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
MRC_API void MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_Assign(MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *_this, MR_Vector2f (*func)(const MR_Vector2i *_1));

/// Assign a function with an extra user data pointer.
/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
/// Parameter `_this` can not be null. It is a single object.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
/// How to use `userdata_callback`:
///   The `_this_userdata` parameter will never be null.
///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
MRC_API void MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref_AssignWithDataPtr(MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *_this, MR_Vector2f (*func)(const MR_Vector2i *_1, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

#ifdef __cplusplus
} // extern "C"
#endif
