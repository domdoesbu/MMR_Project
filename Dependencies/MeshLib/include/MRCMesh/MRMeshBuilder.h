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

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshBuilder_BuildSettings MR_MeshBuilder_BuildSettings; // Defined in `#include <MRCMesh/MRMeshBuilderTypes.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_Triangulation MR_Triangulation; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_MeshBuilder_VertSpan_MR_FaceId MR_Vector_MR_MeshBuilder_VertSpan_MR_FaceId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_vector_MR_MeshBuilder_MeshPiece MR_std_vector_MR_MeshBuilder_MeshPiece; // Defined in `#include <MRCMisc/std_vector_MR_MeshBuilder_MeshPiece.h>`.
typedef struct MR_std_vector_MR_MeshBuilder_VertDuplication MR_std_vector_MR_MeshBuilder_VertDuplication; // Defined in `#include <MRCMisc/std_vector_MR_MeshBuilder_VertDuplication.h>`.
typedef struct MR_std_vector_MR_VertId MR_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_MR_VertId.h>`.
typedef struct MR_std_vector_std_array_MR_Vector3f_3 MR_std_vector_std_array_MR_Vector3f_3; // Defined in `#include <MRCMisc/std_vector_std_array_MR_Vector3f_3.h>`.


/// Generated from class `MR::MeshBuilder::VertDuplication`.
typedef struct MR_MeshBuilder_VertDuplication MR_MeshBuilder_VertDuplication;

// a part of a whole mesh to be constructed
/// Generated from class `MR::MeshBuilder::MeshPiece`.
typedef struct MR_MeshBuilder_MeshPiece MR_MeshBuilder_MeshPiece;

/// Generated from class `MR::MeshBuilder::UniteCloseParams`.
typedef struct MR_MeshBuilder_UniteCloseParams MR_MeshBuilder_UniteCloseParams;

/// construct mesh topology from a set of triangles with given ids;
/// if skippedTris is given then it receives all input triangles not added in the resulting topology
/// Generated from function `MR::MeshBuilder::fromTriangles`.
/// Parameter `t` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `progressCb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopology_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopology *MR_MeshBuilder_fromTriangles(const MR_Triangulation *t, const MR_MeshBuilder_BuildSettings *settings, MR_PassBy progressCb_pass_by, MR_std_function_bool_from_float *progressCb);

// original vertex before duplication
/// Returns a pointer to a member variable of class `MR::MeshBuilder::VertDuplication` named `srcVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_MeshBuilder_VertDuplication_Get_srcVert(const MR_MeshBuilder_VertDuplication *_this);

// original vertex before duplication
/// Modifies a member variable of class `MR::MeshBuilder::VertDuplication` named `srcVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_VertDuplication_Set_srcVert(MR_MeshBuilder_VertDuplication *_this, MR_VertId value);

// original vertex before duplication
/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::VertDuplication` named `srcVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_MeshBuilder_VertDuplication_GetMutable_srcVert(MR_MeshBuilder_VertDuplication *_this);

// new vertex after duplication
/// Returns a pointer to a member variable of class `MR::MeshBuilder::VertDuplication` named `dupVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_MeshBuilder_VertDuplication_Get_dupVert(const MR_MeshBuilder_VertDuplication *_this);

// new vertex after duplication
/// Modifies a member variable of class `MR::MeshBuilder::VertDuplication` named `dupVert`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_VertDuplication_Set_dupVert(MR_MeshBuilder_VertDuplication *_this, MR_VertId value);

// new vertex after duplication
/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::VertDuplication` named `dupVert`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_MeshBuilder_VertDuplication_GetMutable_dupVert(MR_MeshBuilder_VertDuplication *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_VertDuplication_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_VertDuplication *MR_MeshBuilder_VertDuplication_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshBuilder_VertDuplication_DestroyArray()`.
/// Use `MR_MeshBuilder_VertDuplication_OffsetMutablePtr()` and `MR_MeshBuilder_VertDuplication_OffsetPtr()` to access the array elements.
MRC_API MR_MeshBuilder_VertDuplication *MR_MeshBuilder_VertDuplication_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshBuilder::VertDuplication` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_VertDuplication_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_VertDuplication *MR_MeshBuilder_VertDuplication_ConstructFrom(MR_VertId srcVert, MR_VertId dupVert);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshBuilder_VertDuplication *MR_MeshBuilder_VertDuplication_OffsetPtr(const MR_MeshBuilder_VertDuplication *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshBuilder_VertDuplication *MR_MeshBuilder_VertDuplication_OffsetMutablePtr(MR_MeshBuilder_VertDuplication *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshBuilder::VertDuplication`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_VertDuplication_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_VertDuplication *MR_MeshBuilder_VertDuplication_ConstructFromAnother(const MR_MeshBuilder_VertDuplication *_other);

/// Destroys a heap-allocated instance of `MR_MeshBuilder_VertDuplication`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_VertDuplication_Destroy(const MR_MeshBuilder_VertDuplication *_this);

/// Destroys a heap-allocated array of `MR_MeshBuilder_VertDuplication`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_VertDuplication_DestroyArray(const MR_MeshBuilder_VertDuplication *_this);

/// Generated from a method of class `MR::MeshBuilder::VertDuplication` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_VertDuplication *MR_MeshBuilder_VertDuplication_AssignFromAnother(MR_MeshBuilder_VertDuplication *_this, const MR_MeshBuilder_VertDuplication *_other);

// resolve non-manifold vertices by creating duplicate vertices in the triangulation (which is modified)
// `lastValidVert` is needed if `region` or `t` does not contain full mesh, then first duplicated vertex will have `lastValidVert+1` index
// return number of duplicated vertices
/// Generated from function `MR::MeshBuilder::duplicateNonManifoldVertices`.
/// Parameter `t` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `dups` defaults to a null pointer in C++.
/// Parameter `lastValidVert` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_uint64_t MR_MeshBuilder_duplicateNonManifoldVertices(MR_Triangulation *t, MR_FaceBitSet *region, MR_std_vector_MR_MeshBuilder_VertDuplication *dups, const MR_VertId *lastValidVert);

// construct mesh topology from a set of triangles with given ids;
// unlike simple fromTriangles() it tries to resolve non-manifold vertices by creating duplicate vertices;
// triangulation is modified to introduce duplicates
/// Generated from function `MR::MeshBuilder::fromTrianglesDuplicatingNonManifoldVertices`.
/// Parameter `t` can not be null. It is a single object.
/// Parameter `dups` defaults to a null pointer in C++.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopology_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopology *MR_MeshBuilder_fromTrianglesDuplicatingNonManifoldVertices(MR_Triangulation *t, MR_std_vector_MR_MeshBuilder_VertDuplication *dups, const MR_MeshBuilder_BuildSettings *settings);

// construct mesh from point triples;
// all coinciding points are given the same VertId in the result
/// Generated from function `MR::MeshBuilder::fromPointTriples`.
/// Parameter `posTriples` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_MeshBuilder_fromPointTriples(const MR_std_vector_std_array_MR_Vector3f_3 *posTriples);

// face of part -> face of whole mesh
/// Returns a pointer to a member variable of class `MR::MeshBuilder::MeshPiece` named `fmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceMap *MR_MeshBuilder_MeshPiece_Get_fmap(const MR_MeshBuilder_MeshPiece *_this);

// face of part -> face of whole mesh
/// Modifies a member variable of class `MR::MeshBuilder::MeshPiece` named `fmap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_MeshPiece_Set_fmap(MR_MeshBuilder_MeshPiece *_this, MR_PassBy value_pass_by, MR_FaceMap *value);

// face of part -> face of whole mesh
/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::MeshPiece` named `fmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceMap *MR_MeshBuilder_MeshPiece_GetMutable_fmap(MR_MeshBuilder_MeshPiece *_this);

// vert of part -> vert of whole mesh
/// Returns a pointer to a member variable of class `MR::MeshBuilder::MeshPiece` named `vmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertMap *MR_MeshBuilder_MeshPiece_Get_vmap(const MR_MeshBuilder_MeshPiece *_this);

// vert of part -> vert of whole mesh
/// Modifies a member variable of class `MR::MeshBuilder::MeshPiece` named `vmap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_MeshPiece_Set_vmap(MR_MeshBuilder_MeshPiece *_this, MR_PassBy value_pass_by, MR_VertMap *value);

// vert of part -> vert of whole mesh
/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::MeshPiece` named `vmap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *MR_MeshBuilder_MeshPiece_GetMutable_vmap(MR_MeshBuilder_MeshPiece *_this);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::MeshPiece` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTopology *MR_MeshBuilder_MeshPiece_Get_topology(const MR_MeshBuilder_MeshPiece *_this);

/// Modifies a member variable of class `MR::MeshBuilder::MeshPiece` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_MeshPiece_Set_topology(MR_MeshBuilder_MeshPiece *_this, MR_PassBy value_pass_by, MR_MeshTopology *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::MeshPiece` named `topology`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTopology *MR_MeshBuilder_MeshPiece_GetMutable_topology(MR_MeshBuilder_MeshPiece *_this);

// remaining triangles of part, not in topology
/// Returns a pointer to a member variable of class `MR::MeshBuilder::MeshPiece` named `rem`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_MeshBuilder_MeshPiece_Get_rem(const MR_MeshBuilder_MeshPiece *_this);

// remaining triangles of part, not in topology
/// Modifies a member variable of class `MR::MeshBuilder::MeshPiece` named `rem`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_MeshPiece_Set_rem(MR_MeshBuilder_MeshPiece *_this, MR_PassBy value_pass_by, MR_FaceBitSet *value);

// remaining triangles of part, not in topology
/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::MeshPiece` named `rem`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_MeshBuilder_MeshPiece_GetMutable_rem(MR_MeshBuilder_MeshPiece *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_MeshPiece_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_MeshPiece *MR_MeshBuilder_MeshPiece_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshBuilder_MeshPiece_DestroyArray()`.
/// Use `MR_MeshBuilder_MeshPiece_OffsetMutablePtr()` and `MR_MeshBuilder_MeshPiece_OffsetPtr()` to access the array elements.
MRC_API MR_MeshBuilder_MeshPiece *MR_MeshBuilder_MeshPiece_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshBuilder::MeshPiece` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_MeshPiece_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_MeshPiece *MR_MeshBuilder_MeshPiece_ConstructFrom(MR_PassBy fmap_pass_by, MR_FaceMap *fmap, MR_PassBy vmap_pass_by, MR_VertMap *vmap, MR_PassBy topology_pass_by, MR_MeshTopology *topology, MR_PassBy rem_pass_by, MR_FaceBitSet *rem);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshBuilder_MeshPiece *MR_MeshBuilder_MeshPiece_OffsetPtr(const MR_MeshBuilder_MeshPiece *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshBuilder_MeshPiece *MR_MeshBuilder_MeshPiece_OffsetMutablePtr(MR_MeshBuilder_MeshPiece *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshBuilder::MeshPiece`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_MeshPiece_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_MeshPiece *MR_MeshBuilder_MeshPiece_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshBuilder_MeshPiece *_other);

/// Destroys a heap-allocated instance of `MR_MeshBuilder_MeshPiece`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_MeshPiece_Destroy(const MR_MeshBuilder_MeshPiece *_this);

/// Destroys a heap-allocated array of `MR_MeshBuilder_MeshPiece`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_MeshPiece_DestroyArray(const MR_MeshBuilder_MeshPiece *_this);

/// Generated from a method of class `MR::MeshBuilder::MeshPiece` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_MeshPiece *MR_MeshBuilder_MeshPiece_AssignFromAnother(MR_MeshBuilder_MeshPiece *_this, MR_PassBy _other_pass_by, MR_MeshBuilder_MeshPiece *_other);

// construct mesh topology in parallel from given disjoint mesh pieces (which do not have any shared vertex)
// and some additional triangles (in settings) that join the pieces
/// Generated from function `MR::MeshBuilder::fromDisjointMeshPieces`.
/// Parameter `t` can not be null. It is a single object.
/// Parameter `pieces` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopology_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopology *MR_MeshBuilder_fromDisjointMeshPieces(const MR_Triangulation *t, MR_VertId maxVertId, const MR_std_vector_MR_MeshBuilder_MeshPiece *pieces, const MR_MeshBuilder_BuildSettings *settings);

// adds triangles in the existing topology, given face indecies must be free;
// settings.region on output contain the remaining triangles that could not be added into the topology right now, but may be added later when other triangles appear in the mesh
/// Generated from function `MR::MeshBuilder::addTriangles`.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `t` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_MeshBuilder_addTriangles_MR_Triangulation(MR_MeshTopology *res, const MR_Triangulation *t, const MR_MeshBuilder_BuildSettings *settings);

// adds triangles in the existing topology, auto selecting face ids for them;
// vertTriples on output contain the remaining triangles that could not be added into the topology right now, but may be added later when other triangles appear in the mesh
/// Generated from function `MR::MeshBuilder::addTriangles`.
/// Parameter `res` can not be null. It is a single object.
/// Parameter `vertTriples` can not be null. It is a single object.
/// Parameter `createdFaces` defaults to a null pointer in C++.
MRC_API void MR_MeshBuilder_addTriangles_std_vector_MR_VertId(MR_MeshTopology *res, MR_std_vector_MR_VertId *vertTriples, MR_FaceBitSet *createdFaces);

/// construct mesh topology from face soup, where each face can have arbitrary degree (not only triangles)
/// Generated from function `MR::MeshBuilder::fromFaceSoup`.
/// Parameter `verts` can not be null. It is a single object.
/// Parameter `faces` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `progressCb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshTopology_Destroy()` to free it when you're done using it.
MRC_API MR_MeshTopology *MR_MeshBuilder_fromFaceSoup(const MR_std_vector_MR_VertId *verts, const MR_Vector_MR_MeshBuilder_VertSpan_MR_FaceId *faces, const MR_MeshBuilder_BuildSettings *settings, MR_PassBy progressCb_pass_by, MR_std_function_bool_from_float *progressCb);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `closeDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshBuilder_UniteCloseParams_Get_closeDist(const MR_MeshBuilder_UniteCloseParams *_this);

/// Modifies a member variable of class `MR::MeshBuilder::UniteCloseParams` named `closeDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_UniteCloseParams_Set_closeDist(MR_MeshBuilder_UniteCloseParams *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `closeDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshBuilder_UniteCloseParams_GetMutable_closeDist(MR_MeshBuilder_UniteCloseParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `uniteOnlyBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshBuilder_UniteCloseParams_Get_uniteOnlyBd(const MR_MeshBuilder_UniteCloseParams *_this);

/// Modifies a member variable of class `MR::MeshBuilder::UniteCloseParams` named `uniteOnlyBd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_UniteCloseParams_Set_uniteOnlyBd(MR_MeshBuilder_UniteCloseParams *_this, bool value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `uniteOnlyBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshBuilder_UniteCloseParams_GetMutable_uniteOnlyBd(MR_MeshBuilder_UniteCloseParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *const *MR_MeshBuilder_UniteCloseParams_Get_region(const MR_MeshBuilder_UniteCloseParams *_this);

/// Modifies a member variable of class `MR::MeshBuilder::UniteCloseParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_UniteCloseParams_Set_region(MR_MeshBuilder_UniteCloseParams *_this, MR_VertBitSet *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet **MR_MeshBuilder_UniteCloseParams_GetMutable_region(MR_MeshBuilder_UniteCloseParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `duplicateNonManifold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshBuilder_UniteCloseParams_Get_duplicateNonManifold(const MR_MeshBuilder_UniteCloseParams *_this);

/// Modifies a member variable of class `MR::MeshBuilder::UniteCloseParams` named `duplicateNonManifold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_UniteCloseParams_Set_duplicateNonManifold(MR_MeshBuilder_UniteCloseParams *_this, bool value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `duplicateNonManifold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshBuilder_UniteCloseParams_GetMutable_duplicateNonManifold(MR_MeshBuilder_UniteCloseParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `optionalVertOldToNew`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *const *MR_MeshBuilder_UniteCloseParams_Get_optionalVertOldToNew(const MR_MeshBuilder_UniteCloseParams *_this);

/// Modifies a member variable of class `MR::MeshBuilder::UniteCloseParams` named `optionalVertOldToNew`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_UniteCloseParams_Set_optionalVertOldToNew(MR_MeshBuilder_UniteCloseParams *_this, MR_VertMap *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `optionalVertOldToNew`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap **MR_MeshBuilder_UniteCloseParams_GetMutable_optionalVertOldToNew(MR_MeshBuilder_UniteCloseParams *_this);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `optionalDuplications`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication *const *MR_MeshBuilder_UniteCloseParams_Get_optionalDuplications(const MR_MeshBuilder_UniteCloseParams *_this);

/// Modifies a member variable of class `MR::MeshBuilder::UniteCloseParams` named `optionalDuplications`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_UniteCloseParams_Set_optionalDuplications(MR_MeshBuilder_UniteCloseParams *_this, MR_std_vector_MR_MeshBuilder_VertDuplication *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::UniteCloseParams` named `optionalDuplications`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_MeshBuilder_VertDuplication **MR_MeshBuilder_UniteCloseParams_GetMutable_optionalDuplications(MR_MeshBuilder_UniteCloseParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_UniteCloseParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_UniteCloseParams *MR_MeshBuilder_UniteCloseParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshBuilder_UniteCloseParams_DestroyArray()`.
/// Use `MR_MeshBuilder_UniteCloseParams_OffsetMutablePtr()` and `MR_MeshBuilder_UniteCloseParams_OffsetPtr()` to access the array elements.
MRC_API MR_MeshBuilder_UniteCloseParams *MR_MeshBuilder_UniteCloseParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshBuilder::UniteCloseParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_UniteCloseParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_UniteCloseParams *MR_MeshBuilder_UniteCloseParams_ConstructFrom(float closeDist, bool uniteOnlyBd, MR_VertBitSet *region, bool duplicateNonManifold, MR_VertMap *optionalVertOldToNew, MR_std_vector_MR_MeshBuilder_VertDuplication *optionalDuplications);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshBuilder_UniteCloseParams *MR_MeshBuilder_UniteCloseParams_OffsetPtr(const MR_MeshBuilder_UniteCloseParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshBuilder_UniteCloseParams *MR_MeshBuilder_UniteCloseParams_OffsetMutablePtr(MR_MeshBuilder_UniteCloseParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshBuilder::UniteCloseParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_UniteCloseParams_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_UniteCloseParams *MR_MeshBuilder_UniteCloseParams_ConstructFromAnother(const MR_MeshBuilder_UniteCloseParams *_other);

/// Destroys a heap-allocated instance of `MR_MeshBuilder_UniteCloseParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_UniteCloseParams_Destroy(const MR_MeshBuilder_UniteCloseParams *_this);

/// Destroys a heap-allocated array of `MR_MeshBuilder_UniteCloseParams`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_UniteCloseParams_DestroyArray(const MR_MeshBuilder_UniteCloseParams *_this);

/// Generated from a method of class `MR::MeshBuilder::UniteCloseParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_UniteCloseParams *MR_MeshBuilder_UniteCloseParams_AssignFromAnother(MR_MeshBuilder_UniteCloseParams *_this, const MR_MeshBuilder_UniteCloseParams *_other);

/// the function finds groups of mesh vertices located closer to each other than \param closeDist, and unites such vertices in one;
/// then the mesh is rebuilt from the remaining triangles
/// \param optionalVertOldToNew is the mapping of vertices: before -> after
/// \param uniteOnlyBd if true then only boundary vertices can be united, all internal vertices (even close ones) will remain
/// \return the number of vertices united, 0 means no change in the mesh
/// Generated from function `MR::MeshBuilder::uniteCloseVertices`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `uniteOnlyBd` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `optionalVertOldToNew` defaults to a null pointer in C++.
MRC_API int32_t MR_MeshBuilder_uniteCloseVertices_4(MR_Mesh *mesh, float closeDist, const bool *uniteOnlyBd, MR_VertMap *optionalVertOldToNew);

/// the function finds groups of mesh vertices located closer to each other than \param params.closeDist, and unites such vertices in one;
/// then the mesh is rebuilt from the remaining triangles
/// \return the number of vertices united, 0 means no change in the mesh
/// Generated from function `MR::MeshBuilder::uniteCloseVertices`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
MRC_API int32_t MR_MeshBuilder_uniteCloseVertices_2(MR_Mesh *mesh, const MR_MeshBuilder_UniteCloseParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
