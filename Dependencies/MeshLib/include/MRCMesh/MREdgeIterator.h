// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_IteratorRange_MR_UndirectedEdgeIterator MR_IteratorRange_MR_UndirectedEdgeIterator; // Defined in `#include <MRCMesh/MRIteratorRange.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.


// The iterator to find all not-lone undirected edges in the mesh
/// Generated from class `MR::UndirectedEdgeIterator`.
typedef struct MR_UndirectedEdgeIterator MR_UndirectedEdgeIterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeIterator *MR_UndirectedEdgeIterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UndirectedEdgeIterator_DestroyArray()`.
/// Use `MR_UndirectedEdgeIterator_OffsetMutablePtr()` and `MR_UndirectedEdgeIterator_OffsetPtr()` to access the array elements.
MRC_API MR_UndirectedEdgeIterator *MR_UndirectedEdgeIterator_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UndirectedEdgeIterator *MR_UndirectedEdgeIterator_OffsetPtr(const MR_UndirectedEdgeIterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UndirectedEdgeIterator *MR_UndirectedEdgeIterator_OffsetMutablePtr(MR_UndirectedEdgeIterator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UndirectedEdgeIterator`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeIterator *MR_UndirectedEdgeIterator_ConstructFromAnother(const MR_UndirectedEdgeIterator *_other);

// creates begin iterator
/// Generated from a constructor of class `MR::UndirectedEdgeIterator`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeIterator *MR_UndirectedEdgeIterator_Construct(const MR_MeshTopology *topology);

/// Destroys a heap-allocated instance of `MR_UndirectedEdgeIterator`. Does nothing if the pointer is null.
MRC_API void MR_UndirectedEdgeIterator_Destroy(const MR_UndirectedEdgeIterator *_this);

/// Destroys a heap-allocated array of `MR_UndirectedEdgeIterator`. Does nothing if the pointer is null.
MRC_API void MR_UndirectedEdgeIterator_DestroyArray(const MR_UndirectedEdgeIterator *_this);

/// Generated from a method of class `MR::UndirectedEdgeIterator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeIterator *MR_UndirectedEdgeIterator_AssignFromAnother(MR_UndirectedEdgeIterator *_this, const MR_UndirectedEdgeIterator *_other);

/// Generated from a method of class `MR::UndirectedEdgeIterator` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeIterator *MR_incr_MR_UndirectedEdgeIterator(MR_UndirectedEdgeIterator *_this);

/// Generated from a method of class `MR::UndirectedEdgeIterator` named `operator*`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_deref_MR_UndirectedEdgeIterator(const MR_UndirectedEdgeIterator *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_UndirectedEdgeIterator(const MR_UndirectedEdgeIterator *a, const MR_UndirectedEdgeIterator *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_UndirectedEdgeIterator(const MR_UndirectedEdgeIterator *a, const MR_UndirectedEdgeIterator *b);

/// Generated from function `MR::undirectedEdges`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_UndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_UndirectedEdgeIterator *MR_undirectedEdges_MR_MeshTopology(const MR_MeshTopology *topology);

#ifdef __cplusplus
} // extern "C"
#endif
