// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif


/// a pair of faces
/// Generated from class `MR::FaceFace`.
typedef struct MR_FaceFace MR_FaceFace;

/// a pair of undirected edges
/// Generated from class `MR::UndirectedEdgeUndirectedEdge`.
typedef struct MR_UndirectedEdgeUndirectedEdge MR_UndirectedEdgeUndirectedEdge;

/// Returns a pointer to a member variable of class `MR::FaceFace` named `aFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceId *MR_FaceFace_Get_aFace(const MR_FaceFace *_this);

/// Modifies a member variable of class `MR::FaceFace` named `aFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceFace_Set_aFace(MR_FaceFace *_this, MR_FaceId value);

/// Returns a mutable pointer to a member variable of class `MR::FaceFace` named `aFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_FaceFace_GetMutable_aFace(MR_FaceFace *_this);

/// Returns a pointer to a member variable of class `MR::FaceFace` named `bFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceId *MR_FaceFace_Get_bFace(const MR_FaceFace *_this);

/// Modifies a member variable of class `MR::FaceFace` named `bFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceFace_Set_bFace(MR_FaceFace *_this, MR_FaceId value);

/// Returns a mutable pointer to a member variable of class `MR::FaceFace` named `bFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_FaceFace_GetMutable_bFace(MR_FaceFace *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceFace_Destroy()` to free it when you're done using it.
MRC_API MR_FaceFace *MR_FaceFace_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FaceFace_DestroyArray()`.
/// Use `MR_FaceFace_OffsetMutablePtr()` and `MR_FaceFace_OffsetPtr()` to access the array elements.
MRC_API MR_FaceFace *MR_FaceFace_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FaceFace *MR_FaceFace_OffsetPtr(const MR_FaceFace *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FaceFace *MR_FaceFace_OffsetMutablePtr(MR_FaceFace *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FaceFace`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceFace_Destroy()` to free it when you're done using it.
MRC_API MR_FaceFace *MR_FaceFace_ConstructFromAnother(const MR_FaceFace *_other);

/// Generated from a constructor of class `MR::FaceFace`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceFace_Destroy()` to free it when you're done using it.
MRC_API MR_FaceFace *MR_FaceFace_Construct(MR_FaceId a, MR_FaceId b);

/// Destroys a heap-allocated instance of `MR_FaceFace`. Does nothing if the pointer is null.
MRC_API void MR_FaceFace_Destroy(const MR_FaceFace *_this);

/// Destroys a heap-allocated array of `MR_FaceFace`. Does nothing if the pointer is null.
MRC_API void MR_FaceFace_DestroyArray(const MR_FaceFace *_this);

/// Generated from a method of class `MR::FaceFace` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceFace *MR_FaceFace_AssignFromAnother(MR_FaceFace *_this, const MR_FaceFace *_other);

/// Returns a pointer to a member variable of class `MR::UndirectedEdgeUndirectedEdge` named `aUndirEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeId *MR_UndirectedEdgeUndirectedEdge_Get_aUndirEdge(const MR_UndirectedEdgeUndirectedEdge *_this);

/// Modifies a member variable of class `MR::UndirectedEdgeUndirectedEdge` named `aUndirEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UndirectedEdgeUndirectedEdge_Set_aUndirEdge(MR_UndirectedEdgeUndirectedEdge *_this, MR_UndirectedEdgeId value);

/// Returns a mutable pointer to a member variable of class `MR::UndirectedEdgeUndirectedEdge` named `aUndirEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_UndirectedEdgeUndirectedEdge_GetMutable_aUndirEdge(MR_UndirectedEdgeUndirectedEdge *_this);

/// Returns a pointer to a member variable of class `MR::UndirectedEdgeUndirectedEdge` named `bUndirEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeId *MR_UndirectedEdgeUndirectedEdge_Get_bUndirEdge(const MR_UndirectedEdgeUndirectedEdge *_this);

/// Modifies a member variable of class `MR::UndirectedEdgeUndirectedEdge` named `bUndirEdge`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UndirectedEdgeUndirectedEdge_Set_bUndirEdge(MR_UndirectedEdgeUndirectedEdge *_this, MR_UndirectedEdgeId value);

/// Returns a mutable pointer to a member variable of class `MR::UndirectedEdgeUndirectedEdge` named `bUndirEdge`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeId *MR_UndirectedEdgeUndirectedEdge_GetMutable_bUndirEdge(MR_UndirectedEdgeUndirectedEdge *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeUndirectedEdge_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeUndirectedEdge *MR_UndirectedEdgeUndirectedEdge_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UndirectedEdgeUndirectedEdge_DestroyArray()`.
/// Use `MR_UndirectedEdgeUndirectedEdge_OffsetMutablePtr()` and `MR_UndirectedEdgeUndirectedEdge_OffsetPtr()` to access the array elements.
MRC_API MR_UndirectedEdgeUndirectedEdge *MR_UndirectedEdgeUndirectedEdge_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UndirectedEdgeUndirectedEdge *MR_UndirectedEdgeUndirectedEdge_OffsetPtr(const MR_UndirectedEdgeUndirectedEdge *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UndirectedEdgeUndirectedEdge *MR_UndirectedEdgeUndirectedEdge_OffsetMutablePtr(MR_UndirectedEdgeUndirectedEdge *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UndirectedEdgeUndirectedEdge`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeUndirectedEdge_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeUndirectedEdge *MR_UndirectedEdgeUndirectedEdge_ConstructFromAnother(const MR_UndirectedEdgeUndirectedEdge *_other);

/// Generated from a constructor of class `MR::UndirectedEdgeUndirectedEdge`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeUndirectedEdge_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeUndirectedEdge *MR_UndirectedEdgeUndirectedEdge_Construct(MR_UndirectedEdgeId a, MR_UndirectedEdgeId b);

/// Destroys a heap-allocated instance of `MR_UndirectedEdgeUndirectedEdge`. Does nothing if the pointer is null.
MRC_API void MR_UndirectedEdgeUndirectedEdge_Destroy(const MR_UndirectedEdgeUndirectedEdge *_this);

/// Destroys a heap-allocated array of `MR_UndirectedEdgeUndirectedEdge`. Does nothing if the pointer is null.
MRC_API void MR_UndirectedEdgeUndirectedEdge_DestroyArray(const MR_UndirectedEdgeUndirectedEdge *_this);

/// Generated from a method of class `MR::UndirectedEdgeUndirectedEdge` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeUndirectedEdge *MR_UndirectedEdgeUndirectedEdge_AssignFromAnother(MR_UndirectedEdgeUndirectedEdge *_this, const MR_UndirectedEdgeUndirectedEdge *_other);

#ifdef __cplusplus
} // extern "C"
#endif
