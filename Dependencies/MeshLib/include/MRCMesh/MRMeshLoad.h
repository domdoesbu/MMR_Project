// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshLoadSettings MR_MeshLoadSettings; // Defined in `#include <MRCMesh/MRMeshLoadSettings.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// loads mesh from file in internal MeshLib format
/// Generated from function `MR::loadMrmesh`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadMrmesh_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in internal MeshLib format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::loadMrmesh`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadMrmesh_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in .OFF format
/// Generated from function `MR::loadOff`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadOff_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in .OFF format
/// Generated from function `MR::loadOff`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadOff_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in .OBJ format
/// Generated from function `MR::loadObj`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadObj_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in .OBJ format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::loadObj`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadObj_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in any .STL format: both binary and ASCII
/// Generated from function `MR::loadStl`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadStl_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in any .STL format: both binary and ASCII;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::loadStl`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadStl_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in binary .STL format
/// Generated from function `MR::loadBinaryStl`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadBinaryStl_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in binary .STL format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::loadBinaryStl`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadBinaryStl_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in textual .STL format
/// Generated from function `MR::loadASCIIStl`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadASCIIStl_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in textual .STL format
/// Generated from function `MR::loadASCIIStl`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadASCIIStl_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in .PLY format;
/// Generated from function `MR::loadPly`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadPly_const_std_filesystem_path_ref(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in .PLY format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::loadPly`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadPly_std_istream_ref_MR_MeshLoadSettings(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in .DXF format;
/// Generated from function `MR::loadDxf`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadDxf_std_filesystem_path(const char *path, const char *path_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in .DXF format;
/// Generated from function `MR::loadDxf`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadDxf_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in the format detected from file extension
/// Generated from function `MR::loadMesh`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadMesh_2(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in the format detected from given extension-string (`*.ext`);
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::loadMesh`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `extension` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_loadMesh_3(MR_std_istream *in, const MR_std_string *extension, const MR_MeshLoadSettings *settings);

/// loads mesh from file in internal MeshLib format
/// Generated from function `MR::MeshLoad::fromMrmesh`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromMrmesh_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in internal MeshLib format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::MeshLoad::fromMrmesh`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromMrmesh_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in .OFF format
/// Generated from function `MR::MeshLoad::fromOff`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromOff_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in .OFF format
/// Generated from function `MR::MeshLoad::fromOff`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromOff_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in .OBJ format
/// Generated from function `MR::MeshLoad::fromObj`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromObj_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in .OBJ format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::MeshLoad::fromObj`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromObj_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in any .STL format: both binary and ASCII
/// Generated from function `MR::MeshLoad::fromAnyStl`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromAnyStl_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in any .STL format: both binary and ASCII;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::MeshLoad::fromAnyStl`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromAnyStl_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in binary .STL format
/// Generated from function `MR::MeshLoad::fromBinaryStl`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromBinaryStl_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in binary .STL format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::MeshLoad::fromBinaryStl`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromBinaryStl_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in textual .STL format
/// Generated from function `MR::MeshLoad::fromASCIIStl`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromASCIIStl_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in textual .STL format
/// Generated from function `MR::MeshLoad::fromASCIIStl`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromASCIIStl_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in .PLY format;
/// Generated from function `MR::MeshLoad::fromPly`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromPly_std_filesystem_path(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in .PLY format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::MeshLoad::fromPly`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromPly_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in .DXF format;
/// Generated from function `MR::MeshLoad::fromDxf`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromDxf_std_filesystem_path(const char *path, const char *path_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in .DXF format;
/// Generated from function `MR::MeshLoad::fromDxf`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromDxf_std_istream(MR_std_istream *in, const MR_MeshLoadSettings *settings);

/// loads mesh from file in the format detected from file extension
/// Generated from function `MR::MeshLoad::fromAnySupportedFormat`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromAnySupportedFormat_2(const char *file, const char *file_end, const MR_MeshLoadSettings *settings);

/// loads mesh from stream in the format detected from given extension-string (`*.ext`);
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::MeshLoad::fromAnySupportedFormat`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `extension` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_MeshLoad_fromAnySupportedFormat_3(MR_std_istream *in, const MR_std_string *extension, const MR_MeshLoadSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
