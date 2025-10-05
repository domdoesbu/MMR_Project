// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBMap MR_FaceBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_UndirectedEdgeBMap MR_UndirectedEdgeBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_VertBMap MR_VertBMap; // Defined in `#include <MRCMesh/MRBuffer.h>`.


/// computes optimal order of faces: old face id -> new face id,
/// the order is similar as in AABB tree, but faster to compute
/// Generated from function `MR::getOptimalFaceOrdering`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBMap_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBMap *MR_getOptimalFaceOrdering(const MR_Mesh *mesh);

/// compute the order of vertices given the order of faces:
/// vertices near first faces also appear first;
/// \param faceMap old face id -> new face id
/// Generated from function `MR::getVertexOrdering`.
/// Parameter `faceMap` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBMap_Destroy()` to free it when you're done using it.
MRC_API MR_VertBMap *MR_getVertexOrdering_MR_FaceBMap(const MR_FaceBMap *faceMap, const MR_MeshTopology *topology);

/// compute the order of edges given the order of faces:
/// edges near first faces also appear first;
/// \param faceMap old face id -> new face id
/// Generated from function `MR::getEdgeOrdering`.
/// Parameter `faceMap` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeBMap_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeBMap *MR_getEdgeOrdering(const MR_FaceBMap *faceMap, const MR_MeshTopology *topology);

#ifdef __cplusplus
} // extern "C"
#endif
