// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_expected_std_vector_MR_EdgeId_std_string MR_expected_std_vector_MR_EdgeId_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_EdgeId_std_string.h>`.
typedef struct MR_std_function_float_from_MR_EdgeId MR_std_function_float_from_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_float_from_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_MR_VertId MR_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_MR_VertId.h>`.


/**
* \brief Find the best closed edge loop passing through given edges, which minimizes the sum of given edge metric.
* The algorithm assumes that input edges can be projected on the plane orthogonal to given direction,
* then the center point of all input edges is found, and each segment of the searched loop is within infinite pie sector
* with this center and the borders passing via two sorted input edges.
*
* 
* \param includeEdges contain all edges in arbitrary order that must be present in the returned loop, probably with reversed direction (should have at least 2 elements)
* \param edgeMetric returned loop will minimize the sum of this metric
* \param dir direction approximately orthogonal to the loop, the resulting loop will be oriented clockwise if look from the direction's tip
*/
/// Generated from function `MR::surroundingContour`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `edgeMetric` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgeId_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgeId_std_string *MR_surroundingContour_std_vector_MR_EdgeId(const MR_Mesh *mesh, MR_PassBy includeEdges_pass_by, MR_std_vector_MR_EdgeId *includeEdges, const MR_std_function_float_from_MR_EdgeId *edgeMetric, const MR_Vector3f *dir);

/**
* \brief Find the best closed edge loop passing through given vertices, which minimizes the sum of given edge metric.
* The algorithm assumes that input vertices can be projected on the plane orthogonal to given direction,
* then the center point of all input vertices is found, and each segment of the searched loop is within infinite pie sector
* with this center and the borders passing via two sorted input vertices.
*
* 
* \param keyVertices contain all vertices in arbitrary order that returned loop must pass (should have at least 2 elements)
* \param edgeMetric returned loop will minimize the sum of this metric
* \param dir direction approximately orthogonal to the loop, the resulting loop will be oriented clockwise if look from the direction's tip
*/
/// Generated from function `MR::surroundingContour`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `edgeMetric` can not be null. It is a single object.
/// Parameter `dir` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_EdgeId_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_EdgeId_std_string *MR_surroundingContour_std_vector_MR_VertId(const MR_Mesh *mesh, MR_PassBy keyVertices_pass_by, MR_std_vector_MR_VertId *keyVertices, const MR_std_function_float_from_MR_EdgeId *edgeMetric, const MR_Vector3f *dir);

#ifdef __cplusplus
} // extern "C"
#endif
