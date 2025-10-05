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
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_FaceBitSet_std_string MR_expected_MR_FaceBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_FaceBitSet_std_string.h>`.
typedef struct MR_expected_MR_UndirectedEdgeBitSet_std_string MR_expected_MR_UndirectedEdgeBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_UndirectedEdgeBitSet_std_string.h>`.
typedef struct MR_expected_std_vector_std_pair_MR_VertId_MR_VertId_std_string MR_expected_std_vector_std_pair_MR_VertId_MR_VertId_std_string; // Defined in `#include <MRCMisc/expected_std_vector_std_pair_MR_VertId_MR_VertId_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_vector_std_pair_MR_VertId_MR_VertId MR_std_vector_std_pair_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/std_vector_std_pair_MR_VertId_MR_VertId.h>`.


/// Generated from class `MR::FixMeshDegeneraciesParams`.
typedef struct MR_FixMeshDegeneraciesParams MR_FixMeshDegeneraciesParams;

typedef int32_t MR_FixMeshDegeneraciesParams_Mode;
enum // MR_FixMeshDegeneraciesParams_Mode
{
    ///< use decimation only to fix degeneracies
    MR_FixMeshDegeneraciesParams_Mode_Decimate = 0,
    ///< if decimation does not succeed, perform subdivision too
    MR_FixMeshDegeneraciesParams_Mode_Remesh = 1,
    ///< if both decimation and subdivision does not succeed, removes degenerate areas and fills occurred holes
    MR_FixMeshDegeneraciesParams_Mode_RemeshPatch = 2,
};

/// Parameters structure for `fixMeshCreases` function
/// Generated from class `MR::FixCreasesParams`.
typedef struct MR_FixCreasesParams MR_FixCreasesParams;

/// Parameters for `findDisorientedFaces` function
/// Generated from class `MR::FindDisorientationParams`.
typedef struct MR_FindDisorientationParams MR_FindDisorientationParams;

/// Mode of detecting disoriented face
typedef int32_t MR_FindDisorientationParams_RayMode;
enum // MR_FindDisorientationParams_RayMode
{
    ///< positive (normal) direction of face should have even number of intersections
    MR_FindDisorientationParams_RayMode_Positive = 0,
    ///< positive or negative (normal or -normal) direction (the one with lowest number of intersections) should have even/odd number of intersections
    MR_FindDisorientationParams_RayMode_Shallowest = 1,
    ///< both direction should have correct number of intersections (positive - even; negative - odd)
    MR_FindDisorientationParams_RayMode_Both = 2,
};

/// Duplicates all vertices having more than two boundary edges (and returns the number of duplications);
/// Generated from function `MR::duplicateMultiHoleVertices`.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API int32_t MR_duplicateMultiHoleVertices(MR_Mesh *mesh);

/// Generated from function `MR::findMultipleEdges`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_pair_MR_VertId_MR_VertId_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_pair_MR_VertId_MR_VertId_std_string *MR_findMultipleEdges(const MR_MeshTopology *topology, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Generated from function `MR::hasMultipleEdges`.
/// Parameter `topology` can not be null. It is a single object.
MRC_API bool MR_hasMultipleEdges(const MR_MeshTopology *topology);

/// resolves given multiple edges, but splitting all but one edge in each group
/// Generated from function `MR::fixMultipleEdges`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `multipleEdges` can not be null. It is a single object.
MRC_API void MR_fixMultipleEdges_2(MR_Mesh *mesh, const MR_std_vector_std_pair_MR_VertId_MR_VertId *multipleEdges);

/// finds and resolves multiple edges
/// Generated from function `MR::fixMultipleEdges`.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API void MR_fixMultipleEdges_1(MR_Mesh *mesh);

/// finds faces having aspect ratio >= criticalAspectRatio
/// Generated from function `MR::findDegenerateFaces`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `criticalAspectRatio` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FaceBitSet_std_string *MR_findDegenerateFaces(const MR_MeshPart *mp, const float *criticalAspectRatio, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// finds edges having length <= criticalLength
/// Generated from function `MR::findShortEdges`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_UndirectedEdgeBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_UndirectedEdgeBitSet_std_string *MR_findShortEdges(const MR_MeshPart *mp, float criticalLength, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// maximum permitted deviation from the original surface
/// Returns a pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `maxDeviation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixMeshDegeneraciesParams_Get_maxDeviation(const MR_FixMeshDegeneraciesParams *_this);

/// maximum permitted deviation from the original surface
/// Modifies a member variable of class `MR::FixMeshDegeneraciesParams` named `maxDeviation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixMeshDegeneraciesParams_Set_maxDeviation(MR_FixMeshDegeneraciesParams *_this, float value);

/// maximum permitted deviation from the original surface
/// Returns a mutable pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `maxDeviation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixMeshDegeneraciesParams_GetMutable_maxDeviation(MR_FixMeshDegeneraciesParams *_this);

/// edges not longer than this value will be collapsed ignoring normals and aspect ratio checks
/// Returns a pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixMeshDegeneraciesParams_Get_tinyEdgeLength(const MR_FixMeshDegeneraciesParams *_this);

/// edges not longer than this value will be collapsed ignoring normals and aspect ratio checks
/// Modifies a member variable of class `MR::FixMeshDegeneraciesParams` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixMeshDegeneraciesParams_Set_tinyEdgeLength(MR_FixMeshDegeneraciesParams *_this, float value);

/// edges not longer than this value will be collapsed ignoring normals and aspect ratio checks
/// Returns a mutable pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `tinyEdgeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixMeshDegeneraciesParams_GetMutable_tinyEdgeLength(MR_FixMeshDegeneraciesParams *_this);

/// the algorithm will ignore dihedral angle check if one of triangles had aspect ratio equal or more than this value;
/// and the algorithm will permit temporary increase in aspect ratio after collapse, if before collapse one of the triangles had larger aspect ratio
/// Returns a pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixMeshDegeneraciesParams_Get_criticalTriAspectRatio(const MR_FixMeshDegeneraciesParams *_this);

/// the algorithm will ignore dihedral angle check if one of triangles had aspect ratio equal or more than this value;
/// and the algorithm will permit temporary increase in aspect ratio after collapse, if before collapse one of the triangles had larger aspect ratio
/// Modifies a member variable of class `MR::FixMeshDegeneraciesParams` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixMeshDegeneraciesParams_Set_criticalTriAspectRatio(MR_FixMeshDegeneraciesParams *_this, float value);

/// the algorithm will ignore dihedral angle check if one of triangles had aspect ratio equal or more than this value;
/// and the algorithm will permit temporary increase in aspect ratio after collapse, if before collapse one of the triangles had larger aspect ratio
/// Returns a mutable pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixMeshDegeneraciesParams_GetMutable_criticalTriAspectRatio(MR_FixMeshDegeneraciesParams *_this);

/// Permit edge flips if it does not change dihedral angle more than on this value
/// Returns a pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixMeshDegeneraciesParams_Get_maxAngleChange(const MR_FixMeshDegeneraciesParams *_this);

/// Permit edge flips if it does not change dihedral angle more than on this value
/// Modifies a member variable of class `MR::FixMeshDegeneraciesParams` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixMeshDegeneraciesParams_Set_maxAngleChange(MR_FixMeshDegeneraciesParams *_this, float value);

/// Permit edge flips if it does not change dihedral angle more than on this value
/// Returns a mutable pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `maxAngleChange`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixMeshDegeneraciesParams_GetMutable_maxAngleChange(MR_FixMeshDegeneraciesParams *_this);

/// Small stabilizer is important to achieve good results on completely planar mesh parts,
/// if your mesh is not-planer everywhere, then you can set it to zero
/// Returns a pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixMeshDegeneraciesParams_Get_stabilizer(const MR_FixMeshDegeneraciesParams *_this);

/// Small stabilizer is important to achieve good results on completely planar mesh parts,
/// if your mesh is not-planer everywhere, then you can set it to zero
/// Modifies a member variable of class `MR::FixMeshDegeneraciesParams` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixMeshDegeneraciesParams_Set_stabilizer(MR_FixMeshDegeneraciesParams *_this, float value);

/// Small stabilizer is important to achieve good results on completely planar mesh parts,
/// if your mesh is not-planer everywhere, then you can set it to zero
/// Returns a mutable pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixMeshDegeneraciesParams_GetMutable_stabilizer(MR_FixMeshDegeneraciesParams *_this);

/// degenerations will be fixed only in given region, it is updated during the operation
/// Returns a pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_FixMeshDegeneraciesParams_Get_region(const MR_FixMeshDegeneraciesParams *_this);

/// degenerations will be fixed only in given region, it is updated during the operation
/// Modifies a member variable of class `MR::FixMeshDegeneraciesParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixMeshDegeneraciesParams_Set_region(MR_FixMeshDegeneraciesParams *_this, MR_FaceBitSet *value);

/// degenerations will be fixed only in given region, it is updated during the operation
/// Returns a mutable pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_FixMeshDegeneraciesParams_GetMutable_region(MR_FixMeshDegeneraciesParams *_this);

/// Returns a pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `mode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FixMeshDegeneraciesParams_Mode *MR_FixMeshDegeneraciesParams_Get_mode(const MR_FixMeshDegeneraciesParams *_this);

/// Modifies a member variable of class `MR::FixMeshDegeneraciesParams` named `mode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixMeshDegeneraciesParams_Set_mode(MR_FixMeshDegeneraciesParams *_this, MR_FixMeshDegeneraciesParams_Mode value);

/// Returns a mutable pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `mode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FixMeshDegeneraciesParams_Mode *MR_FixMeshDegeneraciesParams_GetMutable_mode(MR_FixMeshDegeneraciesParams *_this);

/// Returns a pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_FixMeshDegeneraciesParams_Get_cb(const MR_FixMeshDegeneraciesParams *_this);

/// Modifies a member variable of class `MR::FixMeshDegeneraciesParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixMeshDegeneraciesParams_Set_cb(MR_FixMeshDegeneraciesParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::FixMeshDegeneraciesParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_FixMeshDegeneraciesParams_GetMutable_cb(MR_FixMeshDegeneraciesParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixMeshDegeneraciesParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixMeshDegeneraciesParams *MR_FixMeshDegeneraciesParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FixMeshDegeneraciesParams_DestroyArray()`.
/// Use `MR_FixMeshDegeneraciesParams_OffsetMutablePtr()` and `MR_FixMeshDegeneraciesParams_OffsetPtr()` to access the array elements.
MRC_API MR_FixMeshDegeneraciesParams *MR_FixMeshDegeneraciesParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FixMeshDegeneraciesParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixMeshDegeneraciesParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixMeshDegeneraciesParams *MR_FixMeshDegeneraciesParams_ConstructFrom(float maxDeviation, float tinyEdgeLength, float criticalTriAspectRatio, float maxAngleChange, float stabilizer, MR_FaceBitSet *region, MR_FixMeshDegeneraciesParams_Mode mode, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FixMeshDegeneraciesParams *MR_FixMeshDegeneraciesParams_OffsetPtr(const MR_FixMeshDegeneraciesParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FixMeshDegeneraciesParams *MR_FixMeshDegeneraciesParams_OffsetMutablePtr(MR_FixMeshDegeneraciesParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FixMeshDegeneraciesParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixMeshDegeneraciesParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixMeshDegeneraciesParams *MR_FixMeshDegeneraciesParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FixMeshDegeneraciesParams *_other);

/// Destroys a heap-allocated instance of `MR_FixMeshDegeneraciesParams`. Does nothing if the pointer is null.
MRC_API void MR_FixMeshDegeneraciesParams_Destroy(const MR_FixMeshDegeneraciesParams *_this);

/// Destroys a heap-allocated array of `MR_FixMeshDegeneraciesParams`. Does nothing if the pointer is null.
MRC_API void MR_FixMeshDegeneraciesParams_DestroyArray(const MR_FixMeshDegeneraciesParams *_this);

/// Generated from a method of class `MR::FixMeshDegeneraciesParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FixMeshDegeneraciesParams *MR_FixMeshDegeneraciesParams_AssignFromAnother(MR_FixMeshDegeneraciesParams *_this, MR_PassBy _other_pass_by, MR_FixMeshDegeneraciesParams *_other);

/// Fixes degenerate faces and short edges in mesh (changes topology)
/// Generated from function `MR::fixMeshDegeneracies`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_fixMeshDegeneracies(MR_Mesh *mesh, const MR_FixMeshDegeneraciesParams *params);

/// finds vertices in region with complete ring of N edges
/// Generated from function `MR::findNRingVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_findNRingVerts(const MR_MeshTopology *topology, int32_t n, const MR_VertBitSet *region);

/// returns true if the edge e has both left and right triangular faces and the degree of dest( e ) is 2
/// Generated from function `MR::isEdgeBetweenDoubleTris`.
/// Parameter `topology` can not be null. It is a single object.
MRC_API bool MR_isEdgeBetweenDoubleTris(const MR_MeshTopology *topology, MR_EdgeId e);

/// if the edge e has both left and right triangular faces and the degree of dest( e ) is 2,
/// then eliminates left( e ), right( e ), e, e.sym(), next( e ), dest( e ), and returns prev( e );
/// if region is provided then eliminated faces are excluded from it;
/// otherwise returns invalid edge
/// Generated from function `MR::eliminateDoubleTris`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_eliminateDoubleTris(MR_MeshTopology *topology, MR_EdgeId e, MR_FaceBitSet *region);

/// eliminates all double triangles around given vertex preserving vertex valid;
/// if region is provided then eliminated triangles are excluded from it
/// Generated from function `MR::eliminateDoubleTrisAround`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API void MR_eliminateDoubleTrisAround(MR_MeshTopology *topology, MR_VertId v, MR_FaceBitSet *region);

/// returns true if the destination of given edge has degree 3 and 3 incident triangles
/// Generated from function `MR::isDegree3Dest`.
/// Parameter `topology` can not be null. It is a single object.
MRC_API bool MR_isDegree3Dest(const MR_MeshTopology *topology, MR_EdgeId e);

/// if the destination of given edge has degree 3 and 3 incident triangles,
/// then eliminates the destination vertex with all its edges and all but one faces, and returns valid remaining edge with same origin as e;
/// if region is provided then eliminated triangles are excluded from it;
/// otherwise returns invalid edge
/// Generated from function `MR::eliminateDegree3Dest`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_eliminateDegree3Dest(MR_MeshTopology *topology, MR_EdgeId e, MR_FaceBitSet *region);

/// eliminates from the mesh all vertices having degree 3 and 3 incident triangles from given region (which is updated);
/// if \param fs is provided then eliminated triangles are excluded from it;
/// \return the number of vertices eliminated
/// Generated from function `MR::eliminateDegree3Vertices`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `fs` defaults to a null pointer in C++.
MRC_API int32_t MR_eliminateDegree3Vertices(MR_MeshTopology *topology, MR_VertBitSet *region, MR_FaceBitSet *fs);

/// if given vertex is present on the boundary of some hole several times then returns an edge of this hole (without left);
/// returns invalid edge otherwise (not a boundary vertex, or it is present only once on the boundary of each hole it pertains to)
/// Generated from function `MR::isVertexRepeatedOnHoleBd`.
/// Parameter `topology` can not be null. It is a single object.
MRC_API MR_EdgeId MR_isVertexRepeatedOnHoleBd(const MR_MeshTopology *topology, MR_VertId v);

/// returns set bits for all vertices present on the boundary of a hole several times;
/// Generated from function `MR::findRepeatedVertsOnHoleBd`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_findRepeatedVertsOnHoleBd(const MR_MeshTopology *topology);

/// returns all faces that complicate one of mesh holes;
/// hole is complicated if it passes via one vertex more than once;
/// deleting such faces simplifies the holes and makes them easier to fill
/// Generated from function `MR::findHoleComplicatingFaces`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_findHoleComplicatingFaces(const MR_Mesh *mesh);

/// edges with dihedral angle sharper this will be considered as creases
/// Returns a pointer to a member variable of class `MR::FixCreasesParams` named `creaseAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixCreasesParams_Get_creaseAngle(const MR_FixCreasesParams *_this);

/// edges with dihedral angle sharper this will be considered as creases
/// Modifies a member variable of class `MR::FixCreasesParams` named `creaseAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixCreasesParams_Set_creaseAngle(MR_FixCreasesParams *_this, float value);

/// edges with dihedral angle sharper this will be considered as creases
/// Returns a mutable pointer to a member variable of class `MR::FixCreasesParams` named `creaseAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixCreasesParams_GetMutable_creaseAngle(MR_FixCreasesParams *_this);

/// planar check is skipped for faces with worse aspect ratio
/// Returns a pointer to a member variable of class `MR::FixCreasesParams` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FixCreasesParams_Get_criticalTriAspectRatio(const MR_FixCreasesParams *_this);

/// planar check is skipped for faces with worse aspect ratio
/// Modifies a member variable of class `MR::FixCreasesParams` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixCreasesParams_Set_criticalTriAspectRatio(MR_FixCreasesParams *_this, float value);

/// planar check is skipped for faces with worse aspect ratio
/// Returns a mutable pointer to a member variable of class `MR::FixCreasesParams` named `criticalTriAspectRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FixCreasesParams_GetMutable_criticalTriAspectRatio(MR_FixCreasesParams *_this);

/// maximum number of algorithm iterations
/// Returns a pointer to a member variable of class `MR::FixCreasesParams` named `maxIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_FixCreasesParams_Get_maxIters(const MR_FixCreasesParams *_this);

/// maximum number of algorithm iterations
/// Modifies a member variable of class `MR::FixCreasesParams` named `maxIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FixCreasesParams_Set_maxIters(MR_FixCreasesParams *_this, int32_t value);

/// maximum number of algorithm iterations
/// Returns a mutable pointer to a member variable of class `MR::FixCreasesParams` named `maxIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_FixCreasesParams_GetMutable_maxIters(MR_FixCreasesParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixCreasesParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixCreasesParams *MR_FixCreasesParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FixCreasesParams_DestroyArray()`.
/// Use `MR_FixCreasesParams_OffsetMutablePtr()` and `MR_FixCreasesParams_OffsetPtr()` to access the array elements.
MRC_API MR_FixCreasesParams *MR_FixCreasesParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FixCreasesParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixCreasesParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixCreasesParams *MR_FixCreasesParams_ConstructFrom(float creaseAngle, float criticalTriAspectRatio, int32_t maxIters);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FixCreasesParams *MR_FixCreasesParams_OffsetPtr(const MR_FixCreasesParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FixCreasesParams *MR_FixCreasesParams_OffsetMutablePtr(MR_FixCreasesParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FixCreasesParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FixCreasesParams_Destroy()` to free it when you're done using it.
MRC_API MR_FixCreasesParams *MR_FixCreasesParams_ConstructFromAnother(const MR_FixCreasesParams *_other);

/// Destroys a heap-allocated instance of `MR_FixCreasesParams`. Does nothing if the pointer is null.
MRC_API void MR_FixCreasesParams_Destroy(const MR_FixCreasesParams *_this);

/// Destroys a heap-allocated array of `MR_FixCreasesParams`. Does nothing if the pointer is null.
MRC_API void MR_FixCreasesParams_DestroyArray(const MR_FixCreasesParams *_this);

/// Generated from a method of class `MR::FixCreasesParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FixCreasesParams *MR_FixCreasesParams_AssignFromAnother(MR_FixCreasesParams *_this, const MR_FixCreasesParams *_other);

/// Finds creases edges and re-triangulates planar areas around them, useful to fix double faces
/// Generated from function `MR::fixMeshCreases`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_fixMeshCreases(MR_Mesh *mesh, const MR_FixCreasesParams *params);

/// Returns a pointer to a member variable of class `MR::FindDisorientationParams` named `mode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FindDisorientationParams_RayMode *MR_FindDisorientationParams_Get_mode(const MR_FindDisorientationParams *_this);

/// Modifies a member variable of class `MR::FindDisorientationParams` named `mode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindDisorientationParams_Set_mode(MR_FindDisorientationParams *_this, MR_FindDisorientationParams_RayMode value);

/// Returns a mutable pointer to a member variable of class `MR::FindDisorientationParams` named `mode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FindDisorientationParams_RayMode *MR_FindDisorientationParams_GetMutable_mode(MR_FindDisorientationParams *_this);

/// if set - copy mesh, and fills holes for better quality in case of ray going out through hole
/// Returns a pointer to a member variable of class `MR::FindDisorientationParams` named `virtualFillHoles`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_FindDisorientationParams_Get_virtualFillHoles(const MR_FindDisorientationParams *_this);

/// if set - copy mesh, and fills holes for better quality in case of ray going out through hole
/// Modifies a member variable of class `MR::FindDisorientationParams` named `virtualFillHoles`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindDisorientationParams_Set_virtualFillHoles(MR_FindDisorientationParams *_this, bool value);

/// if set - copy mesh, and fills holes for better quality in case of ray going out through hole
/// Returns a mutable pointer to a member variable of class `MR::FindDisorientationParams` named `virtualFillHoles`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_FindDisorientationParams_GetMutable_virtualFillHoles(MR_FindDisorientationParams *_this);

/// Returns a pointer to a member variable of class `MR::FindDisorientationParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_FindDisorientationParams_Get_cb(const MR_FindDisorientationParams *_this);

/// Modifies a member variable of class `MR::FindDisorientationParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindDisorientationParams_Set_cb(MR_FindDisorientationParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::FindDisorientationParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_FindDisorientationParams_GetMutable_cb(MR_FindDisorientationParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindDisorientationParams_Destroy()` to free it when you're done using it.
MRC_API MR_FindDisorientationParams *MR_FindDisorientationParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FindDisorientationParams_DestroyArray()`.
/// Use `MR_FindDisorientationParams_OffsetMutablePtr()` and `MR_FindDisorientationParams_OffsetPtr()` to access the array elements.
MRC_API MR_FindDisorientationParams *MR_FindDisorientationParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FindDisorientationParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindDisorientationParams_Destroy()` to free it when you're done using it.
MRC_API MR_FindDisorientationParams *MR_FindDisorientationParams_ConstructFrom(MR_FindDisorientationParams_RayMode mode, bool virtualFillHoles, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FindDisorientationParams *MR_FindDisorientationParams_OffsetPtr(const MR_FindDisorientationParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FindDisorientationParams *MR_FindDisorientationParams_OffsetMutablePtr(MR_FindDisorientationParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FindDisorientationParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindDisorientationParams_Destroy()` to free it when you're done using it.
MRC_API MR_FindDisorientationParams *MR_FindDisorientationParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FindDisorientationParams *_other);

/// Destroys a heap-allocated instance of `MR_FindDisorientationParams`. Does nothing if the pointer is null.
MRC_API void MR_FindDisorientationParams_Destroy(const MR_FindDisorientationParams *_this);

/// Destroys a heap-allocated array of `MR_FindDisorientationParams`. Does nothing if the pointer is null.
MRC_API void MR_FindDisorientationParams_DestroyArray(const MR_FindDisorientationParams *_this);

/// Generated from a method of class `MR::FindDisorientationParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FindDisorientationParams *MR_FindDisorientationParams_AssignFromAnother(MR_FindDisorientationParams *_this, MR_PassBy _other_pass_by, MR_FindDisorientationParams *_other);

/// returns all faces that are oriented inconsistently, based on number of ray intersections
/// Generated from function `MR::findDisorientedFaces`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FaceBitSet_std_string *MR_findDisorientedFaces(const MR_Mesh *mesh, const MR_FindDisorientationParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
