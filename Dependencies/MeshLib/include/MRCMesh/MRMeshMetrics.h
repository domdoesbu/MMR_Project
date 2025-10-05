// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/std_function_double_from_MR_VertId_MR_VertId_MR_VertId.h>`.
typedef struct MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId; // Defined in `#include <MRCMisc/std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId.h>`.
typedef struct MR_std_function_double_from_double_double MR_std_function_double_from_double_double; // Defined in `#include <MRCMisc/std_function_double_from_double_double.h>`.


/** \struct MR::FillHoleMetric
* \brief Holds metrics for fillHole and buildCylinderBetweenTwoHoles triangulation\n
* 
* This is struct used as optimization metric of fillHole and buildCylinderBetweenTwoHoles functions\n
* 
* \sa \ref getCircumscribedMetric
* \sa \ref getPlaneFillMetric
* \sa \ref getEdgeLengthFillMetric
* \sa \ref getEdgeLengthStitchMetric
* \sa \ref getComplexStitchMetric
* \sa \ref fillHole
* \sa \ref buildCylinderBetweenTwoHoles
*/
/// Generated from class `MR::FillHoleMetric`.
typedef struct MR_FillHoleMetric MR_FillHoleMetric;

/// is called for each triangle, if it is set
/// Returns a pointer to a member variable of class `MR::FillHoleMetric` named `triangleMetric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId *MR_FillHoleMetric_Get_triangleMetric(const MR_FillHoleMetric *_this);

/// is called for each triangle, if it is set
/// Modifies a member variable of class `MR::FillHoleMetric` named `triangleMetric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleMetric_Set_triangleMetric(MR_FillHoleMetric *_this, MR_PassBy value_pass_by, MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId *value);

/// is called for each triangle, if it is set
/// Returns a mutable pointer to a member variable of class `MR::FillHoleMetric` named `triangleMetric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId *MR_FillHoleMetric_GetMutable_triangleMetric(MR_FillHoleMetric *_this);

/// is called for each edge, if it is set
/// Returns a pointer to a member variable of class `MR::FillHoleMetric` named `edgeMetric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *MR_FillHoleMetric_Get_edgeMetric(const MR_FillHoleMetric *_this);

/// is called for each edge, if it is set
/// Modifies a member variable of class `MR::FillHoleMetric` named `edgeMetric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleMetric_Set_edgeMetric(MR_FillHoleMetric *_this, MR_PassBy value_pass_by, MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *value);

/// is called for each edge, if it is set
/// Returns a mutable pointer to a member variable of class `MR::FillHoleMetric` named `edgeMetric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *MR_FillHoleMetric_GetMutable_edgeMetric(MR_FillHoleMetric *_this);

/// is called to combine metrics from different candidates, if it is not set it just summarizes input
/// Returns a pointer to a member variable of class `MR::FillHoleMetric` named `combineMetric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_double_from_double_double *MR_FillHoleMetric_Get_combineMetric(const MR_FillHoleMetric *_this);

/// is called to combine metrics from different candidates, if it is not set it just summarizes input
/// Modifies a member variable of class `MR::FillHoleMetric` named `combineMetric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FillHoleMetric_Set_combineMetric(MR_FillHoleMetric *_this, MR_PassBy value_pass_by, MR_std_function_double_from_double_double *value);

/// is called to combine metrics from different candidates, if it is not set it just summarizes input
/// Returns a mutable pointer to a member variable of class `MR::FillHoleMetric` named `combineMetric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_double_from_double_double *MR_FillHoleMetric_GetMutable_combineMetric(MR_FillHoleMetric *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_FillHoleMetric_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FillHoleMetric_DestroyArray()`.
/// Use `MR_FillHoleMetric_OffsetMutablePtr()` and `MR_FillHoleMetric_OffsetPtr()` to access the array elements.
MRC_API MR_FillHoleMetric *MR_FillHoleMetric_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FillHoleMetric` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_FillHoleMetric_ConstructFrom(MR_PassBy triangleMetric_pass_by, MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId *triangleMetric, MR_PassBy edgeMetric_pass_by, MR_std_function_double_from_MR_VertId_MR_VertId_MR_VertId_MR_VertId *edgeMetric, MR_PassBy combineMetric_pass_by, MR_std_function_double_from_double_double *combineMetric);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FillHoleMetric *MR_FillHoleMetric_OffsetPtr(const MR_FillHoleMetric *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FillHoleMetric *MR_FillHoleMetric_OffsetMutablePtr(MR_FillHoleMetric *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FillHoleMetric`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_FillHoleMetric_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FillHoleMetric *_other);

/// Destroys a heap-allocated instance of `MR_FillHoleMetric`. Does nothing if the pointer is null.
MRC_API void MR_FillHoleMetric_Destroy(const MR_FillHoleMetric *_this);

/// Destroys a heap-allocated array of `MR_FillHoleMetric`. Does nothing if the pointer is null.
MRC_API void MR_FillHoleMetric_DestroyArray(const MR_FillHoleMetric *_this);

/// Generated from a method of class `MR::FillHoleMetric` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FillHoleMetric *MR_FillHoleMetric_AssignFromAnother(MR_FillHoleMetric *_this, MR_PassBy _other_pass_by, MR_FillHoleMetric *_other);

/// Computes combined metric after filling a hole
/// Generated from function `MR::calcCombinedFillMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `filledRegion` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
MRC_API double MR_calcCombinedFillMetric(const MR_Mesh *mesh, const MR_FaceBitSet *filledRegion, const MR_FillHoleMetric *metric);

/// This metric minimizes the sum of circumcircle radii for all triangles in the triangulation.
/// It is rather fast to calculate, and it results in typically good triangulations.
/// Generated from function `MR::getCircumscribedMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getCircumscribedMetric(const MR_Mesh *mesh);

/// Same as getCircumscribedFillMetric, but with extra penalty for the triangles having
/// normals looking in the opposite side of plane containing left of (e).
/// Generated from function `MR::getPlaneFillMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getPlaneFillMetric(const MR_Mesh *mesh, MR_EdgeId e);

/// Similar to getPlaneFillMetric with extra penalty for the triangles having
/// normals looking in the opposite side of plane containing left of (e),
/// but the metric minimizes the sum of circumcircle radius times aspect ratio for all triangles in the triangulation.
/// Generated from function `MR::getPlaneNormalizedFillMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getPlaneNormalizedFillMetric(const MR_Mesh *mesh, MR_EdgeId e);

/// This metric minimizes the sum of triangleMetric for all triangles in the triangulation
/// plus the sum edgeMetric for all edges inside and on the boundary of the triangulation.\n
/// Where\n
/// triangleMetric is proportional to triangle aspect ratio\n
/// edgeMetric is proportional to ( 1 - dihedralAngleCos )
/// Generated from function `MR::getComplexStitchMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getComplexStitchMetric(const MR_Mesh *mesh);

/// Simple metric minimizing the sum of all edge lengths
/// Generated from function `MR::getEdgeLengthFillMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getEdgeLengthFillMetric(const MR_Mesh *mesh);

/// Forbids connecting vertices from the same hole \n
/// Simple metric minimizing edge length
/// Generated from function `MR::getEdgeLengthStitchMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getEdgeLengthStitchMetric(const MR_Mesh *mesh);

/// Forbids connecting vertices from the same hole \n
/// All new faces should be parallel to given direction
/// Generated from function `MR::getVerticalStitchMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `upDir` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getVerticalStitchMetric(const MR_Mesh *mesh, const MR_Vector3f *upDir);

/// This metric minimizes the sum of triangleMetric for all triangles in the triangulation
/// plus the sum edgeMetric for all edges inside and on the boundary of the triangulation.\n
/// Where\n
/// triangleMetric is proportional to weighted triangle area and triangle aspect ratio\n
/// edgeMetric grows with angle between triangles as ( ( 1 - cos( x ) ) / ( 1 + cos( x ) ) ) ^ 4.
/// Generated from function `MR::getComplexFillMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getComplexFillMetric(const MR_Mesh *mesh, MR_EdgeId e);

/// This metric minimizes summary projection of new edges to plane normal, (try do produce edges parallel to plane)
/// Generated from function `MR::getParallelPlaneFillMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `plane` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getParallelPlaneFillMetric(const MR_Mesh *mesh, MR_EdgeId e, const MR_Plane3f *plane);

/// This metric minimizes the maximal dihedral angle between the faces in the triangulation
/// and on its boundary
/// Generated from function `MR::getMaxDihedralAngleMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getMaxDihedralAngleMetric(const MR_Mesh *mesh);

/// This metric consists of two parts
/// 1) for each triangle: it is the circumcircle diameter,
///    this avoids the appearance of degenerate triangles;
/// 2) for each edge: square root of double total area of triangles to its left and right
///    times the factor depending extensionally on absolute dihedral angle between left and right triangles,
///    this makes visually triangulated surface as smooth as possible.
/// For planar holes it is the same as getCircumscribedMetric.
/// Generated from function `MR::getUniversalMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getUniversalMetric(const MR_Mesh *mesh);

/// This metric maximizes the minimal angle among all faces in the triangulation
/// Generated from function `MR::getMinTriAngleMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getMinTriAngleMetric(const MR_Mesh *mesh);

/// This metric is for triangulation construction with minimal summed area of triangles.
/// Warning: this metric can produce degenerated triangles
/// Generated from function `MR::getMinAreaMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FillHoleMetric_Destroy()` to free it when you're done using it.
MRC_API MR_FillHoleMetric *MR_getMinAreaMetric(const MR_Mesh *mesh);

#ifdef __cplusplus
} // extern "C"
#endif
