// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_SaveSettings MR_SaveSettings; // Defined in `#include <MRCMesh/MRSaveSettings.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// save points without normals in textual .xyz file;
/// each output line contains [x, y, z], where x, y, z are point coordinates
/// Generated from function `MR::PointsSave::toXyz`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toXyz_std_filesystem_path(const MR_PointCloud *points, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::PointsSave::toXyz`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toXyz_std_ostream(const MR_PointCloud *points, MR_std_ostream *out, const MR_SaveSettings *settings);

/// save points with normals in textual .xyzn file;
/// each output line contains [x, y, z, nx, ny, nz], where x, y, z are point coordinates and nx, ny, nz are the components of point normal
/// Generated from function `MR::PointsSave::toXyzn`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toXyzn_std_filesystem_path(const MR_PointCloud *points, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::PointsSave::toXyzn`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toXyzn_std_ostream(const MR_PointCloud *points, MR_std_ostream *out, const MR_SaveSettings *settings);

/// save points with normals in .xyzn format, and save points without normals in .xyz format
/// Generated from function `MR::PointsSave::toAsc`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toAsc_std_filesystem_path(const MR_PointCloud *points, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::PointsSave::toAsc`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toAsc_std_ostream(const MR_PointCloud *points, MR_std_ostream *out, const MR_SaveSettings *settings);

/// saves in .ply file
/// Generated from function `MR::PointsSave::toPly`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toPly_std_filesystem_path(const MR_PointCloud *points, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::PointsSave::toPly`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toPly_std_ostream(const MR_PointCloud *points, MR_std_ostream *out, const MR_SaveSettings *settings);

/// detects the format from file extension and save points to it
/// Generated from function `MR::PointsSave::toAnySupportedFormat`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toAnySupportedFormat_3(const MR_PointCloud *points, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// extension in `*.ext` format
/// Generated from function `MR::PointsSave::toAnySupportedFormat`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `extension` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_PointsSave_toAnySupportedFormat_4(const MR_PointCloud *points, const MR_std_string *extension, MR_std_ostream *out, const MR_SaveSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
