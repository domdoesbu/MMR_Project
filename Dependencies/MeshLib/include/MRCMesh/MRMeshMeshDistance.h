// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_PointOnFace MR_PointOnFace; // Defined in `#include <MRCMesh/MRPointOnFace.h>`.


/// Generated from class `MR::MeshMeshDistanceResult`.
typedef struct MR_MeshMeshDistanceResult MR_MeshMeshDistanceResult;

/// Generated from class `MR::MeshMeshSignedDistanceResult`.
typedef struct MR_MeshMeshSignedDistanceResult MR_MeshMeshSignedDistanceResult;

/// two closest points: from meshes A and B respectively
/// Returns a pointer to a member variable of class `MR::MeshMeshDistanceResult` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointOnFace *MR_MeshMeshDistanceResult_Get_a(const MR_MeshMeshDistanceResult *_this);

/// two closest points: from meshes A and B respectively
/// Modifies a member variable of class `MR::MeshMeshDistanceResult` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshMeshDistanceResult_Set_a(MR_MeshMeshDistanceResult *_this, const MR_PointOnFace *value);

/// two closest points: from meshes A and B respectively
/// Returns a mutable pointer to a member variable of class `MR::MeshMeshDistanceResult` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointOnFace *MR_MeshMeshDistanceResult_GetMutable_a(MR_MeshMeshDistanceResult *_this);

/// two closest points: from meshes A and B respectively
/// Returns a pointer to a member variable of class `MR::MeshMeshDistanceResult` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointOnFace *MR_MeshMeshDistanceResult_Get_b(const MR_MeshMeshDistanceResult *_this);

/// two closest points: from meshes A and B respectively
/// Modifies a member variable of class `MR::MeshMeshDistanceResult` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshMeshDistanceResult_Set_b(MR_MeshMeshDistanceResult *_this, const MR_PointOnFace *value);

/// two closest points: from meshes A and B respectively
/// Returns a mutable pointer to a member variable of class `MR::MeshMeshDistanceResult` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointOnFace *MR_MeshMeshDistanceResult_GetMutable_b(MR_MeshMeshDistanceResult *_this);

/// squared distance between a and b
/// Returns a pointer to a member variable of class `MR::MeshMeshDistanceResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshMeshDistanceResult_Get_distSq(const MR_MeshMeshDistanceResult *_this);

/// squared distance between a and b
/// Modifies a member variable of class `MR::MeshMeshDistanceResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshMeshDistanceResult_Set_distSq(MR_MeshMeshDistanceResult *_this, float value);

/// squared distance between a and b
/// Returns a mutable pointer to a member variable of class `MR::MeshMeshDistanceResult` named `distSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshMeshDistanceResult_GetMutable_distSq(MR_MeshMeshDistanceResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshDistanceResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshDistanceResult *MR_MeshMeshDistanceResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshMeshDistanceResult_DestroyArray()`.
/// Use `MR_MeshMeshDistanceResult_OffsetMutablePtr()` and `MR_MeshMeshDistanceResult_OffsetPtr()` to access the array elements.
MRC_API MR_MeshMeshDistanceResult *MR_MeshMeshDistanceResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshMeshDistanceResult` elementwise.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshDistanceResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshDistanceResult *MR_MeshMeshDistanceResult_ConstructFrom(const MR_PointOnFace *a, const MR_PointOnFace *b, float distSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshMeshDistanceResult *MR_MeshMeshDistanceResult_OffsetPtr(const MR_MeshMeshDistanceResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshMeshDistanceResult *MR_MeshMeshDistanceResult_OffsetMutablePtr(MR_MeshMeshDistanceResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshMeshDistanceResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshDistanceResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshDistanceResult *MR_MeshMeshDistanceResult_ConstructFromAnother(const MR_MeshMeshDistanceResult *_other);

/// Destroys a heap-allocated instance of `MR_MeshMeshDistanceResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshMeshDistanceResult_Destroy(const MR_MeshMeshDistanceResult *_this);

/// Destroys a heap-allocated array of `MR_MeshMeshDistanceResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshMeshDistanceResult_DestroyArray(const MR_MeshMeshDistanceResult *_this);

/// Generated from a method of class `MR::MeshMeshDistanceResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshMeshDistanceResult *MR_MeshMeshDistanceResult_AssignFromAnother(MR_MeshMeshDistanceResult *_this, const MR_MeshMeshDistanceResult *_other);

/// two closest points: from meshes A and B respectively
/// Returns a pointer to a member variable of class `MR::MeshMeshSignedDistanceResult` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointOnFace *MR_MeshMeshSignedDistanceResult_Get_a(const MR_MeshMeshSignedDistanceResult *_this);

/// two closest points: from meshes A and B respectively
/// Modifies a member variable of class `MR::MeshMeshSignedDistanceResult` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshMeshSignedDistanceResult_Set_a(MR_MeshMeshSignedDistanceResult *_this, const MR_PointOnFace *value);

/// two closest points: from meshes A and B respectively
/// Returns a mutable pointer to a member variable of class `MR::MeshMeshSignedDistanceResult` named `a`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointOnFace *MR_MeshMeshSignedDistanceResult_GetMutable_a(MR_MeshMeshSignedDistanceResult *_this);

/// two closest points: from meshes A and B respectively
/// Returns a pointer to a member variable of class `MR::MeshMeshSignedDistanceResult` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointOnFace *MR_MeshMeshSignedDistanceResult_Get_b(const MR_MeshMeshSignedDistanceResult *_this);

/// two closest points: from meshes A and B respectively
/// Modifies a member variable of class `MR::MeshMeshSignedDistanceResult` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshMeshSignedDistanceResult_Set_b(MR_MeshMeshSignedDistanceResult *_this, const MR_PointOnFace *value);

/// two closest points: from meshes A and B respectively
/// Returns a mutable pointer to a member variable of class `MR::MeshMeshSignedDistanceResult` named `b`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointOnFace *MR_MeshMeshSignedDistanceResult_GetMutable_b(MR_MeshMeshSignedDistanceResult *_this);

/// signed distance between a and b, positive if meshes do not collide
/// Returns a pointer to a member variable of class `MR::MeshMeshSignedDistanceResult` named `signedDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshMeshSignedDistanceResult_Get_signedDist(const MR_MeshMeshSignedDistanceResult *_this);

/// signed distance between a and b, positive if meshes do not collide
/// Modifies a member variable of class `MR::MeshMeshSignedDistanceResult` named `signedDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshMeshSignedDistanceResult_Set_signedDist(MR_MeshMeshSignedDistanceResult *_this, float value);

/// signed distance between a and b, positive if meshes do not collide
/// Returns a mutable pointer to a member variable of class `MR::MeshMeshSignedDistanceResult` named `signedDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshMeshSignedDistanceResult_GetMutable_signedDist(MR_MeshMeshSignedDistanceResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshSignedDistanceResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshSignedDistanceResult *MR_MeshMeshSignedDistanceResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshMeshSignedDistanceResult_DestroyArray()`.
/// Use `MR_MeshMeshSignedDistanceResult_OffsetMutablePtr()` and `MR_MeshMeshSignedDistanceResult_OffsetPtr()` to access the array elements.
MRC_API MR_MeshMeshSignedDistanceResult *MR_MeshMeshSignedDistanceResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshMeshSignedDistanceResult` elementwise.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshSignedDistanceResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshSignedDistanceResult *MR_MeshMeshSignedDistanceResult_ConstructFrom(const MR_PointOnFace *a, const MR_PointOnFace *b, float signedDist);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshMeshSignedDistanceResult *MR_MeshMeshSignedDistanceResult_OffsetPtr(const MR_MeshMeshSignedDistanceResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshMeshSignedDistanceResult *MR_MeshMeshSignedDistanceResult_OffsetMutablePtr(MR_MeshMeshSignedDistanceResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshMeshSignedDistanceResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshSignedDistanceResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshSignedDistanceResult *MR_MeshMeshSignedDistanceResult_ConstructFromAnother(const MR_MeshMeshSignedDistanceResult *_other);

/// Destroys a heap-allocated instance of `MR_MeshMeshSignedDistanceResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshMeshSignedDistanceResult_Destroy(const MR_MeshMeshSignedDistanceResult *_this);

/// Destroys a heap-allocated array of `MR_MeshMeshSignedDistanceResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshMeshSignedDistanceResult_DestroyArray(const MR_MeshMeshSignedDistanceResult *_this);

/// Generated from a method of class `MR::MeshMeshSignedDistanceResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshMeshSignedDistanceResult *MR_MeshMeshSignedDistanceResult_AssignFromAnother(MR_MeshMeshSignedDistanceResult *_this, const MR_MeshMeshSignedDistanceResult *_other);

/**
* \brief computes minimal distance between two meshes or two mesh regions
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
* \param upDistLimitSq upper limit on the distance in question, if the real distance is larger than the function exists returning upDistLimitSq and no valid points
*/
/// Generated from function `MR::findDistance`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshDistanceResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshDistanceResult *MR_findDistance(const MR_MeshPart *a, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A, const float *upDistLimitSq);

/**
* \brief computes minimal distance between two meshes
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
* \param upDistLimitSq upper limit on the positive distance in question, if the real distance is larger than the function exists returning upDistLimitSq and no valid points
*/
/// Generated from function `MR::findSignedDistance`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `upDistLimitSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshMeshSignedDistanceResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshMeshSignedDistanceResult *MR_findSignedDistance_MR_MeshPart(const MR_MeshPart *a, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A, const float *upDistLimitSq);

/**
* \brief returns the maximum of the squared distances from each B-mesh vertex to A-mesh
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
* \param maxDistanceSq upper limit on the positive distance in question, if the real distance is larger than the function exists returning maxDistanceSq
*/
/// Generated from function `MR::findMaxDistanceSqOneWay`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `maxDistanceSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
MRC_API float MR_findMaxDistanceSqOneWay_MR_MeshPart(const MR_MeshPart *a, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A, const float *maxDistanceSq);

/**
* \brief returns the squared Hausdorff distance between two meshes, that is
the maximum of squared distances from each mesh vertex to the other mesh (in both directions)
* \param rigidB2A rigid transformation from B-mesh space to A mesh space, nullptr considered as identity transformation
* \param maxDistanceSq upper limit on the positive distance in question, if the real distance is larger than the function exists returning maxDistanceSq
*/
/// Generated from function `MR::findMaxDistanceSq`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `maxDistanceSq` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
MRC_API float MR_findMaxDistanceSq_MR_MeshPart(const MR_MeshPart *a, const MR_MeshPart *b, const MR_AffineXf3f *rigidB2A, const float *maxDistanceSq);

#ifdef __cplusplus
} // extern "C"
#endif
