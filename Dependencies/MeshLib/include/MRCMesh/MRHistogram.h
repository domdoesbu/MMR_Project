// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_pair_float_float MR_std_pair_float_float; // Defined in `#include <MRCMisc/std_pair_float_float.h>`.
typedef struct MR_std_vector_uint64_t MR_std_vector_uint64_t; // Defined in `#include <MRCMisc/std_vector_uint64_t.h>`.


/// Simple class for calculating histogram
/// Generated from class `MR::Histogram`.
typedef struct MR_Histogram MR_Histogram;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Histogram_Destroy()` to free it when you're done using it.
MRC_API MR_Histogram *MR_Histogram_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Histogram_DestroyArray()`.
/// Use `MR_Histogram_OffsetMutablePtr()` and `MR_Histogram_OffsetPtr()` to access the array elements.
MRC_API MR_Histogram *MR_Histogram_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Histogram *MR_Histogram_OffsetPtr(const MR_Histogram *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Histogram *MR_Histogram_OffsetMutablePtr(MR_Histogram *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Histogram`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Histogram_Destroy()` to free it when you're done using it.
MRC_API MR_Histogram *MR_Histogram_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Histogram *_other);

/// Initialize histogram with minimum and maximum values, and number of bins
/// Generated from a constructor of class `MR::Histogram`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Histogram_Destroy()` to free it when you're done using it.
MRC_API MR_Histogram *MR_Histogram_Construct(float min, float max, MR_uint64_t size);

/// Destroys a heap-allocated instance of `MR_Histogram`. Does nothing if the pointer is null.
MRC_API void MR_Histogram_Destroy(const MR_Histogram *_this);

/// Destroys a heap-allocated array of `MR_Histogram`. Does nothing if the pointer is null.
MRC_API void MR_Histogram_DestroyArray(const MR_Histogram *_this);

/// Generated from a method of class `MR::Histogram` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Histogram *MR_Histogram_AssignFromAnother(MR_Histogram *_this, MR_PassBy _other_pass_by, MR_Histogram *_other);

/// Adds sample to corresponding bin
/// Generated from a method of class `MR::Histogram` named `addSample`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `count` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_Histogram_addSample(MR_Histogram *_this, float sample, const MR_uint64_t *count);

/// Adds bins of input hist to this
/// Generated from a method of class `MR::Histogram` named `addHistogram`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `hist` can not be null. It is a single object.
MRC_API void MR_Histogram_addHistogram(MR_Histogram *_this, const MR_Histogram *hist);

/// Gets bins
/// Generated from a method of class `MR::Histogram` named `getBins`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_uint64_t *MR_Histogram_getBins(const MR_Histogram *_this);

/// Gets minimum value of histogram
/// Generated from a method of class `MR::Histogram` named `getMin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Histogram_getMin(const MR_Histogram *_this);

/// Gets maximum value of histogram
/// Generated from a method of class `MR::Histogram` named `getMax`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Histogram_getMax(const MR_Histogram *_this);

/// Gets id of bin that inherits sample
/// Generated from a method of class `MR::Histogram` named `getBinId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Histogram_getBinId(const MR_Histogram *_this, float sample);

/// Gets minimum and maximum of diapason inherited by bin
/// Generated from a method of class `MR::Histogram` named `getBinMinMax`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_float_float_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_float_float *MR_Histogram_getBinMinMax(const MR_Histogram *_this, MR_uint64_t binId);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::Histogram` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Histogram_heapBytes(const MR_Histogram *_this);

#ifdef __cplusplus
} // extern "C"
#endif
