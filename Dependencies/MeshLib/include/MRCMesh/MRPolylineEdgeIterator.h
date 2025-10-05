// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_IteratorRange_MR_PolylineUndirectedEdgeIterator MR_IteratorRange_MR_PolylineUndirectedEdgeIterator; // Defined in `#include <MRCMesh/MRIteratorRange.h>`.
typedef struct MR_PolylineTopology MR_PolylineTopology; // Defined in `#include <MRCMesh/MRPolylineTopology.h>`.


/// The iterator to find all not-lone undirected edges in the polyline topology
/// Generated from class `MR::PolylineUndirectedEdgeIterator`.
typedef struct MR_PolylineUndirectedEdgeIterator MR_PolylineUndirectedEdgeIterator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineUndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_PolylineUndirectedEdgeIterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineUndirectedEdgeIterator_DestroyArray()`.
/// Use `MR_PolylineUndirectedEdgeIterator_OffsetMutablePtr()` and `MR_PolylineUndirectedEdgeIterator_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_PolylineUndirectedEdgeIterator_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineUndirectedEdgeIterator *MR_PolylineUndirectedEdgeIterator_OffsetPtr(const MR_PolylineUndirectedEdgeIterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_PolylineUndirectedEdgeIterator_OffsetMutablePtr(MR_PolylineUndirectedEdgeIterator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineUndirectedEdgeIterator`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineUndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_PolylineUndirectedEdgeIterator_ConstructFromAnother(const MR_PolylineUndirectedEdgeIterator *_other);

// creates begin iterator
/// Generated from a constructor of class `MR::PolylineUndirectedEdgeIterator`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineUndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_PolylineUndirectedEdgeIterator_Construct(const MR_PolylineTopology *topology);

/// Destroys a heap-allocated instance of `MR_PolylineUndirectedEdgeIterator`. Does nothing if the pointer is null.
MRC_API void MR_PolylineUndirectedEdgeIterator_Destroy(const MR_PolylineUndirectedEdgeIterator *_this);

/// Destroys a heap-allocated array of `MR_PolylineUndirectedEdgeIterator`. Does nothing if the pointer is null.
MRC_API void MR_PolylineUndirectedEdgeIterator_DestroyArray(const MR_PolylineUndirectedEdgeIterator *_this);

/// Generated from a method of class `MR::PolylineUndirectedEdgeIterator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_PolylineUndirectedEdgeIterator_AssignFromAnother(MR_PolylineUndirectedEdgeIterator *_this, const MR_PolylineUndirectedEdgeIterator *_other);

/// Generated from a method of class `MR::PolylineUndirectedEdgeIterator` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_incr_MR_PolylineUndirectedEdgeIterator(MR_PolylineUndirectedEdgeIterator *_this);

/// Generated from a method of class `MR::PolylineUndirectedEdgeIterator` named `operator*`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_deref_MR_PolylineUndirectedEdgeIterator(const MR_PolylineUndirectedEdgeIterator *_this);

/// \related PolylineUndirectedEdgeIterator
/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_PolylineUndirectedEdgeIterator(const MR_PolylineUndirectedEdgeIterator *a, const MR_PolylineUndirectedEdgeIterator *b);

/// Generated from function `MR::operator!=`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_PolylineUndirectedEdgeIterator(const MR_PolylineUndirectedEdgeIterator *a, const MR_PolylineUndirectedEdgeIterator *b);

/// Generated from function `MR::undirectedEdges`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *MR_undirectedEdges_MR_PolylineTopology(const MR_PolylineTopology *topology);

#ifdef __cplusplus
} // extern "C"
#endif
