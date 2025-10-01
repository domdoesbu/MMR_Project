// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// A non-owning string view. Not necessarily null-terminated.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_string_view MR_std_string_view;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_view_Destroy()` to free it when you're done using it.
MRC_API MR_std_string_view *MR_std_string_view_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_string_view_DestroyArray()`.
/// Use `MR_std_string_view_OffsetMutablePtr()` and `MR_std_string_view_OffsetPtr()` to access the array elements.
MRC_API MR_std_string_view *MR_std_string_view_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_view_Destroy()` to free it when you're done using it.
MRC_API MR_std_string_view *MR_std_string_view_ConstructFromAnother(const MR_std_string_view *other);

/// Constructs a new instance.
/// Parameter `other` can not be null.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_view_Destroy()` to free it when you're done using it.
MRC_API MR_std_string_view *MR_std_string_view_ConstructFrom(const char *other, const char *other_end);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_string_view_AssignFromAnother(MR_std_string_view *_this, const MR_std_string_view *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null.
/// If `other_end` is null, then `other` is assumed to be null-terminated.
MRC_API void MR_std_string_view_AssignFrom(MR_std_string_view *_this, const char *other, const char *other_end);

/// Destroys a heap-allocated instance of `MR_std_string_view`. Does nothing if the pointer is null.
MRC_API void MR_std_string_view_Destroy(const MR_std_string_view *_this);

/// Destroys a heap-allocated array of `MR_std_string_view`. Does nothing if the pointer is null.
MRC_API void MR_std_string_view_DestroyArray(const MR_std_string_view *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_string_view *MR_std_string_view_OffsetPtr(const MR_std_string_view *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_string_view *MR_std_string_view_OffsetMutablePtr(MR_std_string_view *ptr, ptrdiff_t i);

/// The number of characters in the string.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_string_view_Size(const MR_std_string_view *_this);

/// Returns the string contents, NOT necessarily null-terminated.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_std_string_view_Data(const MR_std_string_view *_this);

/// Returns a pointer to the end of string. Not dereferencable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_std_string_view_DataEnd(const MR_std_string_view *_this);

#ifdef __cplusplus
} // extern "C"
#endif
