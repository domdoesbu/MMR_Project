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

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_expected_MR_FaceBitSet_std_string MR_expected_MR_FaceBitSet_std_string; // Defined in `#include <MRCMisc/expected_MR_FaceBitSet_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// Setting set for mesh self-intersections fix
/// Generated from class `MR::SelfIntersections::Settings`.
typedef struct MR_SelfIntersections_Settings MR_SelfIntersections_Settings;

/// Fix method
typedef int32_t MR_SelfIntersections_Settings_Method;
enum // MR_SelfIntersections_Settings_Method
{
    /// Relax mesh around self-intersections
    MR_SelfIntersections_Settings_Method_Relax = 0,
    /// Cut and re-fill regions around self-intersections (may fall back to `Relax`)
    MR_SelfIntersections_Settings_Method_CutAndFill = 1,
};

/// If true then count touching faces as self-intersections
/// Returns a pointer to a member variable of class `MR::SelfIntersections::Settings` named `touchIsIntersection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SelfIntersections_Settings_Get_touchIsIntersection(const MR_SelfIntersections_Settings *_this);

/// If true then count touching faces as self-intersections
/// Modifies a member variable of class `MR::SelfIntersections::Settings` named `touchIsIntersection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SelfIntersections_Settings_Set_touchIsIntersection(MR_SelfIntersections_Settings *_this, bool value);

/// If true then count touching faces as self-intersections
/// Returns a mutable pointer to a member variable of class `MR::SelfIntersections::Settings` named `touchIsIntersection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SelfIntersections_Settings_GetMutable_touchIsIntersection(MR_SelfIntersections_Settings *_this);

/// Returns a pointer to a member variable of class `MR::SelfIntersections::Settings` named `method`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SelfIntersections_Settings_Method *MR_SelfIntersections_Settings_Get_method(const MR_SelfIntersections_Settings *_this);

/// Modifies a member variable of class `MR::SelfIntersections::Settings` named `method`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SelfIntersections_Settings_Set_method(MR_SelfIntersections_Settings *_this, MR_SelfIntersections_Settings_Method value);

/// Returns a mutable pointer to a member variable of class `MR::SelfIntersections::Settings` named `method`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SelfIntersections_Settings_Method *MR_SelfIntersections_Settings_GetMutable_method(MR_SelfIntersections_Settings *_this);

/// Maximum relax iterations
/// Returns a pointer to a member variable of class `MR::SelfIntersections::Settings` named `relaxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SelfIntersections_Settings_Get_relaxIterations(const MR_SelfIntersections_Settings *_this);

/// Maximum relax iterations
/// Modifies a member variable of class `MR::SelfIntersections::Settings` named `relaxIterations`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SelfIntersections_Settings_Set_relaxIterations(MR_SelfIntersections_Settings *_this, int32_t value);

/// Maximum relax iterations
/// Returns a mutable pointer to a member variable of class `MR::SelfIntersections::Settings` named `relaxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SelfIntersections_Settings_GetMutable_relaxIterations(MR_SelfIntersections_Settings *_this);

/// Maximum expand count (edge steps from self-intersecting faces), should be > 0
/// Returns a pointer to a member variable of class `MR::SelfIntersections::Settings` named `maxExpand`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SelfIntersections_Settings_Get_maxExpand(const MR_SelfIntersections_Settings *_this);

/// Maximum expand count (edge steps from self-intersecting faces), should be > 0
/// Modifies a member variable of class `MR::SelfIntersections::Settings` named `maxExpand`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SelfIntersections_Settings_Set_maxExpand(MR_SelfIntersections_Settings *_this, int32_t value);

/// Maximum expand count (edge steps from self-intersecting faces), should be > 0
/// Returns a mutable pointer to a member variable of class `MR::SelfIntersections::Settings` named `maxExpand`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SelfIntersections_Settings_GetMutable_maxExpand(MR_SelfIntersections_Settings *_this);

/// Edge length for subdivision of holes covers (0.0f means auto)
/// FLT_MAX to disable subdivision
/// Returns a pointer to a member variable of class `MR::SelfIntersections::Settings` named `subdivideEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SelfIntersections_Settings_Get_subdivideEdgeLen(const MR_SelfIntersections_Settings *_this);

/// Edge length for subdivision of holes covers (0.0f means auto)
/// FLT_MAX to disable subdivision
/// Modifies a member variable of class `MR::SelfIntersections::Settings` named `subdivideEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SelfIntersections_Settings_Set_subdivideEdgeLen(MR_SelfIntersections_Settings *_this, float value);

/// Edge length for subdivision of holes covers (0.0f means auto)
/// FLT_MAX to disable subdivision
/// Returns a mutable pointer to a member variable of class `MR::SelfIntersections::Settings` named `subdivideEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SelfIntersections_Settings_GetMutable_subdivideEdgeLen(MR_SelfIntersections_Settings *_this);

/// Callback function
/// Returns a pointer to a member variable of class `MR::SelfIntersections::Settings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_SelfIntersections_Settings_Get_callback(const MR_SelfIntersections_Settings *_this);

/// Callback function
/// Modifies a member variable of class `MR::SelfIntersections::Settings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SelfIntersections_Settings_Set_callback(MR_SelfIntersections_Settings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Callback function
/// Returns a mutable pointer to a member variable of class `MR::SelfIntersections::Settings` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_SelfIntersections_Settings_GetMutable_callback(MR_SelfIntersections_Settings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SelfIntersections_Settings_Destroy()` to free it when you're done using it.
MRC_API MR_SelfIntersections_Settings *MR_SelfIntersections_Settings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SelfIntersections_Settings_DestroyArray()`.
/// Use `MR_SelfIntersections_Settings_OffsetMutablePtr()` and `MR_SelfIntersections_Settings_OffsetPtr()` to access the array elements.
MRC_API MR_SelfIntersections_Settings *MR_SelfIntersections_Settings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SelfIntersections::Settings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SelfIntersections_Settings_Destroy()` to free it when you're done using it.
MRC_API MR_SelfIntersections_Settings *MR_SelfIntersections_Settings_ConstructFrom(bool touchIsIntersection, MR_SelfIntersections_Settings_Method method, int32_t relaxIterations, int32_t maxExpand, float subdivideEdgeLen, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SelfIntersections_Settings *MR_SelfIntersections_Settings_OffsetPtr(const MR_SelfIntersections_Settings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SelfIntersections_Settings *MR_SelfIntersections_Settings_OffsetMutablePtr(MR_SelfIntersections_Settings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SelfIntersections::Settings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SelfIntersections_Settings_Destroy()` to free it when you're done using it.
MRC_API MR_SelfIntersections_Settings *MR_SelfIntersections_Settings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SelfIntersections_Settings *_other);

/// Destroys a heap-allocated instance of `MR_SelfIntersections_Settings`. Does nothing if the pointer is null.
MRC_API void MR_SelfIntersections_Settings_Destroy(const MR_SelfIntersections_Settings *_this);

/// Destroys a heap-allocated array of `MR_SelfIntersections_Settings`. Does nothing if the pointer is null.
MRC_API void MR_SelfIntersections_Settings_DestroyArray(const MR_SelfIntersections_Settings *_this);

/// Generated from a method of class `MR::SelfIntersections::Settings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SelfIntersections_Settings *MR_SelfIntersections_Settings_AssignFromAnother(MR_SelfIntersections_Settings *_this, MR_PassBy _other_pass_by, MR_SelfIntersections_Settings *_other);

/// Find all self-intersections faces component-wise
/// Generated from function `MR::SelfIntersections::getFaces`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `touchIsIntersection` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_FaceBitSet_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_FaceBitSet_std_string *MR_SelfIntersections_getFaces(const MR_Mesh *mesh, const bool *touchIsIntersection, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Finds and fixes self-intersections per component:
/// Generated from function `MR::SelfIntersections::fix`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_SelfIntersections_fix(MR_Mesh *mesh, const MR_SelfIntersections_Settings *settings);

#ifdef __cplusplus
} // extern "C"
#endif
