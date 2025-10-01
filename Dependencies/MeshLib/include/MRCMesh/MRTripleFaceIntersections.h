// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_std_vector_MR_FaceFaceFace MR_std_vector_MR_FaceFaceFace; // Defined in `#include <MRCMisc/std_vector_MR_FaceFaceFace.h>`.
typedef struct MR_std_vector_std_vector_MR_VarEdgeTri MR_std_vector_std_vector_MR_VarEdgeTri; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_VarEdgeTri.h>`.


/// a triple of faces
/// Generated from class `MR::FaceFaceFace`.
typedef struct MR_FaceFaceFace MR_FaceFaceFace;

/// Returns a pointer to a member variable of class `MR::FaceFaceFace` named `aFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceId *MR_FaceFaceFace_Get_aFace(const MR_FaceFaceFace *_this);

/// Modifies a member variable of class `MR::FaceFaceFace` named `aFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceFaceFace_Set_aFace(MR_FaceFaceFace *_this, MR_FaceId value);

/// Returns a mutable pointer to a member variable of class `MR::FaceFaceFace` named `aFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_FaceFaceFace_GetMutable_aFace(MR_FaceFaceFace *_this);

/// Returns a pointer to a member variable of class `MR::FaceFaceFace` named `bFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceId *MR_FaceFaceFace_Get_bFace(const MR_FaceFaceFace *_this);

/// Modifies a member variable of class `MR::FaceFaceFace` named `bFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceFaceFace_Set_bFace(MR_FaceFaceFace *_this, MR_FaceId value);

/// Returns a mutable pointer to a member variable of class `MR::FaceFaceFace` named `bFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_FaceFaceFace_GetMutable_bFace(MR_FaceFaceFace *_this);

/// Returns a pointer to a member variable of class `MR::FaceFaceFace` named `cFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceId *MR_FaceFaceFace_Get_cFace(const MR_FaceFaceFace *_this);

/// Modifies a member variable of class `MR::FaceFaceFace` named `cFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FaceFaceFace_Set_cFace(MR_FaceFaceFace *_this, MR_FaceId value);

/// Returns a mutable pointer to a member variable of class `MR::FaceFaceFace` named `cFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceId *MR_FaceFaceFace_GetMutable_cFace(MR_FaceFaceFace *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceFaceFace_Destroy()` to free it when you're done using it.
MRC_API MR_FaceFaceFace *MR_FaceFaceFace_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FaceFaceFace_DestroyArray()`.
/// Use `MR_FaceFaceFace_OffsetMutablePtr()` and `MR_FaceFaceFace_OffsetPtr()` to access the array elements.
MRC_API MR_FaceFaceFace *MR_FaceFaceFace_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FaceFaceFace *MR_FaceFaceFace_OffsetPtr(const MR_FaceFaceFace *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FaceFaceFace *MR_FaceFaceFace_OffsetMutablePtr(MR_FaceFaceFace *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FaceFaceFace`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceFaceFace_Destroy()` to free it when you're done using it.
MRC_API MR_FaceFaceFace *MR_FaceFaceFace_ConstructFromAnother(const MR_FaceFaceFace *_other);

/// Generated from a constructor of class `MR::FaceFaceFace`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceFaceFace_Destroy()` to free it when you're done using it.
MRC_API MR_FaceFaceFace *MR_FaceFaceFace_Construct(MR_FaceId a, MR_FaceId b, MR_FaceId c);

/// Destroys a heap-allocated instance of `MR_FaceFaceFace`. Does nothing if the pointer is null.
MRC_API void MR_FaceFaceFace_Destroy(const MR_FaceFaceFace *_this);

/// Destroys a heap-allocated array of `MR_FaceFaceFace`. Does nothing if the pointer is null.
MRC_API void MR_FaceFaceFace_DestroyArray(const MR_FaceFaceFace *_this);

/// Generated from a method of class `MR::FaceFaceFace` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceFaceFace *MR_FaceFaceFace_AssignFromAnother(MR_FaceFaceFace *_this, const MR_FaceFaceFace *_other);

/// given all self-intersection contours on a mesh, finds all intersecting triangle triples (every two triangles from a triple intersect);
/// please note that not all such triples will have a common point
/// Generated from function `MR::findTripleFaceIntersections`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `selfContours` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_FaceFaceFace_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_FaceFaceFace *MR_findTripleFaceIntersections(const MR_MeshTopology *topology, const MR_std_vector_std_vector_MR_VarEdgeTri *selfContours);

#ifdef __cplusplus
} // extern "C"
#endif
