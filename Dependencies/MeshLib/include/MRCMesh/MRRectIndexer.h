// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_DistanceMap MR_DistanceMap; // Defined in `#include <MRCMesh/MRDistanceMap.h>`.
typedef struct MR_Matrix_float MR_Matrix_float; // Defined in `#include <MRCMesh/MRMatrix.h>`.
typedef struct MR_PixelBitSet MR_PixelBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


typedef int8_t MR_OutEdge2;
enum // MR_OutEdge2
{
    MR_OutEdge2_Invalid = -1,
    MR_OutEdge2_PlusY = 0,
    MR_OutEdge2_MinusY = 1,
    MR_OutEdge2_PlusX = 2,
    MR_OutEdge2_MinusX = 3,
    MR_OutEdge2_Count = 4,
};

/// a class for converting 2D integer coordinates into 1D linear coordinates and backward
/// Generated from class `MR::RectIndexer`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::DistanceMap`
///     `MR::Matrix<float>`
typedef struct MR_RectIndexer MR_RectIndexer;

/// Generated from function `MR::opposite`.
MRC_API MR_OutEdge2 MR_opposite_MR_OutEdge2(MR_OutEdge2 e);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RectIndexer_Destroy()` to free it when you're done using it.
MRC_API MR_RectIndexer *MR_RectIndexer_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RectIndexer_DestroyArray()`.
/// Use `MR_RectIndexer_OffsetMutablePtr()` and `MR_RectIndexer_OffsetPtr()` to access the array elements.
MRC_API MR_RectIndexer *MR_RectIndexer_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RectIndexer *MR_RectIndexer_OffsetPtr(const MR_RectIndexer *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RectIndexer *MR_RectIndexer_OffsetMutablePtr(MR_RectIndexer *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::RectIndexer` to a derived class `MR::DistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceMap *MR_RectIndexer_StaticDowncastTo_MR_DistanceMap(const MR_RectIndexer *object);

/// Downcasts an instance of `MR::RectIndexer` to a derived class `MR::DistanceMap`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_DistanceMap *MR_RectIndexer_MutableStaticDowncastTo_MR_DistanceMap(MR_RectIndexer *object);

/// Downcasts an instance of `MR::RectIndexer` to a derived class `MR::Matrix<float>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_Matrix_float *MR_RectIndexer_StaticDowncastTo_MR_Matrix_float(const MR_RectIndexer *object);

/// Downcasts an instance of `MR::RectIndexer` to a derived class `MR::Matrix<float>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_Matrix_float *MR_RectIndexer_MutableStaticDowncastTo_MR_Matrix_float(MR_RectIndexer *object);

/// Generated from a constructor of class `MR::RectIndexer`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RectIndexer_Destroy()` to free it when you're done using it.
MRC_API MR_RectIndexer *MR_RectIndexer_ConstructFromAnother(const MR_RectIndexer *_other);

/// Generated from a constructor of class `MR::RectIndexer`.
/// Parameter `dims` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RectIndexer_Destroy()` to free it when you're done using it.
MRC_API MR_RectIndexer *MR_RectIndexer_Construct(const MR_Vector2i *dims);

/// Destroys a heap-allocated instance of `MR_RectIndexer`. Does nothing if the pointer is null.
MRC_API void MR_RectIndexer_Destroy(const MR_RectIndexer *_this);

/// Destroys a heap-allocated array of `MR_RectIndexer`. Does nothing if the pointer is null.
MRC_API void MR_RectIndexer_DestroyArray(const MR_RectIndexer *_this);

/// Generated from a method of class `MR::RectIndexer` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RectIndexer *MR_RectIndexer_AssignFromAnother(MR_RectIndexer *_this, const MR_RectIndexer *_other);

/// Generated from a method of class `MR::RectIndexer` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `dims` can not be null. It is a single object.
MRC_API void MR_RectIndexer_resize(MR_RectIndexer *_this, const MR_Vector2i *dims);

/// Generated from a method of class `MR::RectIndexer` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_RectIndexer_dims(const MR_RectIndexer *_this);

/// Generated from a method of class `MR::RectIndexer` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_RectIndexer_size(const MR_RectIndexer *_this);

/// Generated from a method of class `MR::RectIndexer` named `toPos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i MR_RectIndexer_toPos_MR_PixelId(const MR_RectIndexer *_this, MR_PixelId id);

/// Generated from a method of class `MR::RectIndexer` named `toPos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i MR_RectIndexer_toPos_uint64_t(const MR_RectIndexer *_this, MR_uint64_t id);

/// Generated from a method of class `MR::RectIndexer` named `toPixelId`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_PixelId MR_RectIndexer_toPixelId(const MR_RectIndexer *_this, const MR_Vector2i *pos);

/// Generated from a method of class `MR::RectIndexer` named `toIndex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_uint64_t MR_RectIndexer_toIndex(const MR_RectIndexer *_this, const MR_Vector2i *pos);

/// returns true if v1 is within at most 4 neighbors of v0
/// Generated from a method of class `MR::RectIndexer` named `areNeigbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_RectIndexer_areNeigbors_MR_PixelId(const MR_RectIndexer *_this, MR_PixelId v0, MR_PixelId v1);

/// Generated from a method of class `MR::RectIndexer` named `areNeigbors`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos0` can not be null. It is a single object.
/// Parameter `pos1` can not be null. It is a single object.
MRC_API bool MR_RectIndexer_areNeigbors_MR_Vector2i(const MR_RectIndexer *_this, const MR_Vector2i *pos0, const MR_Vector2i *pos1);

/// returns id of v's neighbor specified by the edge
/// Generated from a method of class `MR::RectIndexer` named `getNeighbor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_PixelId MR_RectIndexer_getNeighbor_2(const MR_RectIndexer *_this, MR_PixelId v, MR_OutEdge2 toNei);

/// Generated from a method of class `MR::RectIndexer` named `getNeighbor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pos` can not be null. It is a single object.
MRC_API MR_PixelId MR_RectIndexer_getNeighbor_3(const MR_RectIndexer *_this, MR_PixelId v, const MR_Vector2i *pos, MR_OutEdge2 toNei);

/// expands PixelBitSet with given number of steps
/// Generated from function `MR::expandPixelMask`.
/// Parameter `mask` can not be null. It is a single object.
/// Parameter `indexer` can not be null. It is a single object.
/// Parameter `expansion` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_expandPixelMask(MR_PixelBitSet *mask, const MR_RectIndexer *indexer, const int32_t *expansion);

/// shrinks PixelBitSet with given number of steps
/// Generated from function `MR::shrinkPixelMask`.
/// Parameter `mask` can not be null. It is a single object.
/// Parameter `indexer` can not be null. It is a single object.
/// Parameter `shrinkage` has a default argument: `1`, pass a null pointer to use it.
MRC_API void MR_shrinkPixelMask(MR_PixelBitSet *mask, const MR_RectIndexer *indexer, const int32_t *shrinkage);

#ifdef __cplusplus
} // extern "C"
#endif
