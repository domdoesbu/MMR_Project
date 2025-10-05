// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


// Z is symmetry axis of this torus
// points - optional out points of main circle
/// Generated from function `MR::makeTorus`.
/// Parameter `primaryRadius` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `secondaryRadius` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `primaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `secondaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `points` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeTorus(const float *primaryRadius, const float *secondaryRadius, const int32_t *primaryResolution, const int32_t *secondaryResolution, MR_std_vector_MR_Vector3f *points);

// creates torus without inner half faces
// main application - testing fillHole and Stitch
/// Generated from function `MR::makeOuterHalfTorus`.
/// Parameter `primaryRadius` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `secondaryRadius` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `primaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `secondaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `points` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeOuterHalfTorus(const float *primaryRadius, const float *secondaryRadius, const int32_t *primaryResolution, const int32_t *secondaryResolution, MR_std_vector_MR_Vector3f *points);

// creates torus with inner protruding half as undercut
// main application - testing fixUndercuts
/// Generated from function `MR::makeTorusWithUndercut`.
/// Parameter `primaryRadius` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `secondaryRadiusInner` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `secondaryRadiusOuter` has a default argument: `0.200000003F`, pass a null pointer to use it.
/// Parameter `primaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `secondaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `points` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeTorusWithUndercut(const float *primaryRadius, const float *secondaryRadiusInner, const float *secondaryRadiusOuter, const int32_t *primaryResolution, const int32_t *secondaryResolution, MR_std_vector_MR_Vector3f *points);

// creates torus with some handed-up points
// main application - testing fixSpikes and Relax
/// Generated from function `MR::makeTorusWithSpikes`.
/// Parameter `primaryRadius` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `secondaryRadiusInner` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `secondaryRadiusOuter` has a default argument: `0.5F`, pass a null pointer to use it.
/// Parameter `primaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `secondaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `points` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeTorusWithSpikes(const float *primaryRadius, const float *secondaryRadiusInner, const float *secondaryRadiusOuter, const int32_t *primaryResolution, const int32_t *secondaryResolution, MR_std_vector_MR_Vector3f *points);

// creates torus with empty sectors
// main application - testing Components
/// Generated from function `MR::makeTorusWithComponents`.
/// Parameter `primaryRadius` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `secondaryRadius` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `primaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `secondaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `points` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeTorusWithComponents(const float *primaryRadius, const float *secondaryRadius, const int32_t *primaryResolution, const int32_t *secondaryResolution, MR_std_vector_MR_Vector3f *points);

// creates torus with empty sectors
// main application - testing Components
/// Generated from function `MR::makeTorusWithSelfIntersections`.
/// Parameter `primaryRadius` has a default argument: `1.F`, pass a null pointer to use it.
/// Parameter `secondaryRadius` has a default argument: `0.100000001F`, pass a null pointer to use it.
/// Parameter `primaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `secondaryResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `points` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeTorusWithSelfIntersections(const float *primaryRadius, const float *secondaryRadius, const int32_t *primaryResolution, const int32_t *secondaryResolution, MR_std_vector_MR_Vector3f *points);

#ifdef __cplusplus
} // extern "C"
#endif
