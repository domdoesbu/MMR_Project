// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Triangulation MR_Triangulation; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_vector_std_array_MR_Vector3f_3 MR_std_vector_std_array_MR_Vector3f_3; // Defined in `#include <MRCMisc/std_vector_std_array_MR_Vector3f_3.h>`.


/// this makes bit-wise comparison of two Vector3f's thus making two NaNs equal
/// Generated from class `MR::MeshBuilder::equalVector3f`.
typedef struct MR_MeshBuilder_equalVector3f MR_MeshBuilder_equalVector3f;

/// this class is responsible for giving a unique id to each vertex with distinct coordinates
/// NOTE: the points are considered non-identical if they have the same values but have zero values with different signs
/// (e.g. (0; 0; 1) and (-0; 0; 1))
/// use `Vector3::unsignZeroValues` method to get rid of signed zero values if you're unsure of their absence
/// Generated from class `MR::MeshBuilder::VertexIdentifier`.
typedef struct MR_MeshBuilder_VertexIdentifier MR_MeshBuilder_VertexIdentifier;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_equalVector3f_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_equalVector3f *MR_MeshBuilder_equalVector3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshBuilder_equalVector3f_DestroyArray()`.
/// Use `MR_MeshBuilder_equalVector3f_OffsetMutablePtr()` and `MR_MeshBuilder_equalVector3f_OffsetPtr()` to access the array elements.
MRC_API MR_MeshBuilder_equalVector3f *MR_MeshBuilder_equalVector3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshBuilder_equalVector3f *MR_MeshBuilder_equalVector3f_OffsetPtr(const MR_MeshBuilder_equalVector3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshBuilder_equalVector3f *MR_MeshBuilder_equalVector3f_OffsetMutablePtr(MR_MeshBuilder_equalVector3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshBuilder::equalVector3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_equalVector3f_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_equalVector3f *MR_MeshBuilder_equalVector3f_ConstructFromAnother(const MR_MeshBuilder_equalVector3f *_other);

/// Destroys a heap-allocated instance of `MR_MeshBuilder_equalVector3f`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_equalVector3f_Destroy(const MR_MeshBuilder_equalVector3f *_this);

/// Destroys a heap-allocated array of `MR_MeshBuilder_equalVector3f`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_equalVector3f_DestroyArray(const MR_MeshBuilder_equalVector3f *_this);

/// Generated from a method of class `MR::MeshBuilder::equalVector3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_equalVector3f *MR_MeshBuilder_equalVector3f_AssignFromAnother(MR_MeshBuilder_equalVector3f *_this, const MR_MeshBuilder_equalVector3f *_other);

/// Generated from a method of class `MR::MeshBuilder::equalVector3f` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_MeshBuilder_equalVector3f_call(const MR_MeshBuilder_equalVector3f *_this, const MR_Vector3f *a, const MR_Vector3f *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_VertexIdentifier_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_VertexIdentifier *MR_MeshBuilder_VertexIdentifier_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshBuilder_VertexIdentifier_DestroyArray()`.
/// Use `MR_MeshBuilder_VertexIdentifier_OffsetMutablePtr()` and `MR_MeshBuilder_VertexIdentifier_OffsetPtr()` to access the array elements.
MRC_API MR_MeshBuilder_VertexIdentifier *MR_MeshBuilder_VertexIdentifier_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshBuilder_VertexIdentifier *MR_MeshBuilder_VertexIdentifier_OffsetPtr(const MR_MeshBuilder_VertexIdentifier *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshBuilder_VertexIdentifier *MR_MeshBuilder_VertexIdentifier_OffsetMutablePtr(MR_MeshBuilder_VertexIdentifier *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshBuilder::VertexIdentifier`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshBuilder_VertexIdentifier_Destroy()` to free it when you're done using it.
MRC_API MR_MeshBuilder_VertexIdentifier *MR_MeshBuilder_VertexIdentifier_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshBuilder_VertexIdentifier *_other);

/// Destroys a heap-allocated instance of `MR_MeshBuilder_VertexIdentifier`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_VertexIdentifier_Destroy(const MR_MeshBuilder_VertexIdentifier *_this);

/// Destroys a heap-allocated array of `MR_MeshBuilder_VertexIdentifier`. Does nothing if the pointer is null.
MRC_API void MR_MeshBuilder_VertexIdentifier_DestroyArray(const MR_MeshBuilder_VertexIdentifier *_this);

/// Generated from a method of class `MR::MeshBuilder::VertexIdentifier` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshBuilder_VertexIdentifier *MR_MeshBuilder_VertexIdentifier_AssignFromAnother(MR_MeshBuilder_VertexIdentifier *_this, MR_PassBy _other_pass_by, MR_MeshBuilder_VertexIdentifier *_other);

/// prepare identification of vertices from given this number of triangles
/// Generated from a method of class `MR::MeshBuilder::VertexIdentifier` named `reserve`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_VertexIdentifier_reserve(MR_MeshBuilder_VertexIdentifier *_this, MR_uint64_t numTris);

/// identifies vertices from a chunk of triangles
/// Generated from a method of class `MR::MeshBuilder::VertexIdentifier` named `addTriangles`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `buffer` can not be null. It is a single object.
MRC_API void MR_MeshBuilder_VertexIdentifier_addTriangles(MR_MeshBuilder_VertexIdentifier *_this, const MR_std_vector_std_array_MR_Vector3f_3 *buffer);

/// returns the number of triangles added so far
/// Generated from a method of class `MR::MeshBuilder::VertexIdentifier` named `numTris`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_MeshBuilder_VertexIdentifier_numTris(const MR_MeshBuilder_VertexIdentifier *_this);

/// obtains triangulation with vertex ids
/// Generated from a method of class `MR::MeshBuilder::VertexIdentifier` named `takeTriangulation`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Triangulation_Destroy()` to free it when you're done using it.
MRC_API MR_Triangulation *MR_MeshBuilder_VertexIdentifier_takeTriangulation(MR_MeshBuilder_VertexIdentifier *_this);

/// obtains coordinates of unique points in the order of vertex ids
/// Generated from a method of class `MR::MeshBuilder::VertexIdentifier` named `takePoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_VertCoords *MR_MeshBuilder_VertexIdentifier_takePoints(MR_MeshBuilder_VertexIdentifier *_this);

#ifdef __cplusplus
} // extern "C"
#endif
