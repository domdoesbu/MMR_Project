// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTree MR_AABBTree; // Defined in `#include <MRCMesh/MRAABBTree.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Ball3f MR_Ball3f; // Defined in `#include <MRCMesh/MRBall.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_PointOnFace MR_PointOnFace; // Defined in `#include <MRCMesh/MRPointOnFace.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_std_function_MR_Processing_from_MR_FaceId_MR_Ball3f_ref MR_std_function_MR_Processing_from_MR_FaceId_MR_Ball3f_ref; // Defined in `#include <MRCMisc/std_function_MR_Processing_from_MR_FaceId_MR_Ball3f_ref.h>`.
typedef struct MR_std_function_MR_Processing_from_const_MR_MeshProjectionResult_ref_MR_Ball3f_ref MR_std_function_MR_Processing_from_const_MR_MeshProjectionResult_ref_MR_Ball3f_ref; // Defined in `#include <MRCMisc/std_function_MR_Processing_from_const_MR_MeshProjectionResult_ref_MR_Ball3f_ref.h>`.
typedef struct MR_std_function_bool_from_MR_FaceId MR_std_function_bool_from_MR_FaceId; // Defined in `#include <MRCMisc/std_function_bool_from_MR_FaceId.h>`.
typedef struct MR_std_function_bool_from_const_MR_MeshProjectionResult_ref MR_std_function_bool_from_const_MR_MeshProjectionResult_ref; // Defined in `#include <MRCMisc/std_function_bool_from_const_MR_MeshProjectionResult_ref.h>`.
typedef struct MR_std_optional_MR_SignedDistanceToMeshResult MR_std_optional_MR_SignedDistanceToMeshResult; // Defined in `#include <MRCMisc/std_optional_MR_SignedDistanceToMeshResult.h>`.


/// Generated from class `MR::MeshProjectionResult`.
typedef struct MR_MeshProjectionResult MR_MeshProjectionResult;

/// Generated from class `MR::MeshProjectionTransforms`.
typedef struct MR_MeshProjectionTransforms MR_MeshProjectionTransforms;

/// Generated from class `MR::SignedDistanceToMeshResult`.
typedef struct MR_SignedDistanceToMeshResult MR_SignedDistanceToMeshResult;

/// the closest point on mesh, transformed by xf if it is given
/// Returns a pointer to a member variable of class `MR::MeshProjectionResult` named `proj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointOnFace *MR_MeshProjectionResult_Get_proj(const MR_MeshProjectionResult *_this);

/// the closest point on mesh, transformed by xf if it is given
/// Modifies a member variable of class `MR::MeshProjectionResult` named `proj`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshProjectionResult_Set_proj(MR_MeshProjectionResult *_this, const MR_PointOnFace *value);

/// the closest point on mesh, transformed by xf if it is given
/// Returns a mutable pointer to a member variable of class `MR::MeshProjectionResult` named `proj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointOnFace *MR_MeshProjectionResult_GetMutable_proj(MR_MeshProjectionResult *_this);

/// its barycentric representation
/// Returns a pointer to a member variable of class `MR::MeshProjectionResult` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTriPoint *MR_MeshProjectionResult_Get_mtp(const MR_MeshProjectionResult *_this);

/// its barycentric representation
/// Modifies a member variable of class `MR::MeshProjectionResult` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshProjectionResult_Set_mtp(MR_MeshProjectionResult *_this, const MR_MeshTriPoint *value);

/// its barycentric representation
/// Returns a mutable pointer to a member variable of class `MR::MeshProjectionResult` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_MeshProjectionResult_GetMutable_mtp(MR_MeshProjectionResult *_this);

/// squared distance from original projected point to proj
/// Returns a pointer to a member variable of class `MR::MeshProjectionResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshProjectionResult_Get_distSq(const MR_MeshProjectionResult *_this);

/// squared distance from original projected point to proj
/// Modifies a member variable of class `MR::MeshProjectionResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshProjectionResult_Set_distSq(MR_MeshProjectionResult *_this, float value);

/// squared distance from original projected point to proj
/// Returns a mutable pointer to a member variable of class `MR::MeshProjectionResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshProjectionResult_GetMutable_distSq(MR_MeshProjectionResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionResult *MR_MeshProjectionResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshProjectionResult_DestroyArray()`.
/// Use `MR_MeshProjectionResult_OffsetMutablePtr()` and `MR_MeshProjectionResult_OffsetPtr()` to access the array elements.
MRC_API MR_MeshProjectionResult *MR_MeshProjectionResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshProjectionResult` elementwise.
/// Parameter `proj` can not be null. It is a single object.
/// Parameter `mtp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionResult *MR_MeshProjectionResult_ConstructFrom(const MR_PointOnFace *proj, const MR_MeshTriPoint *mtp, float distSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshProjectionResult *MR_MeshProjectionResult_OffsetPtr(const MR_MeshProjectionResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshProjectionResult *MR_MeshProjectionResult_OffsetMutablePtr(MR_MeshProjectionResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshProjectionResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionResult *MR_MeshProjectionResult_ConstructFromAnother(const MR_MeshProjectionResult *_other);

/// Destroys a heap-allocated instance of `MR_MeshProjectionResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshProjectionResult_Destroy(const MR_MeshProjectionResult *_this);

/// Destroys a heap-allocated array of `MR_MeshProjectionResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshProjectionResult_DestroyArray(const MR_MeshProjectionResult *_this);

/// Generated from a conversion operator of class `MR::MeshProjectionResult` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshProjectionResult_ConvertTo_bool(const MR_MeshProjectionResult *_this);

/// Generated from a method of class `MR::MeshProjectionResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshProjectionResult *MR_MeshProjectionResult_AssignFromAnother(MR_MeshProjectionResult *_this, const MR_MeshProjectionResult *_other);

/// check for validity, otherwise the projection was not found
/// Generated from a method of class `MR::MeshProjectionResult` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshProjectionResult_valid(const MR_MeshProjectionResult *_this);

///< this xf is applied to point to move it into projection space
/// Returns a pointer to a member variable of class `MR::MeshProjectionTransforms` named `rigidXfPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_MeshProjectionTransforms_Get_rigidXfPoint(const MR_MeshProjectionTransforms *_this);

///< this xf is applied to point to move it into projection space
/// Modifies a member variable of class `MR::MeshProjectionTransforms` named `rigidXfPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshProjectionTransforms_Set_rigidXfPoint(MR_MeshProjectionTransforms *_this, const MR_AffineXf3f *value);

///< this xf is applied to point to move it into projection space
/// Returns a mutable pointer to a member variable of class `MR::MeshProjectionTransforms` named `rigidXfPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_MeshProjectionTransforms_GetMutable_rigidXfPoint(MR_MeshProjectionTransforms *_this);

///< this xf is applied to AABB tree to move it into projection space
/// Returns a pointer to a member variable of class `MR::MeshProjectionTransforms` named `nonRigidXfTree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_MeshProjectionTransforms_Get_nonRigidXfTree(const MR_MeshProjectionTransforms *_this);

///< this xf is applied to AABB tree to move it into projection space
/// Modifies a member variable of class `MR::MeshProjectionTransforms` named `nonRigidXfTree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshProjectionTransforms_Set_nonRigidXfTree(MR_MeshProjectionTransforms *_this, const MR_AffineXf3f *value);

///< this xf is applied to AABB tree to move it into projection space
/// Returns a mutable pointer to a member variable of class `MR::MeshProjectionTransforms` named `nonRigidXfTree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_MeshProjectionTransforms_GetMutable_nonRigidXfTree(MR_MeshProjectionTransforms *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionTransforms_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionTransforms *MR_MeshProjectionTransforms_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshProjectionTransforms_DestroyArray()`.
/// Use `MR_MeshProjectionTransforms_OffsetMutablePtr()` and `MR_MeshProjectionTransforms_OffsetPtr()` to access the array elements.
MRC_API MR_MeshProjectionTransforms *MR_MeshProjectionTransforms_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshProjectionTransforms` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionTransforms_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionTransforms *MR_MeshProjectionTransforms_ConstructFrom(const MR_AffineXf3f *rigidXfPoint, const MR_AffineXf3f *nonRigidXfTree);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshProjectionTransforms *MR_MeshProjectionTransforms_OffsetPtr(const MR_MeshProjectionTransforms *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshProjectionTransforms *MR_MeshProjectionTransforms_OffsetMutablePtr(MR_MeshProjectionTransforms *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshProjectionTransforms`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionTransforms_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionTransforms *MR_MeshProjectionTransforms_ConstructFromAnother(const MR_MeshProjectionTransforms *_other);

/// Destroys a heap-allocated instance of `MR_MeshProjectionTransforms`. Does nothing if the pointer is null.
MRC_API void MR_MeshProjectionTransforms_Destroy(const MR_MeshProjectionTransforms *_this);

/// Destroys a heap-allocated array of `MR_MeshProjectionTransforms`. Does nothing if the pointer is null.
MRC_API void MR_MeshProjectionTransforms_DestroyArray(const MR_MeshProjectionTransforms *_this);

/// Generated from a method of class `MR::MeshProjectionTransforms` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshProjectionTransforms *MR_MeshProjectionTransforms_AssignFromAnother(MR_MeshProjectionTransforms *_this, const MR_MeshProjectionTransforms *_other);

/// <summary>
/// Creates structure with simplified transforms for projection functions, with `rigidXfPoint` applied to point, and `nonRigidXfTree` applied to tree
/// </summary>
/// <param name="storageXf">this argument will hold modified transfrom</param>
/// <param name="pointXf">transform for points to be projected</param>
/// <param name="treeXf">transform for tree's boxes</param>
/// <returns>structure with simplified transforms</returns>
/// Generated from function `MR::createProjectionTransforms`.
/// Parameter `storageXf` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionTransforms_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionTransforms *MR_createProjectionTransforms(MR_AffineXf3f *storageXf, const MR_AffineXf3f *pointXf, const MR_AffineXf3f *treeXf);

/**
* \brief computes the closest point on mesh (or its region) to given point
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger than the function exits returning upDistLimitSq and no valid point
* \param xf mesh-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
* \param validFaces if provided then only faces from there will be considered as projections
* \param validProjections if provided then only projections passed this test can be returned
*/
/// Generated from function `MR::findProjection`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `validFaces` is a single object.
/// Parameter `validFaces` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `validProjections` is a single object.
/// Parameter `validProjections` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionResult *MR_findProjection(const MR_Vector3f *pt, const MR_MeshPart *mp, const float *upDistLimitSq, const MR_AffineXf3f *xf, const float *loDistLimitSq, const MR_std_function_bool_from_MR_FaceId *validFaces, const MR_std_function_bool_from_const_MR_MeshProjectionResult_ref *validProjections);

/**
* \brief computes the closest point on mesh (or its region) to given point
* \param tree explicitly given BVH-tree for whole mesh or part of mesh we are searching projection on,
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger than the function exits returning upDistLimitSq and no valid point
* \param xf mesh-to-point transformation, if not specified then identity transformation is assumed
* \param loDistLimitSq low limit on the distance in question, if a point is found within this distance then it is immediately returned without searching for a closer one
* \param validFaces if provided then only faces from there will be considered as projections
* \param validProjections if provided then only projections passed this test can be returned
*/
/// Generated from function `MR::findProjectionSubtree`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `xf` defaults to a null pointer in C++.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Parameter `validFaces` is a single object.
/// Parameter `validFaces` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `validProjections` is a single object.
/// Parameter `validProjections` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshProjectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshProjectionResult *MR_findProjectionSubtree(const MR_Vector3f *pt, const MR_MeshPart *mp, const MR_AABBTree *tree, const float *upDistLimitSq, const MR_AffineXf3f *xf, const float *loDistLimitSq, const MR_std_function_bool_from_MR_FaceId *validFaces, const MR_std_function_bool_from_const_MR_MeshProjectionResult_ref *validProjections);

/// enumerates all triangles with bounding boxes at least partially in the ball (the triangles themselves can be fully out of ball)
/// until callback returns Stop;
/// the ball during enumeration can shrink (new ball is always within the previous one) but never expand
/// Generated from function `MR::findBoxedTrisInBall`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `ball` can not be null. It is a single object.
/// Parameter `foundCallback` can not be null. It is a single object.
MRC_API void MR_findBoxedTrisInBall(const MR_MeshPart *mp, const MR_Ball3f *ball, const MR_std_function_MR_Processing_from_MR_FaceId_MR_Ball3f_ref *foundCallback);

/// enumerates all triangles within the ball until callback returns Stop;
/// the ball during enumeration can shrink (new ball is always within the previous one) but never expand
/// Generated from function `MR::findTrisInBall`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `ball` can not be null. It is a single object.
/// Parameter `foundCallback` can not be null. It is a single object.
/// Parameter `validFaces` is a single object.
/// Parameter `validFaces` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_findTrisInBall(const MR_MeshPart *mp, const MR_Ball3f *ball, const MR_std_function_MR_Processing_from_const_MR_MeshProjectionResult_ref_MR_Ball3f_ref *foundCallback, const MR_std_function_bool_from_MR_FaceId *validFaces);

/// the closest point on mesh
/// Returns a pointer to a member variable of class `MR::SignedDistanceToMeshResult` named `proj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointOnFace *MR_SignedDistanceToMeshResult_Get_proj(const MR_SignedDistanceToMeshResult *_this);

/// the closest point on mesh
/// Modifies a member variable of class `MR::SignedDistanceToMeshResult` named `proj`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_SignedDistanceToMeshResult_Set_proj(MR_SignedDistanceToMeshResult *_this, const MR_PointOnFace *value);

/// the closest point on mesh
/// Returns a mutable pointer to a member variable of class `MR::SignedDistanceToMeshResult` named `proj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointOnFace *MR_SignedDistanceToMeshResult_GetMutable_proj(MR_SignedDistanceToMeshResult *_this);

/// its barycentric representation
/// Returns a pointer to a member variable of class `MR::SignedDistanceToMeshResult` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTriPoint *MR_SignedDistanceToMeshResult_Get_mtp(const MR_SignedDistanceToMeshResult *_this);

/// its barycentric representation
/// Modifies a member variable of class `MR::SignedDistanceToMeshResult` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_SignedDistanceToMeshResult_Set_mtp(MR_SignedDistanceToMeshResult *_this, const MR_MeshTriPoint *value);

/// its barycentric representation
/// Returns a mutable pointer to a member variable of class `MR::SignedDistanceToMeshResult` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_SignedDistanceToMeshResult_GetMutable_mtp(MR_SignedDistanceToMeshResult *_this);

/// distance from pt to proj (positive - outside, negative - inside the mesh)
/// Returns a pointer to a member variable of class `MR::SignedDistanceToMeshResult` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SignedDistanceToMeshResult_Get_dist(const MR_SignedDistanceToMeshResult *_this);

/// distance from pt to proj (positive - outside, negative - inside the mesh)
/// Modifies a member variable of class `MR::SignedDistanceToMeshResult` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SignedDistanceToMeshResult_Set_dist(MR_SignedDistanceToMeshResult *_this, float value);

/// distance from pt to proj (positive - outside, negative - inside the mesh)
/// Returns a mutable pointer to a member variable of class `MR::SignedDistanceToMeshResult` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SignedDistanceToMeshResult_GetMutable_dist(MR_SignedDistanceToMeshResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignedDistanceToMeshResult_Destroy()` to free it when you're done using it.
MRC_API MR_SignedDistanceToMeshResult *MR_SignedDistanceToMeshResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SignedDistanceToMeshResult_DestroyArray()`.
/// Use `MR_SignedDistanceToMeshResult_OffsetMutablePtr()` and `MR_SignedDistanceToMeshResult_OffsetPtr()` to access the array elements.
MRC_API MR_SignedDistanceToMeshResult *MR_SignedDistanceToMeshResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SignedDistanceToMeshResult` elementwise.
/// Parameter `proj` can not be null. It is a single object.
/// Parameter `mtp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignedDistanceToMeshResult_Destroy()` to free it when you're done using it.
MRC_API MR_SignedDistanceToMeshResult *MR_SignedDistanceToMeshResult_ConstructFrom(const MR_PointOnFace *proj, const MR_MeshTriPoint *mtp, float dist);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SignedDistanceToMeshResult *MR_SignedDistanceToMeshResult_OffsetPtr(const MR_SignedDistanceToMeshResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SignedDistanceToMeshResult *MR_SignedDistanceToMeshResult_OffsetMutablePtr(MR_SignedDistanceToMeshResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SignedDistanceToMeshResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignedDistanceToMeshResult_Destroy()` to free it when you're done using it.
MRC_API MR_SignedDistanceToMeshResult *MR_SignedDistanceToMeshResult_ConstructFromAnother(const MR_SignedDistanceToMeshResult *_other);

/// Destroys a heap-allocated instance of `MR_SignedDistanceToMeshResult`. Does nothing if the pointer is null.
MRC_API void MR_SignedDistanceToMeshResult_Destroy(const MR_SignedDistanceToMeshResult *_this);

/// Destroys a heap-allocated array of `MR_SignedDistanceToMeshResult`. Does nothing if the pointer is null.
MRC_API void MR_SignedDistanceToMeshResult_DestroyArray(const MR_SignedDistanceToMeshResult *_this);

/// Generated from a method of class `MR::SignedDistanceToMeshResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SignedDistanceToMeshResult *MR_SignedDistanceToMeshResult_AssignFromAnother(MR_SignedDistanceToMeshResult *_this, const MR_SignedDistanceToMeshResult *_other);

/**
* \brief computes the closest point on mesh (or its region) to given point,
* and finds the distance with sign to it (positive - outside, negative - inside the mesh)
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger then the function exits returning nullopt
* \param loDistLimitSq low limit on the distance in question, if the real distance smaller then the function exits returning nullopt
*/
/// Generated from function `MR::findSignedDistance`.
/// Parameter `pt` can not be null. It is a single object.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `loDistLimitSq` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_SignedDistanceToMeshResult_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_SignedDistanceToMeshResult *MR_findSignedDistance_MR_Vector3f(const MR_Vector3f *pt, const MR_MeshPart *mp, const float *upDistLimitSq, const float *loDistLimitSq);

#ifdef __cplusplus
} // extern "C"
#endif
