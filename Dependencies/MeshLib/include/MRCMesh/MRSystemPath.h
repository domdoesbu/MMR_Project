// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_filesystem_path MR_std_filesystem_path; // Defined in `#include <MRCMisc/std_filesystem_path.h>`.
typedef struct MR_std_vector_std_array_std_filesystem_path_4 MR_std_vector_std_array_std_filesystem_path_4; // Defined in `#include <MRCMisc/std_vector_std_array_std_filesystem_path_4.h>`.


/// system directory path manager
/// Generated from class `MR::SystemPath`.
typedef struct MR_SystemPath MR_SystemPath;

/// directory category
typedef int32_t MR_SystemPath_Directory;
enum // MR_SystemPath_Directory
{
    /// resources (.json, .png)
    MR_SystemPath_Directory_Resources = 0,
    /// fonts (.ttf, .otf)
    MR_SystemPath_Directory_Fonts = 1,
    /// plugins (.dll, .so, .dylib)
    MR_SystemPath_Directory_Plugins = 2,
    /// Python modules (.pyd, .so, .dylib, .pyi)
    MR_SystemPath_Directory_PythonModules = 3,
    /// Python modules (.pyd, .so, .dylib, .pyi)
    MR_SystemPath_Directory_Count = 4,
};

// supported types of system fonts fonts
typedef int32_t MR_SystemPath_SystemFontType;
enum // MR_SystemPath_SystemFontType
{
    MR_SystemPath_SystemFontType_Regular = 0,
    MR_SystemPath_SystemFontType_Bold = 1,
    MR_SystemPath_SystemFontType_Italic = 2,
    MR_SystemPath_SystemFontType_BoldItalic = 3,
    MR_SystemPath_SystemFontType_Count = 4,
};

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SystemPath_Destroy()` to free it when you're done using it.
MRC_API MR_SystemPath *MR_SystemPath_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SystemPath_DestroyArray()`.
/// Use `MR_SystemPath_OffsetMutablePtr()` and `MR_SystemPath_OffsetPtr()` to access the array elements.
MRC_API MR_SystemPath *MR_SystemPath_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SystemPath *MR_SystemPath_OffsetPtr(const MR_SystemPath *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SystemPath *MR_SystemPath_OffsetMutablePtr(MR_SystemPath *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SystemPath`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SystemPath_Destroy()` to free it when you're done using it.
MRC_API MR_SystemPath *MR_SystemPath_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SystemPath *_other);

/// Destroys a heap-allocated instance of `MR_SystemPath`. Does nothing if the pointer is null.
MRC_API void MR_SystemPath_Destroy(const MR_SystemPath *_this);

/// Destroys a heap-allocated array of `MR_SystemPath`. Does nothing if the pointer is null.
MRC_API void MR_SystemPath_DestroyArray(const MR_SystemPath *_this);

/// Generated from a method of class `MR::SystemPath` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SystemPath *MR_SystemPath_AssignFromAnother(MR_SystemPath *_this, MR_PassBy _other_pass_by, MR_SystemPath *_other);

/// get the directory path for specified category
/// Generated from a method of class `MR::SystemPath` named `getDirectory`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_SystemPath_getDirectory(MR_SystemPath_Directory dir);

/// override the directory path for specified category, useful for custom configurations
/// Generated from a method of class `MR::SystemPath` named `overrideDirectory`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
MRC_API void MR_SystemPath_overrideDirectory(MR_SystemPath_Directory dir, const char *path, const char *path_end);

/// get the resource files' directory path
/// Generated from a method of class `MR::SystemPath` named `getResourcesDirectory`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_SystemPath_getResourcesDirectory(void);

/// get the font files' directory path
/// Generated from a method of class `MR::SystemPath` named `getFontsDirectory`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_SystemPath_getFontsDirectory(void);

/// get the plugin binaries' directory path
/// Generated from a method of class `MR::SystemPath` named `getPluginsDirectory`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_SystemPath_getPluginsDirectory(void);

/// get the Python modules' binaries' directory path
/// Generated from a method of class `MR::SystemPath` named `getPythonModulesDirectory`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_filesystem_path *MR_SystemPath_getPythonModulesDirectory(void);

/// get name all system fonts that have italics, bold, bold italics
/// Generated from a method of class `MR::SystemPath` named `getSystemFonts`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_array_std_filesystem_path_4 *MR_SystemPath_getSystemFonts(void);

#ifdef __cplusplus
} // extern "C"
#endif
