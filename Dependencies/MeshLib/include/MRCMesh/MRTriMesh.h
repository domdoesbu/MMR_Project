// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Triangulation MR_Triangulation; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.


/// very simple structure for storing mesh of triangles only,
/// without easy navigation between neighbor elements as in Mesh
/// Generated from class `MR::TriMesh`.
typedef struct MR_TriMesh MR_TriMesh;

/// Returns a pointer to a member variable of class `MR::TriMesh` named `tris`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Triangulation *MR_TriMesh_Get_tris(const MR_TriMesh *_this);

/// Modifies a member variable of class `MR::TriMesh` named `tris`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriMesh_Set_tris(MR_TriMesh *_this, MR_PassBy value_pass_by, MR_Triangulation *value);

/// Returns a mutable pointer to a member variable of class `MR::TriMesh` named `tris`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Triangulation *MR_TriMesh_GetMutable_tris(MR_TriMesh *_this);

/// Returns a pointer to a member variable of class `MR::TriMesh` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_TriMesh_Get_points(const MR_TriMesh *_this);

/// Modifies a member variable of class `MR::TriMesh` named `points`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriMesh_Set_points(MR_TriMesh *_this, MR_PassBy value_pass_by, MR_VertCoords *value);

/// Returns a mutable pointer to a member variable of class `MR::TriMesh` named `points`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords *MR_TriMesh_GetMutable_points(MR_TriMesh *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriMesh_Destroy()` to free it when you're done using it.
MRC_API MR_TriMesh *MR_TriMesh_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TriMesh_DestroyArray()`.
/// Use `MR_TriMesh_OffsetMutablePtr()` and `MR_TriMesh_OffsetPtr()` to access the array elements.
MRC_API MR_TriMesh *MR_TriMesh_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TriMesh` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriMesh_Destroy()` to free it when you're done using it.
MRC_API MR_TriMesh *MR_TriMesh_ConstructFrom(MR_PassBy tris_pass_by, MR_Triangulation *tris, MR_PassBy points_pass_by, MR_VertCoords *points);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TriMesh *MR_TriMesh_OffsetPtr(const MR_TriMesh *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TriMesh *MR_TriMesh_OffsetMutablePtr(MR_TriMesh *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TriMesh`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriMesh_Destroy()` to free it when you're done using it.
MRC_API MR_TriMesh *MR_TriMesh_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TriMesh *_other);

/// Destroys a heap-allocated instance of `MR_TriMesh`. Does nothing if the pointer is null.
MRC_API void MR_TriMesh_Destroy(const MR_TriMesh *_this);

/// Destroys a heap-allocated array of `MR_TriMesh`. Does nothing if the pointer is null.
MRC_API void MR_TriMesh_DestroyArray(const MR_TriMesh *_this);

/// Generated from a method of class `MR::TriMesh` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriMesh *MR_TriMesh_AssignFromAnother(MR_TriMesh *_this, MR_PassBy _other_pass_by, MR_TriMesh *_other);

#ifdef __cplusplus
} // extern "C"
#endif
