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

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_UndirectedEdgeScalars MR_UndirectedEdgeScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_optional_float MR_std_optional_float; // Defined in `#include <MRCMisc/std_optional_float.h>`.


/// Unlike the classic mesh that stores coordinates of its vertices, this class
/// stores the lengths of all edges. It can be used for construction of intrinsic Intrinsic Delaunay Triangulations.
/// Generated from class `MR::EdgeLengthMesh`.
typedef struct MR_EdgeLengthMesh MR_EdgeLengthMesh;

/// Returns a pointer to a member variable of class `MR::EdgeLengthMesh` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTopology *MR_EdgeLengthMesh_Get_topology(const MR_EdgeLengthMesh *_this);

/// Modifies a member variable of class `MR::EdgeLengthMesh` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgeLengthMesh_Set_topology(MR_EdgeLengthMesh *_this, MR_PassBy value_pass_by, MR_MeshTopology *value);

/// Returns a mutable pointer to a member variable of class `MR::EdgeLengthMesh` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTopology *MR_EdgeLengthMesh_GetMutable_topology(MR_EdgeLengthMesh *_this);

/// Returns a pointer to a member variable of class `MR::EdgeLengthMesh` named `edgeLengths`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeScalars *MR_EdgeLengthMesh_Get_edgeLengths(const MR_EdgeLengthMesh *_this);

/// Modifies a member variable of class `MR::EdgeLengthMesh` named `edgeLengths`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EdgeLengthMesh_Set_edgeLengths(MR_EdgeLengthMesh *_this, MR_PassBy value_pass_by, MR_UndirectedEdgeScalars *value);

/// Returns a mutable pointer to a member variable of class `MR::EdgeLengthMesh` named `edgeLengths`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeScalars *MR_EdgeLengthMesh_GetMutable_edgeLengths(MR_EdgeLengthMesh *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeLengthMesh_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeLengthMesh *MR_EdgeLengthMesh_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EdgeLengthMesh_DestroyArray()`.
/// Use `MR_EdgeLengthMesh_OffsetMutablePtr()` and `MR_EdgeLengthMesh_OffsetPtr()` to access the array elements.
MRC_API MR_EdgeLengthMesh *MR_EdgeLengthMesh_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::EdgeLengthMesh` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeLengthMesh_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeLengthMesh *MR_EdgeLengthMesh_ConstructFrom(MR_PassBy topology_pass_by, MR_MeshTopology *topology, MR_PassBy edgeLengths_pass_by, MR_UndirectedEdgeScalars *edgeLengths);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EdgeLengthMesh *MR_EdgeLengthMesh_OffsetPtr(const MR_EdgeLengthMesh *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EdgeLengthMesh *MR_EdgeLengthMesh_OffsetMutablePtr(MR_EdgeLengthMesh *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EdgeLengthMesh`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeLengthMesh_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeLengthMesh *MR_EdgeLengthMesh_ConstructFromAnother(MR_PassBy _other_pass_by, MR_EdgeLengthMesh *_other);

/// Destroys a heap-allocated instance of `MR_EdgeLengthMesh`. Does nothing if the pointer is null.
MRC_API void MR_EdgeLengthMesh_Destroy(const MR_EdgeLengthMesh *_this);

/// Destroys a heap-allocated array of `MR_EdgeLengthMesh`. Does nothing if the pointer is null.
MRC_API void MR_EdgeLengthMesh_DestroyArray(const MR_EdgeLengthMesh *_this);

/// Generated from a method of class `MR::EdgeLengthMesh` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeLengthMesh *MR_EdgeLengthMesh_AssignFromAnother(MR_EdgeLengthMesh *_this, MR_PassBy _other_pass_by, MR_EdgeLengthMesh *_other);

/// construct EdgeLengthMesh from an ordinary mesh
/// Generated from a method of class `MR::EdgeLengthMesh` named `fromMesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeLengthMesh_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeLengthMesh *MR_EdgeLengthMesh_fromMesh(const MR_Mesh *mesh);

/// computes cotangent of the angle in the left( e ) triangle opposite to e,
/// and returns 0 if left face does not exist
/// Generated from a method of class `MR::EdgeLengthMesh` named `leftCotan`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_EdgeLengthMesh_leftCotan(const MR_EdgeLengthMesh *_this, MR_EdgeId e);

/// computes sum of cotangents of the angle in the left and right triangles opposite to given edge,
/// consider cotangents zero for not existing triangles
/// Generated from a method of class `MR::EdgeLengthMesh` named `cotan`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_EdgeLengthMesh_cotan(const MR_EdgeLengthMesh *_this, MR_UndirectedEdgeId ue);

/// returns true if given edge satisfies Delaunay conditions,
/// returns false if the edge needs to be flipped to satisfy Delaunay conditions,
/// passing negative threshold makes more edges satisfy Delaunay conditions
/// Generated from a method of class `MR::EdgeLengthMesh` named `isDelone`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `threshold` has a default argument: `0`, pass a null pointer to use it.
MRC_API bool MR_EdgeLengthMesh_isDelone(const MR_EdgeLengthMesh *_this, MR_UndirectedEdgeId ue, const float *threshold);

/// given the edge with left and right triangular faces, which form together a quadrangle,
/// returns the length of geodesic line on original mesh between the vertices of the quadrangle opposite to given edge;
/// returns std::nullopt if the geodesic line does not go fully inside the quadrangle
/// Generated from a method of class `MR::EdgeLengthMesh` named `edgeLengthAfterFlip`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_float *MR_EdgeLengthMesh_edgeLengthAfterFlip(const MR_EdgeLengthMesh *_this, MR_EdgeId e);

/// given the edge with left and right triangular faces, which form together a quadrangle,
/// rotates the edge counter-clockwise inside the quadrangle;
/// the length of e becomes equal to the length of geodesic line between its new ends on original mesh;
/// does not flip and returns false if the geodesic line does not go fully inside the quadrangle
/// Generated from a method of class `MR::EdgeLengthMesh` named `flipEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_EdgeLengthMesh_flipEdge(MR_EdgeLengthMesh *_this, MR_EdgeId e);

#ifdef __cplusplus
} // extern "C"
#endif
