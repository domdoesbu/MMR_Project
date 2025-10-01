// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Stores two objects: `std::string` and `std::string`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_pair_std_string_float MR_std_pair_std_string_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_std_string_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_std_string_float *MR_std_pair_std_string_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_pair_std_string_float_DestroyArray()`.
/// Use `MR_std_pair_std_string_float_OffsetMutablePtr()` and `MR_std_pair_std_string_float_OffsetPtr()` to access the array elements.
MRC_API MR_std_pair_std_string_float *MR_std_pair_std_string_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_std_string_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_std_string_float *MR_std_pair_std_string_float_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_pair_std_string_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_pair_std_string_float_AssignFromAnother(MR_std_pair_std_string_float *_this, MR_PassBy other_pass_by, MR_std_pair_std_string_float *other);

/// Destroys a heap-allocated instance of `MR_std_pair_std_string_float`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_std_string_float_Destroy(const MR_std_pair_std_string_float *_this);

/// Destroys a heap-allocated array of `MR_std_pair_std_string_float`. Does nothing if the pointer is null.
MRC_API void MR_std_pair_std_string_float_DestroyArray(const MR_std_pair_std_string_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_pair_std_string_float *MR_std_pair_std_string_float_OffsetPtr(const MR_std_pair_std_string_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_pair_std_string_float *MR_std_pair_std_string_float_OffsetMutablePtr(MR_std_pair_std_string_float *ptr, ptrdiff_t i);

/// Constructs the pair elementwise.
/// Parameter `first` can not be null.
/// If `first_end` is null, then `first` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_std_string_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_std_string_float *MR_std_pair_std_string_float_Construct(const char *first, const char *first_end, float second);

/// The first of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_std_pair_std_string_float_First(const MR_std_pair_std_string_float *_this);

/// The first of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_std_pair_std_string_float_MutableFirst(MR_std_pair_std_string_float *_this);

/// The second of the two elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_std_pair_std_string_float_Second(const MR_std_pair_std_string_float *_this);

/// The second of the two elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_std_pair_std_string_float_MutableSecond(MR_std_pair_std_string_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
