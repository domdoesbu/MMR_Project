// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_TeethMaskToDirectionVolumeConvertor_ProcessResult MR_TeethMaskToDirectionVolumeConvertor_ProcessResult; // Defined in `#include <MRCVoxels/MRTeethMaskToDirectionVolume.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Stores either a `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult` that represents success or a `std::string` that represents an error.
/// Supported `MR_PassBy` modes: `MR_PassBy_DefaultConstruct`, `MR_PassBy_Copy`, `MR_PassBy_Move`, (and `MR_PassBy_DefaultArgument` and `MR_PassBy_NoObject` if supported by the callee).
typedef struct MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_DestroyArray()`.
/// Use `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_OffsetMutablePtr()` and `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_OffsetPtr()` to access the array elements.
MRC_API MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_DefaultConstructArray(size_t num_elems);

/// Constructs a copy of another instance. The source remains alive.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_ConstructFromAnother(MR_PassBy other_pass_by, MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *other);

/// Constructs a new instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_ConstructFrom(MR_PassBy other_pass_by, MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *other);

/// Assigns the contents from another instance. Both objects remain alive after the call.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_AssignFromAnother(MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *_this, MR_PassBy other_pass_by, MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *other);

/// Assigns the contents.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_AssignFrom(MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *_this, MR_PassBy other_pass_by, MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *other);

/// Destroys a heap-allocated instance of `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string`. Does nothing if the pointer is null.
MRC_API void MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_Destroy(const MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *_this);

/// Destroys a heap-allocated array of `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string`. Does nothing if the pointer is null.
MRC_API void MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_DestroyArray(const MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_OffsetPtr(const MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_OffsetMutablePtr(MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *ptr, ptrdiff_t i);

/// If this instance represents success, returns the stored `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult`. Otherwise null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_GetValue(const MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *_this);

/// If this instance represents an error, returns the stored `std::string`. Otherwise null.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const MR_std_string *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_GetError(const MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *_this);

/// If this instance represents success, returns the stored `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult`. Otherwise null. This version returns a mutable pointer.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_GetMutableValue(MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *_this);

/// If this instance represents an error, returns the stored `std::string`. Otherwise null. This version returns a mutable pointer.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_string *MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_GetMutableError(MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *_this);

#ifdef __cplusplus
} // extern "C"
#endif
