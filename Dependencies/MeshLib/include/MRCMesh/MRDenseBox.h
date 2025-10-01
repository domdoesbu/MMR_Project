// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Box3f MR_Box3f; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Vector3b MR_Vector3b; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.


/// Structure to hold and work with dense box
/// \details Scalar operations that are not provided in this struct can be called via `box()`
/// For example `box().size()`, `box().diagonal()` or `box().volume()`
/// Non const operations are not allowed for dense box because it can spoil density
/// Generated from class `MR::DenseBox`.
typedef struct MR_DenseBox MR_DenseBox;

/// Generated from a constructor of class `MR::DenseBox`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DenseBox_Destroy()` to free it when you're done using it.
MRC_API MR_DenseBox *MR_DenseBox_ConstructFromAnother(const MR_DenseBox *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DenseBox *MR_DenseBox_OffsetPtr(const MR_DenseBox *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DenseBox *MR_DenseBox_OffsetMutablePtr(MR_DenseBox *ptr, ptrdiff_t i);

/// Include given points into this dense box
/// Generated from a constructor of class `MR::DenseBox`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DenseBox_Destroy()` to free it when you're done using it.
MRC_API MR_DenseBox *MR_DenseBox_Construct_2_std_vector_MR_Vector3f(const MR_std_vector_MR_Vector3f *points, const MR_AffineXf3f *xf);

/// Include given weighed points into this dense box
/// Generated from a constructor of class `MR::DenseBox`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `weights` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DenseBox_Destroy()` to free it when you're done using it.
MRC_API MR_DenseBox *MR_DenseBox_Construct_3(const MR_std_vector_MR_Vector3f *points, const MR_std_vector_float *weights, const MR_AffineXf3f *xf);

/// Include mesh part into this dense box
/// Generated from a constructor of class `MR::DenseBox`.
/// Parameter `meshPart` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DenseBox_Destroy()` to free it when you're done using it.
MRC_API MR_DenseBox *MR_DenseBox_Construct_2_MR_MeshPart(const MR_MeshPart *meshPart, const MR_AffineXf3f *xf);

/// Include point into this dense box
/// Generated from a constructor of class `MR::DenseBox`.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DenseBox_Destroy()` to free it when you're done using it.
MRC_API MR_DenseBox *MR_DenseBox_Construct_2_MR_PointCloud(const MR_PointCloud *points, const MR_AffineXf3f *xf);

/// Include line into this dense box
/// Generated from a constructor of class `MR::DenseBox`.
/// Parameter `line` can not be null. It is a single object.
/// Parameter `xf` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DenseBox_Destroy()` to free it when you're done using it.
MRC_API MR_DenseBox *MR_DenseBox_Construct_2_MR_Polyline3(const MR_Polyline3 *line, const MR_AffineXf3f *xf);

/// Destroys a heap-allocated instance of `MR_DenseBox`. Does nothing if the pointer is null.
MRC_API void MR_DenseBox_Destroy(const MR_DenseBox *_this);

/// Destroys a heap-allocated array of `MR_DenseBox`. Does nothing if the pointer is null.
MRC_API void MR_DenseBox_DestroyArray(const MR_DenseBox *_this);

/// Generated from a method of class `MR::DenseBox` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DenseBox *MR_DenseBox_AssignFromAnother(MR_DenseBox *_this, const MR_DenseBox *_other);

/// returns center of dense box
/// Generated from a method of class `MR::DenseBox` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_DenseBox_center(const MR_DenseBox *_this);

/// returns corner of dense box, each index value means: false - min, true - max
/// example: {false, false, flase} - min point, {true, true, true} - max point
/// Generated from a method of class `MR::DenseBox` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `index` can not be null. It is a single object.
MRC_API MR_Vector3f MR_DenseBox_corner(const MR_DenseBox *_this, const MR_Vector3b *index);

/// returns true if dense box contains given point
/// Generated from a method of class `MR::DenseBox` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_DenseBox_contains(const MR_DenseBox *_this, const MR_Vector3f *pt);

/// return box in its space
/// Generated from a method of class `MR::DenseBox` named `box`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Box3f *MR_DenseBox_box(const MR_DenseBox *_this);

/// transform box space to world space 
/// Generated from a method of class `MR::DenseBox` named `basisXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_DenseBox_basisXf(const MR_DenseBox *_this);

/// transform world space to box space
/// Generated from a method of class `MR::DenseBox` named `basisXfInv`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_DenseBox_basisXfInv(const MR_DenseBox *_this);

#ifdef __cplusplus
} // extern "C"
#endif
