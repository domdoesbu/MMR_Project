// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Face2RegionMap MR_Face2RegionMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_expected_MR_FaceBitSet_std_string MR_expected_MR_FaceBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_FaceBitSet_std_string.h>`.
typedef struct MR_expected_bool_std_string MR_expected_bool_std_string; // Defined in `#include <MRCMisc/expected_bool_std_string.h>`.
typedef struct MR_expected_std_vector_MR_FaceFace_std_string MR_expected_std_vector_MR_FaceFace_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_FaceFace_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_pair_MR_FaceBitSet_MR_FaceBitSet MR_std_pair_MR_FaceBitSet_MR_FaceBitSet; // Defined in `#include <MRCMisc/std_pair_MR_FaceBitSet_MR_FaceBitSet.h>`.
typedef struct MR_std_vector_MR_FaceFace MR_std_vector_MR_FaceFace; // Defined in `#include <MRCMisc/std_vector_MR_FaceFace.h>`.


/**
* \brief finds all pairs of colliding triangles from two meshes or two mesh regions
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
* \param firstIntersectionOnly if true then the function returns at most one pair of intersecting triangles and returns faster
*/
/// Generated from function `MR::findCollidingTriangles`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `firstIntersectionOnly` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_FaceFace_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_FaceFace *MR_findCollidingTriangles(const MR_MeshPart *a, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A, const bool *firstIntersectionOnly);

/// the same as \ref findCollidingTriangles, but returns one bite set per mesh with colliding triangles
/// Generated from function `MR::findCollidingTriangleBitsets`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_MR_FaceBitSet_MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_MR_FaceBitSet_MR_FaceBitSet *MR_findCollidingTriangleBitsets(const MR_MeshPart *a, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A);

/// finds all pairs (or the fact of any self-collision) of colliding triangles from one mesh or a region
/// Generated from function `MR::findSelfCollidingTriangles`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `regionMap` defaults to a null pointer in C++.
/// Parameter `touchIsIntersection` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_bool_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_bool_std_string *MR_findSelfCollidingTriangles_5(const MR_MeshPart *mp, MR_std_vector_MR_FaceFace *outCollidingPairs, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const MR_Face2RegionMap *regionMap, const bool *touchIsIntersection);

/// finds all pairs of colliding triangles from one mesh or a region
/// Generated from function `MR::findSelfCollidingTriangles`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `regionMap` defaults to a null pointer in C++.
/// Parameter `touchIsIntersection` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_FaceFace_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_FaceFace_std_string *MR_findSelfCollidingTriangles_4(const MR_MeshPart *mp, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const MR_Face2RegionMap *regionMap, const bool *touchIsIntersection);

/// the same \ref findSelfCollidingTriangles but returns the union of all self-intersecting faces
/// Generated from function `MR::findSelfCollidingTrianglesBS`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `regionMap` defaults to a null pointer in C++.
/// Parameter `touchIsIntersection` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FaceBitSet_std_string *MR_findSelfCollidingTrianglesBS(const MR_MeshPart *mp, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const MR_Face2RegionMap *regionMap, const bool *touchIsIntersection);

/**
* \brief checks that arbitrary mesh part A is inside of closed mesh part B
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
*/
/// Generated from function `MR::isInside`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
MRC_API bool MR_isInside_MR_MeshPart(const MR_MeshPart *a, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A);

/**
* \brief checks that arbitrary mesh part A is inside of closed mesh part B
* The version of `isInside` without collision check; it is user's responsibility to guarantee that the meshes don't collide
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
*/
/// Generated from function `MR::isNonIntersectingInside`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
MRC_API bool MR_isNonIntersectingInside_3(const MR_MeshPart *a, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A);

/**
* \brief checks that arbitrary mesh A part (whole part is represented by one face `partFace`) is inside of closed mesh part B
* The version of `isInside` without collision check; it is user's responsibility to guarantee that the meshes don't collide
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
*/
/// Generated from function `MR::isNonIntersectingInside`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
MRC_API bool MR_isNonIntersectingInside_4(const MR_Mesh *a, MR_FaceId partFace, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A);

#ifdef __cplusplus
} // extern "C"
#endif
