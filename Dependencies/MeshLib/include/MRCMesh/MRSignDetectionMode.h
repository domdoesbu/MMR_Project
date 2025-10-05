// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// how to determine the sign of distances from a mesh
typedef int32_t MR_SignDetectionMode;
enum // MR_SignDetectionMode
{
    /// unsigned distance, useful for bidirectional `Shell` offset
    MR_SignDetectionMode_Unsigned = 0,
    /// sign detection from OpenVDB library, which is good and fast if input geometry is closed
    MR_SignDetectionMode_OpenVDB = 1,
    /// the sign is determined based on pseudonormal in closest mesh point (unsafe in case of self-intersections)
    MR_SignDetectionMode_ProjectionNormal = 2,
    /// ray intersection counter, significantly slower than ProjectionNormal and does not support holes in mesh;
    /// this mode is slow, and it does NOT have CUDA acceleration at this moment
    MR_SignDetectionMode_WindingRule = 3,
    /// computes robust winding number generalization with support of holes and self-intersections in mesh,
    /// it is the slowest sign detection mode, but it CAN be accelerated with CUDA if this mode activated e.g. in OffsetParameters.fwn
    MR_SignDetectionMode_HoleWindingRule = 4,
};

/// how to determine the sign of distances from a mesh, short version including auto-detection
typedef int32_t MR_SignDetectionModeShort;
enum // MR_SignDetectionModeShort
{
    ///< automatic selection of the fastest method among safe options for the current mesh
    MR_SignDetectionModeShort_Auto = 0,
    ///< detects sign from the winding number generalization with support for holes and self-intersections in mesh
    MR_SignDetectionModeShort_HoleWindingNumber = 1,
    ///< detects sign from the pseudonormal in closest mesh point, which is fast but unsafe in the presence of holes and self-intersections in mesh
    MR_SignDetectionModeShort_ProjectionNormal = 2,
};

/// returns string representation of enum values
/// Generated from function `MR::asString`.
MRC_API const char *MR_asString_MR_SignDetectionMode(MR_SignDetectionMode m);

#ifdef __cplusplus
} // extern "C"
#endif
