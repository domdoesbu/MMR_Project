// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.


/// deletes object faces with normals pointed to the target geometry center
/// Generated from function `MR::deleteTargetFaces`.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `targetCenter` can not be null. It is a single object.
MRC_API void MR_deleteTargetFaces_MR_Vector3f(MR_Mesh *obj, const MR_Vector3f *targetCenter);

/// Generated from function `MR::deleteTargetFaces`.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `target` can not be null. It is a single object.
MRC_API void MR_deleteTargetFaces_MR_Mesh(MR_Mesh *obj, const MR_Mesh *target);

#ifdef __cplusplus
} // extern "C"
#endif
