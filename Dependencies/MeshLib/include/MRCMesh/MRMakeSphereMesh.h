// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


/// Generated from class `MR::SphereParams`.
typedef struct MR_SphereParams MR_SphereParams;

/// Returns a pointer to a member variable of class `MR::SphereParams` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SphereParams_Get_radius(const MR_SphereParams *_this);

/// Modifies a member variable of class `MR::SphereParams` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SphereParams_Set_radius(MR_SphereParams *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::SphereParams` named `radius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SphereParams_GetMutable_radius(MR_SphereParams *_this);

/// Returns a pointer to a member variable of class `MR::SphereParams` named `numMeshVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SphereParams_Get_numMeshVertices(const MR_SphereParams *_this);

/// Modifies a member variable of class `MR::SphereParams` named `numMeshVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SphereParams_Set_numMeshVertices(MR_SphereParams *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::SphereParams` named `numMeshVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SphereParams_GetMutable_numMeshVertices(MR_SphereParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SphereParams_Destroy()` to free it when you're done using it.
MRC_API MR_SphereParams *MR_SphereParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SphereParams_DestroyArray()`.
/// Use `MR_SphereParams_OffsetMutablePtr()` and `MR_SphereParams_OffsetPtr()` to access the array elements.
MRC_API MR_SphereParams *MR_SphereParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SphereParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SphereParams_Destroy()` to free it when you're done using it.
MRC_API MR_SphereParams *MR_SphereParams_ConstructFrom(float radius, int32_t numMeshVertices);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SphereParams *MR_SphereParams_OffsetPtr(const MR_SphereParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SphereParams *MR_SphereParams_OffsetMutablePtr(MR_SphereParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SphereParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SphereParams_Destroy()` to free it when you're done using it.
MRC_API MR_SphereParams *MR_SphereParams_ConstructFromAnother(const MR_SphereParams *_other);

/// Destroys a heap-allocated instance of `MR_SphereParams`. Does nothing if the pointer is null.
MRC_API void MR_SphereParams_Destroy(const MR_SphereParams *_this);

/// Destroys a heap-allocated array of `MR_SphereParams`. Does nothing if the pointer is null.
MRC_API void MR_SphereParams_DestroyArray(const MR_SphereParams *_this);

/// Generated from a method of class `MR::SphereParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SphereParams *MR_SphereParams_AssignFromAnother(MR_SphereParams *_this, const MR_SphereParams *_other);

/// creates a mesh of sphere with irregular triangulation
/// Generated from function `MR::makeSphere`.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeSphere(const MR_SphereParams *params);

/// creates a mesh of sphere with regular triangulation (parallels and meridians)
/// Generated from function `MR::makeUVSphere`.
/// Parameter `radius` has a default argument: `1.`, pass a null pointer to use it.
/// Parameter `horisontalResolution` has a default argument: `16`, pass a null pointer to use it.
/// Parameter `verticalResolution` has a default argument: `16`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_makeUVSphere(const float *radius, const int32_t *horisontalResolution, const int32_t *verticalResolution);

#ifdef __cplusplus
} // extern "C"
#endif
