// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAffineXf.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string; // Defined in `#include <MRCMisc/expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string.h>`.
typedef struct MR_expected_MR_TeethMaskToDirectionVolumeConvertor_std_string MR_expected_MR_TeethMaskToDirectionVolumeConvertor_std_string; // Defined in `#include <MRCMisc/expected_MR_TeethMaskToDirectionVolumeConvertor_std_string.h>`.
typedef struct MR_expected_std_array_MR_SimpleVolumeMinMax_3_std_string MR_expected_std_array_MR_SimpleVolumeMinMax_3_std_string; // Defined in `#include <MRCMisc/expected_std_array_MR_SimpleVolumeMinMax_3_std_string.h>`.
typedef struct MR_phmap_flat_hash_map_int32_t_MR_Box3i_phmap_Hash_int32_t MR_phmap_flat_hash_map_int32_t_MR_Box3i_phmap_Hash_int32_t; // Defined in `#include <MRCMisc/phmap_flat_hash_map_int32_t_MR_Box3i_phmap_Hash_int32_t.h>`.
typedef struct MR_std_array_MR_SimpleVolumeMinMax_3 MR_std_array_MR_SimpleVolumeMinMax_3; // Defined in `#include <MRCMisc/std_array_MR_SimpleVolumeMinMax_3.h>`.
typedef struct MR_std_optional_MR_DentalId MR_std_optional_MR_DentalId; // Defined in `#include <MRCMisc/std_optional_MR_DentalId.h>`.
typedef struct MR_std_vector_int32_t MR_std_vector_int32_t; // Defined in `#include <MRCMisc/std_vector_int32_t.h>`.


/// This class represents tooth id
/// Generated from class `MR::DentalId`.
typedef struct MR_DentalId MR_DentalId;

/// This class is an alternative to directly invoking \ref meshToDirectionVolume for the mesh retrieved from the teeth mask.
/// It is better because when a single mesh is created from mask, some neighboring teeth might fuse together, creating incorrect mask.
/// This class invokes meshing for each teeth separately, thus eliminating this problem.
/// Generated from class `MR::TeethMaskToDirectionVolumeConvertor`.
typedef struct MR_TeethMaskToDirectionVolumeConvertor MR_TeethMaskToDirectionVolumeConvertor;

/// Generated from class `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult`.
typedef struct MR_TeethMaskToDirectionVolumeConvertor_ProcessResult MR_TeethMaskToDirectionVolumeConvertor_ProcessResult;

/// Generated from a constructor of class `MR::DentalId`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DentalId_Destroy()` to free it when you're done using it.
MRC_API MR_DentalId *MR_DentalId_ConstructFromAnother(const MR_DentalId *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DentalId *MR_DentalId_OffsetPtr(const MR_DentalId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DentalId *MR_DentalId_OffsetMutablePtr(MR_DentalId *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_DentalId`. Does nothing if the pointer is null.
MRC_API void MR_DentalId_Destroy(const MR_DentalId *_this);

/// Destroys a heap-allocated array of `MR_DentalId`. Does nothing if the pointer is null.
MRC_API void MR_DentalId_DestroyArray(const MR_DentalId *_this);

/// Generated from a method of class `MR::DentalId` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DentalId *MR_DentalId_AssignFromAnother(MR_DentalId *_this, const MR_DentalId *_other);

/// Creates id from FDI number known only at runtime
/// Generated from a method of class `MR::DentalId` named `fromFDI`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_DentalId_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_DentalId *MR_DentalId_fromFDI(int32_t id);

/// Returns FDI representation of the id
/// Generated from a method of class `MR::DentalId` named `fdi`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_DentalId_fdi(const MR_DentalId *_this);

/// Generated from a constructor of class `MR::TeethMaskToDirectionVolumeConvertor`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TeethMaskToDirectionVolumeConvertor_Destroy()` to free it when you're done using it.
MRC_API MR_TeethMaskToDirectionVolumeConvertor *MR_TeethMaskToDirectionVolumeConvertor_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TeethMaskToDirectionVolumeConvertor *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TeethMaskToDirectionVolumeConvertor *MR_TeethMaskToDirectionVolumeConvertor_OffsetPtr(const MR_TeethMaskToDirectionVolumeConvertor *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TeethMaskToDirectionVolumeConvertor *MR_TeethMaskToDirectionVolumeConvertor_OffsetMutablePtr(MR_TeethMaskToDirectionVolumeConvertor *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_TeethMaskToDirectionVolumeConvertor`. Does nothing if the pointer is null.
MRC_API void MR_TeethMaskToDirectionVolumeConvertor_Destroy(const MR_TeethMaskToDirectionVolumeConvertor *_this);

/// Destroys a heap-allocated array of `MR_TeethMaskToDirectionVolumeConvertor`. Does nothing if the pointer is null.
MRC_API void MR_TeethMaskToDirectionVolumeConvertor_DestroyArray(const MR_TeethMaskToDirectionVolumeConvertor *_this);

/// Generated from a method of class `MR::TeethMaskToDirectionVolumeConvertor` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TeethMaskToDirectionVolumeConvertor *MR_TeethMaskToDirectionVolumeConvertor_AssignFromAnother(MR_TeethMaskToDirectionVolumeConvertor *_this, MR_PassBy _other_pass_by, MR_TeethMaskToDirectionVolumeConvertor *_other);

/// Initialize class
/// @param volume Voxel mask
/// @param additionalIds List of additional ids (besides teeth) to convert
/// Generated from a method of class `MR::TeethMaskToDirectionVolumeConvertor` named `create`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `additionalIds` is a single object.
/// Parameter `additionalIds` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TeethMaskToDirectionVolumeConvertor_std_string *MR_TeethMaskToDirectionVolumeConvertor_create(const MR_VdbVolume *volume, const MR_std_vector_int32_t *additionalIds);

/// Returns all the objects present in volume and corresponding bounding boxes
/// Generated from a method of class `MR::TeethMaskToDirectionVolumeConvertor` named `getObjectBounds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_phmap_flat_hash_map_int32_t_MR_Box3i_phmap_Hash_int32_t *MR_TeethMaskToDirectionVolumeConvertor_getObjectBounds(const MR_TeethMaskToDirectionVolumeConvertor *_this);

/// Converts single object into direction volume
/// Generated from a method of class `MR::TeethMaskToDirectionVolumeConvertor` named `convertObject`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *MR_TeethMaskToDirectionVolumeConvertor_convertObject(const MR_TeethMaskToDirectionVolumeConvertor *_this, int32_t id);

/// Converts all the objects into direction volume
/// Generated from a method of class `MR::TeethMaskToDirectionVolumeConvertor` named `convertAll`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_std_string *MR_TeethMaskToDirectionVolumeConvertor_convertAll(const MR_TeethMaskToDirectionVolumeConvertor *_this);

/// Returns a pointer to a member variable of class `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_array_MR_SimpleVolumeMinMax_3 *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_Get_volume(const MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_this);

/// Modifies a member variable of class `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_Set_volume(MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_this, MR_PassBy value_pass_by, MR_std_array_MR_SimpleVolumeMinMax_3 *value);

/// Returns a mutable pointer to a member variable of class `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_array_MR_SimpleVolumeMinMax_3 *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_GetMutable_volume(MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_this);

/// Returns a pointer to a member variable of class `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_Get_xf(const MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_this);

/// Modifies a member variable of class `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_Set_xf(MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_this, MR_AffineXf3f value);

/// Returns a mutable pointer to a member variable of class `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_GetMutable_xf(MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_Destroy()` to free it when you're done using it.
MRC_API MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_DestroyArray()`.
/// Use `MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_OffsetMutablePtr()` and `MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_OffsetPtr()` to access the array elements.
MRC_API MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_Destroy()` to free it when you're done using it.
MRC_API MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_ConstructFrom(MR_PassBy volume_pass_by, MR_std_array_MR_SimpleVolumeMinMax_3 *volume, MR_AffineXf3f xf);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_OffsetPtr(const MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_OffsetMutablePtr(MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_Destroy()` to free it when you're done using it.
MRC_API MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_other);

/// Destroys a heap-allocated instance of `MR_TeethMaskToDirectionVolumeConvertor_ProcessResult`. Does nothing if the pointer is null.
MRC_API void MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_Destroy(const MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_this);

/// Destroys a heap-allocated array of `MR_TeethMaskToDirectionVolumeConvertor_ProcessResult`. Does nothing if the pointer is null.
MRC_API void MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_DestroyArray(const MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_this);

/// Generated from a method of class `MR::TeethMaskToDirectionVolumeConvertor::ProcessResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *MR_TeethMaskToDirectionVolumeConvertor_ProcessResult_AssignFromAnother(MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_this, MR_PassBy _other_pass_by, MR_TeethMaskToDirectionVolumeConvertor_ProcessResult *_other);

/// A shortcut for \ref TeethMaskToDirectionVolumeConvertor::create and \ref TeethMaskToDirectionVolumeConvertor::convertAll
/// Generated from function `MR::teethMaskToDirectionVolume`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `additionalIds` is a single object.
/// Parameter `additionalIds` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_array_MR_SimpleVolumeMinMax_3_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_array_MR_SimpleVolumeMinMax_3_std_string *MR_teethMaskToDirectionVolume(const MR_VdbVolume *volume, const MR_std_vector_int32_t *additionalIds);

#ifdef __cplusplus
} // extern "C"
#endif
