// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshBuilder_VertDuplication MR_MeshBuilder_VertDuplication; // Defined in `#include <MRCMesh/MRMeshBuilder.h>`.


/// Generated from C++ container `std::vector<MR::MeshBuilder::VertDuplication>`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_MR_MeshBuilder_VertDuplication MR_std_vector_MR_MeshBuilder_VertDuplication;

/// Read-only iterator for `MR_std_vector_MR_MeshBuilder_VertDuplication`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator;

/// Mutable iterator for `MR_std_vector_MR_MeshBuilder_VertDuplication`.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_std_vector_MR_MeshBuilder_VertDuplication_iterator MR_std_vector_MR_MeshBuilder_VertDuplication_iterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_MR_MeshBuilder_VertDuplication_DestroyArray()`.
/// Use `MR_std_vector_MR_MeshBuilder_VertDuplication_OffsetMutablePtr()` and `MR_std_vector_MR_MeshBuilder_VertDuplication_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_ConstructFromAnother(MR_PassBy other_pass_by, MR_std_vector_MR_MeshBuilder_VertDuplication *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_AssignFromAnother(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, MR_PassBy other_pass_by, MR_std_vector_MR_MeshBuilder_VertDuplication *other);

/// Destroys a heap-allocated instance of `MR_std_vector_MR_MeshBuilder_VertDuplication`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_Destroy(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Destroys a heap-allocated array of `MR_std_vector_MR_MeshBuilder_VertDuplication`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_DestroyArray(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_OffsetPtr(const MR_std_vector_MR_MeshBuilder_VertDuplication *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_OffsetMutablePtr(MR_std_vector_MR_MeshBuilder_VertDuplication *ptr, ptrdiff_t i);

/// The number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_vector_MR_MeshBuilder_VertDuplication_Size(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Returns true if the size is zero.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshBuilder_VertDuplication_IsEmpty(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Resizes the container. The new elements if any are zeroed.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_Resize(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, size_t new_size);

/// Resizes the container. The new elements if any are set to the specified value.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_ResizeWithDefaultValue(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, size_t new_size, const MR_MeshBuilder_VertDuplication *value);

/// Removes all elements from the container.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_Clear(MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// The memory capacity, measued in the number of elements.
/// Parameter `_this` can not be null. It is a single object.
MRC_API size_t MR_std_vector_MR_MeshBuilder_VertDuplication_Capacity(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Reserves memory for a certain number of elements. Never shrinks the memory.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_Reserve(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, size_t new_capacity);

/// Shrinks the capacity to match the size.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_ShrinkToFit(MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// The element at a specific index, read-only.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_At(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this, size_t i);

/// The element at a specific index, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_MutableAt(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, size_t i);

/// The first element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_Front(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// The first element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_MutableFront(MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// The last element or null if empty, read-only.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_Back(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// The last element or null if empty, mutable.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_MutableBack(MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Inserts a new element at the end.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_PushBack(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_MeshBuilder_VertDuplication *new_elem);

/// Removes one element from the end.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_PopBack(MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_Insert(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, size_t position, const MR_MeshBuilder_VertDuplication *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_Erase(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, size_t position);

/// Inserts a new element right before the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_InsertAtMutableIter(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *position, const MR_MeshBuilder_VertDuplication *new_elem);

/// Erases the element at the specified position.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_EraseAtMutableIter(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *position);

/// Inserts a new element right before the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// Parameter `new_elem` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_InsertAtIter(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *position, const MR_MeshBuilder_VertDuplication *new_elem);

/// Erases the element at the specified position. This version takes the position in form of a const iterator, that's the only difference.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_EraseAtIter(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *position);

/// The begin iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_Begin(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Tests whether a const iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshBuilder_VertDuplication_IsBegin(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *iter);

/// The begin iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_MutableBegin(MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Tests whether a mutable iterator is the begin iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshBuilder_VertDuplication_IsMutableBegin(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *iter);

/// The end iterator, const.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_End(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Tests whether a const iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshBuilder_VertDuplication_IsEnd(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *iter);

/// The end iterator, mutable.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_MutableEnd(MR_std_vector_MR_MeshBuilder_VertDuplication *_this);

/// Tests whether a mutable iterator is the end iterator.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API bool MR_std_vector_MR_MeshBuilder_VertDuplication_IsMutableEnd(MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *iter);

/// Convert a const iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_MeshBuilder_VertDuplication_ToIndex(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *iter);

/// Convert a mutable iterator to an index.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `iter` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_MeshBuilder_VertDuplication_MutableToIndex(const MR_std_vector_MR_MeshBuilder_VertDuplication *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_DestroyArray()`.
/// Use `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_OffsetMutablePtr()` and `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_ConstructFromAnother(const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_AssignFromAnother(MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *other);

/// Destroys a heap-allocated instance of `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Destroy(const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *_this);

/// Destroys a heap-allocated array of `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_DestroyArray(const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_OffsetPtr(const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_OffsetMutablePtr(MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *ptr, ptrdiff_t i);

/// Makes a const iterator from a mutable one.
/// Parameter `iter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_FromMutable(const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *iter);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_DestroyArray()`.
/// Use `MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_OffsetMutablePtr()` and `MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_OffsetPtr()` to access the array elements.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Parameter `other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_ConstructFromAnother(const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_AssignFromAnother(MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *_this, const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *other);

/// Destroys a heap-allocated instance of `MR_std_vector_MR_MeshBuilder_VertDuplication_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_Destroy(const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *_this);

/// Destroys a heap-allocated array of `MR_std_vector_MR_MeshBuilder_VertDuplication_iterator`. Does nothing if the pointer is null.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_DestroyArray(const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_OffsetPtr(const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_OffsetMutablePtr(MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *ptr, ptrdiff_t i);

/// Dereferences a const iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Deref(const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *_this);

/// Increments a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Incr(MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *_this);

/// Decrements a const iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Decr(MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *_this);

/// Increments or decrements a const iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_OffsetBy(MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two const iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator_Distance(const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *a, const MR_std_vector_MR_MeshBuilder_VertDuplication_const_iterator *b);

/// Dereferences a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_VertDuplication *MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_Deref(const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *_this);

/// Increments a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_Incr(MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *_this);

/// Decrements a mutable iterator.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_Decr(MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *_this);

/// Increments or decrements a mutable iterator by the specific amount. Completes in constant time.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_OffsetBy(MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *_this, ptrdiff_t delta);

/// Computes the signed difference between two mutable iterators. Completes in constant time.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API ptrdiff_t MR_std_vector_MR_MeshBuilder_VertDuplication_iterator_Distance(const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *a, const MR_std_vector_MR_MeshBuilder_VertDuplication_iterator *b);

#ifdef __cplusplus
} // extern "C"
#endif
