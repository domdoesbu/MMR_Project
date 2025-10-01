// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_PointOnFace MR_PointOnFace; // Defined in `#include <MRCMesh/MRPointOnFace.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_MR_FaceId MR_std_function_bool_from_MR_FaceId; // Defined in `#include <MRCMisc/std_function_bool_from_MR_FaceId.h>`.
typedef struct MR_std_function_bool_from_MR_VertId MR_std_function_bool_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_bool_from_MR_VertId.h>`.


/// Generated from class `MR::EnumNeihbourVertices`.
typedef struct MR_EnumNeihbourVertices MR_EnumNeihbourVertices;

/// Generated from class `MR::EnumNeihbourFaces`.
typedef struct MR_EnumNeihbourFaces MR_EnumNeihbourFaces;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EnumNeihbourVertices_Destroy()` to free it when you're done using it.
MRC_API MR_EnumNeihbourVertices *MR_EnumNeihbourVertices_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EnumNeihbourVertices_DestroyArray()`.
/// Use `MR_EnumNeihbourVertices_OffsetMutablePtr()` and `MR_EnumNeihbourVertices_OffsetPtr()` to access the array elements.
MRC_API MR_EnumNeihbourVertices *MR_EnumNeihbourVertices_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EnumNeihbourVertices *MR_EnumNeihbourVertices_OffsetPtr(const MR_EnumNeihbourVertices *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EnumNeihbourVertices *MR_EnumNeihbourVertices_OffsetMutablePtr(MR_EnumNeihbourVertices *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EnumNeihbourVertices`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EnumNeihbourVertices_Destroy()` to free it when you're done using it.
MRC_API MR_EnumNeihbourVertices *MR_EnumNeihbourVertices_ConstructFromAnother(MR_PassBy _other_pass_by, MR_EnumNeihbourVertices *_other);

/// Destroys a heap-allocated instance of `MR_EnumNeihbourVertices`. Does nothing if the pointer is null.
MRC_API void MR_EnumNeihbourVertices_Destroy(const MR_EnumNeihbourVertices *_this);

/// Destroys a heap-allocated array of `MR_EnumNeihbourVertices`. Does nothing if the pointer is null.
MRC_API void MR_EnumNeihbourVertices_DestroyArray(const MR_EnumNeihbourVertices *_this);

/// Generated from a method of class `MR::EnumNeihbourVertices` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EnumNeihbourVertices *MR_EnumNeihbourVertices_AssignFromAnother(MR_EnumNeihbourVertices *_this, MR_PassBy _other_pass_by, MR_EnumNeihbourVertices *_other);

/// invokes given predicate for vertices starting from \param start,
/// and continuing to all immediate neighbours in depth-first order until the predicate returns false
/// Generated from a method of class `MR::EnumNeihbourVertices` named `run`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `pred` can not be null. It is a single object.
MRC_API void MR_EnumNeihbourVertices_run_MR_VertId(MR_EnumNeihbourVertices *_this, const MR_MeshTopology *topology, MR_VertId start, const MR_std_function_bool_from_MR_VertId *pred);

/// Generated from a method of class `MR::EnumNeihbourVertices` named `run`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Parameter `pred` can not be null. It is a single object.
MRC_API void MR_EnumNeihbourVertices_run_MR_VertBitSet(MR_EnumNeihbourVertices *_this, const MR_MeshTopology *topology, const MR_VertBitSet *start, const MR_std_function_bool_from_MR_VertId *pred);

/// computes Euclidean 3D distances from given start point to all neighbor vertices within given \param range
/// and to first vertices with the distance more than range
/// Generated from function `MR::computeSpaceDistances`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_computeSpaceDistances(const MR_Mesh *mesh, const MR_PointOnFace *start, float range);

/// calculates all neighbor vertices within a given \param range
/// and to first vertices with the distance more than range
/// \param rangeSq square of range
/// Generated from function `MR::findNeighborVerts`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `start` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_findNeighborVerts(const MR_Mesh *mesh, const MR_PointOnFace *start, float rangeSq);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EnumNeihbourFaces_Destroy()` to free it when you're done using it.
MRC_API MR_EnumNeihbourFaces *MR_EnumNeihbourFaces_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EnumNeihbourFaces_DestroyArray()`.
/// Use `MR_EnumNeihbourFaces_OffsetMutablePtr()` and `MR_EnumNeihbourFaces_OffsetPtr()` to access the array elements.
MRC_API MR_EnumNeihbourFaces *MR_EnumNeihbourFaces_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EnumNeihbourFaces *MR_EnumNeihbourFaces_OffsetPtr(const MR_EnumNeihbourFaces *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EnumNeihbourFaces *MR_EnumNeihbourFaces_OffsetMutablePtr(MR_EnumNeihbourFaces *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EnumNeihbourFaces`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EnumNeihbourFaces_Destroy()` to free it when you're done using it.
MRC_API MR_EnumNeihbourFaces *MR_EnumNeihbourFaces_ConstructFromAnother(MR_PassBy _other_pass_by, MR_EnumNeihbourFaces *_other);

/// Destroys a heap-allocated instance of `MR_EnumNeihbourFaces`. Does nothing if the pointer is null.
MRC_API void MR_EnumNeihbourFaces_Destroy(const MR_EnumNeihbourFaces *_this);

/// Destroys a heap-allocated array of `MR_EnumNeihbourFaces`. Does nothing if the pointer is null.
MRC_API void MR_EnumNeihbourFaces_DestroyArray(const MR_EnumNeihbourFaces *_this);

/// Generated from a method of class `MR::EnumNeihbourFaces` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EnumNeihbourFaces *MR_EnumNeihbourFaces_AssignFromAnother(MR_EnumNeihbourFaces *_this, MR_PassBy _other_pass_by, MR_EnumNeihbourFaces *_other);

/// invokes given predicate for faces starting from all incident to \param start,
/// and continuing to all immediate neighbours in depth-first order until the predicate returns false
/// Generated from a method of class `MR::EnumNeihbourFaces` named `run`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `pred` can not be null. It is a single object.
MRC_API void MR_EnumNeihbourFaces_run(MR_EnumNeihbourFaces *_this, const MR_MeshTopology *topology, MR_VertId start, const MR_std_function_bool_from_MR_FaceId *pred);

#ifdef __cplusplus
} // extern "C"
#endif
