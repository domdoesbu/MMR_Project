// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


//Draws cylinder with radius 'radius', height - 'length', its base have 'resolution' sides
/// Generated from function `MR::makeCylinder`.
/// Parameter `radius` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `length` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `resolution` has a default argument: `16`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeCylinder(const float *radius, const float *length, const int32_t *resolution);

// A hollow cylinder.
/// Generated from function `MR::makeOpenCylinder`.
/// Parameter `radius` has a default argument: `1`, pass a null pointer to use it.
/// Parameter `z1` has a default argument: `-1`, pass a null pointer to use it.
/// Parameter `z2` has a default argument: `1`, pass a null pointer to use it.
/// Parameter `numCircleSegments` has a default argument: `16`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeOpenCylinder(const float *radius, const float *z1, const float *z2, const int32_t *numCircleSegments);

// A hollow cone.
/// Generated from function `MR::makeOpenCone`.
/// Parameter `radius` has a default argument: `1`, pass a null pointer to use it.
/// Parameter `zApex` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `zBase` has a default argument: `1`, pass a null pointer to use it.
/// Parameter `numCircleSegments` has a default argument: `16`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeOpenCone(const float *radius, const float *zApex, const float *zBase, const int32_t *numCircleSegments);

/// Generated from function `MR::makeCylinderAdvanced`.
/// Parameter `radius0` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `radius1` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `start_angle` has a default argument: `0.F`, pass a null pointer to use it.
/// Parameter `arc_size` has a default argument: `2.F * PI_F`, pass a null pointer to use it.
/// Parameter `length` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `resolution` has a default argument: `16`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeCylinderAdvanced(const float *radius0, const float *radius1, const float *start_angle, const float *arc_size, const float *length, const int32_t *resolution);

// Makes cone mesh by calling makeCylinderAdvanced with the top radius 0.
/// Generated from function `MR::makeCone`.
/// Parameter `radius0` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `length` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `resolution` has a default argument: `32`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeCone(const float *radius0, const float *length, const int32_t *resolution);

#ifdef __cplusplus
} // extern "C"
#endif
