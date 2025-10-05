// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_ChunkIterator MR_ChunkIterator; // Defined in `#include <MRCMesh/MRChunkIterator.h>`.
typedef struct MR_PolylineUndirectedEdgeIterator MR_PolylineUndirectedEdgeIterator; // Defined in `#include <MRCMesh/MRPolylineEdgeIterator.h>`.
typedef struct MR_RingIterator_MR_NextEdgeSameLeft MR_RingIterator_MR_NextEdgeSameLeft; // Defined in `#include <MRCMesh/MRRingIterator.h>`.
typedef struct MR_RingIterator_MR_NextEdgeSameOrigin MR_RingIterator_MR_NextEdgeSameOrigin; // Defined in `#include <MRCMesh/MRRingIterator.h>`.
typedef struct MR_UndirectedEdgeIterator MR_UndirectedEdgeIterator; // Defined in `#include <MRCMesh/MREdgeIterator.h>`.


/// \brief simple alternative to boost/iterator_range


/// Generated from class `MR::IteratorRange<MR::ChunkIterator>`.
typedef struct MR_IteratorRange_MR_ChunkIterator MR_IteratorRange_MR_ChunkIterator;

/// \brief simple alternative to boost/iterator_range


/// Generated from class `MR::IteratorRange<MR::UndirectedEdgeIterator>`.
typedef struct MR_IteratorRange_MR_UndirectedEdgeIterator MR_IteratorRange_MR_UndirectedEdgeIterator;

/// \brief simple alternative to boost/iterator_range


/// Generated from class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>`.
typedef struct MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin;

/// \brief simple alternative to boost/iterator_range


/// Generated from class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>`.
typedef struct MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft;

/// \brief simple alternative to boost/iterator_range


/// Generated from class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>`.
typedef struct MR_IteratorRange_MR_PolylineUndirectedEdgeIterator MR_IteratorRange_MR_PolylineUndirectedEdgeIterator;

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::ChunkIterator>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChunkIterator *MR_IteratorRange_MR_ChunkIterator_Get_begin_(const MR_IteratorRange_MR_ChunkIterator *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::ChunkIterator>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_ChunkIterator_Set_begin_(MR_IteratorRange_MR_ChunkIterator *_this, const MR_ChunkIterator *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::ChunkIterator>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChunkIterator *MR_IteratorRange_MR_ChunkIterator_GetMutable_begin_(MR_IteratorRange_MR_ChunkIterator *_this);

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::ChunkIterator>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ChunkIterator *MR_IteratorRange_MR_ChunkIterator_Get_end_(const MR_IteratorRange_MR_ChunkIterator *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::ChunkIterator>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_ChunkIterator_Set_end_(MR_IteratorRange_MR_ChunkIterator *_this, const MR_ChunkIterator *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::ChunkIterator>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChunkIterator *MR_IteratorRange_MR_ChunkIterator_GetMutable_end_(MR_IteratorRange_MR_ChunkIterator *_this);

/// Generated from a constructor of class `MR::IteratorRange<MR::ChunkIterator>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_ChunkIterator_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_ChunkIterator *MR_IteratorRange_MR_ChunkIterator_ConstructFromAnother(const MR_IteratorRange_MR_ChunkIterator *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IteratorRange_MR_ChunkIterator *MR_IteratorRange_MR_ChunkIterator_OffsetPtr(const MR_IteratorRange_MR_ChunkIterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IteratorRange_MR_ChunkIterator *MR_IteratorRange_MR_ChunkIterator_OffsetMutablePtr(MR_IteratorRange_MR_ChunkIterator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IteratorRange<MR::ChunkIterator>`.
/// Parameter `begin` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_ChunkIterator_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_ChunkIterator *MR_IteratorRange_MR_ChunkIterator_Construct(const MR_ChunkIterator *begin, const MR_ChunkIterator *end);

/// Destroys a heap-allocated instance of `MR_IteratorRange_MR_ChunkIterator`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_ChunkIterator_Destroy(const MR_IteratorRange_MR_ChunkIterator *_this);

/// Destroys a heap-allocated array of `MR_IteratorRange_MR_ChunkIterator`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_ChunkIterator_DestroyArray(const MR_IteratorRange_MR_ChunkIterator *_this);

/// Generated from a method of class `MR::IteratorRange<MR::ChunkIterator>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IteratorRange_MR_ChunkIterator *MR_IteratorRange_MR_ChunkIterator_AssignFromAnother(MR_IteratorRange_MR_ChunkIterator *_this, const MR_IteratorRange_MR_ChunkIterator *_other);

/// Generated from function `MR::begin`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChunkIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ChunkIterator *MR_begin_MR_IteratorRange_MR_ChunkIterator(const MR_IteratorRange_MR_ChunkIterator *range);

/// Generated from function `MR::end`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChunkIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ChunkIterator *MR_end_MR_IteratorRange_MR_ChunkIterator(const MR_IteratorRange_MR_ChunkIterator *range);

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::UndirectedEdgeIterator>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeIterator *MR_IteratorRange_MR_UndirectedEdgeIterator_Get_begin_(const MR_IteratorRange_MR_UndirectedEdgeIterator *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::UndirectedEdgeIterator>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_UndirectedEdgeIterator_Set_begin_(MR_IteratorRange_MR_UndirectedEdgeIterator *_this, const MR_UndirectedEdgeIterator *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::UndirectedEdgeIterator>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeIterator *MR_IteratorRange_MR_UndirectedEdgeIterator_GetMutable_begin_(MR_IteratorRange_MR_UndirectedEdgeIterator *_this);

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::UndirectedEdgeIterator>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeIterator *MR_IteratorRange_MR_UndirectedEdgeIterator_Get_end_(const MR_IteratorRange_MR_UndirectedEdgeIterator *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::UndirectedEdgeIterator>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_UndirectedEdgeIterator_Set_end_(MR_IteratorRange_MR_UndirectedEdgeIterator *_this, const MR_UndirectedEdgeIterator *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::UndirectedEdgeIterator>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UndirectedEdgeIterator *MR_IteratorRange_MR_UndirectedEdgeIterator_GetMutable_end_(MR_IteratorRange_MR_UndirectedEdgeIterator *_this);

/// Generated from a constructor of class `MR::IteratorRange<MR::UndirectedEdgeIterator>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_UndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_UndirectedEdgeIterator *MR_IteratorRange_MR_UndirectedEdgeIterator_ConstructFromAnother(const MR_IteratorRange_MR_UndirectedEdgeIterator *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IteratorRange_MR_UndirectedEdgeIterator *MR_IteratorRange_MR_UndirectedEdgeIterator_OffsetPtr(const MR_IteratorRange_MR_UndirectedEdgeIterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IteratorRange_MR_UndirectedEdgeIterator *MR_IteratorRange_MR_UndirectedEdgeIterator_OffsetMutablePtr(MR_IteratorRange_MR_UndirectedEdgeIterator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IteratorRange<MR::UndirectedEdgeIterator>`.
/// Parameter `begin` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_UndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_UndirectedEdgeIterator *MR_IteratorRange_MR_UndirectedEdgeIterator_Construct(const MR_UndirectedEdgeIterator *begin, const MR_UndirectedEdgeIterator *end);

/// Destroys a heap-allocated instance of `MR_IteratorRange_MR_UndirectedEdgeIterator`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_UndirectedEdgeIterator_Destroy(const MR_IteratorRange_MR_UndirectedEdgeIterator *_this);

/// Destroys a heap-allocated array of `MR_IteratorRange_MR_UndirectedEdgeIterator`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_UndirectedEdgeIterator_DestroyArray(const MR_IteratorRange_MR_UndirectedEdgeIterator *_this);

/// Generated from a method of class `MR::IteratorRange<MR::UndirectedEdgeIterator>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IteratorRange_MR_UndirectedEdgeIterator *MR_IteratorRange_MR_UndirectedEdgeIterator_AssignFromAnother(MR_IteratorRange_MR_UndirectedEdgeIterator *_this, const MR_IteratorRange_MR_UndirectedEdgeIterator *_other);

/// Generated from function `MR::begin`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeIterator *MR_begin_MR_IteratorRange_MR_UndirectedEdgeIterator(const MR_IteratorRange_MR_UndirectedEdgeIterator *range);

/// Generated from function `MR::end`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_UndirectedEdgeIterator *MR_end_MR_IteratorRange_MR_UndirectedEdgeIterator(const MR_IteratorRange_MR_UndirectedEdgeIterator *range);

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RingIterator_MR_NextEdgeSameOrigin *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Get_begin_(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Set_begin_(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_this, const MR_RingIterator_MR_NextEdgeSameOrigin *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_GetMutable_begin_(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RingIterator_MR_NextEdgeSameOrigin *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Get_end_(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Set_end_(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_this, const MR_RingIterator_MR_NextEdgeSameOrigin *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_GetMutable_end_(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Generated from a constructor of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_ConstructFromAnother(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_OffsetPtr(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_OffsetMutablePtr(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>`.
/// Parameter `begin` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Construct(const MR_RingIterator_MR_NextEdgeSameOrigin *begin, const MR_RingIterator_MR_NextEdgeSameOrigin *end);

/// Destroys a heap-allocated instance of `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_Destroy(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Destroys a heap-allocated array of `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_DestroyArray(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_this);

/// Generated from a method of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameOrigin>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin_AssignFromAnother(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_this, const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *_other);

/// Generated from function `MR::begin`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RingIterator_MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_begin_MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *range);

/// Generated from function `MR::end`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RingIterator_MR_NextEdgeSameOrigin_Destroy()` to free it when you're done using it.
MRC_API MR_RingIterator_MR_NextEdgeSameOrigin *MR_end_MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameOrigin *range);

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RingIterator_MR_NextEdgeSameLeft *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Get_begin_(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Set_begin_(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_this, const MR_RingIterator_MR_NextEdgeSameLeft *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_GetMutable_begin_(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RingIterator_MR_NextEdgeSameLeft *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Get_end_(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Set_end_(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_this, const MR_RingIterator_MR_NextEdgeSameLeft *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_GetMutable_end_(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Generated from a constructor of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_ConstructFromAnother(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_OffsetPtr(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_OffsetMutablePtr(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>`.
/// Parameter `begin` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Construct(const MR_RingIterator_MR_NextEdgeSameLeft *begin, const MR_RingIterator_MR_NextEdgeSameLeft *end);

/// Destroys a heap-allocated instance of `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_Destroy(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Destroys a heap-allocated array of `MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_DestroyArray(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_this);

/// Generated from a method of class `MR::IteratorRange<MR::RingIterator<MR::NextEdgeSameLeft>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft_AssignFromAnother(MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_this, const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *_other);

/// Generated from function `MR::begin`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RingIterator_MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_begin_MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *range);

/// Generated from function `MR::end`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RingIterator_MR_NextEdgeSameLeft_Destroy()` to free it when you're done using it.
MRC_API MR_RingIterator_MR_NextEdgeSameLeft *MR_end_MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft(const MR_IteratorRange_MR_RingIterator_MR_NextEdgeSameLeft *range);

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PolylineUndirectedEdgeIterator *MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_Get_begin_(const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_Set_begin_(MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_this, const MR_PolylineUndirectedEdgeIterator *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>` named `begin_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_GetMutable_begin_(MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_this);

/// Returns a pointer to a member variable of class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PolylineUndirectedEdgeIterator *MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_Get_end_(const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_this);

/// Modifies a member variable of class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_Set_end_(MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_this, const MR_PolylineUndirectedEdgeIterator *value);

/// Returns a mutable pointer to a member variable of class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>` named `end_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_GetMutable_end_(MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_this);

/// Generated from a constructor of class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_ConstructFromAnother(const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_OffsetPtr(const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_OffsetMutablePtr(MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>`.
/// Parameter `begin` can not be null. It is a single object.
/// Parameter `end` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_Construct(const MR_PolylineUndirectedEdgeIterator *begin, const MR_PolylineUndirectedEdgeIterator *end);

/// Destroys a heap-allocated instance of `MR_IteratorRange_MR_PolylineUndirectedEdgeIterator`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_Destroy(const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_this);

/// Destroys a heap-allocated array of `MR_IteratorRange_MR_PolylineUndirectedEdgeIterator`. Does nothing if the pointer is null.
MRC_API void MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_DestroyArray(const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_this);

/// Generated from a method of class `MR::IteratorRange<MR::PolylineUndirectedEdgeIterator>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *MR_IteratorRange_MR_PolylineUndirectedEdgeIterator_AssignFromAnother(MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_this, const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *_other);

/// Generated from function `MR::begin`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineUndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_begin_MR_IteratorRange_MR_PolylineUndirectedEdgeIterator(const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *range);

/// Generated from function `MR::end`.
/// Parameter `range` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PolylineUndirectedEdgeIterator_Destroy()` to free it when you're done using it.
MRC_API MR_PolylineUndirectedEdgeIterator *MR_end_MR_IteratorRange_MR_PolylineUndirectedEdgeIterator(const MR_IteratorRange_MR_PolylineUndirectedEdgeIterator *range);

#ifdef __cplusplus
} // extern "C"
#endif
