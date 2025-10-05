// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_SearchPathSettings MR_SearchPathSettings; // Defined in `#include <MRCMesh/MROneMeshContours.h>`.
typedef struct MR_SortIntersectionsData MR_SortIntersectionsData; // Defined in `#include <MRCMesh/MROneMeshContours.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_FaceBitSet_std_string MR_expected_MR_FaceBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_FaceBitSet_std_string.h>`.
typedef struct MR_expected_std_vector_MR_OneMeshContour_std_string MR_expected_std_vector_MR_OneMeshContour_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_OneMeshContour_std_string.h>`.
typedef struct MR_phmap_flat_hash_map_MR_UndirectedEdgeId_int32_t MR_phmap_flat_hash_map_MR_UndirectedEdgeId_int32_t; // Defined in `#include <MRCMisc/phmap_flat_hash_map_MR_UndirectedEdgeId_int32_t.h>`.
typedef struct MR_std_function_float_from_int32_t MR_std_function_float_from_int32_t; // Defined in `#include <MRCMisc/std_function_float_from_int32_t.h>`.
typedef struct MR_std_vector_MR_MeshTriPoint MR_std_vector_MR_MeshTriPoint; // Defined in `#include <MRCMisc/std_vector_MR_MeshTriPoint.h>`.
typedef struct MR_std_vector_MR_OneMeshContour MR_std_vector_MR_OneMeshContour; // Defined in `#include <MRCMisc/std_vector_MR_OneMeshContour.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.



/// Map structure to find primitives of old topology by edges introduced in cutMesh
/// Generated from class `MR::NewEdgesMap`.
typedef struct MR_NewEdgesMap MR_NewEdgesMap;

/** \struct MR::CutMeshParameters
*
* \brief Parameters of MR::cutMesh
* 
* This structure contains some options and optional outputs of MR::cutMesh function
* \sa \ref MR::CutMeshResult
*/
/// Generated from class `MR::CutMeshParameters`.
typedef struct MR_CutMeshParameters MR_CutMeshParameters;

/// This enum defines the MR::cutMesh behaviour in case of bad faces acure
/// basicaly MR::cutMesh removes all faces which contours pass through, adds new edges to topology and fills all removed parts
/// 
/// \note Bad faces here mean faces where contours have intersections and cannot be cut and filled in an good way
typedef int32_t MR_CutMeshParameters_ForceFill;
enum // MR_CutMeshParameters_ForceFill
{
    //< if bad faces occur does not fill anything
    MR_CutMeshParameters_ForceFill_None = 0,
    //< fills all faces except bad ones
    MR_CutMeshParameters_ForceFill_Good = 1,
    //< fills all faces with bad ones, but on bad faces triangulation can also be bad (may have self-intersections or tunnels)
    MR_CutMeshParameters_ForceFill_All = 2,
};

/** \struct MR::CutMeshResult
*
* This structure contains result of MR::cutMesh function
*/
/// Generated from class `MR::CutMeshResult`.
typedef struct MR_CutMeshResult MR_CutMeshResult;

/// true here means that a subdivided edge is a part of some original edge edge before mesh subdivision;
/// false here is both for unmodified edges and for new edges introduced within original triangles
/// Returns a pointer to a member variable of class `MR::NewEdgesMap` named `splitEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeBitSet *MR_NewEdgesMap_Get_splitEdges(const MR_NewEdgesMap *_this);

/// true here means that a subdivided edge is a part of some original edge edge before mesh subdivision;
/// false here is both for unmodified edges and for new edges introduced within original triangles
/// Modifies a member variable of class `MR::NewEdgesMap` named `splitEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_NewEdgesMap_Set_splitEdges(MR_NewEdgesMap *_this, MR_PassBy value_pass_by, MR_UndirectedEdgeBitSet *value);

/// true here means that a subdivided edge is a part of some original edge edge before mesh subdivision;
/// false here is both for unmodified edges and for new edges introduced within original triangles
/// Returns a mutable pointer to a member variable of class `MR::NewEdgesMap` named `splitEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *MR_NewEdgesMap_GetMutable_splitEdges(MR_NewEdgesMap *_this);

/// maps every edge appeared during subdivision to an original edge before mesh subdivision;
/// for splitEdges[key]=true, the value is arbitrary oriented original edge, for which key-edge is its part;
/// for splitEdges[key]=false, the value is an original triangle
/// Returns a pointer to a member variable of class `MR::NewEdgesMap` named `map`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_phmap_flat_hash_map_MR_UndirectedEdgeId_int32_t *MR_NewEdgesMap_Get_map(const MR_NewEdgesMap *_this);

/// maps every edge appeared during subdivision to an original edge before mesh subdivision;
/// for splitEdges[key]=true, the value is arbitrary oriented original edge, for which key-edge is its part;
/// for splitEdges[key]=false, the value is an original triangle
/// Modifies a member variable of class `MR::NewEdgesMap` named `map`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_NewEdgesMap_Set_map(MR_NewEdgesMap *_this, MR_PassBy value_pass_by, MR_phmap_flat_hash_map_MR_UndirectedEdgeId_int32_t *value);

/// maps every edge appeared during subdivision to an original edge before mesh subdivision;
/// for splitEdges[key]=true, the value is arbitrary oriented original edge, for which key-edge is its part;
/// for splitEdges[key]=false, the value is an original triangle
/// Returns a mutable pointer to a member variable of class `MR::NewEdgesMap` named `map`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_phmap_flat_hash_map_MR_UndirectedEdgeId_int32_t *MR_NewEdgesMap_GetMutable_map(MR_NewEdgesMap *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NewEdgesMap_Destroy()` to free it when you're done using it.
MRC_API MR_NewEdgesMap *MR_NewEdgesMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NewEdgesMap_DestroyArray()`.
/// Use `MR_NewEdgesMap_OffsetMutablePtr()` and `MR_NewEdgesMap_OffsetPtr()` to access the array elements.
MRC_API MR_NewEdgesMap *MR_NewEdgesMap_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::NewEdgesMap` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NewEdgesMap_Destroy()` to free it when you're done using it.
MRC_API MR_NewEdgesMap *MR_NewEdgesMap_ConstructFrom(MR_PassBy splitEdges_pass_by, MR_UndirectedEdgeBitSet *splitEdges, MR_PassBy map_pass_by, MR_phmap_flat_hash_map_MR_UndirectedEdgeId_int32_t *map);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NewEdgesMap *MR_NewEdgesMap_OffsetPtr(const MR_NewEdgesMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NewEdgesMap *MR_NewEdgesMap_OffsetMutablePtr(MR_NewEdgesMap *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NewEdgesMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NewEdgesMap_Destroy()` to free it when you're done using it.
MRC_API MR_NewEdgesMap *MR_NewEdgesMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_NewEdgesMap *_other);

/// Destroys a heap-allocated instance of `MR_NewEdgesMap`. Does nothing if the pointer is null.
MRC_API void MR_NewEdgesMap_Destroy(const MR_NewEdgesMap *_this);

/// Destroys a heap-allocated array of `MR_NewEdgesMap`. Does nothing if the pointer is null.
MRC_API void MR_NewEdgesMap_DestroyArray(const MR_NewEdgesMap *_this);

/// Generated from a method of class `MR::NewEdgesMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NewEdgesMap *MR_NewEdgesMap_AssignFromAnother(MR_NewEdgesMap *_this, MR_PassBy _other_pass_by, MR_NewEdgesMap *_other);

/// This is optional input for better contours resolving\n
/// it provides additional info from other mesh used in boolean operation, useful to solve some degeneration
/// \note Most likely you don't need this in case you call MR::cutMesh manualy, use case of it is MR::boolean
/// Returns a pointer to a member variable of class `MR::CutMeshParameters` named `sortData`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SortIntersectionsData *const *MR_CutMeshParameters_Get_sortData(const MR_CutMeshParameters *_this);

/// This is optional input for better contours resolving\n
/// it provides additional info from other mesh used in boolean operation, useful to solve some degeneration
/// \note Most likely you don't need this in case you call MR::cutMesh manualy, use case of it is MR::boolean
/// Modifies a member variable of class `MR::CutMeshParameters` named `sortData`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CutMeshParameters_Set_sortData(MR_CutMeshParameters *_this, const MR_SortIntersectionsData *value);

/// This is optional input for better contours resolving\n
/// it provides additional info from other mesh used in boolean operation, useful to solve some degeneration
/// \note Most likely you don't need this in case you call MR::cutMesh manualy, use case of it is MR::boolean
/// Returns a mutable pointer to a member variable of class `MR::CutMeshParameters` named `sortData`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SortIntersectionsData **MR_CutMeshParameters_GetMutable_sortData(MR_CutMeshParameters *_this);

/// This is optional output - map from newly generated faces to old faces (N-1)
/// Returns a pointer to a member variable of class `MR::CutMeshParameters` named `new2OldMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceMap *const *MR_CutMeshParameters_Get_new2OldMap(const MR_CutMeshParameters *_this);

/// This is optional output - map from newly generated faces to old faces (N-1)
/// Modifies a member variable of class `MR::CutMeshParameters` named `new2OldMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CutMeshParameters_Set_new2OldMap(MR_CutMeshParameters *_this, MR_FaceMap *value);

/// This is optional output - map from newly generated faces to old faces (N-1)
/// Returns a mutable pointer to a member variable of class `MR::CutMeshParameters` named `new2OldMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceMap **MR_CutMeshParameters_GetMutable_new2OldMap(MR_CutMeshParameters *_this);

/// Returns a pointer to a member variable of class `MR::CutMeshParameters` named `forceFillMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CutMeshParameters_ForceFill *MR_CutMeshParameters_Get_forceFillMode(const MR_CutMeshParameters *_this);

/// Modifies a member variable of class `MR::CutMeshParameters` named `forceFillMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CutMeshParameters_Set_forceFillMode(MR_CutMeshParameters *_this, MR_CutMeshParameters_ForceFill value);

/// Returns a mutable pointer to a member variable of class `MR::CutMeshParameters` named `forceFillMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CutMeshParameters_ForceFill *MR_CutMeshParameters_GetMutable_forceFillMode(MR_CutMeshParameters *_this);

/// Optional output map for each new edge introduced after cut maps edge from old topology or old face
/// Returns a pointer to a member variable of class `MR::CutMeshParameters` named `new2oldEdgesMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NewEdgesMap *const *MR_CutMeshParameters_Get_new2oldEdgesMap(const MR_CutMeshParameters *_this);

/// Optional output map for each new edge introduced after cut maps edge from old topology or old face
/// Modifies a member variable of class `MR::CutMeshParameters` named `new2oldEdgesMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CutMeshParameters_Set_new2oldEdgesMap(MR_CutMeshParameters *_this, MR_NewEdgesMap *value);

/// Optional output map for each new edge introduced after cut maps edge from old topology or old face
/// Returns a mutable pointer to a member variable of class `MR::CutMeshParameters` named `new2oldEdgesMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NewEdgesMap **MR_CutMeshParameters_GetMutable_new2oldEdgesMap(MR_CutMeshParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CutMeshParameters_Destroy()` to free it when you're done using it.
MRC_API MR_CutMeshParameters *MR_CutMeshParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CutMeshParameters_DestroyArray()`.
/// Use `MR_CutMeshParameters_OffsetMutablePtr()` and `MR_CutMeshParameters_OffsetPtr()` to access the array elements.
MRC_API MR_CutMeshParameters *MR_CutMeshParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CutMeshParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CutMeshParameters_Destroy()` to free it when you're done using it.
MRC_API MR_CutMeshParameters *MR_CutMeshParameters_ConstructFrom(const MR_SortIntersectionsData *sortData, MR_FaceMap *new2OldMap, MR_CutMeshParameters_ForceFill forceFillMode, MR_NewEdgesMap *new2oldEdgesMap);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CutMeshParameters *MR_CutMeshParameters_OffsetPtr(const MR_CutMeshParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CutMeshParameters *MR_CutMeshParameters_OffsetMutablePtr(MR_CutMeshParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CutMeshParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CutMeshParameters_Destroy()` to free it when you're done using it.
MRC_API MR_CutMeshParameters *MR_CutMeshParameters_ConstructFromAnother(const MR_CutMeshParameters *_other);

/// Destroys a heap-allocated instance of `MR_CutMeshParameters`. Does nothing if the pointer is null.
MRC_API void MR_CutMeshParameters_Destroy(const MR_CutMeshParameters *_this);

/// Destroys a heap-allocated array of `MR_CutMeshParameters`. Does nothing if the pointer is null.
MRC_API void MR_CutMeshParameters_DestroyArray(const MR_CutMeshParameters *_this);

/// Generated from a method of class `MR::CutMeshParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CutMeshParameters *MR_CutMeshParameters_AssignFromAnother(MR_CutMeshParameters *_this, const MR_CutMeshParameters *_other);

/// Paths of new edges on mesh, they represent same contours as input, but already cut
/// Returns a pointer to a member variable of class `MR::CutMeshResult` named `resultCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_vector_MR_EdgeId *MR_CutMeshResult_Get_resultCut(const MR_CutMeshResult *_this);

/// Paths of new edges on mesh, they represent same contours as input, but already cut
/// Modifies a member variable of class `MR::CutMeshResult` named `resultCut`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CutMeshResult_Set_resultCut(MR_CutMeshResult *_this, MR_PassBy value_pass_by, MR_std_vector_std_vector_MR_EdgeId *value);

/// Paths of new edges on mesh, they represent same contours as input, but already cut
/// Returns a mutable pointer to a member variable of class `MR::CutMeshResult` named `resultCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_CutMeshResult_GetMutable_resultCut(MR_CutMeshResult *_this);

/// Bitset of bad triangles - triangles where input contours have intersections and cannot be cut and filled in a good way
/// \sa \ref MR::CutMeshParameters
/// Returns a pointer to a member variable of class `MR::CutMeshResult` named `fbsWithContourIntersections`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_CutMeshResult_Get_fbsWithContourIntersections(const MR_CutMeshResult *_this);

/// Bitset of bad triangles - triangles where input contours have intersections and cannot be cut and filled in a good way
/// \sa \ref MR::CutMeshParameters
/// Modifies a member variable of class `MR::CutMeshResult` named `fbsWithContourIntersections`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CutMeshResult_Set_fbsWithContourIntersections(MR_CutMeshResult *_this, MR_PassBy value_pass_by, MR_FaceBitSet *value);

/// Bitset of bad triangles - triangles where input contours have intersections and cannot be cut and filled in a good way
/// \sa \ref MR::CutMeshParameters
/// Returns a mutable pointer to a member variable of class `MR::CutMeshResult` named `fbsWithContourIntersections`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_CutMeshResult_GetMutable_fbsWithContourIntersections(MR_CutMeshResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CutMeshResult_Destroy()` to free it when you're done using it.
MRC_API MR_CutMeshResult *MR_CutMeshResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CutMeshResult_DestroyArray()`.
/// Use `MR_CutMeshResult_OffsetMutablePtr()` and `MR_CutMeshResult_OffsetPtr()` to access the array elements.
MRC_API MR_CutMeshResult *MR_CutMeshResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CutMeshResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CutMeshResult_Destroy()` to free it when you're done using it.
MRC_API MR_CutMeshResult *MR_CutMeshResult_ConstructFrom(MR_PassBy resultCut_pass_by, MR_std_vector_std_vector_MR_EdgeId *resultCut, MR_PassBy fbsWithContourIntersections_pass_by, MR_FaceBitSet *fbsWithContourIntersections);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CutMeshResult *MR_CutMeshResult_OffsetPtr(const MR_CutMeshResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CutMeshResult *MR_CutMeshResult_OffsetMutablePtr(MR_CutMeshResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CutMeshResult`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CutMeshResult_Destroy()` to free it when you're done using it.
MRC_API MR_CutMeshResult *MR_CutMeshResult_ConstructFromAnother(MR_PassBy _other_pass_by, MR_CutMeshResult *_other);

/// Destroys a heap-allocated instance of `MR_CutMeshResult`. Does nothing if the pointer is null.
MRC_API void MR_CutMeshResult_Destroy(const MR_CutMeshResult *_this);

/// Destroys a heap-allocated array of `MR_CutMeshResult`. Does nothing if the pointer is null.
MRC_API void MR_CutMeshResult_DestroyArray(const MR_CutMeshResult *_this);

/// Generated from a method of class `MR::CutMeshResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CutMeshResult *MR_CutMeshResult_AssignFromAnother(MR_CutMeshResult *_this, MR_PassBy _other_pass_by, MR_CutMeshResult *_other);

/**
* \brief Cuts mesh by given contours
* 
* This function cuts mesh making new edges paths on place of input contours
* \param mesh Input mesh that will be cut
* \param contours Input contours to cut mesh with, find more \ref MR::OneMeshContours
* \param params Parameters describing some cut options, find more \ref MR::CutMeshParameters
* \return New edges that correspond to given contours, find more \ref MR::CutMeshResult
* \parblock
* \warning Input contours should have no intersections, faces where contours intersects (`bad faces`) will not be allowed for fill
* \endparblock
* \parblock
* \warning Input mesh will be changed in any case, if `bad faces` are in mesh, mesh will be spoiled, \n
* so if you cannot guarantee contours without intersections better make copy of mesh, before using this function
* \endparblock
*/
/// Generated from function `MR::cutMesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CutMeshResult_Destroy()` to free it when you're done using it.
MRC_API MR_CutMeshResult *MR_cutMesh(MR_Mesh *mesh, const MR_std_vector_MR_OneMeshContour *contours, const MR_CutMeshParameters *params);

/// Cuts \p mesh by \p contour by projecting all the points
/// \param xf transformation from the CSYS of \p contour to the CSYS of \p mesh
/// \note \p mesh is modified, see \ref cutMesh for info
/// \return Faces to the left of the polyline
/// Generated from function `MR::cutMeshByContour`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `contour` can not be null. It is a single object.
/// Parameter `xf` is a single object.
/// Parameter `xf` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FaceBitSet_std_string *MR_cutMeshByContour(MR_Mesh *mesh, const MR_std_vector_MR_Vector3f *contour, const MR_AffineXf3f *xf);

/// Cuts \p mesh by \p contours by projecting all the points
/// \param xf transformation from the CSYS of \p contour to the CSYS of \p mesh
/// \note \p mesh is modified, see \ref cutMesh for info
/// \return Faces to the left of the polyline
/// Generated from function `MR::cutMeshByContours`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `xf` is a single object.
/// Parameter `xf` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FaceBitSet_std_string *MR_cutMeshByContours(MR_Mesh *mesh, const MR_std_vector_std_vector_MR_Vector3f *contours, const MR_AffineXf3f *xf);

/**
* \brief Makes continuous contour by iso-line from mesh tri points, if first and last meshTriPoint is the same, makes closed contour
*
* Finds shortest paths between neighbor \p surfaceLine and build offset contour on surface for MR::cutMesh input
* \param offset amount of offset form given point, note that absolute value is used and isoline in both direction returned
* \param searchSettings settings for search geodesic path
*/
/// Generated from function `MR::convertMeshTriPointsSurfaceOffsetToMeshContours`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `surfaceLine` can not be null. It is a single object.
/// Parameter `searchSettings` is a single object.
/// Parameter `searchSettings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_OneMeshContour_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_OneMeshContour_std_string *MR_convertMeshTriPointsSurfaceOffsetToMeshContours_float(const MR_Mesh *mesh, const MR_std_vector_MR_MeshTriPoint *surfaceLine, float offset, const MR_SearchPathSettings *searchSettings);

/**
* \brief Makes continuous contour by iso-line from mesh tri points, if first and last meshTriPoint is the same, makes closed contour
*
* Finds shortest paths between neighbor \p surfaceLine and build offset contour on surface for MR::cutMesh input
* \param offsetAtPoint functor that returns amount of offset form arg point, note that absolute value is used and isoline in both direction returned
* \param searchSettings settings for search geodesic path
*/
/// Generated from function `MR::convertMeshTriPointsSurfaceOffsetToMeshContours`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `surfaceLine` can not be null. It is a single object.
/// Parameter `offsetAtPoint` can not be null. It is a single object.
/// Parameter `searchSettings` is a single object.
/// Parameter `searchSettings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_OneMeshContour_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_OneMeshContour_std_string *MR_convertMeshTriPointsSurfaceOffsetToMeshContours_std_function_float_func_from_int32_t(const MR_Mesh *mesh, const MR_std_vector_MR_MeshTriPoint *surfaceLine, const MR_std_function_float_from_int32_t *offsetAtPoint, const MR_SearchPathSettings *searchSettings);

#ifdef __cplusplus
} // extern "C"
#endif
