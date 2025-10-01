// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTreePoints MR_AABBTreePoints; // Defined in `#include <MRCMesh/MRAABBTreePoints.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_std_function_float_from_MR_VertId MR_std_function_float_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_float_from_MR_VertId.h>`.


/// Generated from class `MR::PointAndDistance`.
typedef struct MR_PointAndDistance MR_PointAndDistance;

/// Generated from class `MR::MeshPointAndDistance`.
typedef struct MR_MeshPointAndDistance MR_MeshPointAndDistance;

/// Generated from class `MR::DistanceFromWeightedPointsParams`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::DistanceFromWeightedPointsComputeParams`
typedef struct MR_DistanceFromWeightedPointsParams MR_DistanceFromWeightedPointsParams;

/// Generated from class `MR::DistanceFromWeightedPointsComputeParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::DistanceFromWeightedPointsParams`
typedef struct MR_DistanceFromWeightedPointsComputeParams MR_DistanceFromWeightedPointsComputeParams;

/// a cloud's point
/// Returns a pointer to a member variable of class `MR::PointAndDistance` named `vId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PointAndDistance_Get_vId(const MR_PointAndDistance *_this);

/// a cloud's point
/// Modifies a member variable of class `MR::PointAndDistance` named `vId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointAndDistance_Set_vId(MR_PointAndDistance *_this, MR_VertId value);

/// a cloud's point
/// Returns a mutable pointer to a member variable of class `MR::PointAndDistance` named `vId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PointAndDistance_GetMutable_vId(MR_PointAndDistance *_this);

/// the distance from input location to point vId considering point's weight
/// Returns a pointer to a member variable of class `MR::PointAndDistance` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointAndDistance_Get_dist(const MR_PointAndDistance *_this);

/// the distance from input location to point vId considering point's weight
/// Modifies a member variable of class `MR::PointAndDistance` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointAndDistance_Set_dist(MR_PointAndDistance *_this, float value);

/// the distance from input location to point vId considering point's weight
/// Returns a mutable pointer to a member variable of class `MR::PointAndDistance` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointAndDistance_GetMutable_dist(MR_PointAndDistance *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointAndDistance_Destroy()` to free it when you're done using it.
MRC_API MR_PointAndDistance *MR_PointAndDistance_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointAndDistance_DestroyArray()`.
/// Use `MR_PointAndDistance_OffsetMutablePtr()` and `MR_PointAndDistance_OffsetPtr()` to access the array elements.
MRC_API MR_PointAndDistance *MR_PointAndDistance_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PointAndDistance` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointAndDistance_Destroy()` to free it when you're done using it.
MRC_API MR_PointAndDistance *MR_PointAndDistance_ConstructFrom(MR_VertId vId, float dist);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointAndDistance *MR_PointAndDistance_OffsetPtr(const MR_PointAndDistance *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointAndDistance *MR_PointAndDistance_OffsetMutablePtr(MR_PointAndDistance *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointAndDistance`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointAndDistance_Destroy()` to free it when you're done using it.
MRC_API MR_PointAndDistance *MR_PointAndDistance_ConstructFromAnother(const MR_PointAndDistance *_other);

/// Destroys a heap-allocated instance of `MR_PointAndDistance`. Does nothing if the pointer is null.
MRC_API void MR_PointAndDistance_Destroy(const MR_PointAndDistance *_this);

/// Destroys a heap-allocated array of `MR_PointAndDistance`. Does nothing if the pointer is null.
MRC_API void MR_PointAndDistance_DestroyArray(const MR_PointAndDistance *_this);

/// Generated from a conversion operator of class `MR::PointAndDistance` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PointAndDistance_ConvertTo_bool(const MR_PointAndDistance *_this);

/// Generated from a method of class `MR::PointAndDistance` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointAndDistance *MR_PointAndDistance_AssignFromAnother(MR_PointAndDistance *_this, const MR_PointAndDistance *_other);

/// check for validity, otherwise there is no point closer than maxBidirDist
/// Generated from a method of class `MR::PointAndDistance` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_PointAndDistance_valid(const MR_PointAndDistance *_this);

/// point location
/// Returns a pointer to a member variable of class `MR::MeshPointAndDistance` named `loc`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_MeshPointAndDistance_Get_loc(const MR_MeshPointAndDistance *_this);

/// point location
/// Modifies a member variable of class `MR::MeshPointAndDistance` named `loc`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshPointAndDistance_Set_loc(MR_MeshPointAndDistance *_this, MR_Vector3f value);

/// point location
/// Returns a mutable pointer to a member variable of class `MR::MeshPointAndDistance` named `loc`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_MeshPointAndDistance_GetMutable_loc(MR_MeshPointAndDistance *_this);

/// the corresponding point on mesh in barycentric representation
/// Returns a pointer to a member variable of class `MR::MeshPointAndDistance` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTriPoint *MR_MeshPointAndDistance_Get_mtp(const MR_MeshPointAndDistance *_this);

/// the corresponding point on mesh in barycentric representation
/// Modifies a member variable of class `MR::MeshPointAndDistance` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_MeshPointAndDistance_Set_mtp(MR_MeshPointAndDistance *_this, const MR_MeshTriPoint *value);

/// the corresponding point on mesh in barycentric representation
/// Returns a mutable pointer to a member variable of class `MR::MeshPointAndDistance` named `mtp`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_MeshPointAndDistance_GetMutable_mtp(MR_MeshPointAndDistance *_this);

/// euclidean distance from input location to mtp
/// Returns a pointer to a member variable of class `MR::MeshPointAndDistance` named `eucledeanDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshPointAndDistance_Get_eucledeanDist(const MR_MeshPointAndDistance *_this);

/// euclidean distance from input location to mtp
/// Modifies a member variable of class `MR::MeshPointAndDistance` named `eucledeanDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshPointAndDistance_Set_eucledeanDist(MR_MeshPointAndDistance *_this, float value);

/// euclidean distance from input location to mtp
/// Returns a mutable pointer to a member variable of class `MR::MeshPointAndDistance` named `eucledeanDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshPointAndDistance_GetMutable_eucledeanDist(MR_MeshPointAndDistance *_this);

/// point's weight
/// Returns a pointer to a member variable of class `MR::MeshPointAndDistance` named `w`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MeshPointAndDistance_Get_w(const MR_MeshPointAndDistance *_this);

/// point's weight
/// Modifies a member variable of class `MR::MeshPointAndDistance` named `w`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshPointAndDistance_Set_w(MR_MeshPointAndDistance *_this, float value);

/// point's weight
/// Returns a mutable pointer to a member variable of class `MR::MeshPointAndDistance` named `w`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MeshPointAndDistance_GetMutable_w(MR_MeshPointAndDistance *_this);

/// either
/// 1) bidirectional distances are computed, or
/// 2) input location is locally outside of the surface (by pseudonormal)
/// used for optimization
/// Returns a pointer to a member variable of class `MR::MeshPointAndDistance` named `bidirectionalOrOutside`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshPointAndDistance_Get_bidirectionalOrOutside(const MR_MeshPointAndDistance *_this);

/// either
/// 1) bidirectional distances are computed, or
/// 2) input location is locally outside of the surface (by pseudonormal)
/// used for optimization
/// Modifies a member variable of class `MR::MeshPointAndDistance` named `bidirectionalOrOutside`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshPointAndDistance_Set_bidirectionalOrOutside(MR_MeshPointAndDistance *_this, bool value);

/// either
/// 1) bidirectional distances are computed, or
/// 2) input location is locally outside of the surface (by pseudonormal)
/// used for optimization
/// Returns a mutable pointer to a member variable of class `MR::MeshPointAndDistance` named `bidirectionalOrOutside`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshPointAndDistance_GetMutable_bidirectionalOrOutside(MR_MeshPointAndDistance *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshPointAndDistance_Destroy()` to free it when you're done using it.
MRC_API MR_MeshPointAndDistance *MR_MeshPointAndDistance_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshPointAndDistance_DestroyArray()`.
/// Use `MR_MeshPointAndDistance_OffsetMutablePtr()` and `MR_MeshPointAndDistance_OffsetPtr()` to access the array elements.
MRC_API MR_MeshPointAndDistance *MR_MeshPointAndDistance_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshPointAndDistance` elementwise.
/// Parameter `mtp` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshPointAndDistance_Destroy()` to free it when you're done using it.
MRC_API MR_MeshPointAndDistance *MR_MeshPointAndDistance_ConstructFrom(MR_Vector3f loc, const MR_MeshTriPoint *mtp, float eucledeanDist, float w, bool bidirectionalOrOutside);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshPointAndDistance *MR_MeshPointAndDistance_OffsetPtr(const MR_MeshPointAndDistance *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshPointAndDistance *MR_MeshPointAndDistance_OffsetMutablePtr(MR_MeshPointAndDistance *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshPointAndDistance`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshPointAndDistance_Destroy()` to free it when you're done using it.
MRC_API MR_MeshPointAndDistance *MR_MeshPointAndDistance_ConstructFromAnother(const MR_MeshPointAndDistance *_other);

/// Destroys a heap-allocated instance of `MR_MeshPointAndDistance`. Does nothing if the pointer is null.
MRC_API void MR_MeshPointAndDistance_Destroy(const MR_MeshPointAndDistance *_this);

/// Destroys a heap-allocated array of `MR_MeshPointAndDistance`. Does nothing if the pointer is null.
MRC_API void MR_MeshPointAndDistance_DestroyArray(const MR_MeshPointAndDistance *_this);

/// Generated from a conversion operator of class `MR::MeshPointAndDistance` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshPointAndDistance_ConvertTo_bool(const MR_MeshPointAndDistance *_this);

/// Generated from a method of class `MR::MeshPointAndDistance` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshPointAndDistance *MR_MeshPointAndDistance_AssignFromAnother(MR_MeshPointAndDistance *_this, const MR_MeshPointAndDistance *_other);

/// bidirectional distance from input location to mtp considering point's weight
/// Generated from a method of class `MR::MeshPointAndDistance` named `bidirDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_MeshPointAndDistance_bidirDist(const MR_MeshPointAndDistance *_this);

/// the distance from input location to mtp considering point's weight and location inside/outside;
/// dist() is continuous function of location unlike innerDist(),
/// which makes 2*weight jump if the location moves through the surface
/// Generated from a method of class `MR::MeshPointAndDistance` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_MeshPointAndDistance_dist(const MR_MeshPointAndDistance *_this);

/// check for validity, otherwise there is no point closer than maxBidirDist
/// Generated from a method of class `MR::MeshPointAndDistance` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_MeshPointAndDistance_valid(const MR_MeshPointAndDistance *_this);

/// function returning the weight of each point, must be set by the user
/// Returns a pointer to a member variable of class `MR::DistanceFromWeightedPointsParams` named `pointWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_float_from_MR_VertId *MR_DistanceFromWeightedPointsParams_Get_pointWeight(const MR_DistanceFromWeightedPointsParams *_this);

/// function returning the weight of each point, must be set by the user
/// Modifies a member variable of class `MR::DistanceFromWeightedPointsParams` named `pointWeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceFromWeightedPointsParams_Set_pointWeight(MR_DistanceFromWeightedPointsParams *_this, MR_PassBy value_pass_by, MR_std_function_float_from_MR_VertId *value);

/// function returning the weight of each point, must be set by the user
/// Returns a mutable pointer to a member variable of class `MR::DistanceFromWeightedPointsParams` named `pointWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_float_from_MR_VertId *MR_DistanceFromWeightedPointsParams_GetMutable_pointWeight(MR_DistanceFromWeightedPointsParams *_this);

/// maximal weight among all points in the cloud;
/// if this value is imprecise, then more computations will be made by algorithm
/// Returns a pointer to a member variable of class `MR::DistanceFromWeightedPointsParams` named `maxWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DistanceFromWeightedPointsParams_Get_maxWeight(const MR_DistanceFromWeightedPointsParams *_this);

/// maximal weight among all points in the cloud;
/// if this value is imprecise, then more computations will be made by algorithm
/// Modifies a member variable of class `MR::DistanceFromWeightedPointsParams` named `maxWeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceFromWeightedPointsParams_Set_maxWeight(MR_DistanceFromWeightedPointsParams *_this, float value);

/// maximal weight among all points in the cloud;
/// if this value is imprecise, then more computations will be made by algorithm
/// Returns a mutable pointer to a member variable of class `MR::DistanceFromWeightedPointsParams` named `maxWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceFromWeightedPointsParams_GetMutable_maxWeight(MR_DistanceFromWeightedPointsParams *_this);

/// maximal magnitude of gradient of points' weight in the cloud, >=0;
/// if maxWeightGrad < 1 then more search optimizations can be done
/// Returns a pointer to a member variable of class `MR::DistanceFromWeightedPointsParams` named `maxWeightGrad`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DistanceFromWeightedPointsParams_Get_maxWeightGrad(const MR_DistanceFromWeightedPointsParams *_this);

/// maximal magnitude of gradient of points' weight in the cloud, >=0;
/// if maxWeightGrad < 1 then more search optimizations can be done
/// Modifies a member variable of class `MR::DistanceFromWeightedPointsParams` named `maxWeightGrad`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceFromWeightedPointsParams_Set_maxWeightGrad(MR_DistanceFromWeightedPointsParams *_this, float value);

/// maximal magnitude of gradient of points' weight in the cloud, >=0;
/// if maxWeightGrad < 1 then more search optimizations can be done
/// Returns a mutable pointer to a member variable of class `MR::DistanceFromWeightedPointsParams` named `maxWeightGrad`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceFromWeightedPointsParams_GetMutable_maxWeightGrad(MR_DistanceFromWeightedPointsParams *_this);

/// for points, it must always true;
/// for triangles:
///   if true the distances grow in both directions from each triangle, reaching minimum in the triangle;
///   if false the distances grow to infinity in the direction of triangle's normals, and decrease to minus infinity in the opposite direction
/// Returns a pointer to a member variable of class `MR::DistanceFromWeightedPointsParams` named `bidirectionalMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DistanceFromWeightedPointsParams_Get_bidirectionalMode(const MR_DistanceFromWeightedPointsParams *_this);

/// for points, it must always true;
/// for triangles:
///   if true the distances grow in both directions from each triangle, reaching minimum in the triangle;
///   if false the distances grow to infinity in the direction of triangle's normals, and decrease to minus infinity in the opposite direction
/// Modifies a member variable of class `MR::DistanceFromWeightedPointsParams` named `bidirectionalMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceFromWeightedPointsParams_Set_bidirectionalMode(MR_DistanceFromWeightedPointsParams *_this, bool value);

/// for points, it must always true;
/// for triangles:
///   if true the distances grow in both directions from each triangle, reaching minimum in the triangle;
///   if false the distances grow to infinity in the direction of triangle's normals, and decrease to minus infinity in the opposite direction
/// Returns a mutable pointer to a member variable of class `MR::DistanceFromWeightedPointsParams` named `bidirectionalMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DistanceFromWeightedPointsParams_GetMutable_bidirectionalMode(MR_DistanceFromWeightedPointsParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceFromWeightedPointsParams_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceFromWeightedPointsParams *MR_DistanceFromWeightedPointsParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DistanceFromWeightedPointsParams_DestroyArray()`.
/// Use `MR_DistanceFromWeightedPointsParams_OffsetMutablePtr()` and `MR_DistanceFromWeightedPointsParams_OffsetPtr()` to access the array elements.
MRC_API MR_DistanceFromWeightedPointsParams *MR_DistanceFromWeightedPointsParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DistanceFromWeightedPointsParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceFromWeightedPointsParams_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceFromWeightedPointsParams *MR_DistanceFromWeightedPointsParams_ConstructFrom(MR_PassBy pointWeight_pass_by, MR_std_function_float_from_MR_VertId *pointWeight, float maxWeight, float maxWeightGrad, bool bidirectionalMode);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DistanceFromWeightedPointsParams *MR_DistanceFromWeightedPointsParams_OffsetPtr(const MR_DistanceFromWeightedPointsParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DistanceFromWeightedPointsParams *MR_DistanceFromWeightedPointsParams_OffsetMutablePtr(MR_DistanceFromWeightedPointsParams *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::DistanceFromWeightedPointsParams` to a derived class `MR::DistanceFromWeightedPointsComputeParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceFromWeightedPointsComputeParams *MR_DistanceFromWeightedPointsParams_StaticDowncastTo_MR_DistanceFromWeightedPointsComputeParams(const MR_DistanceFromWeightedPointsParams *object);

/// Downcasts an instance of `MR::DistanceFromWeightedPointsParams` to a derived class `MR::DistanceFromWeightedPointsComputeParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_DistanceFromWeightedPointsComputeParams *MR_DistanceFromWeightedPointsParams_MutableStaticDowncastTo_MR_DistanceFromWeightedPointsComputeParams(MR_DistanceFromWeightedPointsParams *object);

/// Generated from a constructor of class `MR::DistanceFromWeightedPointsParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceFromWeightedPointsParams_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceFromWeightedPointsParams *MR_DistanceFromWeightedPointsParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DistanceFromWeightedPointsParams *_other);

/// Destroys a heap-allocated instance of `MR_DistanceFromWeightedPointsParams`. Does nothing if the pointer is null.
MRC_API void MR_DistanceFromWeightedPointsParams_Destroy(const MR_DistanceFromWeightedPointsParams *_this);

/// Destroys a heap-allocated array of `MR_DistanceFromWeightedPointsParams`. Does nothing if the pointer is null.
MRC_API void MR_DistanceFromWeightedPointsParams_DestroyArray(const MR_DistanceFromWeightedPointsParams *_this);

/// Generated from a method of class `MR::DistanceFromWeightedPointsParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceFromWeightedPointsParams *MR_DistanceFromWeightedPointsParams_AssignFromAnother(MR_DistanceFromWeightedPointsParams *_this, MR_PassBy _other_pass_by, MR_DistanceFromWeightedPointsParams *_other);

// default 0 here does not work for negative distances
/// Returns a pointer to a member variable of class `MR::DistanceFromWeightedPointsComputeParams` named `minBidirDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DistanceFromWeightedPointsComputeParams_Get_minBidirDist(const MR_DistanceFromWeightedPointsComputeParams *_this);

// default 0 here does not work for negative distances
/// Modifies a member variable of class `MR::DistanceFromWeightedPointsComputeParams` named `minBidirDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceFromWeightedPointsComputeParams_Set_minBidirDist(MR_DistanceFromWeightedPointsComputeParams *_this, float value);

// default 0 here does not work for negative distances
/// Returns a mutable pointer to a member variable of class `MR::DistanceFromWeightedPointsComputeParams` named `minBidirDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceFromWeightedPointsComputeParams_GetMutable_minBidirDist(MR_DistanceFromWeightedPointsComputeParams *_this);

/// find the closest point only if weighted bidirectional distance to it is less than given value
/// Returns a pointer to a member variable of class `MR::DistanceFromWeightedPointsComputeParams` named `maxBidirDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DistanceFromWeightedPointsComputeParams_Get_maxBidirDist(const MR_DistanceFromWeightedPointsComputeParams *_this);

/// find the closest point only if weighted bidirectional distance to it is less than given value
/// Modifies a member variable of class `MR::DistanceFromWeightedPointsComputeParams` named `maxBidirDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceFromWeightedPointsComputeParams_Set_maxBidirDist(MR_DistanceFromWeightedPointsComputeParams *_this, float value);

/// find the closest point only if weighted bidirectional distance to it is less than given value
/// Returns a mutable pointer to a member variable of class `MR::DistanceFromWeightedPointsComputeParams` named `maxBidirDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceFromWeightedPointsComputeParams_GetMutable_maxBidirDist(MR_DistanceFromWeightedPointsComputeParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceFromWeightedPointsComputeParams_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceFromWeightedPointsComputeParams *MR_DistanceFromWeightedPointsComputeParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DistanceFromWeightedPointsComputeParams_DestroyArray()`.
/// Use `MR_DistanceFromWeightedPointsComputeParams_OffsetMutablePtr()` and `MR_DistanceFromWeightedPointsComputeParams_OffsetPtr()` to access the array elements.
MRC_API MR_DistanceFromWeightedPointsComputeParams *MR_DistanceFromWeightedPointsComputeParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DistanceFromWeightedPointsComputeParams *MR_DistanceFromWeightedPointsComputeParams_OffsetPtr(const MR_DistanceFromWeightedPointsComputeParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DistanceFromWeightedPointsComputeParams *MR_DistanceFromWeightedPointsComputeParams_OffsetMutablePtr(MR_DistanceFromWeightedPointsComputeParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::DistanceFromWeightedPointsComputeParams` to its base class `MR::DistanceFromWeightedPointsParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceFromWeightedPointsParams *MR_DistanceFromWeightedPointsComputeParams_UpcastTo_MR_DistanceFromWeightedPointsParams(const MR_DistanceFromWeightedPointsComputeParams *object);

/// Upcasts an instance of `MR::DistanceFromWeightedPointsComputeParams` to its base class `MR::DistanceFromWeightedPointsParams`.
MRC_API MR_DistanceFromWeightedPointsParams *MR_DistanceFromWeightedPointsComputeParams_MutableUpcastTo_MR_DistanceFromWeightedPointsParams(MR_DistanceFromWeightedPointsComputeParams *object);

/// Generated from a constructor of class `MR::DistanceFromWeightedPointsComputeParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceFromWeightedPointsComputeParams_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceFromWeightedPointsComputeParams *MR_DistanceFromWeightedPointsComputeParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DistanceFromWeightedPointsComputeParams *_other);

/// Destroys a heap-allocated instance of `MR_DistanceFromWeightedPointsComputeParams`. Does nothing if the pointer is null.
MRC_API void MR_DistanceFromWeightedPointsComputeParams_Destroy(const MR_DistanceFromWeightedPointsComputeParams *_this);

/// Destroys a heap-allocated array of `MR_DistanceFromWeightedPointsComputeParams`. Does nothing if the pointer is null.
MRC_API void MR_DistanceFromWeightedPointsComputeParams_DestroyArray(const MR_DistanceFromWeightedPointsComputeParams *_this);

/// Generated from a method of class `MR::DistanceFromWeightedPointsComputeParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceFromWeightedPointsComputeParams *MR_DistanceFromWeightedPointsComputeParams_AssignFromAnother(MR_DistanceFromWeightedPointsComputeParams *_this, MR_PassBy _other_pass_by, MR_DistanceFromWeightedPointsComputeParams *_other);

/// consider a point cloud where each point has additive weight,
/// and the distance to a point is considered equal to (euclidean distance - weight),
/// finds the point with minimal distance to given 3D location
/// Generated from function `MR::findClosestWeightedPoint`.
/// Parameter `loc` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointAndDistance_Destroy()` to free it when you're done using it.
MRC_API MR_PointAndDistance *MR_findClosestWeightedPoint(const MR_Vector3f *loc, const MR_AABBTreePoints *tree, const MR_DistanceFromWeightedPointsComputeParams *params);

/// consider a mesh where each vertex has additive weight, and this weight is linearly interpolated in mesh triangles,
/// and the distance to a point is considered equal to (euclidean distance - weight),
/// finds the point on given mesh with minimal distance to given 3D location
/// Generated from function `MR::findClosestWeightedMeshPoint`.
/// Parameter `loc` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshPointAndDistance_Destroy()` to free it when you're done using it.
MRC_API MR_MeshPointAndDistance *MR_findClosestWeightedMeshPoint(const MR_Vector3f *loc, const MR_Mesh *mesh, const MR_DistanceFromWeightedPointsComputeParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
