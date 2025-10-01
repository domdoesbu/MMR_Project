// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeMap MR_EdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Edges MR_Edges; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_EdgeId_MR_VertId MR_Vector_MR_EdgeId_MR_VertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_VertId_MR_EdgeId MR_Vector_MR_VertId_MR_EdgeId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_WholeEdgeMap MR_WholeEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_VertId MR_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_MR_VertId.h>`.


/// topology of one or several polylines (how line segments are connected in lines) common for 2D and 3D polylines
/// Generated from class `MR::PolylineTopology`.
typedef struct MR_PolylineTopology MR_PolylineTopology;

/// simplifies construction of connected polyline in the topology
/// Generated from class `MR::PolylineMaker`.
typedef struct MR_PolylineMaker MR_PolylineMaker;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineTopology_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineTopology *MR_PolylineTopology_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PolylineTopology_DestroyArray()`.
/// Use `MR_PolylineTopology_OffsetMutablePtr()` and `MR_PolylineTopology_OffsetPtr()` to access the array elements.
MRC_API MR_PolylineTopology *MR_PolylineTopology_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineTopology *MR_PolylineTopology_OffsetPtr(const MR_PolylineTopology *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineTopology *MR_PolylineTopology_OffsetMutablePtr(MR_PolylineTopology *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineTopology`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineTopology_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineTopology *MR_PolylineTopology_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PolylineTopology *_other);

/// Destroys a heap-allocated instance of `MR_PolylineTopology`. Does nothing if the pointer is null.
MRC_API void MR_PolylineTopology_Destroy(const MR_PolylineTopology *_this);

/// Destroys a heap-allocated array of `MR_PolylineTopology`. Does nothing if the pointer is null.
MRC_API void MR_PolylineTopology_DestroyArray(const MR_PolylineTopology *_this);

/// Generated from a method of class `MR::PolylineTopology` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineTopology *MR_PolylineTopology_AssignFromAnother(MR_PolylineTopology *_this, MR_PassBy _other_pass_by, MR_PolylineTopology *_other);

/// build topology of comp2firstVert.size()-1 not-closed polylines
/// each pair (a,b) of indices in \param comp2firstVert defines vertex range of a polyline [a,b)
/// Generated from a method of class `MR::PolylineTopology` named `buildOpenLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `comp2firstVert` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_buildOpenLines(MR_PolylineTopology *_this, const MR_std_vector_MR_VertId *comp2firstVert);

/// creates an edge not associated with any vertex
/// Generated from a method of class `MR::PolylineTopology` named `makeEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_PolylineTopology_makeEdge_0(MR_PolylineTopology *_this);

/// makes an edge connecting vertices a and b
/// \param e if valid then the function does not make new edge, but connects the vertices using given one (and returns it)
/// \details if
///   1) any of the vertices is invalid or not within the vertSize(),
///   2) or a==b,
///   3) or either a or b already has 2 incident edges,
///   4) given edge e is not lone or not within the edgeSize()
/// then makeEdge(a,b) does nothing and returns invalid edge
/// Generated from a method of class `MR::PolylineTopology` named `makeEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `e` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_EdgeId MR_PolylineTopology_makeEdge_3(MR_PolylineTopology *_this, MR_VertId a, MR_VertId b, const MR_EdgeId *e);

/// for every given edge[ue] calls makeEdge( edge[ue][0], edge[ue][1], ue ), making new edges so that edges.size() <= undirectedEdgeSize() at the end
/// \return the total number of edges created
/// Generated from a method of class `MR::PolylineTopology` named `makeEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
MRC_API int32_t MR_PolylineTopology_makeEdges(MR_PolylineTopology *_this, const MR_Edges *edges);

/// checks whether the edge is disconnected from all other edges and disassociated from all vertices (as if after makeEdge)
/// Generated from a method of class `MR::PolylineTopology` named `isLoneEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineTopology_isLoneEdge(const MR_PolylineTopology *_this, MR_EdgeId a);

/// returns last not lone undirected edge id, or invalid id if no such edge exists
/// Generated from a method of class `MR::PolylineTopology` named `lastNotLoneUndirectedEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_UndirectedEdgeId MR_PolylineTopology_lastNotLoneUndirectedEdge(const MR_PolylineTopology *_this);

/// returns last not lone edge id, or invalid id if no such edge exists
/// Generated from a method of class `MR::PolylineTopology` named `lastNotLoneEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_PolylineTopology_lastNotLoneEdge(const MR_PolylineTopology *_this);

/// returns the number of half-edge records including lone ones
/// Generated from a method of class `MR::PolylineTopology` named `edgeSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PolylineTopology_edgeSize(const MR_PolylineTopology *_this);

/// returns the number of allocated edge records
/// Generated from a method of class `MR::PolylineTopology` named `edgeCapacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PolylineTopology_edgeCapacity(const MR_PolylineTopology *_this);

/// returns the number of undirected edges (pairs of half-edges) including lone ones
/// Generated from a method of class `MR::PolylineTopology` named `undirectedEdgeSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PolylineTopology_undirectedEdgeSize(const MR_PolylineTopology *_this);

/// returns the number of allocated undirected edges (pairs of half-edges)
/// Generated from a method of class `MR::PolylineTopology` named `undirectedEdgeCapacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PolylineTopology_undirectedEdgeCapacity(const MR_PolylineTopology *_this);

/// computes the number of not-lone (valid) undirected edges
/// Generated from a method of class `MR::PolylineTopology` named `computeNotLoneUndirectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PolylineTopology_computeNotLoneUndirectedEdges(const MR_PolylineTopology *_this);

/// sets the capacity of half-edges vector
/// Generated from a method of class `MR::PolylineTopology` named `edgeReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_edgeReserve(MR_PolylineTopology *_this, MR_uint64_t newCapacity);

/// returns true if given edge is within valid range and not-lone
/// Generated from a method of class `MR::PolylineTopology` named `hasEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineTopology_hasEdge(const MR_PolylineTopology *_this, MR_EdgeId e);

/// given edge becomes lone after the call, so it is un-spliced from connected edges, and if it was not connected at origin or destination, then that vertex is deleted as well
/// Generated from a method of class `MR::PolylineTopology` named `deleteEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_deleteEdge(MR_PolylineTopology *_this, MR_UndirectedEdgeId ue);

/// calls deleteEdge for every set bit
/// Generated from a method of class `MR::PolylineTopology` named `deleteEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `es` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_deleteEdges(MR_PolylineTopology *_this, const MR_UndirectedEdgeBitSet *es);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::PolylineTopology` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PolylineTopology_heapBytes(const MR_PolylineTopology *_this);

/// given two half edges do either of two: \n
/// 1) if a and b were from distinct rings, puts them in one ring; \n
/// 2) if a and b were from the same ring, puts them in separate rings;
/// \details the cut in rings in both cases is made after a and b
/// Generated from a method of class `MR::PolylineTopology` named `splice`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_splice(MR_PolylineTopology *_this, MR_EdgeId a, MR_EdgeId b);

/// next (counter clock wise) half-edge in the origin ring
/// Generated from a method of class `MR::PolylineTopology` named `next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_PolylineTopology_next(const MR_PolylineTopology *_this, MR_EdgeId he);

/// returns origin vertex of half-edge
/// Generated from a method of class `MR::PolylineTopology` named `org`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_PolylineTopology_org(const MR_PolylineTopology *_this, MR_EdgeId he);

/// returns destination vertex of half-edge
/// Generated from a method of class `MR::PolylineTopology` named `dest`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_PolylineTopology_dest(const MR_PolylineTopology *_this, MR_EdgeId he);

/// sets new origin to the full origin ring including this edge
/// \details edgePerVertex_ table is updated accordingly
/// Generated from a method of class `MR::PolylineTopology` named `setOrg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_setOrg(MR_PolylineTopology *_this, MR_EdgeId a, MR_VertId v);

/// for all valid vertices this vector contains an edge with the origin there
/// Generated from a method of class `MR::PolylineTopology` named `edgePerVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_EdgeId_MR_VertId *MR_PolylineTopology_edgePerVertex(const MR_PolylineTopology *_this);

/// for all edges this vector contains its origin
/// Generated from a method of class `MR::PolylineTopology` named `getOrgs`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Vector_MR_VertId_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_Vector_MR_VertId_MR_EdgeId *MR_PolylineTopology_getOrgs(const MR_PolylineTopology *_this);

/// returns valid edge if given vertex is present in the mesh
/// Generated from a method of class `MR::PolylineTopology` named `edgeWithOrg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_PolylineTopology_edgeWithOrg(const MR_PolylineTopology *_this, MR_VertId a);

/// returns true if given vertex is present in the mesh
/// Generated from a method of class `MR::PolylineTopology` named `hasVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineTopology_hasVert(const MR_PolylineTopology *_this, MR_VertId a);

/// returns 0 if given vertex does not exist, 1 if it has one incident edge, and 2 if it has two incident edges
/// Generated from a method of class `MR::PolylineTopology` named `getVertDegree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_PolylineTopology_getVertDegree(const MR_PolylineTopology *_this, MR_VertId a);

/// returns the number of valid vertices
/// Generated from a method of class `MR::PolylineTopology` named `numValidVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_PolylineTopology_numValidVerts(const MR_PolylineTopology *_this);

/// returns last valid vertex id, or invalid id if no single valid vertex exists
/// Generated from a method of class `MR::PolylineTopology` named `lastValidVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_PolylineTopology_lastValidVert(const MR_PolylineTopology *_this);

/// creates new vert-id not associated with any edge yet
/// Generated from a method of class `MR::PolylineTopology` named `addVertId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_VertId MR_PolylineTopology_addVertId(MR_PolylineTopology *_this);

/// explicitly increases the size of vertices vector
/// Generated from a method of class `MR::PolylineTopology` named `vertResize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_vertResize(MR_PolylineTopology *_this, MR_uint64_t newSize);

/// explicitly increases the size of vertices vector, doubling the current capacity if it was not enough
/// Generated from a method of class `MR::PolylineTopology` named `vertResizeWithReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_vertResizeWithReserve(MR_PolylineTopology *_this, MR_uint64_t newSize);

/// sets the capacity of vertices vector
/// Generated from a method of class `MR::PolylineTopology` named `vertReserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_vertReserve(MR_PolylineTopology *_this, MR_uint64_t newCapacity);

/// returns the number of vertex records including invalid ones
/// Generated from a method of class `MR::PolylineTopology` named `vertSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PolylineTopology_vertSize(const MR_PolylineTopology *_this);

/// returns the number of allocated vert records
/// Generated from a method of class `MR::PolylineTopology` named `vertCapacity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_PolylineTopology_vertCapacity(const MR_PolylineTopology *_this);

/// returns cached set of all valid vertices
/// Generated from a method of class `MR::PolylineTopology` named `getValidVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_PolylineTopology_getValidVerts(const MR_PolylineTopology *_this);

/// if region pointer is not null then converts it in reference, otherwise returns all valid vertices in the mesh
/// Generated from a method of class `MR::PolylineTopology` named `getVertIds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_PolylineTopology_getVertIds(const MR_PolylineTopology *_this, const MR_VertBitSet *region);

/// finds and returns edge from o to d in the mesh; returns invalid edge otherwise
/// Generated from a method of class `MR::PolylineTopology` named `findEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_PolylineTopology_findEdge(const MR_PolylineTopology *_this, MR_VertId o, MR_VertId d);

/// returns all vertices incident to path edges
/// Generated from a method of class `MR::PolylineTopology` named `getPathVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `path` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_PolylineTopology_getPathVertices(const MR_PolylineTopology *_this, const MR_std_vector_MR_EdgeId *path);

/// split given edge on two parts:
/// dest(returned-edge) = org(e) - newly created vertex,
/// org(returned-edge) = org(e-before-split),
/// dest(e) = dest(e-before-split)
/// Generated from a method of class `MR::PolylineTopology` named `splitEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_PolylineTopology_splitEdge(MR_PolylineTopology *_this, MR_EdgeId e);

/// adds polyline in this topology passing progressively via vertices *[vs, vs+num);
/// if vs[0] == vs[num-1] then a closed polyline is created;
/// return the edge from first to second vertex
/// Generated from a method of class `MR::PolylineTopology` named `makePolyline`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_PolylineTopology_makePolyline(MR_PolylineTopology *_this, const MR_VertId *vs, MR_uint64_t num);

/// appends polyline topology (from) in addition to the current topology: creates new edges, verts;
/// \param outVmap,outEmap (optionally) returns mappings: from.id -> this.id
/// Generated from a method of class `MR::PolylineTopology` named `addPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
MRC_API void MR_PolylineTopology_addPart(MR_PolylineTopology *_this, const MR_PolylineTopology *from, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap);

/// appends polyline topology (from) in addition to the current topology: creates new edges, verts;
/// Generated from a method of class `MR::PolylineTopology` named `addPartByMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `from` can not be null. It is a single object.
/// Parameter `mask` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
MRC_API void MR_PolylineTopology_addPartByMask(MR_PolylineTopology *_this, const MR_PolylineTopology *from, const MR_UndirectedEdgeBitSet *mask, MR_VertMap *outVmap, MR_EdgeMap *outEmap);

/// tightly packs all arrays eliminating lone edges and invalid vertices
/// \param outVmap,outEmap if given returns mappings: old.id -> new.id;
/// Generated from a method of class `MR::PolylineTopology` named `pack`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `outVmap` defaults to a null pointer in C++.
/// Parameter `outEmap` defaults to a null pointer in C++.
MRC_API void MR_PolylineTopology_pack(MR_PolylineTopology *_this, MR_VertMap *outVmap, MR_WholeEdgeMap *outEmap);

/// saves this in binary stream
/// Generated from a method of class `MR::PolylineTopology` named `write`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `s` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_write(const MR_PolylineTopology *_this, MR_std_ostream *s);

/// loads this from binary stream
/// Generated from a method of class `MR::PolylineTopology` named `read`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `s` can not be null. It is a single object.
MRC_API bool MR_PolylineTopology_read(MR_PolylineTopology *_this, MR_std_istream *s);

/// comparison via edges (all other members are considered as not important caches)
/// Generated from a method of class `MR::PolylineTopology` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_PolylineTopology(const MR_PolylineTopology *_this, const MR_PolylineTopology *b);

/// Generated from a method of class `MR::PolylineTopology` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_PolylineTopology(const MR_PolylineTopology *_this, const MR_PolylineTopology *b);

/// returns true if for each edge e: e == e.next() || e.odd() == next( e ).sym().odd()
/// Generated from a method of class `MR::PolylineTopology` named `isConsistentlyOriented`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineTopology_isConsistentlyOriented(const MR_PolylineTopology *_this);

/// changes the orientation of all edges: every edge e is replaced with e.sym()
/// Generated from a method of class `MR::PolylineTopology` named `flip`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_flip(MR_PolylineTopology *_this);

/// verifies that all internal data structures are valid
/// Generated from a method of class `MR::PolylineTopology` named `checkValidity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineTopology_checkValidity(const MR_PolylineTopology *_this);

/// computes numValidVerts_ and validVerts_ from edgePerVertex_
/// Generated from a method of class `MR::PolylineTopology` named `computeValidsFromEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineTopology_computeValidsFromEdges(MR_PolylineTopology *_this);

/// returns true if the polyline does not have any holes
/// Generated from a method of class `MR::PolylineTopology` named `isClosed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PolylineTopology_isClosed(const MR_PolylineTopology *_this);

/// Returns a pointer to a member variable of class `MR::PolylineMaker` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineTopology *MR_PolylineMaker_Get_topology(const MR_PolylineMaker *_this);

/// Generated from a constructor of class `MR::PolylineMaker`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineMaker_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineMaker *MR_PolylineMaker_ConstructFromAnother(const MR_PolylineMaker *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PolylineMaker *MR_PolylineMaker_OffsetPtr(const MR_PolylineMaker *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PolylineMaker *MR_PolylineMaker_OffsetMutablePtr(MR_PolylineMaker *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PolylineMaker`.
/// Parameter `t` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineMaker_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineMaker *MR_PolylineMaker_Construct(MR_PolylineTopology *t);

/// Destroys a heap-allocated instance of `MR_PolylineMaker`. Does nothing if the pointer is null.
MRC_API void MR_PolylineMaker_Destroy(const MR_PolylineMaker *_this);

/// Destroys a heap-allocated array of `MR_PolylineMaker`. Does nothing if the pointer is null.
MRC_API void MR_PolylineMaker_DestroyArray(const MR_PolylineMaker *_this);

/// creates first edge of polyline
/// \param v first vertex of the polyline
/// Generated from a method of class `MR::PolylineMaker` named `start`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_PolylineMaker_start(MR_PolylineMaker *_this, MR_VertId v);

/// makes next edge of polyline
/// \param v next vertex of the polyline
/// Generated from a method of class `MR::PolylineMaker` named `proceed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_EdgeId MR_PolylineMaker_proceed(MR_PolylineMaker *_this, MR_VertId v);

/// closes the polyline
/// Generated from a method of class `MR::PolylineMaker` named `close`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineMaker_close(MR_PolylineMaker *_this);

/// finishes the polyline adding final vertex in it
/// Generated from a method of class `MR::PolylineMaker` named `finishOpen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PolylineMaker_finishOpen(MR_PolylineMaker *_this, MR_VertId v);

#ifdef __cplusplus
} // extern "C"
#endif
