// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_LineSegm2f MR_LineSegm2f; // Defined in `#include <MRCMesh/MRLineSegm.h>`.
typedef struct MR_std_optional_MR_Vector2f MR_std_optional_MR_Vector2f; // Defined in `#include <MRCMisc/std_optional_MR_Vector2f.h>`.


/// finds an intersection between a segm1 and a segm2
/// \return nullopt if they don't intersect (even if they match)
/// Generated from function `MR::intersection`.
/// Parameter `segm1` can not be null. It is a single object.
/// Parameter `segm2` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Vector2f *MR_intersection(const MR_LineSegm2f *segm1, const MR_LineSegm2f *segm2);

#ifdef __cplusplus
} // extern "C"
#endif
