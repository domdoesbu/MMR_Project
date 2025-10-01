// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTree MR_AABBTree; // Defined in `#include <MRCMesh/MRAABBTree.h>`.
typedef struct MR_BitSet MR_BitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_IntersectionPrecomputes_double MR_IntersectionPrecomputes_double; // Defined in `#include <MRCMesh/MRIntersectionPrecomputes.h>`.
typedef struct MR_IntersectionPrecomputes_float MR_IntersectionPrecomputes_float; // Defined in `#include <MRCMesh/MRIntersectionPrecomputes.h>`.
typedef struct MR_Line3d MR_Line3d; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Line3f MR_Line3f; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_PointOnFace MR_PointOnFace; // Defined in `#include <MRCMesh/MRPointOnFace.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_function_bool_from_MR_FaceId MR_std_function_bool_from_MR_FaceId; // Defined in `#include <MRCMisc/std_function_bool_from_MR_FaceId.h>`.
typedef struct MR_std_function_bool_from_const_MR_MeshIntersectionResult_ref MR_std_function_bool_from_const_MR_MeshIntersectionResult_ref; // Defined in `#include <MRCMisc/std_function_bool_from_const_MR_MeshIntersectionResult_ref.h>`.
typedef struct MR_std_vector_MR_FaceId MR_std_vector_MR_FaceId; // Defined in `#include <MRCMisc/std_vector_MR_FaceId.h>`.
typedef struct MR_std_vector_MR_Line3Mesh_double MR_std_vector_MR_Line3Mesh_double; // Defined in `#include <MRCMisc/std_vector_MR_Line3Mesh_double.h>`.
typedef struct MR_std_vector_MR_Line3Mesh_float MR_std_vector_MR_Line3Mesh_float; // Defined in `#include <MRCMisc/std_vector_MR_Line3Mesh_float.h>`.
typedef struct MR_std_vector_MR_TriPointf MR_std_vector_MR_TriPointf; // Defined in `#include <MRCMisc/std_vector_MR_TriPointf.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.


/// Generated from class `MR::MeshIntersectionResult`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::MultiMeshIntersectionResult`
typedef struct MR_MeshIntersectionResult MR_MeshIntersectionResult;

/// Generated from class `MR::MultiRayMeshIntersectResult`.
typedef struct MR_MultiRayMeshIntersectResult MR_MultiRayMeshIntersectResult;

/// Generated from class `MR::MultiMeshIntersectionResult`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::MeshIntersectionResult`
typedef struct MR_MultiMeshIntersectionResult MR_MultiMeshIntersectionResult;

/// Generated from class `MR::Line3Mesh<float>`.
typedef struct MR_Line3Mesh_float MR_Line3Mesh_float;

/// Generated from class `MR::Line3Mesh<double>`.
typedef struct MR_Line3Mesh_double MR_Line3Mesh_double;

/// stores intersected face and global coordinates
/// Returns a pointer to a member variable of class `MR::MeshIntersectionResult` named `proj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointOnFace *MR_MeshIntersectionResult_Get_proj(const MR_MeshIntersectionResult *_this);

/// stores intersected face and global coordinates
/// Modifies a member variable of class `MR::MeshIntersectionResult` named `proj`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshIntersectionResult_Set_proj(MR_MeshIntersectionResult *_this, const MR_PointOnFace *value);

/// stores intersected face and global coordinates
/// Returns a mutable pointer to a member variable of class `MR::MeshIntersectionResult` named `proj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointOnFace *MR_MeshIntersectionResult_GetMutable_proj(MR_MeshIntersectionResult *_this);

/// stores barycentric coordinates
/// Returns a pointer to a member variable of class `MR::MeshIntersectionResult` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTriPoint *MR_MeshIntersectionResult_Get_mtp(const MR_MeshIntersectionResult *_this);

/// stores barycentric coordinates
/// Modifies a member variable of class `MR::MeshIntersectionResult` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshIntersectionResult_Set_mtp(MR_MeshIntersectionResult *_this, const MR_MeshTriPoint *value);

/// stores barycentric coordinates
/// Returns a mutable pointer to a member variable of class `MR::MeshIntersectionResult` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_MeshIntersectionResult_GetMutable_mtp(MR_MeshIntersectionResult *_this);

/// stores the distance from ray origin to the intersection point in direction units
/// Returns a pointer to a member variable of class `MR::MeshIntersectionResult` named `distanceAlongLine`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshIntersectionResult_Get_distanceAlongLine(const MR_MeshIntersectionResult *_this);

/// stores the distance from ray origin to the intersection point in direction units
/// Modifies a member variable of class `MR::MeshIntersectionResult` named `distanceAlongLine`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshIntersectionResult_Set_distanceAlongLine(MR_MeshIntersectionResult *_this, float value);

/// stores the distance from ray origin to the intersection point in direction units
/// Returns a mutable pointer to a member variable of class `MR::MeshIntersectionResult` named `distanceAlongLine`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshIntersectionResult_GetMutable_distanceAlongLine(MR_MeshIntersectionResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshIntersectionResult *MR_MeshIntersectionResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshIntersectionResult_DestroyArray()`.
/// Use `MR_MeshIntersectionResult_OffsetMutablePtr()` and `MR_MeshIntersectionResult_OffsetPtr()` to access the array elements.
MRC_API MR_MeshIntersectionResult *MR_MeshIntersectionResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshIntersectionResult` elementwise.
/// Parameter `proj` can not be null. It is a single object.
/// Parameter `mtp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshIntersectionResult *MR_MeshIntersectionResult_ConstructFrom(const MR_PointOnFace *proj, const MR_MeshTriPoint *mtp, float distanceAlongLine);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshIntersectionResult *MR_MeshIntersectionResult_OffsetPtr(const MR_MeshIntersectionResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshIntersectionResult *MR_MeshIntersectionResult_OffsetMutablePtr(MR_MeshIntersectionResult *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::MeshIntersectionResult` to a derived class `MR::MultiMeshIntersectionResult`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MultiMeshIntersectionResult *MR_MeshIntersectionResult_StaticDowncastTo_MR_MultiMeshIntersectionResult(const MR_MeshIntersectionResult *object);

/// Downcasts an instance of `MR::MeshIntersectionResult` to a derived class `MR::MultiMeshIntersectionResult`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MultiMeshIntersectionResult *MR_MeshIntersectionResult_MutableStaticDowncastTo_MR_MultiMeshIntersectionResult(MR_MeshIntersectionResult *object);

/// Generated from a constructor of class `MR::MeshIntersectionResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshIntersectionResult *MR_MeshIntersectionResult_ConstructFromAnother(const MR_MeshIntersectionResult *_other);

/// Destroys a heap-allocated instance of `MR_MeshIntersectionResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshIntersectionResult_Destroy(const MR_MeshIntersectionResult *_this);

/// Destroys a heap-allocated array of `MR_MeshIntersectionResult`. Does nothing if the pointer is null.
MRC_API void MR_MeshIntersectionResult_DestroyArray(const MR_MeshIntersectionResult *_this);

/// check for validity
/// Generated from a conversion operator of class `MR::MeshIntersectionResult` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshIntersectionResult_ConvertTo_bool(const MR_MeshIntersectionResult *_this);

/// Generated from a method of class `MR::MeshIntersectionResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshIntersectionResult *MR_MeshIntersectionResult_AssignFromAnother(MR_MeshIntersectionResult *_this, const MR_MeshIntersectionResult *_other);

/// Finds ray and mesh intersection in float-precision.
/// \p rayStart and \p rayEnd define the interval on the ray to detect an intersection.
/// \p prec can be specified to reuse some precomputations (e.g. for checking many parallel rays).
/// \p vadidFaces if given then all faces for which false is returned will be skipped
/// Finds the closest to ray origin intersection (or any intersection for better performance if \p !closestIntersect).
/// Generated from function `MR::rayMeshIntersect`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0.F`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `prec` defaults to a null pointer in C++.
/// Parameter `closestIntersect` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `validFaces` is a single object.
/// Parameter `validFaces` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshIntersectionResult *MR_rayMeshIntersect_MR_Line3f(const MR_MeshPart *meshPart, const MR_Line3f *line, const float *rayStart, const float *rayEnd, const MR_IntersectionPrecomputes_float *prec, const bool *closestIntersect, const MR_std_function_bool_from_MR_FaceId *validFaces);

/// Finds ray and mesh intersection in double-precision.
/// \p rayStart and \p rayEnd define the interval on the ray to detect an intersection.
/// \p prec can be specified to reuse some precomputations (e.g. for checking many parallel rays).
/// \p vadidFaces if given then all faces for which false is returned will be skipped
/// Finds the closest to ray origin intersection (or any intersection for better performance if \p !closestIntersect).
/// Generated from function `MR::rayMeshIntersect`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0.`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `1.7976931348623157E+308`, pass a null pointer to use it.
/// Parameter `prec` defaults to a null pointer in C++.
/// Parameter `closestIntersect` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `validFaces` is a single object.
/// Parameter `validFaces` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshIntersectionResult *MR_rayMeshIntersect_MR_Line3d(const MR_MeshPart *meshPart, const MR_Line3d *line, const double *rayStart, const double *rayEnd, const MR_IntersectionPrecomputes_double *prec, const bool *closestIntersect, const MR_std_function_bool_from_MR_FaceId *validFaces);

///< true if the ray has intersection with mesh part, false otherwise
/// Returns a pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `intersectingRays`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet *const *MR_MultiRayMeshIntersectResult_Get_intersectingRays(const MR_MultiRayMeshIntersectResult *_this);

///< true if the ray has intersection with mesh part, false otherwise
/// Modifies a member variable of class `MR::MultiRayMeshIntersectResult` named `intersectingRays`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiRayMeshIntersectResult_Set_intersectingRays(MR_MultiRayMeshIntersectResult *_this, MR_BitSet *value);

///< true if the ray has intersection with mesh part, false otherwise
/// Returns a mutable pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `intersectingRays`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BitSet **MR_MultiRayMeshIntersectResult_GetMutable_intersectingRays(MR_MultiRayMeshIntersectResult *_this);

///< distance along each ray till the intersection point or NaN if no intersection
/// Returns a pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `rayDistances`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_float *const *MR_MultiRayMeshIntersectResult_Get_rayDistances(const MR_MultiRayMeshIntersectResult *_this);

///< distance along each ray till the intersection point or NaN if no intersection
/// Modifies a member variable of class `MR::MultiRayMeshIntersectResult` named `rayDistances`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiRayMeshIntersectResult_Set_rayDistances(MR_MultiRayMeshIntersectResult *_this, MR_std_vector_float *value);

///< distance along each ray till the intersection point or NaN if no intersection
/// Returns a mutable pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `rayDistances`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_float **MR_MultiRayMeshIntersectResult_GetMutable_rayDistances(MR_MultiRayMeshIntersectResult *_this);

///< intersected triangles from mesh
/// Returns a pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `isectFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_FaceId *const *MR_MultiRayMeshIntersectResult_Get_isectFaces(const MR_MultiRayMeshIntersectResult *_this);

///< intersected triangles from mesh
/// Modifies a member variable of class `MR::MultiRayMeshIntersectResult` named `isectFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiRayMeshIntersectResult_Set_isectFaces(MR_MultiRayMeshIntersectResult *_this, MR_std_vector_MR_FaceId *value);

///< intersected triangles from mesh
/// Returns a mutable pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `isectFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_FaceId **MR_MultiRayMeshIntersectResult_GetMutable_isectFaces(MR_MultiRayMeshIntersectResult *_this);

///< barycentric coordinates of the intersection point within intersected triangle or NaNs if no intersection
/// Returns a pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `isectBary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_TriPointf *const *MR_MultiRayMeshIntersectResult_Get_isectBary(const MR_MultiRayMeshIntersectResult *_this);

///< barycentric coordinates of the intersection point within intersected triangle or NaNs if no intersection
/// Modifies a member variable of class `MR::MultiRayMeshIntersectResult` named `isectBary`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiRayMeshIntersectResult_Set_isectBary(MR_MultiRayMeshIntersectResult *_this, MR_std_vector_MR_TriPointf *value);

///< barycentric coordinates of the intersection point within intersected triangle or NaNs if no intersection
/// Returns a mutable pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `isectBary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_TriPointf **MR_MultiRayMeshIntersectResult_GetMutable_isectBary(MR_MultiRayMeshIntersectResult *_this);

///< intersection points or NaNs if no intersection
/// Returns a pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `isectPts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f *const *MR_MultiRayMeshIntersectResult_Get_isectPts(const MR_MultiRayMeshIntersectResult *_this);

///< intersection points or NaNs if no intersection
/// Modifies a member variable of class `MR::MultiRayMeshIntersectResult` named `isectPts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiRayMeshIntersectResult_Set_isectPts(MR_MultiRayMeshIntersectResult *_this, MR_std_vector_MR_Vector3f *value);

///< intersection points or NaNs if no intersection
/// Returns a mutable pointer to a member variable of class `MR::MultiRayMeshIntersectResult` named `isectPts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f **MR_MultiRayMeshIntersectResult_GetMutable_isectPts(MR_MultiRayMeshIntersectResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiRayMeshIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_MultiRayMeshIntersectResult *MR_MultiRayMeshIntersectResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MultiRayMeshIntersectResult_DestroyArray()`.
/// Use `MR_MultiRayMeshIntersectResult_OffsetMutablePtr()` and `MR_MultiRayMeshIntersectResult_OffsetPtr()` to access the array elements.
MRC_API MR_MultiRayMeshIntersectResult *MR_MultiRayMeshIntersectResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MultiRayMeshIntersectResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiRayMeshIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_MultiRayMeshIntersectResult *MR_MultiRayMeshIntersectResult_ConstructFrom(MR_BitSet *intersectingRays, MR_std_vector_float *rayDistances, MR_std_vector_MR_FaceId *isectFaces, MR_std_vector_MR_TriPointf *isectBary, MR_std_vector_MR_Vector3f *isectPts);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MultiRayMeshIntersectResult *MR_MultiRayMeshIntersectResult_OffsetPtr(const MR_MultiRayMeshIntersectResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MultiRayMeshIntersectResult *MR_MultiRayMeshIntersectResult_OffsetMutablePtr(MR_MultiRayMeshIntersectResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MultiRayMeshIntersectResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiRayMeshIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_MultiRayMeshIntersectResult *MR_MultiRayMeshIntersectResult_ConstructFromAnother(const MR_MultiRayMeshIntersectResult *_other);

/// Destroys a heap-allocated instance of `MR_MultiRayMeshIntersectResult`. Does nothing if the pointer is null.
MRC_API void MR_MultiRayMeshIntersectResult_Destroy(const MR_MultiRayMeshIntersectResult *_this);

/// Destroys a heap-allocated array of `MR_MultiRayMeshIntersectResult`. Does nothing if the pointer is null.
MRC_API void MR_MultiRayMeshIntersectResult_DestroyArray(const MR_MultiRayMeshIntersectResult *_this);

/// Generated from a method of class `MR::MultiRayMeshIntersectResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MultiRayMeshIntersectResult *MR_MultiRayMeshIntersectResult_AssignFromAnother(MR_MultiRayMeshIntersectResult *_this, const MR_MultiRayMeshIntersectResult *_other);

/// Finds intersections between a mesh and multiple rays in parallel (in float-precision).
/// \p rayStart and \p rayEnd define the interval on all rays to detect an intersection.
/// \p vadidFaces if given then all faces for which false is returned will be skipped
/// Generated from function `MR::multiRayMeshIntersect`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `origins` can not be null. It is a single object.
/// Parameter `dirs` can not be null. It is a single object.
/// Parameter `result` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0.F`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `closestIntersect` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `validFaces` is a single object.
/// Parameter `validFaces` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_multiRayMeshIntersect(const MR_MeshPart *meshPart, const MR_std_vector_MR_Vector3f *origins, const MR_std_vector_MR_Vector3f *dirs, const MR_MultiRayMeshIntersectResult *result, const float *rayStart, const float *rayEnd, const bool *closestIntersect, const MR_std_function_bool_from_MR_FaceId *validFaces);

/// the intersection found in this mesh
/// Returns a pointer to a member variable of class `MR::MultiMeshIntersectionResult` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *const *MR_MultiMeshIntersectionResult_Get_mesh(const MR_MultiMeshIntersectionResult *_this);

/// the intersection found in this mesh
/// Modifies a member variable of class `MR::MultiMeshIntersectionResult` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MultiMeshIntersectionResult_Set_mesh(MR_MultiMeshIntersectionResult *_this, const MR_Mesh *value);

/// the intersection found in this mesh
/// Returns a mutable pointer to a member variable of class `MR::MultiMeshIntersectionResult` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh **MR_MultiMeshIntersectionResult_GetMutable_mesh(MR_MultiMeshIntersectionResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiMeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MultiMeshIntersectionResult *MR_MultiMeshIntersectionResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MultiMeshIntersectionResult_DestroyArray()`.
/// Use `MR_MultiMeshIntersectionResult_OffsetMutablePtr()` and `MR_MultiMeshIntersectionResult_OffsetPtr()` to access the array elements.
MRC_API MR_MultiMeshIntersectionResult *MR_MultiMeshIntersectionResult_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MultiMeshIntersectionResult *MR_MultiMeshIntersectionResult_OffsetPtr(const MR_MultiMeshIntersectionResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MultiMeshIntersectionResult *MR_MultiMeshIntersectionResult_OffsetMutablePtr(MR_MultiMeshIntersectionResult *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::MultiMeshIntersectionResult` to its base class `MR::MeshIntersectionResult`.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshIntersectionResult *MR_MultiMeshIntersectionResult_UpcastTo_MR_MeshIntersectionResult(const MR_MultiMeshIntersectionResult *object);

/// Upcasts an instance of `MR::MultiMeshIntersectionResult` to its base class `MR::MeshIntersectionResult`.
MRC_API MR_MeshIntersectionResult *MR_MultiMeshIntersectionResult_MutableUpcastTo_MR_MeshIntersectionResult(MR_MultiMeshIntersectionResult *object);

/// Generated from a constructor of class `MR::MultiMeshIntersectionResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiMeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MultiMeshIntersectionResult *MR_MultiMeshIntersectionResult_ConstructFromAnother(const MR_MultiMeshIntersectionResult *_other);

/// Destroys a heap-allocated instance of `MR_MultiMeshIntersectionResult`. Does nothing if the pointer is null.
MRC_API void MR_MultiMeshIntersectionResult_Destroy(const MR_MultiMeshIntersectionResult *_this);

/// Destroys a heap-allocated array of `MR_MultiMeshIntersectionResult`. Does nothing if the pointer is null.
MRC_API void MR_MultiMeshIntersectionResult_DestroyArray(const MR_MultiMeshIntersectionResult *_this);

/// Generated from a method of class `MR::MultiMeshIntersectionResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MultiMeshIntersectionResult *MR_MultiMeshIntersectionResult_AssignFromAnother(MR_MultiMeshIntersectionResult *_this, const MR_MultiMeshIntersectionResult *_other);

///< in the reference frame of mesh
/// Returns a pointer to a member variable of class `MR::Line3Mesh<float>` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line3f *MR_Line3Mesh_float_Get_line(const MR_Line3Mesh_float *_this);

///< in the reference frame of mesh
/// Modifies a member variable of class `MR::Line3Mesh<float>` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_float_Set_line(MR_Line3Mesh_float *_this, const MR_Line3f *value);

///< in the reference frame of mesh
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<float>` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3f *MR_Line3Mesh_float_GetMutable_line(MR_Line3Mesh_float *_this);

///< set it to a valid pointer for better performance
/// Returns a pointer to a member variable of class `MR::Line3Mesh<float>` named `prec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IntersectionPrecomputes_float *const *MR_Line3Mesh_float_Get_prec(const MR_Line3Mesh_float *_this);

///< set it to a valid pointer for better performance
/// Modifies a member variable of class `MR::Line3Mesh<float>` named `prec`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_float_Set_prec(MR_Line3Mesh_float *_this, MR_IntersectionPrecomputes_float *value);

///< set it to a valid pointer for better performance
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<float>` named `prec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IntersectionPrecomputes_float **MR_Line3Mesh_float_GetMutable_prec(MR_Line3Mesh_float *_this);

///< must be set a valid pointer before use
/// Returns a pointer to a member variable of class `MR::Line3Mesh<float>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *const *MR_Line3Mesh_float_Get_mesh(const MR_Line3Mesh_float *_this);

///< must be set a valid pointer before use
/// Modifies a member variable of class `MR::Line3Mesh<float>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_float_Set_mesh(MR_Line3Mesh_float *_this, const MR_Mesh *value);

///< must be set a valid pointer before use
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<float>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh **MR_Line3Mesh_float_GetMutable_mesh(MR_Line3Mesh_float *_this);

///< must be set a valid pointer before use
/// Returns a pointer to a member variable of class `MR::Line3Mesh<float>` named `tree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTree *const *MR_Line3Mesh_float_Get_tree(const MR_Line3Mesh_float *_this);

///< must be set a valid pointer before use
/// Modifies a member variable of class `MR::Line3Mesh<float>` named `tree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_float_Set_tree(MR_Line3Mesh_float *_this, const MR_AABBTree *value);

///< must be set a valid pointer before use
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<float>` named `tree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTree **MR_Line3Mesh_float_GetMutable_tree(MR_Line3Mesh_float *_this);

///< may remain nullptr, meaning all mesh
/// Returns a pointer to a member variable of class `MR::Line3Mesh<float>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *const *MR_Line3Mesh_float_Get_region(const MR_Line3Mesh_float *_this);

///< may remain nullptr, meaning all mesh
/// Modifies a member variable of class `MR::Line3Mesh<float>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_float_Set_region(MR_Line3Mesh_float *_this, const MR_FaceBitSet *value);

///< may remain nullptr, meaning all mesh
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<float>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet **MR_Line3Mesh_float_GetMutable_region(MR_Line3Mesh_float *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3Mesh_float_Destroy()` to free it when you're done using it.
MRC_API MR_Line3Mesh_float *MR_Line3Mesh_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Line3Mesh_float_DestroyArray()`.
/// Use `MR_Line3Mesh_float_OffsetMutablePtr()` and `MR_Line3Mesh_float_OffsetPtr()` to access the array elements.
MRC_API MR_Line3Mesh_float *MR_Line3Mesh_float_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Line3Mesh<float>` elementwise.
/// Parameter `line` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3Mesh_float_Destroy()` to free it when you're done using it.
MRC_API MR_Line3Mesh_float *MR_Line3Mesh_float_ConstructFrom(const MR_Line3f *line, MR_IntersectionPrecomputes_float *prec, const MR_Mesh *mesh, const MR_AABBTree *tree, const MR_FaceBitSet *region);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Line3Mesh_float *MR_Line3Mesh_float_OffsetPtr(const MR_Line3Mesh_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Line3Mesh_float *MR_Line3Mesh_float_OffsetMutablePtr(MR_Line3Mesh_float *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Line3Mesh<float>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3Mesh_float_Destroy()` to free it when you're done using it.
MRC_API MR_Line3Mesh_float *MR_Line3Mesh_float_ConstructFromAnother(const MR_Line3Mesh_float *_other);

/// Destroys a heap-allocated instance of `MR_Line3Mesh_float`. Does nothing if the pointer is null.
MRC_API void MR_Line3Mesh_float_Destroy(const MR_Line3Mesh_float *_this);

/// Destroys a heap-allocated array of `MR_Line3Mesh_float`. Does nothing if the pointer is null.
MRC_API void MR_Line3Mesh_float_DestroyArray(const MR_Line3Mesh_float *_this);

/// Generated from a method of class `MR::Line3Mesh<float>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3Mesh_float *MR_Line3Mesh_float_AssignFromAnother(MR_Line3Mesh_float *_this, const MR_Line3Mesh_float *_other);

///< in the reference frame of mesh
/// Returns a pointer to a member variable of class `MR::Line3Mesh<double>` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line3d *MR_Line3Mesh_double_Get_line(const MR_Line3Mesh_double *_this);

///< in the reference frame of mesh
/// Modifies a member variable of class `MR::Line3Mesh<double>` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_double_Set_line(MR_Line3Mesh_double *_this, const MR_Line3d *value);

///< in the reference frame of mesh
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<double>` named `line`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3d *MR_Line3Mesh_double_GetMutable_line(MR_Line3Mesh_double *_this);

///< set it to a valid pointer for better performance
/// Returns a pointer to a member variable of class `MR::Line3Mesh<double>` named `prec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IntersectionPrecomputes_double *const *MR_Line3Mesh_double_Get_prec(const MR_Line3Mesh_double *_this);

///< set it to a valid pointer for better performance
/// Modifies a member variable of class `MR::Line3Mesh<double>` named `prec`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_double_Set_prec(MR_Line3Mesh_double *_this, MR_IntersectionPrecomputes_double *value);

///< set it to a valid pointer for better performance
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<double>` named `prec`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IntersectionPrecomputes_double **MR_Line3Mesh_double_GetMutable_prec(MR_Line3Mesh_double *_this);

///< must be set a valid pointer before use
/// Returns a pointer to a member variable of class `MR::Line3Mesh<double>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *const *MR_Line3Mesh_double_Get_mesh(const MR_Line3Mesh_double *_this);

///< must be set a valid pointer before use
/// Modifies a member variable of class `MR::Line3Mesh<double>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_double_Set_mesh(MR_Line3Mesh_double *_this, const MR_Mesh *value);

///< must be set a valid pointer before use
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<double>` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh **MR_Line3Mesh_double_GetMutable_mesh(MR_Line3Mesh_double *_this);

///< must be set a valid pointer before use
/// Returns a pointer to a member variable of class `MR::Line3Mesh<double>` named `tree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTree *const *MR_Line3Mesh_double_Get_tree(const MR_Line3Mesh_double *_this);

///< must be set a valid pointer before use
/// Modifies a member variable of class `MR::Line3Mesh<double>` named `tree`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_double_Set_tree(MR_Line3Mesh_double *_this, const MR_AABBTree *value);

///< must be set a valid pointer before use
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<double>` named `tree`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AABBTree **MR_Line3Mesh_double_GetMutable_tree(MR_Line3Mesh_double *_this);

///< may remain nullptr, meaning all mesh
/// Returns a pointer to a member variable of class `MR::Line3Mesh<double>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *const *MR_Line3Mesh_double_Get_region(const MR_Line3Mesh_double *_this);

///< may remain nullptr, meaning all mesh
/// Modifies a member variable of class `MR::Line3Mesh<double>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Line3Mesh_double_Set_region(MR_Line3Mesh_double *_this, const MR_FaceBitSet *value);

///< may remain nullptr, meaning all mesh
/// Returns a mutable pointer to a member variable of class `MR::Line3Mesh<double>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet **MR_Line3Mesh_double_GetMutable_region(MR_Line3Mesh_double *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3Mesh_double_Destroy()` to free it when you're done using it.
MRC_API MR_Line3Mesh_double *MR_Line3Mesh_double_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Line3Mesh_double_DestroyArray()`.
/// Use `MR_Line3Mesh_double_OffsetMutablePtr()` and `MR_Line3Mesh_double_OffsetPtr()` to access the array elements.
MRC_API MR_Line3Mesh_double *MR_Line3Mesh_double_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Line3Mesh<double>` elementwise.
/// Parameter `line` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3Mesh_double_Destroy()` to free it when you're done using it.
MRC_API MR_Line3Mesh_double *MR_Line3Mesh_double_ConstructFrom(const MR_Line3d *line, MR_IntersectionPrecomputes_double *prec, const MR_Mesh *mesh, const MR_AABBTree *tree, const MR_FaceBitSet *region);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Line3Mesh_double *MR_Line3Mesh_double_OffsetPtr(const MR_Line3Mesh_double *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Line3Mesh_double *MR_Line3Mesh_double_OffsetMutablePtr(MR_Line3Mesh_double *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Line3Mesh<double>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Line3Mesh_double_Destroy()` to free it when you're done using it.
MRC_API MR_Line3Mesh_double *MR_Line3Mesh_double_ConstructFromAnother(const MR_Line3Mesh_double *_other);

/// Destroys a heap-allocated instance of `MR_Line3Mesh_double`. Does nothing if the pointer is null.
MRC_API void MR_Line3Mesh_double_Destroy(const MR_Line3Mesh_double *_this);

/// Destroys a heap-allocated array of `MR_Line3Mesh_double`. Does nothing if the pointer is null.
MRC_API void MR_Line3Mesh_double_DestroyArray(const MR_Line3Mesh_double *_this);

/// Generated from a method of class `MR::Line3Mesh<double>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3Mesh_double *MR_Line3Mesh_double_AssignFromAnother(MR_Line3Mesh_double *_this, const MR_Line3Mesh_double *_other);

/// Intersects ray with many meshes. Finds any intersection (not the closest)
/// \anchor rayMultiMeshAnyIntersectF
/// Generated from function `MR::rayMultiMeshAnyIntersect`.
/// Parameter `lineMeshes` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0.F`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiMeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MultiMeshIntersectionResult *MR_rayMultiMeshAnyIntersect_std_vector_MR_Line3Mesh_float(const MR_std_vector_MR_Line3Mesh_float *lineMeshes, const float *rayStart, const float *rayEnd);

/// Same as \ref rayMultiMeshAnyIntersectF, but use double precision
/// Generated from function `MR::rayMultiMeshAnyIntersect`.
/// Parameter `lineMeshes` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0.`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `1.7976931348623157E+308`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MultiMeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MultiMeshIntersectionResult *MR_rayMultiMeshAnyIntersect_std_vector_MR_Line3Mesh_double(const MR_std_vector_MR_Line3Mesh_double *lineMeshes, const double *rayStart, const double *rayEnd);

/// Intersects ray with mesh. Finds all intersections
/// \anchor rayMeshIntersectAllF
/// Generated from function `MR::rayMeshIntersectAll`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0.F`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `3.40282347E+38F`, pass a null pointer to use it.
/// Parameter `prec` defaults to a null pointer in C++.
MRC_API void MR_rayMeshIntersectAll_MR_Line3f(const MR_MeshPart *meshPart, const MR_Line3f *line, MR_PassBy callback_pass_by, MR_std_function_bool_from_const_MR_MeshIntersectionResult_ref *callback, const float *rayStart, const float *rayEnd, const MR_IntersectionPrecomputes_float *prec);

/// Same as \ref rayMeshIntersectAllF, but use double precision
/// Generated from function `MR::rayMeshIntersectAll`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `rayStart` has a default argument: `0.`, pass a null pointer to use it.
/// Parameter `rayEnd` has a default argument: `1.7976931348623157E+308`, pass a null pointer to use it.
/// Parameter `prec` defaults to a null pointer in C++.
MRC_API void MR_rayMeshIntersectAll_MR_Line3d(const MR_MeshPart *meshPart, const MR_Line3d *line, MR_PassBy callback_pass_by, MR_std_function_bool_from_const_MR_MeshIntersectionResult_ref *callback, const double *rayStart, const double *rayEnd, const MR_IntersectionPrecomputes_double *prec);

/// given mesh part and arbitrary plane, outputs
/// \param fs  triangles from boxes crossed or touched by the plane
/// \param ues edges of these triangles
/// \param vs  vertices of these triangles
/// \param fsVec triangles from boxes crossed or touched by the plane in unspecified order
/// Generated from function `MR::planeMeshIntersect`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `plane` can not be null. It is a single object.
/// Parameter `fsVec` defaults to a null pointer in C++.
MRC_API void MR_planeMeshIntersect(const MR_MeshPart *meshPart, const MR_Plane3f *plane, MR_FaceBitSet *fs, MR_UndirectedEdgeBitSet *ues, MR_VertBitSet *vs, MR_std_vector_MR_FaceId *fsVec);

/// given mesh part and plane z=zLevel, outputs
/// \param fs  triangles crossed or touched by the plane
/// \param ues edges of these triangles
/// \param vs  vertices of these triangles
/// \param fsVec triangles crossed or touched by the plane in unspecified order
/// Generated from function `MR::xyPlaneMeshIntersect`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `fsVec` defaults to a null pointer in C++.
MRC_API void MR_xyPlaneMeshIntersect(const MR_MeshPart *meshPart, float zLevel, MR_FaceBitSet *fs, MR_UndirectedEdgeBitSet *ues, MR_VertBitSet *vs, MR_std_vector_MR_FaceId *fsVec);

#ifdef __cplusplus
} // extern "C"
#endif
