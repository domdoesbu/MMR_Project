// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


//Creates a triangular prism. One edge of its base lies on 'x' axis and has 'baseLength' in length. 
//'leftAngle' and 'rightAngle' specify two adjacent angles
// axis of a prism is parallel to 'z' axis
/// Generated from function `MR::makePrism`.
/// Parameter `height` has a default argument: `1.F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makePrism(float baseLength, float leftAngle, float rightAngle, const float *height);

#ifdef __cplusplus
} // extern "C"
#endif
