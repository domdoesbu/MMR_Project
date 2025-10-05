// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_DistanceMap MR_DistanceMap; // Defined in `#include <MRCMesh/MRDistanceMap.h>`.
typedef struct MR_DistanceMapSaveSettings MR_DistanceMapSaveSettings; // Defined in `#include <MRCMesh/MRDistanceMapParams.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.


/**
* @brief Save DistanceMap to binary file
* Format:
* 2 integer - DistanceMap.resX & DistanceMap.resY
* [resX * resY] float - matrix of values
*/
/// Generated from function `MR::DistanceMapSave::toRAW`.
/// Parameter `dmap` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_DistanceMapSave_toRAW(const MR_DistanceMap *dmap, const char *path, const char *path_end, const MR_DistanceMapSaveSettings *settings);

/// Generated from function `MR::DistanceMapSave::toMrDistanceMap`.
/// Parameter `dmap` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_DistanceMapSave_toMrDistanceMap(const MR_DistanceMap *dmap, const char *path, const char *path_end, const MR_DistanceMapSaveSettings *settings);

/// Generated from function `MR::DistanceMapSave::toAnySupportedFormat`.
/// Parameter `dmap` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_DistanceMapSave_toAnySupportedFormat(const MR_DistanceMap *dmap, const char *path, const char *path_end, const MR_DistanceMapSaveSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
