// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_GeneralOffsetParameters MR_GeneralOffsetParameters; // Defined in `#include <MRCVoxels/MROffset.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.


/// Offsets mesh part by converting it to voxels and back
/// and unite it with original mesh (via boolean)
/// note: only OffsetParameters.signDetectionMode = SignDetectionMode::Unsigned will work in this function
/// Generated from function `MR::partialOffsetMesh`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_partialOffsetMesh(const MR_MeshPart *mp, float offset, const MR_GeneralOffsetParameters *params);

#ifdef __cplusplus
} // extern "C"
#endif
