// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// setting for polyline loading from external format, and locations of optional output data
/// Generated from class `MR::LinesLoadSettings`.
typedef struct MR_LinesLoadSettings MR_LinesLoadSettings;

///< optional load artifact: per-vertex color map
/// Returns a pointer to a member variable of class `MR::LinesLoadSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *const *MR_LinesLoadSettings_Get_colors(const MR_LinesLoadSettings *_this);

///< optional load artifact: per-vertex color map
/// Modifies a member variable of class `MR::LinesLoadSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LinesLoadSettings_Set_colors(MR_LinesLoadSettings *_this, MR_VertColors *value);

///< optional load artifact: per-vertex color map
/// Returns a mutable pointer to a member variable of class `MR::LinesLoadSettings` named `colors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors **MR_LinesLoadSettings_GetMutable_colors(MR_LinesLoadSettings *_this);

///< callback for set progress and stop process
/// Returns a pointer to a member variable of class `MR::LinesLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_LinesLoadSettings_Get_callback(const MR_LinesLoadSettings *_this);

///< callback for set progress and stop process
/// Modifies a member variable of class `MR::LinesLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LinesLoadSettings_Set_callback(MR_LinesLoadSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

///< callback for set progress and stop process
/// Returns a mutable pointer to a member variable of class `MR::LinesLoadSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_LinesLoadSettings_GetMutable_callback(MR_LinesLoadSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LinesLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_LinesLoadSettings *MR_LinesLoadSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LinesLoadSettings_DestroyArray()`.
/// Use `MR_LinesLoadSettings_OffsetMutablePtr()` and `MR_LinesLoadSettings_OffsetPtr()` to access the array elements.
MRC_API MR_LinesLoadSettings *MR_LinesLoadSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LinesLoadSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LinesLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_LinesLoadSettings *MR_LinesLoadSettings_ConstructFrom(MR_VertColors *colors, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LinesLoadSettings *MR_LinesLoadSettings_OffsetPtr(const MR_LinesLoadSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LinesLoadSettings *MR_LinesLoadSettings_OffsetMutablePtr(MR_LinesLoadSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LinesLoadSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LinesLoadSettings_Destroy()` to free it when you're done using it.
MRC_API MR_LinesLoadSettings *MR_LinesLoadSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_LinesLoadSettings *_other);

/// Destroys a heap-allocated instance of `MR_LinesLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_LinesLoadSettings_Destroy(const MR_LinesLoadSettings *_this);

/// Destroys a heap-allocated array of `MR_LinesLoadSettings`. Does nothing if the pointer is null.
MRC_API void MR_LinesLoadSettings_DestroyArray(const MR_LinesLoadSettings *_this);

/// Generated from a method of class `MR::LinesLoadSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LinesLoadSettings *MR_LinesLoadSettings_AssignFromAnother(MR_LinesLoadSettings *_this, MR_PassBy _other_pass_by, MR_LinesLoadSettings *_other);

#ifdef __cplusplus
} // extern "C"
#endif
