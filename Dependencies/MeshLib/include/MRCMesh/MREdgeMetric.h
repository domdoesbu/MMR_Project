// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_float_from_MR_EdgeId MR_std_function_float_from_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_float_from_MR_EdgeId.h>`.


/// metric returning 1 for every edge
/// Generated from function `MR::identityMetric`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_identityMetric(void);

/// returns edge's length as a metric;
/// this metric is symmetric: m(e) == m(e.sym())
/// Generated from function `MR::edgeLengthMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_edgeLengthMetric_1(const MR_Mesh *mesh);

/// Generated from function `MR::edgeLengthMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_edgeLengthMetric_2(const MR_MeshTopology *topology, const MR_VertCoords *points);

/// returns edge's absolute discrete mean curvature as a metric;
/// the metric is minimal in the planar regions of mesh;
/// this metric is symmetric: m(e) == m(e.sym())
/// Generated from function `MR::discreteAbsMeanCurvatureMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_discreteAbsMeanCurvatureMetric_1(const MR_Mesh *mesh);

/// Generated from function `MR::discreteAbsMeanCurvatureMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_discreteAbsMeanCurvatureMetric_2(const MR_MeshTopology *topology, const MR_VertCoords *points);

/// returns minus of edge's absolute discrete mean curvature as a metric;
/// the metric is minimal in the most curved regions of mesh;
/// this metric is symmetric: m(e) == m(e.sym())
/// Generated from function `MR::discreteMinusAbsMeanCurvatureMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_discreteMinusAbsMeanCurvatureMetric_1(const MR_Mesh *mesh);

/// Generated from function `MR::discreteMinusAbsMeanCurvatureMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_discreteMinusAbsMeanCurvatureMetric_2(const MR_MeshTopology *topology, const MR_VertCoords *points);

/// returns edge's metric that depends both on edge's length and on the angle between its left and right faces
/// \param angleSinFactor multiplier before dihedral angle sine in edge metric calculation (positive to prefer concave angles, negative - convex)
/// \param angleSinForBoundary consider this dihedral angle sine for boundary edges;
/// this metric is symmetric: m(e) == m(e.sym())
/// Generated from function `MR::edgeCurvMetric`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `angleSinFactor` has a default argument: `2`, pass a null pointer to use it.
/// Parameter `angleSinForBoundary` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_edgeCurvMetric_3(const MR_Mesh *mesh, const float *angleSinFactor, const float *angleSinForBoundary);

/// Generated from function `MR::edgeCurvMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `angleSinFactor` has a default argument: `2`, pass a null pointer to use it.
/// Parameter `angleSinForBoundary` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_edgeCurvMetric_4(const MR_MeshTopology *topology, const MR_VertCoords *points, const float *angleSinFactor, const float *angleSinForBoundary);

/// pre-computes the metric for all mesh edges to quickly return it later for any edge;
/// input metric must be symmetric: metric(e) == metric(e.sym())
/// Generated from function `MR::edgeTableSymMetric`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_edgeTableSymMetric(const MR_MeshTopology *topology, const MR_std_function_float_from_MR_EdgeId *metric);

#ifdef __cplusplus
} // extern "C"
#endif
