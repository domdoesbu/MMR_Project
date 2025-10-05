// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshOrPointsXf MR_MeshOrPointsXf; // Defined in `#include <MRCMesh/MRMeshOrPoints.h>`.


/// Generated from C++ container `std::vector<MR::MeshOrPointsXf>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_MR_MeshOrPointsXf MR_std_vector_MR_MeshOrPointsXf;

/// Read-only iterator for `MR_std_vector_MR_MeshOrPointsXf`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_MR_MeshOrPointsXf_const_iterator MR_std_vector_MR_MeshOrPointsXf_const_iterator;

/// Mutable iterator for `MR_std_vector_MR_MeshOrPointsXf`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_MR_MeshOrPointsXf_iterator MR_std_vector_MR_MeshOrPointsXf_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_MR_MeshOrPointsXf_DestroyArray()`.
/// Use `MR_std_vector_MR_MeshOrPointsXf_OffsetMutablePtr()` and `MR_std_vector_MR_MeshOrPointsXf_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_vector_MR_MeshOrPointsXf *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_AssignFromAnother(MR_std_vector_MR_MeshOrPointsXf *_this, MR_PassBy other_pass_by, MR_std_vector_MR_MeshOrPointsXf *other);

/// Destroys a heap-allocated instance of `MR_std_vector_MR_MeshOrPointsXf`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_Destroy(const MR_std_vector_MR_MeshOrPointsXf *_this);

/// Destroys a heap-allocated array of `MR_std_vector_MR_MeshOrPointsXf`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_DestroyArray(const MR_std_vector_MR_MeshOrPointsXf *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_OffsetPtr(const MR_std_vector_MR_MeshOrPointsXf *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_OffsetMutablePtr(MR_std_vector_MR_MeshOrPointsXf *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_vector_MR_MeshOrPointsXf_Size(const MR_std_vector_MR_MeshOrPointsXf *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshOrPointsXf_IsEmpty(const MR_std_vector_MR_MeshOrPointsXf *_this);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_ResizeWithDefaultValue(MR_std_vector_MR_MeshOrPointsXf *_this, size_t new_size, const MR_MeshOrPointsXf *value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_Clear(MR_std_vector_MR_MeshOrPointsXf *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_vector_MR_MeshOrPointsXf_Capacity(const MR_std_vector_MR_MeshOrPointsXf *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_Reserve(MR_std_vector_MR_MeshOrPointsXf *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_ShrinkToFit(MR_std_vector_MR_MeshOrPointsXf *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_At(const MR_std_vector_MR_MeshOrPointsXf *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_MutableAt(MR_std_vector_MR_MeshOrPointsXf *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_Front(const MR_std_vector_MR_MeshOrPointsXf *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_MutableFront(MR_std_vector_MR_MeshOrPointsXf *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_Back(const MR_std_vector_MR_MeshOrPointsXf *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_MutableBack(MR_std_vector_MR_MeshOrPointsXf *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_PushBack(MR_std_vector_MR_MeshOrPointsXf *_this, const MR_MeshOrPointsXf *new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_PopBack(MR_std_vector_MR_MeshOrPointsXf *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_Insert(MR_std_vector_MR_MeshOrPointsXf *_this, size_t position, const MR_MeshOrPointsXf *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_Erase(MR_std_vector_MR_MeshOrPointsXf *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_InsertAtMutableIter(MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_iterator *position, const MR_MeshOrPointsXf *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_EraseAtMutableIter(MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_InsertAtIter(MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_const_iterator *position, const MR_MeshOrPointsXf *new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_EraseAtIter(MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf_const_iterator *MR_std_vector_MR_MeshOrPointsXf_Begin(const MR_std_vector_MR_MeshOrPointsXf *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshOrPointsXf_IsBegin(const MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf_iterator *MR_std_vector_MR_MeshOrPointsXf_MutableBegin(MR_std_vector_MR_MeshOrPointsXf *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshOrPointsXf_IsMutableBegin(MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf_const_iterator *MR_std_vector_MR_MeshOrPointsXf_End(const MR_std_vector_MR_MeshOrPointsXf *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshOrPointsXf_IsEnd(const MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf_iterator *MR_std_vector_MR_MeshOrPointsXf_MutableEnd(MR_std_vector_MR_MeshOrPointsXf *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshOrPointsXf_IsMutableEnd(MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_MeshOrPointsXf_ToIndex(const MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_MeshOrPointsXf_MutableToIndex(const MR_std_vector_MR_MeshOrPointsXf *_this, const MR_std_vector_MR_MeshOrPointsXf_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf_const_iterator *MR_std_vector_MR_MeshOrPointsXf_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_MR_MeshOrPointsXf_const_iterator_DestroyArray()`.
/// Use `MR_std_vector_MR_MeshOrPointsXf_const_iterator_OffsetMutablePtr()` and `MR_std_vector_MR_MeshOrPointsXf_const_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_MR_MeshOrPointsXf_const_iterator *MR_std_vector_MR_MeshOrPointsXf_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf_const_iterator *MR_std_vector_MR_MeshOrPointsXf_const_iterator_ConstructFromAnother(const MR_std_vector_MR_MeshOrPointsXf_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_const_iterator_AssignFromAnother(MR_std_vector_MR_MeshOrPointsXf_const_iterator *_this, const MR_std_vector_MR_MeshOrPointsXf_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_std_vector_MR_MeshOrPointsXf_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_const_iterator_Destroy(const MR_std_vector_MR_MeshOrPointsXf_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_std_vector_MR_MeshOrPointsXf_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_const_iterator_DestroyArray(const MR_std_vector_MR_MeshOrPointsXf_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_MR_MeshOrPointsXf_const_iterator *MR_std_vector_MR_MeshOrPointsXf_const_iterator_OffsetPtr(const MR_std_vector_MR_MeshOrPointsXf_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_MR_MeshOrPointsXf_const_iterator *MR_std_vector_MR_MeshOrPointsXf_const_iterator_OffsetMutablePtr(MR_std_vector_MR_MeshOrPointsXf_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf_const_iterator *MR_std_vector_MR_MeshOrPointsXf_const_iterator_FromMutable(const MR_std_vector_MR_MeshOrPointsXf_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf_iterator *MR_std_vector_MR_MeshOrPointsXf_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_MR_MeshOrPointsXf_iterator_DestroyArray()`.
/// Use `MR_std_vector_MR_MeshOrPointsXf_iterator_OffsetMutablePtr()` and `MR_std_vector_MR_MeshOrPointsXf_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_MR_MeshOrPointsXf_iterator *MR_std_vector_MR_MeshOrPointsXf_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshOrPointsXf_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshOrPointsXf_iterator *MR_std_vector_MR_MeshOrPointsXf_iterator_ConstructFromAnother(const MR_std_vector_MR_MeshOrPointsXf_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_iterator_AssignFromAnother(MR_std_vector_MR_MeshOrPointsXf_iterator *_this, const MR_std_vector_MR_MeshOrPointsXf_iterator *other);

/// Destroys a heap-allocated instance of `MR_std_vector_MR_MeshOrPointsXf_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_iterator_Destroy(const MR_std_vector_MR_MeshOrPointsXf_iterator *_this);

/// Destroys a heap-allocated array of `MR_std_vector_MR_MeshOrPointsXf_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_iterator_DestroyArray(const MR_std_vector_MR_MeshOrPointsXf_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_MR_MeshOrPointsXf_iterator *MR_std_vector_MR_MeshOrPointsXf_iterator_OffsetPtr(const MR_std_vector_MR_MeshOrPointsXf_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_MR_MeshOrPointsXf_iterator *MR_std_vector_MR_MeshOrPointsXf_iterator_OffsetMutablePtr(MR_std_vector_MR_MeshOrPointsXf_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_const_iterator_Deref(const MR_std_vector_MR_MeshOrPointsXf_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_const_iterator_Incr(MR_std_vector_MR_MeshOrPointsXf_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_const_iterator_Decr(MR_std_vector_MR_MeshOrPointsXf_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_const_iterator_OffsetBy(MR_std_vector_MR_MeshOrPointsXf_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_MeshOrPointsXf_const_iterator_Distance(const MR_std_vector_MR_MeshOrPointsXf_const_iterator *a, const MR_std_vector_MR_MeshOrPointsXf_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshOrPointsXf *MR_std_vector_MR_MeshOrPointsXf_iterator_Deref(const MR_std_vector_MR_MeshOrPointsXf_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_iterator_Incr(MR_std_vector_MR_MeshOrPointsXf_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_iterator_Decr(MR_std_vector_MR_MeshOrPointsXf_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshOrPointsXf_iterator_OffsetBy(MR_std_vector_MR_MeshOrPointsXf_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_MeshOrPointsXf_iterator_Distance(const MR_std_vector_MR_MeshOrPointsXf_iterator *a, const MR_std_vector_MR_MeshOrPointsXf_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
