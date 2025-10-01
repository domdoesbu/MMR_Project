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
typedef struct MR_std_string_view MR_std_string_view; // Defined in `#include <MRCMisc/std_string_view.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


/**
* Finds the substring in the string.
* \return position, npos if not found
*
*/
/// Generated from function `MR::findSubstringCaseInsensitive`.
/// Parameter `string` can not be null. It is a single object.
/// Parameter `substring` can not be null. It is a single object.
MRC_API MR_uint64_t MR_findSubstringCaseInsensitive(const MR_std_string *string, const MR_std_string *substring);

/**
* Calculates Damerau-Levenshtein distance between to strings
* \param outLeftRightAddition if provided return amount of insertions to the left and to the right
*
*/
/// Generated from function `MR::calcDamerauLevenshteinDistance`.
/// Parameter `stringA` can not be null. It is a single object.
/// Parameter `stringB` can not be null. It is a single object.
/// Parameter `caseSensitive` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `outLeftRightAddition` defaults to a null pointer in C++.
MRC_API int32_t MR_calcDamerauLevenshteinDistance(const MR_std_string *stringA, const MR_std_string *stringB, const bool *caseSensitive, int32_t *outLeftRightAddition);

/**
* Splits given string by delimiter.
* \return vector of split strings
*
*/
/// Generated from function `MR::split`.
/// Parameter `string` can not be null. It is a single object.
/// Parameter `delimiter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_split(const MR_std_string *string, const MR_std_string *delimiter);

/// Returns \param target with all \param from replaced with \param to, zero or more times.
/// Generated from function `MR::replace`.
/// Parameter `target` can not be null.
/// If `target_end` is null, then `target` is assumed to be null-terminated.
/// Parameter `from` can not be null.
/// If `from_end` is null, then `from` is assumed to be null-terminated.
/// Parameter `to` can not be null.
/// If `to_end` is null, then `to` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_replace(const char *target, const char *target_end, const char *from, const char *from_end, const char *to, const char *to_end);

/// Replaces \param from with \param to in \param target (in-place), zero or more times.
/// Generated from function `MR::replaceInplace`.
/// Parameter `target` can not be null. It is a single object.
/// Parameter `from` can not be null.
/// If `from_end` is null, then `from` is assumed to be null-terminated.
/// Parameter `to` can not be null.
/// If `to_end` is null, then `to` is assumed to be null-terminated.
MRC_API void MR_replaceInplace(MR_std_string *target, const char *from, const char *from_end, const char *to, const char *to_end);

/// Removes all whitespace character (detected by std::isspace) at the beginning and the end of string view
/// Generated from function `MR::trim`.
/// Parameter `str` can not be null.
/// If `str_end` is null, then `str` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_view_Destroy()` to free it when you're done using it.
MRC_API MR_std_string_view *MR_trim(const char *str, const char *str_end);

/// Removes all whitespace character (detected by std::isspace) at the beginning of string view
/// Generated from function `MR::trimLeft`.
/// Parameter `str` can not be null.
/// If `str_end` is null, then `str` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_view_Destroy()` to free it when you're done using it.
MRC_API MR_std_string_view *MR_trimLeft(const char *str, const char *str_end);

/// Removes all whitespace character (detected by std::isspace) at the end of string view
/// Generated from function `MR::trimRight`.
/// Parameter `str` can not be null.
/// If `str_end` is null, then `str` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_view_Destroy()` to free it when you're done using it.
MRC_API MR_std_string_view *MR_trimRight(const char *str, const char *str_end);

#ifdef __cplusplus
} // extern "C"
#endif
