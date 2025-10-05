// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Image MR_Image; // Defined in `#include <MRCMesh/MRImage.h>`.
typedef struct MR_expected_MR_Image_std_string MR_expected_MR_Image_std_string; // Defined in `#include <MRCMisc/expected_MR_Image_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.


/// loads from .png format
/// Generated from function `MR::ImageLoad::fromPng`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Image_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Image_std_string *MR_ImageLoad_fromPng_std_filesystem_path(const char *path, const char *path_end);

/// Generated from function `MR::ImageLoad::fromPng`.
/// Parameter `in` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Image_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Image_std_string *MR_ImageLoad_fromPng_std_istream(MR_std_istream *in);

/// saves in .png format
/// Generated from function `MR::ImageSave::toPng`.
/// Parameter `image` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_ImageSave_toPng_std_filesystem_path(const MR_Image *image, const char *path, const char *path_end);

/// Generated from function `MR::ImageSave::toPng`.
/// Parameter `image` can not be null. It is a single object.
/// Parameter `os` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_ImageSave_toPng_std_ostream(const MR_Image *image, MR_std_ostream *os);

#ifdef __cplusplus
} // extern "C"
#endif
