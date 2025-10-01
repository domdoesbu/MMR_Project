// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Generated from C++ container `std::vector<float>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_float MR_std_vector_float;

/// Read-only iterator for `MR_std_vector_float`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_float_const_iterator MR_std_vector_float_const_iterator;

/// Mutable iterator for `MR_std_vector_float`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_float_iterator MR_std_vector_float_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float *MR_std_vector_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_float_DestroyArray()`.
/// Use `MR_std_vector_float_OffsetMutablePtr()` and `MR_std_vector_float_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_float *MR_std_vector_float_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float *MR_std_vector_float_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_vector_float *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_AssignFromAnother(MR_std_vector_float *_this, MR_PassBy other_pass_by, MR_std_vector_float *other);

/// Destroys a heap-allocated instance of `MR_std_vector_float`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_float_Destroy(const MR_std_vector_float *_this);

/// Destroys a heap-allocated array of `MR_std_vector_float`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_float_DestroyArray(const MR_std_vector_float *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_float *MR_std_vector_float_OffsetPtr(const MR_std_vector_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_float *MR_std_vector_float_OffsetMutablePtr(MR_std_vector_float *ptr, ptrdiff_t i);

/// Construct from a range of elements.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float *MR_std_vector_float_ConstructFromRange(const float *ptr, size_t size);

/// Assign from a range of elements, overwriting previous contents.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_AssignFromRange(MR_std_vector_float *_this, const float *ptr, size_t size);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_vector_float_Size(const MR_std_vector_float *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_std_vector_float_IsEmpty(const MR_std_vector_float *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_Resize(MR_std_vector_float *_this, size_t new_size);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_ResizeWithDefaultValue(MR_std_vector_float *_this, size_t new_size, float value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_Clear(MR_std_vector_float *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_vector_float_Capacity(const MR_std_vector_float *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_Reserve(MR_std_vector_float *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_ShrinkToFit(MR_std_vector_float *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_std_vector_float_At(const MR_std_vector_float *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_std_vector_float_MutableAt(MR_std_vector_float *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const float *MR_std_vector_float_Front(const MR_std_vector_float *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float *MR_std_vector_float_MutableFront(MR_std_vector_float *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const float *MR_std_vector_float_Back(const MR_std_vector_float *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float *MR_std_vector_float_MutableBack(MR_std_vector_float *_this);

/// Returns a pointer to the continuous storage that holds all elements, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const float *MR_std_vector_float_Data(const MR_std_vector_float *_this);

/// Returns a pointer to the continuous storage that holds all elements, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float *MR_std_vector_float_MutableData(MR_std_vector_float *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_PushBack(MR_std_vector_float *_this, float new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_PopBack(MR_std_vector_float *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_Insert(MR_std_vector_float *_this, size_t position, float new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_Erase(MR_std_vector_float *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_float_InsertAtMutableIter(MR_std_vector_float *_this, const MR_std_vector_float_iterator *position, float new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_float_EraseAtMutableIter(MR_std_vector_float *_this, const MR_std_vector_float_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_float_InsertAtIter(MR_std_vector_float *_this, const MR_std_vector_float_const_iterator *position, float new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_float_EraseAtIter(MR_std_vector_float *_this, const MR_std_vector_float_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float_const_iterator *MR_std_vector_float_Begin(const MR_std_vector_float *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_float_IsBegin(const MR_std_vector_float *_this, const MR_std_vector_float_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float_iterator *MR_std_vector_float_MutableBegin(MR_std_vector_float *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_float_IsMutableBegin(MR_std_vector_float *_this, const MR_std_vector_float_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float_const_iterator *MR_std_vector_float_End(const MR_std_vector_float *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_float_IsEnd(const MR_std_vector_float *_this, const MR_std_vector_float_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float_iterator *MR_std_vector_float_MutableEnd(MR_std_vector_float *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_float_IsMutableEnd(MR_std_vector_float *_this, const MR_std_vector_float_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_float_ToIndex(const MR_std_vector_float *_this, const MR_std_vector_float_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_float_MutableToIndex(const MR_std_vector_float *_this, const MR_std_vector_float_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float_const_iterator *MR_std_vector_float_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_float_const_iterator_DestroyArray()`.
/// Use `MR_std_vector_float_const_iterator_OffsetMutablePtr()` and `MR_std_vector_float_const_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_float_const_iterator *MR_std_vector_float_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float_const_iterator *MR_std_vector_float_const_iterator_ConstructFromAnother(const MR_std_vector_float_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_vector_float_const_iterator_AssignFromAnother(MR_std_vector_float_const_iterator *_this, const MR_std_vector_float_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_std_vector_float_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_float_const_iterator_Destroy(const MR_std_vector_float_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_std_vector_float_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_float_const_iterator_DestroyArray(const MR_std_vector_float_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_float_const_iterator *MR_std_vector_float_const_iterator_OffsetPtr(const MR_std_vector_float_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_float_const_iterator *MR_std_vector_float_const_iterator_OffsetMutablePtr(MR_std_vector_float_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float_const_iterator *MR_std_vector_float_const_iterator_FromMutable(const MR_std_vector_float_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float_iterator *MR_std_vector_float_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_float_iterator_DestroyArray()`.
/// Use `MR_std_vector_float_iterator_OffsetMutablePtr()` and `MR_std_vector_float_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_float_iterator *MR_std_vector_float_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_float_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_float_iterator *MR_std_vector_float_iterator_ConstructFromAnother(const MR_std_vector_float_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_vector_float_iterator_AssignFromAnother(MR_std_vector_float_iterator *_this, const MR_std_vector_float_iterator *other);

/// Destroys a heap-allocated instance of `MR_std_vector_float_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_float_iterator_Destroy(const MR_std_vector_float_iterator *_this);

/// Destroys a heap-allocated array of `MR_std_vector_float_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_float_iterator_DestroyArray(const MR_std_vector_float_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_float_iterator *MR_std_vector_float_iterator_OffsetPtr(const MR_std_vector_float_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_float_iterator *MR_std_vector_float_iterator_OffsetMutablePtr(MR_std_vector_float_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_std_vector_float_const_iterator_Deref(const MR_std_vector_float_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_const_iterator_Incr(MR_std_vector_float_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_const_iterator_Decr(MR_std_vector_float_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_const_iterator_OffsetBy(MR_std_vector_float_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_float_const_iterator_Distance(const MR_std_vector_float_const_iterator *a, const MR_std_vector_float_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_std_vector_float_iterator_Deref(const MR_std_vector_float_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_iterator_Incr(MR_std_vector_float_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_iterator_Decr(MR_std_vector_float_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_float_iterator_OffsetBy(MR_std_vector_float_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_float_iterator_Distance(const MR_std_vector_float_iterator *a, const MR_std_vector_float_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
