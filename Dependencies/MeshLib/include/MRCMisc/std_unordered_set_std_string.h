// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Generated from C++ container `std::unordered_set<std::string>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_unordered_set_std_string MR_std_unordered_set_std_string;

/// Read-only iterator for `MR_std_unordered_set_std_string`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_unordered_set_std_string_const_iterator MR_std_unordered_set_std_string_const_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_unordered_set_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_unordered_set_std_string *MR_std_unordered_set_std_string_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_unordered_set_std_string_DestroyArray()`.
/// Use `MR_std_unordered_set_std_string_OffsetMutablePtr()` and `MR_std_unordered_set_std_string_OffsetPtr()` to access the array elements.
MRC_API MR_std_unordered_set_std_string *MR_std_unordered_set_std_string_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_unordered_set_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_unordered_set_std_string *MR_std_unordered_set_std_string_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_unordered_set_std_string *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_unordered_set_std_string_AssignFromAnother(MR_std_unordered_set_std_string *_this, MR_PassBy other_pass_by, MR_std_unordered_set_std_string *other);

/// Destroys a heap-allocated instance of `MR_std_unordered_set_std_string`. Does nothing if the pointer is null.
MRC_API void MR_std_unordered_set_std_string_Destroy(const MR_std_unordered_set_std_string *_this);

/// Destroys a heap-allocated array of `MR_std_unordered_set_std_string`. Does nothing if the pointer is null.
MRC_API void MR_std_unordered_set_std_string_DestroyArray(const MR_std_unordered_set_std_string *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_unordered_set_std_string *MR_std_unordered_set_std_string_OffsetPtr(const MR_std_unordered_set_std_string *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_unordered_set_std_string *MR_std_unordered_set_std_string_OffsetMutablePtr(MR_std_unordered_set_std_string *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_unordered_set_std_string_Size(const MR_std_unordered_set_std_string *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_std_unordered_set_std_string_IsEmpty(const MR_std_unordered_set_std_string *_this);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_unordered_set_std_string_Clear(MR_std_unordered_set_std_string *_this);

/// Checks if the contain contains this key.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
MRC_API bool MR_std_unordered_set_std_string_Contains(const MR_std_unordered_set_std_string *_this, const MR_std_string *key);

/// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_unordered_set_std_string_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_unordered_set_std_string_const_iterator *MR_std_unordered_set_std_string_Find(const MR_std_unordered_set_std_string *_this, const MR_std_string *key);

/// Inserts a new element.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null.
/// If `new_elem_end` is null, then `new_elem` is assumed to be null-terminated.
MRC_API void MR_std_unordered_set_std_string_Insert(MR_std_unordered_set_std_string *_this, const char *new_elem, const char *new_elem_end);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_unordered_set_std_string_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_unordered_set_std_string_const_iterator *MR_std_unordered_set_std_string_Begin(const MR_std_unordered_set_std_string *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_unordered_set_std_string_IsBegin(const MR_std_unordered_set_std_string *_this, const MR_std_unordered_set_std_string_const_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_unordered_set_std_string_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_unordered_set_std_string_const_iterator *MR_std_unordered_set_std_string_End(const MR_std_unordered_set_std_string *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_unordered_set_std_string_IsEnd(const MR_std_unordered_set_std_string *_this, const MR_std_unordered_set_std_string_const_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_unordered_set_std_string_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_unordered_set_std_string_const_iterator *MR_std_unordered_set_std_string_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_unordered_set_std_string_const_iterator_DestroyArray()`.
/// Use `MR_std_unordered_set_std_string_const_iterator_OffsetMutablePtr()` and `MR_std_unordered_set_std_string_const_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_std_unordered_set_std_string_const_iterator *MR_std_unordered_set_std_string_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_unordered_set_std_string_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_unordered_set_std_string_const_iterator *MR_std_unordered_set_std_string_const_iterator_ConstructFromAnother(const MR_std_unordered_set_std_string_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_unordered_set_std_string_const_iterator_AssignFromAnother(MR_std_unordered_set_std_string_const_iterator *_this, const MR_std_unordered_set_std_string_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_std_unordered_set_std_string_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_unordered_set_std_string_const_iterator_Destroy(const MR_std_unordered_set_std_string_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_std_unordered_set_std_string_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_unordered_set_std_string_const_iterator_DestroyArray(const MR_std_unordered_set_std_string_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_unordered_set_std_string_const_iterator *MR_std_unordered_set_std_string_const_iterator_OffsetPtr(const MR_std_unordered_set_std_string_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_unordered_set_std_string_const_iterator *MR_std_unordered_set_std_string_const_iterator_OffsetMutablePtr(MR_std_unordered_set_std_string_const_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_std_unordered_set_std_string_const_iterator_Deref(const MR_std_unordered_set_std_string_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_unordered_set_std_string_const_iterator_Incr(MR_std_unordered_set_std_string_const_iterator *_this);

#ifdef __cplusplus
} // extern "C"
#endif
