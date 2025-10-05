// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointsLoadSettings MR_PointsLoadSettings; // Defined in `#include <MRCMesh/MRPointsLoadSettings.h>`.
typedef struct MR_expected_MR_PointCloud_std_string MR_expected_MR_PointCloud_std_string; // Defined in `#include <MRCMisc/expected_MR_PointCloud_std_string.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.


/// loads from .las file
/// Generated from function `MR::PointsLoad::fromLas`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromLas_std_filesystem_path(const char *file, const char *file_end, const MR_PointsLoadSettings *settings);

/// Generated from function `MR::PointsLoad::fromLas`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_PointCloud_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_PointCloud_std_string *MR_PointsLoad_fromLas_std_istream(MR_std_istream *in, const MR_PointsLoadSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
