// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_expected_MR_Image_std_string MR_expected_MR_Image_std_string; // Defined in `#include <MRCMisc/expected_MR_Image_std_string.h>`.


/// detects the format from file extension and loads image from it
/// Generated from function `MR::ImageLoad::fromAnySupportedFormat`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Image_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Image_std_string *MR_ImageLoad_fromAnySupportedFormat(const char *path, const char *path_end);

#ifdef __cplusplus
} // extern "C"
#endif
