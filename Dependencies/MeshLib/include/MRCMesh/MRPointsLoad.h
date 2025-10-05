// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointsLoadSettings MR_PointsLoadSettings; // Defined in `#include <MRCMesh/MRPointsLoadSettings.h>`.
typedef struct MR_expected_MR_PointCloud_std_string MR_expected_MR_PointCloud_std_string; // Defined in `#include <MRCMisc/expected_MR_PointCloud_std_string.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// loads from .csv, .asc, .xyz, .txt file
/// Generated from function `MR::PointsLoad::fromText`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromText_std_filesystem_path(const char *file, const char *file_end, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::fromText`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromText_std_istream(MR_std_istream *in, const MR_PointsLoadSettings *settings);

/// loads from Laser scan plain data format (.pts) file
/// Generated from function `MR::PointsLoad::fromPts`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromPts_std_filesystem_path(const char *file, const char *file_end, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::fromPts`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromPts_std_istream(MR_std_istream *in, const MR_PointsLoadSettings *settings);

/// loads from .ply file
/// Generated from function `MR::PointsLoad::fromPly`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromPly_std_filesystem_path(const char *file, const char *file_end, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::fromPly`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromPly_std_istream(MR_std_istream *in, const MR_PointsLoadSettings *settings);

/// loads from .obj file
/// Generated from function `MR::PointsLoad::fromObj`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromObj_std_filesystem_path(const char *file, const char *file_end, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::fromObj`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromObj_std_istream(MR_std_istream *in, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::fromDxf`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromDxf_std_filesystem_path(const char *file, const char *file_end, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::fromDxf`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromDxf_std_istream(MR_std_istream *in, const MR_PointsLoadSettings *settings);

/// detects the format from file extension and loads points from it
/// Generated from function `MR::PointsLoad::fromAnySupportedFormat`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromAnySupportedFormat_2(const char *file, const char *file_end, const MR_PointsLoadSettings *settings);

/// extension in `*.ext` format
/// Generated from function `MR::PointsLoad::fromAnySupportedFormat`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `extension` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromAnySupportedFormat_3(MR_std_istream *in, const MR_std_string *extension, const MR_PointsLoadSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
