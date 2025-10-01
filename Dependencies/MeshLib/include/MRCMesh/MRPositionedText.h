// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Generated from class `MR::PositionedText`.
typedef struct MR_PositionedText MR_PositionedText;

/// Returns a pointer to a member variable of class `MR::PositionedText` named `text`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_PositionedText_Get_text(const MR_PositionedText *_this);

/// Modifies a member variable of class `MR::PositionedText` named `text`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_PositionedText_Set_text(MR_PositionedText *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::PositionedText` named `text`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_PositionedText_GetMutable_text(MR_PositionedText *_this);

/// Returns a pointer to a member variable of class `MR::PositionedText` named `position`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_PositionedText_Get_position(const MR_PositionedText *_this);

/// Modifies a member variable of class `MR::PositionedText` named `position`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PositionedText_Set_position(MR_PositionedText *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::PositionedText` named `position`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_PositionedText_GetMutable_position(MR_PositionedText *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PositionedText_Destroy()` to free it when you're done using it.
MRC_API MR_PositionedText *MR_PositionedText_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PositionedText_DestroyArray()`.
/// Use `MR_PositionedText_OffsetMutablePtr()` and `MR_PositionedText_OffsetPtr()` to access the array elements.
MRC_API MR_PositionedText *MR_PositionedText_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PositionedText *MR_PositionedText_OffsetPtr(const MR_PositionedText *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PositionedText *MR_PositionedText_OffsetMutablePtr(MR_PositionedText *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PositionedText`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PositionedText_Destroy()` to free it when you're done using it.
MRC_API MR_PositionedText *MR_PositionedText_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PositionedText *_other);

/// Generated from a constructor of class `MR::PositionedText`.
/// Parameter `text` can not be null. It is a single object.
/// Parameter `position` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PositionedText_Destroy()` to free it when you're done using it.
MRC_API MR_PositionedText *MR_PositionedText_Construct(const MR_std_string *text, const MR_Vector3f *position);

/// Destroys a heap-allocated instance of `MR_PositionedText`. Does nothing if the pointer is null.
MRC_API void MR_PositionedText_Destroy(const MR_PositionedText *_this);

/// Destroys a heap-allocated array of `MR_PositionedText`. Does nothing if the pointer is null.
MRC_API void MR_PositionedText_DestroyArray(const MR_PositionedText *_this);

/// Generated from a method of class `MR::PositionedText` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PositionedText *MR_PositionedText_AssignFromAnother(MR_PositionedText *_this, MR_PassBy _other_pass_by, MR_PositionedText *_other);

/// Generated from a method of class `MR::PositionedText` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_PositionedText(const MR_PositionedText *_this, const MR_PositionedText *_1);

#ifdef __cplusplus
} // extern "C"
#endif
