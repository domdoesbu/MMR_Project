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
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Generated from class `MR::SystemMemory`.
typedef struct MR_SystemMemory MR_SystemMemory;

// sets debug name for the current thread
/// Generated from function `MR::SetCurrentThreadName`.
MRC_API void MR_SetCurrentThreadName(const char *name);

// return path to the folder with user config file(s)
/// Generated from function `MR::getUserConfigDir`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_getUserConfigDir(void);

// returns path of config file in APPDATA
/// Generated from function `MR::getUserConfigFilePath`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_getUserConfigFilePath(void);

// returns temp directory
/// Generated from function `MR::GetTempDirectory`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_GetTempDirectory(void);

// returns home directory
/// Generated from function `MR::GetHomeDirectory`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_GetHomeDirectory(void);

// returns version of MR
/// Generated from function `MR::GetMRVersionString`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_GetMRVersionString(void);

// Opens given link in default browser
/// Generated from function `MR::OpenLink`.
/// Parameter `url` can not be null. It is a single object.
MRC_API void MR_OpenLink(const MR_std_string *url);

// Opens given file (or directory) in associated application
/// Generated from function `MR::OpenDocument`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
MRC_API bool MR_OpenDocument(const char *path, const char *path_end);

// returns string identification of the CPU
/// Generated from function `MR::GetCpuId`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_GetCpuId(void);

// returns string with OS name with details
/// Generated from function `MR::GetDetailedOSName`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_GetDetailedOSName(void);

// returns string identification of the OS
/// Generated from function `MR::getOSNoSpaces`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_getOSNoSpaces(void);

// sets new handler for operator new if needed for some platforms
/// Generated from function `MR::setNewHandlerIfNeeded`.
MRC_API void MR_setNewHandlerIfNeeded(void);

/// returns string representation of the current stacktrace
/// Generated from function `MR::getCurrentStacktrace`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_getCurrentStacktrace(void);

/// total amount of physical memory in the system, in bytes (0 if no info)
/// Returns a pointer to a member variable of class `MR::SystemMemory` named `physicalTotal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_SystemMemory_Get_physicalTotal(const MR_SystemMemory *_this);

/// total amount of physical memory in the system, in bytes (0 if no info)
/// Modifies a member variable of class `MR::SystemMemory` named `physicalTotal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SystemMemory_Set_physicalTotal(MR_SystemMemory *_this, MR_uint64_t value);

/// total amount of physical memory in the system, in bytes (0 if no info)
/// Returns a mutable pointer to a member variable of class `MR::SystemMemory` named `physicalTotal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_SystemMemory_GetMutable_physicalTotal(MR_SystemMemory *_this);

/// available amount of physical memory in the system, in bytes (0 if no info)
/// Returns a pointer to a member variable of class `MR::SystemMemory` named `physicalAvailable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_SystemMemory_Get_physicalAvailable(const MR_SystemMemory *_this);

/// available amount of physical memory in the system, in bytes (0 if no info)
/// Modifies a member variable of class `MR::SystemMemory` named `physicalAvailable`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SystemMemory_Set_physicalAvailable(MR_SystemMemory *_this, MR_uint64_t value);

/// available amount of physical memory in the system, in bytes (0 if no info)
/// Returns a mutable pointer to a member variable of class `MR::SystemMemory` named `physicalAvailable`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_SystemMemory_GetMutable_physicalAvailable(MR_SystemMemory *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SystemMemory_Destroy()` to free it when you're done using it.
MRC_API MR_SystemMemory *MR_SystemMemory_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SystemMemory_DestroyArray()`.
/// Use `MR_SystemMemory_OffsetMutablePtr()` and `MR_SystemMemory_OffsetPtr()` to access the array elements.
MRC_API MR_SystemMemory *MR_SystemMemory_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SystemMemory` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SystemMemory_Destroy()` to free it when you're done using it.
MRC_API MR_SystemMemory *MR_SystemMemory_ConstructFrom(MR_uint64_t physicalTotal, MR_uint64_t physicalAvailable);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SystemMemory *MR_SystemMemory_OffsetPtr(const MR_SystemMemory *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SystemMemory *MR_SystemMemory_OffsetMutablePtr(MR_SystemMemory *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SystemMemory`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SystemMemory_Destroy()` to free it when you're done using it.
MRC_API MR_SystemMemory *MR_SystemMemory_ConstructFromAnother(const MR_SystemMemory *_other);

/// Destroys a heap-allocated instance of `MR_SystemMemory`. Does nothing if the pointer is null.
MRC_API void MR_SystemMemory_Destroy(const MR_SystemMemory *_this);

/// Destroys a heap-allocated array of `MR_SystemMemory`. Does nothing if the pointer is null.
MRC_API void MR_SystemMemory_DestroyArray(const MR_SystemMemory *_this);

/// Generated from a method of class `MR::SystemMemory` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SystemMemory *MR_SystemMemory_AssignFromAnother(MR_SystemMemory *_this, const MR_SystemMemory *_other);

/// return information about memory available in the system
/// Generated from function `MR::getSystemMemory`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SystemMemory_Destroy()` to free it when you're done using it.
MRC_API MR_SystemMemory *MR_getSystemMemory(void);

/// Setups logger:
/// 1) makes stdout sink
/// 2) makes file sink (MRLog.txt)
/// 3) redirect std streams to logger
/// 4) print stacktrace on crash (not in wasm)
/// log level - trace
/// Generated from function `MR::setupLoggerByDefault`.
MRC_API void MR_setupLoggerByDefault(void);

#ifdef __cplusplus
} // extern "C"
#endif
