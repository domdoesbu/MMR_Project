// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRRelaxParams.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_RelaxParams MR_RelaxParams; // Defined in `#include <MRCMesh/MRRelaxParams.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::PointCloudRelaxParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::RelaxParams`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::PointCloudApproxRelaxParams`
typedef struct MR_PointCloudRelaxParams MR_PointCloudRelaxParams;

/// Generated from class `MR::PointCloudApproxRelaxParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::PointCloudRelaxParams`
///   Indirect: (non-virtual)
///     `MR::RelaxParams`
typedef struct MR_PointCloudApproxRelaxParams MR_PointCloudApproxRelaxParams;

/// radius to find neighbors in,
/// 0.0 - default, 0.1*boundibg box diagonal
/// Returns a pointer to a member variable of class `MR::PointCloudRelaxParams` named `neighborhoodRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PointCloudRelaxParams_Get_neighborhoodRadius(const MR_PointCloudRelaxParams *_this);

/// radius to find neighbors in,
/// 0.0 - default, 0.1*boundibg box diagonal
/// Modifies a member variable of class `MR::PointCloudRelaxParams` named `neighborhoodRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointCloudRelaxParams_Set_neighborhoodRadius(MR_PointCloudRelaxParams *_this, float value);

/// radius to find neighbors in,
/// 0.0 - default, 0.1*boundibg box diagonal
/// Returns a mutable pointer to a member variable of class `MR::PointCloudRelaxParams` named `neighborhoodRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PointCloudRelaxParams_GetMutable_neighborhoodRadius(MR_PointCloudRelaxParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloudRelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloudRelaxParams *MR_PointCloudRelaxParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointCloudRelaxParams_DestroyArray()`.
/// Use `MR_PointCloudRelaxParams_OffsetMutablePtr()` and `MR_PointCloudRelaxParams_OffsetPtr()` to access the array elements.
MRC_API MR_PointCloudRelaxParams *MR_PointCloudRelaxParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointCloudRelaxParams *MR_PointCloudRelaxParams_OffsetPtr(const MR_PointCloudRelaxParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointCloudRelaxParams *MR_PointCloudRelaxParams_OffsetMutablePtr(MR_PointCloudRelaxParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PointCloudRelaxParams` to its base class `MR::RelaxParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_RelaxParams *MR_PointCloudRelaxParams_UpcastTo_MR_RelaxParams(const MR_PointCloudRelaxParams *object);

/// Upcasts an instance of `MR::PointCloudRelaxParams` to its base class `MR::RelaxParams`.
MRC_API MR_RelaxParams *MR_PointCloudRelaxParams_MutableUpcastTo_MR_RelaxParams(MR_PointCloudRelaxParams *object);

/// Downcasts an instance of `MR::PointCloudRelaxParams` to a derived class `MR::PointCloudApproxRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointCloudApproxRelaxParams *MR_PointCloudRelaxParams_StaticDowncastTo_MR_PointCloudApproxRelaxParams(const MR_PointCloudRelaxParams *object);

/// Downcasts an instance of `MR::PointCloudRelaxParams` to a derived class `MR::PointCloudApproxRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointCloudApproxRelaxParams *MR_PointCloudRelaxParams_MutableStaticDowncastTo_MR_PointCloudApproxRelaxParams(MR_PointCloudRelaxParams *object);

/// Generated from a constructor of class `MR::PointCloudRelaxParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloudRelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloudRelaxParams *MR_PointCloudRelaxParams_ConstructFromAnother(const MR_PointCloudRelaxParams *_other);

/// Destroys a heap-allocated instance of `MR_PointCloudRelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_PointCloudRelaxParams_Destroy(const MR_PointCloudRelaxParams *_this);

/// Destroys a heap-allocated array of `MR_PointCloudRelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_PointCloudRelaxParams_DestroyArray(const MR_PointCloudRelaxParams *_this);

/// Generated from a method of class `MR::PointCloudRelaxParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointCloudRelaxParams *MR_PointCloudRelaxParams_AssignFromAnother(MR_PointCloudRelaxParams *_this, const MR_PointCloudRelaxParams *_other);

/// applies given number of relaxation iterations to the whole pointCloud ( or some region if it is specified )
/// \return true if was finished successfully, false if was interrupted by progress callback
/// Generated from function `MR::relax`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_relax_3_MR_PointCloud(MR_PointCloud *pointCloud, const MR_PointCloudRelaxParams *params, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// applies given number of relaxation iterations to the whole pointCloud ( or some region if it is specified )
/// do not really keeps volume but tries hard
/// \return true if was finished successfully, false if was interrupted by progress callback
/// Generated from function `MR::relaxKeepVolume`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_relaxKeepVolume_3_MR_PointCloud(MR_PointCloud *pointCloud, const MR_PointCloudRelaxParams *params, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Returns a pointer to a member variable of class `MR::PointCloudApproxRelaxParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RelaxApproxType *MR_PointCloudApproxRelaxParams_Get_type(const MR_PointCloudApproxRelaxParams *_this);

/// Modifies a member variable of class `MR::PointCloudApproxRelaxParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointCloudApproxRelaxParams_Set_type(MR_PointCloudApproxRelaxParams *_this, MR_RelaxApproxType value);

/// Returns a mutable pointer to a member variable of class `MR::PointCloudApproxRelaxParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RelaxApproxType *MR_PointCloudApproxRelaxParams_GetMutable_type(MR_PointCloudApproxRelaxParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloudApproxRelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloudApproxRelaxParams *MR_PointCloudApproxRelaxParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointCloudApproxRelaxParams_DestroyArray()`.
/// Use `MR_PointCloudApproxRelaxParams_OffsetMutablePtr()` and `MR_PointCloudApproxRelaxParams_OffsetPtr()` to access the array elements.
MRC_API MR_PointCloudApproxRelaxParams *MR_PointCloudApproxRelaxParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointCloudApproxRelaxParams *MR_PointCloudApproxRelaxParams_OffsetPtr(const MR_PointCloudApproxRelaxParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointCloudApproxRelaxParams *MR_PointCloudApproxRelaxParams_OffsetMutablePtr(MR_PointCloudApproxRelaxParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PointCloudApproxRelaxParams` to its base class `MR::PointCloudRelaxParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_PointCloudRelaxParams *MR_PointCloudApproxRelaxParams_UpcastTo_MR_PointCloudRelaxParams(const MR_PointCloudApproxRelaxParams *object);

/// Upcasts an instance of `MR::PointCloudApproxRelaxParams` to its base class `MR::PointCloudRelaxParams`.
MRC_API MR_PointCloudRelaxParams *MR_PointCloudApproxRelaxParams_MutableUpcastTo_MR_PointCloudRelaxParams(MR_PointCloudApproxRelaxParams *object);

/// Upcasts an instance of `MR::PointCloudApproxRelaxParams` to its base class `MR::RelaxParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_RelaxParams *MR_PointCloudApproxRelaxParams_UpcastTo_MR_RelaxParams(const MR_PointCloudApproxRelaxParams *object);

/// Upcasts an instance of `MR::PointCloudApproxRelaxParams` to its base class `MR::RelaxParams`.
MRC_API MR_RelaxParams *MR_PointCloudApproxRelaxParams_MutableUpcastTo_MR_RelaxParams(MR_PointCloudApproxRelaxParams *object);

/// Generated from a constructor of class `MR::PointCloudApproxRelaxParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloudApproxRelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloudApproxRelaxParams *MR_PointCloudApproxRelaxParams_ConstructFromAnother(const MR_PointCloudApproxRelaxParams *_other);

/// Destroys a heap-allocated instance of `MR_PointCloudApproxRelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_PointCloudApproxRelaxParams_Destroy(const MR_PointCloudApproxRelaxParams *_this);

/// Destroys a heap-allocated array of `MR_PointCloudApproxRelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_PointCloudApproxRelaxParams_DestroyArray(const MR_PointCloudApproxRelaxParams *_this);

/// Generated from a method of class `MR::PointCloudApproxRelaxParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointCloudApproxRelaxParams *MR_PointCloudApproxRelaxParams_AssignFromAnother(MR_PointCloudApproxRelaxParams *_this, const MR_PointCloudApproxRelaxParams *_other);

/// applies given number of relaxation iterations to the whole pointCloud ( or some region if it is specified )
/// approx neighborhoods
/// \return true if was finished successfully, false if was interrupted by progress callback
/// Generated from function `MR::relaxApprox`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_relaxApprox_3_MR_PointCloud(MR_PointCloud *pointCloud, const MR_PointCloudApproxRelaxParams *params, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
