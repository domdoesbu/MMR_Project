// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Generated from class `MR::NoiseSettings`.
typedef struct MR_NoiseSettings MR_NoiseSettings;

/// Returns a pointer to a member variable of class `MR::NoiseSettings` named `sigma`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_NoiseSettings_Get_sigma(const MR_NoiseSettings *_this);

/// Modifies a member variable of class `MR::NoiseSettings` named `sigma`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_NoiseSettings_Set_sigma(MR_NoiseSettings *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::NoiseSettings` named `sigma`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_NoiseSettings_GetMutable_sigma(MR_NoiseSettings *_this);

// start state of the generator engine
/// Returns a pointer to a member variable of class `MR::NoiseSettings` named `seed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint32_t *MR_NoiseSettings_Get_seed(const MR_NoiseSettings *_this);

// start state of the generator engine
/// Modifies a member variable of class `MR::NoiseSettings` named `seed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_NoiseSettings_Set_seed(MR_NoiseSettings *_this, uint32_t value);

// start state of the generator engine
/// Returns a mutable pointer to a member variable of class `MR::NoiseSettings` named `seed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint32_t *MR_NoiseSettings_GetMutable_seed(MR_NoiseSettings *_this);

/// Returns a pointer to a member variable of class `MR::NoiseSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_NoiseSettings_Get_callback(const MR_NoiseSettings *_this);

/// Modifies a member variable of class `MR::NoiseSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_NoiseSettings_Set_callback(MR_NoiseSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::NoiseSettings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_NoiseSettings_GetMutable_callback(MR_NoiseSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoiseSettings_Destroy()` to free it when you're done using it.
MRC_API MR_NoiseSettings *MR_NoiseSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NoiseSettings_DestroyArray()`.
/// Use `MR_NoiseSettings_OffsetMutablePtr()` and `MR_NoiseSettings_OffsetPtr()` to access the array elements.
MRC_API MR_NoiseSettings *MR_NoiseSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::NoiseSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoiseSettings_Destroy()` to free it when you're done using it.
MRC_API MR_NoiseSettings *MR_NoiseSettings_ConstructFrom(float sigma, uint32_t seed, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NoiseSettings *MR_NoiseSettings_OffsetPtr(const MR_NoiseSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NoiseSettings *MR_NoiseSettings_OffsetMutablePtr(MR_NoiseSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NoiseSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NoiseSettings_Destroy()` to free it when you're done using it.
MRC_API MR_NoiseSettings *MR_NoiseSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_NoiseSettings *_other);

/// Destroys a heap-allocated instance of `MR_NoiseSettings`. Does nothing if the pointer is null.
MRC_API void MR_NoiseSettings_Destroy(const MR_NoiseSettings *_this);

/// Destroys a heap-allocated array of `MR_NoiseSettings`. Does nothing if the pointer is null.
MRC_API void MR_NoiseSettings_DestroyArray(const MR_NoiseSettings *_this);

/// Generated from a method of class `MR::NoiseSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NoiseSettings *MR_NoiseSettings_AssignFromAnother(MR_NoiseSettings *_this, MR_PassBy _other_pass_by, MR_NoiseSettings *_other);

// Adds noise to the points, using a normal distribution
/// Generated from function `MR::addNoise`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `validVerts` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_addNoise_MR_VertCoords(MR_VertCoords *points, const MR_VertBitSet *validVerts, MR_PassBy settings_pass_by, MR_NoiseSettings *settings);

/// Generated from function `MR::addNoise`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_addNoise_MR_Mesh(MR_Mesh *mesh, const MR_VertBitSet *region, const MR_NoiseSettings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
