// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_DistanceMapLoadSettings MR_DistanceMapLoadSettings; // Defined in `#include <MRCMesh/MRDistanceMapParams.h>`.
typedef struct MR_expected_MR_DistanceMap_std_string MR_expected_MR_DistanceMap_std_string; // Defined in `#include <MRCMisc/expected_MR_DistanceMap_std_string.h>`.


/**
* @brief Load DistanceMap from binary file
* Format:
* 2 integer - DistanceMap.resX & DistanceMap.resY
* [resX * resY] float - matrix of values
*/
/// Generated from function `MR::DistanceMapLoad::fromRaw`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_DistanceMap_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_DistanceMap_std_string *MR_DistanceMapLoad_fromRaw(const char *path, const char *path_end, const MR_DistanceMapLoadSettings *settings);

/// Generated from function `MR::DistanceMapLoad::fromMrDistanceMap`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_DistanceMap_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_DistanceMap_std_string *MR_DistanceMapLoad_fromMrDistanceMap(const char *path, const char *path_end, const MR_DistanceMapLoadSettings *settings);

/// Generated from function `MR::DistanceMapLoad::fromTiff`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_DistanceMap_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_DistanceMap_std_string *MR_DistanceMapLoad_fromTiff(const char *path, const char *path_end, const MR_DistanceMapLoadSettings *settings);

/// Generated from function `MR::DistanceMapLoad::fromAnySupportedFormat`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_DistanceMap_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_DistanceMap_std_string *MR_DistanceMapLoad_fromAnySupportedFormat(const char *path, const char *path_end, const MR_DistanceMapLoadSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
