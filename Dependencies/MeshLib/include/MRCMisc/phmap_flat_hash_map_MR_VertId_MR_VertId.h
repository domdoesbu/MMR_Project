// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertId MR_VertId; // Defined in `#include <MRCMesh/MRId.h>`.


/// Generated from C++ container `phmap::flat_hash_map<MR::VertId, MR::VertId>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_VertId MR_phmap_flat_hash_map_MR_VertId_MR_VertId;

/// Read-only iterator for `MR_phmap_flat_hash_map_MR_VertId_MR_VertId`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator;

/// Mutable iterator for `MR_phmap_flat_hash_map_MR_VertId_MR_VertId`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_DestroyArray()`.
/// Use `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_OffsetMutablePtr()` and `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_ConstructFromAnother(MR_PassBy other_pass_by, MR_phmap_flat_hash_map_MR_VertId_MR_VertId *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_AssignFromAnother(MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, MR_PassBy other_pass_by, MR_phmap_flat_hash_map_MR_VertId_MR_VertId *other);

/// Destroys a heap-allocated instance of `MR_phmap_flat_hash_map_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_Destroy(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_phmap_flat_hash_map_MR_VertId_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_DestroyArray(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_OffsetPtr(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_OffsetMutablePtr(MR_phmap_flat_hash_map_MR_VertId_MR_VertId *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_phmap_flat_hash_map_MR_VertId_MR_VertId_Size(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_phmap_flat_hash_map_MR_VertId_MR_VertId_IsEmpty(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_Clear(MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Returns the element with the specific key. If it doesn't exist, creates it first. Acts like map's `operator[]` in C++.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_FindOrConstructElem(MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, const MR_VertId *key);

/// Checks if the contain contains this key.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
MRC_API bool MR_phmap_flat_hash_map_MR_VertId_MR_VertId_Contains(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, const MR_VertId *key);

/// Finds the element by key, or returns the end iterator if no such key. Returns a read-only iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_Find(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, const MR_VertId *key);

/// Finds the element by key, or returns the end iterator if no such key. Returns a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `key` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_FindMutable(MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, const MR_VertId *key);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_Begin(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_phmap_flat_hash_map_MR_VertId_MR_VertId_IsBegin(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_MutableBegin(MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_phmap_flat_hash_map_MR_VertId_MR_VertId_IsMutableBegin(MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_End(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_phmap_flat_hash_map_MR_VertId_MR_VertId_IsEnd(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_MutableEnd(MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_phmap_flat_hash_map_MR_VertId_MR_VertId_IsMutableEnd(MR_phmap_flat_hash_map_MR_VertId_MR_VertId *_this, const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_DestroyArray()`.
/// Use `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_OffsetMutablePtr()` and `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_ConstructFromAnother(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_AssignFromAnother(MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *_this, const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_Destroy(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_DestroyArray(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_OffsetPtr(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_OffsetMutablePtr(MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_FromMutable(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_DestroyArray()`.
/// Use `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_OffsetMutablePtr()` and `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_ConstructFromAnother(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_AssignFromAnother(MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *_this, const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *other);

/// Destroys a heap-allocated instance of `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator`. Does nothing if the pointer is null.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_Destroy(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *_this);

/// Destroys a heap-allocated array of `MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator`. Does nothing if the pointer is null.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_DestroyArray(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_OffsetPtr(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_OffsetMutablePtr(MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator, returning the key.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_DerefKey(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *_this);

/// Dereferences a const iterator, returning the mapped value.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_DerefValue(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator_Incr(MR_phmap_flat_hash_map_MR_VertId_MR_VertId_const_iterator *_this);

/// Dereferences a mutable iterator, returning the key.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_DerefKey(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *_this);

/// Dereferences a mutable iterator, returning the mapped value.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_DerefValue(const MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator_Incr(MR_phmap_flat_hash_map_MR_VertId_MR_VertId_iterator *_this);

#ifdef __cplusplus
} // extern "C"
#endif
