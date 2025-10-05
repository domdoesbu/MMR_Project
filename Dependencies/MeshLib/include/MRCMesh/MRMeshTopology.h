// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>
#include <MRCMisc/std_array_MR_VertId_3.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeBitSet MR_EdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_GridSettings MR_GridSettings; // Defined in `#include <MRCMesh/MRGridSettings.h>`.
typedef struct MR_PackMapping MR_PackMapping; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_PartMapping MR_PartMapping; // Defined in `#include <MRCMesh/MRPartMapping.h>`.
typedef struct MR_Triangulation MR_Triangulation; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_EdgeId_MR_FaceId MR_Vector_MR_EdgeId_MR_FaceId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_EdgeId_MR_VertId MR_Vector_MR_EdgeId_MR_VertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_WholeEdgeMap MR_WholeEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_FaceId_MR_FaceId.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_void_from_MR_EdgeId_MR_EdgeId MR_std_function_void_from_MR_EdgeId_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_void_from_MR_EdgeId_MR_EdgeId.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_array_MR_VertId_3 MR_std_vector_std_array_MR_VertId_3; // Defined in `#include <MRCMisc/std_vector_std_array_MR_VertId_3.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.


/// Mesh Topology
/// Generated from class `MR::MeshTopology`.
typedef struct MR_MeshTopology MR_MeshTopology;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopology_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopology *MR_MeshTopology_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshTopology_DestroyArray()`.
/// Use `MR_MeshTopology_OffsetMutablePtr()` and `MR_MeshTopology_OffsetPtr()` to access the array elements.
MRC_API MR_MeshTopology *MR_MeshTopology_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshTopology *MR_MeshTopology_OffsetPtr(const MR_MeshTopology *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshTopology *MR_MeshTopology_OffsetMutablePtr(MR_MeshTopology *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshTopology`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopology_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopology *MR_MeshTopology_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshTopology *_other);

/// Destroys a heap-allocated instance of `MR_MeshTopology`. Does nothing if the pointer is null.
MRC_API void MR_MeshTopology_Destroy(const MR_MeshTopology *_this);

/// Destroys a heap-allocated array of `MR_MeshTopology`. Does nothing if the pointer is null.
MRC_API void MR_MeshTopology_DestroyArray(const MR_MeshTopology *_this);

/// Generated from a method of class `MR::MeshTopology` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTopology *MR_MeshTopology_AssignFromAnother(MR_MeshTopology *_this, MR_PassBy _other_pass_by, MR_MeshTopology *_other);

/// creates an edge not associated with any vertex or face
/// Generated from a method of class `MR::MeshTopology` named `makeEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_makeEdge(MR_MeshTopology *_this);

/// checks whether the edge is disconnected from all other edges and disassociated from all vertices and faces (as if after makeEdge)
/// Generated from a method of class `MR::MeshTopology` named `isLoneEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_isLoneEdge(const MR_MeshTopology *_this, MR_EdgeId a);

/// returns last not lone undirected edge id, or invalid id if no such edge exists
/// Generated from a method of class `MR::MeshTopology` named `lastNotLoneUndirectedEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_MeshTopology_lastNotLoneUndirectedEdge(const MR_MeshTopology *_this);

/// returns last not lone edge id, or invalid id if no such edge exists
/// Generated from a method of class `MR::MeshTopology` named `lastNotLoneEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_lastNotLoneEdge(const MR_MeshTopology *_this);

/// remove all lone edges from given set
/// Generated from a method of class `MR::MeshTopology` named `excludeLoneEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
MRC_API void MR_MeshTopology_excludeLoneEdges(const MR_MeshTopology *_this, MR_UndirectedEdgeBitSet *edges);

/// returns the number of half-edge records including lone ones
/// Generated from a method of class `MR::MeshTopology` named `edgeSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_edgeSize(const MR_MeshTopology *_this);

/// returns the number of allocated edge records
/// Generated from a method of class `MR::MeshTopology` named `edgeCapacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_edgeCapacity(const MR_MeshTopology *_this);

/// returns the number of undirected edges (pairs of half-edges) including lone ones
/// Generated from a method of class `MR::MeshTopology` named `undirectedEdgeSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_undirectedEdgeSize(const MR_MeshTopology *_this);

/// returns the number of allocated undirected edges (pairs of half-edges)
/// Generated from a method of class `MR::MeshTopology` named `undirectedEdgeCapacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_undirectedEdgeCapacity(const MR_MeshTopology *_this);

/// computes the number of not-lone (valid) undirected edges
/// Generated from a method of class `MR::MeshTopology` named `computeNotLoneUndirectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_computeNotLoneUndirectedEdges(const MR_MeshTopology *_this);

/// finds and returns all not-lone (valid) undirected edges
/// Generated from a method of class `MR::MeshTopology` named `findNotLoneUndirectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_MeshTopology_findNotLoneUndirectedEdges(const MR_MeshTopology *_this);

/// sets the capacity of half-edges vector
/// Generated from a method of class `MR::MeshTopology` named `edgeReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_edgeReserve(MR_MeshTopology *_this, MR_uint64_t newCapacity);

/// returns true if given edge is within valid range and not-lone
/// Generated from a method of class `MR::MeshTopology` named `hasEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_hasEdge(const MR_MeshTopology *_this, MR_EdgeId e);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::MeshTopology` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_heapBytes(const MR_MeshTopology *_this);

/// requests the removal of unused capacity
/// Generated from a method of class `MR::MeshTopology` named `shrinkToFit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_shrinkToFit(MR_MeshTopology *_this);

/// given two half edges do either of two:
/// 1) if a and b were from distinct rings, puts them in one ring;
/// 2) if a and b were from the same ring, puts them in separate rings;
/// the cut in rings in both cases is made after a and b
/// Generated from a method of class `MR::MeshTopology` named `splice`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_splice(MR_MeshTopology *_this, MR_EdgeId a, MR_EdgeId b);

/// collapses given edge in a vertex and deletes
/// 1) faces: left( e ) and right( e );
/// 2) edges: e, next( e.sym() ), prev( e.sym() ), and optionally next( e ), prev( e ) if their left and right triangles are deleted;
/// 3) all vertices that lost their last edge;
/// calls onEdgeDel for every deleted edge (del) including given (e);
/// if valid (rem) is given then dest( del ) = dest( rem ) and their origins are in different ends of collapsing edge, (rem) shall take the place of (del)
/// \return prev( e ) if it is still valid
/// Generated from a method of class `MR::MeshTopology` named `collapseEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `onEdgeDel` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_collapseEdge(MR_MeshTopology *_this, MR_EdgeId e, const MR_std_function_void_from_MR_EdgeId_MR_EdgeId *onEdgeDel);

/// next (counter clock wise) half-edge in the origin ring
/// Generated from a method of class `MR::MeshTopology` named `next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_next(const MR_MeshTopology *_this, MR_EdgeId he);

/// previous (clock wise) half-edge in the origin ring
/// Generated from a method of class `MR::MeshTopology` named `prev`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_prev(const MR_MeshTopology *_this, MR_EdgeId he);

/// returns origin vertex of half-edge
/// Generated from a method of class `MR::MeshTopology` named `org`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_MeshTopology_org(const MR_MeshTopology *_this, MR_EdgeId he);

/// returns destination vertex of half-edge
/// Generated from a method of class `MR::MeshTopology` named `dest`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_MeshTopology_dest(const MR_MeshTopology *_this, MR_EdgeId he);

/// returns left face of half-edge
/// Generated from a method of class `MR::MeshTopology` named `left`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_MeshTopology_left(const MR_MeshTopology *_this, MR_EdgeId he);

/// returns right face of half-edge
/// Generated from a method of class `MR::MeshTopology` named `right`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_MeshTopology_right(const MR_MeshTopology *_this, MR_EdgeId he);

/// sets new origin to the full origin ring including this edge;
/// edgePerVertex_ table is updated accordingly
/// Generated from a method of class `MR::MeshTopology` named `setOrg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_setOrg(MR_MeshTopology *_this, MR_EdgeId a, MR_VertId v);

/// sets new left face to the full left ring including this edge;
/// edgePerFace_ table is updated accordingly
/// Generated from a method of class `MR::MeshTopology` named `setLeft`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_setLeft(MR_MeshTopology *_this, MR_EdgeId a, MR_FaceId f);

/// returns true if a and b are both from the same origin ring
/// Generated from a method of class `MR::MeshTopology` named `fromSameOriginRing`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_fromSameOriginRing(const MR_MeshTopology *_this, MR_EdgeId a, MR_EdgeId b);

/// returns true if a and b are both from the same left face ring
/// Generated from a method of class `MR::MeshTopology` named `fromSameLeftRing`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_fromSameLeftRing(const MR_MeshTopology *_this, MR_EdgeId a, MR_EdgeId b);

/// returns the number of edges around the origin vertex, returns 1 for lone edges
/// Generated from a method of class `MR::MeshTopology` named `getOrgDegree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshTopology_getOrgDegree(const MR_MeshTopology *_this, MR_EdgeId a);

/// returns the number of edges around the given vertex
/// Generated from a method of class `MR::MeshTopology` named `getVertDegree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshTopology_getVertDegree(const MR_MeshTopology *_this, MR_VertId v);

/// returns the number of edges around the left face: 3 for triangular faces, ...
/// Generated from a method of class `MR::MeshTopology` named `getLeftDegree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshTopology_getLeftDegree(const MR_MeshTopology *_this, MR_EdgeId a);

/// returns the number of edges around the given face: 3 for triangular faces, ...
/// Generated from a method of class `MR::MeshTopology` named `getFaceDegree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshTopology_getFaceDegree(const MR_MeshTopology *_this, MR_FaceId f);

/// returns true if the cell to the left of a is triangular
/// Generated from a method of class `MR::MeshTopology` named `isLeftTri`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_isLeftTri(const MR_MeshTopology *_this, MR_EdgeId a);

/// gets 3 vertices of given triangular face;
/// the vertices are returned in counter-clockwise order if look from mesh outside
/// Generated from a method of class `MR::MeshTopology` named `getTriVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `v0` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
MRC_API void MR_MeshTopology_getTriVerts_4(const MR_MeshTopology *_this, MR_FaceId f, MR_VertId *v0, MR_VertId *v1, MR_VertId *v2);

/// Generated from a method of class `MR::MeshTopology` named `getTriVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
MRC_API void MR_MeshTopology_getTriVerts_2(const MR_MeshTopology *_this, MR_FaceId f, MR_std_array_MR_VertId_3 *v);

/// Generated from a method of class `MR::MeshTopology` named `getTriVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_array_MR_VertId_3 MR_MeshTopology_getTriVerts_1(const MR_MeshTopology *_this, MR_FaceId f);

/// return true if triangular face (f) has (v) as one of its vertices
/// Generated from a method of class `MR::MeshTopology` named `isTriVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_isTriVert(const MR_MeshTopology *_this, MR_FaceId f, MR_VertId v);

/// returns three vertex ids for valid triangles, invalid triangles are skipped
/// Generated from a method of class `MR::MeshTopology` named `getAllTriVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_array_MR_VertId_3_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_array_MR_VertId_3 *MR_MeshTopology_getAllTriVerts(const MR_MeshTopology *_this);

/// returns three vertex ids for valid triangles (which can be accessed by FaceId),
/// vertex ids for invalid triangles are undefined, and shall not be read
/// Generated from a method of class `MR::MeshTopology` named `getTriangulation`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Triangulation_Destroy()` to free it when you're done using it.
MRC_API MR_Triangulation *MR_MeshTopology_getTriangulation(const MR_MeshTopology *_this);

/// gets 3 vertices of the left face ( face-id may not exist, but the shape must be triangular)
/// the vertices are returned in counter-clockwise order if look from mesh outside: v0 = org( a ), v1 = dest( a )
/// Generated from a method of class `MR::MeshTopology` named `getLeftTriVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `v0` can not be null. It is a single object.
/// Parameter `v1` can not be null. It is a single object.
/// Parameter `v2` can not be null. It is a single object.
MRC_API void MR_MeshTopology_getLeftTriVerts_4(const MR_MeshTopology *_this, MR_EdgeId a, MR_VertId *v0, MR_VertId *v1, MR_VertId *v2);

/// Generated from a method of class `MR::MeshTopology` named `getLeftTriVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
MRC_API void MR_MeshTopology_getLeftTriVerts_2(const MR_MeshTopology *_this, MR_EdgeId a, MR_std_array_MR_VertId_3 *v);

/// Generated from a method of class `MR::MeshTopology` named `getLeftTriVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_array_MR_VertId_3 MR_MeshTopology_getLeftTriVerts_1(const MR_MeshTopology *_this, MR_EdgeId a);

/// given one edge with triangular face on the left;
/// returns two other edges of the same face, oriented to have this face on the left;
/// the edges are returned in counter-clockwise order if look from mesh outside
/// Generated from a method of class `MR::MeshTopology` named `getLeftTriEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `e1` can not be null. It is a single object.
/// Parameter `e2` can not be null. It is a single object.
MRC_API void MR_MeshTopology_getLeftTriEdges(const MR_MeshTopology *_this, MR_EdgeId e0, MR_EdgeId *e1, MR_EdgeId *e2);

/// gets 3 edges of given triangular face, oriented to have it on the left;
/// the edges are returned in counter-clockwise order if look from mesh outside
/// Generated from a method of class `MR::MeshTopology` named `getTriEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `e0` can not be null. It is a single object.
/// Parameter `e1` can not be null. It is a single object.
/// Parameter `e2` can not be null. It is a single object.
MRC_API void MR_MeshTopology_getTriEdges(const MR_MeshTopology *_this, MR_FaceId f, MR_EdgeId *e0, MR_EdgeId *e1, MR_EdgeId *e2);

/// returns true if the cell to the left of a is quadrangular
/// Generated from a method of class `MR::MeshTopology` named `isLeftQuad`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_isLeftQuad(const MR_MeshTopology *_this, MR_EdgeId a);

/// for all valid vertices this vector contains an edge with the origin there
/// Generated from a method of class `MR::MeshTopology` named `edgePerVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_EdgeId_MR_VertId *MR_MeshTopology_edgePerVertex(const MR_MeshTopology *_this);

/// returns valid edge if given vertex is present in the mesh
/// Generated from a method of class `MR::MeshTopology` named `edgeWithOrg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_edgeWithOrg(const MR_MeshTopology *_this, MR_VertId a);

/// returns true if given vertex is present in the mesh
/// Generated from a method of class `MR::MeshTopology` named `hasVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_hasVert(const MR_MeshTopology *_this, MR_VertId a);

/// returns the number of valid vertices
/// Generated from a method of class `MR::MeshTopology` named `numValidVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshTopology_numValidVerts(const MR_MeshTopology *_this);

/// returns last valid vertex id, or invalid id if no single valid vertex exists
/// Generated from a method of class `MR::MeshTopology` named `lastValidVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_MeshTopology_lastValidVert(const MR_MeshTopology *_this);

/// creates new vert-id not associated with any edge yet
/// Generated from a method of class `MR::MeshTopology` named `addVertId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_MeshTopology_addVertId(MR_MeshTopology *_this);

/// explicitly increases the size of vertices vector
/// Generated from a method of class `MR::MeshTopology` named `vertResize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_vertResize(MR_MeshTopology *_this, MR_uint64_t newSize);

/// explicitly increases the size of vertices vector, doubling the current capacity if it was not enough
/// Generated from a method of class `MR::MeshTopology` named `vertResizeWithReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_vertResizeWithReserve(MR_MeshTopology *_this, MR_uint64_t newSize);

/// sets the capacity of vertices vector
/// Generated from a method of class `MR::MeshTopology` named `vertReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_vertReserve(MR_MeshTopology *_this, MR_uint64_t newCapacity);

/// returns the number of vertex records including invalid ones
/// Generated from a method of class `MR::MeshTopology` named `vertSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_vertSize(const MR_MeshTopology *_this);

/// returns the number of allocated vert records
/// Generated from a method of class `MR::MeshTopology` named `vertCapacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_vertCapacity(const MR_MeshTopology *_this);

/// returns cached set of all valid vertices
/// Generated from a method of class `MR::MeshTopology` named `getValidVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_MeshTopology_getValidVerts(const MR_MeshTopology *_this);

/// sets in (vs) all valid vertices that were not selected before the call, and resets other bits
/// Generated from a method of class `MR::MeshTopology` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `vs` can not be null. It is a single object.
MRC_API void MR_MeshTopology_flip_MR_VertBitSet(const MR_MeshTopology *_this, MR_VertBitSet *vs);

/// if region pointer is not null then converts it in reference, otherwise returns all valid vertices in the mesh
/// Generated from a method of class `MR::MeshTopology` named `getVertIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_MeshTopology_getVertIds(const MR_MeshTopology *_this, const MR_VertBitSet *region);

/// for all valid faces this vector contains an edge with that face at left
/// Generated from a method of class `MR::MeshTopology` named `edgePerFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_EdgeId_MR_FaceId *MR_MeshTopology_edgePerFace(const MR_MeshTopology *_this);

/// returns valid edge if given vertex is present in the mesh
/// Generated from a method of class `MR::MeshTopology` named `edgeWithLeft`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_edgeWithLeft(const MR_MeshTopology *_this, MR_FaceId a);

/// returns true if given face is present in the mesh
/// Generated from a method of class `MR::MeshTopology` named `hasFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_hasFace(const MR_MeshTopology *_this, MR_FaceId a);

/// if two valid faces share the same edge then it is found and returned
/// Generated from a method of class `MR::MeshTopology` named `sharedEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_sharedEdge(const MR_MeshTopology *_this, MR_FaceId l, MR_FaceId r);

/// if two valid edges share the same vertex then it is found and returned as Edge with this vertex in origin
/// Generated from a method of class `MR::MeshTopology` named `sharedVertInOrg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_sharedVertInOrg_MR_EdgeId(const MR_MeshTopology *_this, MR_EdgeId a, MR_EdgeId b);

/// if two valid faces share the same vertex then it is found and returned as Edge with this vertex in origin
/// Generated from a method of class `MR::MeshTopology` named `sharedVertInOrg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_sharedVertInOrg_MR_FaceId(const MR_MeshTopology *_this, MR_FaceId l, MR_FaceId r);

/// if two valid edges belong to same valid face then it is found and returned
/// Generated from a method of class `MR::MeshTopology` named `sharedFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_MeshTopology_sharedFace(const MR_MeshTopology *_this, MR_EdgeId a, MR_EdgeId b);

/// returns the number of valid faces
/// Generated from a method of class `MR::MeshTopology` named `numValidFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_MeshTopology_numValidFaces(const MR_MeshTopology *_this);

/// returns last valid face id, or invalid id if no single valid face exists
/// Generated from a method of class `MR::MeshTopology` named `lastValidFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_MeshTopology_lastValidFace(const MR_MeshTopology *_this);

/// creates new face-id not associated with any edge yet
/// Generated from a method of class `MR::MeshTopology` named `addFaceId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_FaceId MR_MeshTopology_addFaceId(MR_MeshTopology *_this);

/// deletes the face, also deletes its edges and vertices if they were not shared by other faces and not in \param keepFaces
/// Generated from a method of class `MR::MeshTopology` named `deleteFace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `keepEdges` defaults to a null pointer in C++.
MRC_API void MR_MeshTopology_deleteFace(MR_MeshTopology *_this, MR_FaceId f, const MR_UndirectedEdgeBitSet *keepEdges);

/// deletes multiple given faces by calling \ref deleteFace for each
/// Generated from a method of class `MR::MeshTopology` named `deleteFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fs` can not be null. It is a single object.
/// Parameter `keepEdges` defaults to a null pointer in C++.
MRC_API void MR_MeshTopology_deleteFaces(MR_MeshTopology *_this, const MR_FaceBitSet *fs, const MR_UndirectedEdgeBitSet *keepEdges);

/// explicitly increases the size of faces vector
/// Generated from a method of class `MR::MeshTopology` named `faceResize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_faceResize(MR_MeshTopology *_this, MR_uint64_t newSize);

/// explicitly increases the size of faces vector, doubling the current capacity if it was not enough
/// Generated from a method of class `MR::MeshTopology` named `faceResizeWithReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_faceResizeWithReserve(MR_MeshTopology *_this, MR_uint64_t newSize);

/// sets the capacity of faces vector
/// Generated from a method of class `MR::MeshTopology` named `faceReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_faceReserve(MR_MeshTopology *_this, MR_uint64_t newCapacity);

/// returns the number of face records including invalid ones
/// Generated from a method of class `MR::MeshTopology` named `faceSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_faceSize(const MR_MeshTopology *_this);

/// returns the number of allocated face records
/// Generated from a method of class `MR::MeshTopology` named `faceCapacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshTopology_faceCapacity(const MR_MeshTopology *_this);

/// returns cached set of all valid faces
/// Generated from a method of class `MR::MeshTopology` named `getValidFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_MeshTopology_getValidFaces(const MR_MeshTopology *_this);

/// sets in (fs) all valid faces that were not selected before the call, and resets other bits
/// Generated from a method of class `MR::MeshTopology` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fs` can not be null. It is a single object.
MRC_API void MR_MeshTopology_flip_MR_FaceBitSet(const MR_MeshTopology *_this, MR_FaceBitSet *fs);

/// if region pointer is not null then converts it in reference, otherwise returns all valid faces in the mesh
/// Generated from a method of class `MR::MeshTopology` named `getFaceIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_MeshTopology_getFaceIds(const MR_MeshTopology *_this, const MR_FaceBitSet *region);

/// returns the first boundary edge (for given region or for whole mesh if region is nullptr) in counter-clockwise order starting from given edge with the same left face or hole;
/// returns invalid edge if no boundary edge is found
/// Generated from a method of class `MR::MeshTopology` named `bdEdgeSameLeft`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_MeshTopology_bdEdgeSameLeft(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// returns true if left(e) is a valid (region) face,
/// and it has a boundary edge (isBdEdge(e,region) == true)
/// Generated from a method of class `MR::MeshTopology` named `isLeftBdFace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isLeftBdFace(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// returns a boundary edge with given left face considering boundary of given region (or for whole mesh if region is nullptr);
/// returns invalid edge if no boundary edge is found
/// Generated from a method of class `MR::MeshTopology` named `bdEdgeWithLeft`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_MeshTopology_bdEdgeWithLeft(const MR_MeshTopology *_this, MR_FaceId f, const MR_FaceBitSet *region);

/// returns true if given face belongs to the region and it has a boundary edge (isBdEdge(e,region) == true)
/// Generated from a method of class `MR::MeshTopology` named `isBdFace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isBdFace(const MR_MeshTopology *_this, MR_FaceId f, const MR_FaceBitSet *region);

/// returns all faces for which isBdFace(f, region) is true
/// Generated from a method of class `MR::MeshTopology` named `findBdFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_MeshTopology_findBdFaces(const MR_MeshTopology *_this, const MR_FaceBitSet *region);

/// return true if left face of given edge belongs to region (or just have valid id if region is nullptr)
/// Generated from a method of class `MR::MeshTopology` named `isLeftInRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isLeftInRegion(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// return true if given edge is inner for given region (or for whole mesh if region is nullptr)
/// Generated from a method of class `MR::MeshTopology` named `isInnerEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isInnerEdge(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// isBdEdge(e) returns true, if the edge (e) is a boundary edge of the mesh:
///     (e) has a hole from one or both sides.
/// isBdEdge(e, region) returns true, if the edge (e) is a boundary edge of the given region:
///     (e) has a region's face from one side (region.test(f0)==true) and a hole or not-region face from the other side (!f1 || region.test(f1)==false).
/// If the region contains all faces of the mesh then isBdEdge(e) is the union of isBdEdge(e, region) and not-lone edges without both left and right faces.
/// Generated from a method of class `MR::MeshTopology` named `isBdEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isBdEdge(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// returns all (test) edges for which left(e) does not belong to the region and isBdEdge(e, region) is true
/// Generated from a method of class `MR::MeshTopology` named `findLeftBdEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `test` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_MeshTopology_findLeftBdEdges(const MR_MeshTopology *_this, const MR_FaceBitSet *region, const MR_EdgeBitSet *test);

/// returns the first boundary edge (for given region or for whole mesh if region is nullptr) in counter-clockwise order starting from given edge with the same origin;
/// returns invalid edge if no boundary edge is found
/// Generated from a method of class `MR::MeshTopology` named `bdEdgeSameOrigin`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_MeshTopology_bdEdgeSameOrigin(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// returns true if edge's origin is on (region) boundary
/// Generated from a method of class `MR::MeshTopology` named `isBdVertexInOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isBdVertexInOrg(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// returns a boundary edge with given vertex in origin considering boundary of given region (or for whole mesh if region is nullptr);
/// returns invalid edge if no boundary edge is found
/// Generated from a method of class `MR::MeshTopology` named `bdEdgeWithOrigin`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_MeshTopology_bdEdgeWithOrigin(const MR_MeshTopology *_this, MR_VertId v, const MR_FaceBitSet *region);

/// returns true if given vertex is on (region) boundary
/// Generated from a method of class `MR::MeshTopology` named `isBdVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isBdVertex(const MR_MeshTopology *_this, MR_VertId v, const MR_FaceBitSet *region);

/// returns all (test) vertices for which isBdVertex(v, region) is true
/// Generated from a method of class `MR::MeshTopology` named `findBdVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `test` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_MeshTopology_findBdVerts(const MR_MeshTopology *_this, const MR_FaceBitSet *region, const MR_VertBitSet *test);

/// returns true if one of incident faces of given vertex pertain to given region (or any such face exists if region is nullptr)
/// Generated from a method of class `MR::MeshTopology` named `isInnerOrBdVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isInnerOrBdVertex(const MR_MeshTopology *_this, MR_VertId v, const MR_FaceBitSet *region);

/// returns true if left face of given edge belongs to given region (if provided) and right face either does not exist or does not belong
/// Generated from a method of class `MR::MeshTopology` named `isLeftBdEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isLeftBdEdge(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// return true if given edge is inner or boundary for given region (or for whole mesh if region is nullptr), returns false for lone edges
/// Generated from a method of class `MR::MeshTopology` named `isInnerOrBdEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isInnerOrBdEdge(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// given a (region) boundary edge with no right face in given region, returns next boundary edge for the same region: dest(e)==org(res)
/// Generated from a method of class `MR::MeshTopology` named `nextLeftBd`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_MeshTopology_nextLeftBd(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// given a (region) boundary edge with no right face in given region, returns previous boundary edge for the same region; dest(res)==org(e)
/// Generated from a method of class `MR::MeshTopology` named `prevLeftBd`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_MeshTopology_prevLeftBd(const MR_MeshTopology *_this, MR_EdgeId e, const MR_FaceBitSet *region);

/// finds and returns edge from o to d in the mesh; returns invalid edge otherwise
/// Generated from a method of class `MR::MeshTopology` named `findEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_MeshTopology_findEdge(const MR_MeshTopology *_this, MR_VertId o, MR_VertId d);

/// returns true if the mesh (region) does not have any neighboring holes
/// Generated from a method of class `MR::MeshTopology` named `isClosed`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_MeshTopology_isClosed(const MR_MeshTopology *_this, const MR_FaceBitSet *region);

/// returns one edge with no valid left face for every boundary in the mesh;
/// if region is given, then returned edges must have valid right faces from the region
/// Generated from a method of class `MR::MeshTopology` named `findHoleRepresentiveEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_MeshTopology_findHoleRepresentiveEdges(const MR_MeshTopology *_this, const MR_FaceBitSet *region);

/// returns the number of hole loops in the mesh;
/// \param holeRepresentativeEdges optional output of the smallest edge id with no valid left face in every hole
/// Generated from a method of class `MR::MeshTopology` named `findNumHoles`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `holeRepresentativeEdges` defaults to a null pointer in C++.
MRC_API int32_t MR_MeshTopology_findNumHoles(const MR_MeshTopology *_this, MR_EdgeBitSet *holeRepresentativeEdges);

/// returns full edge-loop of left face from (e) starting from (e) itself
/// Generated from a method of class `MR::MeshTopology` named `getLeftRing`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_MeshTopology_getLeftRing(const MR_MeshTopology *_this, MR_EdgeId e);

/// returns full edge-loops of left faces from every edge in (es);
/// each edge-loop will be returned only once even if some faces are represented by more than one edge in (es)
/// Generated from a method of class `MR::MeshTopology` named `getLeftRings`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `es` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_MeshTopology_getLeftRings(const MR_MeshTopology *_this, const MR_std_vector_MR_EdgeId *es);

/// returns all vertices incident to path edges
/// Generated from a method of class `MR::MeshTopology` named `getPathVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_MeshTopology_getPathVertices(const MR_MeshTopology *_this, const MR_std_vector_MR_EdgeId *path);

/// returns all valid left faces of path edges
/// Generated from a method of class `MR::MeshTopology` named `getPathLeftFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_MeshTopology_getPathLeftFaces(const MR_MeshTopology *_this, const MR_std_vector_MR_EdgeId *path);

/// returns all valid right faces of path edges
/// Generated from a method of class `MR::MeshTopology` named `getPathRightFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_MeshTopology_getPathRightFaces(const MR_MeshTopology *_this, const MR_std_vector_MR_EdgeId *path);

/// given the edge with left and right triangular faces, which form together a quadrangle,
/// rotates the edge counter-clockwise inside the quadrangle
/// Generated from a method of class `MR::MeshTopology` named `flipEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_flipEdge(MR_MeshTopology *_this, MR_EdgeId e);

/// split given edge on two parts:
/// dest(returned-edge) = org(e) - newly created vertex,
/// org(returned-edge) = org(e-before-split),
/// dest(e) = dest(e-before-split)
/// \details left and right faces of given edge if valid are also subdivided on two parts each;
/// the split edge will keep both face IDs and their degrees, and the new edge will have new face IDs and new faces are triangular;
/// if left or right faces of the original edge were in the region, then include new parts of these faces in the region
/// \param new2Old receive mapping from newly appeared triangle to its original triangle (part to full)
/// Generated from a method of class `MR::MeshTopology` named `splitEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `new2Old` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_MeshTopology_splitEdge(MR_MeshTopology *_this, MR_EdgeId e, MR_FaceBitSet *region, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *new2Old);

/// split given triangle on three triangles, introducing new vertex (which is returned) inside original triangle and connecting it to its vertices
/// \details if region is given, then it must include (f) and new faces will be added there as well
/// \param new2Old receive mapping from newly appeared triangle to its original triangle (part to full)
/// Generated from a method of class `MR::MeshTopology` named `splitFace`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `new2Old` defaults to a null pointer in C++.
MRC_API MR_VertId MR_MeshTopology_splitFace(MR_MeshTopology *_this, MR_FaceId f, MR_FaceBitSet *region, MR_phmap_flat_hash_map_MR_FaceId_MR_FaceId *new2Old);

/// flip orientation (normals) of
/// * all mesh elements if \param fullComponents is nullptr, or
/// * given mesh components in \param fullComponents.
/// The behavior is undefined if fullComponents is given but there are connected components with some edges included and not-included there.
/// Generated from a method of class `MR::MeshTopology` named `flipOrientation`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fullComponents` defaults to a null pointer in C++.
MRC_API void MR_MeshTopology_flipOrientation(MR_MeshTopology *_this, const MR_UndirectedEdgeBitSet *fullComponents);

/// appends mesh topology (from) in addition to the current topology: creates new edges, faces, verts;
/// \param rearrangeTriangles if true then the order of triangles is selected according to the order of their vertices,
/// please call rotateTriangles() first
/// Generated from a method of class `MR::MeshTopology` named `addPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `map` is a single object.
/// Parameter `map` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `rearrangeTriangles` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_MeshTopology_addPart_3(MR_MeshTopology *_this, const MR_MeshTopology *from, const MR_PartMapping *map, const bool *rearrangeTriangles);

/// Generated from a method of class `MR::MeshTopology` named `addPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `outFmap` defaults to a null pointer in C++.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
/// Parameter `rearrangeTriangles` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_MeshTopology_addPart_5(MR_MeshTopology *_this, const MR_MeshTopology *from, MR_FaceMap *outFmap, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap, const bool *rearrangeTriangles);

/// the same but copies only portion of (from) specified by fromFaces,
/// Generated from a method of class `MR::MeshTopology` named `addPartByMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `map` is a single object.
/// Parameter `map` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_MeshTopology_addPartByMask_3_const_MR_FaceBitSet_ptr(MR_MeshTopology *_this, const MR_MeshTopology *from, const MR_FaceBitSet *fromFaces, const MR_PartMapping *map);

/// Generated from a method of class `MR::MeshTopology` named `addPartByMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `fromFaces` can not be null. It is a single object.
/// Parameter `map` is a single object.
/// Parameter `map` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_MeshTopology_addPartByMask_3_MR_FaceBitSet(MR_MeshTopology *_this, const MR_MeshTopology *from, const MR_FaceBitSet *fromFaces, const MR_PartMapping *map);

/// this version has more parameters
/// \param flipOrientation if true then every from triangle is inverted before adding
/// \param thisContours contours on this mesh (no left face) that have to be stitched with
/// \param fromContours contours on from mesh during addition (no left face if flipOrientation otherwise no right face)
/// Generated from a method of class `MR::MeshTopology` named `addPartByMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `flipOrientation` has a default argument: `false`, pass a null pointer to use it.
/// Parameter `thisContours` is a single object.
/// Parameter `thisContours` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `fromContours` is a single object.
/// Parameter `fromContours` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `map` is a single object.
/// Parameter `map` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_MeshTopology_addPartByMask_6_const_MR_FaceBitSet_ptr(MR_MeshTopology *_this, const MR_MeshTopology *from, const MR_FaceBitSet *fromFaces, const bool *flipOrientation, const MR_std_vector_std_vector_MR_EdgeId *thisContours, const MR_std_vector_std_vector_MR_EdgeId *fromContours, const MR_PartMapping *map);

/// Generated from a method of class `MR::MeshTopology` named `addPartByMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `fromFaces` can not be null. It is a single object.
/// Parameter `flipOrientation` has a default argument: `false`, pass a null pointer to use it.
/// Parameter `thisContours` is a single object.
/// Parameter `thisContours` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `fromContours` is a single object.
/// Parameter `fromContours` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `map` is a single object.
/// Parameter `map` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_MeshTopology_addPartByMask_6_MR_FaceBitSet(MR_MeshTopology *_this, const MR_MeshTopology *from, const MR_FaceBitSet *fromFaces, const bool *flipOrientation, const MR_std_vector_std_vector_MR_EdgeId *thisContours, const MR_std_vector_std_vector_MR_EdgeId *fromContours, const MR_PartMapping *map);

/// for each triangle selects edgeWithLeft with minimal origin vertex
/// Generated from a method of class `MR::MeshTopology` named `rotateTriangles`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_rotateTriangles(MR_MeshTopology *_this);

/// tightly packs all arrays eliminating lone edges and invalid faces and vertices
/// \param outFmap,outVmap,outEmap if given returns mappings: old.id -> new.id;
/// \param rearrangeTriangles if true then calls rotateTriangles()
/// and selects the order of triangles according to the order of their vertices
/// Generated from a method of class `MR::MeshTopology` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `outFmap` defaults to a null pointer in C++.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
/// Parameter `rearrangeTriangles` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_MeshTopology_pack_4(MR_MeshTopology *_this, MR_FaceMap *outFmap, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap, const bool *rearrangeTriangles);

/// tightly packs all arrays eliminating lone edges and invalid faces and vertices;
/// reorder all faces, vertices and edges according to given maps, each containing old id -> new id mapping
/// Generated from a method of class `MR::MeshTopology` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
MRC_API void MR_MeshTopology_pack_1(MR_MeshTopology *_this, const MR_PackMapping *map);

/// tightly packs all arrays eliminating lone edges and invalid faces and vertices;
/// reorder all faces, vertices and edges according to given maps, each containing old id -> new id mapping;
/// unlike \ref pack method, this method allocates minimal amount of memory for its operation but works much slower
/// Generated from a method of class `MR::MeshTopology` named `packMinMem`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `map` can not be null. It is a single object.
MRC_API void MR_MeshTopology_packMinMem(MR_MeshTopology *_this, const MR_PackMapping *map);

/// saves in binary stream
/// Generated from a method of class `MR::MeshTopology` named `write`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `s` can not be null. It is a single object.
MRC_API void MR_MeshTopology_write(const MR_MeshTopology *_this, MR_std_ostream *s);

/// loads from binary stream
/// \return text of error if any
/// Generated from a method of class `MR::MeshTopology` named `read`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `s` can not be null. It is a single object.
/// Parameter `callback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshTopology_read(MR_MeshTopology *_this, MR_std_istream *s, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// compare that two topologies are exactly the same
/// Generated from a method of class `MR::MeshTopology` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_MeshTopology(const MR_MeshTopology *_this, const MR_MeshTopology *b);

/// These function are for parallel mesh creation from different threads. If you are not sure, do not use them.
/// \details resizes all internal vectors and sets the numbers of valid elements in preparation for addPackedPart;
/// edges are resized without initialization (so the user must initialize them using addPackedPart)
/// Generated from a method of class `MR::MeshTopology` named `resizeBeforeParallelAdd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_resizeBeforeParallelAdd(MR_MeshTopology *_this, MR_uint64_t edgeSize, MR_uint64_t vertSize, MR_uint64_t faceSize);

/// copies topology (from) into this;
/// \param from edges must be tightly packes without any lone edges, and they are mapped [0, from.edges.size()) -> [toEdgeId, toEdgeId + from.edges.size());
/// \param fmap,vmap mapping of vertices and faces if it is given ( from.id -> this.id )
/// Generated from a method of class `MR::MeshTopology` named `addPackedPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `fmap` can not be null. It is a single object.
/// Parameter `vmap` can not be null. It is a single object.
MRC_API void MR_MeshTopology_addPackedPart(MR_MeshTopology *_this, const MR_MeshTopology *from, MR_EdgeId toEdgeId, const MR_FaceMap *fmap, const MR_VertMap *vmap);

/// compute
/// 1) numValidVerts_ and validVerts_ from edgePerVertex_
/// 2) numValidFaces_ and validFaces_ from edgePerFace_
/// and activates their auto-update
/// Generated from a method of class `MR::MeshTopology` named `computeValidsFromEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_MeshTopology_computeValidsFromEdges(MR_MeshTopology *_this, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// stops updating validVerts(), validFaces(), numValidVerts(), numValidFaces() for parallel processing of mesh parts
/// Generated from a method of class `MR::MeshTopology` named `stopUpdatingValids`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshTopology_stopUpdatingValids(MR_MeshTopology *_this);

/// returns whether the methods validVerts(), validFaces(), numValidVerts(), numValidFaces() can be called
/// Generated from a method of class `MR::MeshTopology` named `updatingValids`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshTopology_updatingValids(const MR_MeshTopology *_this);

/// for incident vertices and faces of given edges, remember one of them as edgeWithOrg and edgeWithLeft;
/// this is important in parallel algorithms where other edges may change but stable ones will survive
/// Generated from a method of class `MR::MeshTopology` named `preferEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `stableEdges` can not be null. It is a single object.
MRC_API void MR_MeshTopology_preferEdges(MR_MeshTopology *_this, const MR_UndirectedEdgeBitSet *stableEdges);

// constructs triangular grid mesh topology in parallel
/// Generated from a method of class `MR::MeshTopology` named `buildGridMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_MeshTopology_buildGridMesh(MR_MeshTopology *_this, const MR_GridSettings *settings, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// verifies that all internal data structures are valid;
/// if allVerts=true then checks in addition that all not-lone edges have valid vertices on both ends
/// Generated from a method of class `MR::MeshTopology` named `checkValidity`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `allVerts` has a default argument: `true`, pass a null pointer to use it.
MRC_API bool MR_MeshTopology_checkValidity(const MR_MeshTopology *_this, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const bool *allVerts);

/// Generated from function `MR::loadMeshDll`.
MRC_API void MR_loadMeshDll(void);

#ifdef __cplusplus
} // extern "C"
#endif
