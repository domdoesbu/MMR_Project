// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_std_vector_MR_EdgeId MR_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_MR_EdgeId.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.


// fill region located to the left from given edges
/// Generated from function `MR::fillContourLeft`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `contour` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_fillContourLeft_std_vector_MR_EdgeId(const MR_MeshTopology *topology, const MR_std_vector_MR_EdgeId *contour);

/// Generated from function `MR::fillContourLeft`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `contours` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_fillContourLeft_std_vector_std_vector_MR_EdgeId(const MR_MeshTopology *topology, const MR_std_vector_std_vector_MR_EdgeId *contours);

#ifdef __cplusplus
} // extern "C"
#endif
