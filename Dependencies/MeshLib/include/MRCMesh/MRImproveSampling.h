// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_Vector_int32_t_MR_VertId MR_Vector_int32_t_MR_VertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::ImproveSamplingSettings`.
typedef struct MR_ImproveSamplingSettings MR_ImproveSamplingSettings;

/// the number of algorithm iterations to perform
/// Returns a pointer to a member variable of class `MR::ImproveSamplingSettings` named `numIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_ImproveSamplingSettings_Get_numIters(const MR_ImproveSamplingSettings *_this);

/// the number of algorithm iterations to perform
/// Modifies a member variable of class `MR::ImproveSamplingSettings` named `numIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ImproveSamplingSettings_Set_numIters(MR_ImproveSamplingSettings *_this, int32_t value);

/// the number of algorithm iterations to perform
/// Returns a mutable pointer to a member variable of class `MR::ImproveSamplingSettings` named `numIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_ImproveSamplingSettings_GetMutable_numIters(MR_ImproveSamplingSettings *_this);

/// if a sample represents less than this number of input points then such sample will be discarded;
/// it can be used to remove outliers
/// Returns a pointer to a member variable of class `MR::ImproveSamplingSettings` named `minPointsInSample`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_ImproveSamplingSettings_Get_minPointsInSample(const MR_ImproveSamplingSettings *_this);

/// if a sample represents less than this number of input points then such sample will be discarded;
/// it can be used to remove outliers
/// Modifies a member variable of class `MR::ImproveSamplingSettings` named `minPointsInSample`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ImproveSamplingSettings_Set_minPointsInSample(MR_ImproveSamplingSettings *_this, int32_t value);

/// if a sample represents less than this number of input points then such sample will be discarded;
/// it can be used to remove outliers
/// Returns a mutable pointer to a member variable of class `MR::ImproveSamplingSettings` named `minPointsInSample`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_ImproveSamplingSettings_GetMutable_minPointsInSample(MR_ImproveSamplingSettings *_this);

/// optional output: mapping from input point id to sample id
/// Returns a pointer to a member variable of class `MR::ImproveSamplingSettings` named `pt2sm`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *const *MR_ImproveSamplingSettings_Get_pt2sm(const MR_ImproveSamplingSettings *_this);

/// optional output: mapping from input point id to sample id
/// Modifies a member variable of class `MR::ImproveSamplingSettings` named `pt2sm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ImproveSamplingSettings_Set_pt2sm(MR_ImproveSamplingSettings *_this, MR_VertMap *value);

/// optional output: mapping from input point id to sample id
/// Returns a mutable pointer to a member variable of class `MR::ImproveSamplingSettings` named `pt2sm`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap **MR_ImproveSamplingSettings_GetMutable_pt2sm(MR_ImproveSamplingSettings *_this);

/// optional output: new cloud containing averaged points and normals for each sample
/// Returns a pointer to a member variable of class `MR::ImproveSamplingSettings` named `cloudOfSamples`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointCloud *const *MR_ImproveSamplingSettings_Get_cloudOfSamples(const MR_ImproveSamplingSettings *_this);

/// optional output: new cloud containing averaged points and normals for each sample
/// Modifies a member variable of class `MR::ImproveSamplingSettings` named `cloudOfSamples`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ImproveSamplingSettings_Set_cloudOfSamples(MR_ImproveSamplingSettings *_this, MR_PointCloud *value);

/// optional output: new cloud containing averaged points and normals for each sample
/// Returns a mutable pointer to a member variable of class `MR::ImproveSamplingSettings` named `cloudOfSamples`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointCloud **MR_ImproveSamplingSettings_GetMutable_cloudOfSamples(MR_ImproveSamplingSettings *_this);

/// optional output: the number of points in each sample
/// Returns a pointer to a member variable of class `MR::ImproveSamplingSettings` named `ptsInSm`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_int32_t_MR_VertId *const *MR_ImproveSamplingSettings_Get_ptsInSm(const MR_ImproveSamplingSettings *_this);

/// optional output: the number of points in each sample
/// Modifies a member variable of class `MR::ImproveSamplingSettings` named `ptsInSm`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ImproveSamplingSettings_Set_ptsInSm(MR_ImproveSamplingSettings *_this, MR_Vector_int32_t_MR_VertId *value);

/// optional output: the number of points in each sample
/// Returns a mutable pointer to a member variable of class `MR::ImproveSamplingSettings` named `ptsInSm`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_int32_t_MR_VertId **MR_ImproveSamplingSettings_GetMutable_ptsInSm(MR_ImproveSamplingSettings *_this);

/// optional input: colors of input points
/// Returns a pointer to a member variable of class `MR::ImproveSamplingSettings` named `ptColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *const *MR_ImproveSamplingSettings_Get_ptColors(const MR_ImproveSamplingSettings *_this);

/// optional input: colors of input points
/// Modifies a member variable of class `MR::ImproveSamplingSettings` named `ptColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ImproveSamplingSettings_Set_ptColors(MR_ImproveSamplingSettings *_this, const MR_VertColors *value);

/// optional input: colors of input points
/// Returns a mutable pointer to a member variable of class `MR::ImproveSamplingSettings` named `ptColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors **MR_ImproveSamplingSettings_GetMutable_ptColors(MR_ImproveSamplingSettings *_this);

/// optional output: averaged colors of samples
/// Returns a pointer to a member variable of class `MR::ImproveSamplingSettings` named `smColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *const *MR_ImproveSamplingSettings_Get_smColors(const MR_ImproveSamplingSettings *_this);

/// optional output: averaged colors of samples
/// Modifies a member variable of class `MR::ImproveSamplingSettings` named `smColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ImproveSamplingSettings_Set_smColors(MR_ImproveSamplingSettings *_this, MR_VertColors *value);

/// optional output: averaged colors of samples
/// Returns a mutable pointer to a member variable of class `MR::ImproveSamplingSettings` named `smColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors **MR_ImproveSamplingSettings_GetMutable_smColors(MR_ImproveSamplingSettings *_this);

/// output progress status and receive cancel signal
/// Returns a pointer to a member variable of class `MR::ImproveSamplingSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_ImproveSamplingSettings_Get_progress(const MR_ImproveSamplingSettings *_this);

/// output progress status and receive cancel signal
/// Modifies a member variable of class `MR::ImproveSamplingSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ImproveSamplingSettings_Set_progress(MR_ImproveSamplingSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// output progress status and receive cancel signal
/// Returns a mutable pointer to a member variable of class `MR::ImproveSamplingSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_ImproveSamplingSettings_GetMutable_progress(MR_ImproveSamplingSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ImproveSamplingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_ImproveSamplingSettings *MR_ImproveSamplingSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ImproveSamplingSettings_DestroyArray()`.
/// Use `MR_ImproveSamplingSettings_OffsetMutablePtr()` and `MR_ImproveSamplingSettings_OffsetPtr()` to access the array elements.
MRC_API MR_ImproveSamplingSettings *MR_ImproveSamplingSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ImproveSamplingSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ImproveSamplingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_ImproveSamplingSettings *MR_ImproveSamplingSettings_ConstructFrom(int32_t numIters, int32_t minPointsInSample, MR_VertMap *pt2sm, MR_PointCloud *cloudOfSamples, MR_Vector_int32_t_MR_VertId *ptsInSm, const MR_VertColors *ptColors, MR_VertColors *smColors, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ImproveSamplingSettings *MR_ImproveSamplingSettings_OffsetPtr(const MR_ImproveSamplingSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ImproveSamplingSettings *MR_ImproveSamplingSettings_OffsetMutablePtr(MR_ImproveSamplingSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ImproveSamplingSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ImproveSamplingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_ImproveSamplingSettings *MR_ImproveSamplingSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ImproveSamplingSettings *_other);

/// Destroys a heap-allocated instance of `MR_ImproveSamplingSettings`. Does nothing if the pointer is null.
MRC_API void MR_ImproveSamplingSettings_Destroy(const MR_ImproveSamplingSettings *_this);

/// Destroys a heap-allocated array of `MR_ImproveSamplingSettings`. Does nothing if the pointer is null.
MRC_API void MR_ImproveSamplingSettings_DestroyArray(const MR_ImproveSamplingSettings *_this);

/// Generated from a method of class `MR::ImproveSamplingSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ImproveSamplingSettings *MR_ImproveSamplingSettings_AssignFromAnother(MR_ImproveSamplingSettings *_this, MR_PassBy _other_pass_by, MR_ImproveSamplingSettings *_other);

/// Finds more representative sampling starting from a given one following k-means method;
/// \param samples input and output selected sample points from \param cloud;
/// \return false if it was terminated by the callback
/// Generated from function `MR::improveSampling`.
/// Parameter `cloud` can not be null. It is a single object.
/// Parameter `samples` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
MRC_API bool MR_improveSampling(const MR_PointCloud *cloud, MR_VertBitSet *samples, const MR_ImproveSamplingSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
