// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_vector_MR_Heap_float_MR_GraphVertId_std_greater_float_Element MR_std_vector_MR_Heap_float_MR_GraphVertId_std_greater_float_Element; // Defined in `#include <MRCMisc/std_vector_MR_Heap_float_MR_GraphVertId_std_greater_float_Element.h>`.


/**
* \brief stores map from element id in[0, size) to T;
* \details provides two operations:
* 1) change the value of any element;
* 2) find the element with the largest value
*/
/// Generated from class `MR::Heap<float, MR::GraphVertId, std::greater<float>>`.
typedef struct MR_Heap_float_MR_GraphVertId_std_greater_float MR_Heap_float_MR_GraphVertId_std_greater_float;

/// Generated from class `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element`.
typedef struct MR_Heap_float_MR_GraphVertId_std_greater_float_Element MR_Heap_float_MR_GraphVertId_std_greater_float_Element;

/// Generated from a constructor of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Heap_float_MR_GraphVertId_std_greater_float_Destroy()` to free it when you're done using it.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float *MR_Heap_float_MR_GraphVertId_std_greater_float_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Heap_float_MR_GraphVertId_std_greater_float *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Heap_float_MR_GraphVertId_std_greater_float *MR_Heap_float_MR_GraphVertId_std_greater_float_OffsetPtr(const MR_Heap_float_MR_GraphVertId_std_greater_float *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float *MR_Heap_float_MR_GraphVertId_std_greater_float_OffsetMutablePtr(MR_Heap_float_MR_GraphVertId_std_greater_float *ptr, ptrdiff_t i);

/// constructs heap for given number of elements, assigning given default value to each element
/// Generated from a constructor of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>`.
/// Parameter `def` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Heap_float_MR_GraphVertId_std_greater_float_Destroy()` to free it when you're done using it.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float *MR_Heap_float_MR_GraphVertId_std_greater_float_Construct_3(MR_uint64_t size, const float *def);

/// constructs heap from given elements (id's shall not repeat and have spaces, but can be arbitrary shuffled)
/// Generated from a constructor of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Heap_float_MR_GraphVertId_std_greater_float_Destroy()` to free it when you're done using it.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float *MR_Heap_float_MR_GraphVertId_std_greater_float_Construct_2(MR_PassBy elms_pass_by, MR_std_vector_MR_Heap_float_MR_GraphVertId_std_greater_float_Element *elms);

/// Destroys a heap-allocated instance of `MR_Heap_float_MR_GraphVertId_std_greater_float`. Does nothing if the pointer is null.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_Destroy(const MR_Heap_float_MR_GraphVertId_std_greater_float *_this);

/// Destroys a heap-allocated array of `MR_Heap_float_MR_GraphVertId_std_greater_float`. Does nothing if the pointer is null.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_DestroyArray(const MR_Heap_float_MR_GraphVertId_std_greater_float *_this);

/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float *MR_Heap_float_MR_GraphVertId_std_greater_float_AssignFromAnother(MR_Heap_float_MR_GraphVertId_std_greater_float *_this, MR_PassBy _other_pass_by, MR_Heap_float_MR_GraphVertId_std_greater_float *_other);

/// returns the size of the heap
/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_Heap_float_MR_GraphVertId_std_greater_float_size(const MR_Heap_float_MR_GraphVertId_std_greater_float *_this);

/// increases the size of the heap by adding elements at the end
/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>` named `resize`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `def` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_resize(MR_Heap_float_MR_GraphVertId_std_greater_float *_this, MR_uint64_t size, const float *def);

/// returns the value associated with given element
/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>` named `value`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Heap_float_MR_GraphVertId_std_greater_float_value(const MR_Heap_float_MR_GraphVertId_std_greater_float *_this, MR_GraphVertId elemId);

/// returns the element with the largest value
/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>` named `top`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Heap_float_MR_GraphVertId_std_greater_float_Element *MR_Heap_float_MR_GraphVertId_std_greater_float_top(const MR_Heap_float_MR_GraphVertId_std_greater_float *_this);

/// sets new value to given element
/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>` named `setValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `newVal` can not be null. It is a single object.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_setValue(MR_Heap_float_MR_GraphVertId_std_greater_float *_this, MR_GraphVertId elemId, const float *newVal);

/// sets new value to given element, which shall be larger/smaller than the current value
/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>` named `setLargerValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `newVal` can not be null. It is a single object.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_setLargerValue(MR_Heap_float_MR_GraphVertId_std_greater_float *_this, MR_GraphVertId elemId, const float *newVal);

/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>` named `setSmallerValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `newVal` can not be null. It is a single object.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_setSmallerValue(MR_Heap_float_MR_GraphVertId_std_greater_float *_this, MR_GraphVertId elemId, const float *newVal);

/// sets new value to the current top element, returning its previous value
/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>` named `setTopValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `newVal` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Heap_float_MR_GraphVertId_std_greater_float_Element_Destroy()` to free it when you're done using it.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float_Element *MR_Heap_float_MR_GraphVertId_std_greater_float_setTopValue(MR_Heap_float_MR_GraphVertId_std_greater_float *_this, const float *newVal);

/// Returns a pointer to a member variable of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphVertId *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_Get_id(const MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_this);

/// Modifies a member variable of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element` named `id`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_Element_Set_id(MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_this, MR_GraphVertId value);

/// Returns a mutable pointer to a member variable of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_GetMutable_id(MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_this);

/// Returns a pointer to a member variable of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element` named `val`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_Get_val(const MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_this);

/// Modifies a member variable of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element` named `val`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_Element_Set_val(MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element` named `val`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_GetMutable_val(MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Heap_float_MR_GraphVertId_std_greater_float_Element_Destroy()` to free it when you're done using it.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float_Element *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Heap_float_MR_GraphVertId_std_greater_float_Element_DestroyArray()`.
/// Use `MR_Heap_float_MR_GraphVertId_std_greater_float_Element_OffsetMutablePtr()` and `MR_Heap_float_MR_GraphVertId_std_greater_float_Element_OffsetPtr()` to access the array elements.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float_Element *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Heap_float_MR_GraphVertId_std_greater_float_Element_Destroy()` to free it when you're done using it.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float_Element *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_ConstructFrom(MR_GraphVertId id, float val);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Heap_float_MR_GraphVertId_std_greater_float_Element *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_OffsetPtr(const MR_Heap_float_MR_GraphVertId_std_greater_float_Element *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float_Element *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_OffsetMutablePtr(MR_Heap_float_MR_GraphVertId_std_greater_float_Element *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Heap_float_MR_GraphVertId_std_greater_float_Element_Destroy()` to free it when you're done using it.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float_Element *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_ConstructFromAnother(const MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_other);

/// Destroys a heap-allocated instance of `MR_Heap_float_MR_GraphVertId_std_greater_float_Element`. Does nothing if the pointer is null.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_Element_Destroy(const MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_this);

/// Destroys a heap-allocated array of `MR_Heap_float_MR_GraphVertId_std_greater_float_Element`. Does nothing if the pointer is null.
MRC_API void MR_Heap_float_MR_GraphVertId_std_greater_float_Element_DestroyArray(const MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_this);

/// Generated from a method of class `MR::Heap<float, MR::GraphVertId, std::greater<float>>::Element` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Heap_float_MR_GraphVertId_std_greater_float_Element *MR_Heap_float_MR_GraphVertId_std_greater_float_Element_AssignFromAnother(MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_this, const MR_Heap_float_MR_GraphVertId_std_greater_float_Element *_other);

#ifdef __cplusplus
} // extern "C"
#endif
