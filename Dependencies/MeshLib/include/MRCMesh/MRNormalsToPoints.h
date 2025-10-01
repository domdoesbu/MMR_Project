// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceNormals MR_FaceNormals; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.


/// The purpose of this class is to update vertex positions given target triangle normals;
/// see the article "Static/Dynamic Filtering for Mesh Geometry"
/// Generated from class `MR::NormalsToPoints`.
typedef struct MR_NormalsToPoints MR_NormalsToPoints;

// pImpl
/// Generated from class `MR::NormalsToPoints::ISolver`.
typedef struct MR_NormalsToPoints_ISolver MR_NormalsToPoints_ISolver;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NormalsToPoints_Destroy()` to free it when you're done using it.
MRC_API MR_NormalsToPoints *MR_NormalsToPoints_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_NormalsToPoints_DestroyArray()`.
/// Use `MR_NormalsToPoints_OffsetMutablePtr()` and `MR_NormalsToPoints_OffsetPtr()` to access the array elements.
MRC_API MR_NormalsToPoints *MR_NormalsToPoints_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NormalsToPoints *MR_NormalsToPoints_OffsetPtr(const MR_NormalsToPoints *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NormalsToPoints *MR_NormalsToPoints_OffsetMutablePtr(MR_NormalsToPoints *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::NormalsToPoints`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_NormalsToPoints_Destroy()` to free it when you're done using it.
MRC_API MR_NormalsToPoints *MR_NormalsToPoints_ConstructFromAnother(MR_PassBy _other_pass_by, MR_NormalsToPoints *_other);

/// Destroys a heap-allocated instance of `MR_NormalsToPoints`. Does nothing if the pointer is null.
MRC_API void MR_NormalsToPoints_Destroy(const MR_NormalsToPoints *_this);

/// Destroys a heap-allocated array of `MR_NormalsToPoints`. Does nothing if the pointer is null.
MRC_API void MR_NormalsToPoints_DestroyArray(const MR_NormalsToPoints *_this);

/// Generated from a method of class `MR::NormalsToPoints` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NormalsToPoints *MR_NormalsToPoints_AssignFromAnother(MR_NormalsToPoints *_this, MR_PassBy _other_pass_by, MR_NormalsToPoints *_other);

/// builds linear system and prepares a solver for it;
/// please call it only once for mesh, and then run as many times as you like
/// \param guideWeight how much resulting points must be attracted to initial points, must be > 0
/// Generated from a method of class `MR::NormalsToPoints` named `prepare`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `guideWeight` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_NormalsToPoints_prepare(MR_NormalsToPoints *_this, const MR_MeshTopology *topology, const float *guideWeight);

/// performs one iteration consisting of projection of all triangles on planes with given normals and finding best points from them
/// \param guide target vertex positions to avoid under-determined system
/// \param normals target face normals
/// \param points initial approximation on input, updated approximation on output
/// \param maxInitialDistSq the maximum squared distance between a point and its position in (guide)
/// Generated from a method of class `MR::NormalsToPoints` named `run`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `guide` can not be null. It is a single object.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API void MR_NormalsToPoints_run_3(MR_NormalsToPoints *_this, const MR_VertCoords *guide, const MR_FaceNormals *normals, MR_VertCoords *points);

/// Generated from a method of class `MR::NormalsToPoints` named `run`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `guide` can not be null. It is a single object.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API void MR_NormalsToPoints_run_4(MR_NormalsToPoints *_this, const MR_VertCoords *guide, const MR_FaceNormals *normals, MR_VertCoords *points, float maxInitialDistSq);

/// Destroys a heap-allocated instance of `MR_NormalsToPoints_ISolver`. Does nothing if the pointer is null.
MRC_API void MR_NormalsToPoints_ISolver_Destroy(const MR_NormalsToPoints_ISolver *_this);

/// Destroys a heap-allocated array of `MR_NormalsToPoints_ISolver`. Does nothing if the pointer is null.
MRC_API void MR_NormalsToPoints_ISolver_DestroyArray(const MR_NormalsToPoints_ISolver *_this);

/// Generated from a method of class `MR::NormalsToPoints::ISolver` named `prepare`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `topology` can not be null. It is a single object.
MRC_API void MR_NormalsToPoints_ISolver_prepare(MR_NormalsToPoints_ISolver *_this, const MR_MeshTopology *topology, float guideWeight);

/// Generated from a method of class `MR::NormalsToPoints::ISolver` named `run`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `guide` can not be null. It is a single object.
/// Parameter `normals` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API void MR_NormalsToPoints_ISolver_run(MR_NormalsToPoints_ISolver *_this, const MR_VertCoords *guide, const MR_FaceNormals *normals, MR_VertCoords *points, float maxInitialDistSq);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_NormalsToPoints_ISolver *MR_NormalsToPoints_ISolver_OffsetPtr(const MR_NormalsToPoints_ISolver *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_NormalsToPoints_ISolver *MR_NormalsToPoints_ISolver_OffsetMutablePtr(MR_NormalsToPoints_ISolver *ptr, ptrdiff_t i);

#ifdef __cplusplus
} // extern "C"
#endif
