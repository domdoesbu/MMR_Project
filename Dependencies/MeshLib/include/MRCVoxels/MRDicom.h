// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_SimpleVolumeMinMax MR_SimpleVolumeMinMax; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleVolumeU16 MR_SimpleVolumeU16; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_expected_MR_LoadedObjects_std_string MR_expected_MR_LoadedObjects_std_string; // Defined in `#include <MRCMisc/expected_MR_LoadedObjects_std_string.h>`.
typedef struct MR_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string MR_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string; // Defined in `#include <MRCMisc/expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string.h>`.
typedef struct MR_expected_MR_VoxelsLoad_DicomVolume_std_string MR_expected_MR_VoxelsLoad_DicomVolume_std_string; // Defined in `#include <MRCMisc/expected_MR_VoxelsLoad_DicomVolume_std_string.h>`.
typedef struct MR_expected_std_shared_ptr_MR_ObjectVoxels_std_string MR_expected_std_shared_ptr_MR_ObjectVoxels_std_string; // Defined in `#include <MRCMisc/expected_std_shared_ptr_MR_ObjectVoxels_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_Box1f MR_std_optional_MR_Box1f; // Defined in `#include <MRCMisc/std_optional_MR_Box1f.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string MR_std_vector_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string; // Defined in `#include <MRCMisc/std_vector_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string.h>`.
typedef struct MR_std_vector_expected_MR_VoxelsLoad_DicomVolume_std_string MR_std_vector_expected_MR_VoxelsLoad_DicomVolume_std_string; // Defined in `#include <MRCMisc/std_vector_expected_MR_VoxelsLoad_DicomVolume_std_string.h>`.
typedef struct MR_std_vector_std_filesystem_path MR_std_vector_std_filesystem_path; // Defined in `#include <MRCMisc/std_vector_std_filesystem_path.h>`.


/// Generated from class `MR::VoxelsLoad::DicomVolume`.
typedef struct MR_VoxelsLoad_DicomVolume MR_VoxelsLoad_DicomVolume;

/// Generated from class `MR::VoxelsLoad::DicomVolumeAsVdb`.
typedef struct MR_VoxelsLoad_DicomVolumeAsVdb MR_VoxelsLoad_DicomVolumeAsVdb;

typedef int32_t MR_VoxelsLoad_DicomStatusEnum;
enum // MR_VoxelsLoad_DicomStatusEnum
{
    // valid DICOM and we can open it
    MR_VoxelsLoad_DicomStatusEnum_Ok = 0,
    // not a valid DICOM
    MR_VoxelsLoad_DicomStatusEnum_Invalid = 1,
    // a valid DICOM, but we do not support it (e.g. some MediaStorages)
    MR_VoxelsLoad_DicomStatusEnum_Unsupported = 2,
};

/// Generated from class `MR::VoxelsLoad::DicomStatus`.
typedef struct MR_VoxelsLoad_DicomStatus MR_VoxelsLoad_DicomStatus;

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::DicomVolume` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SimpleVolumeMinMax *MR_VoxelsLoad_DicomVolume_Get_vol(const MR_VoxelsLoad_DicomVolume *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::DicomVolume` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_DicomVolume_Set_vol(MR_VoxelsLoad_DicomVolume *_this, MR_PassBy value_pass_by, MR_SimpleVolumeMinMax *value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::DicomVolume` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SimpleVolumeMinMax *MR_VoxelsLoad_DicomVolume_GetMutable_vol(MR_VoxelsLoad_DicomVolume *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::DicomVolume` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_VoxelsLoad_DicomVolume_Get_name(const MR_VoxelsLoad_DicomVolume *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::DicomVolume` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_VoxelsLoad_DicomVolume_Set_name(MR_VoxelsLoad_DicomVolume *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::DicomVolume` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_VoxelsLoad_DicomVolume_GetMutable_name(MR_VoxelsLoad_DicomVolume *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::DicomVolume` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_VoxelsLoad_DicomVolume_Get_xf(const MR_VoxelsLoad_DicomVolume *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::DicomVolume` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_DicomVolume_Set_xf(MR_VoxelsLoad_DicomVolume *_this, MR_AffineXf3f value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::DicomVolume` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_VoxelsLoad_DicomVolume_GetMutable_xf(MR_VoxelsLoad_DicomVolume *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_DicomVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_DicomVolume *MR_VoxelsLoad_DicomVolume_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelsLoad_DicomVolume_DestroyArray()`.
/// Use `MR_VoxelsLoad_DicomVolume_OffsetMutablePtr()` and `MR_VoxelsLoad_DicomVolume_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelsLoad_DicomVolume *MR_VoxelsLoad_DicomVolume_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VoxelsLoad::DicomVolume` elementwise.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_DicomVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_DicomVolume *MR_VoxelsLoad_DicomVolume_ConstructFrom(MR_PassBy vol_pass_by, MR_SimpleVolumeMinMax *vol, const char *name, const char *name_end, MR_AffineXf3f xf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsLoad_DicomVolume *MR_VoxelsLoad_DicomVolume_OffsetPtr(const MR_VoxelsLoad_DicomVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsLoad_DicomVolume *MR_VoxelsLoad_DicomVolume_OffsetMutablePtr(MR_VoxelsLoad_DicomVolume *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelsLoad::DicomVolume`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_DicomVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_DicomVolume *MR_VoxelsLoad_DicomVolume_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VoxelsLoad_DicomVolume *_other);

/// Destroys a heap-allocated instance of `MR_VoxelsLoad_DicomVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_DicomVolume_Destroy(const MR_VoxelsLoad_DicomVolume *_this);

/// Destroys a heap-allocated array of `MR_VoxelsLoad_DicomVolume`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_DicomVolume_DestroyArray(const MR_VoxelsLoad_DicomVolume *_this);

/// Generated from a method of class `MR::VoxelsLoad::DicomVolume` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsLoad_DicomVolume *MR_VoxelsLoad_DicomVolume_AssignFromAnother(MR_VoxelsLoad_DicomVolume *_this, MR_PassBy _other_pass_by, MR_VoxelsLoad_DicomVolume *_other);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VdbVolume *MR_VoxelsLoad_DicomVolumeAsVdb_Get_vol(const MR_VoxelsLoad_DicomVolumeAsVdb *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_DicomVolumeAsVdb_Set_vol(MR_VoxelsLoad_DicomVolumeAsVdb *_this, MR_PassBy value_pass_by, MR_VdbVolume *value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `vol`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VdbVolume *MR_VoxelsLoad_DicomVolumeAsVdb_GetMutable_vol(MR_VoxelsLoad_DicomVolumeAsVdb *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_VoxelsLoad_DicomVolumeAsVdb_Get_name(const MR_VoxelsLoad_DicomVolumeAsVdb *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_VoxelsLoad_DicomVolumeAsVdb_Set_name(MR_VoxelsLoad_DicomVolumeAsVdb *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_VoxelsLoad_DicomVolumeAsVdb_GetMutable_name(MR_VoxelsLoad_DicomVolumeAsVdb *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_VoxelsLoad_DicomVolumeAsVdb_Get_xf(const MR_VoxelsLoad_DicomVolumeAsVdb *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_DicomVolumeAsVdb_Set_xf(MR_VoxelsLoad_DicomVolumeAsVdb *_this, MR_AffineXf3f value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_VoxelsLoad_DicomVolumeAsVdb_GetMutable_xf(MR_VoxelsLoad_DicomVolumeAsVdb *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_DicomVolumeAsVdb_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_DicomVolumeAsVdb *MR_VoxelsLoad_DicomVolumeAsVdb_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelsLoad_DicomVolumeAsVdb_DestroyArray()`.
/// Use `MR_VoxelsLoad_DicomVolumeAsVdb_OffsetMutablePtr()` and `MR_VoxelsLoad_DicomVolumeAsVdb_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelsLoad_DicomVolumeAsVdb *MR_VoxelsLoad_DicomVolumeAsVdb_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VoxelsLoad::DicomVolumeAsVdb` elementwise.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_DicomVolumeAsVdb_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_DicomVolumeAsVdb *MR_VoxelsLoad_DicomVolumeAsVdb_ConstructFrom(MR_PassBy vol_pass_by, MR_VdbVolume *vol, const char *name, const char *name_end, MR_AffineXf3f xf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsLoad_DicomVolumeAsVdb *MR_VoxelsLoad_DicomVolumeAsVdb_OffsetPtr(const MR_VoxelsLoad_DicomVolumeAsVdb *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsLoad_DicomVolumeAsVdb *MR_VoxelsLoad_DicomVolumeAsVdb_OffsetMutablePtr(MR_VoxelsLoad_DicomVolumeAsVdb *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelsLoad::DicomVolumeAsVdb`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_DicomVolumeAsVdb_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_DicomVolumeAsVdb *MR_VoxelsLoad_DicomVolumeAsVdb_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VoxelsLoad_DicomVolumeAsVdb *_other);

/// Destroys a heap-allocated instance of `MR_VoxelsLoad_DicomVolumeAsVdb`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_DicomVolumeAsVdb_Destroy(const MR_VoxelsLoad_DicomVolumeAsVdb *_this);

/// Destroys a heap-allocated array of `MR_VoxelsLoad_DicomVolumeAsVdb`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_DicomVolumeAsVdb_DestroyArray(const MR_VoxelsLoad_DicomVolumeAsVdb *_this);

/// Generated from a method of class `MR::VoxelsLoad::DicomVolumeAsVdb` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsLoad_DicomVolumeAsVdb *MR_VoxelsLoad_DicomVolumeAsVdb_AssignFromAnother(MR_VoxelsLoad_DicomVolumeAsVdb *_this, MR_PassBy _other_pass_by, MR_VoxelsLoad_DicomVolumeAsVdb *_other);

/// Returns a pointer to a member variable of class `MR::VoxelsLoad::DicomStatus` named `status`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VoxelsLoad_DicomStatusEnum *MR_VoxelsLoad_DicomStatus_Get_status(const MR_VoxelsLoad_DicomStatus *_this);

/// Modifies a member variable of class `MR::VoxelsLoad::DicomStatus` named `status`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsLoad_DicomStatus_Set_status(MR_VoxelsLoad_DicomStatus *_this, MR_VoxelsLoad_DicomStatusEnum value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::DicomStatus` named `status`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsLoad_DicomStatusEnum *MR_VoxelsLoad_DicomStatus_GetMutable_status(MR_VoxelsLoad_DicomStatus *_this);

// if status is Unsupported, specify reason why
/// Returns a pointer to a member variable of class `MR::VoxelsLoad::DicomStatus` named `reason`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_VoxelsLoad_DicomStatus_Get_reason(const MR_VoxelsLoad_DicomStatus *_this);

// if status is Unsupported, specify reason why
/// Modifies a member variable of class `MR::VoxelsLoad::DicomStatus` named `reason`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_VoxelsLoad_DicomStatus_Set_reason(MR_VoxelsLoad_DicomStatus *_this, const char *value, const char *value_end);

// if status is Unsupported, specify reason why
/// Returns a mutable pointer to a member variable of class `MR::VoxelsLoad::DicomStatus` named `reason`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_VoxelsLoad_DicomStatus_GetMutable_reason(MR_VoxelsLoad_DicomStatus *_this);

/// Generated from a constructor of class `MR::VoxelsLoad::DicomStatus`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_DicomStatus_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_DicomStatus *MR_VoxelsLoad_DicomStatus_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VoxelsLoad_DicomStatus *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsLoad_DicomStatus *MR_VoxelsLoad_DicomStatus_OffsetPtr(const MR_VoxelsLoad_DicomStatus *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsLoad_DicomStatus *MR_VoxelsLoad_DicomStatus_OffsetMutablePtr(MR_VoxelsLoad_DicomStatus *ptr, ptrdiff_t i);

// implicit by design
/// Generated from a constructor of class `MR::VoxelsLoad::DicomStatus`.
/// If `rs_end` is null, then `rs` is assumed to be null-terminated.
/// Non-null `rs_end` requires a non-null `rs`.
/// Parameter `rs` has a default argument: `""`, pass a null pointer to both it and `rs_end` to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_DicomStatus_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_DicomStatus *MR_VoxelsLoad_DicomStatus_Construct(MR_VoxelsLoad_DicomStatusEnum st, const char *rs, const char *rs_end);

/// Destroys a heap-allocated instance of `MR_VoxelsLoad_DicomStatus`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_DicomStatus_Destroy(const MR_VoxelsLoad_DicomStatus *_this);

/// Destroys a heap-allocated array of `MR_VoxelsLoad_DicomStatus`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsLoad_DicomStatus_DestroyArray(const MR_VoxelsLoad_DicomStatus *_this);

/// Generated from a conversion operator of class `MR::VoxelsLoad::DicomStatus` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_VoxelsLoad_DicomStatus_ConvertTo_bool(const MR_VoxelsLoad_DicomStatus *_this);

/// Generated from a method of class `MR::VoxelsLoad::DicomStatus` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsLoad_DicomStatus *MR_VoxelsLoad_DicomStatus_AssignFromAnother(MR_VoxelsLoad_DicomStatus *_this, MR_PassBy _other_pass_by, MR_VoxelsLoad_DicomStatus *_other);

/// Generated from a method of class `MR::VoxelsLoad::DicomStatus` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_VoxelsLoad_DicomStatus_MR_VoxelsLoad_DicomStatusEnum(const MR_VoxelsLoad_DicomStatus *_this, MR_VoxelsLoad_DicomStatusEnum s);

/// check if file is a valid DICOM dataset file
/// \param seriesUid - if set, the extracted series instance UID is copied to the variable
/// Generated from function `MR::VoxelsLoad::isDicomFile`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `seriesUid` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsLoad_DicomStatus_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsLoad_DicomStatus *MR_VoxelsLoad_isDicomFile(const char *path, const char *path_end, MR_std_string *seriesUid);

/// check if given folder contains at least one DICOM file
/// Generated from function `MR::VoxelsLoad::isDicomFolder`.
/// Parameter `dirPath` is a UTF-8 encoded filesystem path.
MRC_API bool MR_VoxelsLoad_isDicomFolder(const char *dirPath, const char *dirPath_end);

/// returns all the dicom folders in \p path, searching recursively
/// Generated from function `MR::VoxelsLoad::findDicomFoldersRecursively`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_filesystem_path_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_filesystem_path *MR_VoxelsLoad_findDicomFoldersRecursively(const char *path, const char *path_end);

/// Loads full volume from single DICOM file (not a slice file) as SimpleVolumeMinMax
/// Generated from function `MR::VoxelsLoad::loadDicomFile`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VoxelsLoad_DicomVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VoxelsLoad_DicomVolume_std_string *MR_VoxelsLoad_loadDicomFile(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// Loads full volume from single DICOM file (not a slice file) as VdbVolume
/// Generated from function `MR::VoxelsLoad::loadDicomFileAsVdb`.
/// Parameter `file` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string *MR_VoxelsLoad_loadDicomFileAsVdb(const char *file, const char *file_end, const MR_std_function_bool_from_float *cb);

/// Loads one volume from DICOM files located in given folder as SimpleVolumeMinMax
/// Generated from function `MR::VoxelsLoad::loadDicomFolder`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VoxelsLoad_DicomVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VoxelsLoad_DicomVolume_std_string *MR_VoxelsLoad_loadDicomFolder(const char *path, const char *path_end, uint32_t maxNumThreads, const MR_std_function_bool_from_float *cb);

/// Loads one volume from DICOM files located in given folder as VdbVolume
/// Generated from function `MR::VoxelsLoad::loadDicomFolderAsVdb`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string *MR_VoxelsLoad_loadDicomFolderAsVdb(const char *path, const char *path_end, uint32_t maxNumThreads, const MR_std_function_bool_from_float *cb);

/// Loads all volumes from DICOM files located in given folder as a number of SimpleVolumeMinMax
/// Generated from function `MR::VoxelsLoad::loadDicomsFolder`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_expected_MR_VoxelsLoad_DicomVolume_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_expected_MR_VoxelsLoad_DicomVolume_std_string *MR_VoxelsLoad_loadDicomsFolder(const char *path, const char *path_end, uint32_t maxNumThreads, const MR_std_function_bool_from_float *cb);

/// Loads all volumes from DICOM files located in given folder as a number of VdbVolume
/// Generated from function `MR::VoxelsLoad::loadDicomsFolderAsVdb`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string *MR_VoxelsLoad_loadDicomsFolderAsVdb(const char *path, const char *path_end, uint32_t maxNumThreads, const MR_std_function_bool_from_float *cb);

/// Loads every subfolder with DICOM volume as new object
/// Generated from function `MR::VoxelsLoad::loadDicomsFolderTreeAsVdb`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `maxNumThreads` has a default argument: `4`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_expected_MR_VoxelsLoad_DicomVolumeAsVdb_std_string *MR_VoxelsLoad_loadDicomsFolderTreeAsVdb(const char *path, const char *path_end, const uint32_t *maxNumThreads, const MR_std_function_bool_from_float *cb);

/// converts DicomVolumeAsVdb in ObjectVoxels
/// Generated from function `MR::VoxelsLoad::createObjectVoxels`.
/// Parameter `dcm` can not be null. It is a single object.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_shared_ptr_MR_ObjectVoxels_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_shared_ptr_MR_ObjectVoxels_std_string *MR_VoxelsLoad_createObjectVoxels(const MR_VoxelsLoad_DicomVolumeAsVdb *dcm, const MR_std_function_bool_from_float *cb);

/// Loads 3D volumetric data from dicom-files in given folder, and converts them into an ObjectVoxels
/// Generated from function `MR::VoxelsLoad::makeObjectVoxelsFromDicomFolder`.
/// Parameter `folder` is a UTF-8 encoded filesystem path.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_LoadedObjects_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_LoadedObjects_std_string *MR_VoxelsLoad_makeObjectVoxelsFromDicomFolder(const char *folder, const char *folder_end, const MR_std_function_bool_from_float *callback);

/// Save voxels object to a single 3d DICOM file
/// Generated from function `MR::VoxelsSave::toDicom`.
/// Parameter `vdbVolume` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toDicom(const MR_VdbVolume *vdbVolume, const char *path, const char *path_end, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Saves object to a single 3d DICOM file. \p sourceScale specifies the true scale of the voxel data
/// which will be saved with "slope" and "intercept" parameters of the output dicom.
/// Generated from function `MR::VoxelsSave::toDicom<uint16_t>`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `sourceScale` is a single object.
/// Parameter `sourceScale` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_VoxelsSave_toDicom_uint16_t(const MR_SimpleVolumeU16 *volume, const char *path, const char *path_end, const MR_std_optional_MR_Box1f *sourceScale, const MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
