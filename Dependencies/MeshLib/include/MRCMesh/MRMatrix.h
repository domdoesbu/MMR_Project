// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_RectIndexer MR_RectIndexer; // Defined in `#include <MRCMesh/MRRectIndexer.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.


/// Row-major matrix with T values
/// Generated from class `MR::Matrix<float>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::RectIndexer`
typedef struct MR_Matrix_float MR_Matrix_float;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix_float_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix_float *MR_Matrix_float_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Matrix_float_DestroyArray()`.
/// Use `MR_Matrix_float_OffsetMutablePtr()` and `MR_Matrix_float_OffsetPtr()` to access the array elements.
MRC_API MR_Matrix_float *MR_Matrix_float_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Matrix_float *MR_Matrix_float_OffsetPtr(const MR_Matrix_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Matrix_float *MR_Matrix_float_OffsetMutablePtr(MR_Matrix_float *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::Matrix<float>` to its base class `MR::RectIndexer`.
/// This version is acting on mutable pointers.
MRC_API const MR_RectIndexer *MR_Matrix_float_UpcastTo_MR_RectIndexer(const MR_Matrix_float *object);

/// Upcasts an instance of `MR::Matrix<float>` to its base class `MR::RectIndexer`.
MRC_API MR_RectIndexer *MR_Matrix_float_MutableUpcastTo_MR_RectIndexer(MR_Matrix_float *object);

/// Generated from a constructor of class `MR::Matrix<float>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix_float_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix_float *MR_Matrix_float_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Matrix_float *_other);

/// Generated from a constructor of class `MR::Matrix<float>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix_float_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix_float *MR_Matrix_float_Construct(MR_uint64_t numRows, MR_uint64_t numCols);

/// Destroys a heap-allocated instance of `MR_Matrix_float`. Does nothing if the pointer is null.
MRC_API void MR_Matrix_float_Destroy(const MR_Matrix_float *_this);

/// Destroys a heap-allocated array of `MR_Matrix_float`. Does nothing if the pointer is null.
MRC_API void MR_Matrix_float_DestroyArray(const MR_Matrix_float *_this);

/// Generated from a method of class `MR::Matrix<float>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Matrix_float *MR_Matrix_float_AssignFromAnother(MR_Matrix_float *_this, MR_PassBy _other_pass_by, MR_Matrix_float *_other);

/// main access method
/// Generated from a method of class `MR::Matrix<float>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Matrix_float_call_2(MR_Matrix_float *_this, MR_uint64_t row, MR_uint64_t col);

/// Generated from a method of class `MR::Matrix<float>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Matrix_float_call_1(MR_Matrix_float *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Matrix<float>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Matrix_float_call_const_2(const MR_Matrix_float *_this, MR_uint64_t row, MR_uint64_t col);

/// Generated from a method of class `MR::Matrix<float>` named `operator()`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Matrix_float_call_const_1(const MR_Matrix_float *_this, MR_uint64_t i);

/// Generated from a method of class `MR::Matrix<float>` named `getSubMatrix`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix_float_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix_float *MR_Matrix_float_getSubMatrix(MR_Matrix_float *_this, MR_uint64_t startRow, MR_uint64_t nRow, MR_uint64_t startCol, MR_uint64_t nCol);

/// computes transposed matrix
/// Generated from a method of class `MR::Matrix<float>` named `transposed`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Matrix_float_Destroy()` to free it when you're done using it.
MRC_API MR_Matrix_float *MR_Matrix_float_transposed(const MR_Matrix_float *_this);

/// Generated from a method of class `MR::Matrix<float>` named `fill`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix_float_fill(MR_Matrix_float *_this, float val);

/// Generated from a method of class `MR::Matrix<float>` named `clear`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Matrix_float_clear(MR_Matrix_float *_this);

/// Generated from a method of class `MR::Matrix<float>` named `getRowsNum`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Matrix_float_getRowsNum(const MR_Matrix_float *_this);

/// Generated from a method of class `MR::Matrix<float>` named `getColsNum`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Matrix_float_getColsNum(const MR_Matrix_float *_this);

/// Generated from a method of class `MR::Matrix<float>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_float *MR_Matrix_float_data(const MR_Matrix_float *_this);

#ifdef __cplusplus
} // extern "C"
#endif
