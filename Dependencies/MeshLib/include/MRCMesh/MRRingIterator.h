// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft; // Defined in `#include <MRCMesh/MRIteratorRange.h>`.
typedef struct MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin; // Defined in `#include <MRCMesh/MRIteratorRange.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.


// The iterator to find all edges in a ring of edges (e.g. all edges with same origin or all edges with same left face)
/// Generated from class `MR::RingIterator<MR::NextEdgeSameOrigin>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::NextEdgeSameOrigin`
typedef struct MR_RingIterator_MR_NextEdgeSameOrigin MR_RingIterator_MR_NextEdgeSameOrigin;

// The iterator to find all edges in a ring of edges (e.g. all edges with same origin or all edges with same left face)
/// Generated from class `MR::RingIterator<MR::NextEdgeSameLeft>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::NextEdgeSameLeft`
typedef struct MR_RingIterator_MR_NextEdgeSameLeft MR_RingIterator_MR_NextEdgeSameLeft;

/// Generated from class `MR::NextEdgeSameOrigin`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::RingIterator<MR::NextEdgeSameOrigin>`
typedef struct MR_NextEdgeSameOrigin MR_NextEdgeSameOrigin;

/// Generated from class `MR::NextEdgeSameLeft`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::RingIterator<MR::NextEdgeSameLeft>`
typedef struct MR_NextEdgeSameLeft MR_NextEdgeSameLeft;

/// Generated from a constructor of class `MR::RingIterator<MR::NextEdgeSameOrigin>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RingIterator_MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_RingIterator_MR_NextEdgeSameOrigin_ConstructFromAnother(const MR_RingIterator_MR_NextEdgeSameOrigin *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RingIterator_MR_NextEdgeSameOrigin *MR_RingIterator_MR_NextEdgeSameOrigin_OffsetPtr(const MR_RingIterator_MR_NextEdgeSameOrigin *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_RingIterator_MR_NextEdgeSameOrigin_OffsetMutablePtr(MR_RingIterator_MR_NextEdgeSameOrigin *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::RingIterator<MR::NextEdgeSameOrigin>` to its base class `MR::NextEdgeSameOrigin`.
/// This version is acting on mutable pointers.
MRC_API const MR_NextEdgeSameOrigin *MR_RingIterator_MR_NextEdgeSameOrigin_UpcastTo_MR_NextEdgeSameOrigin(const MR_RingIterator_MR_NextEdgeSameOrigin *object);

/// Upcasts an instance of `MR::RingIterator<MR::NextEdgeSameOrigin>` to its base class `MR::NextEdgeSameOrigin`.
MRC_API MR_NextEdgeSameOrigin *MR_RingIterator_MR_NextEdgeSameOrigin_MutableUpcastTo_MR_NextEdgeSameOrigin(MR_RingIterator_MR_NextEdgeSameOrigin *object);

/// Generated from a constructor of class `MR::RingIterator<MR::NextEdgeSameOrigin>`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RingIterator_MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_RingIterator_MR_NextEdgeSameOrigin_Construct(const MR_MeshTopology *topology, MR_EdgeId edge, bool first);

/// Destroys a heap-allocated instance of `MR_RingIterator_MR_NextEdgeSameOrigin`. Does nothing if the pointer is null.
MRC_API void MR_RingIterator_MR_NextEdgeSameOrigin_Destroy(const MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Destroys a heap-allocated array of `MR_RingIterator_MR_NextEdgeSameOrigin`. Does nothing if the pointer is null.
MRC_API void MR_RingIterator_MR_NextEdgeSameOrigin_DestroyArray(const MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Generated from a method of class `MR::RingIterator<MR::NextEdgeSameOrigin>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_RingIterator_MR_NextEdgeSameOrigin_AssignFromAnother(MR_RingIterator_MR_NextEdgeSameOrigin *_this, const MR_RingIterator_MR_NextEdgeSameOrigin *_other);

/// Generated from a method of class `MR::RingIterator<MR::NextEdgeSameOrigin>` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_incr_MR_RingIterator_MR_NextEdgeSameOrigin(MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Generated from a method of class `MR::RingIterator<MR::NextEdgeSameOrigin>` named `operator*`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_deref_MR_RingIterator_MR_NextEdgeSameOrigin(const MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Generated from a method of class `MR::RingIterator<MR::NextEdgeSameOrigin>` named `first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_RingIterator_MR_NextEdgeSameOrigin_first(const MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Generated from a constructor of class `MR::RingIterator<MR::NextEdgeSameLeft>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RingIterator_MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_RingIterator_MR_NextEdgeSameLeft_ConstructFromAnother(const MR_RingIterator_MR_NextEdgeSameLeft *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RingIterator_MR_NextEdgeSameLeft *MR_RingIterator_MR_NextEdgeSameLeft_OffsetPtr(const MR_RingIterator_MR_NextEdgeSameLeft *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_RingIterator_MR_NextEdgeSameLeft_OffsetMutablePtr(MR_RingIterator_MR_NextEdgeSameLeft *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::RingIterator<MR::NextEdgeSameLeft>` to its base class `MR::NextEdgeSameLeft`.
/// This version is acting on mutable pointers.
MRC_API const MR_NextEdgeSameLeft *MR_RingIterator_MR_NextEdgeSameLeft_UpcastTo_MR_NextEdgeSameLeft(const MR_RingIterator_MR_NextEdgeSameLeft *object);

/// Upcasts an instance of `MR::RingIterator<MR::NextEdgeSameLeft>` to its base class `MR::NextEdgeSameLeft`.
MRC_API MR_NextEdgeSameLeft *MR_RingIterator_MR_NextEdgeSameLeft_MutableUpcastTo_MR_NextEdgeSameLeft(MR_RingIterator_MR_NextEdgeSameLeft *object);

/// Generated from a constructor of class `MR::RingIterator<MR::NextEdgeSameLeft>`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RingIterator_MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_RingIterator_MR_NextEdgeSameLeft_Construct(const MR_MeshTopology *topology, MR_EdgeId edge, bool first);

/// Destroys a heap-allocated instance of `MR_RingIterator_MR_NextEdgeSameLeft`. Does nothing if the pointer is null.
MRC_API void MR_RingIterator_MR_NextEdgeSameLeft_Destroy(const MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Destroys a heap-allocated array of `MR_RingIterator_MR_NextEdgeSameLeft`. Does nothing if the pointer is null.
MRC_API void MR_RingIterator_MR_NextEdgeSameLeft_DestroyArray(const MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Generated from a method of class `MR::RingIterator<MR::NextEdgeSameLeft>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_RingIterator_MR_NextEdgeSameLeft_AssignFromAnother(MR_RingIterator_MR_NextEdgeSameLeft *_this, const MR_RingIterator_MR_NextEdgeSameLeft *_other);

/// Generated from a method of class `MR::RingIterator<MR::NextEdgeSameLeft>` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_incr_MR_RingIterator_MR_NextEdgeSameLeft(MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Generated from a method of class `MR::RingIterator<MR::NextEdgeSameLeft>` named `operator*`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_deref_MR_RingIterator_MR_NextEdgeSameLeft(const MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Generated from a method of class `MR::RingIterator<MR::NextEdgeSameLeft>` named `first`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_RingIterator_MR_NextEdgeSameLeft_first(const MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Generated from function `MR::operator==<MR::NextEdgeSameOrigin>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_RingIterator_MR_NextEdgeSameOrigin(const MR_RingIterator_MR_NextEdgeSameOrigin *a, const MR_RingIterator_MR_NextEdgeSameOrigin *b);

/// Generated from function `MR::operator!=<MR::NextEdgeSameOrigin>`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_RingIterator_MR_NextEdgeSameOrigin(const MR_RingIterator_MR_NextEdgeSameOrigin *a, const MR_RingIterator_MR_NextEdgeSameOrigin *b);

/// Generated from a constructor of class `MR::NextEdgeSameOrigin`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_NextEdgeSameOrigin *MR_NextEdgeSameOrigin_ConstructFromAnother(const MR_NextEdgeSameOrigin *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NextEdgeSameOrigin *MR_NextEdgeSameOrigin_OffsetPtr(const MR_NextEdgeSameOrigin *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NextEdgeSameOrigin *MR_NextEdgeSameOrigin_OffsetMutablePtr(MR_NextEdgeSameOrigin *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::NextEdgeSameOrigin` to a derived class `MR::RingIterator<MR::NextEdgeSameOrigin>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_RingIterator_MR_NextEdgeSameOrigin *MR_NextEdgeSameOrigin_StaticDowncastTo_MR_RingIterator_MR_NextEdgeSameOrigin(const MR_NextEdgeSameOrigin *object);

/// Downcasts an instance of `MR::NextEdgeSameOrigin` to a derived class `MR::RingIterator<MR::NextEdgeSameOrigin>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_NextEdgeSameOrigin_MutableStaticDowncastTo_MR_RingIterator_MR_NextEdgeSameOrigin(MR_NextEdgeSameOrigin *object);

/// Generated from a constructor of class `MR::NextEdgeSameOrigin`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_NextEdgeSameOrigin *MR_NextEdgeSameOrigin_Construct(const MR_MeshTopology *topology);

/// Destroys a heap-allocated instance of `MR_NextEdgeSameOrigin`. Does nothing if the pointer is null.
MRC_API void MR_NextEdgeSameOrigin_Destroy(const MR_NextEdgeSameOrigin *_this);

/// Destroys a heap-allocated array of `MR_NextEdgeSameOrigin`. Does nothing if the pointer is null.
MRC_API void MR_NextEdgeSameOrigin_DestroyArray(const MR_NextEdgeSameOrigin *_this);

/// Generated from a method of class `MR::NextEdgeSameOrigin` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NextEdgeSameOrigin *MR_NextEdgeSameOrigin_AssignFromAnother(MR_NextEdgeSameOrigin *_this, const MR_NextEdgeSameOrigin *_other);

/// Generated from a method of class `MR::NextEdgeSameOrigin` named `next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_NextEdgeSameOrigin_next(const MR_NextEdgeSameOrigin *_this, MR_EdgeId e);

/// Generated from a constructor of class `MR::NextEdgeSameLeft`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_NextEdgeSameLeft *MR_NextEdgeSameLeft_ConstructFromAnother(const MR_NextEdgeSameLeft *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NextEdgeSameLeft *MR_NextEdgeSameLeft_OffsetPtr(const MR_NextEdgeSameLeft *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NextEdgeSameLeft *MR_NextEdgeSameLeft_OffsetMutablePtr(MR_NextEdgeSameLeft *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::NextEdgeSameLeft` to a derived class `MR::RingIterator<MR::NextEdgeSameLeft>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_RingIterator_MR_NextEdgeSameLeft *MR_NextEdgeSameLeft_StaticDowncastTo_MR_RingIterator_MR_NextEdgeSameLeft(const MR_NextEdgeSameLeft *object);

/// Downcasts an instance of `MR::NextEdgeSameLeft` to a derived class `MR::RingIterator<MR::NextEdgeSameLeft>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_NextEdgeSameLeft_MutableStaticDowncastTo_MR_RingIterator_MR_NextEdgeSameLeft(MR_NextEdgeSameLeft *object);

/// Generated from a constructor of class `MR::NextEdgeSameLeft`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_NextEdgeSameLeft *MR_NextEdgeSameLeft_Construct(const MR_MeshTopology *topology);

/// Destroys a heap-allocated instance of `MR_NextEdgeSameLeft`. Does nothing if the pointer is null.
MRC_API void MR_NextEdgeSameLeft_Destroy(const MR_NextEdgeSameLeft *_this);

/// Destroys a heap-allocated array of `MR_NextEdgeSameLeft`. Does nothing if the pointer is null.
MRC_API void MR_NextEdgeSameLeft_DestroyArray(const MR_NextEdgeSameLeft *_this);

/// Generated from a method of class `MR::NextEdgeSameLeft` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NextEdgeSameLeft *MR_NextEdgeSameLeft_AssignFromAnother(MR_NextEdgeSameLeft *_this, const MR_NextEdgeSameLeft *_other);

/// Generated from a method of class `MR::NextEdgeSameLeft` named `next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_NextEdgeSameLeft_next(const MR_NextEdgeSameLeft *_this, MR_EdgeId e);

// to iterate over all edges with same origin vertex  as firstEdge (INCLUDING firstEdge)
// for ( Edge e : orgRing( topology, firstEdge ) ) ...
/// Generated from function `MR::orgRing`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *MR_orgRing_MR_EdgeId(const MR_MeshTopology *topology, MR_EdgeId edge);

/// Generated from function `MR::orgRing`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *MR_orgRing_MR_VertId(const MR_MeshTopology *topology, MR_VertId v);

// to iterate over all edges with same origin vertex as firstEdge (EXCLUDING firstEdge)
// for ( Edge e : orgRing0( topology, firstEdge ) ) ...
/// Generated from function `MR::orgRing0`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *MR_orgRing0(const MR_MeshTopology *topology, MR_EdgeId edge);

// to iterate over all edges with same left face as firstEdge (INCLUDING firstEdge)
// for ( Edge e : leftRing( topology, firstEdge ) ) ...
/// Generated from function `MR::leftRing`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *MR_leftRing_MR_EdgeId(const MR_MeshTopology *topology, MR_EdgeId edge);

/// Generated from function `MR::leftRing`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *MR_leftRing_MR_FaceId(const MR_MeshTopology *topology, MR_FaceId f);

// to iterate over all edges with same left face as firstEdge (EXCLUDING firstEdge)
// for ( Edge e : leftRing0( topology, firstEdge ) ) ...
/// Generated from function `MR::leftRing0`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *MR_leftRing0(const MR_MeshTopology *topology, MR_EdgeId edge);

#ifdef __cplusplus
} // extern "C"
#endif
