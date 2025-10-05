// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.


/// given two contours:
/// 1) of equal size;
/// 2) all edges of c0 have no left faces;
/// 3) all edges of c1 have no right faces;
/// merge the surface along corresponding edges of two contours, and deletes all vertices and edges from c1
/// Generated from function `MR::stitchContours`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `c0` can not be null. It is a single object.
/// Parameter `c1` can not be null. It is a single object.
MRC_API void MR_stitchContours(MR_MeshTopology *topology, const MR_std_vector_MR_EdgeId *c0, const MR_std_vector_MR_EdgeId *c1);

/// given a closed loop of edges, splits the surface along that loop so that after return:
/// 1) returned loop has the same size as input, with corresponding edges in same indexed elements of both;
/// 2) all edges of c0 have no left faces;
/// 3) all returned edges have no right faces;
/// Generated from function `MR::cutAlongEdgeLoop`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `c0` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_cutAlongEdgeLoop_MR_MeshTopology(MR_MeshTopology *topology, const MR_std_vector_MR_EdgeId *c0);

/// given a closed loop of edges, splits the surface along that loop so that after return:
/// 1) returned loop has the same size as input, with corresponding edges in same indexed elements of both;
/// 2) all edges of c0 have no left faces;
/// 3) all returned edges have no right faces;
/// 4) vertices of the given mesh are updated
/// Generated from function `MR::cutAlongEdgeLoop`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `c0` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_EdgeId_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_EdgeId *MR_cutAlongEdgeLoop_MR_Mesh(MR_Mesh *mesh, const MR_std_vector_MR_EdgeId *c0);

#ifdef __cplusplus
} // extern "C"
#endif
