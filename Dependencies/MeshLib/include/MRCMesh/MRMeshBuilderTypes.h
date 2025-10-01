// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>
#include <MRCMisc/std_array_MR_VertId_3.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// mesh triangle represented by its three vertices and by its face ID
/// Generated from class `MR::MeshBuilder::Triangle`.
typedef struct MR_MeshBuilder_Triangle MR_MeshBuilder_Triangle;

/// Generated from class `MR::MeshBuilder::BuildSettings`.
typedef struct MR_MeshBuilder_BuildSettings MR_MeshBuilder_BuildSettings;

// each face is surrounded by a closed contour of vertices [fistVertex, lastVertex)
/// Generated from class `MR::MeshBuilder::VertSpan`.
typedef struct MR_MeshBuilder_VertSpan MR_MeshBuilder_VertSpan;

/// Returns a pointer to a member variable of class `MR::MeshBuilder::Triangle` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_array_MR_VertId_3 *MR_MeshBuilder_Triangle_Get_v(const MR_MeshBuilder_Triangle *_this);

/// Modifies a member variable of class `MR::MeshBuilder::Triangle` named `v`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_Triangle_Set_v(MR_MeshBuilder_Triangle *_this, MR_std_array_MR_VertId_3 value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::Triangle` named `v`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_array_MR_VertId_3 *MR_MeshBuilder_Triangle_GetMutable_v(MR_MeshBuilder_Triangle *_this);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::Triangle` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceId *MR_MeshBuilder_Triangle_Get_f(const MR_MeshBuilder_Triangle *_this);

/// Modifies a member variable of class `MR::MeshBuilder::Triangle` named `f`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_Triangle_Set_f(MR_MeshBuilder_Triangle *_this, MR_FaceId value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::Triangle` named `f`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_MeshBuilder_Triangle_GetMutable_f(MR_MeshBuilder_Triangle *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_Triangle_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_Triangle *MR_MeshBuilder_Triangle_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshBuilder_Triangle_DestroyArray()`.
/// Use `MR_MeshBuilder_Triangle_OffsetMutablePtr()` and `MR_MeshBuilder_Triangle_OffsetPtr()` to access the array elements.
MRC_API MR_MeshBuilder_Triangle *MR_MeshBuilder_Triangle_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshBuilder_Triangle *MR_MeshBuilder_Triangle_OffsetPtr(const MR_MeshBuilder_Triangle *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshBuilder_Triangle *MR_MeshBuilder_Triangle_OffsetMutablePtr(MR_MeshBuilder_Triangle *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshBuilder::Triangle`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_Triangle_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_Triangle *MR_MeshBuilder_Triangle_ConstructFromAnother(const MR_MeshBuilder_Triangle *_other);

/// Generated from a constructor of class `MR::MeshBuilder::Triangle`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_Triangle_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_Triangle *MR_MeshBuilder_Triangle_Construct(MR_VertId a, MR_VertId b, MR_VertId c, MR_FaceId f);

/// Destroys a heap-allocated instance of `MR_MeshBuilder_Triangle`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_Triangle_Destroy(const MR_MeshBuilder_Triangle *_this);

/// Destroys a heap-allocated array of `MR_MeshBuilder_Triangle`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_Triangle_DestroyArray(const MR_MeshBuilder_Triangle *_this);

/// Generated from a method of class `MR::MeshBuilder::Triangle` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_Triangle *MR_MeshBuilder_Triangle_AssignFromAnother(MR_MeshBuilder_Triangle *_this, const MR_MeshBuilder_Triangle *_other);

/// Generated from a method of class `MR::MeshBuilder::Triangle` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API bool MR_equal_MR_MeshBuilder_Triangle(const MR_MeshBuilder_Triangle *_this, const MR_MeshBuilder_Triangle *other);

/// if region is given then on input it contains the faces to be added, and on output the faces failed to be added
/// Returns a pointer to a member variable of class `MR::MeshBuilder::BuildSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_MeshBuilder_BuildSettings_Get_region(const MR_MeshBuilder_BuildSettings *_this);

/// if region is given then on input it contains the faces to be added, and on output the faces failed to be added
/// Modifies a member variable of class `MR::MeshBuilder::BuildSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_BuildSettings_Set_region(MR_MeshBuilder_BuildSettings *_this, MR_FaceBitSet *value);

/// if region is given then on input it contains the faces to be added, and on output the faces failed to be added
/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::BuildSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_MeshBuilder_BuildSettings_GetMutable_region(MR_MeshBuilder_BuildSettings *_this);

/// this value to be added to every faceId before its inclusion in the topology
/// Returns a pointer to a member variable of class `MR::MeshBuilder::BuildSettings` named `shiftFaceId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MeshBuilder_BuildSettings_Get_shiftFaceId(const MR_MeshBuilder_BuildSettings *_this);

/// this value to be added to every faceId before its inclusion in the topology
/// Modifies a member variable of class `MR::MeshBuilder::BuildSettings` named `shiftFaceId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_BuildSettings_Set_shiftFaceId(MR_MeshBuilder_BuildSettings *_this, int32_t value);

/// this value to be added to every faceId before its inclusion in the topology
/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::BuildSettings` named `shiftFaceId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MeshBuilder_BuildSettings_GetMutable_shiftFaceId(MR_MeshBuilder_BuildSettings *_this);

/// whether to permit non-manifold edges in the resulting topology
/// Returns a pointer to a member variable of class `MR::MeshBuilder::BuildSettings` named `allowNonManifoldEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_MeshBuilder_BuildSettings_Get_allowNonManifoldEdge(const MR_MeshBuilder_BuildSettings *_this);

/// whether to permit non-manifold edges in the resulting topology
/// Modifies a member variable of class `MR::MeshBuilder::BuildSettings` named `allowNonManifoldEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_BuildSettings_Set_allowNonManifoldEdge(MR_MeshBuilder_BuildSettings *_this, bool value);

/// whether to permit non-manifold edges in the resulting topology
/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::BuildSettings` named `allowNonManifoldEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_MeshBuilder_BuildSettings_GetMutable_allowNonManifoldEdge(MR_MeshBuilder_BuildSettings *_this);

/// optional output: counter of skipped faces during mesh creation
/// Returns a pointer to a member variable of class `MR::MeshBuilder::BuildSettings` named `skippedFaceCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *const *MR_MeshBuilder_BuildSettings_Get_skippedFaceCount(const MR_MeshBuilder_BuildSettings *_this);

/// optional output: counter of skipped faces during mesh creation
/// Modifies a member variable of class `MR::MeshBuilder::BuildSettings` named `skippedFaceCount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_BuildSettings_Set_skippedFaceCount(MR_MeshBuilder_BuildSettings *_this, int32_t *value);

/// optional output: counter of skipped faces during mesh creation
/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::BuildSettings` named `skippedFaceCount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t **MR_MeshBuilder_BuildSettings_GetMutable_skippedFaceCount(MR_MeshBuilder_BuildSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_BuildSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_BuildSettings *MR_MeshBuilder_BuildSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshBuilder_BuildSettings_DestroyArray()`.
/// Use `MR_MeshBuilder_BuildSettings_OffsetMutablePtr()` and `MR_MeshBuilder_BuildSettings_OffsetPtr()` to access the array elements.
MRC_API MR_MeshBuilder_BuildSettings *MR_MeshBuilder_BuildSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshBuilder::BuildSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_BuildSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_BuildSettings *MR_MeshBuilder_BuildSettings_ConstructFrom(MR_FaceBitSet *region, int32_t shiftFaceId, bool allowNonManifoldEdge, int32_t *skippedFaceCount);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshBuilder_BuildSettings *MR_MeshBuilder_BuildSettings_OffsetPtr(const MR_MeshBuilder_BuildSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshBuilder_BuildSettings *MR_MeshBuilder_BuildSettings_OffsetMutablePtr(MR_MeshBuilder_BuildSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshBuilder::BuildSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_BuildSettings_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_BuildSettings *MR_MeshBuilder_BuildSettings_ConstructFromAnother(const MR_MeshBuilder_BuildSettings *_other);

/// Destroys a heap-allocated instance of `MR_MeshBuilder_BuildSettings`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_BuildSettings_Destroy(const MR_MeshBuilder_BuildSettings *_this);

/// Destroys a heap-allocated array of `MR_MeshBuilder_BuildSettings`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_BuildSettings_DestroyArray(const MR_MeshBuilder_BuildSettings *_this);

/// Generated from a method of class `MR::MeshBuilder::BuildSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_BuildSettings *MR_MeshBuilder_BuildSettings_AssignFromAnother(MR_MeshBuilder_BuildSettings *_this, const MR_MeshBuilder_BuildSettings *_other);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::VertSpan` named `firstVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MeshBuilder_VertSpan_Get_firstVertex(const MR_MeshBuilder_VertSpan *_this);

/// Modifies a member variable of class `MR::MeshBuilder::VertSpan` named `firstVertex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_VertSpan_Set_firstVertex(MR_MeshBuilder_VertSpan *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::VertSpan` named `firstVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MeshBuilder_VertSpan_GetMutable_firstVertex(MR_MeshBuilder_VertSpan *_this);

/// Returns a pointer to a member variable of class `MR::MeshBuilder::VertSpan` named `lastVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_MeshBuilder_VertSpan_Get_lastVertex(const MR_MeshBuilder_VertSpan *_this);

/// Modifies a member variable of class `MR::MeshBuilder::VertSpan` named `lastVertex`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_VertSpan_Set_lastVertex(MR_MeshBuilder_VertSpan *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::MeshBuilder::VertSpan` named `lastVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_MeshBuilder_VertSpan_GetMutable_lastVertex(MR_MeshBuilder_VertSpan *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_VertSpan_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_VertSpan *MR_MeshBuilder_VertSpan_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshBuilder_VertSpan_DestroyArray()`.
/// Use `MR_MeshBuilder_VertSpan_OffsetMutablePtr()` and `MR_MeshBuilder_VertSpan_OffsetPtr()` to access the array elements.
MRC_API MR_MeshBuilder_VertSpan *MR_MeshBuilder_VertSpan_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshBuilder::VertSpan` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_VertSpan_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_VertSpan *MR_MeshBuilder_VertSpan_ConstructFrom(int32_t firstVertex, int32_t lastVertex);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshBuilder_VertSpan *MR_MeshBuilder_VertSpan_OffsetPtr(const MR_MeshBuilder_VertSpan *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshBuilder_VertSpan *MR_MeshBuilder_VertSpan_OffsetMutablePtr(MR_MeshBuilder_VertSpan *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshBuilder::VertSpan`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_VertSpan_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_VertSpan *MR_MeshBuilder_VertSpan_ConstructFromAnother(const MR_MeshBuilder_VertSpan *_other);

/// Destroys a heap-allocated instance of `MR_MeshBuilder_VertSpan`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_VertSpan_Destroy(const MR_MeshBuilder_VertSpan *_this);

/// Destroys a heap-allocated array of `MR_MeshBuilder_VertSpan`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_VertSpan_DestroyArray(const MR_MeshBuilder_VertSpan *_this);

/// Generated from a method of class `MR::MeshBuilder::VertSpan` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_VertSpan *MR_MeshBuilder_VertSpan_AssignFromAnother(MR_MeshBuilder_VertSpan *_this, const MR_MeshBuilder_VertSpan *_other);

#ifdef __cplusplus
} // extern "C"
#endif
