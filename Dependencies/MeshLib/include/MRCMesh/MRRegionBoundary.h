// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeBitSet MR_EdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.


/// returns closed loop of region boundary starting from given region boundary edge (region faces on the left, and not-region faces or holes on the right);
/// if more than two boundary edges connect in one vertex, then the function makes the most abrupt turn to right
/// Generated from function `MR::trackLeftBoundaryLoop`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_trackLeftBoundaryLoop_MR_EdgeId(const MR_MeshTopology *topology, MR_EdgeId e0, const MR_FaceBitSet *region);

/// Generated from function `MR::trackLeftBoundaryLoop`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_trackLeftBoundaryLoop_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_FaceBitSet *region, MR_EdgeId e0);

/// returns closed loop of region boundary starting from given region boundary edge (region faces on the right, and not-region faces or holes on the left);
/// if more than two boundary edges connect in one vertex, then the function makes the most abrupt turn to left
/// Generated from function `MR::trackRightBoundaryLoop`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_trackRightBoundaryLoop_MR_EdgeId(const MR_MeshTopology *topology, MR_EdgeId e0, const MR_FaceBitSet *region);

/// Generated from function `MR::trackRightBoundaryLoop`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_trackRightBoundaryLoop_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_FaceBitSet *region, MR_EdgeId e0);

/// returns all region boundary loops;
/// every loop has region faces on the left, and not-region faces or holes on the right
/// Generated from function `MR::findLeftBoundary`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_findLeftBoundary_const_MR_FaceBitSet_ptr(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// Generated from function `MR::findLeftBoundary`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_findLeftBoundary_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// returns all region boundary loops;
/// every loop has region faces on the right, and not-region faces or holes on the left
/// Generated from function `MR::findRightBoundary`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_findRightBoundary_const_MR_FaceBitSet_ptr(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// Generated from function `MR::findRightBoundary`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_findRightBoundary_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// deletes all region faces, inner edges and vertices, but keeps boundary edges and vertices of the region (or whole mesh if region is null);
/// if `keepLoneHoles` is set - keeps boundary even if it has no valid faces on other side
/// returns edge loops, each having deleted region faces on the left, and not-region faces or holes on the right
/// Generated from function `MR::delRegionKeepBd`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `keepLoneHoles` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_delRegionKeepBd_const_MR_FaceBitSet_ptr(MR_Mesh *mesh, const MR_FaceBitSet *region, const bool *keepLoneHoles);

/// Generated from function `MR::delRegionKeepBd`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `keepLoneHoles` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_delRegionKeepBd_MR_FaceBitSet(MR_Mesh *mesh, const MR_FaceBitSet *region, const bool *keepLoneHoles);

/// returns all region boundary paths;
/// every path has region faces on the left, and valid not-region faces on the right
/// Generated from function `MR::findLeftBoundaryInsideMesh`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *MR_findLeftBoundaryInsideMesh(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// returns all region boundary edges, where each edge has a region face on one side, and a valid not-region face on another side
/// Generated from function `MR::findRegionBoundaryUndirectedEdgesInsideMesh`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_findRegionBoundaryUndirectedEdgesInsideMesh(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// \returns All out of region faces that have a common edge with at least one region face
/// Generated from function `MR::findRegionOuterFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_findRegionOuterFaces(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// composes the set of all vertices incident to given faces
/// Generated from function `MR::getIncidentVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `faces` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_getIncidentVerts_2_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_FaceBitSet *faces);

/// if faces-parameter is null pointer then simply returns the reference on all valid vertices;
/// otherwise performs store = getIncidentVerts( topology, *faces ) and returns reference on store
/// Generated from function `MR::getIncidentVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `store` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_getIncidentVerts_3_const_MR_FaceBitSet_ptr(const MR_MeshTopology *topology, const MR_FaceBitSet *faces, MR_VertBitSet *store);

/// composes the set of all vertices not on the boundary of a hole and with all their adjacent faces in given set
/// Generated from function `MR::getInnerVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_getInnerVerts_const_MR_FaceBitSet_ptr(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// composes the set of all vertices not on the boundary of a hole and with all their adjacent faces in given set
/// Generated from function `MR::getInnerVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_getInnerVerts_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// composes the set of all boundary vertices for given region (or whole mesh if !region)
/// Generated from function `MR::getBoundaryVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_getBoundaryVerts(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// composes the set of all boundary vertices for given region,
/// unlike getBoundaryVerts the vertices of mesh boundary having no incident not-region faces are not returned
/// Generated from function `MR::getRegionBoundaryVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_getRegionBoundaryVerts(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// composes the set of all faces incident to given vertices
/// Generated from function `MR::getIncidentFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_getIncidentFaces_MR_VertBitSet(const MR_MeshTopology *topology, const MR_VertBitSet *verts);

/// composes the set of all faces with all their vertices in given set
/// Generated from function `MR::getInnerFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_getInnerFaces(const MR_MeshTopology *topology, const MR_VertBitSet *verts);

/// composes the set of all edges, having a face from given set at the left
/// Generated from function `MR::getRegionEdges`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `faces` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_getRegionEdges(const MR_MeshTopology *topology, const MR_FaceBitSet *faces);

/// composes the set of all undirected edges, having a face from given set from one of two sides
/// Generated from function `MR::getIncidentEdges`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `faces` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_getIncidentEdges_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_FaceBitSet *faces);

/// composes the set of all undirected edges, having at least one common vertex with an edge from given set
/// Generated from function `MR::getIncidentEdges`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_getIncidentEdges_MR_UndirectedEdgeBitSet(const MR_MeshTopology *topology, const MR_UndirectedEdgeBitSet *edges);

/// composes the set of all vertices incident to given edges
/// Generated from function `MR::getIncidentVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_getIncidentVerts_2_MR_UndirectedEdgeBitSet(const MR_MeshTopology *topology, const MR_UndirectedEdgeBitSet *edges);

/// composes the set of all faces incident to given edges
/// Generated from function `MR::getIncidentFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_getIncidentFaces_MR_UndirectedEdgeBitSet(const MR_MeshTopology *topology, const MR_UndirectedEdgeBitSet *edges);

/// composes the set of all left and right faces of given edges
/// Generated from function `MR::getNeighborFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_getNeighborFaces(const MR_MeshTopology *topology, const MR_UndirectedEdgeBitSet *edges);

/// composes the set of all edges with all their vertices in given set
/// Generated from function `MR::getInnerEdges`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_getInnerEdges_MR_VertBitSet(const MR_MeshTopology *topology, const MR_VertBitSet *verts);

/// composes the set of all edges having both left and right in given region
/// Generated from function `MR::getInnerEdges`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBitSet *MR_getInnerEdges_MR_FaceBitSet(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

/// if edges-parameter is null pointer then simply returns the reference on all valid vertices;
/// otherwise performs store = getIncidentVerts( topology, *edges ) and returns reference on store
/// Generated from function `MR::getIncidentVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `store` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_getIncidentVerts_3_const_MR_UndirectedEdgeBitSet_ptr(const MR_MeshTopology *topology, const MR_UndirectedEdgeBitSet *edges, MR_VertBitSet *store);

/// composes the set of all vertices with all their edges in given set
/// Generated from function `MR::getInnerVerts`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `edges` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_getInnerVerts_MR_UndirectedEdgeBitSet(const MR_MeshTopology *topology, const MR_UndirectedEdgeBitSet *edges);

#ifdef __cplusplus
} // extern "C"
#endif
