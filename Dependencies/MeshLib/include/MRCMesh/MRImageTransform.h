// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Image MR_Image; // Defined in `#include <MRCMesh/MRImage.h>`.


/// creates an image rotated 90 degrees clockwise
/// Generated from function `MR::ImageTransform::rotateClockwise90`.
/// Parameter `image` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Image_Destroy()` to free it when you're done using it.
MRC_API MR_Image *MR_ImageTransform_rotateClockwise90(const MR_Image *image);

#ifdef __cplusplus
} // extern "C"
#endif
