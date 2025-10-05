// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_std_vector_MR_EdgePoint_std_string MR_expected_std_vector_MR_EdgePoint_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_EdgePoint_std_string.h>`.
typedef struct MR_std_function_float_from_MR_VertId MR_std_function_float_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_float_from_MR_VertId.h>`.
typedef struct MR_std_vector_MR_EdgePoint MR_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_MR_FaceId MR_std_vector_MR_FaceId; // Defined in `#include <MRCMisc/std_vector_MR_FaceId.h>`.
typedef struct MR_std_vector_MR_LineSegm3f MR_std_vector_MR_LineSegm3f; // Defined in `#include <MRCMisc/std_vector_MR_LineSegm3f.h>`.
typedef struct MR_std_vector_MR_Vector2f MR_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_MR_Vector2f.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgePoint MR_std_vector_std_vector_MR_EdgePoint; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgePoint.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector2f MR_std_vector_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector2f.h>`.


/// extracts all iso-lines from given scalar field and iso-value=0
/// Generated from function `MR::extractIsolines`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `vertValues` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgePoint *MR_extractIsolines_3(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_VertId *vertValues, const MR_FaceBitSet *region);

/// quickly returns true if extractIsolines produce not-empty set for the same arguments
/// Generated from function `MR::hasAnyIsoline`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `vertValues` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_hasAnyIsoline_3(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_VertId *vertValues, const MR_FaceBitSet *region);

/// extracts all iso-lines from given scalar field and iso-value
/// Generated from function `MR::extractIsolines`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `vertValues` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgePoint *MR_extractIsolines_4(const MR_MeshTopology *topology, const MR_VertScalars *vertValues, float isoValue, const MR_FaceBitSet *region);

/// quickly returns true if extractIsolines produce not-empty set for the same arguments
/// Generated from function `MR::hasAnyIsoline`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `vertValues` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
MRC_API bool MR_hasAnyIsoline_4(const MR_MeshTopology *topology, const MR_VertScalars *vertValues, float isoValue, const MR_FaceBitSet *region);

/// extracts all plane sections of given mesh
/// Generated from function `MR::extractPlaneSections`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgePoint *MR_extractPlaneSections(const MR_MeshPart *mp, const MR_Plane3f *plane, const MR_UseAABBTree *u);

/// quickly returns true if extractPlaneSections produce not-empty set for the same arguments
/// Generated from function `MR::hasAnyPlaneSection`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
MRC_API bool MR_hasAnyPlaneSection(const MR_MeshPart *mp, const MR_Plane3f *plane, const MR_UseAABBTree *u);

/// extracts all sections of given mesh with the plane z=zLevel
/// Generated from function `MR::extractXYPlaneSections`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgePoint *MR_extractXYPlaneSections(const MR_MeshPart *mp, float zLevel, const MR_UseAABBTree *u);

/// quickly returns true if extractXYPlaneSections produce not-empty set for the same arguments
/// Generated from function `MR::hasAnyXYPlaneSection`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
MRC_API bool MR_hasAnyXYPlaneSection(const MR_MeshPart *mp, float zLevel, const MR_UseAABBTree *u);

/// finds all intersected triangles by the plane z=zLevel
/// \return the section's line segment within each such triangle;
/// \param faces optional output of the same size as return, where for each line segment one can find its triangle's id
/// \details this function must be faster than
/// extractXYPlaneSections function when connecting continuous contours take most of the time
/// Generated from function `MR::findTriangleSectionsByXYPlane`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `faces` defaults to a null pointer in C++.
/// Parameter `u` has a default argument: `UseAABBTree::Yes`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_LineSegm3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_LineSegm3f *MR_findTriangleSectionsByXYPlane(const MR_MeshPart *mp, float zLevel, MR_std_vector_MR_FaceId *faces, const MR_UseAABBTree *u);

/// track section of plane set by start point, direction and surface normal in start point 
/// in given direction while given distance or
/// mesh boundary is not reached, or track looped
/// negative distance means moving in opposite direction
/// returns track on surface and end point (same as start if path has looped)
/// Generated from function `MR::trackSection`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Parameter `direction` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgePoint_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgePoint *MR_trackSection_MR_MeshTriPoint_ref(const MR_MeshPart *mp, const MR_MeshTriPoint *start, MR_MeshTriPoint *end, const MR_Vector3f *direction, float distance);

/// track section of plane set by start point, end point and planePoint
/// from start to end
/// \param ccw - if true use start->end->planePoint plane, otherwise use start->planePoint->end (changes direction of plane tracking)
/// returns track on surface without end point (return error if path was looped or reached boundary)
/// Generated from function `MR::trackSection`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Parameter `planePoint` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgePoint_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgePoint_std_string *MR_trackSection_const_MR_MeshTriPoint_ref(const MR_MeshPart *mp, const MR_MeshTriPoint *start, const MR_MeshTriPoint *end, const MR_Vector3f *planePoint, bool ccw);

/// returns true if left(isoline[i].e) == right(isoline[i+1].e) and valid for all i;
/// all above functions produce consistently oriented lines
/// Generated from function `MR::isConsistentlyOriented`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `isoline` can not be null. It is a single object.
MRC_API bool MR_isConsistentlyOriented(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgePoint *isoline);

/// for a consistently oriented isoline, returns all faces it goes inside
/// Generated from function `MR::getCrossedFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `isoline` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_getCrossedFaces(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgePoint *isoline);

/// converts PlaneSections in 2D contours by computing coordinate of each point, applying given xf to it, and retaining only x and y
/// Generated from function `MR::planeSectionToContour2f`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `section` can not be null. It is a single object.
/// Parameter `meshToPlane` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector2f *MR_planeSectionToContour2f(const MR_Mesh *mesh, const MR_std_vector_MR_EdgePoint *section, const MR_AffineXf3f *meshToPlane);

/// Generated from function `MR::planeSectionsToContours2f`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `sections` can not be null. It is a single object.
/// Parameter `meshToPlane` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_planeSectionsToContours2f(const MR_Mesh *mesh, const MR_std_vector_std_vector_MR_EdgePoint *sections, const MR_AffineXf3f *meshToPlane);

#ifdef __cplusplus
} // extern "C"
#endif
