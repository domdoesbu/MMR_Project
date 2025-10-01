// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_filesystem_path MR_std_filesystem_path; // Defined in `#include <MRCMisc/std_filesystem_path.h>`.
typedef struct MR_std_function_void_from_const_std_filesystem_path_ref MR_std_function_void_from_const_std_filesystem_path_ref; // Defined in `#include <MRCMisc/std_function_void_from_const_std_filesystem_path_ref.h>`.


/// helper class to create a temporary folder; the folder will be removed on the object's destruction
/// Generated from class `MR::UniqueTemporaryFolder`.
typedef struct MR_UniqueTemporaryFolder MR_UniqueTemporaryFolder;

/// creates new folder in temp directory
/// Generated from a constructor of class `MR::UniqueTemporaryFolder`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniqueTemporaryFolder_Destroy()` to free it when you're done using it.
MRC_API MR_UniqueTemporaryFolder *MR_UniqueTemporaryFolder_Construct(MR_PassBy onPreTempFolderDelete_pass_by, MR_std_function_void_from_const_std_filesystem_path_ref *onPreTempFolderDelete);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UniqueTemporaryFolder *MR_UniqueTemporaryFolder_OffsetPtr(const MR_UniqueTemporaryFolder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UniqueTemporaryFolder *MR_UniqueTemporaryFolder_OffsetMutablePtr(MR_UniqueTemporaryFolder *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_UniqueTemporaryFolder`. Does nothing if the pointer is null.
MRC_API void MR_UniqueTemporaryFolder_Destroy(const MR_UniqueTemporaryFolder *_this);

/// Destroys a heap-allocated array of `MR_UniqueTemporaryFolder`. Does nothing if the pointer is null.
MRC_API void MR_UniqueTemporaryFolder_DestroyArray(const MR_UniqueTemporaryFolder *_this);

/// Generated from a conversion operator of class `MR::UniqueTemporaryFolder` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_UniqueTemporaryFolder_ConvertTo_bool(const MR_UniqueTemporaryFolder *_this);

/// Generated from a conversion operator of class `MR::UniqueTemporaryFolder` to type `const std::filesystem::path &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_filesystem_path *MR_UniqueTemporaryFolder_ConvertTo_const_std_filesystem_path_ref(const MR_UniqueTemporaryFolder *_this);

/// Generated from a method of class `MR::UniqueTemporaryFolder` named `operator/`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `child` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_div_MR_UniqueTemporaryFolder_std_filesystem_path(const MR_UniqueTemporaryFolder *_this, const char *child, const char *child_end);

#ifdef __cplusplus
} // extern "C"
#endif
