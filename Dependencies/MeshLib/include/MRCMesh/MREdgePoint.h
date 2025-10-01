// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_PolylineTopology MR_PolylineTopology; // Defined in `#include <MRCMesh/MRPolylineTopology.h>`.
typedef struct MR_SegmPointf MR_SegmPointf; // Defined in `#include <MRCMesh/MRSegmPoint.h>`.


/// encodes a point on an edge of mesh or of polyline
/// Generated from class `MR::EdgePoint`.
typedef struct MR_EdgePoint MR_EdgePoint;

/// two edge-points (e.g. representing collision point of two edges)
/// Generated from class `MR::EdgePointPair`.
typedef struct MR_EdgePointPair MR_EdgePointPair;

/// Represents a segment on one edge
/// Generated from class `MR::EdgeSegment`.
typedef struct MR_EdgeSegment MR_EdgeSegment;

/// Returns a pointer to a member variable of class `MR::EdgePoint` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_EdgePoint_Get_e(const MR_EdgePoint *_this);

/// Modifies a member variable of class `MR::EdgePoint` named `e`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePoint_Set_e(MR_EdgePoint *_this, MR_EdgeId value);

/// Returns a mutable pointer to a member variable of class `MR::EdgePoint` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_EdgePoint_GetMutable_e(MR_EdgePoint *_this);

///< a in [0,1], a=0 => point is in org( e ), a=1 => point is in dest( e )
/// Returns a pointer to a member variable of class `MR::EdgePoint` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SegmPointf *MR_EdgePoint_Get_a(const MR_EdgePoint *_this);

///< a in [0,1], a=0 => point is in org( e ), a=1 => point is in dest( e )
/// Modifies a member variable of class `MR::EdgePoint` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_EdgePoint_Set_a(MR_EdgePoint *_this, const MR_SegmPointf *value);

///< a in [0,1], a=0 => point is in org( e ), a=1 => point is in dest( e )
/// Returns a mutable pointer to a member variable of class `MR::EdgePoint` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SegmPointf *MR_EdgePoint_GetMutable_a(MR_EdgePoint *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_EdgePoint_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgePoint_DestroyArray()`.
/// Use `MR_EdgePoint_OffsetMutablePtr()` and `MR_EdgePoint_OffsetPtr()` to access the array elements.
MRC_API MR_EdgePoint *MR_EdgePoint_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgePoint *MR_EdgePoint_OffsetPtr(const MR_EdgePoint *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgePoint *MR_EdgePoint_OffsetMutablePtr(MR_EdgePoint *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EdgePoint`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_EdgePoint_ConstructFromAnother(const MR_EdgePoint *_other);

/// Generated from a constructor of class `MR::EdgePoint`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_EdgePoint_Construct_MR_EdgeId(MR_EdgeId e, float a);

/// Generated from a constructor of class `MR::EdgePoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_EdgePoint_Construct_MR_MeshTopology(const MR_MeshTopology *topology, MR_VertId v);

/// Generated from a constructor of class `MR::EdgePoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_EdgePoint_Construct_MR_PolylineTopology(const MR_PolylineTopology *topology, MR_VertId v);

/// Destroys a heap-allocated instance of `MR_EdgePoint`. Does nothing if the pointer is null.
MRC_API void MR_EdgePoint_Destroy(const MR_EdgePoint *_this);

/// Destroys a heap-allocated array of `MR_EdgePoint`. Does nothing if the pointer is null.
MRC_API void MR_EdgePoint_DestroyArray(const MR_EdgePoint *_this);

/// Generated from a conversion operator of class `MR::EdgePoint` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgePoint_ConvertTo_bool(const MR_EdgePoint *_this);

/// Generated from a method of class `MR::EdgePoint` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgePoint *MR_EdgePoint_AssignFromAnother(MR_EdgePoint *_this, const MR_EdgePoint *_other);

/// returns valid vertex id if the point is in vertex, otherwise returns invalid id
/// Generated from a method of class `MR::EdgePoint` named `inVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
MRC_API MR_VertId MR_EdgePoint_inVertex_1_MR_MeshTopology(const MR_EdgePoint *_this, const MR_MeshTopology *topology);

/// returns valid vertex id if the point is in vertex, otherwise returns invalid id
/// Generated from a method of class `MR::EdgePoint` named `inVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
MRC_API MR_VertId MR_EdgePoint_inVertex_1_MR_PolylineTopology(const MR_EdgePoint *_this, const MR_PolylineTopology *topology);

/// returns one of two edge vertices, closest to this point
/// Generated from a method of class `MR::EdgePoint` named `getClosestVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
MRC_API MR_VertId MR_EdgePoint_getClosestVertex_MR_MeshTopology(const MR_EdgePoint *_this, const MR_MeshTopology *topology);

/// returns one of two edge vertices, closest to this point
/// Generated from a method of class `MR::EdgePoint` named `getClosestVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
MRC_API MR_VertId MR_EdgePoint_getClosestVertex_MR_PolylineTopology(const MR_EdgePoint *_this, const MR_PolylineTopology *topology);

/// returns true if the point is in a vertex
/// Generated from a method of class `MR::EdgePoint` named `inVertex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgePoint_inVertex_0(const MR_EdgePoint *_this);

/// sets this to the closest end of the edge
/// Generated from a method of class `MR::EdgePoint` named `moveToClosestVertex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgePoint_moveToClosestVertex(MR_EdgePoint *_this);

/// returns true if the point is on the boundary of the region (or for whole mesh if region is nullptr)
/// Generated from a method of class `MR::EdgePoint` named `isBd`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_EdgePoint_isBd(const MR_EdgePoint *_this, const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// consider this valid if the edge ID is valid
/// Generated from a method of class `MR::EdgePoint` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgePoint_valid(const MR_EdgePoint *_this);

/// represents the same point relative to sym edge in
/// Generated from a method of class `MR::EdgePoint` named `sym`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_EdgePoint_sym(const MR_EdgePoint *_this);

/// returns true if two edge-points are equal including equal not-unique representation
/// Generated from a method of class `MR::EdgePoint` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_equal_MR_EdgePoint(const MR_EdgePoint *_this, const MR_EdgePoint *rhs);

/// returns true if two edge-points are equal considering different representations
/// Generated from function `MR::same`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `lhs` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_same_MR_EdgePoint(const MR_MeshTopology *topology, const MR_EdgePoint *lhs, const MR_EdgePoint *rhs);

/// Returns a pointer to a member variable of class `MR::EdgePointPair` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgePoint *MR_EdgePointPair_Get_a(const MR_EdgePointPair *_this);

/// Modifies a member variable of class `MR::EdgePointPair` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_EdgePointPair_Set_a(MR_EdgePointPair *_this, const MR_EdgePoint *value);

/// Returns a mutable pointer to a member variable of class `MR::EdgePointPair` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgePoint *MR_EdgePointPair_GetMutable_a(MR_EdgePointPair *_this);

/// Returns a pointer to a member variable of class `MR::EdgePointPair` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgePoint *MR_EdgePointPair_Get_b(const MR_EdgePointPair *_this);

/// Modifies a member variable of class `MR::EdgePointPair` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_EdgePointPair_Set_b(MR_EdgePointPair *_this, const MR_EdgePoint *value);

/// Returns a mutable pointer to a member variable of class `MR::EdgePointPair` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgePoint *MR_EdgePointPair_GetMutable_b(MR_EdgePointPair *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePointPair_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePointPair *MR_EdgePointPair_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgePointPair_DestroyArray()`.
/// Use `MR_EdgePointPair_OffsetMutablePtr()` and `MR_EdgePointPair_OffsetPtr()` to access the array elements.
MRC_API MR_EdgePointPair *MR_EdgePointPair_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgePointPair *MR_EdgePointPair_OffsetPtr(const MR_EdgePointPair *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgePointPair *MR_EdgePointPair_OffsetMutablePtr(MR_EdgePointPair *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EdgePointPair`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePointPair_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePointPair *MR_EdgePointPair_ConstructFromAnother(const MR_EdgePointPair *_other);

/// Generated from a constructor of class `MR::EdgePointPair`.
/// Parameter `ia` can not be null. It is a single object.
/// Parameter `ib` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePointPair_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePointPair *MR_EdgePointPair_Construct(const MR_EdgePoint *ia, const MR_EdgePoint *ib);

/// Destroys a heap-allocated instance of `MR_EdgePointPair`. Does nothing if the pointer is null.
MRC_API void MR_EdgePointPair_Destroy(const MR_EdgePointPair *_this);

/// Destroys a heap-allocated array of `MR_EdgePointPair`. Does nothing if the pointer is null.
MRC_API void MR_EdgePointPair_DestroyArray(const MR_EdgePointPair *_this);

/// Generated from a method of class `MR::EdgePointPair` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgePointPair *MR_EdgePointPair_AssignFromAnother(MR_EdgePointPair *_this, const MR_EdgePointPair *_other);

/// returns true if two edge-point pairs are equal including equal not-unique representation
/// Generated from a method of class `MR::EdgePointPair` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_equal_MR_EdgePointPair(const MR_EdgePointPair *_this, const MR_EdgePointPair *rhs);

/// id of the edge
/// Returns a pointer to a member variable of class `MR::EdgeSegment` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_EdgeSegment_Get_e(const MR_EdgeSegment *_this);

/// id of the edge
/// Modifies a member variable of class `MR::EdgeSegment` named `e`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgeSegment_Set_e(MR_EdgeSegment *_this, MR_EdgeId value);

/// id of the edge
/// Returns a mutable pointer to a member variable of class `MR::EdgeSegment` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_EdgeSegment_GetMutable_e(MR_EdgeSegment *_this);

/// start of the segment
/// Returns a pointer to a member variable of class `MR::EdgeSegment` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SegmPointf *MR_EdgeSegment_Get_a(const MR_EdgeSegment *_this);

/// start of the segment
/// Modifies a member variable of class `MR::EdgeSegment` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_EdgeSegment_Set_a(MR_EdgeSegment *_this, const MR_SegmPointf *value);

/// start of the segment
/// Returns a mutable pointer to a member variable of class `MR::EdgeSegment` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SegmPointf *MR_EdgeSegment_GetMutable_a(MR_EdgeSegment *_this);

/// end of the segment
/// Returns a pointer to a member variable of class `MR::EdgeSegment` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SegmPointf *MR_EdgeSegment_Get_b(const MR_EdgeSegment *_this);

/// end of the segment
/// Modifies a member variable of class `MR::EdgeSegment` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_EdgeSegment_Set_b(MR_EdgeSegment *_this, const MR_SegmPointf *value);

/// end of the segment
/// Returns a mutable pointer to a member variable of class `MR::EdgeSegment` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SegmPointf *MR_EdgeSegment_GetMutable_b(MR_EdgeSegment *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeSegment *MR_EdgeSegment_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgeSegment_DestroyArray()`.
/// Use `MR_EdgeSegment_OffsetMutablePtr()` and `MR_EdgeSegment_OffsetPtr()` to access the array elements.
MRC_API MR_EdgeSegment *MR_EdgeSegment_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgeSegment *MR_EdgeSegment_OffsetPtr(const MR_EdgeSegment *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgeSegment *MR_EdgeSegment_OffsetMutablePtr(MR_EdgeSegment *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EdgeSegment`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeSegment *MR_EdgeSegment_ConstructFromAnother(const MR_EdgeSegment *_other);

/// Generated from a constructor of class `MR::EdgeSegment`.
/// Parameter `a` has a default argument: `0.F`, pass a null pointer to use it.
/// Parameter `b` has a default argument: `1.F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeSegment *MR_EdgeSegment_Construct(MR_EdgeId e, const float *a, const float *b);

/// Destroys a heap-allocated instance of `MR_EdgeSegment`. Does nothing if the pointer is null.
MRC_API void MR_EdgeSegment_Destroy(const MR_EdgeSegment *_this);

/// Destroys a heap-allocated array of `MR_EdgeSegment`. Does nothing if the pointer is null.
MRC_API void MR_EdgeSegment_DestroyArray(const MR_EdgeSegment *_this);

/// Generated from a method of class `MR::EdgeSegment` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeSegment *MR_EdgeSegment_AssignFromAnother(MR_EdgeSegment *_this, const MR_EdgeSegment *_other);

/// returns starting EdgePoint
/// Generated from a method of class `MR::EdgeSegment` named `edgePointA`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_EdgeSegment_edgePointA(const MR_EdgeSegment *_this);

/// returns ending EdgePoint
/// Generated from a method of class `MR::EdgeSegment` named `edgePointB`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_EdgeSegment_edgePointB(const MR_EdgeSegment *_this);

/// returns true if the edge is valid and start point is less than end point
/// Generated from a method of class `MR::EdgeSegment` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgeSegment_valid(const MR_EdgeSegment *_this);

/// Generated from a method of class `MR::EdgeSegment` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_equal_MR_EdgeSegment(const MR_EdgeSegment *_this, const MR_EdgeSegment *rhs);

/// represents the same segment relative to sym edge in
/// Generated from a method of class `MR::EdgeSegment` named `sym`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeSegment_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeSegment *MR_EdgeSegment_sym(const MR_EdgeSegment *_this);

/// returns true if points a and b are located on a boundary of the same triangle;
/// \details if true a.e and b.e are updated to have that triangle on the left
/// \related EdgePoint
/// Generated from function `MR::fromSameTriangle`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_fromSameTriangle_MR_EdgePoint_ref(const MR_MeshTopology *topology, MR_EdgePoint *a, MR_EdgePoint *b);

/// returns true if points a and b are located on a boundary of the same triangle;
/// \details if true a.e and b.e are updated to have that triangle on the left
/// \related EdgePoint
/// Generated from function `MR::fromSameTriangle`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API bool MR_fromSameTriangle_MR_EdgePoint_rvalue_ref(const MR_MeshTopology *topology, MR_EdgePoint *a, MR_EdgePoint *b);

#ifdef __cplusplus
} // extern "C"
#endif
