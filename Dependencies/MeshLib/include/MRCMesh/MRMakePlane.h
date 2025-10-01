// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


// Makes square plane 1x1 size with center at (0,0,0) and (0,0,1) normal
/// Generated from function `MR::makePlane`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makePlane(void);

#ifdef __cplusplus
} // extern "C"
#endif
