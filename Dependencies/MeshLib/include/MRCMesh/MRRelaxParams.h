// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshApproxRelaxParams MR_MeshApproxRelaxParams; // Defined in `#include <MRCMesh/MRMeshRelax.h>`.
typedef struct MR_MeshEqualizeTriAreasParams MR_MeshEqualizeTriAreasParams; // Defined in `#include <MRCMesh/MRMeshRelax.h>`.
typedef struct MR_MeshRelaxParams MR_MeshRelaxParams; // Defined in `#include <MRCMesh/MRMeshRelax.h>`.
typedef struct MR_PointCloudApproxRelaxParams MR_PointCloudApproxRelaxParams; // Defined in `#include <MRCMesh/MRPointCloudRelax.h>`.
typedef struct MR_PointCloudRelaxParams MR_PointCloudRelaxParams; // Defined in `#include <MRCMesh/MRPointCloudRelax.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// Generated from class `MR::RelaxParams`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::MeshRelaxParams`
///     `MR::PointCloudRelaxParams`
///   Indirect: (non-virtual)
///     `MR::MeshApproxRelaxParams`
///     `MR::MeshEqualizeTriAreasParams`
///     `MR::PointCloudApproxRelaxParams`
typedef struct MR_RelaxParams MR_RelaxParams;

typedef int32_t MR_RelaxApproxType;
enum // MR_RelaxApproxType
{
    MR_RelaxApproxType_Planar = 0,
    MR_RelaxApproxType_Quadric = 1,
};

/// number of iterations
/// Returns a pointer to a member variable of class `MR::RelaxParams` named `iterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_RelaxParams_Get_iterations(const MR_RelaxParams *_this);

/// number of iterations
/// Modifies a member variable of class `MR::RelaxParams` named `iterations`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RelaxParams_Set_iterations(MR_RelaxParams *_this, int32_t value);

/// number of iterations
/// Returns a mutable pointer to a member variable of class `MR::RelaxParams` named `iterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_RelaxParams_GetMutable_iterations(MR_RelaxParams *_this);

/// region to relax
/// Returns a pointer to a member variable of class `MR::RelaxParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *const *MR_RelaxParams_Get_region(const MR_RelaxParams *_this);

/// region to relax
/// Modifies a member variable of class `MR::RelaxParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RelaxParams_Set_region(MR_RelaxParams *_this, const MR_VertBitSet *value);

/// region to relax
/// Returns a mutable pointer to a member variable of class `MR::RelaxParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet **MR_RelaxParams_GetMutable_region(MR_RelaxParams *_this);

/// speed of relaxing, typical values (0.0, 0.5]
/// Returns a pointer to a member variable of class `MR::RelaxParams` named `force`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RelaxParams_Get_force(const MR_RelaxParams *_this);

/// speed of relaxing, typical values (0.0, 0.5]
/// Modifies a member variable of class `MR::RelaxParams` named `force`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RelaxParams_Set_force(MR_RelaxParams *_this, float value);

/// speed of relaxing, typical values (0.0, 0.5]
/// Returns a mutable pointer to a member variable of class `MR::RelaxParams` named `force`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RelaxParams_GetMutable_force(MR_RelaxParams *_this);

/// if true then maximal displacement of each point during denoising will be limited
/// Returns a pointer to a member variable of class `MR::RelaxParams` named `limitNearInitial`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_RelaxParams_Get_limitNearInitial(const MR_RelaxParams *_this);

/// if true then maximal displacement of each point during denoising will be limited
/// Modifies a member variable of class `MR::RelaxParams` named `limitNearInitial`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RelaxParams_Set_limitNearInitial(MR_RelaxParams *_this, bool value);

/// if true then maximal displacement of each point during denoising will be limited
/// Returns a mutable pointer to a member variable of class `MR::RelaxParams` named `limitNearInitial`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_RelaxParams_GetMutable_limitNearInitial(MR_RelaxParams *_this);

/// maximum distance between a point and its position before relaxation, ignored if limitNearInitial = false
/// Returns a pointer to a member variable of class `MR::RelaxParams` named `maxInitialDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RelaxParams_Get_maxInitialDist(const MR_RelaxParams *_this);

/// maximum distance between a point and its position before relaxation, ignored if limitNearInitial = false
/// Modifies a member variable of class `MR::RelaxParams` named `maxInitialDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RelaxParams_Set_maxInitialDist(MR_RelaxParams *_this, float value);

/// maximum distance between a point and its position before relaxation, ignored if limitNearInitial = false
/// Returns a mutable pointer to a member variable of class `MR::RelaxParams` named `maxInitialDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RelaxParams_GetMutable_maxInitialDist(MR_RelaxParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_RelaxParams *MR_RelaxParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RelaxParams_DestroyArray()`.
/// Use `MR_RelaxParams_OffsetMutablePtr()` and `MR_RelaxParams_OffsetPtr()` to access the array elements.
MRC_API MR_RelaxParams *MR_RelaxParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RelaxParams *MR_RelaxParams_OffsetPtr(const MR_RelaxParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RelaxParams *MR_RelaxParams_OffsetMutablePtr(MR_RelaxParams *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::MeshApproxRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshApproxRelaxParams *MR_RelaxParams_StaticDowncastTo_MR_MeshApproxRelaxParams(const MR_RelaxParams *object);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::MeshApproxRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeshApproxRelaxParams *MR_RelaxParams_MutableStaticDowncastTo_MR_MeshApproxRelaxParams(MR_RelaxParams *object);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::MeshEqualizeTriAreasParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshEqualizeTriAreasParams *MR_RelaxParams_StaticDowncastTo_MR_MeshEqualizeTriAreasParams(const MR_RelaxParams *object);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::MeshEqualizeTriAreasParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeshEqualizeTriAreasParams *MR_RelaxParams_MutableStaticDowncastTo_MR_MeshEqualizeTriAreasParams(MR_RelaxParams *object);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::MeshRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_MeshRelaxParams *MR_RelaxParams_StaticDowncastTo_MR_MeshRelaxParams(const MR_RelaxParams *object);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::MeshRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_MeshRelaxParams *MR_RelaxParams_MutableStaticDowncastTo_MR_MeshRelaxParams(MR_RelaxParams *object);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::PointCloudApproxRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointCloudApproxRelaxParams *MR_RelaxParams_StaticDowncastTo_MR_PointCloudApproxRelaxParams(const MR_RelaxParams *object);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::PointCloudApproxRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointCloudApproxRelaxParams *MR_RelaxParams_MutableStaticDowncastTo_MR_PointCloudApproxRelaxParams(MR_RelaxParams *object);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::PointCloudRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointCloudRelaxParams *MR_RelaxParams_StaticDowncastTo_MR_PointCloudRelaxParams(const MR_RelaxParams *object);

/// Downcasts an instance of `MR::RelaxParams` to a derived class `MR::PointCloudRelaxParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointCloudRelaxParams *MR_RelaxParams_MutableStaticDowncastTo_MR_PointCloudRelaxParams(MR_RelaxParams *object);

/// Generated from a constructor of class `MR::RelaxParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RelaxParams_Destroy()` to free it when you're done using it.
MRC_API MR_RelaxParams *MR_RelaxParams_ConstructFromAnother(const MR_RelaxParams *_other);

/// Destroys a heap-allocated instance of `MR_RelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_RelaxParams_Destroy(const MR_RelaxParams *_this);

/// Destroys a heap-allocated array of `MR_RelaxParams`. Does nothing if the pointer is null.
MRC_API void MR_RelaxParams_DestroyArray(const MR_RelaxParams *_this);

/// Generated from a method of class `MR::RelaxParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RelaxParams *MR_RelaxParams_AssignFromAnother(MR_RelaxParams *_this, const MR_RelaxParams *_other);

#ifdef __cplusplus
} // extern "C"
#endif
