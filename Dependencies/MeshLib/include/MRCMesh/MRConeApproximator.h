// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


typedef int32_t MR_ConeFitterType;
enum // MR_ConeFitterType
{
    // approximation of cone axis by principal component method
    MR_ConeFitterType_ApproximationPCM = 0,
    MR_ConeFitterType_HemisphereSearchFit = 1,
    MR_ConeFitterType_SpecificAxisFit = 2,
};

/// Generated from class `MR::Cone3ApproximationParams`.
typedef struct MR_Cone3ApproximationParams MR_Cone3ApproximationParams;

/// Returns a pointer to a member variable of class `MR::Cone3ApproximationParams` named `levenbergMarquardtMaxIteration`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Cone3ApproximationParams_Get_levenbergMarquardtMaxIteration(const MR_Cone3ApproximationParams *_this);

/// Modifies a member variable of class `MR::Cone3ApproximationParams` named `levenbergMarquardtMaxIteration`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cone3ApproximationParams_Set_levenbergMarquardtMaxIteration(MR_Cone3ApproximationParams *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::Cone3ApproximationParams` named `levenbergMarquardtMaxIteration`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Cone3ApproximationParams_GetMutable_levenbergMarquardtMaxIteration(MR_Cone3ApproximationParams *_this);

/// Returns a pointer to a member variable of class `MR::Cone3ApproximationParams` named `coneFitterType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ConeFitterType *MR_Cone3ApproximationParams_Get_coneFitterType(const MR_Cone3ApproximationParams *_this);

/// Modifies a member variable of class `MR::Cone3ApproximationParams` named `coneFitterType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cone3ApproximationParams_Set_coneFitterType(MR_Cone3ApproximationParams *_this, MR_ConeFitterType value);

/// Returns a mutable pointer to a member variable of class `MR::Cone3ApproximationParams` named `coneFitterType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ConeFitterType *MR_Cone3ApproximationParams_GetMutable_coneFitterType(MR_Cone3ApproximationParams *_this);

/// Returns a pointer to a member variable of class `MR::Cone3ApproximationParams` named `hemisphereSearchPhiResolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Cone3ApproximationParams_Get_hemisphereSearchPhiResolution(const MR_Cone3ApproximationParams *_this);

/// Modifies a member variable of class `MR::Cone3ApproximationParams` named `hemisphereSearchPhiResolution`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cone3ApproximationParams_Set_hemisphereSearchPhiResolution(MR_Cone3ApproximationParams *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::Cone3ApproximationParams` named `hemisphereSearchPhiResolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Cone3ApproximationParams_GetMutable_hemisphereSearchPhiResolution(MR_Cone3ApproximationParams *_this);

/// Returns a pointer to a member variable of class `MR::Cone3ApproximationParams` named `hemisphereSearchThetaResolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Cone3ApproximationParams_Get_hemisphereSearchThetaResolution(const MR_Cone3ApproximationParams *_this);

/// Modifies a member variable of class `MR::Cone3ApproximationParams` named `hemisphereSearchThetaResolution`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cone3ApproximationParams_Set_hemisphereSearchThetaResolution(MR_Cone3ApproximationParams *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::Cone3ApproximationParams` named `hemisphereSearchThetaResolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Cone3ApproximationParams_GetMutable_hemisphereSearchThetaResolution(MR_Cone3ApproximationParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cone3ApproximationParams_Destroy()` to free it when you're done using it.
MRC_API MR_Cone3ApproximationParams *MR_Cone3ApproximationParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Cone3ApproximationParams_DestroyArray()`.
/// Use `MR_Cone3ApproximationParams_OffsetMutablePtr()` and `MR_Cone3ApproximationParams_OffsetPtr()` to access the array elements.
MRC_API MR_Cone3ApproximationParams *MR_Cone3ApproximationParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Cone3ApproximationParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cone3ApproximationParams_Destroy()` to free it when you're done using it.
MRC_API MR_Cone3ApproximationParams *MR_Cone3ApproximationParams_ConstructFrom(int32_t levenbergMarquardtMaxIteration, MR_ConeFitterType coneFitterType, int32_t hemisphereSearchPhiResolution, int32_t hemisphereSearchThetaResolution);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Cone3ApproximationParams *MR_Cone3ApproximationParams_OffsetPtr(const MR_Cone3ApproximationParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Cone3ApproximationParams *MR_Cone3ApproximationParams_OffsetMutablePtr(MR_Cone3ApproximationParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Cone3ApproximationParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cone3ApproximationParams_Destroy()` to free it when you're done using it.
MRC_API MR_Cone3ApproximationParams *MR_Cone3ApproximationParams_ConstructFromAnother(const MR_Cone3ApproximationParams *_other);

/// Destroys a heap-allocated instance of `MR_Cone3ApproximationParams`. Does nothing if the pointer is null.
MRC_API void MR_Cone3ApproximationParams_Destroy(const MR_Cone3ApproximationParams *_this);

/// Destroys a heap-allocated array of `MR_Cone3ApproximationParams`. Does nothing if the pointer is null.
MRC_API void MR_Cone3ApproximationParams_DestroyArray(const MR_Cone3ApproximationParams *_this);

/// Generated from a method of class `MR::Cone3ApproximationParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Cone3ApproximationParams *MR_Cone3ApproximationParams_AssignFromAnother(MR_Cone3ApproximationParams *_this, const MR_Cone3ApproximationParams *_other);

#ifdef __cplusplus
} // extern "C"
#endif
