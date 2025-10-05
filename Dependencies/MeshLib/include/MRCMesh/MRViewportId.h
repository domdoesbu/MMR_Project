// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif


/// stores unique identifier of a viewport, which is power of two;
/// id=0 has a special meaning of default viewport in some contexts
/// Generated from class `MR::ViewportId`.
typedef struct MR_ViewportId
{
    uint32_t id_;
} MR_ViewportId;

/// stores mask of viewport unique identifiers
/// Generated from class `MR::ViewportMask`.
typedef struct MR_ViewportMask MR_ViewportMask;

/// iterates over all ViewportIds in given ViewportMask
/// Generated from class `MR::ViewportIterator`.
typedef struct MR_ViewportIterator MR_ViewportIterator;

/// Constructs an empty (default-constructed) instance.
MRC_API MR_ViewportId MR_ViewportId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ViewportId_DestroyArray()`.
/// Use `MR_ViewportId_OffsetMutablePtr()` and `MR_ViewportId_OffsetPtr()` to access the array elements.
MRC_API MR_ViewportId *MR_ViewportId_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::ViewportId`.
MRC_API MR_ViewportId MR_ViewportId_Construct(uint32_t i);

/// Generated from a conversion operator of class `MR::ViewportId` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportId_ConvertTo_bool(const MR_ViewportId *_this);

/// Generated from a method of class `MR::ViewportId` named `value`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint32_t MR_ViewportId_value(const MR_ViewportId *_this);

/// Generated from a method of class `MR::ViewportId` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportId_valid(const MR_ViewportId *_this);

/// Generated from a method of class `MR::ViewportId` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_ViewportId(const MR_ViewportId *_this, MR_ViewportId b);

/// Generated from a method of class `MR::ViewportId` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_ViewportId(const MR_ViewportId *_this, MR_ViewportId b);

/// Generated from a method of class `MR::ViewportId` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_less_MR_ViewportId(const MR_ViewportId *_this, MR_ViewportId b);

/// Generated from a method of class `MR::ViewportId` named `next`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ViewportId MR_ViewportId_next(const MR_ViewportId *_this);

/// Generated from a method of class `MR::ViewportId` named `prev`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ViewportId MR_ViewportId_prev(const MR_ViewportId *_this);

/// Returns a pointer to a member variable of class `MR::ViewportMask` named `mask_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint32_t *MR_ViewportMask_Get_mask_(const MR_ViewportMask *_this);

/// Modifies a member variable of class `MR::ViewportMask` named `mask_`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ViewportMask_Set_mask_(MR_ViewportMask *_this, uint32_t value);

/// Returns a mutable pointer to a member variable of class `MR::ViewportMask` named `mask_`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint32_t *MR_ViewportMask_GetMutable_mask_(MR_ViewportMask *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_ViewportMask_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ViewportMask_DestroyArray()`.
/// Use `MR_ViewportMask_OffsetMutablePtr()` and `MR_ViewportMask_OffsetPtr()` to access the array elements.
MRC_API MR_ViewportMask *MR_ViewportMask_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ViewportMask *MR_ViewportMask_OffsetPtr(const MR_ViewportMask *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ViewportMask *MR_ViewportMask_OffsetMutablePtr(MR_ViewportMask *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ViewportMask`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_ViewportMask_ConstructFromAnother(const MR_ViewportMask *_other);

/// Generated from a constructor of class `MR::ViewportMask`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_ViewportMask_Construct_uint32_t(uint32_t i);

/// Generated from a constructor of class `MR::ViewportMask`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_ViewportMask_Construct_MR_ViewportId(MR_ViewportId i);

/// Destroys a heap-allocated instance of `MR_ViewportMask`. Does nothing if the pointer is null.
MRC_API void MR_ViewportMask_Destroy(const MR_ViewportMask *_this);

/// Destroys a heap-allocated array of `MR_ViewportMask`. Does nothing if the pointer is null.
MRC_API void MR_ViewportMask_DestroyArray(const MR_ViewportMask *_this);

/// Generated from a method of class `MR::ViewportMask` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportMask *MR_ViewportMask_AssignFromAnother(MR_ViewportMask *_this, const MR_ViewportMask *_other);

/// mask meaning all or any viewports
/// Generated from a method of class `MR::ViewportMask` named `all`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_ViewportMask_all(void);

/// Generated from a method of class `MR::ViewportMask` named `any`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_ViewportMask_any(void);

/// Generated from a method of class `MR::ViewportMask` named `value`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint32_t MR_ViewportMask_value(const MR_ViewportMask *_this);

/// Generated from a method of class `MR::ViewportMask` named `empty`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportMask_empty(const MR_ViewportMask *_this);

/// Generated from a method of class `MR::ViewportMask` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ViewportMask_contains(const MR_ViewportMask *_this, MR_ViewportId id);

/// Generated from a method of class `MR::ViewportMask` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_ViewportMask(const MR_ViewportMask *_this, const MR_ViewportMask *b);

/// Generated from a method of class `MR::ViewportMask` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_ViewportMask(const MR_ViewportMask *_this, const MR_ViewportMask *b);

/// Generated from a method of class `MR::ViewportMask` named `operator<`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_less_MR_ViewportMask(const MR_ViewportMask *_this, const MR_ViewportMask *b);

/// Generated from a method of class `MR::ViewportMask` named `operator~`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_compl_MR_ViewportMask(const MR_ViewportMask *_this);

/// Generated from a method of class `MR::ViewportMask` named `operator&=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportMask *MR_ViewportMask_bitand_assign(MR_ViewportMask *_this, const MR_ViewportMask *b);

/// Generated from a method of class `MR::ViewportMask` named `operator|=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportMask *MR_ViewportMask_bitor_assign(MR_ViewportMask *_this, const MR_ViewportMask *b);

/// Generated from a method of class `MR::ViewportMask` named `operator^=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportMask *MR_ViewportMask_xor_assign(MR_ViewportMask *_this, const MR_ViewportMask *b);

/// Generated from a method of class `MR::ViewportMask` named `set`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `on` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ViewportMask_set(MR_ViewportMask *_this, MR_ViewportId id, const bool *on);

/// Generated from function `MR::operator&`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_bitand_MR_ViewportMask(const MR_ViewportMask *a, const MR_ViewportMask *b);

/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_bitor_MR_ViewportMask(const MR_ViewportMask *a, const MR_ViewportMask *b);

/// Generated from function `MR::operator^`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_xor_MR_ViewportMask(const MR_ViewportMask *a, const MR_ViewportMask *b);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportIterator *MR_ViewportIterator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ViewportIterator_DestroyArray()`.
/// Use `MR_ViewportIterator_OffsetMutablePtr()` and `MR_ViewportIterator_OffsetPtr()` to access the array elements.
MRC_API MR_ViewportIterator *MR_ViewportIterator_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ViewportIterator *MR_ViewportIterator_OffsetPtr(const MR_ViewportIterator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ViewportIterator *MR_ViewportIterator_OffsetMutablePtr(MR_ViewportIterator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ViewportIterator`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportIterator *MR_ViewportIterator_ConstructFromAnother(const MR_ViewportIterator *_other);

/// constructs begin iterator
/// Generated from a constructor of class `MR::ViewportIterator`.
/// Parameter `mask` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportIterator *MR_ViewportIterator_Construct(const MR_ViewportMask *mask);

/// Destroys a heap-allocated instance of `MR_ViewportIterator`. Does nothing if the pointer is null.
MRC_API void MR_ViewportIterator_Destroy(const MR_ViewportIterator *_this);

/// Destroys a heap-allocated array of `MR_ViewportIterator`. Does nothing if the pointer is null.
MRC_API void MR_ViewportIterator_DestroyArray(const MR_ViewportIterator *_this);

/// Generated from a method of class `MR::ViewportIterator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportIterator *MR_ViewportIterator_AssignFromAnother(MR_ViewportIterator *_this, const MR_ViewportIterator *_other);

/// Generated from a method of class `MR::ViewportIterator` named `operator++`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportIterator *MR_incr_MR_ViewportIterator(MR_ViewportIterator *_this);

/// Generated from a method of class `MR::ViewportIterator` named `mask`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportMask *MR_ViewportIterator_mask(const MR_ViewportIterator *_this);

/// Generated from a method of class `MR::ViewportIterator` named `operator*`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ViewportId MR_deref_MR_ViewportIterator(const MR_ViewportIterator *_this);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_ViewportIterator(const MR_ViewportIterator *a, const MR_ViewportIterator *b);

/// Generated from function `MR::begin`.
/// Parameter `mask` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportIterator *MR_begin_MR_ViewportMask(const MR_ViewportMask *mask);

/// Generated from function `MR::end`.
/// Parameter `_1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ViewportIterator_Destroy()` to free it when you're done using it.
MRC_API MR_ViewportIterator *MR_end_MR_ViewportMask(const MR_ViewportMask *_1);

#ifdef __cplusplus
} // extern "C"
#endif
