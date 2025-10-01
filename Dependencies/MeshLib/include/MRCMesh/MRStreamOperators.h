// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointOnFace MR_PointOnFace; // Defined in `#include <MRCMesh/MRPointOnFace.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_std_istream MR_std_istream; // Defined in `#include <MRCMisc/iostream.h>`.
typedef struct MR_std_ostream MR_std_ostream; // Defined in `#include <MRCMisc/iostream.h>`.


/// Generated from function `MR::operator<<<float>`.
/// Parameter `s` can not be null. It is a single object.
/// Parameter `vec` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_ostream *MR_print_MR_Vector3f(MR_std_ostream *s, const MR_Vector3f *vec);

/// Generated from function `MR::operator>><float>`.
/// Parameter `s` can not be null. It is a single object.
/// Parameter `vec` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_istream *MR_rshift_std_istream_MR_Vector3f(MR_std_istream *s, MR_Vector3f *vec);

// =====================================================================
// PointOnFace
/// Generated from function `MR::operator<<`.
/// Parameter `s` can not be null. It is a single object.
/// Parameter `pof` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_ostream *MR_print_MR_PointOnFace(MR_std_ostream *s, const MR_PointOnFace *pof);

/// Generated from function `MR::operator>>`.
/// Parameter `s` can not be null. It is a single object.
/// Parameter `pof` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_istream *MR_rshift_std_istream_MR_PointOnFace(MR_std_istream *s, MR_PointOnFace *pof);

#ifdef __cplusplus
} // extern "C"
#endif
