// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


// structure with settings and side output parameters for loading point cloud
/// Generated from class `MR::PointsLoadSettings`.
typedef struct MR_PointsLoadSettings MR_PointsLoadSettings;

///< points where to load point color map
/// Returns a pointer to a member variable of class `MR::PointsLoadSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *const *MR_PointsLoadSettings_Get_colors(const MR_PointsLoadSettings *_this);

///< points where to load point color map
/// Modifies a member variable of class `MR::PointsLoadSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsLoadSettings_Set_colors(MR_PointsLoadSettings *_this, MR_VertColors *value);

///< points where to load point color map
/// Returns a mutable pointer to a member variable of class `MR::PointsLoadSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors **MR_PointsLoadSettings_GetMutable_colors(MR_PointsLoadSettings *_this);

///< transform for the loaded point cloud
/// Returns a pointer to a member variable of class `MR::PointsLoadSettings` named `outXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *const *MR_PointsLoadSettings_Get_outXf(const MR_PointsLoadSettings *_this);

///< transform for the loaded point cloud
/// Modifies a member variable of class `MR::PointsLoadSettings` named `outXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsLoadSettings_Set_outXf(MR_PointsLoadSettings *_this, MR_AffineXf3f *value);

///< transform for the loaded point cloud
/// Returns a mutable pointer to a member variable of class `MR::PointsLoadSettings` named `outXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f **MR_PointsLoadSettings_GetMutable_outXf(MR_PointsLoadSettings *_this);

///< callback for set progress and stop process
/// Returns a pointer to a member variable of class `MR::PointsLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_PointsLoadSettings_Get_callback(const MR_PointsLoadSettings *_this);

///< callback for set progress and stop process
/// Modifies a member variable of class `MR::PointsLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PointsLoadSettings_Set_callback(MR_PointsLoadSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

///< callback for set progress and stop process
/// Returns a mutable pointer to a member variable of class `MR::PointsLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_PointsLoadSettings_GetMutable_callback(MR_PointsLoadSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_PointsLoadSettings *MR_PointsLoadSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointsLoadSettings_DestroyArray()`.
/// Use `MR_PointsLoadSettings_OffsetMutablePtr()` and `MR_PointsLoadSettings_OffsetPtr()` to access the array elements.
MRC_API MR_PointsLoadSettings *MR_PointsLoadSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PointsLoadSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_PointsLoadSettings *MR_PointsLoadSettings_ConstructFrom(MR_VertColors *colors, MR_AffineXf3f *outXf, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointsLoadSettings *MR_PointsLoadSettings_OffsetPtr(const MR_PointsLoadSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointsLoadSettings *MR_PointsLoadSettings_OffsetMutablePtr(MR_PointsLoadSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PointsLoadSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointsLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_PointsLoadSettings *MR_PointsLoadSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointsLoadSettings *_other);

/// Destroys a heap-allocated instance of `MR_PointsLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_PointsLoadSettings_Destroy(const MR_PointsLoadSettings *_this);

/// Destroys a heap-allocated array of `MR_PointsLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_PointsLoadSettings_DestroyArray(const MR_PointsLoadSettings *_this);

/// Generated from a method of class `MR::PointsLoadSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointsLoadSettings *MR_PointsLoadSettings_AssignFromAnother(MR_PointsLoadSettings *_this, MR_PassBy _other_pass_by, MR_PointsLoadSettings *_other);

#ifdef __cplusplus
} // extern "C"
#endif
