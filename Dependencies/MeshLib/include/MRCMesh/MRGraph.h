// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_GraphEdgeBitSet MR_GraphEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_GraphVertBitSet MR_GraphVertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Vector_MR_Graph_EndVertices_MR_GraphEdgeId MR_Vector_MR_Graph_EndVertices_MR_GraphEdgeId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_std_vector_MR_GraphEdgeId_MR_GraphVertId MR_Vector_std_vector_MR_GraphEdgeId_MR_GraphVertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_void_from_MR_GraphEdgeId_MR_GraphEdgeId MR_std_function_void_from_MR_GraphEdgeId_MR_GraphEdgeId; // Defined in `#include <MRCMisc/std_function_void_from_MR_GraphEdgeId_MR_GraphEdgeId.h>`.
typedef struct MR_std_vector_MR_GraphEdgeId MR_std_vector_MR_GraphEdgeId; // Defined in `#include <MRCMisc/std_vector_MR_GraphEdgeId.h>`.


/// mathematical graph consisting from vertices and undirected edges
/// Generated from class `MR::Graph`.
typedef struct MR_Graph MR_Graph;

/// Generated from class `MR::Graph::EndVertices`.
typedef struct MR_Graph_EndVertices MR_Graph_EndVertices;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Graph_Destroy()` to free it when you're done using it.
MRC_API MR_Graph *MR_Graph_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Graph_DestroyArray()`.
/// Use `MR_Graph_OffsetMutablePtr()` and `MR_Graph_OffsetPtr()` to access the array elements.
MRC_API MR_Graph *MR_Graph_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Graph *MR_Graph_OffsetPtr(const MR_Graph *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Graph *MR_Graph_OffsetMutablePtr(MR_Graph *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Graph`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Graph_Destroy()` to free it when you're done using it.
MRC_API MR_Graph *MR_Graph_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Graph *_other);

/// Destroys a heap-allocated instance of `MR_Graph`. Does nothing if the pointer is null.
MRC_API void MR_Graph_Destroy(const MR_Graph *_this);

/// Destroys a heap-allocated array of `MR_Graph`. Does nothing if the pointer is null.
MRC_API void MR_Graph_DestroyArray(const MR_Graph *_this);

/// Generated from a method of class `MR::Graph` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Graph *MR_Graph_AssignFromAnother(MR_Graph *_this, MR_PassBy _other_pass_by, MR_Graph *_other);

/// constructs the graph from all valid vertices and edges
/// Generated from a method of class `MR::Graph` named `construct`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Graph_construct(MR_Graph *_this, MR_PassBy neighboursPerVertex_pass_by, MR_Vector_std_vector_MR_GraphEdgeId_MR_GraphVertId *neighboursPerVertex, MR_PassBy endsPerEdge_pass_by, MR_Vector_MR_Graph_EndVertices_MR_GraphEdgeId *endsPerEdge);

/// returns the number of vertex records, including invalid ones
/// Generated from a method of class `MR::Graph` named `vertSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Graph_vertSize(const MR_Graph *_this);

/// returns all valid vertices in the graph
/// Generated from a method of class `MR::Graph` named `validVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphVertBitSet *MR_Graph_validVerts(const MR_Graph *_this);

/// returns true if given vertex is valid
/// Generated from a method of class `MR::Graph` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Graph_valid_MR_GraphVertId(const MR_Graph *_this, MR_GraphVertId v);

/// returns the number of edge records, including invalid ones
/// Generated from a method of class `MR::Graph` named `edgeSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Graph_edgeSize(const MR_Graph *_this);

/// returns all valid edges in the graph
/// Generated from a method of class `MR::Graph` named `validEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphEdgeBitSet *MR_Graph_validEdges(const MR_Graph *_this);

/// returns true if given edge is valid
/// Generated from a method of class `MR::Graph` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Graph_valid_MR_GraphEdgeId(const MR_Graph *_this, MR_GraphEdgeId e);

/// returns all edges adjacent to given vertex
/// Generated from a method of class `MR::Graph` named `neighbours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_GraphEdgeId *MR_Graph_neighbours(const MR_Graph *_this, MR_GraphVertId v);

/// returns the ends of given edge
/// Generated from a method of class `MR::Graph` named `ends`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Graph_EndVertices *MR_Graph_ends(const MR_Graph *_this, MR_GraphEdgeId e);

/// finds and returns edge between vertices a and b; returns invalid edge otherwise
/// Generated from a method of class `MR::Graph` named `findEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphEdgeId MR_Graph_findEdge(const MR_Graph *_this, MR_GraphVertId a, MR_GraphVertId b);

/// returns true if the vertices a and b are neighbors
/// Generated from a method of class `MR::Graph` named `areNeighbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Graph_areNeighbors(const MR_Graph *_this, MR_GraphVertId a, MR_GraphVertId b);

/// unites two vertices into one (deleting the second one),
/// which leads to deletion and merge of some edges, for which callback is called
/// Generated from a method of class `MR::Graph` named `merge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Graph_merge(MR_Graph *_this, MR_GraphVertId remnant, MR_GraphVertId dead, MR_PassBy onMergeEdges_pass_by, MR_std_function_void_from_MR_GraphEdgeId_MR_GraphEdgeId *onMergeEdges);

/// verifies that all internal data structures are valid
/// Generated from a method of class `MR::Graph` named `checkValidity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Graph_checkValidity(const MR_Graph *_this);

// v0 < v1
/// Returns a pointer to a member variable of class `MR::Graph::EndVertices` named `v0`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphVertId *MR_Graph_EndVertices_Get_v0(const MR_Graph_EndVertices *_this);

// v0 < v1
/// Modifies a member variable of class `MR::Graph::EndVertices` named `v0`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Graph_EndVertices_Set_v0(MR_Graph_EndVertices *_this, MR_GraphVertId value);

// v0 < v1
/// Returns a mutable pointer to a member variable of class `MR::Graph::EndVertices` named `v0`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_Graph_EndVertices_GetMutable_v0(MR_Graph_EndVertices *_this);

// v0 < v1
/// Returns a pointer to a member variable of class `MR::Graph::EndVertices` named `v1`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphVertId *MR_Graph_EndVertices_Get_v1(const MR_Graph_EndVertices *_this);

// v0 < v1
/// Modifies a member variable of class `MR::Graph::EndVertices` named `v1`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Graph_EndVertices_Set_v1(MR_Graph_EndVertices *_this, MR_GraphVertId value);

// v0 < v1
/// Returns a mutable pointer to a member variable of class `MR::Graph::EndVertices` named `v1`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_Graph_EndVertices_GetMutable_v1(MR_Graph_EndVertices *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Graph_EndVertices_Destroy()` to free it when you're done using it.
MRC_API MR_Graph_EndVertices *MR_Graph_EndVertices_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Graph_EndVertices_DestroyArray()`.
/// Use `MR_Graph_EndVertices_OffsetMutablePtr()` and `MR_Graph_EndVertices_OffsetPtr()` to access the array elements.
MRC_API MR_Graph_EndVertices *MR_Graph_EndVertices_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Graph::EndVertices` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Graph_EndVertices_Destroy()` to free it when you're done using it.
MRC_API MR_Graph_EndVertices *MR_Graph_EndVertices_ConstructFrom(MR_GraphVertId v0, MR_GraphVertId v1);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Graph_EndVertices *MR_Graph_EndVertices_OffsetPtr(const MR_Graph_EndVertices *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Graph_EndVertices *MR_Graph_EndVertices_OffsetMutablePtr(MR_Graph_EndVertices *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Graph::EndVertices`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Graph_EndVertices_Destroy()` to free it when you're done using it.
MRC_API MR_Graph_EndVertices *MR_Graph_EndVertices_ConstructFromAnother(const MR_Graph_EndVertices *_other);

/// Destroys a heap-allocated instance of `MR_Graph_EndVertices`. Does nothing if the pointer is null.
MRC_API void MR_Graph_EndVertices_Destroy(const MR_Graph_EndVertices *_this);

/// Destroys a heap-allocated array of `MR_Graph_EndVertices`. Does nothing if the pointer is null.
MRC_API void MR_Graph_EndVertices_DestroyArray(const MR_Graph_EndVertices *_this);

/// Generated from a method of class `MR::Graph::EndVertices` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Graph_EndVertices *MR_Graph_EndVertices_AssignFromAnother(MR_Graph_EndVertices *_this, const MR_Graph_EndVertices *_other);

/// Generated from a method of class `MR::Graph::EndVertices` named `otherEnd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_GraphVertId MR_Graph_EndVertices_otherEnd(const MR_Graph_EndVertices *_this, MR_GraphVertId a);

/// Generated from a method of class `MR::Graph::EndVertices` named `replaceEnd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Graph_EndVertices_replaceEnd(MR_Graph_EndVertices *_this, MR_GraphVertId what, MR_GraphVertId with);

#ifdef __cplusplus
} // extern "C"
#endif
