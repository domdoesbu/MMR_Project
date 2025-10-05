// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


/// adjusts z-coordinates of (m) vertices to make adjusted (m) similar to (target)
/// Generated from function `MR::replicateZ`.
/// Parameter `m` can not be null. It is a single object.
/// Parameter `target` can not be null. It is a single object.
MRC_API void MR_replicateZ(MR_Mesh *m, const MR_Mesh *target);

#ifdef __cplusplus
} // extern "C"
#endif
