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

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.


/// structure with parameters for `compensateRadius` function
/// Generated from class `MR::CompensateRadiusParams`.
typedef struct MR_CompensateRadiusParams MR_CompensateRadiusParams;

/// Z direction of milling tool
/// Returns a pointer to a member variable of class `MR::CompensateRadiusParams` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_CompensateRadiusParams_Get_direction(const MR_CompensateRadiusParams *_this);

/// Z direction of milling tool
/// Modifies a member variable of class `MR::CompensateRadiusParams` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CompensateRadiusParams_Set_direction(MR_CompensateRadiusParams *_this, MR_Vector3f value);

/// Z direction of milling tool
/// Returns a mutable pointer to a member variable of class `MR::CompensateRadiusParams` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_CompensateRadiusParams_GetMutable_direction(MR_CompensateRadiusParams *_this);

///  radius of spherical tool
/// Returns a pointer to a member variable of class `MR::CompensateRadiusParams` named `toolRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_CompensateRadiusParams_Get_toolRadius(const MR_CompensateRadiusParams *_this);

///  radius of spherical tool
/// Modifies a member variable of class `MR::CompensateRadiusParams` named `toolRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CompensateRadiusParams_Set_toolRadius(MR_CompensateRadiusParams *_this, float value);

///  radius of spherical tool
/// Returns a mutable pointer to a member variable of class `MR::CompensateRadiusParams` named `toolRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_CompensateRadiusParams_GetMutable_toolRadius(MR_CompensateRadiusParams *_this);

/// region of the mesh that will be compensated
/// it should not contain closed components
/// also please note that boundaries of the region are fixed
/// Returns a pointer to a member variable of class `MR::CompensateRadiusParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *const *MR_CompensateRadiusParams_Get_region(const MR_CompensateRadiusParams *_this);

/// region of the mesh that will be compensated
/// it should not contain closed components
/// also please note that boundaries of the region are fixed
/// Modifies a member variable of class `MR::CompensateRadiusParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CompensateRadiusParams_Set_region(MR_CompensateRadiusParams *_this, const MR_FaceBitSet *value);

/// region of the mesh that will be compensated
/// it should not contain closed components
/// also please note that boundaries of the region are fixed
/// Returns a mutable pointer to a member variable of class `MR::CompensateRadiusParams` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet **MR_CompensateRadiusParams_GetMutable_region(MR_CompensateRadiusParams *_this);

/// maximum iteration of applying algorithm (each iteration improves result a little bit)
/// Returns a pointer to a member variable of class `MR::CompensateRadiusParams` named `maxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_CompensateRadiusParams_Get_maxIterations(const MR_CompensateRadiusParams *_this);

/// maximum iteration of applying algorithm (each iteration improves result a little bit)
/// Modifies a member variable of class `MR::CompensateRadiusParams` named `maxIterations`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CompensateRadiusParams_Set_maxIterations(MR_CompensateRadiusParams *_this, int32_t value);

/// maximum iteration of applying algorithm (each iteration improves result a little bit)
/// Returns a mutable pointer to a member variable of class `MR::CompensateRadiusParams` named `maxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_CompensateRadiusParams_GetMutable_maxIterations(MR_CompensateRadiusParams *_this);

/// how many hops to expand around each moved vertex for relaxation
/// Returns a pointer to a member variable of class `MR::CompensateRadiusParams` named `relaxExpansion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_CompensateRadiusParams_Get_relaxExpansion(const MR_CompensateRadiusParams *_this);

/// how many hops to expand around each moved vertex for relaxation
/// Modifies a member variable of class `MR::CompensateRadiusParams` named `relaxExpansion`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CompensateRadiusParams_Set_relaxExpansion(MR_CompensateRadiusParams *_this, int32_t value);

/// how many hops to expand around each moved vertex for relaxation
/// Returns a mutable pointer to a member variable of class `MR::CompensateRadiusParams` named `relaxExpansion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_CompensateRadiusParams_GetMutable_relaxExpansion(MR_CompensateRadiusParams *_this);

/// how many iterations of relax is applied on each compensation iteration
/// Returns a pointer to a member variable of class `MR::CompensateRadiusParams` named `relaxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_CompensateRadiusParams_Get_relaxIterations(const MR_CompensateRadiusParams *_this);

/// how many iterations of relax is applied on each compensation iteration
/// Modifies a member variable of class `MR::CompensateRadiusParams` named `relaxIterations`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CompensateRadiusParams_Set_relaxIterations(MR_CompensateRadiusParams *_this, int32_t value);

/// how many iterations of relax is applied on each compensation iteration
/// Returns a mutable pointer to a member variable of class `MR::CompensateRadiusParams` named `relaxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_CompensateRadiusParams_GetMutable_relaxIterations(MR_CompensateRadiusParams *_this);

/// force of relaxations on each compensation iteration
/// Returns a pointer to a member variable of class `MR::CompensateRadiusParams` named `relaxForce`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_CompensateRadiusParams_Get_relaxForce(const MR_CompensateRadiusParams *_this);

/// force of relaxations on each compensation iteration
/// Modifies a member variable of class `MR::CompensateRadiusParams` named `relaxForce`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CompensateRadiusParams_Set_relaxForce(MR_CompensateRadiusParams *_this, float value);

/// force of relaxations on each compensation iteration
/// Returns a mutable pointer to a member variable of class `MR::CompensateRadiusParams` named `relaxForce`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_CompensateRadiusParams_GetMutable_relaxForce(MR_CompensateRadiusParams *_this);

/// Returns a pointer to a member variable of class `MR::CompensateRadiusParams` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_CompensateRadiusParams_Get_callback(const MR_CompensateRadiusParams *_this);

/// Modifies a member variable of class `MR::CompensateRadiusParams` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CompensateRadiusParams_Set_callback(MR_CompensateRadiusParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::CompensateRadiusParams` named `callback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_CompensateRadiusParams_GetMutable_callback(MR_CompensateRadiusParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CompensateRadiusParams_Destroy()` to free it when you're done using it.
MRC_API MR_CompensateRadiusParams *MR_CompensateRadiusParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CompensateRadiusParams_DestroyArray()`.
/// Use `MR_CompensateRadiusParams_OffsetMutablePtr()` and `MR_CompensateRadiusParams_OffsetPtr()` to access the array elements.
MRC_API MR_CompensateRadiusParams *MR_CompensateRadiusParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CompensateRadiusParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CompensateRadiusParams_Destroy()` to free it when you're done using it.
MRC_API MR_CompensateRadiusParams *MR_CompensateRadiusParams_ConstructFrom(MR_Vector3f direction, float toolRadius, const MR_FaceBitSet *region, int32_t maxIterations, int32_t relaxExpansion, int32_t relaxIterations, float relaxForce, MR_PassBy callback_pass_by, MR_std_function_bool_from_float *callback);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CompensateRadiusParams *MR_CompensateRadiusParams_OffsetPtr(const MR_CompensateRadiusParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CompensateRadiusParams *MR_CompensateRadiusParams_OffsetMutablePtr(MR_CompensateRadiusParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CompensateRadiusParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CompensateRadiusParams_Destroy()` to free it when you're done using it.
MRC_API MR_CompensateRadiusParams *MR_CompensateRadiusParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_CompensateRadiusParams *_other);

/// Destroys a heap-allocated instance of `MR_CompensateRadiusParams`. Does nothing if the pointer is null.
MRC_API void MR_CompensateRadiusParams_Destroy(const MR_CompensateRadiusParams *_this);

/// Destroys a heap-allocated array of `MR_CompensateRadiusParams`. Does nothing if the pointer is null.
MRC_API void MR_CompensateRadiusParams_DestroyArray(const MR_CompensateRadiusParams *_this);

/// Generated from a method of class `MR::CompensateRadiusParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CompensateRadiusParams *MR_CompensateRadiusParams_AssignFromAnother(MR_CompensateRadiusParams *_this, MR_PassBy _other_pass_by, MR_CompensateRadiusParams *_other);

/// compensate spherical milling tool radius in given mesh region making it possible to mill it
/// note that tool milling outer surface of the mesh
/// also please note that boundaries of the region are fixed
/// Generated from function `MR::compensateRadius`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_compensateRadius(MR_Mesh *mesh, const MR_CompensateRadiusParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
