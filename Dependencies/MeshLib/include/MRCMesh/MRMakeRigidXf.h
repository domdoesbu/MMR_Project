// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.


/// given a mesh part and its arbitrary transformation, computes and returns
/// the rigid transformation that best approximates meshXf
/// Generated from function `MR::makeRigidXf`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
MRC_API MR_AffineXf3d MR_makeRigidXf_MR_AffineXf3d(const MR_MeshPart *mp, const MR_AffineXf3d *meshXf);

/// Generated from function `MR::makeRigidXf`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `meshXf` can not be null. It is a single object.
MRC_API MR_AffineXf3f MR_makeRigidXf_MR_AffineXf3f(const MR_MeshPart *mp, const MR_AffineXf3f *meshXf);

#ifdef __cplusplus
} // extern "C"
#endif
