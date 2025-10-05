// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// adds to the region all faces within given number of hops (stars) from the initial region boundary
/// Generated from function `MR::expand`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `hops` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_expand_MR_FaceBitSet(const MR_MeshTopology *topology, MR_FaceBitSet *region, const int32_t *hops);

/// returns the region of all faces within given number of hops (stars) from the initial face
/// Generated from function `MR::expand`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_expand_MR_FaceId(const MR_MeshTopology *topology, MR_FaceId f, int32_t hops);

// adds to the region all vertices within given number of hops (stars) from the initial region boundary
/// Generated from function `MR::expand`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `hops` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_expand_MR_VertBitSet(const MR_MeshTopology *topology, MR_VertBitSet *region, const int32_t *hops);

/// returns the region of all vertices within given number of hops (stars) from the initial vertex
/// Generated from function `MR::expand`.
/// Parameter `topology` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_expand_MR_VertId(const MR_MeshTopology *topology, MR_VertId v, int32_t hops);

/// removes from the region all faces within given number of hops (stars) from the initial region boundary
/// Generated from function `MR::shrink`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `hops` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_shrink_MR_FaceBitSet(const MR_MeshTopology *topology, MR_FaceBitSet *region, const int32_t *hops);

/// removes from the region all vertices within given number of hops (stars) from the initial region boundary
/// Generated from function `MR::shrink`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `hops` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_shrink_MR_VertBitSet(const MR_MeshTopology *topology, MR_VertBitSet *region, const int32_t *hops);

/// returns given region with all faces sharing an edge with a region face;
/// \param stopEdges - neighborhood via this edges will be ignored
/// Generated from function `MR::expandFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `stopEdges` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_expandFaces(const MR_MeshTopology *topology, const MR_FaceBitSet *region, const MR_UndirectedEdgeBitSet *stopEdges);

/// returns given region without all faces sharing an edge with not-region face;
/// \param stopEdges - neighborhood via this edges will be ignored
/// Generated from function `MR::shrinkFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `stopEdges` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_shrinkFaces(const MR_MeshTopology *topology, const MR_FaceBitSet *region, const MR_UndirectedEdgeBitSet *stopEdges);

/// returns faces from given region that have at least one neighbor face with shared edge not from the region
/// Generated from function `MR::getBoundaryFaces`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_getBoundaryFaces(const MR_MeshTopology *topology, const MR_FaceBitSet *region);

#ifdef __cplusplus
} // extern "C"
#endif
