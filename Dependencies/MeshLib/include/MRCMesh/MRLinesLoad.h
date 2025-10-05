// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_LinesLoadSettings MR_LinesLoadSettings; // Defined in `#include <MRCMesh/MRLinesLoadSettings.h>`.
typedef struct MR_expected_MR_Polyline3_std_string MR_expected_MR_Polyline3_std_string; // Defined in `#include <MRCMisc/expected_MR_Polyline3_std_string.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// loads polyline from file in internal MeshLib format
/// Generated from function `MR::LinesLoad::fromMrLines`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Polyline3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Polyline3_std_string *MR_LinesLoad_fromMrLines_std_filesystem_path(const char *file, const char *file_end, const MR_LinesLoadSettings *settings);

/// loads polyline from stream in internal MeshLib format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::LinesLoad::fromMrLines`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Polyline3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Polyline3_std_string *MR_LinesLoad_fromMrLines_std_istream(MR_std_istream *in, const MR_LinesLoadSettings *settings);

/// loads polyline from file in .PTS format
/// Generated from function `MR::LinesLoad::fromPts`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Polyline3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Polyline3_std_string *MR_LinesLoad_fromPts_std_filesystem_path(const char *file, const char *file_end, const MR_LinesLoadSettings *settings);

/// loads polyline from stream in .PTS format
/// Generated from function `MR::LinesLoad::fromPts`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Polyline3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Polyline3_std_string *MR_LinesLoad_fromPts_std_istream(MR_std_istream *in, const MR_LinesLoadSettings *settings);

/// loads polyline from file in .PLY format
/// Generated from function `MR::LinesLoad::fromPly`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Polyline3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Polyline3_std_string *MR_LinesLoad_fromPly_std_filesystem_path(const char *file, const char *file_end, const MR_LinesLoadSettings *settings);

/// loads polyline from stream in .PLY format;
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::LinesLoad::fromPly`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Polyline3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Polyline3_std_string *MR_LinesLoad_fromPly_std_istream(MR_std_istream *in, const MR_LinesLoadSettings *settings);

/// loads polyline from file in the format detected from file extension
/// Generated from function `MR::LinesLoad::fromAnySupportedFormat`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Polyline3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Polyline3_std_string *MR_LinesLoad_fromAnySupportedFormat_2(const char *file, const char *file_end, const MR_LinesLoadSettings *settings);

/// loads polyline from stream in the format detected from given extension-string (`*.ext`);
/// important on Windows: in stream must be open in binary mode
/// Generated from function `MR::LinesLoad::fromAnySupportedFormat`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `extension` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Polyline3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Polyline3_std_string *MR_LinesLoad_fromAnySupportedFormat_3(MR_std_istream *in, const MR_std_string *extension, const MR_LinesLoadSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
