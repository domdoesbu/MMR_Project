// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_EdgeMap MR_EdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.


/// updates a2b map to a2c map using b2c map
/// Generated from function `MR::vertMapsComposition`.
/// Parameter `a2b` can not be null. It is a single object.
/// Parameter `b2c` can not be null. It is a single object.
MRC_API void MR_vertMapsComposition_MR_VertMap_ref(MR_VertMap *a2b, const MR_VertMap *b2c);

/// returns map a2c from a2b and b2c maps
/// Generated from function `MR::vertMapsComposition`.
/// Parameter `a2b` can not be null. It is a single object.
/// Parameter `b2c` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertMap_Destroy()` to free it when you're done using it.
MRC_API MR_VertMap *MR_vertMapsComposition_const_MR_VertMap_ref(const MR_VertMap *a2b, const MR_VertMap *b2c);

/// updates a2b map to a2c map using b2c map
/// Generated from function `MR::edgeMapsComposition`.
/// Parameter `a2b` can not be null. It is a single object.
/// Parameter `b2c` can not be null. It is a single object.
MRC_API void MR_edgeMapsComposition_MR_EdgeMap_ref(MR_EdgeMap *a2b, const MR_EdgeMap *b2c);

/// returns map a2c from a2b and b2c maps
/// Generated from function `MR::edgeMapsComposition`.
/// Parameter `a2b` can not be null. It is a single object.
/// Parameter `b2c` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeMap_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeMap *MR_edgeMapsComposition_const_MR_EdgeMap_ref(const MR_EdgeMap *a2b, const MR_EdgeMap *b2c);

/// updates a2b map to a2c map using b2c map
/// Generated from function `MR::faceMapsComposition`.
/// Parameter `a2b` can not be null. It is a single object.
/// Parameter `b2c` can not be null. It is a single object.
MRC_API void MR_faceMapsComposition_MR_FaceMap_ref(MR_FaceMap *a2b, const MR_FaceMap *b2c);

/// returns map a2c from a2b and b2c maps
/// Generated from function `MR::faceMapsComposition`.
/// Parameter `a2b` can not be null. It is a single object.
/// Parameter `b2c` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceMap_Destroy()` to free it when you're done using it.
MRC_API MR_FaceMap *MR_faceMapsComposition_const_MR_FaceMap_ref(const MR_FaceMap *a2b, const MR_FaceMap *b2c);

#ifdef __cplusplus
} // extern "C"
#endif
