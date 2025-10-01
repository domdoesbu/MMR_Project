// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_expected_MR_FaceBitSet_std_string MR_expected_MR_FaceBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_FaceBitSet_std_string.h>`.
typedef struct MR_expected_std_vector_std_vector_MR_EdgeId_std_string MR_expected_std_vector_std_vector_MR_EdgeId_std_string; // Defined in `#include <MRCMisc/expected_std_vector_std_vector_MR_EdgeId_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_float_from_MR_EdgeId MR_std_function_float_from_MR_EdgeId; // Defined in `#include <MRCMisc/std_function_float_from_MR_EdgeId.h>`.


/// Generated from class `MR::DetectTunnelSettings`.
typedef struct MR_DetectTunnelSettings MR_DetectTunnelSettings;

/// detects all not-contractible-in-point and not-equivalent tunnel loops on the mesh;
/// trying to include in the loops the edges with the smallest metric;
/// if no metric is given then discreteMinusAbsMeanCurvatureMetric will be used
/// Generated from function `MR::detectBasisTunnels`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `metric` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `progressCallback` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_vector_MR_EdgeId_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_vector_MR_EdgeId_std_string *MR_detectBasisTunnels(const MR_MeshPart *mp, MR_PassBy metric_pass_by, MR_std_function_float_from_MR_EdgeId *metric, MR_PassBy progressCallback_pass_by, MR_std_function_bool_from_float *progressCallback);

/// maximal length of tunnel loops to consider
/// Returns a pointer to a member variable of class `MR::DetectTunnelSettings` named `maxTunnelLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DetectTunnelSettings_Get_maxTunnelLength(const MR_DetectTunnelSettings *_this);

/// maximal length of tunnel loops to consider
/// Modifies a member variable of class `MR::DetectTunnelSettings` named `maxTunnelLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DetectTunnelSettings_Set_maxTunnelLength(MR_DetectTunnelSettings *_this, float value);

/// maximal length of tunnel loops to consider
/// Returns a mutable pointer to a member variable of class `MR::DetectTunnelSettings` named `maxTunnelLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DetectTunnelSettings_GetMutable_maxTunnelLength(MR_DetectTunnelSettings *_this);

/// maximal number of iterations to detect all tunnels;
/// on a big mesh with many tunnels even one iteration can take a while
/// Returns a pointer to a member variable of class `MR::DetectTunnelSettings` named `maxIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DetectTunnelSettings_Get_maxIters(const MR_DetectTunnelSettings *_this);

/// maximal number of iterations to detect all tunnels;
/// on a big mesh with many tunnels even one iteration can take a while
/// Modifies a member variable of class `MR::DetectTunnelSettings` named `maxIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DetectTunnelSettings_Set_maxIters(MR_DetectTunnelSettings *_this, int32_t value);

/// maximal number of iterations to detect all tunnels;
/// on a big mesh with many tunnels even one iteration can take a while
/// Returns a mutable pointer to a member variable of class `MR::DetectTunnelSettings` named `maxIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DetectTunnelSettings_GetMutable_maxIters(MR_DetectTunnelSettings *_this);

/// if no metric is given then discreteMinusAbsMeanCurvatureMetric will be used
/// Returns a pointer to a member variable of class `MR::DetectTunnelSettings` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_float_from_MR_EdgeId *MR_DetectTunnelSettings_Get_metric(const MR_DetectTunnelSettings *_this);

/// if no metric is given then discreteMinusAbsMeanCurvatureMetric will be used
/// Modifies a member variable of class `MR::DetectTunnelSettings` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DetectTunnelSettings_Set_metric(MR_DetectTunnelSettings *_this, MR_PassBy value_pass_by, MR_std_function_float_from_MR_EdgeId *value);

/// if no metric is given then discreteMinusAbsMeanCurvatureMetric will be used
/// Returns a mutable pointer to a member variable of class `MR::DetectTunnelSettings` named `metric`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_float_from_MR_EdgeId *MR_DetectTunnelSettings_GetMutable_metric(MR_DetectTunnelSettings *_this);

/// to report algorithm progress and cancel from outside
/// Returns a pointer to a member variable of class `MR::DetectTunnelSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_DetectTunnelSettings_Get_progress(const MR_DetectTunnelSettings *_this);

/// to report algorithm progress and cancel from outside
/// Modifies a member variable of class `MR::DetectTunnelSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DetectTunnelSettings_Set_progress(MR_DetectTunnelSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// to report algorithm progress and cancel from outside
/// Returns a mutable pointer to a member variable of class `MR::DetectTunnelSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_DetectTunnelSettings_GetMutable_progress(MR_DetectTunnelSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DetectTunnelSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DetectTunnelSettings *MR_DetectTunnelSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DetectTunnelSettings_DestroyArray()`.
/// Use `MR_DetectTunnelSettings_OffsetMutablePtr()` and `MR_DetectTunnelSettings_OffsetPtr()` to access the array elements.
MRC_API MR_DetectTunnelSettings *MR_DetectTunnelSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DetectTunnelSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DetectTunnelSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DetectTunnelSettings *MR_DetectTunnelSettings_ConstructFrom(float maxTunnelLength, int32_t maxIters, MR_PassBy metric_pass_by, MR_std_function_float_from_MR_EdgeId *metric, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DetectTunnelSettings *MR_DetectTunnelSettings_OffsetPtr(const MR_DetectTunnelSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DetectTunnelSettings *MR_DetectTunnelSettings_OffsetMutablePtr(MR_DetectTunnelSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DetectTunnelSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DetectTunnelSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DetectTunnelSettings *MR_DetectTunnelSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DetectTunnelSettings *_other);

/// Destroys a heap-allocated instance of `MR_DetectTunnelSettings`. Does nothing if the pointer is null.
MRC_API void MR_DetectTunnelSettings_Destroy(const MR_DetectTunnelSettings *_this);

/// Destroys a heap-allocated array of `MR_DetectTunnelSettings`. Does nothing if the pointer is null.
MRC_API void MR_DetectTunnelSettings_DestroyArray(const MR_DetectTunnelSettings *_this);

/// Generated from a method of class `MR::DetectTunnelSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DetectTunnelSettings *MR_DetectTunnelSettings_AssignFromAnother(MR_DetectTunnelSettings *_this, MR_PassBy _other_pass_by, MR_DetectTunnelSettings *_other);

/// returns tunnels as a number of faces;
/// if you remove these faces and patch every boundary with disk, then the surface will be topology equivalent to sphere
/// Generated from function `MR::detectTunnelFaces`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FaceBitSet_std_string *MR_detectTunnelFaces(const MR_MeshPart *mp, const MR_DetectTunnelSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
