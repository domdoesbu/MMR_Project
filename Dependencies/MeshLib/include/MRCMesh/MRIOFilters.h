// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_optional_MR_IOFilter MR_std_optional_MR_IOFilter; // Defined in `#include <MRCMisc/std_optional_MR_IOFilter.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_IOFilter MR_std_vector_MR_IOFilter; // Defined in `#include <MRCMisc/std_vector_MR_IOFilter.h>`.


/// Generated from class `MR::IOFilter`.
typedef struct MR_IOFilter MR_IOFilter;

/// Returns a pointer to a member variable of class `MR::IOFilter` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_IOFilter_Get_name(const MR_IOFilter *_this);

/// Modifies a member variable of class `MR::IOFilter` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_IOFilter_Set_name(MR_IOFilter *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::IOFilter` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_IOFilter_GetMutable_name(MR_IOFilter *_this);

// "*.ext" or "*.ext1;*.ext2;*.ext3"
/// Returns a pointer to a member variable of class `MR::IOFilter` named `extensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_IOFilter_Get_extensions(const MR_IOFilter *_this);

// "*.ext" or "*.ext1;*.ext2;*.ext3"
/// Modifies a member variable of class `MR::IOFilter` named `extensions`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_IOFilter_Set_extensions(MR_IOFilter *_this, const char *value, const char *value_end);

// "*.ext" or "*.ext1;*.ext2;*.ext3"
/// Returns a mutable pointer to a member variable of class `MR::IOFilter` named `extensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_IOFilter_GetMutable_extensions(MR_IOFilter *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IOFilter_Destroy()` to free it when you're done using it.
MRC_API MR_IOFilter *MR_IOFilter_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_IOFilter_DestroyArray()`.
/// Use `MR_IOFilter_OffsetMutablePtr()` and `MR_IOFilter_OffsetPtr()` to access the array elements.
MRC_API MR_IOFilter *MR_IOFilter_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IOFilter *MR_IOFilter_OffsetPtr(const MR_IOFilter *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IOFilter *MR_IOFilter_OffsetMutablePtr(MR_IOFilter *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::IOFilter`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IOFilter_Destroy()` to free it when you're done using it.
MRC_API MR_IOFilter *MR_IOFilter_ConstructFromAnother(MR_PassBy _other_pass_by, MR_IOFilter *_other);

/// Generated from a constructor of class `MR::IOFilter`.
/// Parameter `_name` can not be null.
/// If `_name_end` is null, then `_name` is assumed to be null-terminated.
/// Parameter `_ext` can not be null.
/// If `_ext_end` is null, then `_ext` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_IOFilter_Destroy()` to free it when you're done using it.
MRC_API MR_IOFilter *MR_IOFilter_Construct(const char *_name, const char *_name_end, const char *_ext, const char *_ext_end);

/// Destroys a heap-allocated instance of `MR_IOFilter`. Does nothing if the pointer is null.
MRC_API void MR_IOFilter_Destroy(const MR_IOFilter *_this);

/// Destroys a heap-allocated array of `MR_IOFilter`. Does nothing if the pointer is null.
MRC_API void MR_IOFilter_DestroyArray(const MR_IOFilter *_this);

/// Generated from a method of class `MR::IOFilter` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_IOFilter *MR_IOFilter_AssignFromAnother(MR_IOFilter *_this, MR_PassBy _other_pass_by, MR_IOFilter *_other);

/// Generated from a method of class `MR::IOFilter` named `isSupportedExtension`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `ext` can not be null. It is a single object.
MRC_API bool MR_IOFilter_isSupportedExtension(const MR_IOFilter *_this, const MR_std_string *ext);

/// returns union of input filters
/// Generated from function `MR::operator|`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_IOFilter_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_IOFilter *MR_bitor_std_vector_MR_IOFilter(const MR_std_vector_MR_IOFilter *a, const MR_std_vector_MR_IOFilter *b);

/// find a corresponding filter for a given extension
/// Generated from function `MR::findFilter`.
/// Parameter `filters` can not be null. It is a single object.
/// Parameter `extension` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_IOFilter_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_IOFilter *MR_findFilter(const MR_std_vector_MR_IOFilter *filters, const MR_std_string *extension);

#ifdef __cplusplus
} // extern "C"
#endif
