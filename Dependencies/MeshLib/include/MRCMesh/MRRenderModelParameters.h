// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// Various passes of the 3D rendering.
typedef int32_t MR_RenderModelPassMask;
enum // MR_RenderModelPassMask
{
    MR_RenderModelPassMask_Opaque = 1,
    MR_RenderModelPassMask_Transparent = 2,
    MR_RenderModelPassMask_VolumeRendering = 4,
    MR_RenderModelPassMask_NoDepthTest = 8,
    MR_RenderModelPassMask_All = 15,
};

/// Generated from function `MR::operator&`.
MRC_API MR_RenderModelPassMask MR_bitand_MR_RenderModelPassMask(MR_RenderModelPassMask a, MR_RenderModelPassMask b);

/// Generated from function `MR::operator|`.
MRC_API MR_RenderModelPassMask MR_bitor_MR_RenderModelPassMask(MR_RenderModelPassMask a, MR_RenderModelPassMask b);

/// Generated from function `MR::operator~`.
MRC_API MR_RenderModelPassMask MR_compl_MR_RenderModelPassMask(MR_RenderModelPassMask a);

/// Generated from function `MR::operator&=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RenderModelPassMask *MR_bitand_assign_MR_RenderModelPassMask(MR_RenderModelPassMask *a, MR_RenderModelPassMask b);

/// Generated from function `MR::operator|=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RenderModelPassMask *MR_bitor_assign_MR_RenderModelPassMask(MR_RenderModelPassMask *a, MR_RenderModelPassMask b);

/// Generated from function `MR::operator*`.
MRC_API MR_RenderModelPassMask MR_mul_MR_RenderModelPassMask_bool(MR_RenderModelPassMask a, bool b);

/// Generated from function `MR::operator*`.
MRC_API MR_RenderModelPassMask MR_mul_bool_MR_RenderModelPassMask(bool a, MR_RenderModelPassMask b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RenderModelPassMask *MR_mul_assign_MR_RenderModelPassMask_bool(MR_RenderModelPassMask *a, bool b);

#ifdef __cplusplus
} // extern "C"
#endif
