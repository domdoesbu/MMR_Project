// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_filesystem_path MR_std_vector_std_filesystem_path; // Defined in `#include <MRCMisc/std_vector_std_filesystem_path.h>`.


/// converts system encoded string to UTF8-encoded string
/// Generated from function `MR::systemToUtf8`.
/// Parameter `system` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_systemToUtf8(const MR_std_string *system);

/// converts UTF8-encoded string to system encoded string,
/// returns empty string if such conversion cannot be made
/// Generated from function `MR::utf8ToSystem`.
/// Parameter `utf8` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_utf8ToSystem(const MR_std_string *utf8);

/// Generated from function `MR::utf8string`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_utf8string(const char *path, const char *path_end);

/// converts given size in string:
/// [0,1024) -> nnn bytes
/// [1024,1024*1024) -> nnn.nn Kb
/// [1024*1024,1024*1024*1024) -> nnn.nn Mb
/// ...
/// Generated from function `MR::bytesString`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_bytesString(MR_uint64_t size);

/// returns true if line contains any of OS prohibited chars ('?', '*', '/', '\', '"', '<', '>')
/// Generated from function `MR::hasProhibitedChars`.
/// Parameter `line` can not be null. It is a single object.
MRC_API bool MR_hasProhibitedChars(const MR_std_string *line);

/// replace OS prohibited chars ('?', '*', '/', '\', '"', '<', '>') with `replacement` char
/// Generated from function `MR::replaceProhibitedChars`.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `replacement` has a default argument: `'_'`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_replaceProhibitedChars(const MR_std_string *line, const char *replacement);

/// in case of empty vector, returns "Empty"
/// in case of single input file.ext, returns ".EXT"
/// in case of multiple files with same extension, returns ".EXTs"
/// otherwise returns "Files"
/// Generated from function `MR::commonFilesName`.
/// Parameter `files` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_commonFilesName(const MR_std_vector_std_filesystem_path *files);

/// returns given value rounded to given number of decimal digits
/// Generated from function `MR::roundToPrecision`.
MRC_API double MR_roundToPrecision_double(double v, int32_t precision);

/// returns given value rounded to given number of decimal digits
/// Generated from function `MR::roundToPrecision`.
MRC_API float MR_roundToPrecision_float(float v, int32_t precision);

// Returns message showed when loading is canceled
/// Generated from function `MR::getCancelMessage`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_getCancelMessage(const char *path, const char *path_end);

/// return a copy of the string with all alphabetic characters replaced with upper-case variants
/// Generated from function `MR::toLower`.
/// Parameter `str` can not be null.
/// If `str_end` is null, then `str` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_toLower(const char *str, const char *str_end);

#ifdef __cplusplus
} // extern "C"
#endif
