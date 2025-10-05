// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_SaveSettings MR_SaveSettings; // Defined in `#include <MRCMesh/MRSaveSettings.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// saves in .mrlines file;
/// SaveSettings::onlyValidPoints = true is ignored
/// Generated from function `MR::LinesSave::toMrLines`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toMrLines_std_filesystem_path(const MR_Polyline3 *polyline, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::LinesSave::toMrLines`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toMrLines_std_ostream(const MR_Polyline3 *polyline, MR_std_ostream *out, const MR_SaveSettings *settings);

/// saves in .pts file;
/// SaveSettings::onlyValidPoints = false is ignored
/// Generated from function `MR::LinesSave::toPts`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toPts_std_filesystem_path(const MR_Polyline3 *polyline, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::LinesSave::toPts`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toPts_std_ostream(const MR_Polyline3 *polyline, MR_std_ostream *out, const MR_SaveSettings *settings);

/// saves in .dxf file;
/// SaveSettings::onlyValidPoints = false is ignored
/// Generated from function `MR::LinesSave::toDxf`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toDxf_std_filesystem_path(const MR_Polyline3 *polyline, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::LinesSave::toDxf`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toDxf_std_ostream(const MR_Polyline3 *polyline, MR_std_ostream *out, const MR_SaveSettings *settings);

/// saves in .ply file
/// Generated from function `MR::LinesSave::toPly`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toPly_std_filesystem_path(const MR_Polyline3 *polyline, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// Generated from function `MR::LinesSave::toPly`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toPly_std_ostream(const MR_Polyline3 *polyline, MR_std_ostream *out, const MR_SaveSettings *settings);

/// detects the format from file extension and saves polyline in it
/// Generated from function `MR::LinesSave::toAnySupportedFormat`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toAnySupportedFormat_3(const MR_Polyline3 *polyline, const char *file, const char *file_end, const MR_SaveSettings *settings);

/// extension in `*.ext` format
/// Generated from function `MR::LinesSave::toAnySupportedFormat`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `extension` can not be null. It is a single object.
/// Parameter `out` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_LinesSave_toAnySupportedFormat_4(const MR_Polyline3 *polyline, const MR_std_string *extension, MR_std_ostream *out, const MR_SaveSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
