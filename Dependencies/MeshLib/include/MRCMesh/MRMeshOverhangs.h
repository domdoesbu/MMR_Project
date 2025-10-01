// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_expected_std_vector_MR_FaceBitSet_std_string MR_expected_std_vector_MR_FaceBitSet_std_string; // Defined in `#include <MRCMisc/expected_std_vector_MR_FaceBitSet_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// parameters for MR::findOverhangs
/// Generated from class `MR::FindOverhangsSettings`.
typedef struct MR_FindOverhangsSettings MR_FindOverhangsSettings;

/// base axis marking the up direction
/// Returns a pointer to a member variable of class `MR::FindOverhangsSettings` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_FindOverhangsSettings_Get_axis(const MR_FindOverhangsSettings *_this);

/// base axis marking the up direction
/// Modifies a member variable of class `MR::FindOverhangsSettings` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverhangsSettings_Set_axis(MR_FindOverhangsSettings *_this, MR_Vector3f value);

/// base axis marking the up direction
/// Returns a mutable pointer to a member variable of class `MR::FindOverhangsSettings` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_FindOverhangsSettings_GetMutable_axis(MR_FindOverhangsSettings *_this);

/// height of a layer
/// Returns a pointer to a member variable of class `MR::FindOverhangsSettings` named `layerHeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindOverhangsSettings_Get_layerHeight(const MR_FindOverhangsSettings *_this);

/// height of a layer
/// Modifies a member variable of class `MR::FindOverhangsSettings` named `layerHeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverhangsSettings_Set_layerHeight(MR_FindOverhangsSettings *_this, float value);

/// height of a layer
/// Returns a mutable pointer to a member variable of class `MR::FindOverhangsSettings` named `layerHeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindOverhangsSettings_GetMutable_layerHeight(MR_FindOverhangsSettings *_this);

/// maximum allowed overhang distance within a layer
/// Returns a pointer to a member variable of class `MR::FindOverhangsSettings` named `maxOverhangDistance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_FindOverhangsSettings_Get_maxOverhangDistance(const MR_FindOverhangsSettings *_this);

/// maximum allowed overhang distance within a layer
/// Modifies a member variable of class `MR::FindOverhangsSettings` named `maxOverhangDistance`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverhangsSettings_Set_maxOverhangDistance(MR_FindOverhangsSettings *_this, float value);

/// maximum allowed overhang distance within a layer
/// Returns a mutable pointer to a member variable of class `MR::FindOverhangsSettings` named `maxOverhangDistance`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_FindOverhangsSettings_GetMutable_maxOverhangDistance(MR_FindOverhangsSettings *_this);

/// number of hops used to smooth out the overhang regions (0 - disable smoothing)
/// Returns a pointer to a member variable of class `MR::FindOverhangsSettings` named `hops`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_FindOverhangsSettings_Get_hops(const MR_FindOverhangsSettings *_this);

/// number of hops used to smooth out the overhang regions (0 - disable smoothing)
/// Modifies a member variable of class `MR::FindOverhangsSettings` named `hops`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverhangsSettings_Set_hops(MR_FindOverhangsSettings *_this, int32_t value);

/// number of hops used to smooth out the overhang regions (0 - disable smoothing)
/// Returns a mutable pointer to a member variable of class `MR::FindOverhangsSettings` named `hops`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_FindOverhangsSettings_GetMutable_hops(MR_FindOverhangsSettings *_this);

/// mesh transform
/// Returns a pointer to a member variable of class `MR::FindOverhangsSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_FindOverhangsSettings_Get_xf(const MR_FindOverhangsSettings *_this);

/// mesh transform
/// Modifies a member variable of class `MR::FindOverhangsSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverhangsSettings_Set_xf(MR_FindOverhangsSettings *_this, const MR_AffineXf3f *value);

/// mesh transform
/// Returns a mutable pointer to a member variable of class `MR::FindOverhangsSettings` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_FindOverhangsSettings_GetMutable_xf(MR_FindOverhangsSettings *_this);

/// Returns a pointer to a member variable of class `MR::FindOverhangsSettings` named `progressCb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_FindOverhangsSettings_Get_progressCb(const MR_FindOverhangsSettings *_this);

/// Modifies a member variable of class `MR::FindOverhangsSettings` named `progressCb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FindOverhangsSettings_Set_progressCb(MR_FindOverhangsSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::FindOverhangsSettings` named `progressCb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_FindOverhangsSettings_GetMutable_progressCb(MR_FindOverhangsSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindOverhangsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindOverhangsSettings *MR_FindOverhangsSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FindOverhangsSettings_DestroyArray()`.
/// Use `MR_FindOverhangsSettings_OffsetMutablePtr()` and `MR_FindOverhangsSettings_OffsetPtr()` to access the array elements.
MRC_API MR_FindOverhangsSettings *MR_FindOverhangsSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FindOverhangsSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindOverhangsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindOverhangsSettings *MR_FindOverhangsSettings_ConstructFrom(MR_Vector3f axis, float layerHeight, float maxOverhangDistance, int32_t hops, const MR_AffineXf3f *xf, MR_PassBy progressCb_pass_by, MR_std_function_bool_from_float *progressCb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FindOverhangsSettings *MR_FindOverhangsSettings_OffsetPtr(const MR_FindOverhangsSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FindOverhangsSettings *MR_FindOverhangsSettings_OffsetMutablePtr(MR_FindOverhangsSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FindOverhangsSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FindOverhangsSettings_Destroy()` to free it when you're done using it.
MRC_API MR_FindOverhangsSettings *MR_FindOverhangsSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FindOverhangsSettings *_other);

/// Destroys a heap-allocated instance of `MR_FindOverhangsSettings`. Does nothing if the pointer is null.
MRC_API void MR_FindOverhangsSettings_Destroy(const MR_FindOverhangsSettings *_this);

/// Destroys a heap-allocated array of `MR_FindOverhangsSettings`. Does nothing if the pointer is null.
MRC_API void MR_FindOverhangsSettings_DestroyArray(const MR_FindOverhangsSettings *_this);

/// Generated from a method of class `MR::FindOverhangsSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FindOverhangsSettings *MR_FindOverhangsSettings_AssignFromAnother(MR_FindOverhangsSettings *_this, MR_PassBy _other_pass_by, MR_FindOverhangsSettings *_other);

/// \brief Find face regions that might create overhangs
/// \param mesh - source mesh
/// \param settings - parameters
/// \return face regions
/// Generated from function `MR::findOverhangs`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_MR_FaceBitSet_std_string *MR_findOverhangs(const MR_Mesh *mesh, const MR_FindOverhangsSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
