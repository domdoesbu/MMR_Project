// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.


/// saves mesh with optional selection to mru format;
/// this is very convenient for saving intermediate states during algorithm debugging;
/// ".mrmesh" save mesh format is not space efficient, but guaranties no changes in the topology after loading
/// Generated from function `MR::serializeMesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `selection` defaults to a null pointer in C++.
/// Parameter `serializeFormat` has a default argument: `".mrmesh"`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_serializeMesh(const MR_Mesh *mesh, const char *path, const char *path_end, const MR_FaceBitSet *selection, const char *const *serializeFormat);

#ifdef __cplusplus
} // extern "C"
#endif
