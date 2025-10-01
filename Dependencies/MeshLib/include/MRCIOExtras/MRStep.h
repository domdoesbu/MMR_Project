// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshLoadSettings MR_MeshLoadSettings; // Defined in `#include <MRCMesh/MRMeshLoadSettings.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_expected_std_shared_ptr_MR_Object_std_string MR_expected_std_shared_ptr_MR_Object_std_string; // Defined in `#include <MRCMisc/expected_std_shared_ptr_MR_Object_std_string.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.


/// load mesh data from STEP file using OpenCASCADE
/// Generated from function `MR::MeshLoad::fromStep`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromStep_std_filesystem_path(const char *path, const char *path_end, const MR_MeshLoadSettings *settings);

/// Generated from function `MR::MeshLoad::fromStep`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromStep_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// load scene from STEP file using OpenCASCADE
/// Generated from function `MR::MeshLoad::fromSceneStepFile`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_shared_ptr_MR_Object_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_shared_ptr_MR_Object_std_string *MR_MeshLoad_fromSceneStepFile_std_filesystem_path(const char *path, const char *path_end, const MR_MeshLoadSettings *settings);

/// Generated from function `MR::MeshLoad::fromSceneStepFile`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_shared_ptr_MR_Object_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_shared_ptr_MR_Object_std_string *MR_MeshLoad_fromSceneStepFile_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
