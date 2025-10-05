// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_std_vector_MR_Vector2f MR_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_MR_Vector2f.h>`.


/// Makes a solid-of-revolution mesh. The resulting mesh is symmetrical about the z-axis.
/// The profile points must be in the format { distance to the z-axis; z value }.
/// Generated from function `MR::makeSolidOfRevolution`.
/// Parameter `profile` can not be null. It is a single object.
/// Parameter `resolution` has a default argument: `16`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeSolidOfRevolution(const MR_std_vector_MR_Vector2f *profile, const int32_t *resolution);

#ifdef __cplusplus
} // extern "C"
#endif
