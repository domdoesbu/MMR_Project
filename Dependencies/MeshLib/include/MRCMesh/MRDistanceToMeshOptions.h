// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRSignDetectionMode.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// options determining computation of distance from a point to a mesh
/// Generated from class `MR::DistanceToMeshOptions`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::SignedDistanceToMeshOptions`
typedef struct MR_DistanceToMeshOptions MR_DistanceToMeshOptions;

/// options determining computation of signed distance from a point to a mesh
/// Generated from class `MR::SignedDistanceToMeshOptions`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::DistanceToMeshOptions`
typedef struct MR_SignedDistanceToMeshOptions MR_SignedDistanceToMeshOptions;

/// minimum squared distance from a point to mesh to be computed precisely
/// Returns a pointer to a member variable of class `MR::DistanceToMeshOptions` named `minDistSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DistanceToMeshOptions_Get_minDistSq(const MR_DistanceToMeshOptions *_this);

/// minimum squared distance from a point to mesh to be computed precisely
/// Modifies a member variable of class `MR::DistanceToMeshOptions` named `minDistSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceToMeshOptions_Set_minDistSq(MR_DistanceToMeshOptions *_this, float value);

/// minimum squared distance from a point to mesh to be computed precisely
/// Returns a mutable pointer to a member variable of class `MR::DistanceToMeshOptions` named `minDistSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceToMeshOptions_GetMutable_minDistSq(MR_DistanceToMeshOptions *_this);

/// maximum squared distance from a point to mesh to be computed precisely
/// Returns a pointer to a member variable of class `MR::DistanceToMeshOptions` named `maxDistSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DistanceToMeshOptions_Get_maxDistSq(const MR_DistanceToMeshOptions *_this);

/// maximum squared distance from a point to mesh to be computed precisely
/// Modifies a member variable of class `MR::DistanceToMeshOptions` named `maxDistSq`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceToMeshOptions_Set_maxDistSq(MR_DistanceToMeshOptions *_this, float value);

/// maximum squared distance from a point to mesh to be computed precisely
/// Returns a mutable pointer to a member variable of class `MR::DistanceToMeshOptions` named `maxDistSq`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceToMeshOptions_GetMutable_maxDistSq(MR_DistanceToMeshOptions *_this);

/// what to do if actual distance is outside [min, max) range:
/// true - return std::nullopt for std::optional<float> or NaN for float,
/// false - return approximate value of the distance (with correct sign in case of SignDetectionMode::HoleWindingRule);
/// please note that in HoleWindingRule the sign can change even for too small or too large distances,
/// so if you would like to get closed mesh from marching cubes, set false here
/// Returns a pointer to a member variable of class `MR::DistanceToMeshOptions` named `nullOutsideMinMax`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DistanceToMeshOptions_Get_nullOutsideMinMax(const MR_DistanceToMeshOptions *_this);

/// what to do if actual distance is outside [min, max) range:
/// true - return std::nullopt for std::optional<float> or NaN for float,
/// false - return approximate value of the distance (with correct sign in case of SignDetectionMode::HoleWindingRule);
/// please note that in HoleWindingRule the sign can change even for too small or too large distances,
/// so if you would like to get closed mesh from marching cubes, set false here
/// Modifies a member variable of class `MR::DistanceToMeshOptions` named `nullOutsideMinMax`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceToMeshOptions_Set_nullOutsideMinMax(MR_DistanceToMeshOptions *_this, bool value);

/// what to do if actual distance is outside [min, max) range:
/// true - return std::nullopt for std::optional<float> or NaN for float,
/// false - return approximate value of the distance (with correct sign in case of SignDetectionMode::HoleWindingRule);
/// please note that in HoleWindingRule the sign can change even for too small or too large distances,
/// so if you would like to get closed mesh from marching cubes, set false here
/// Returns a mutable pointer to a member variable of class `MR::DistanceToMeshOptions` named `nullOutsideMinMax`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DistanceToMeshOptions_GetMutable_nullOutsideMinMax(MR_DistanceToMeshOptions *_this);

/// only for SignDetectionMode::HoleWindingRule:
/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a pointer to a member variable of class `MR::DistanceToMeshOptions` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DistanceToMeshOptions_Get_windingNumberThreshold(const MR_DistanceToMeshOptions *_this);

/// only for SignDetectionMode::HoleWindingRule:
/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Modifies a member variable of class `MR::DistanceToMeshOptions` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceToMeshOptions_Set_windingNumberThreshold(MR_DistanceToMeshOptions *_this, float value);

/// only for SignDetectionMode::HoleWindingRule:
/// positive distance if winding number below or equal this threshold;
/// ideal threshold: 0.5 for closed meshes; 0.0 for planar meshes
/// Returns a mutable pointer to a member variable of class `MR::DistanceToMeshOptions` named `windingNumberThreshold`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceToMeshOptions_GetMutable_windingNumberThreshold(MR_DistanceToMeshOptions *_this);

/// only for SignDetectionMode::HoleWindingRule:
/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a pointer to a member variable of class `MR::DistanceToMeshOptions` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DistanceToMeshOptions_Get_windingNumberBeta(const MR_DistanceToMeshOptions *_this);

/// only for SignDetectionMode::HoleWindingRule:
/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Modifies a member variable of class `MR::DistanceToMeshOptions` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceToMeshOptions_Set_windingNumberBeta(MR_DistanceToMeshOptions *_this, float value);

/// only for SignDetectionMode::HoleWindingRule:
/// determines the precision of fast approximation: the more the better, minimum value is 1
/// Returns a mutable pointer to a member variable of class `MR::DistanceToMeshOptions` named `windingNumberBeta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DistanceToMeshOptions_GetMutable_windingNumberBeta(MR_DistanceToMeshOptions *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceToMeshOptions_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceToMeshOptions *MR_DistanceToMeshOptions_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DistanceToMeshOptions_DestroyArray()`.
/// Use `MR_DistanceToMeshOptions_OffsetMutablePtr()` and `MR_DistanceToMeshOptions_OffsetPtr()` to access the array elements.
MRC_API MR_DistanceToMeshOptions *MR_DistanceToMeshOptions_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DistanceToMeshOptions` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceToMeshOptions_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceToMeshOptions *MR_DistanceToMeshOptions_ConstructFrom(float minDistSq, float maxDistSq, bool nullOutsideMinMax, float windingNumberThreshold, float windingNumberBeta);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DistanceToMeshOptions *MR_DistanceToMeshOptions_OffsetPtr(const MR_DistanceToMeshOptions *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DistanceToMeshOptions *MR_DistanceToMeshOptions_OffsetMutablePtr(MR_DistanceToMeshOptions *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::DistanceToMeshOptions` to a derived class `MR::SignedDistanceToMeshOptions`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SignedDistanceToMeshOptions *MR_DistanceToMeshOptions_StaticDowncastTo_MR_SignedDistanceToMeshOptions(const MR_DistanceToMeshOptions *object);

/// Downcasts an instance of `MR::DistanceToMeshOptions` to a derived class `MR::SignedDistanceToMeshOptions`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SignedDistanceToMeshOptions *MR_DistanceToMeshOptions_MutableStaticDowncastTo_MR_SignedDistanceToMeshOptions(MR_DistanceToMeshOptions *object);

/// Generated from a constructor of class `MR::DistanceToMeshOptions`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceToMeshOptions_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceToMeshOptions *MR_DistanceToMeshOptions_ConstructFromAnother(const MR_DistanceToMeshOptions *_other);

/// Destroys a heap-allocated instance of `MR_DistanceToMeshOptions`. Does nothing if the pointer is null.
MRC_API void MR_DistanceToMeshOptions_Destroy(const MR_DistanceToMeshOptions *_this);

/// Destroys a heap-allocated array of `MR_DistanceToMeshOptions`. Does nothing if the pointer is null.
MRC_API void MR_DistanceToMeshOptions_DestroyArray(const MR_DistanceToMeshOptions *_this);

/// Generated from a method of class `MR::DistanceToMeshOptions` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceToMeshOptions *MR_DistanceToMeshOptions_AssignFromAnother(MR_DistanceToMeshOptions *_this, const MR_DistanceToMeshOptions *_other);

/// the method to compute distance sign
/// Returns a pointer to a member variable of class `MR::SignedDistanceToMeshOptions` named `signMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SignDetectionMode *MR_SignedDistanceToMeshOptions_Get_signMode(const MR_SignedDistanceToMeshOptions *_this);

/// the method to compute distance sign
/// Modifies a member variable of class `MR::SignedDistanceToMeshOptions` named `signMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SignedDistanceToMeshOptions_Set_signMode(MR_SignedDistanceToMeshOptions *_this, MR_SignDetectionMode value);

/// the method to compute distance sign
/// Returns a mutable pointer to a member variable of class `MR::SignedDistanceToMeshOptions` named `signMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SignDetectionMode *MR_SignedDistanceToMeshOptions_GetMutable_signMode(MR_SignedDistanceToMeshOptions *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignedDistanceToMeshOptions_Destroy()` to free it when you're done using it.
MRC_API MR_SignedDistanceToMeshOptions *MR_SignedDistanceToMeshOptions_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SignedDistanceToMeshOptions_DestroyArray()`.
/// Use `MR_SignedDistanceToMeshOptions_OffsetMutablePtr()` and `MR_SignedDistanceToMeshOptions_OffsetPtr()` to access the array elements.
MRC_API MR_SignedDistanceToMeshOptions *MR_SignedDistanceToMeshOptions_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SignedDistanceToMeshOptions *MR_SignedDistanceToMeshOptions_OffsetPtr(const MR_SignedDistanceToMeshOptions *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SignedDistanceToMeshOptions *MR_SignedDistanceToMeshOptions_OffsetMutablePtr(MR_SignedDistanceToMeshOptions *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::SignedDistanceToMeshOptions` to its base class `MR::DistanceToMeshOptions`.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceToMeshOptions *MR_SignedDistanceToMeshOptions_UpcastTo_MR_DistanceToMeshOptions(const MR_SignedDistanceToMeshOptions *object);

/// Upcasts an instance of `MR::SignedDistanceToMeshOptions` to its base class `MR::DistanceToMeshOptions`.
MRC_API MR_DistanceToMeshOptions *MR_SignedDistanceToMeshOptions_MutableUpcastTo_MR_DistanceToMeshOptions(MR_SignedDistanceToMeshOptions *object);

/// Generated from a constructor of class `MR::SignedDistanceToMeshOptions`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SignedDistanceToMeshOptions_Destroy()` to free it when you're done using it.
MRC_API MR_SignedDistanceToMeshOptions *MR_SignedDistanceToMeshOptions_ConstructFromAnother(const MR_SignedDistanceToMeshOptions *_other);

/// Destroys a heap-allocated instance of `MR_SignedDistanceToMeshOptions`. Does nothing if the pointer is null.
MRC_API void MR_SignedDistanceToMeshOptions_Destroy(const MR_SignedDistanceToMeshOptions *_this);

/// Destroys a heap-allocated array of `MR_SignedDistanceToMeshOptions`. Does nothing if the pointer is null.
MRC_API void MR_SignedDistanceToMeshOptions_DestroyArray(const MR_SignedDistanceToMeshOptions *_this);

/// Generated from a method of class `MR::SignedDistanceToMeshOptions` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SignedDistanceToMeshOptions *MR_SignedDistanceToMeshOptions_AssignFromAnother(MR_SignedDistanceToMeshOptions *_this, const MR_SignedDistanceToMeshOptions *_other);

#ifdef __cplusplus
} // extern "C"
#endif
