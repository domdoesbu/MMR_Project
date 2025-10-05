// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Parabolad MR_Parabolad; // Defined in `#include <MRCMesh/MRParabola.h>`.
typedef struct MR_Parabolaf MR_Parabolaf; // Defined in `#include <MRCMesh/MRParabola.h>`.


/// accumulates a number of (x,y) points to find the best-least-squares parabola approximating them
/// Generated from class `MR::BestFitParabolaf`.
typedef struct MR_BestFitParabolaf MR_BestFitParabolaf;

/// accumulates a number of (x,y) points to find the best-least-squares parabola approximating them
/// Generated from class `MR::BestFitParabolad`.
typedef struct MR_BestFitParabolad MR_BestFitParabolad;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BestFitParabolaf_Destroy()` to free it when you're done using it.
MRC_API MR_BestFitParabolaf *MR_BestFitParabolaf_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BestFitParabolaf_DestroyArray()`.
/// Use `MR_BestFitParabolaf_OffsetMutablePtr()` and `MR_BestFitParabolaf_OffsetPtr()` to access the array elements.
MRC_API MR_BestFitParabolaf *MR_BestFitParabolaf_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BestFitParabolaf *MR_BestFitParabolaf_OffsetPtr(const MR_BestFitParabolaf *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BestFitParabolaf *MR_BestFitParabolaf_OffsetMutablePtr(MR_BestFitParabolaf *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BestFitParabolaf`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BestFitParabolaf_Destroy()` to free it when you're done using it.
MRC_API MR_BestFitParabolaf *MR_BestFitParabolaf_ConstructFromAnother(const MR_BestFitParabolaf *_other);

/// Destroys a heap-allocated instance of `MR_BestFitParabolaf`. Does nothing if the pointer is null.
MRC_API void MR_BestFitParabolaf_Destroy(const MR_BestFitParabolaf *_this);

/// Destroys a heap-allocated array of `MR_BestFitParabolaf`. Does nothing if the pointer is null.
MRC_API void MR_BestFitParabolaf_DestroyArray(const MR_BestFitParabolaf *_this);

/// Generated from a method of class `MR::BestFitParabolaf` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BestFitParabolaf *MR_BestFitParabolaf_AssignFromAnother(MR_BestFitParabolaf *_this, const MR_BestFitParabolaf *_other);

/// accumulates one more point for parabola fitting
/// Generated from a method of class `MR::BestFitParabolaf` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BestFitParabolaf_addPoint_2(MR_BestFitParabolaf *_this, float x, float y);

/// accumulates one more point with given weight for parabola fitting
/// Generated from a method of class `MR::BestFitParabolaf` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BestFitParabolaf_addPoint_3(MR_BestFitParabolaf *_this, float x, float y, float weight);

/// computes the best approximating parabola from the accumulated points;
/// Generated from a method of class `MR::BestFitParabolaf` named `getBestParabola`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `tol` has a default argument: `std::numeric_limits<float>::epsilon()`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parabolaf_Destroy()` to free it when you're done using it.
MRC_API MR_Parabolaf *MR_BestFitParabolaf_getBestParabola(const MR_BestFitParabolaf *_this, const float *tol);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BestFitParabolad_Destroy()` to free it when you're done using it.
MRC_API MR_BestFitParabolad *MR_BestFitParabolad_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BestFitParabolad_DestroyArray()`.
/// Use `MR_BestFitParabolad_OffsetMutablePtr()` and `MR_BestFitParabolad_OffsetPtr()` to access the array elements.
MRC_API MR_BestFitParabolad *MR_BestFitParabolad_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BestFitParabolad *MR_BestFitParabolad_OffsetPtr(const MR_BestFitParabolad *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BestFitParabolad *MR_BestFitParabolad_OffsetMutablePtr(MR_BestFitParabolad *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BestFitParabolad`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BestFitParabolad_Destroy()` to free it when you're done using it.
MRC_API MR_BestFitParabolad *MR_BestFitParabolad_ConstructFromAnother(const MR_BestFitParabolad *_other);

/// Destroys a heap-allocated instance of `MR_BestFitParabolad`. Does nothing if the pointer is null.
MRC_API void MR_BestFitParabolad_Destroy(const MR_BestFitParabolad *_this);

/// Destroys a heap-allocated array of `MR_BestFitParabolad`. Does nothing if the pointer is null.
MRC_API void MR_BestFitParabolad_DestroyArray(const MR_BestFitParabolad *_this);

/// Generated from a method of class `MR::BestFitParabolad` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BestFitParabolad *MR_BestFitParabolad_AssignFromAnother(MR_BestFitParabolad *_this, const MR_BestFitParabolad *_other);

/// accumulates one more point for parabola fitting
/// Generated from a method of class `MR::BestFitParabolad` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BestFitParabolad_addPoint_2(MR_BestFitParabolad *_this, double x, double y);

/// accumulates one more point with given weight for parabola fitting
/// Generated from a method of class `MR::BestFitParabolad` named `addPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BestFitParabolad_addPoint_3(MR_BestFitParabolad *_this, double x, double y, double weight);

/// computes the best approximating parabola from the accumulated points;
/// Generated from a method of class `MR::BestFitParabolad` named `getBestParabola`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `tol` has a default argument: `std::numeric_limits<double>::epsilon()`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Parabolad_Destroy()` to free it when you're done using it.
MRC_API MR_Parabolad *MR_BestFitParabolad_getBestParabola(const MR_BestFitParabolad *_this, const double *tol);

#ifdef __cplusplus
} // extern "C"
#endif
