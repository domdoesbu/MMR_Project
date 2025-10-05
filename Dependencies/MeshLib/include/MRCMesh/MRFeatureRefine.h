// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FeatureObject MR_FeatureObject; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_AffineXf3f_std_string MR_expected_MR_AffineXf3f_std_string; // Defined in `#include <MRCMisc/expected_MR_AffineXf3f_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Optional parameters for \ref refineFeatureObject
/// Generated from class `MR::RefineParameters`.
typedef struct MR_RefineParameters MR_RefineParameters;

/// Maximum distance from the source model to the feature
/// Returns a pointer to a member variable of class `MR::RefineParameters` named `distanceLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RefineParameters_Get_distanceLimit(const MR_RefineParameters *_this);

/// Maximum distance from the source model to the feature
/// Modifies a member variable of class `MR::RefineParameters` named `distanceLimit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RefineParameters_Set_distanceLimit(MR_RefineParameters *_this, float value);

/// Maximum distance from the source model to the feature
/// Returns a mutable pointer to a member variable of class `MR::RefineParameters` named `distanceLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RefineParameters_GetMutable_distanceLimit(MR_RefineParameters *_this);

/// Maximum angle between the source model's normal and the feature's normal
/// Returns a pointer to a member variable of class `MR::RefineParameters` named `normalTolerance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_RefineParameters_Get_normalTolerance(const MR_RefineParameters *_this);

/// Maximum angle between the source model's normal and the feature's normal
/// Modifies a member variable of class `MR::RefineParameters` named `normalTolerance`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RefineParameters_Set_normalTolerance(MR_RefineParameters *_this, float value);

/// Maximum angle between the source model's normal and the feature's normal
/// Returns a mutable pointer to a member variable of class `MR::RefineParameters` named `normalTolerance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_RefineParameters_GetMutable_normalTolerance(MR_RefineParameters *_this);

/// (for meshes only) Reference faces used for filtering intermediate results that are too far from it
/// Returns a pointer to a member variable of class `MR::RefineParameters` named `faceRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *const *MR_RefineParameters_Get_faceRegion(const MR_RefineParameters *_this);

/// (for meshes only) Reference faces used for filtering intermediate results that are too far from it
/// Modifies a member variable of class `MR::RefineParameters` named `faceRegion`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RefineParameters_Set_faceRegion(MR_RefineParameters *_this, const MR_FaceBitSet *value);

/// (for meshes only) Reference faces used for filtering intermediate results that are too far from it
/// Returns a mutable pointer to a member variable of class `MR::RefineParameters` named `faceRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet **MR_RefineParameters_GetMutable_faceRegion(MR_RefineParameters *_this);

/// (for meshes only) Reference vertices used for filtering intermediate results that are too far from it
/// Returns a pointer to a member variable of class `MR::RefineParameters` named `vertRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *const *MR_RefineParameters_Get_vertRegion(const MR_RefineParameters *_this);

/// (for meshes only) Reference vertices used for filtering intermediate results that are too far from it
/// Modifies a member variable of class `MR::RefineParameters` named `vertRegion`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RefineParameters_Set_vertRegion(MR_RefineParameters *_this, const MR_VertBitSet *value);

/// (for meshes only) Reference vertices used for filtering intermediate results that are too far from it
/// Returns a mutable pointer to a member variable of class `MR::RefineParameters` named `vertRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet **MR_RefineParameters_GetMutable_vertRegion(MR_RefineParameters *_this);

/// Maximum amount of iterations performed until a stable set of points is found
/// Returns a pointer to a member variable of class `MR::RefineParameters` named `maxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_RefineParameters_Get_maxIterations(const MR_RefineParameters *_this);

/// Maximum amount of iterations performed until a stable set of points is found
/// Modifies a member variable of class `MR::RefineParameters` named `maxIterations`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RefineParameters_Set_maxIterations(MR_RefineParameters *_this, int32_t value);

/// Maximum amount of iterations performed until a stable set of points is found
/// Returns a mutable pointer to a member variable of class `MR::RefineParameters` named `maxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_RefineParameters_GetMutable_maxIterations(MR_RefineParameters *_this);

/// Progress callback
/// Returns a pointer to a member variable of class `MR::RefineParameters` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_RefineParameters_Get_callback(const MR_RefineParameters *_this);

/// Progress callback
/// Modifies a member variable of class `MR::RefineParameters` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RefineParameters_Set_callback(MR_RefineParameters *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Progress callback
/// Returns a mutable pointer to a member variable of class `MR::RefineParameters` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_RefineParameters_GetMutable_callback(MR_RefineParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RefineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_RefineParameters *MR_RefineParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RefineParameters_DestroyArray()`.
/// Use `MR_RefineParameters_OffsetMutablePtr()` and `MR_RefineParameters_OffsetPtr()` to access the array elements.
MRC_API MR_RefineParameters *MR_RefineParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::RefineParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RefineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_RefineParameters *MR_RefineParameters_ConstructFrom(float distanceLimit, float normalTolerance, const MR_FaceBitSet *faceRegion, const MR_VertBitSet *vertRegion, int32_t maxIterations, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RefineParameters *MR_RefineParameters_OffsetPtr(const MR_RefineParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RefineParameters *MR_RefineParameters_OffsetMutablePtr(MR_RefineParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::RefineParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RefineParameters_Destroy()` to free it when you're done using it.
MRC_API MR_RefineParameters *MR_RefineParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_RefineParameters *_other);

/// Destroys a heap-allocated instance of `MR_RefineParameters`. Does nothing if the pointer is null.
MRC_API void MR_RefineParameters_Destroy(const MR_RefineParameters *_this);

/// Destroys a heap-allocated array of `MR_RefineParameters`. Does nothing if the pointer is null.
MRC_API void MR_RefineParameters_DestroyArray(const MR_RefineParameters *_this);

/// Generated from a method of class `MR::RefineParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RefineParameters *MR_RefineParameters_AssignFromAnother(MR_RefineParameters *_this, MR_PassBy _other_pass_by, MR_RefineParameters *_other);

/// Recalculate the feature object's position so it would better fit with the given mesh
/// Generated from function `MR::refineFeatureObject`.
/// Parameter `featObj` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_AffineXf3f_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_AffineXf3f_std_string *MR_refineFeatureObject_MR_Mesh(const MR_FeatureObject *featObj, const MR_Mesh *mesh, const MR_RefineParameters *params);

/// Recalculate the feature object's position so it would better fit with the given point cloud
/// Generated from function `MR::refineFeatureObject`.
/// Parameter `featObj` can not be null. It is a single object.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_AffineXf3f_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_AffineXf3f_std_string *MR_refineFeatureObject_MR_PointCloud(const MR_FeatureObject *featObj, const MR_PointCloud *pointCloud, const MR_RefineParameters *params);

#ifdef __cplusplus
} // extern "C"
#endif
