// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FillHoleMetric MR_FillHoleMetric; // Defined in `#include <MRCMesh/MRMeshMetrics.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_MR_Vector3f_from_const_MR_Vector3f_ref.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_FillHoleItem MR_std_vector_MR_FillHoleItem; // Defined in `#include <MRCMisc/std_vector_MR_FillHoleItem.h>`.
typedef struct MR_std_vector_MR_HoleFillPlan MR_std_vector_MR_HoleFillPlan; // Defined in `#include <MRCMisc/std_vector_MR_HoleFillPlan.h>`.


/** \struct MR::FillHoleParams
* \brief Parameters structure for MR::fillHole\n
* Structure has some options to control MR::fillHole
* 
* \sa \ref fillHole
* \sa \ref FillHoleMetric
*/
/// Generated from class `MR::FillHoleParams`.
typedef struct MR_FillHoleParams MR_FillHoleParams;

/** If Strong makes additional efforts to avoid creating multiple edges, 
* in some rare cases it is not possible (cases with extremely bad topology), 
* if you faced one try to use \ref MR::duplicateMultiHoleVertices before \ref MR::fillHole
* 
* If Simple avoid creating edges that already exist in topology (default)
* 
* If None do not avoid multiple edges
*/
typedef int32_t MR_FillHoleParams_MultipleEdgesResolveMode;
enum // MR_FillHoleParams_MultipleEdgesResolveMode
{
    MR_FillHoleParams_MultipleEdgesResolveMode_None = 0,
    MR_FillHoleParams_MultipleEdgesResolveMode_Simple = 1,
    MR_FillHoleParams_MultipleEdgesResolveMode_Strong = 2,
};

/** \struct MR::StitchHolesParams
* \brief Parameters structure for MR::buildCylinderBetweenTwoHoles\n
* Structure has some options to control MR::buildCylinderBetweenTwoHoles
*
* \sa \ref buildCylinderBetweenTwoHoles
* \sa \ref FillHoleMetric
*/
/// Generated from class `MR::StitchHolesParams`.
typedef struct MR_StitchHolesParams MR_StitchHolesParams;

/// Generated from class `MR::FillHoleItem`.
typedef struct MR_FillHoleItem MR_FillHoleItem;

/// concise representation of proposed hole triangulation
/// Generated from class `MR::HoleFillPlan`.
typedef struct MR_HoleFillPlan MR_HoleFillPlan;

/// Generated from class `MR::MakeBridgeResult`.
typedef struct MR_MakeBridgeResult MR_MakeBridgeResult;

/** Specifies triangulation metric\n
* default for MR::fillHole: getCircumscribedFillMetric\n
* \sa \ref FillHoleMetric
*/
/// Returns a pointer to a member variable of class `MR::FillHoleParams` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FillHoleMetric *MR_FillHoleParams_Get_metric(const MR_FillHoleParams *_this);

/** Specifies triangulation metric\n
* default for MR::fillHole: getCircumscribedFillMetric\n
* \sa \ref FillHoleMetric
*/
/// Modifies a member variable of class `MR::FillHoleParams` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleParams_Set_metric(MR_FillHoleParams *_this, MR_PassBy value_pass_by, MR_FillHoleMetric *value);

/** Specifies triangulation metric\n
* default for MR::fillHole: getCircumscribedFillMetric\n
* \sa \ref FillHoleMetric
*/
/// Returns a mutable pointer to a member variable of class `MR::FillHoleParams` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FillHoleMetric *MR_FillHoleParams_GetMutable_metric(MR_FillHoleParams *_this);

/** If true, hole filling will minimize the sum of metrics including boundary edges,
*   where one triangle was present before hole filling, and another is added during hole filling.
*   This makes boundary edges same smooth as inner edges of the patch.
*   If false, edge metric will not be applied to boundary edges, and the patch tends to make a sharper turn there.
*/
/// Returns a pointer to a member variable of class `MR::FillHoleParams` named `smoothBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_FillHoleParams_Get_smoothBd(const MR_FillHoleParams *_this);

/** If true, hole filling will minimize the sum of metrics including boundary edges,
*   where one triangle was present before hole filling, and another is added during hole filling.
*   This makes boundary edges same smooth as inner edges of the patch.
*   If false, edge metric will not be applied to boundary edges, and the patch tends to make a sharper turn there.
*/
/// Modifies a member variable of class `MR::FillHoleParams` named `smoothBd`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleParams_Set_smoothBd(MR_FillHoleParams *_this, bool value);

/** If true, hole filling will minimize the sum of metrics including boundary edges,
*   where one triangle was present before hole filling, and another is added during hole filling.
*   This makes boundary edges same smooth as inner edges of the patch.
*   If false, edge metric will not be applied to boundary edges, and the patch tends to make a sharper turn there.
*/
/// Returns a mutable pointer to a member variable of class `MR::FillHoleParams` named `smoothBd`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_FillHoleParams_GetMutable_smoothBd(MR_FillHoleParams *_this);

/// If not nullptr accumulate new faces
/// Returns a pointer to a member variable of class `MR::FillHoleParams` named `outNewFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_FillHoleParams_Get_outNewFaces(const MR_FillHoleParams *_this);

/// If not nullptr accumulate new faces
/// Modifies a member variable of class `MR::FillHoleParams` named `outNewFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleParams_Set_outNewFaces(MR_FillHoleParams *_this, MR_FaceBitSet *value);

/// If not nullptr accumulate new faces
/// Returns a mutable pointer to a member variable of class `MR::FillHoleParams` named `outNewFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_FillHoleParams_GetMutable_outNewFaces(MR_FillHoleParams *_this);

/// Returns a pointer to a member variable of class `MR::FillHoleParams` named `multipleEdgesResolveMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FillHoleParams_MultipleEdgesResolveMode *MR_FillHoleParams_Get_multipleEdgesResolveMode(const MR_FillHoleParams *_this);

/// Modifies a member variable of class `MR::FillHoleParams` named `multipleEdgesResolveMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleParams_Set_multipleEdgesResolveMode(MR_FillHoleParams *_this, MR_FillHoleParams_MultipleEdgesResolveMode value);

/// Returns a mutable pointer to a member variable of class `MR::FillHoleParams` named `multipleEdgesResolveMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FillHoleParams_MultipleEdgesResolveMode *MR_FillHoleParams_GetMutable_multipleEdgesResolveMode(MR_FillHoleParams *_this);

/** If true creates degenerate faces band around hole to have sharp angle visualization
* \warning This flag bad for result topology, most likely you do not need it
*/
/// Returns a pointer to a member variable of class `MR::FillHoleParams` named `makeDegenerateBand`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_FillHoleParams_Get_makeDegenerateBand(const MR_FillHoleParams *_this);

/** If true creates degenerate faces band around hole to have sharp angle visualization
* \warning This flag bad for result topology, most likely you do not need it
*/
/// Modifies a member variable of class `MR::FillHoleParams` named `makeDegenerateBand`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleParams_Set_makeDegenerateBand(MR_FillHoleParams *_this, bool value);

/** If true creates degenerate faces band around hole to have sharp angle visualization
* \warning This flag bad for result topology, most likely you do not need it
*/
/// Returns a mutable pointer to a member variable of class `MR::FillHoleParams` named `makeDegenerateBand`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_FillHoleParams_GetMutable_makeDegenerateBand(MR_FillHoleParams *_this);

/** The maximum number of polygon subdivisions on a triangle and two smaller polygons,
* must be 2 or larger
*/
/// Returns a pointer to a member variable of class `MR::FillHoleParams` named `maxPolygonSubdivisions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_FillHoleParams_Get_maxPolygonSubdivisions(const MR_FillHoleParams *_this);

/** The maximum number of polygon subdivisions on a triangle and two smaller polygons,
* must be 2 or larger
*/
/// Modifies a member variable of class `MR::FillHoleParams` named `maxPolygonSubdivisions`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleParams_Set_maxPolygonSubdivisions(MR_FillHoleParams *_this, int32_t value);

/** The maximum number of polygon subdivisions on a triangle and two smaller polygons,
* must be 2 or larger
*/
/// Returns a mutable pointer to a member variable of class `MR::FillHoleParams` named `maxPolygonSubdivisions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_FillHoleParams_GetMutable_maxPolygonSubdivisions(MR_FillHoleParams *_this);

/** Input/output value, if it is present: 
* returns true if triangulation was bad and do not actually fill hole, 
* if triangulation is ok returns false; 
* if it is not present fill hole trivially in case of bad triangulation, (or leaves bad triangulation, depending on metric)
*/
/// Returns a pointer to a member variable of class `MR::FillHoleParams` named `stopBeforeBadTriangulation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *const *MR_FillHoleParams_Get_stopBeforeBadTriangulation(const MR_FillHoleParams *_this);

/** Input/output value, if it is present: 
* returns true if triangulation was bad and do not actually fill hole, 
* if triangulation is ok returns false; 
* if it is not present fill hole trivially in case of bad triangulation, (or leaves bad triangulation, depending on metric)
*/
/// Modifies a member variable of class `MR::FillHoleParams` named `stopBeforeBadTriangulation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleParams_Set_stopBeforeBadTriangulation(MR_FillHoleParams *_this, bool *value);

/** Input/output value, if it is present: 
* returns true if triangulation was bad and do not actually fill hole, 
* if triangulation is ok returns false; 
* if it is not present fill hole trivially in case of bad triangulation, (or leaves bad triangulation, depending on metric)
*/
/// Returns a mutable pointer to a member variable of class `MR::FillHoleParams` named `stopBeforeBadTriangulation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool **MR_FillHoleParams_GetMutable_stopBeforeBadTriangulation(MR_FillHoleParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleParams_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleParams *MR_FillHoleParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FillHoleParams_DestroyArray()`.
/// Use `MR_FillHoleParams_OffsetMutablePtr()` and `MR_FillHoleParams_OffsetPtr()` to access the array elements.
MRC_API MR_FillHoleParams *MR_FillHoleParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FillHoleParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleParams_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleParams *MR_FillHoleParams_ConstructFrom(MR_PassBy metric_pass_by, MR_FillHoleMetric *metric, bool smoothBd, MR_FaceBitSet *outNewFaces, MR_FillHoleParams_MultipleEdgesResolveMode multipleEdgesResolveMode, bool makeDegenerateBand, int32_t maxPolygonSubdivisions, bool *stopBeforeBadTriangulation);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FillHoleParams *MR_FillHoleParams_OffsetPtr(const MR_FillHoleParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FillHoleParams *MR_FillHoleParams_OffsetMutablePtr(MR_FillHoleParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FillHoleParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleParams_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleParams *MR_FillHoleParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FillHoleParams *_other);

/// Destroys a heap-allocated instance of `MR_FillHoleParams`. Does nothing if the pointer is null.
MRC_API void MR_FillHoleParams_Destroy(const MR_FillHoleParams *_this);

/// Destroys a heap-allocated array of `MR_FillHoleParams`. Does nothing if the pointer is null.
MRC_API void MR_FillHoleParams_DestroyArray(const MR_FillHoleParams *_this);

/// Generated from a method of class `MR::FillHoleParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FillHoleParams *MR_FillHoleParams_AssignFromAnother(MR_FillHoleParams *_this, MR_PassBy _other_pass_by, MR_FillHoleParams *_other);

/** Specifies triangulation metric\n
* default for MR::buildCylinderBetweenTwoHoles: getComplexStitchMetric
* \sa \ref FillHoleMetric
*/
/// Returns a pointer to a member variable of class `MR::StitchHolesParams` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FillHoleMetric *MR_StitchHolesParams_Get_metric(const MR_StitchHolesParams *_this);

/** Specifies triangulation metric\n
* default for MR::buildCylinderBetweenTwoHoles: getComplexStitchMetric
* \sa \ref FillHoleMetric
*/
/// Modifies a member variable of class `MR::StitchHolesParams` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_StitchHolesParams_Set_metric(MR_StitchHolesParams *_this, MR_PassBy value_pass_by, MR_FillHoleMetric *value);

/** Specifies triangulation metric\n
* default for MR::buildCylinderBetweenTwoHoles: getComplexStitchMetric
* \sa \ref FillHoleMetric
*/
/// Returns a mutable pointer to a member variable of class `MR::StitchHolesParams` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FillHoleMetric *MR_StitchHolesParams_GetMutable_metric(MR_StitchHolesParams *_this);

/// If not nullptr accumulate new faces
/// Returns a pointer to a member variable of class `MR::StitchHolesParams` named `outNewFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_StitchHolesParams_Get_outNewFaces(const MR_StitchHolesParams *_this);

/// If not nullptr accumulate new faces
/// Modifies a member variable of class `MR::StitchHolesParams` named `outNewFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_StitchHolesParams_Set_outNewFaces(MR_StitchHolesParams *_this, MR_FaceBitSet *value);

/// If not nullptr accumulate new faces
/// Returns a mutable pointer to a member variable of class `MR::StitchHolesParams` named `outNewFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_StitchHolesParams_GetMutable_outNewFaces(MR_StitchHolesParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StitchHolesParams_Destroy()` to free it when you're done using it.
MRC_API MR_StitchHolesParams *MR_StitchHolesParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_StitchHolesParams_DestroyArray()`.
/// Use `MR_StitchHolesParams_OffsetMutablePtr()` and `MR_StitchHolesParams_OffsetPtr()` to access the array elements.
MRC_API MR_StitchHolesParams *MR_StitchHolesParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::StitchHolesParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StitchHolesParams_Destroy()` to free it when you're done using it.
MRC_API MR_StitchHolesParams *MR_StitchHolesParams_ConstructFrom(MR_PassBy metric_pass_by, MR_FillHoleMetric *metric, MR_FaceBitSet *outNewFaces);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_StitchHolesParams *MR_StitchHolesParams_OffsetPtr(const MR_StitchHolesParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_StitchHolesParams *MR_StitchHolesParams_OffsetMutablePtr(MR_StitchHolesParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::StitchHolesParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_StitchHolesParams_Destroy()` to free it when you're done using it.
MRC_API MR_StitchHolesParams *MR_StitchHolesParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_StitchHolesParams *_other);

/// Destroys a heap-allocated instance of `MR_StitchHolesParams`. Does nothing if the pointer is null.
MRC_API void MR_StitchHolesParams_Destroy(const MR_StitchHolesParams *_this);

/// Destroys a heap-allocated array of `MR_StitchHolesParams`. Does nothing if the pointer is null.
MRC_API void MR_StitchHolesParams_DestroyArray(const MR_StitchHolesParams *_this);

/// Generated from a method of class `MR::StitchHolesParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_StitchHolesParams *MR_StitchHolesParams_AssignFromAnother(MR_StitchHolesParams *_this, MR_PassBy _other_pass_by, MR_StitchHolesParams *_other);

/** \brief Stitches two holes in Mesh\n
*
* Build cylindrical patch to fill space between two holes represented by one of their edges each,\n
* default metric: ComplexStitchMetric
*
* \image html fill/before_stitch.png "Before" width = 250cm
* \image html fill/stitch.png "After" width = 250cm
* 
* Next picture show, how newly generated faces can be smoothed
* \ref MR::positionVertsSmoothly
* \ref MR::subdivideMesh
* \image html fill/stitch_smooth.png "Stitch with smooth" width = 250cm
* 
* \snippet cpp-examples/MeshStitchHole.dox.cpp 0
* 
* \param mesh mesh with hole
* \param a EdgeId which represents 1st hole (should not have valid left FaceId)
* \param b EdgeId which represents 2nd hole (should not have valid left FaceId)
* \param params parameters of holes stitching
*
* \sa \ref fillHole
* \sa \ref StitchHolesParams
*/
/// Generated from function `MR::buildCylinderBetweenTwoHoles`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_buildCylinderBetweenTwoHoles_4(MR_Mesh *mesh, MR_EdgeId a, MR_EdgeId b, const MR_StitchHolesParams *params);

/// this version finds holes in the mesh by itself and returns false if they are not found
/// Generated from function `MR::buildCylinderBetweenTwoHoles`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
MRC_API bool MR_buildCylinderBetweenTwoHoles_2(MR_Mesh *mesh, const MR_StitchHolesParams *params);

/** \brief Fills hole in mesh\n
* 
* Fills given hole represented by one of its edges (having no valid left face),\n
* uses fillHoleTrivially if cannot fill hole without multiple edges,\n
* default metric: CircumscribedFillMetric
* 
* \image html fill/before_fill.png "Before" width = 250cm
* \image html fill/fill.png "After" width = 250cm
*
* Next picture show, how newly generated faces can be smoothed
* \ref MR::positionVertsSmoothly
* \ref MR::subdivideMesh
* \image html fill/fill_smooth.png "Fill with smooth" width = 250cm
* 
* \param mesh mesh with hole
* \param a EdgeId which represents hole (should not have valid left FaceId)
* \param params parameters of hole filling
* 
* \sa \ref buildCylinderBetweenTwoHoles
* \sa \ref fillHoleTrivially
* \sa \ref FillHoleParams
*/
/// Generated from function `MR::fillHole`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_fillHole(MR_Mesh *mesh, MR_EdgeId a, const MR_FillHoleParams *params);

/// fill all holes given by their representative edges in \param as
/// Generated from function `MR::fillHoles`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `as` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_fillHoles(MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *as, const MR_FillHoleParams *params);

/// returns true if given loop is a boundary of one hole in given mesh topology:
/// * every edge in the loop does not have left face,
/// * next/prev edges in the loop are related as follows: next = topology.prev( prev.sym() )
/// if the function returns true, then any edge from the loop passed to \ref fillHole will fill the same hole
/// Generated from function `MR::isHoleBd`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `loop` can not be null. It is a single object.
MRC_API bool MR_isHoleBd(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgeId *loop);

// if not-negative number then it is edgeid;
// otherwise it refers to the edge created recently
/// Returns a pointer to a member variable of class `MR::FillHoleItem` named `edgeCode1`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_FillHoleItem_Get_edgeCode1(const MR_FillHoleItem *_this);

// if not-negative number then it is edgeid;
// otherwise it refers to the edge created recently
/// Modifies a member variable of class `MR::FillHoleItem` named `edgeCode1`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleItem_Set_edgeCode1(MR_FillHoleItem *_this, int32_t value);

// if not-negative number then it is edgeid;
// otherwise it refers to the edge created recently
/// Returns a mutable pointer to a member variable of class `MR::FillHoleItem` named `edgeCode1`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_FillHoleItem_GetMutable_edgeCode1(MR_FillHoleItem *_this);

// if not-negative number then it is edgeid;
// otherwise it refers to the edge created recently
/// Returns a pointer to a member variable of class `MR::FillHoleItem` named `edgeCode2`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_FillHoleItem_Get_edgeCode2(const MR_FillHoleItem *_this);

// if not-negative number then it is edgeid;
// otherwise it refers to the edge created recently
/// Modifies a member variable of class `MR::FillHoleItem` named `edgeCode2`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleItem_Set_edgeCode2(MR_FillHoleItem *_this, int32_t value);

// if not-negative number then it is edgeid;
// otherwise it refers to the edge created recently
/// Returns a mutable pointer to a member variable of class `MR::FillHoleItem` named `edgeCode2`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_FillHoleItem_GetMutable_edgeCode2(MR_FillHoleItem *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleItem_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleItem *MR_FillHoleItem_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FillHoleItem_DestroyArray()`.
/// Use `MR_FillHoleItem_OffsetMutablePtr()` and `MR_FillHoleItem_OffsetPtr()` to access the array elements.
MRC_API MR_FillHoleItem *MR_FillHoleItem_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FillHoleItem` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleItem_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleItem *MR_FillHoleItem_ConstructFrom(int32_t edgeCode1, int32_t edgeCode2);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FillHoleItem *MR_FillHoleItem_OffsetPtr(const MR_FillHoleItem *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FillHoleItem *MR_FillHoleItem_OffsetMutablePtr(MR_FillHoleItem *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FillHoleItem`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleItem_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleItem *MR_FillHoleItem_ConstructFromAnother(const MR_FillHoleItem *_other);

/// Destroys a heap-allocated instance of `MR_FillHoleItem`. Does nothing if the pointer is null.
MRC_API void MR_FillHoleItem_Destroy(const MR_FillHoleItem *_this);

/// Destroys a heap-allocated array of `MR_FillHoleItem`. Does nothing if the pointer is null.
MRC_API void MR_FillHoleItem_DestroyArray(const MR_FillHoleItem *_this);

/// Generated from a method of class `MR::FillHoleItem` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FillHoleItem *MR_FillHoleItem_AssignFromAnother(MR_FillHoleItem *_this, const MR_FillHoleItem *_other);

/// Returns a pointer to a member variable of class `MR::HoleFillPlan` named `items`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_FillHoleItem *MR_HoleFillPlan_Get_items(const MR_HoleFillPlan *_this);

/// Modifies a member variable of class `MR::HoleFillPlan` named `items`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_HoleFillPlan_Set_items(MR_HoleFillPlan *_this, MR_PassBy value_pass_by, MR_std_vector_MR_FillHoleItem *value);

/// Returns a mutable pointer to a member variable of class `MR::HoleFillPlan` named `items`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_FillHoleItem *MR_HoleFillPlan_GetMutable_items(MR_HoleFillPlan *_this);

// the number of triangles in the filling
/// Returns a pointer to a member variable of class `MR::HoleFillPlan` named `numTris`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_HoleFillPlan_Get_numTris(const MR_HoleFillPlan *_this);

// the number of triangles in the filling
/// Modifies a member variable of class `MR::HoleFillPlan` named `numTris`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_HoleFillPlan_Set_numTris(MR_HoleFillPlan *_this, int32_t value);

// the number of triangles in the filling
/// Returns a mutable pointer to a member variable of class `MR::HoleFillPlan` named `numTris`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_HoleFillPlan_GetMutable_numTris(MR_HoleFillPlan *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_HoleFillPlan_Destroy()` to free it when you're done using it.
MRC_API MR_HoleFillPlan *MR_HoleFillPlan_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_HoleFillPlan_DestroyArray()`.
/// Use `MR_HoleFillPlan_OffsetMutablePtr()` and `MR_HoleFillPlan_OffsetPtr()` to access the array elements.
MRC_API MR_HoleFillPlan *MR_HoleFillPlan_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::HoleFillPlan` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_HoleFillPlan_Destroy()` to free it when you're done using it.
MRC_API MR_HoleFillPlan *MR_HoleFillPlan_ConstructFrom(MR_PassBy items_pass_by, MR_std_vector_MR_FillHoleItem *items, int32_t numTris);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_HoleFillPlan *MR_HoleFillPlan_OffsetPtr(const MR_HoleFillPlan *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_HoleFillPlan *MR_HoleFillPlan_OffsetMutablePtr(MR_HoleFillPlan *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::HoleFillPlan`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_HoleFillPlan_Destroy()` to free it when you're done using it.
MRC_API MR_HoleFillPlan *MR_HoleFillPlan_ConstructFromAnother(MR_PassBy _other_pass_by, MR_HoleFillPlan *_other);

/// Destroys a heap-allocated instance of `MR_HoleFillPlan`. Does nothing if the pointer is null.
MRC_API void MR_HoleFillPlan_Destroy(const MR_HoleFillPlan *_this);

/// Destroys a heap-allocated array of `MR_HoleFillPlan`. Does nothing if the pointer is null.
MRC_API void MR_HoleFillPlan_DestroyArray(const MR_HoleFillPlan *_this);

/// Generated from a method of class `MR::HoleFillPlan` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_HoleFillPlan *MR_HoleFillPlan_AssignFromAnother(MR_HoleFillPlan *_this, MR_PassBy _other_pass_by, MR_HoleFillPlan *_other);

/// prepares the plan how to triangulate the face or hole to the left of (e) (not filling it immediately),
/// several getHoleFillPlan can work in parallel
/// Generated from function `MR::getHoleFillPlan`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_HoleFillPlan_Destroy()` to free it when you're done using it.
MRC_API MR_HoleFillPlan *MR_getHoleFillPlan(const MR_Mesh *mesh, MR_EdgeId e, const MR_FillHoleParams *params);

/// prepares the plans how to triangulate the faces or holes, each given by a boundary edge (with filling target to the left),
/// the plans are prepared in parallel with minimal memory allocation compared to manual calling of several getHoleFillPlan(), but it can inefficient when some holes are very complex
/// Generated from function `MR::getHoleFillPlans`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `holeRepresentativeEdges` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_HoleFillPlan_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_HoleFillPlan *MR_getHoleFillPlans(const MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *holeRepresentativeEdges, const MR_FillHoleParams *params);

/// prepares the plan how to triangulate the planar face or planar hole to the left of (e) (not filling it immediately),
/// several getPlanarHoleFillPlan can work in parallel
/// Generated from function `MR::getPlanarHoleFillPlan`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_HoleFillPlan_Destroy()` to free it when you're done using it.
MRC_API MR_HoleFillPlan *MR_getPlanarHoleFillPlan(const MR_Mesh *mesh, MR_EdgeId e);

/// prepares the plans how to triangulate the planar faces or holes, each given by a boundary edge (with filling target to the left),
/// the plans are prepared in parallel with minimal memory allocation compared to manual calling of several getPlanarHoleFillPlan(), but it can inefficient when some holes are very complex
/// Generated from function `MR::getPlanarHoleFillPlans`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `holeRepresentativeEdges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_HoleFillPlan_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_HoleFillPlan *MR_getPlanarHoleFillPlans(const MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *holeRepresentativeEdges);

/// quickly triangulates the face or hole to the left of (e) given the plan (quickly compared to fillHole function)
/// Generated from function `MR::executeHoleFillPlan`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `plan` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
MRC_API void MR_executeHoleFillPlan(MR_Mesh *mesh, MR_EdgeId a0, MR_HoleFillPlan *plan, MR_FaceBitSet *outNewFaces);

/** \brief Triangulates face of hole in mesh trivially\n
*
*
* Fills given hole represented by one of its edges (having no valid left face)\n
* by creating one new vertex in the centroid of boundary vertices and connecting new vertex with all boundary vertices.
*
* \image html fill/before_fill.png "Before" width = 250cm
* \image html fill/fill_triv.png "After" width = 250cm
*
* Next picture show, how newly generated faces can be smoothed
* \ref MR::positionVertsSmoothly
* \ref MR::subdivideMesh
* \image html fill/fill_triv_smooth.png "Trivial fill with smooth" width = 250cm
*
* \param mesh mesh with hole
* \param a EdgeId points on the face or hole to the left that will be triangulated
* \param outNewFaces optional output newly generated faces
* \return new vertex
* 
* \sa \ref fillHole
*/
/// Generated from function `MR::fillHoleTrivially`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
MRC_API MR_VertId MR_fillHoleTrivially(MR_Mesh *mesh, MR_EdgeId a, MR_FaceBitSet *outNewFaces);

/// adds cylindrical extension of given hole represented by one of its edges (having no valid left face)
/// by adding new vertices located in given plane and 2 * number_of_hole_edge triangles;
/// \return the edge of new hole opposite to input edge (a)
/// Generated from function `MR::extendHole`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_extendHole_MR_Plane3f(MR_Mesh *mesh, MR_EdgeId a, const MR_Plane3f *plane, MR_FaceBitSet *outNewFaces);

/// adds cylindrical extension of too all holes of the mesh by calling extendHole(...);
/// \return representative edges of one per every hole after extension
/// Generated from function `MR::extendAllHoles`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_extendAllHoles(MR_Mesh *mesh, const MR_Plane3f *plane, MR_FaceBitSet *outNewFaces);

/// adds extension of given hole represented by one of its edges (having no valid left face)
/// by adding new vertices located at getVertPos( existing vertex position );
/// \return the edge of new hole opposite to input edge (a)
/// Generated from function `MR::extendHole`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_extendHole_std_function_MR_Vector3f_func_from_const_MR_Vector3f_ref(MR_Mesh *mesh, MR_EdgeId a, MR_PassBy getVertPos_pass_by, MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref *getVertPos, MR_FaceBitSet *outNewFaces);

/// adds cylindrical extension of given hole represented by one of its edges (having no valid left face)
/// by adding new vertices located in lowest point of the hole -dir*holeExtension and 2 * number_of_hole_edge triangles;
/// \return the edge of new hole opposite to input edge (a)
/// Generated from function `MR::buildBottom`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_buildBottom(MR_Mesh *mesh, MR_EdgeId a, MR_Vector3f dir, float holeExtension, MR_FaceBitSet *outNewFaces);

/// creates a band of degenerate triangles around given hole;
/// \return the edge of new hole opposite to input edge (a)
/// Generated from function `MR::makeDegenerateBandAroundHole`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
MRC_API MR_EdgeId MR_makeDegenerateBandAroundHole(MR_Mesh *mesh, MR_EdgeId a, MR_FaceBitSet *outNewFaces);

/// the number of faces added to the mesh
/// Returns a pointer to a member variable of class `MR::MakeBridgeResult` named `newFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MakeBridgeResult_Get_newFaces(const MR_MakeBridgeResult *_this);

/// the number of faces added to the mesh
/// Modifies a member variable of class `MR::MakeBridgeResult` named `newFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeBridgeResult_Set_newFaces(MR_MakeBridgeResult *_this, int32_t value);

/// the number of faces added to the mesh
/// Returns a mutable pointer to a member variable of class `MR::MakeBridgeResult` named `newFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MakeBridgeResult_GetMutable_newFaces(MR_MakeBridgeResult *_this);

/// the edge na (nb) if valid is a new boundary edge of the created bridge without left face,
/// having the same origin as input edge a (b)
/// Returns a pointer to a member variable of class `MR::MakeBridgeResult` named `na`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_MakeBridgeResult_Get_na(const MR_MakeBridgeResult *_this);

/// the edge na (nb) if valid is a new boundary edge of the created bridge without left face,
/// having the same origin as input edge a (b)
/// Modifies a member variable of class `MR::MakeBridgeResult` named `na`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeBridgeResult_Set_na(MR_MakeBridgeResult *_this, MR_EdgeId value);

/// the edge na (nb) if valid is a new boundary edge of the created bridge without left face,
/// having the same origin as input edge a (b)
/// Returns a mutable pointer to a member variable of class `MR::MakeBridgeResult` named `na`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_MakeBridgeResult_GetMutable_na(MR_MakeBridgeResult *_this);

/// the edge na (nb) if valid is a new boundary edge of the created bridge without left face,
/// having the same origin as input edge a (b)
/// Returns a pointer to a member variable of class `MR::MakeBridgeResult` named `nb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EdgeId *MR_MakeBridgeResult_Get_nb(const MR_MakeBridgeResult *_this);

/// the edge na (nb) if valid is a new boundary edge of the created bridge without left face,
/// having the same origin as input edge a (b)
/// Modifies a member variable of class `MR::MakeBridgeResult` named `nb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MakeBridgeResult_Set_nb(MR_MakeBridgeResult *_this, MR_EdgeId value);

/// the edge na (nb) if valid is a new boundary edge of the created bridge without left face,
/// having the same origin as input edge a (b)
/// Returns a mutable pointer to a member variable of class `MR::MakeBridgeResult` named `nb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EdgeId *MR_MakeBridgeResult_GetMutable_nb(MR_MakeBridgeResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeBridgeResult_Destroy()` to free it when you're done using it.
MRC_API MR_MakeBridgeResult *MR_MakeBridgeResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MakeBridgeResult_DestroyArray()`.
/// Use `MR_MakeBridgeResult_OffsetMutablePtr()` and `MR_MakeBridgeResult_OffsetPtr()` to access the array elements.
MRC_API MR_MakeBridgeResult *MR_MakeBridgeResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MakeBridgeResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeBridgeResult_Destroy()` to free it when you're done using it.
MRC_API MR_MakeBridgeResult *MR_MakeBridgeResult_ConstructFrom(int32_t newFaces, MR_EdgeId na, MR_EdgeId nb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MakeBridgeResult *MR_MakeBridgeResult_OffsetPtr(const MR_MakeBridgeResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MakeBridgeResult *MR_MakeBridgeResult_OffsetMutablePtr(MR_MakeBridgeResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MakeBridgeResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeBridgeResult_Destroy()` to free it when you're done using it.
MRC_API MR_MakeBridgeResult *MR_MakeBridgeResult_ConstructFromAnother(const MR_MakeBridgeResult *_other);

/// Destroys a heap-allocated instance of `MR_MakeBridgeResult`. Does nothing if the pointer is null.
MRC_API void MR_MakeBridgeResult_Destroy(const MR_MakeBridgeResult *_this);

/// Destroys a heap-allocated array of `MR_MakeBridgeResult`. Does nothing if the pointer is null.
MRC_API void MR_MakeBridgeResult_DestroyArray(const MR_MakeBridgeResult *_this);

/// bridge construction is successful if at least one new face was created
/// Generated from a conversion operator of class `MR::MakeBridgeResult` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MakeBridgeResult_ConvertTo_bool(const MR_MakeBridgeResult *_this);

/// Generated from a method of class `MR::MakeBridgeResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MakeBridgeResult *MR_MakeBridgeResult_AssignFromAnother(MR_MakeBridgeResult *_this, const MR_MakeBridgeResult *_other);

/// creates a bridge between two boundary edges a and b (both having no valid left face);
/// bridge consists of one quadrangle in general (beware that it cannot be rendered) or of one triangle if a and b are neighboring edges on the boundary;
/// \return false if bridge cannot be created because otherwise multiple edges appear
/// Generated from function `MR::makeQuadBridge`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeBridgeResult_Destroy()` to free it when you're done using it.
MRC_API MR_MakeBridgeResult *MR_makeQuadBridge(MR_MeshTopology *topology, MR_EdgeId a, MR_EdgeId b, MR_FaceBitSet *outNewFaces);

/// creates a bridge between two boundary edges a and b (both having no valid left face);
/// bridge consists of two triangles in general or of one triangle if a and b are neighboring edges on the boundary;
/// \return MakeBridgeResult evaluating to false if bridge cannot be created because otherwise multiple edges appear
/// Generated from function `MR::makeBridge`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeBridgeResult_Destroy()` to free it when you're done using it.
MRC_API MR_MakeBridgeResult *MR_makeBridge(MR_MeshTopology *topology, MR_EdgeId a, MR_EdgeId b, MR_FaceBitSet *outNewFaces);

/// creates a bridge between two boundary edges a and b (both having no valid left face);
/// bridge consists of strip of quadrangles (each consisting of two triangles) in general or of some triangles if a and b are neighboring edges on the boundary;
/// the bridge is made as smooth as possible with small angles in between its links and on the boundary with existed triangles;
/// \param samplingStep boundaries of the bridge will be subdivided until the distance between neighbor points becomes less than this distance
/// \return MakeBridgeResult evaluating to false if bridge cannot be created because otherwise multiple edges appear
/// Generated from function `MR::makeSmoothBridge`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MakeBridgeResult_Destroy()` to free it when you're done using it.
MRC_API MR_MakeBridgeResult *MR_makeSmoothBridge(MR_Mesh *mesh, MR_EdgeId a, MR_EdgeId b, float samplingStep, MR_FaceBitSet *outNewFaces);

/// creates a new bridge edge between origins of two boundary edges a and b (both having no valid left face);
/// \return invalid id if bridge cannot be created because otherwise multiple edges appear
/// Generated from function `MR::makeBridgeEdge`.
/// Parameter `topology` can not be null. It is a single object.
MRC_API MR_EdgeId MR_makeBridgeEdge(MR_MeshTopology *topology, MR_EdgeId a, MR_EdgeId b);

/// given quadrangle face to the left of a, splits it in two triangles with new diagonal edge via dest(a)
/// Generated from function `MR::splitQuad`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `outNewFaces` defaults to a null pointer in C++.
MRC_API void MR_splitQuad(MR_MeshTopology *topology, MR_EdgeId a, MR_FaceBitSet *outNewFaces);

#ifdef __cplusplus
} // extern "C"
#endif
