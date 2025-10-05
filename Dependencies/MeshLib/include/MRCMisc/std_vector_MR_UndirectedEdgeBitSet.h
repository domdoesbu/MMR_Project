// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// Generated from C++ container `std::vector<MR::UndirectedEdgeBitSet>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_MR_UndirectedEdgeBitSet MR_std_vector_MR_UndirectedEdgeBitSet;

/// Read-only iterator for `MR_std_vector_MR_UndirectedEdgeBitSet`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator;

/// Mutable iterator for `MR_std_vector_MR_UndirectedEdgeBitSet`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_MR_UndirectedEdgeBitSet_iterator MR_std_vector_MR_UndirectedEdgeBitSet_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_MR_UndirectedEdgeBitSet_DestroyArray()`.
/// Use `MR_std_vector_MR_UndirectedEdgeBitSet_OffsetMutablePtr()` and `MR_std_vector_MR_UndirectedEdgeBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_vector_MR_UndirectedEdgeBitSet *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_AssignFromAnother(MR_std_vector_MR_UndirectedEdgeBitSet *_this, MR_PassBy other_pass_by, MR_std_vector_MR_UndirectedEdgeBitSet *other);

/// Destroys a heap-allocated instance of `MR_std_vector_MR_UndirectedEdgeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_Destroy(const MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Destroys a heap-allocated array of `MR_std_vector_MR_UndirectedEdgeBitSet`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_DestroyArray(const MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_OffsetPtr(const MR_std_vector_MR_UndirectedEdgeBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_OffsetMutablePtr(MR_std_vector_MR_UndirectedEdgeBitSet *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_vector_MR_UndirectedEdgeBitSet_Size(const MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_UndirectedEdgeBitSet_IsEmpty(const MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_Resize(MR_std_vector_MR_UndirectedEdgeBitSet *_this, size_t new_size);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_ResizeWithDefaultValue(MR_std_vector_MR_UndirectedEdgeBitSet *_this, size_t new_size, const MR_UndirectedEdgeBitSet *value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_Clear(MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_vector_MR_UndirectedEdgeBitSet_Capacity(const MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_Reserve(MR_std_vector_MR_UndirectedEdgeBitSet *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_ShrinkToFit(MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_At(const MR_std_vector_MR_UndirectedEdgeBitSet *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_MutableAt(MR_std_vector_MR_UndirectedEdgeBitSet *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_Front(const MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_MutableFront(MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_Back(const MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_MutableBack(MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_PushBack(MR_std_vector_MR_UndirectedEdgeBitSet *_this, MR_PassBy new_elem_pass_by, MR_UndirectedEdgeBitSet *new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_PopBack(MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_Insert(MR_std_vector_MR_UndirectedEdgeBitSet *_this, size_t position, MR_PassBy new_elem_pass_by, MR_UndirectedEdgeBitSet *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_Erase(MR_std_vector_MR_UndirectedEdgeBitSet *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_InsertAtMutableIter(MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *position, MR_PassBy new_elem_pass_by, MR_UndirectedEdgeBitSet *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_EraseAtMutableIter(MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_InsertAtIter(MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *position, MR_PassBy new_elem_pass_by, MR_UndirectedEdgeBitSet *new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_EraseAtIter(MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_Begin(const MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_UndirectedEdgeBitSet_IsBegin(const MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_MutableBegin(MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_UndirectedEdgeBitSet_IsMutableBegin(MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_End(const MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_UndirectedEdgeBitSet_IsEnd(const MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_MutableEnd(MR_std_vector_MR_UndirectedEdgeBitSet *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_UndirectedEdgeBitSet_IsMutableEnd(MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_UndirectedEdgeBitSet_ToIndex(const MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_UndirectedEdgeBitSet_MutableToIndex(const MR_std_vector_MR_UndirectedEdgeBitSet *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_DestroyArray()`.
/// Use `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_OffsetMutablePtr()` and `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_ConstructFromAnother(const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_AssignFromAnother(MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Destroy(const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_DestroyArray(const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_OffsetPtr(const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_OffsetMutablePtr(MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_FromMutable(const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_MR_UndirectedEdgeBitSet_iterator_DestroyArray()`.
/// Use `MR_std_vector_MR_UndirectedEdgeBitSet_iterator_OffsetMutablePtr()` and `MR_std_vector_MR_UndirectedEdgeBitSet_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UndirectedEdgeBitSet_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_iterator_ConstructFromAnother(const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_iterator_AssignFromAnother(MR_std_vector_MR_UndirectedEdgeBitSet_iterator *_this, const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *other);

/// Destroys a heap-allocated instance of `MR_std_vector_MR_UndirectedEdgeBitSet_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_iterator_Destroy(const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *_this);

/// Destroys a heap-allocated array of `MR_std_vector_MR_UndirectedEdgeBitSet_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_iterator_DestroyArray(const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_iterator_OffsetPtr(const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_MR_UndirectedEdgeBitSet_iterator *MR_std_vector_MR_UndirectedEdgeBitSet_iterator_OffsetMutablePtr(MR_std_vector_MR_UndirectedEdgeBitSet_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Deref(const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Incr(MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Decr(MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_OffsetBy(MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator_Distance(const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *a, const MR_std_vector_MR_UndirectedEdgeBitSet_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_std_vector_MR_UndirectedEdgeBitSet_iterator_Deref(const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_iterator_Incr(MR_std_vector_MR_UndirectedEdgeBitSet_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_iterator_Decr(MR_std_vector_MR_UndirectedEdgeBitSet_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_UndirectedEdgeBitSet_iterator_OffsetBy(MR_std_vector_MR_UndirectedEdgeBitSet_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_UndirectedEdgeBitSet_iterator_Distance(const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *a, const MR_std_vector_MR_UndirectedEdgeBitSet_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
