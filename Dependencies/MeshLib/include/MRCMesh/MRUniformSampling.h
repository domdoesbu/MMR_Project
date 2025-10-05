// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_PointCloud MR_std_optional_MR_PointCloud; // Defined in `#include <MRCMisc/std_optional_MR_PointCloud.h>`.
typedef struct MR_std_optional_MR_VertBitSet MR_std_optional_MR_VertBitSet; // Defined in `#include <MRCMisc/std_optional_MR_VertBitSet.h>`.


/// Generated from class `MR::UniformSamplingSettings`.
typedef struct MR_UniformSamplingSettings MR_UniformSamplingSettings;

/// minimal distance between samples
/// Returns a pointer to a member variable of class `MR::UniformSamplingSettings` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_UniformSamplingSettings_Get_distance(const MR_UniformSamplingSettings *_this);

/// minimal distance between samples
/// Modifies a member variable of class `MR::UniformSamplingSettings` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniformSamplingSettings_Set_distance(MR_UniformSamplingSettings *_this, float value);

/// minimal distance between samples
/// Returns a mutable pointer to a member variable of class `MR::UniformSamplingSettings` named `distance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_UniformSamplingSettings_GetMutable_distance(MR_UniformSamplingSettings *_this);

/// if point cloud has normals then automatically decreases local distance to make sure that all points inside have absolute normal dot product not less than this value;
/// this is to make sampling denser in the regions of high curvature;
/// value <=0 means ignore normals;
/// value >=1 means select all points (practically useless)
/// Returns a pointer to a member variable of class `MR::UniformSamplingSettings` named `minNormalDot`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_UniformSamplingSettings_Get_minNormalDot(const MR_UniformSamplingSettings *_this);

/// if point cloud has normals then automatically decreases local distance to make sure that all points inside have absolute normal dot product not less than this value;
/// this is to make sampling denser in the regions of high curvature;
/// value <=0 means ignore normals;
/// value >=1 means select all points (practically useless)
/// Modifies a member variable of class `MR::UniformSamplingSettings` named `minNormalDot`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniformSamplingSettings_Set_minNormalDot(MR_UniformSamplingSettings *_this, float value);

/// if point cloud has normals then automatically decreases local distance to make sure that all points inside have absolute normal dot product not less than this value;
/// this is to make sampling denser in the regions of high curvature;
/// value <=0 means ignore normals;
/// value >=1 means select all points (practically useless)
/// Returns a mutable pointer to a member variable of class `MR::UniformSamplingSettings` named `minNormalDot`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_UniformSamplingSettings_GetMutable_minNormalDot(MR_UniformSamplingSettings *_this);

/// if true process the points in lexicographical order, which gives tighter and more uniform samples;
/// if false process the points according to their ids, which is faster
/// Returns a pointer to a member variable of class `MR::UniformSamplingSettings` named `lexicographicalOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_UniformSamplingSettings_Get_lexicographicalOrder(const MR_UniformSamplingSettings *_this);

/// if true process the points in lexicographical order, which gives tighter and more uniform samples;
/// if false process the points according to their ids, which is faster
/// Modifies a member variable of class `MR::UniformSamplingSettings` named `lexicographicalOrder`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniformSamplingSettings_Set_lexicographicalOrder(MR_UniformSamplingSettings *_this, bool value);

/// if true process the points in lexicographical order, which gives tighter and more uniform samples;
/// if false process the points according to their ids, which is faster
/// Returns a mutable pointer to a member variable of class `MR::UniformSamplingSettings` named `lexicographicalOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_UniformSamplingSettings_GetMutable_lexicographicalOrder(MR_UniformSamplingSettings *_this);

/// if not nullptr then these normals will be used during sampling instead of normals in the cloud itself
/// Returns a pointer to a member variable of class `MR::UniformSamplingSettings` named `pNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *const *MR_UniformSamplingSettings_Get_pNormals(const MR_UniformSamplingSettings *_this);

/// if not nullptr then these normals will be used during sampling instead of normals in the cloud itself
/// Modifies a member variable of class `MR::UniformSamplingSettings` named `pNormals`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniformSamplingSettings_Set_pNormals(MR_UniformSamplingSettings *_this, const MR_VertCoords *value);

/// if not nullptr then these normals will be used during sampling instead of normals in the cloud itself
/// Returns a mutable pointer to a member variable of class `MR::UniformSamplingSettings` named `pNormals`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords **MR_UniformSamplingSettings_GetMutable_pNormals(MR_UniformSamplingSettings *_this);

/// to report progress and cancel processing
/// Returns a pointer to a member variable of class `MR::UniformSamplingSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_UniformSamplingSettings_Get_progress(const MR_UniformSamplingSettings *_this);

/// to report progress and cancel processing
/// Modifies a member variable of class `MR::UniformSamplingSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniformSamplingSettings_Set_progress(MR_UniformSamplingSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// to report progress and cancel processing
/// Returns a mutable pointer to a member variable of class `MR::UniformSamplingSettings` named `progress`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_UniformSamplingSettings_GetMutable_progress(MR_UniformSamplingSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniformSamplingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_UniformSamplingSettings *MR_UniformSamplingSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UniformSamplingSettings_DestroyArray()`.
/// Use `MR_UniformSamplingSettings_OffsetMutablePtr()` and `MR_UniformSamplingSettings_OffsetPtr()` to access the array elements.
MRC_API MR_UniformSamplingSettings *MR_UniformSamplingSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::UniformSamplingSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniformSamplingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_UniformSamplingSettings *MR_UniformSamplingSettings_ConstructFrom(float distance, float minNormalDot, bool lexicographicalOrder, const MR_VertCoords *pNormals, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UniformSamplingSettings *MR_UniformSamplingSettings_OffsetPtr(const MR_UniformSamplingSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UniformSamplingSettings *MR_UniformSamplingSettings_OffsetMutablePtr(MR_UniformSamplingSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UniformSamplingSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniformSamplingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_UniformSamplingSettings *MR_UniformSamplingSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_UniformSamplingSettings *_other);

/// Destroys a heap-allocated instance of `MR_UniformSamplingSettings`. Does nothing if the pointer is null.
MRC_API void MR_UniformSamplingSettings_Destroy(const MR_UniformSamplingSettings *_this);

/// Destroys a heap-allocated array of `MR_UniformSamplingSettings`. Does nothing if the pointer is null.
MRC_API void MR_UniformSamplingSettings_DestroyArray(const MR_UniformSamplingSettings *_this);

/// Generated from a method of class `MR::UniformSamplingSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UniformSamplingSettings *MR_UniformSamplingSettings_AssignFromAnother(MR_UniformSamplingSettings *_this, MR_PassBy _other_pass_by, MR_UniformSamplingSettings *_other);

/// Sample vertices, removing ones that are too close;
/// returns std::nullopt if it was terminated by the callback
/// Generated from function `MR::pointUniformSampling`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_VertBitSet *MR_pointUniformSampling(const MR_PointCloud *pointCloud, const MR_UniformSamplingSettings *settings);

/// Composes new point cloud consisting of uniform samples of original point cloud;
/// returns std::nullopt if it was terminated by the callback
/// Generated from function `MR::makeUniformSampledCloud`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_PointCloud_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_PointCloud *MR_makeUniformSampledCloud(const MR_PointCloud *pointCloud, const MR_UniformSamplingSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
