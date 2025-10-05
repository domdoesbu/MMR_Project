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

typedef struct MR_FaceNormals MR_FaceNormals; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_UndirectedEdgeScalars MR_UndirectedEdgeScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::DenoiseViaNormalsSettings`.
typedef struct MR_DenoiseViaNormalsSettings MR_DenoiseViaNormalsSettings;

/// Smooth face normals, given
/// \param mesh contains topology information and coordinates for equation weights
/// \param normals input noisy normals and output smooth normals
/// \param v edge indicator function (1 - smooth edge, 0 - crease edge)
/// \param gamma the amount of smoothing: 0 - no smoothing, 1 - average smoothing, ...
/// see the article "Mesh Denoising via a Novel Mumford-Shah Framework", equation (19)
/// Generated from function `MR::denoiseNormals`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
MRC_API void MR_denoiseNormals(const MR_Mesh *mesh, MR_FaceNormals *normals, const MR_UndirectedEdgeScalars *v, float gamma);

/// Compute edge indicator function (1 - smooth edge, 0 - crease edge) by solving large system of linear equations
/// \param mesh contains topology information and coordinates for equation weights
/// \param normals per-face normals
/// \param beta 0.001 - sharp edges, 0.01 - moderate edges, 0.1 - smooth edges
/// \param gamma the amount of smoothing: 0 - no smoothing, 1 - average smoothing, ...
/// see the article "Mesh Denoising via a Novel Mumford-Shah Framework", equation (20)
/// Generated from function `MR::updateIndicator`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
/// Parameter `normals` can not be null. It is a single object.
MRC_API void MR_updateIndicator(const MR_Mesh *mesh, MR_UndirectedEdgeScalars *v, const MR_FaceNormals *normals, float beta, float gamma);

/// Compute edge indicator function (1 - smooth edge, 0 - crease edge) by approximation without solving the system of linear equations
/// \param normals per-face normals
/// \param beta 0.001 - sharp edges, 0.01 - moderate edges, 0.1 - smooth edges
/// \param gamma the amount of smoothing: 0 - no smoothing, 1 - average smoothing, ...
/// see the article "Mesh Denoising via a Novel Mumford-Shah Framework", equation (20)
/// Generated from function `MR::updateIndicatorFast`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `v` can not be null. It is a single object.
/// Parameter `normals` can not be null. It is a single object.
MRC_API void MR_updateIndicatorFast(const MR_MeshTopology *topology, MR_UndirectedEdgeScalars *v, const MR_FaceNormals *normals, float beta, float gamma);

/// use approximated computation, which is much faster than precise solution
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `fastIndicatorComputation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DenoiseViaNormalsSettings_Get_fastIndicatorComputation(const MR_DenoiseViaNormalsSettings *_this);

/// use approximated computation, which is much faster than precise solution
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `fastIndicatorComputation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_fastIndicatorComputation(MR_DenoiseViaNormalsSettings *_this, bool value);

/// use approximated computation, which is much faster than precise solution
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `fastIndicatorComputation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DenoiseViaNormalsSettings_GetMutable_fastIndicatorComputation(MR_DenoiseViaNormalsSettings *_this);

/// 0.001 - sharp edges, 0.01 - moderate edges, 0.1 - smooth edges
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `beta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DenoiseViaNormalsSettings_Get_beta(const MR_DenoiseViaNormalsSettings *_this);

/// 0.001 - sharp edges, 0.01 - moderate edges, 0.1 - smooth edges
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `beta`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_beta(MR_DenoiseViaNormalsSettings *_this, float value);

/// 0.001 - sharp edges, 0.01 - moderate edges, 0.1 - smooth edges
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `beta`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DenoiseViaNormalsSettings_GetMutable_beta(MR_DenoiseViaNormalsSettings *_this);

/// the amount of smoothing: 0 - no smoothing, 1 - average smoothing, ...
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `gamma`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DenoiseViaNormalsSettings_Get_gamma(const MR_DenoiseViaNormalsSettings *_this);

/// the amount of smoothing: 0 - no smoothing, 1 - average smoothing, ...
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `gamma`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_gamma(MR_DenoiseViaNormalsSettings *_this, float value);

/// the amount of smoothing: 0 - no smoothing, 1 - average smoothing, ...
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `gamma`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DenoiseViaNormalsSettings_GetMutable_gamma(MR_DenoiseViaNormalsSettings *_this);

/// the number of iterations to smooth normals and find creases; the more the better quality, but longer computation
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `normalIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DenoiseViaNormalsSettings_Get_normalIters(const MR_DenoiseViaNormalsSettings *_this);

/// the number of iterations to smooth normals and find creases; the more the better quality, but longer computation
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `normalIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_normalIters(MR_DenoiseViaNormalsSettings *_this, int32_t value);

/// the number of iterations to smooth normals and find creases; the more the better quality, but longer computation
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `normalIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DenoiseViaNormalsSettings_GetMutable_normalIters(MR_DenoiseViaNormalsSettings *_this);

/// the number of iterations to update vertex coordinates from found normals; the more the better quality, but longer computation
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `pointIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DenoiseViaNormalsSettings_Get_pointIters(const MR_DenoiseViaNormalsSettings *_this);

/// the number of iterations to update vertex coordinates from found normals; the more the better quality, but longer computation
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `pointIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_pointIters(MR_DenoiseViaNormalsSettings *_this, int32_t value);

/// the number of iterations to update vertex coordinates from found normals; the more the better quality, but longer computation
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `pointIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DenoiseViaNormalsSettings_GetMutable_pointIters(MR_DenoiseViaNormalsSettings *_this);

/// how much resulting points must be attracted to initial points (e.g. to avoid general shrinkage), must be > 0
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `guideWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DenoiseViaNormalsSettings_Get_guideWeight(const MR_DenoiseViaNormalsSettings *_this);

/// how much resulting points must be attracted to initial points (e.g. to avoid general shrinkage), must be > 0
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `guideWeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_guideWeight(MR_DenoiseViaNormalsSettings *_this, float value);

/// how much resulting points must be attracted to initial points (e.g. to avoid general shrinkage), must be > 0
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `guideWeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DenoiseViaNormalsSettings_GetMutable_guideWeight(MR_DenoiseViaNormalsSettings *_this);

/// if true then maximal displacement of each point during denoising will be limited
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `limitNearInitial`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DenoiseViaNormalsSettings_Get_limitNearInitial(const MR_DenoiseViaNormalsSettings *_this);

/// if true then maximal displacement of each point during denoising will be limited
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `limitNearInitial`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_limitNearInitial(MR_DenoiseViaNormalsSettings *_this, bool value);

/// if true then maximal displacement of each point during denoising will be limited
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `limitNearInitial`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DenoiseViaNormalsSettings_GetMutable_limitNearInitial(MR_DenoiseViaNormalsSettings *_this);

/// maximum distance between a point and its position before relaxation, ignored if limitNearInitial = false
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `maxInitialDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DenoiseViaNormalsSettings_Get_maxInitialDist(const MR_DenoiseViaNormalsSettings *_this);

/// maximum distance between a point and its position before relaxation, ignored if limitNearInitial = false
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `maxInitialDist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_maxInitialDist(MR_DenoiseViaNormalsSettings *_this, float value);

/// maximum distance between a point and its position before relaxation, ignored if limitNearInitial = false
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `maxInitialDist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DenoiseViaNormalsSettings_GetMutable_maxInitialDist(MR_DenoiseViaNormalsSettings *_this);

/// optionally returns creases found during smoothing
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `outCreases`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet *const *MR_DenoiseViaNormalsSettings_Get_outCreases(const MR_DenoiseViaNormalsSettings *_this);

/// optionally returns creases found during smoothing
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `outCreases`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_outCreases(MR_DenoiseViaNormalsSettings *_this, MR_UndirectedEdgeBitSet *value);

/// optionally returns creases found during smoothing
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `outCreases`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeBitSet **MR_DenoiseViaNormalsSettings_GetMutable_outCreases(MR_DenoiseViaNormalsSettings *_this);

/// to get the progress and optionally cancel
/// Returns a pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_DenoiseViaNormalsSettings_Get_cb(const MR_DenoiseViaNormalsSettings *_this);

/// to get the progress and optionally cancel
/// Modifies a member variable of class `MR::DenoiseViaNormalsSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DenoiseViaNormalsSettings_Set_cb(MR_DenoiseViaNormalsSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// to get the progress and optionally cancel
/// Returns a mutable pointer to a member variable of class `MR::DenoiseViaNormalsSettings` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_DenoiseViaNormalsSettings_GetMutable_cb(MR_DenoiseViaNormalsSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DenoiseViaNormalsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DenoiseViaNormalsSettings *MR_DenoiseViaNormalsSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DenoiseViaNormalsSettings_DestroyArray()`.
/// Use `MR_DenoiseViaNormalsSettings_OffsetMutablePtr()` and `MR_DenoiseViaNormalsSettings_OffsetPtr()` to access the array elements.
MRC_API MR_DenoiseViaNormalsSettings *MR_DenoiseViaNormalsSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DenoiseViaNormalsSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DenoiseViaNormalsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DenoiseViaNormalsSettings *MR_DenoiseViaNormalsSettings_ConstructFrom(bool fastIndicatorComputation, float beta, float gamma, int32_t normalIters, int32_t pointIters, float guideWeight, bool limitNearInitial, float maxInitialDist, MR_UndirectedEdgeBitSet *outCreases, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DenoiseViaNormalsSettings *MR_DenoiseViaNormalsSettings_OffsetPtr(const MR_DenoiseViaNormalsSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DenoiseViaNormalsSettings *MR_DenoiseViaNormalsSettings_OffsetMutablePtr(MR_DenoiseViaNormalsSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DenoiseViaNormalsSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DenoiseViaNormalsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_DenoiseViaNormalsSettings *MR_DenoiseViaNormalsSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DenoiseViaNormalsSettings *_other);

/// Destroys a heap-allocated instance of `MR_DenoiseViaNormalsSettings`. Does nothing if the pointer is null.
MRC_API void MR_DenoiseViaNormalsSettings_Destroy(const MR_DenoiseViaNormalsSettings *_this);

/// Destroys a heap-allocated array of `MR_DenoiseViaNormalsSettings`. Does nothing if the pointer is null.
MRC_API void MR_DenoiseViaNormalsSettings_DestroyArray(const MR_DenoiseViaNormalsSettings *_this);

/// Generated from a method of class `MR::DenoiseViaNormalsSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DenoiseViaNormalsSettings *MR_DenoiseViaNormalsSettings_AssignFromAnother(MR_DenoiseViaNormalsSettings *_this, MR_PassBy _other_pass_by, MR_DenoiseViaNormalsSettings *_other);

/// Reduces noise in given mesh,
/// see the article "Mesh Denoising via a Novel Mumford-Shah Framework"
/// Generated from function `MR::meshDenoiseViaNormals`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_meshDenoiseViaNormals(MR_Mesh *mesh, const MR_DenoiseViaNormalsSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
