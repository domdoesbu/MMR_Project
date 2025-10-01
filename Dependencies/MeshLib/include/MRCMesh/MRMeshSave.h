// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_SaveSettings MR_SaveSettings; // Defined in `#include <MRCMesh/MRSaveSettings.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// saves in internal file format;
/// SaveSettings::onlyValidPoints = true is ignored
/// Generated from function `MR::MeshSave::toMrmesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toMrmesh_std_filesystem_path(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::MeshSave::toMrmesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toMrmesh_std_ostream(const MR_Mesh *mesh, MR_std_ostream *out, const MR_SaveSettings *settings);

/// saves in .off file
/// Generated from function `MR::MeshSave::toOff`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toOff_std_filesystem_path(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::MeshSave::toOff`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toOff_std_ostream(const MR_Mesh *mesh, MR_std_ostream *out, const MR_SaveSettings *settings);

/// saves in .obj file
/// \param firstVertId is the index of first mesh vertex in the output file (if this object is not the first there)
/// Generated from function `MR::MeshSave::toObj`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toObj_4_std_filesystem_path(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_SaveSettings *settings, int32_t firstVertId);

/// Generated from function `MR::MeshSave::toObj`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toObj_4_std_ostream(const MR_Mesh *mesh, MR_std_ostream *out, const MR_SaveSettings *settings, int32_t firstVertId);

/// Generated from function `MR::MeshSave::toObj`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toObj_3_std_filesystem_path(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::MeshSave::toObj`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toObj_3_std_ostream(const MR_Mesh *mesh, MR_std_ostream *out, const MR_SaveSettings *settings);

/// saves in binary .stl file;
/// SaveSettings::onlyValidPoints = false is ignored
/// Generated from function `MR::MeshSave::toBinaryStl`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toBinaryStl_std_filesystem_path(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::MeshSave::toBinaryStl`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toBinaryStl_std_ostream(const MR_Mesh *mesh, MR_std_ostream *out, const MR_SaveSettings *settings);

/// saves in textual .stl file;
/// SaveSettings::onlyValidPoints = false is ignored
/// Generated from function `MR::MeshSave::toAsciiStl`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toAsciiStl_std_filesystem_path(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::MeshSave::toAsciiStl`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toAsciiStl_std_ostream(const MR_Mesh *mesh, MR_std_ostream *out, const MR_SaveSettings *settings);

/// saves in .ply file
/// Generated from function `MR::MeshSave::toPly`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toPly_std_filesystem_path(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::MeshSave::toPly`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toPly_std_ostream(const MR_Mesh *mesh, MR_std_ostream *out, const MR_SaveSettings *settings);

/// detects the format from file extension and save mesh to it
/// Generated from function `MR::MeshSave::toAnySupportedFormat`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toAnySupportedFormat_3(const MR_Mesh *mesh, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// extension in `*.ext` format
/// Generated from function `MR::MeshSave::toAnySupportedFormat`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `extension` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_MeshSave_toAnySupportedFormat_4(const MR_Mesh *mesh, const MR_std_string *extension, MR_std_ostream *out, const MR_SaveSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
