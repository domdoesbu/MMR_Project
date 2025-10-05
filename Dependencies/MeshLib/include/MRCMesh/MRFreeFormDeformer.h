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

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Box3d MR_Box3d; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_Box3f MR_Box3f; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_Vector3d MR_Vector3d; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/// \brief Class for deforming mesh using Bernstein interpolation
/// \snippet cpp-examples/FreeFormDeformation.dox.cpp 0
/// Generated from class `MR::FreeFormDeformer`.
typedef struct MR_FreeFormDeformer MR_FreeFormDeformer;

/// Class to accumulate source and target points for free form alignment
/// Calculates best Free Form transform to fit given source->target deformation
/// origin ref grid as box corners ( resolution parameter specifies how to divide box )
/// Generated from class `MR::FreeFormBestFit`.
typedef struct MR_FreeFormBestFit MR_FreeFormBestFit;

/// Generated from a constructor of class `MR::FreeFormDeformer`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FreeFormDeformer_Destroy()` to free it when you're done using it.
MRC_API MR_FreeFormDeformer *MR_FreeFormDeformer_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FreeFormDeformer *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FreeFormDeformer *MR_FreeFormDeformer_OffsetPtr(const MR_FreeFormDeformer *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FreeFormDeformer *MR_FreeFormDeformer_OffsetMutablePtr(MR_FreeFormDeformer *ptr, ptrdiff_t i);

// Only set mesh ref
/// Generated from a constructor of class `MR::FreeFormDeformer`.
/// Parameter `coords` can not be null. It is a single object.
/// Parameter `valid` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FreeFormDeformer_Destroy()` to free it when you're done using it.
MRC_API MR_FreeFormDeformer *MR_FreeFormDeformer_Construct_MR_VertCoords(MR_VertCoords *coords, const MR_VertBitSet *valid);

/// Generated from a constructor of class `MR::FreeFormDeformer`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FreeFormDeformer_Destroy()` to free it when you're done using it.
MRC_API MR_FreeFormDeformer *MR_FreeFormDeformer_Construct_MR_Mesh(MR_Mesh *mesh, const MR_VertBitSet *region);

/// Destroys a heap-allocated instance of `MR_FreeFormDeformer`. Does nothing if the pointer is null.
MRC_API void MR_FreeFormDeformer_Destroy(const MR_FreeFormDeformer *_this);

/// Destroys a heap-allocated array of `MR_FreeFormDeformer`. Does nothing if the pointer is null.
MRC_API void MR_FreeFormDeformer_DestroyArray(const MR_FreeFormDeformer *_this);

// Calculates all points' normalized positions in parallel
// sets ref grid by initialBox, if initialBox is invalid uses mesh bounding box instead
/// Generated from a method of class `MR::FreeFormDeformer` named `init`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `resolution` is a single object.
/// Parameter `resolution` has a default argument: `Vector3i::diagonal(2)`, pass a null pointer to use it.
/// Parameter `initialBox` is a single object.
/// Parameter `initialBox` has a default argument: `MR::Box3f()`, pass a null pointer to use it.
MRC_API void MR_FreeFormDeformer_init(MR_FreeFormDeformer *_this, const MR_Vector3i *resolution, const MR_Box3f *initialBox);

// Updates ref grid point position
/// Generated from a method of class `MR::FreeFormDeformer` named `setRefGridPointPosition`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `coordOfPointInGrid` can not be null. It is a single object.
/// Parameter `newPos` can not be null. It is a single object.
MRC_API void MR_FreeFormDeformer_setRefGridPointPosition(MR_FreeFormDeformer *_this, const MR_Vector3i *coordOfPointInGrid, const MR_Vector3f *newPos);

// Gets ref grid point position
/// Generated from a method of class `MR::FreeFormDeformer` named `getRefGridPointPosition`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `coordOfPointInGrid` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_FreeFormDeformer_getRefGridPointPosition(const MR_FreeFormDeformer *_this, const MR_Vector3i *coordOfPointInGrid);

// Apply updated grid to all mesh points in parallel
// ensure updating render object after using it
/// Generated from a method of class `MR::FreeFormDeformer` named `apply`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FreeFormDeformer_apply(const MR_FreeFormDeformer *_this);

// Apply updated grid to given point
/// Generated from a method of class `MR::FreeFormDeformer` named `applySinglePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
MRC_API MR_Vector3f MR_FreeFormDeformer_applySinglePoint(const MR_FreeFormDeformer *_this, const MR_Vector3f *point);

// Get one dimension index by grid coord
/// Generated from a method of class `MR::FreeFormDeformer` named `getIndex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `coordOfPointInGrid` can not be null. It is a single object.
MRC_API int32_t MR_FreeFormDeformer_getIndex(const MR_FreeFormDeformer *_this, const MR_Vector3i *coordOfPointInGrid);

// Get grid coord by index
/// Generated from a method of class `MR::FreeFormDeformer` named `getCoord`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i MR_FreeFormDeformer_getCoord(const MR_FreeFormDeformer *_this, int32_t index);

/// Generated from a method of class `MR::FreeFormDeformer` named `getAllRefGridPositions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_Vector3f *MR_FreeFormDeformer_getAllRefGridPositions(const MR_FreeFormDeformer *_this);

/// Generated from a method of class `MR::FreeFormDeformer` named `setAllRefGridPositions`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `refPoints` can not be null. It is a single object.
MRC_API void MR_FreeFormDeformer_setAllRefGridPositions(MR_FreeFormDeformer *_this, const MR_std_vector_MR_Vector3f *refPoints);

/// Generated from a method of class `MR::FreeFormDeformer` named `getResolution`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_FreeFormDeformer_getResolution(const MR_FreeFormDeformer *_this);

/// Generated from a constructor of class `MR::FreeFormBestFit`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FreeFormBestFit_Destroy()` to free it when you're done using it.
MRC_API MR_FreeFormBestFit *MR_FreeFormBestFit_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FreeFormBestFit *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FreeFormBestFit *MR_FreeFormBestFit_OffsetPtr(const MR_FreeFormBestFit *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FreeFormBestFit *MR_FreeFormBestFit_OffsetMutablePtr(MR_FreeFormBestFit *ptr, ptrdiff_t i);

/// initialize the class, compute cached values and reserve space for matrices
/// Generated from a constructor of class `MR::FreeFormBestFit`.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `resolution` is a single object.
/// Parameter `resolution` has a default argument: `Vector3i::diagonal(2)`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FreeFormBestFit_Destroy()` to free it when you're done using it.
MRC_API MR_FreeFormBestFit *MR_FreeFormBestFit_Construct(const MR_Box3d *box, const MR_Vector3i *resolution);

/// Destroys a heap-allocated instance of `MR_FreeFormBestFit`. Does nothing if the pointer is null.
MRC_API void MR_FreeFormBestFit_Destroy(const MR_FreeFormBestFit *_this);

/// Destroys a heap-allocated array of `MR_FreeFormBestFit`. Does nothing if the pointer is null.
MRC_API void MR_FreeFormBestFit_DestroyArray(const MR_FreeFormBestFit *_this);

/// Generated from a method of class `MR::FreeFormBestFit` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FreeFormBestFit *MR_FreeFormBestFit_AssignFromAnother(MR_FreeFormBestFit *_this, MR_PassBy _other_pass_by, MR_FreeFormBestFit *_other);

/// add pair of source and target point to accumulator
/// Generated from a method of class `MR::FreeFormBestFit` named `addPair`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Parameter `tgt` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1.`, pass a null pointer to use it.
MRC_API void MR_FreeFormBestFit_addPair_MR_Vector3d(MR_FreeFormBestFit *_this, const MR_Vector3d *src, const MR_Vector3d *tgt, const double *w);

/// Generated from a method of class `MR::FreeFormBestFit` named `addPair`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Parameter `tgt` can not be null. It is a single object.
/// Parameter `w` has a default argument: `1.F`, pass a null pointer to use it.
MRC_API void MR_FreeFormBestFit_addPair_MR_Vector3f(MR_FreeFormBestFit *_this, const MR_Vector3f *src, const MR_Vector3f *tgt, const float *w);

/// adds other instance of FreeFormBestFit if it has same ref grid
/// Generated from a method of class `MR::FreeFormBestFit` named `addOther`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `other` can not be null. It is a single object.
MRC_API void MR_FreeFormBestFit_addOther(MR_FreeFormBestFit *_this, const MR_FreeFormBestFit *other);

/// stabilizer adds additional weights to keep result grid closer to origins
/// recommended values (0;1], but it can be higher
/// Generated from a method of class `MR::FreeFormBestFit` named `setStabilizer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FreeFormBestFit_setStabilizer(MR_FreeFormBestFit *_this, double stabilizer);

/// Generated from a method of class `MR::FreeFormBestFit` named `getStabilizer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_FreeFormBestFit_getStabilizer(const MR_FreeFormBestFit *_this);

/// finds best grid points positions to align source points to target points
/// Generated from a method of class `MR::FreeFormBestFit` named `findBestDeformationReferenceGrid`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_FreeFormBestFit_findBestDeformationReferenceGrid(MR_FreeFormBestFit *_this);

/// Returns positions of grid points in given box with given resolution 
/// Generated from function `MR::makeFreeFormOriginGrid`.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `resolution` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_makeFreeFormOriginGrid(const MR_Box3f *box, const MR_Vector3i *resolution);

// Calculates best Free Form transform to fit given source->target deformation
// origin ref grid as box corners ( resolution parameter specifies how to divide box )
// samplesToBox - if set used to transform source and target points to box space
// returns new positions of ref grid
/// Generated from function `MR::findBestFreeformDeformation`.
/// Parameter `box` can not be null. It is a single object.
/// Parameter `source` can not be null. It is a single object.
/// Parameter `target` can not be null. It is a single object.
/// Parameter `resolution` is a single object.
/// Parameter `resolution` has a default argument: `Vector3i::diagonal(2)`, pass a null pointer to use it.
/// Parameter `samplesToBox` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_findBestFreeformDeformation(const MR_Box3f *box, const MR_std_vector_MR_Vector3f *source, const MR_std_vector_MR_Vector3f *target, const MR_Vector3i *resolution, const MR_AffineXf3f *samplesToBox);

#ifdef __cplusplus
} // extern "C"
#endif
