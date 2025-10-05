// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Image MR_Image; // Defined in `#include <MRCMesh/MRImage.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.


/// saves in .bmp format
/// Generated from function `MR::ImageSave::toBmp`.
/// Parameter `image` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_ImageSave_toBmp(const MR_Image *image, const char *path, const char *path_end);

/// detects the format from file extension and save image to it  
/// Generated from function `MR::ImageSave::toAnySupportedFormat`.
/// Parameter `image` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_ImageSave_toAnySupportedFormat(const MR_Image *image, const char *path, const char *path_end);

#ifdef __cplusplus
} // extern "C"
#endif
