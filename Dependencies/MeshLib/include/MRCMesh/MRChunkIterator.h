// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_IteratorRange_MR_ChunkIterator MR_IteratorRange_MR_ChunkIterator; // Defined in `#include <MRCMesh/MRIteratorRange.h>`.


/// array chunk representation
/// Generated from class `MR::Chunk`.
typedef struct MR_Chunk MR_Chunk;

/// iterator class for array chunks
/// Generated from class `MR::ChunkIterator`.
typedef struct MR_ChunkIterator MR_ChunkIterator;

/// chunk offset
/// Returns a pointer to a member variable of class `MR::Chunk` named `offset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Chunk_Get_offset(const MR_Chunk *_this);

/// chunk offset
/// Modifies a member variable of class `MR::Chunk` named `offset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Chunk_Set_offset(MR_Chunk *_this, MR_uint64_t value);

/// chunk offset
/// Returns a mutable pointer to a member variable of class `MR::Chunk` named `offset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_Chunk_GetMutable_offset(MR_Chunk *_this);

/// chunk size; the last chunk's size may be smaller than other chunk's ones
/// Returns a pointer to a member variable of class `MR::Chunk` named `size`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_Chunk_Get_size(const MR_Chunk *_this);

/// chunk size; the last chunk's size may be smaller than other chunk's ones
/// Modifies a member variable of class `MR::Chunk` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Chunk_Set_size(MR_Chunk *_this, MR_uint64_t value);

/// chunk size; the last chunk's size may be smaller than other chunk's ones
/// Returns a mutable pointer to a member variable of class `MR::Chunk` named `size`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_Chunk_GetMutable_size(MR_Chunk *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Chunk_Destroy()` to free it when you're done using it.
MRC_API MR_Chunk *MR_Chunk_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Chunk_DestroyArray()`.
/// Use `MR_Chunk_OffsetMutablePtr()` and `MR_Chunk_OffsetPtr()` to access the array elements.
MRC_API MR_Chunk *MR_Chunk_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Chunk` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Chunk_Destroy()` to free it when you're done using it.
MRC_API MR_Chunk *MR_Chunk_ConstructFrom(MR_uint64_t offset, MR_uint64_t size);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Chunk *MR_Chunk_OffsetPtr(const MR_Chunk *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Chunk *MR_Chunk_OffsetMutablePtr(MR_Chunk *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Chunk`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Chunk_Destroy()` to free it when you're done using it.
MRC_API MR_Chunk *MR_Chunk_ConstructFromAnother(const MR_Chunk *_other);

/// Destroys a heap-allocated instance of `MR_Chunk`. Does nothing if the pointer is null.
MRC_API void MR_Chunk_Destroy(const MR_Chunk *_this);

/// Destroys a heap-allocated array of `MR_Chunk`. Does nothing if the pointer is null.
MRC_API void MR_Chunk_DestroyArray(const MR_Chunk *_this);

/// Generated from a method of class `MR::Chunk` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Chunk *MR_Chunk_AssignFromAnother(MR_Chunk *_this, const MR_Chunk *_other);

/// Returns a pointer to a member variable of class `MR::ChunkIterator` named `totalSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_ChunkIterator_Get_totalSize(const MR_ChunkIterator *_this);

/// Modifies a member variable of class `MR::ChunkIterator` named `totalSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChunkIterator_Set_totalSize(MR_ChunkIterator *_this, MR_uint64_t value);

/// Returns a mutable pointer to a member variable of class `MR::ChunkIterator` named `totalSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_ChunkIterator_GetMutable_totalSize(MR_ChunkIterator *_this);

/// Returns a pointer to a member variable of class `MR::ChunkIterator` named `chunkSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_ChunkIterator_Get_chunkSize(const MR_ChunkIterator *_this);

/// Modifies a member variable of class `MR::ChunkIterator` named `chunkSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChunkIterator_Set_chunkSize(MR_ChunkIterator *_this, MR_uint64_t value);

/// Returns a mutable pointer to a member variable of class `MR::ChunkIterator` named `chunkSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_ChunkIterator_GetMutable_chunkSize(MR_ChunkIterator *_this);

/// Returns a pointer to a member variable of class `MR::ChunkIterator` named `overlap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_ChunkIterator_Get_overlap(const MR_ChunkIterator *_this);

/// Modifies a member variable of class `MR::ChunkIterator` named `overlap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChunkIterator_Set_overlap(MR_ChunkIterator *_this, MR_uint64_t value);

/// Returns a mutable pointer to a member variable of class `MR::ChunkIterator` named `overlap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_ChunkIterator_GetMutable_overlap(MR_ChunkIterator *_this);

/// Returns a pointer to a member variable of class `MR::ChunkIterator` named `index`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_ChunkIterator_Get_index(const MR_ChunkIterator *_this);

/// Modifies a member variable of class `MR::ChunkIterator` named `index`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChunkIterator_Set_index(MR_ChunkIterator *_this, MR_uint64_t value);

/// Returns a mutable pointer to a member variable of class `MR::ChunkIterator` named `index`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_ChunkIterator_GetMutable_index(MR_ChunkIterator *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChunkIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ChunkIterator *MR_ChunkIterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ChunkIterator_DestroyArray()`.
/// Use `MR_ChunkIterator_OffsetMutablePtr()` and `MR_ChunkIterator_OffsetPtr()` to access the array elements.
MRC_API MR_ChunkIterator *MR_ChunkIterator_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ChunkIterator` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChunkIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ChunkIterator *MR_ChunkIterator_ConstructFrom(MR_uint64_t totalSize, MR_uint64_t chunkSize, MR_uint64_t overlap, MR_uint64_t index);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChunkIterator *MR_ChunkIterator_OffsetPtr(const MR_ChunkIterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChunkIterator *MR_ChunkIterator_OffsetMutablePtr(MR_ChunkIterator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ChunkIterator`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChunkIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ChunkIterator *MR_ChunkIterator_ConstructFromAnother(const MR_ChunkIterator *_other);

/// Destroys a heap-allocated instance of `MR_ChunkIterator`. Does nothing if the pointer is null.
MRC_API void MR_ChunkIterator_Destroy(const MR_ChunkIterator *_this);

/// Destroys a heap-allocated array of `MR_ChunkIterator`. Does nothing if the pointer is null.
MRC_API void MR_ChunkIterator_DestroyArray(const MR_ChunkIterator *_this);

/// Generated from a method of class `MR::ChunkIterator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChunkIterator *MR_ChunkIterator_AssignFromAnother(MR_ChunkIterator *_this, const MR_ChunkIterator *_other);

/// Generated from a method of class `MR::ChunkIterator` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API bool MR_equal_MR_ChunkIterator(const MR_ChunkIterator *_this, const MR_ChunkIterator *other);

/// Generated from a method of class `MR::ChunkIterator` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChunkIterator *MR_incr_MR_ChunkIterator(MR_ChunkIterator *_this);

/// Generated from a method of class `MR::ChunkIterator` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChunkIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ChunkIterator *MR_post_incr_MR_ChunkIterator(MR_ChunkIterator *_this);

/// Generated from a method of class `MR::ChunkIterator` named `operator*`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Chunk_Destroy()` to free it when you're done using it.
MRC_API MR_Chunk *MR_deref_MR_ChunkIterator(const MR_ChunkIterator *_this);

/// Generated from a method of class `MR::ChunkIterator` named `operator->`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Chunk_Destroy()` to free it when you're done using it.
MRC_API MR_Chunk *MR_ChunkIterator_arrow(const MR_ChunkIterator *_this);

/// returns the amount of chunks of given size required to cover the full array
/// Generated from function `MR::chunkCount`.
/// Parameter `overlap` has a default argument: `0`, pass a null pointer to use it.
MRC_API MR_uint64_t MR_chunkCount(MR_uint64_t totalSize, MR_uint64_t chunkSize, const MR_uint64_t *overlap);

/// returns a pair of iterators for chunks covering the array of given size
/// Generated from function `MR::splitByChunks`.
/// Parameter `overlap` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_ChunkIterator_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_ChunkIterator *MR_splitByChunks(MR_uint64_t totalSize, MR_uint64_t chunkSize, const MR_uint64_t *overlap);

#ifdef __cplusplus
} // extern "C"
#endif
