// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_std_vector_MR_EdgeTri MR_std_vector_MR_EdgeTri; // Defined in `#include <MRCMisc/std_vector_MR_EdgeTri.h>`.
typedef struct MR_std_vector_MR_OneMeshContour MR_std_vector_MR_OneMeshContour; // Defined in `#include <MRCMisc/std_vector_MR_OneMeshContour.h>`.
typedef struct MR_std_vector_MR_VarEdgeTri MR_std_vector_MR_VarEdgeTri; // Defined in `#include <MRCMisc/std_vector_MR_VarEdgeTri.h>`.
typedef struct MR_std_vector_int32_t MR_std_vector_int32_t; // Defined in `#include <MRCMisc/std_vector_int32_t.h>`.
typedef struct MR_std_vector_std_vector_MR_VarEdgeTri MR_std_vector_std_vector_MR_VarEdgeTri; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_VarEdgeTri.h>`.


/// Combines unordered input intersections (and flips orientation of intersected edges from mesh B) into ordered oriented contours with the properties:
/// 1. Each contour is
///    a. either closed (then its first and last elements are equal),
///    b. or open (then its first and last intersected edges are boundary edges).
/// 2. Next intersection in a contour is located to the left of the current intersected edge:
///    a. if the current and next intersected triangles are the same, then next intersected edge is either next( curr.edge ) or prev( curr.edge.sym() ).sym(),
///    b. otherwise next intersected triangle is left( curr.edge ) and next intersected edge is one of the edges having the current intersected triangle to the right.
/// 3. Orientation of intersected edges in each pair of (intersected edge, intersected triangle):
///    a. the intersected edge of mesh A is directed from negative half-space of the intersected triangle from mesh B to its positive half-space,
///    b. the intersected edge of mesh B is directed from positive half-space of the intersected triangle from mesh A to its negative half-space.
/// 4. Orientation of contours:
///    a. left  of contours on mesh A is inside of mesh B (consequence of 3a),
///    b. right of contours on mesh B is inside of mesh A (consequence of 3b).
/// Generated from function `MR::orderIntersectionContours`.
/// Parameter `topologyA` can not be null. It is a single object.
/// Parameter `topologyB` can not be null. It is a single object.
/// Parameter `intersections` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_VarEdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_VarEdgeTri *MR_orderIntersectionContours(const MR_MeshTopology *topologyA, const MR_MeshTopology *topologyB, const MR_std_vector_MR_VarEdgeTri *intersections);

/// Combines unordered input self-intersections (and flips orientation of some intersected edges) into ordered oriented contours with the properties:
/// 1. Each contour is
///    a. either closed (then its first and last elements are equal),
///    b. or open if terminal intersection is on mesh boundary or if self-intersection terminates in a vertex.
/// 2. Next intersection in a contour is located to the left of the current intersected edge:
///    a. if the current and next intersected triangles are the same, then next intersected edge is either next( curr.edge ) or prev( curr.edge.sym() ).sym(),
///    b. otherwise next intersected triangle is left( curr.edge ) and next intersected edge is one of the edges having the current intersected triangle to the right.
/// 3. Orientation of intersected edges in each pair of (intersected edge, intersected triangle):
///    a. isEdgeATriB() = true:  the intersected edge is directed from negative half-space of the intersected triangle to its positive half-space,
///    b. isEdgeATriB() = false: the intersected edge is directed from positive half-space of the intersected triangle to its negative half-space.
/// 4. Contours [2*i] and [2*i+1]
///    a. have equal lengths and pass via the same intersections but in opposite order,
///    b. each intersection is present in two contours with different values of isEdgeATriB() flag, and opposite directions of the intersected edge.
/// 5. Orientation of contours:
///    a. first element of even (0,2,...) contours has isEdgeATriB() = true, left of even contours goes inside (consequence of 3a),
///    b. first element of odd (1,3,...) contours has isEdgeATriB() = false, right of odd contours goes inside (consequence of 3b).
/// Generated from function `MR::orderSelfIntersectionContours`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `intersections` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_VarEdgeTri_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_VarEdgeTri *MR_orderSelfIntersectionContours(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgeTri *intersections);

/// returns true if contour is closed
/// Generated from function `MR::isClosed`.
/// Parameter `contour` can not be null. It is a single object.
MRC_API bool MR_isClosed_std_vector_MR_VarEdgeTri(const MR_std_vector_MR_VarEdgeTri *contour);

/// Detects contours that fully lay inside one triangle
/// if `ignoreOpen` then do not mark non-closed contours as lone, even if they really are
/// returns they indices in contours
/// Generated from function `MR::detectLoneContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `ignoreOpen` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_int32_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_int32_t *MR_detectLoneContours(const MR_std_vector_std_vector_MR_VarEdgeTri *contours, const bool *ignoreOpen);

/// Removes contours with zero area (do not remove if contour is handle on topology)
/// edgesTopology - topology on which contours are represented with edges
/// faceContours - lone contours represented by faces (all intersections are in same mesh A face)
/// edgeContours - lone contours represented by edges (all intersections are in mesh B edges, edgesTopology: meshB.topology)
/// Generated from function `MR::removeLoneDegeneratedContours`.
/// Parameter `edgesTopology` can not be null. It is a single object.
/// Parameter `faceContours` can not be null. It is a single object.
/// Parameter `edgeContours` can not be null. It is a single object.
MRC_API void MR_removeLoneDegeneratedContours(const MR_MeshTopology *edgesTopology, MR_std_vector_MR_OneMeshContour *faceContours, MR_std_vector_MR_OneMeshContour *edgeContours);

/// Removes contours that fully lay inside one triangle from the contours
/// if `ignoreOpen` then do not consider non-closed contours as lone, even if they really are
/// Generated from function `MR::removeLoneContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `ignoreOpen` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_removeLoneContours(MR_std_vector_std_vector_MR_VarEdgeTri *contours, const bool *ignoreOpen);

#ifdef __cplusplus
} // extern "C"
#endif
