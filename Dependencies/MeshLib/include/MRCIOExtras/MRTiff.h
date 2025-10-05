// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Image MR_Image; // Defined in `#include <MRCMesh/MRImage.h>`.
typedef struct MR_expected_MR_Image_std_string MR_expected_MR_Image_std_string; // Defined in `#include <MRCMisc/expected_MR_Image_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.


/// loads from .tiff format
/// Generated from function `MR::ImageLoad::fromTiff`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Image_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Image_std_string *MR_ImageLoad_fromTiff(const char *path, const char *path_end);

/// saves in .tiff format
/// Generated from function `MR::ImageSave::toTiff`.
/// Parameter `image` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_ImageSave_toTiff(const MR_Image *image, const char *path, const char *path_end);

#ifdef __cplusplus
} // extern "C"
#endif
