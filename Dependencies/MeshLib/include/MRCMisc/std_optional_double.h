// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Stores either a single `double` or nothing.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_optional_double MR_std_optional_double;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_double_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_double *MR_std_optional_double_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_optional_double_DestroyArray()`.
/// Use `MR_std_optional_double_OffsetMutablePtr()` and `MR_std_optional_double_OffsetPtr()` to access the array elements.
MRC_API MR_std_optional_double *MR_std_optional_double_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_double_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_double *MR_std_optional_double_ConstructFromAnother(const MR_std_optional_double *other);

/// Constructs a new instance.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_double_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_double *MR_std_optional_double_ConstructFrom(const double *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_optional_double_AssignFromAnother(MR_std_optional_double *_this, const MR_std_optional_double *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` is optional. To keep it empty, pass a null pointer.
MRC_API void MR_std_optional_double_AssignFrom(MR_std_optional_double *_this, const double *other);

/// Destroys a heap-allocated instance of `MR_std_optional_double`. Does nothing if the pointer is null.
MRC_API void MR_std_optional_double_Destroy(const MR_std_optional_double *_this);

/// Destroys a heap-allocated array of `MR_std_optional_double`. Does nothing if the pointer is null.
MRC_API void MR_std_optional_double_DestroyArray(const MR_std_optional_double *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_optional_double *MR_std_optional_double_OffsetPtr(const MR_std_optional_double *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_optional_double *MR_std_optional_double_OffsetMutablePtr(MR_std_optional_double *ptr, ptrdiff_t i);

/// The stored element or null if none, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const double *MR_std_optional_double_Value(const MR_std_optional_double *_this);

/// The stored element or null if none, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double *MR_std_optional_double_MutableValue(MR_std_optional_double *_this);

#ifdef __cplusplus
} // extern "C"
#endif
