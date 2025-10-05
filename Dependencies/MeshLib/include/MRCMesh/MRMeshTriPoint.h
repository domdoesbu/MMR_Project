// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgePoint MR_EdgePoint; // Defined in `#include <MRCMesh/MREdgePoint.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_NoInit MR_NoInit; // Defined in `#include <MRCMesh/MRMeshFwd.h>`.
typedef struct MR_TriPointf MR_TriPointf; // Defined in `#include <MRCMesh/MRTriPoint.h>`.
typedef struct MR_std_array_MR_WeightedVertex_3 MR_std_array_MR_WeightedVertex_3; // Defined in `#include <MRCMisc/std_array_MR_WeightedVertex_3.h>`.


/// Generated from class `MR::WeightedVertex`.
typedef struct MR_WeightedVertex MR_WeightedVertex;

/// encodes a point inside a triangular mesh face using barycentric coordinates

/// \details Notations used below: \n
///   v0 - the value in org( e ) \n
///   v1 - the value in dest( e ) \n
///   v2 - the value in dest( next( e ) )
/// Generated from class `MR::MeshTriPoint`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint;

/// Returns a pointer to a member variable of class `MR::WeightedVertex` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_WeightedVertex_Get_v(const MR_WeightedVertex *_this);

/// Modifies a member variable of class `MR::WeightedVertex` named `v`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedVertex_Set_v(MR_WeightedVertex *_this, MR_VertId value);

/// Returns a mutable pointer to a member variable of class `MR::WeightedVertex` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_WeightedVertex_GetMutable_v(MR_WeightedVertex *_this);

/// Returns a pointer to a member variable of class `MR::WeightedVertex` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_WeightedVertex_Get_weight(const MR_WeightedVertex *_this);

/// Modifies a member variable of class `MR::WeightedVertex` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_WeightedVertex_Set_weight(MR_WeightedVertex *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::WeightedVertex` named `weight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_WeightedVertex_GetMutable_weight(MR_WeightedVertex *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedVertex_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedVertex *MR_WeightedVertex_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_WeightedVertex_DestroyArray()`.
/// Use `MR_WeightedVertex_OffsetMutablePtr()` and `MR_WeightedVertex_OffsetPtr()` to access the array elements.
MRC_API MR_WeightedVertex *MR_WeightedVertex_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::WeightedVertex` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedVertex_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedVertex *MR_WeightedVertex_ConstructFrom(MR_VertId v, float weight);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_WeightedVertex *MR_WeightedVertex_OffsetPtr(const MR_WeightedVertex *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_WeightedVertex *MR_WeightedVertex_OffsetMutablePtr(MR_WeightedVertex *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::WeightedVertex`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_WeightedVertex_Destroy()` to free it when you're done using it.
MRC_API MR_WeightedVertex *MR_WeightedVertex_ConstructFromAnother(const MR_WeightedVertex *_other);

/// Destroys a heap-allocated instance of `MR_WeightedVertex`. Does nothing if the pointer is null.
MRC_API void MR_WeightedVertex_Destroy(const MR_WeightedVertex *_this);

/// Destroys a heap-allocated array of `MR_WeightedVertex`. Does nothing if the pointer is null.
MRC_API void MR_WeightedVertex_DestroyArray(const MR_WeightedVertex *_this);

/// Generated from a method of class `MR::WeightedVertex` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WeightedVertex *MR_WeightedVertex_AssignFromAnother(MR_WeightedVertex *_this, const MR_WeightedVertex *_other);

///< left face of this edge is considered
/// Returns a pointer to a member variable of class `MR::MeshTriPoint` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_MeshTriPoint_Get_e(const MR_MeshTriPoint *_this);

///< left face of this edge is considered
/// Modifies a member variable of class `MR::MeshTriPoint` named `e`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTriPoint_Set_e(MR_MeshTriPoint *_this, MR_EdgeId value);

///< left face of this edge is considered
/// Returns a mutable pointer to a member variable of class `MR::MeshTriPoint` named `e`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_MeshTriPoint_GetMutable_e(MR_MeshTriPoint *_this);

/// barycentric coordinates
/// \details a in [0,1], a=0 => point is on next( e ) edge, a=1 => point is in dest( e )
/// b in [0,1], b=0 => point is on e edge, b=1 => point is in dest( next( e ) )
/// a+b in [0,1], a+b=0 => point is in org( e ), a+b=1 => point is on prev( e.sym() ) edge
/// Returns a pointer to a member variable of class `MR::MeshTriPoint` named `bary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_TriPointf *MR_MeshTriPoint_Get_bary(const MR_MeshTriPoint *_this);

/// barycentric coordinates
/// \details a in [0,1], a=0 => point is on next( e ) edge, a=1 => point is in dest( e )
/// b in [0,1], b=0 => point is on e edge, b=1 => point is in dest( next( e ) )
/// a+b in [0,1], a+b=0 => point is in org( e ), a+b=1 => point is on prev( e.sym() ) edge
/// Modifies a member variable of class `MR::MeshTriPoint` named `bary`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshTriPoint_Set_bary(MR_MeshTriPoint *_this, const MR_TriPointf *value);

/// barycentric coordinates
/// \details a in [0,1], a=0 => point is on next( e ) edge, a=1 => point is in dest( e )
/// b in [0,1], b=0 => point is on e edge, b=1 => point is in dest( next( e ) )
/// a+b in [0,1], a+b=0 => point is in org( e ), a+b=1 => point is on prev( e.sym() ) edge
/// Returns a mutable pointer to a member variable of class `MR::MeshTriPoint` named `bary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriPointf *MR_MeshTriPoint_GetMutable_bary(MR_MeshTriPoint *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshTriPoint_DestroyArray()`.
/// Use `MR_MeshTriPoint_OffsetMutablePtr()` and `MR_MeshTriPoint_OffsetPtr()` to access the array elements.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshTriPoint *MR_MeshTriPoint_OffsetPtr(const MR_MeshTriPoint *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_OffsetMutablePtr(MR_MeshTriPoint *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshTriPoint`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_ConstructFromAnother(const MR_MeshTriPoint *_other);

/// Generated from a constructor of class `MR::MeshTriPoint`.
/// Parameter `_1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_Construct_1_MR_NoInit(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::MeshTriPoint`.
/// Parameter `bary` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_Construct_2_MR_EdgeId(MR_EdgeId e, const MR_TriPointf *bary);

/// Generated from a constructor of class `MR::MeshTriPoint`.
/// Parameter `ep` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_Construct_1_MR_EdgePoint(const MR_EdgePoint *ep);

/// Generated from a constructor of class `MR::MeshTriPoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_Construct_2_MR_MeshTopology(const MR_MeshTopology *topology, MR_VertId v);

/// Destroys a heap-allocated instance of `MR_MeshTriPoint`. Does nothing if the pointer is null.
MRC_API void MR_MeshTriPoint_Destroy(const MR_MeshTriPoint *_this);

/// Destroys a heap-allocated array of `MR_MeshTriPoint`. Does nothing if the pointer is null.
MRC_API void MR_MeshTriPoint_DestroyArray(const MR_MeshTriPoint *_this);

/// Generated from a conversion operator of class `MR::MeshTriPoint` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTriPoint_ConvertTo_bool(const MR_MeshTriPoint *_this);

/// Generated from a method of class `MR::MeshTriPoint` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_AssignFromAnother(MR_MeshTriPoint *_this, const MR_MeshTriPoint *_other);

/// returns valid vertex id if the point is in vertex, otherwise returns invalid id
/// Generated from a method of class `MR::MeshTriPoint` named `inVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
MRC_API MR_VertId MR_MeshTriPoint_inVertex_1(const MR_MeshTriPoint *_this, const MR_MeshTopology *topology);

/// returns true if the point is in a vertex
/// Generated from a method of class `MR::MeshTriPoint` named `inVertex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTriPoint_inVertex_0(const MR_MeshTriPoint *_this);

/// returns valid value if the point is on edge and topology.left(result.e) == topology.left(this->e),
/// otherwise returns invalid MeshEdgePoint
/// Generated from a method of class `MR::MeshTriPoint` named `onEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_EdgePoint *MR_MeshTriPoint_onEdge(const MR_MeshTriPoint *_this, const MR_MeshTopology *topology);

/// returns true if the point is in vertex or on edge, and that location is on the boundary of the region
/// Generated from a method of class `MR::MeshTriPoint` named `isBd`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTriPoint_isBd(const MR_MeshTriPoint *_this, const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// returns true if the point is inside or on the boundary of given triangular face
/// Generated from a method of class `MR::MeshTriPoint` named `fromTriangle`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
MRC_API bool MR_MeshTriPoint_fromTriangle(const MR_MeshTriPoint *_this, const MR_MeshTopology *topology, MR_FaceId f);

/// consider this valid if the edge ID is valid
/// Generated from a method of class `MR::MeshTriPoint` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTriPoint_valid(const MR_MeshTriPoint *_this);

/// represents the same point relative to next edge in the same triangle
/// Generated from a method of class `MR::MeshTriPoint` named `lnext`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_lnext(const MR_MeshTriPoint *_this, const MR_MeshTopology *topology);

/// represents the same point relative to the topology.edgeWithLeft( topology.left( e ) )
/// Generated from a method of class `MR::MeshTriPoint` named `canonical`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_MeshTriPoint_canonical(const MR_MeshTriPoint *_this, const MR_MeshTopology *topology);

/// returns three weighted triangle's vertices with the sum of not-negative weights equal to 1, and the largest weight in the closest vertex
/// Generated from a method of class `MR::MeshTriPoint` named `getWeightedVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_array_MR_WeightedVertex_3_Destroy()` to free it when you're done using it.
MRC_API MR_std_array_MR_WeightedVertex_3 *MR_MeshTriPoint_getWeightedVerts(const MR_MeshTriPoint *_this, const MR_MeshTopology *topology);

/// returns true if two points are equal including equal not-unique representation
/// Generated from a method of class `MR::MeshTriPoint` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_equal_MR_MeshTriPoint(const MR_MeshTriPoint *_this, const MR_MeshTriPoint *rhs);

/// returns true if two points are equal considering different representations
/// Generated from function `MR::same`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `lhs` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_same_MR_MeshTriPoint(const MR_MeshTopology *topology, const MR_MeshTriPoint *lhs, const MR_MeshTriPoint *rhs);

/// returns true if points a and b are located insides or on a boundary of the same triangle;
/// if true a.e and b.e are updated to have that triangle on the left
/// Generated from function `MR::fromSameTriangle`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_fromSameTriangle_MR_MeshTriPoint_ref(const MR_MeshTopology *topology, MR_MeshTriPoint *a, MR_MeshTriPoint *b);

/// returns true if points a and b are located insides or on a boundary of the same triangle;
/// if true a.e and b.e are updated to have that triangle on the left
/// Generated from function `MR::fromSameTriangle`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `b` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
MRC_API bool MR_fromSameTriangle_MR_MeshTriPoint_rvalue_ref(const MR_MeshTopology *topology, MR_MeshTriPoint *a, MR_MeshTriPoint *b);

/// returns MeshTriPoint representation of given vertex with given edge field; or invalid MeshTriPoint if it is not possible
/// Generated from function `MR::getVertexAsMeshTriPoint`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTriPoint_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTriPoint *MR_getVertexAsMeshTriPoint(const MR_MeshTopology *topology, MR_EdgeId e, MR_VertId v);

#ifdef __cplusplus
} // extern "C"
#endif
