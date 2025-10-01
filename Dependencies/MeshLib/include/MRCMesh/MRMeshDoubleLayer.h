// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


/// given a double-layer mesh with one layer having normals outside and the other layer - inside,
/// finds all faces of the outer layer;
/// the algorithm first detects some seed faces of each layer by casting a ray from triangle's center in both directions along the normal;
/// then remaining faces are redistributed toward the closest seed face
/// Generated from function `MR::findOuterLayer`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_findOuterLayer(const MR_Mesh *mesh);

#ifdef __cplusplus
} // extern "C"
#endif
