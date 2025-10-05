// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertId MR_VertId; // Defined in `#include <MRCMesh/MRId.h>`.


/// Stores a functor of type: `double(MR::VertId, MR::VertId, MR::VertId, MR::VertId)`. Possibly stateful.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_DestroyArray()`.
/// Use `MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_OffsetMutablePtr()` and `MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_AssignFromAnother(MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *_this, MR_PassBy other_pass_by, MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *other);

/// Destroys a heap-allocated instance of `MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_Destroy(const MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_DestroyArray(const MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_OffsetPtr(const MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_OffsetMutablePtr(MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// Assign a stateless function.
/// Parameter `_this` can not be null. It is a single object.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Callback parameter `_2` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Callback parameter `_3` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Callback parameter `_4` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
MRC_API void MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_Assign(MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *_this, double (*func)(MR_VertId *_1, MR_VertId *_2, MR_VertId *_3, MR_VertId *_4));

/// Assign a function with an extra user data pointer.
/// Parameter `userdata_callback` can be null. Pass null if you don't need custom behavior when destroying and/or copying the functor.
/// Parameter `_this` can not be null. It is a single object.
/// Callback parameter `_1` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Callback parameter `_2` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Callback parameter `_3` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// Callback parameter `_4` will never be null. It is non-owning, do NOT destroy it.
/// In C++ that parameter is an rvalue reference.
/// How to use `userdata_callback`:
///   The `_this_userdata` parameter will never be null.
///   If `*_this_userdata` is non-null and `_other_userdata` is     null, the functor is being destroyed. Perform any cleanup if needed.
///   If `*_this_userdata` is     null and `_other_userdata` is non-null, a copy of the functor is being constructed. Perform copying if needed and write the new userdata to `*_this_userdata`.
///   If `*_this_userdata` is non-null and `_other_userdata` is non-null, the functor is being assigned. The simplest option is to destroy `*_this_userdata` first, and then behave as if it was null.
MRC_API void MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId_AssignWithDataPtr(MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *_this, double (*func)(MR_VertId *_1, MR_VertId *_2, MR_VertId *_3, MR_VertId *_4, void *_userdata), void *userdata, void (*userdata_callback)(void **_this_userdata, void *_other_userdata));

#ifdef __cplusplus
} // extern "C"
#endif
