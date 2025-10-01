// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box1f MR_Box1f; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_Box_uint16_t MR_Box_uint16_t; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_FloatGrid MR_FloatGrid; // Defined in `#include <MRCVoxels/MRFloatGrid.h>`.
typedef struct MR_Vector_float_MR_VoxelId MR_Vector_float_MR_VoxelId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_uint16_t_MR_VoxelId MR_Vector_uint16_t_MR_VoxelId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VoxelBitSet MR_VoxelBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_SimpleVolumeMinMax_std_string MR_expected_MR_SimpleVolumeMinMax_std_string; // Defined in `#include <MRCMisc/expected_MR_SimpleVolumeMinMax_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_float_from_const_MR_Vector3i_ref MR_std_function_float_from_const_MR_Vector3i_ref; // Defined in `#include <MRCMisc/std_function_float_from_const_MR_Vector3i_ref.h>`.
typedef struct MR_std_function_uint8_t_from_const_MR_Vector3i_ref MR_std_function_uint8_t_from_const_MR_Vector3i_ref; // Defined in `#include <MRCMisc/std_function_uint8_t_from_const_MR_Vector3i_ref.h>`.


/// represents a box in 3D space subdivided on voxels stored in T;
/// and stores minimum and maximum values among all valid voxels
/// Generated from class `MR::SimpleVolumeMinMax`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Box1f`
///     `MR::SimpleVolume`
typedef struct MR_SimpleVolumeMinMax MR_SimpleVolumeMinMax;

/// represents a box in 3D space subdivided on voxels stored in T;
/// and stores minimum and maximum values among all valid voxels
/// Generated from class `MR::SimpleVolumeMinMaxU16`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Box<uint16_t>`
///     `MR::SimpleVolumeU16`
typedef struct MR_SimpleVolumeMinMaxU16 MR_SimpleVolumeMinMaxU16;

/// represents a box in 3D space subdivided on voxels stored in T;
/// and stores minimum and maximum values among all valid voxels
/// Generated from class `MR::VdbVolume`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Box1f`
///     `MR::VoxelsVolume<MR::FloatGrid>`
typedef struct MR_VdbVolume MR_VdbVolume;

/// represents a box in 3D space subdivided on voxels stored in T
/// Generated from class `MR::FunctionVolume`.
typedef struct MR_FunctionVolume MR_FunctionVolume;

/// represents a box in 3D space subdivided on voxels stored in T
/// Generated from class `MR::FunctionVolumeU8`.
typedef struct MR_FunctionVolumeU8 MR_FunctionVolumeU8;

/// represents a box in 3D space subdivided on voxels stored in T
/// Generated from class `MR::SimpleVolume`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::SimpleVolumeMinMax`
typedef struct MR_SimpleVolume MR_SimpleVolume;

/// represents a box in 3D space subdivided on voxels stored in T
/// Generated from class `MR::SimpleVolumeU16`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::SimpleVolumeMinMaxU16`
typedef struct MR_SimpleVolumeU16 MR_SimpleVolumeU16;

/// represents a box in 3D space subdivided on voxels stored in T
/// Generated from class `MR::SimpleBinaryVolume`.
typedef struct MR_SimpleBinaryVolume MR_SimpleBinaryVolume;

/// represents a box in 3D space subdivided on voxels stored in T
/// Generated from class `MR::VoxelsVolume<MR::FloatGrid>`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::VdbVolume`
typedef struct MR_VoxelsVolume_MR_FloatGrid MR_VoxelsVolume_MR_FloatGrid;

/// Generated from class `MR::VoxelTraits<MR::Vector<float, MR::VoxelId>>`.
typedef struct MR_VoxelTraits_MR_Vector_float_MR_VoxelId MR_VoxelTraits_MR_Vector_float_MR_VoxelId;

/// Generated from class `MR::VoxelTraits<MR::Vector<uint16_t, MR::VoxelId>>`.
typedef struct MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId;

/// Generated from class `MR::VoxelTraits<std::function<float(const MR::Vector3i &)>>`.
typedef struct MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref;

/// Generated from class `MR::VoxelTraits<std::function<uint8_t(const MR::Vector3i &)>>`.
typedef struct MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref;

/// Generated from class `MR::VoxelTraits<MR::VoxelBitSet>`.
typedef struct MR_VoxelTraits_MR_VoxelBitSet MR_VoxelTraits_MR_VoxelBitSet;

/// Generated from class `MR::VoxelTraits<MR::FloatGrid>`.
typedef struct MR_VoxelTraits_MR_FloatGrid MR_VoxelTraits_MR_FloatGrid;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolumeMinMax_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolumeMinMax *MR_SimpleVolumeMinMax_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SimpleVolumeMinMax_DestroyArray()`.
/// Use `MR_SimpleVolumeMinMax_OffsetMutablePtr()` and `MR_SimpleVolumeMinMax_OffsetPtr()` to access the array elements.
MRC_API MR_SimpleVolumeMinMax *MR_SimpleVolumeMinMax_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SimpleVolumeMinMax *MR_SimpleVolumeMinMax_OffsetPtr(const MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SimpleVolumeMinMax *MR_SimpleVolumeMinMax_OffsetMutablePtr(MR_SimpleVolumeMinMax *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::SimpleVolumeMinMax` to its base class `MR::Box1f`.
/// This version is acting on mutable pointers.
MRC_API const MR_Box1f *MR_SimpleVolumeMinMax_UpcastTo_MR_Box1f(const MR_SimpleVolumeMinMax *object);

/// Upcasts an instance of `MR::SimpleVolumeMinMax` to its base class `MR::Box1f`.
MRC_API MR_Box1f *MR_SimpleVolumeMinMax_MutableUpcastTo_MR_Box1f(MR_SimpleVolumeMinMax *object);

/// Upcasts an instance of `MR::SimpleVolumeMinMax` to its base class `MR::SimpleVolume`.
/// This version is acting on mutable pointers.
MRC_API const MR_SimpleVolume *MR_SimpleVolumeMinMax_UpcastTo_MR_SimpleVolume(const MR_SimpleVolumeMinMax *object);

/// Upcasts an instance of `MR::SimpleVolumeMinMax` to its base class `MR::SimpleVolume`.
MRC_API MR_SimpleVolume *MR_SimpleVolumeMinMax_MutableUpcastTo_MR_SimpleVolume(MR_SimpleVolumeMinMax *object);

/// Generated from a constructor of class `MR::SimpleVolumeMinMax`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolumeMinMax_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolumeMinMax *MR_SimpleVolumeMinMax_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SimpleVolumeMinMax *_other);

/// Destroys a heap-allocated instance of `MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_SimpleVolumeMinMax_Destroy(const MR_SimpleVolumeMinMax *_this);

/// Destroys a heap-allocated array of `MR_SimpleVolumeMinMax`. Does nothing if the pointer is null.
MRC_API void MR_SimpleVolumeMinMax_DestroyArray(const MR_SimpleVolumeMinMax *_this);

/// Generated from a method of class `MR::SimpleVolumeMinMax` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SimpleVolumeMinMax *MR_SimpleVolumeMinMax_AssignFromAnother(MR_SimpleVolumeMinMax *_this, MR_PassBy _other_pass_by, MR_SimpleVolumeMinMax *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolumeMinMaxU16_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolumeMinMaxU16 *MR_SimpleVolumeMinMaxU16_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SimpleVolumeMinMaxU16_DestroyArray()`.
/// Use `MR_SimpleVolumeMinMaxU16_OffsetMutablePtr()` and `MR_SimpleVolumeMinMaxU16_OffsetPtr()` to access the array elements.
MRC_API MR_SimpleVolumeMinMaxU16 *MR_SimpleVolumeMinMaxU16_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SimpleVolumeMinMaxU16 *MR_SimpleVolumeMinMaxU16_OffsetPtr(const MR_SimpleVolumeMinMaxU16 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SimpleVolumeMinMaxU16 *MR_SimpleVolumeMinMaxU16_OffsetMutablePtr(MR_SimpleVolumeMinMaxU16 *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::SimpleVolumeMinMaxU16` to its base class `MR::Box<uint16_t>`.
/// This version is acting on mutable pointers.
MRC_API const MR_Box_uint16_t *MR_SimpleVolumeMinMaxU16_UpcastTo_MR_Box_uint16_t(const MR_SimpleVolumeMinMaxU16 *object);

/// Upcasts an instance of `MR::SimpleVolumeMinMaxU16` to its base class `MR::Box<uint16_t>`.
MRC_API MR_Box_uint16_t *MR_SimpleVolumeMinMaxU16_MutableUpcastTo_MR_Box_uint16_t(MR_SimpleVolumeMinMaxU16 *object);

/// Upcasts an instance of `MR::SimpleVolumeMinMaxU16` to its base class `MR::SimpleVolumeU16`.
/// This version is acting on mutable pointers.
MRC_API const MR_SimpleVolumeU16 *MR_SimpleVolumeMinMaxU16_UpcastTo_MR_SimpleVolumeU16(const MR_SimpleVolumeMinMaxU16 *object);

/// Upcasts an instance of `MR::SimpleVolumeMinMaxU16` to its base class `MR::SimpleVolumeU16`.
MRC_API MR_SimpleVolumeU16 *MR_SimpleVolumeMinMaxU16_MutableUpcastTo_MR_SimpleVolumeU16(MR_SimpleVolumeMinMaxU16 *object);

/// Generated from a constructor of class `MR::SimpleVolumeMinMaxU16`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolumeMinMaxU16_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolumeMinMaxU16 *MR_SimpleVolumeMinMaxU16_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SimpleVolumeMinMaxU16 *_other);

/// Destroys a heap-allocated instance of `MR_SimpleVolumeMinMaxU16`. Does nothing if the pointer is null.
MRC_API void MR_SimpleVolumeMinMaxU16_Destroy(const MR_SimpleVolumeMinMaxU16 *_this);

/// Destroys a heap-allocated array of `MR_SimpleVolumeMinMaxU16`. Does nothing if the pointer is null.
MRC_API void MR_SimpleVolumeMinMaxU16_DestroyArray(const MR_SimpleVolumeMinMaxU16 *_this);

/// Generated from a method of class `MR::SimpleVolumeMinMaxU16` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SimpleVolumeMinMaxU16 *MR_SimpleVolumeMinMaxU16_AssignFromAnother(MR_SimpleVolumeMinMaxU16 *_this, MR_PassBy _other_pass_by, MR_SimpleVolumeMinMaxU16 *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VdbVolume *MR_VdbVolume_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VdbVolume_DestroyArray()`.
/// Use `MR_VdbVolume_OffsetMutablePtr()` and `MR_VdbVolume_OffsetPtr()` to access the array elements.
MRC_API MR_VdbVolume *MR_VdbVolume_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VdbVolume *MR_VdbVolume_OffsetPtr(const MR_VdbVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VdbVolume *MR_VdbVolume_OffsetMutablePtr(MR_VdbVolume *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::VdbVolume` to its base class `MR::Box1f`.
/// This version is acting on mutable pointers.
MRC_API const MR_Box1f *MR_VdbVolume_UpcastTo_MR_Box1f(const MR_VdbVolume *object);

/// Upcasts an instance of `MR::VdbVolume` to its base class `MR::Box1f`.
MRC_API MR_Box1f *MR_VdbVolume_MutableUpcastTo_MR_Box1f(MR_VdbVolume *object);

/// Upcasts an instance of `MR::VdbVolume` to its base class `MR::VoxelsVolume<MR::FloatGrid>`.
/// This version is acting on mutable pointers.
MRC_API const MR_VoxelsVolume_MR_FloatGrid *MR_VdbVolume_UpcastTo_MR_VoxelsVolume_MR_FloatGrid(const MR_VdbVolume *object);

/// Upcasts an instance of `MR::VdbVolume` to its base class `MR::VoxelsVolume<MR::FloatGrid>`.
MRC_API MR_VoxelsVolume_MR_FloatGrid *MR_VdbVolume_MutableUpcastTo_MR_VoxelsVolume_MR_FloatGrid(MR_VdbVolume *object);

/// Generated from a constructor of class `MR::VdbVolume`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VdbVolume *MR_VdbVolume_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VdbVolume *_other);

/// Destroys a heap-allocated instance of `MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_VdbVolume_Destroy(const MR_VdbVolume *_this);

/// Destroys a heap-allocated array of `MR_VdbVolume`. Does nothing if the pointer is null.
MRC_API void MR_VdbVolume_DestroyArray(const MR_VdbVolume *_this);

/// Generated from a method of class `MR::VdbVolume` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VdbVolume *MR_VdbVolume_AssignFromAnother(MR_VdbVolume *_this, MR_PassBy _other_pass_by, MR_VdbVolume *_other);

/// Returns a pointer to a member variable of class `MR::FunctionVolume` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_float_from_const_MR_Vector3i_ref *MR_FunctionVolume_Get_data(const MR_FunctionVolume *_this);

/// Modifies a member variable of class `MR::FunctionVolume` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FunctionVolume_Set_data(MR_FunctionVolume *_this, MR_PassBy value_pass_by, MR_std_function_float_from_const_MR_Vector3i_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::FunctionVolume` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_float_from_const_MR_Vector3i_ref *MR_FunctionVolume_GetMutable_data(MR_FunctionVolume *_this);

/// Returns a pointer to a member variable of class `MR::FunctionVolume` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_FunctionVolume_Get_dims(const MR_FunctionVolume *_this);

/// Modifies a member variable of class `MR::FunctionVolume` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FunctionVolume_Set_dims(MR_FunctionVolume *_this, MR_Vector3i value);

/// Returns a mutable pointer to a member variable of class `MR::FunctionVolume` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_FunctionVolume_GetMutable_dims(MR_FunctionVolume *_this);

/// Returns a pointer to a member variable of class `MR::FunctionVolume` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_FunctionVolume_Get_voxelSize(const MR_FunctionVolume *_this);

/// Modifies a member variable of class `MR::FunctionVolume` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FunctionVolume_Set_voxelSize(MR_FunctionVolume *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::FunctionVolume` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_FunctionVolume_GetMutable_voxelSize(MR_FunctionVolume *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolume *MR_FunctionVolume_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FunctionVolume_DestroyArray()`.
/// Use `MR_FunctionVolume_OffsetMutablePtr()` and `MR_FunctionVolume_OffsetPtr()` to access the array elements.
MRC_API MR_FunctionVolume *MR_FunctionVolume_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FunctionVolume` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolume *MR_FunctionVolume_ConstructFrom(MR_PassBy data_pass_by, MR_std_function_float_from_const_MR_Vector3i_ref *data, MR_Vector3i dims, MR_Vector3f voxelSize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FunctionVolume *MR_FunctionVolume_OffsetPtr(const MR_FunctionVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FunctionVolume *MR_FunctionVolume_OffsetMutablePtr(MR_FunctionVolume *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FunctionVolume`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolume_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolume *MR_FunctionVolume_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FunctionVolume *_other);

/// Destroys a heap-allocated instance of `MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_FunctionVolume_Destroy(const MR_FunctionVolume *_this);

/// Destroys a heap-allocated array of `MR_FunctionVolume`. Does nothing if the pointer is null.
MRC_API void MR_FunctionVolume_DestroyArray(const MR_FunctionVolume *_this);

/// Generated from a method of class `MR::FunctionVolume` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FunctionVolume *MR_FunctionVolume_AssignFromAnother(MR_FunctionVolume *_this, MR_PassBy _other_pass_by, MR_FunctionVolume *_other);

/// Generated from a method of class `MR::FunctionVolume` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_FunctionVolume_heapBytes(const MR_FunctionVolume *_this);

/// Returns a pointer to a member variable of class `MR::FunctionVolumeU8` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_uint8_t_from_const_MR_Vector3i_ref *MR_FunctionVolumeU8_Get_data(const MR_FunctionVolumeU8 *_this);

/// Modifies a member variable of class `MR::FunctionVolumeU8` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FunctionVolumeU8_Set_data(MR_FunctionVolumeU8 *_this, MR_PassBy value_pass_by, MR_std_function_uint8_t_from_const_MR_Vector3i_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::FunctionVolumeU8` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_uint8_t_from_const_MR_Vector3i_ref *MR_FunctionVolumeU8_GetMutable_data(MR_FunctionVolumeU8 *_this);

/// Returns a pointer to a member variable of class `MR::FunctionVolumeU8` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_FunctionVolumeU8_Get_dims(const MR_FunctionVolumeU8 *_this);

/// Modifies a member variable of class `MR::FunctionVolumeU8` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FunctionVolumeU8_Set_dims(MR_FunctionVolumeU8 *_this, MR_Vector3i value);

/// Returns a mutable pointer to a member variable of class `MR::FunctionVolumeU8` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_FunctionVolumeU8_GetMutable_dims(MR_FunctionVolumeU8 *_this);

/// Returns a pointer to a member variable of class `MR::FunctionVolumeU8` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_FunctionVolumeU8_Get_voxelSize(const MR_FunctionVolumeU8 *_this);

/// Modifies a member variable of class `MR::FunctionVolumeU8` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FunctionVolumeU8_Set_voxelSize(MR_FunctionVolumeU8 *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::FunctionVolumeU8` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_FunctionVolumeU8_GetMutable_voxelSize(MR_FunctionVolumeU8 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolumeU8_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolumeU8 *MR_FunctionVolumeU8_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FunctionVolumeU8_DestroyArray()`.
/// Use `MR_FunctionVolumeU8_OffsetMutablePtr()` and `MR_FunctionVolumeU8_OffsetPtr()` to access the array elements.
MRC_API MR_FunctionVolumeU8 *MR_FunctionVolumeU8_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FunctionVolumeU8` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolumeU8_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolumeU8 *MR_FunctionVolumeU8_ConstructFrom(MR_PassBy data_pass_by, MR_std_function_uint8_t_from_const_MR_Vector3i_ref *data, MR_Vector3i dims, MR_Vector3f voxelSize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FunctionVolumeU8 *MR_FunctionVolumeU8_OffsetPtr(const MR_FunctionVolumeU8 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FunctionVolumeU8 *MR_FunctionVolumeU8_OffsetMutablePtr(MR_FunctionVolumeU8 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FunctionVolumeU8`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FunctionVolumeU8_Destroy()` to free it when you're done using it.
MRC_API MR_FunctionVolumeU8 *MR_FunctionVolumeU8_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FunctionVolumeU8 *_other);

/// Destroys a heap-allocated instance of `MR_FunctionVolumeU8`. Does nothing if the pointer is null.
MRC_API void MR_FunctionVolumeU8_Destroy(const MR_FunctionVolumeU8 *_this);

/// Destroys a heap-allocated array of `MR_FunctionVolumeU8`. Does nothing if the pointer is null.
MRC_API void MR_FunctionVolumeU8_DestroyArray(const MR_FunctionVolumeU8 *_this);

/// Generated from a method of class `MR::FunctionVolumeU8` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FunctionVolumeU8 *MR_FunctionVolumeU8_AssignFromAnother(MR_FunctionVolumeU8 *_this, MR_PassBy _other_pass_by, MR_FunctionVolumeU8 *_other);

/// Generated from a method of class `MR::FunctionVolumeU8` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_FunctionVolumeU8_heapBytes(const MR_FunctionVolumeU8 *_this);

/// Returns a pointer to a member variable of class `MR::SimpleVolume` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_float_MR_VoxelId *MR_SimpleVolume_Get_data(const MR_SimpleVolume *_this);

/// Modifies a member variable of class `MR::SimpleVolume` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SimpleVolume_Set_data(MR_SimpleVolume *_this, MR_PassBy value_pass_by, MR_Vector_float_MR_VoxelId *value);

/// Returns a mutable pointer to a member variable of class `MR::SimpleVolume` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_float_MR_VoxelId *MR_SimpleVolume_GetMutable_data(MR_SimpleVolume *_this);

/// Returns a pointer to a member variable of class `MR::SimpleVolume` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_SimpleVolume_Get_dims(const MR_SimpleVolume *_this);

/// Modifies a member variable of class `MR::SimpleVolume` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SimpleVolume_Set_dims(MR_SimpleVolume *_this, MR_Vector3i value);

/// Returns a mutable pointer to a member variable of class `MR::SimpleVolume` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_SimpleVolume_GetMutable_dims(MR_SimpleVolume *_this);

/// Returns a pointer to a member variable of class `MR::SimpleVolume` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_SimpleVolume_Get_voxelSize(const MR_SimpleVolume *_this);

/// Modifies a member variable of class `MR::SimpleVolume` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SimpleVolume_Set_voxelSize(MR_SimpleVolume *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::SimpleVolume` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_SimpleVolume_GetMutable_voxelSize(MR_SimpleVolume *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolume_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolume *MR_SimpleVolume_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SimpleVolume_DestroyArray()`.
/// Use `MR_SimpleVolume_OffsetMutablePtr()` and `MR_SimpleVolume_OffsetPtr()` to access the array elements.
MRC_API MR_SimpleVolume *MR_SimpleVolume_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SimpleVolume` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolume_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolume *MR_SimpleVolume_ConstructFrom(MR_PassBy data_pass_by, MR_Vector_float_MR_VoxelId *data, MR_Vector3i dims, MR_Vector3f voxelSize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SimpleVolume *MR_SimpleVolume_OffsetPtr(const MR_SimpleVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SimpleVolume *MR_SimpleVolume_OffsetMutablePtr(MR_SimpleVolume *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::SimpleVolume` to a derived class `MR::SimpleVolumeMinMax`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SimpleVolumeMinMax *MR_SimpleVolume_StaticDowncastTo_MR_SimpleVolumeMinMax(const MR_SimpleVolume *object);

/// Downcasts an instance of `MR::SimpleVolume` to a derived class `MR::SimpleVolumeMinMax`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SimpleVolumeMinMax *MR_SimpleVolume_MutableStaticDowncastTo_MR_SimpleVolumeMinMax(MR_SimpleVolume *object);

/// Generated from a constructor of class `MR::SimpleVolume`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolume_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolume *MR_SimpleVolume_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SimpleVolume *_other);

/// Destroys a heap-allocated instance of `MR_SimpleVolume`. Does nothing if the pointer is null.
MRC_API void MR_SimpleVolume_Destroy(const MR_SimpleVolume *_this);

/// Destroys a heap-allocated array of `MR_SimpleVolume`. Does nothing if the pointer is null.
MRC_API void MR_SimpleVolume_DestroyArray(const MR_SimpleVolume *_this);

/// Generated from a method of class `MR::SimpleVolume` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SimpleVolume *MR_SimpleVolume_AssignFromAnother(MR_SimpleVolume *_this, MR_PassBy _other_pass_by, MR_SimpleVolume *_other);

/// Generated from a method of class `MR::SimpleVolume` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_SimpleVolume_heapBytes(const MR_SimpleVolume *_this);

/// Returns a pointer to a member variable of class `MR::SimpleVolumeU16` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_uint16_t_MR_VoxelId *MR_SimpleVolumeU16_Get_data(const MR_SimpleVolumeU16 *_this);

/// Modifies a member variable of class `MR::SimpleVolumeU16` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SimpleVolumeU16_Set_data(MR_SimpleVolumeU16 *_this, MR_PassBy value_pass_by, MR_Vector_uint16_t_MR_VoxelId *value);

/// Returns a mutable pointer to a member variable of class `MR::SimpleVolumeU16` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_uint16_t_MR_VoxelId *MR_SimpleVolumeU16_GetMutable_data(MR_SimpleVolumeU16 *_this);

/// Returns a pointer to a member variable of class `MR::SimpleVolumeU16` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_SimpleVolumeU16_Get_dims(const MR_SimpleVolumeU16 *_this);

/// Modifies a member variable of class `MR::SimpleVolumeU16` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SimpleVolumeU16_Set_dims(MR_SimpleVolumeU16 *_this, MR_Vector3i value);

/// Returns a mutable pointer to a member variable of class `MR::SimpleVolumeU16` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_SimpleVolumeU16_GetMutable_dims(MR_SimpleVolumeU16 *_this);

/// Returns a pointer to a member variable of class `MR::SimpleVolumeU16` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_SimpleVolumeU16_Get_voxelSize(const MR_SimpleVolumeU16 *_this);

/// Modifies a member variable of class `MR::SimpleVolumeU16` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SimpleVolumeU16_Set_voxelSize(MR_SimpleVolumeU16 *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::SimpleVolumeU16` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_SimpleVolumeU16_GetMutable_voxelSize(MR_SimpleVolumeU16 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolumeU16_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolumeU16 *MR_SimpleVolumeU16_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SimpleVolumeU16_DestroyArray()`.
/// Use `MR_SimpleVolumeU16_OffsetMutablePtr()` and `MR_SimpleVolumeU16_OffsetPtr()` to access the array elements.
MRC_API MR_SimpleVolumeU16 *MR_SimpleVolumeU16_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SimpleVolumeU16` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolumeU16_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolumeU16 *MR_SimpleVolumeU16_ConstructFrom(MR_PassBy data_pass_by, MR_Vector_uint16_t_MR_VoxelId *data, MR_Vector3i dims, MR_Vector3f voxelSize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SimpleVolumeU16 *MR_SimpleVolumeU16_OffsetPtr(const MR_SimpleVolumeU16 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SimpleVolumeU16 *MR_SimpleVolumeU16_OffsetMutablePtr(MR_SimpleVolumeU16 *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::SimpleVolumeU16` to a derived class `MR::SimpleVolumeMinMaxU16`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SimpleVolumeMinMaxU16 *MR_SimpleVolumeU16_StaticDowncastTo_MR_SimpleVolumeMinMaxU16(const MR_SimpleVolumeU16 *object);

/// Downcasts an instance of `MR::SimpleVolumeU16` to a derived class `MR::SimpleVolumeMinMaxU16`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SimpleVolumeMinMaxU16 *MR_SimpleVolumeU16_MutableStaticDowncastTo_MR_SimpleVolumeMinMaxU16(MR_SimpleVolumeU16 *object);

/// Generated from a constructor of class `MR::SimpleVolumeU16`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleVolumeU16_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleVolumeU16 *MR_SimpleVolumeU16_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SimpleVolumeU16 *_other);

/// Destroys a heap-allocated instance of `MR_SimpleVolumeU16`. Does nothing if the pointer is null.
MRC_API void MR_SimpleVolumeU16_Destroy(const MR_SimpleVolumeU16 *_this);

/// Destroys a heap-allocated array of `MR_SimpleVolumeU16`. Does nothing if the pointer is null.
MRC_API void MR_SimpleVolumeU16_DestroyArray(const MR_SimpleVolumeU16 *_this);

/// Generated from a method of class `MR::SimpleVolumeU16` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SimpleVolumeU16 *MR_SimpleVolumeU16_AssignFromAnother(MR_SimpleVolumeU16 *_this, MR_PassBy _other_pass_by, MR_SimpleVolumeU16 *_other);

/// Generated from a method of class `MR::SimpleVolumeU16` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_SimpleVolumeU16_heapBytes(const MR_SimpleVolumeU16 *_this);

/// Returns a pointer to a member variable of class `MR::SimpleBinaryVolume` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VoxelBitSet *MR_SimpleBinaryVolume_Get_data(const MR_SimpleBinaryVolume *_this);

/// Modifies a member variable of class `MR::SimpleBinaryVolume` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SimpleBinaryVolume_Set_data(MR_SimpleBinaryVolume *_this, MR_PassBy value_pass_by, MR_VoxelBitSet *value);

/// Returns a mutable pointer to a member variable of class `MR::SimpleBinaryVolume` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelBitSet *MR_SimpleBinaryVolume_GetMutable_data(MR_SimpleBinaryVolume *_this);

/// Returns a pointer to a member variable of class `MR::SimpleBinaryVolume` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_SimpleBinaryVolume_Get_dims(const MR_SimpleBinaryVolume *_this);

/// Modifies a member variable of class `MR::SimpleBinaryVolume` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SimpleBinaryVolume_Set_dims(MR_SimpleBinaryVolume *_this, MR_Vector3i value);

/// Returns a mutable pointer to a member variable of class `MR::SimpleBinaryVolume` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_SimpleBinaryVolume_GetMutable_dims(MR_SimpleBinaryVolume *_this);

/// Returns a pointer to a member variable of class `MR::SimpleBinaryVolume` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_SimpleBinaryVolume_Get_voxelSize(const MR_SimpleBinaryVolume *_this);

/// Modifies a member variable of class `MR::SimpleBinaryVolume` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SimpleBinaryVolume_Set_voxelSize(MR_SimpleBinaryVolume *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::SimpleBinaryVolume` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_SimpleBinaryVolume_GetMutable_voxelSize(MR_SimpleBinaryVolume *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleBinaryVolume_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleBinaryVolume *MR_SimpleBinaryVolume_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SimpleBinaryVolume_DestroyArray()`.
/// Use `MR_SimpleBinaryVolume_OffsetMutablePtr()` and `MR_SimpleBinaryVolume_OffsetPtr()` to access the array elements.
MRC_API MR_SimpleBinaryVolume *MR_SimpleBinaryVolume_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SimpleBinaryVolume` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleBinaryVolume_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleBinaryVolume *MR_SimpleBinaryVolume_ConstructFrom(MR_PassBy data_pass_by, MR_VoxelBitSet *data, MR_Vector3i dims, MR_Vector3f voxelSize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SimpleBinaryVolume *MR_SimpleBinaryVolume_OffsetPtr(const MR_SimpleBinaryVolume *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SimpleBinaryVolume *MR_SimpleBinaryVolume_OffsetMutablePtr(MR_SimpleBinaryVolume *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SimpleBinaryVolume`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SimpleBinaryVolume_Destroy()` to free it when you're done using it.
MRC_API MR_SimpleBinaryVolume *MR_SimpleBinaryVolume_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SimpleBinaryVolume *_other);

/// Destroys a heap-allocated instance of `MR_SimpleBinaryVolume`. Does nothing if the pointer is null.
MRC_API void MR_SimpleBinaryVolume_Destroy(const MR_SimpleBinaryVolume *_this);

/// Destroys a heap-allocated array of `MR_SimpleBinaryVolume`. Does nothing if the pointer is null.
MRC_API void MR_SimpleBinaryVolume_DestroyArray(const MR_SimpleBinaryVolume *_this);

/// Generated from a method of class `MR::SimpleBinaryVolume` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SimpleBinaryVolume *MR_SimpleBinaryVolume_AssignFromAnother(MR_SimpleBinaryVolume *_this, MR_PassBy _other_pass_by, MR_SimpleBinaryVolume *_other);

/// Generated from a method of class `MR::SimpleBinaryVolume` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_SimpleBinaryVolume_heapBytes(const MR_SimpleBinaryVolume *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsVolume<MR::FloatGrid>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FloatGrid *MR_VoxelsVolume_MR_FloatGrid_Get_data(const MR_VoxelsVolume_MR_FloatGrid *_this);

/// Modifies a member variable of class `MR::VoxelsVolume<MR::FloatGrid>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsVolume_MR_FloatGrid_Set_data(MR_VoxelsVolume_MR_FloatGrid *_this, MR_PassBy value_pass_by, MR_FloatGrid *value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsVolume<MR::FloatGrid>` named `data`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FloatGrid *MR_VoxelsVolume_MR_FloatGrid_GetMutable_data(MR_VoxelsVolume_MR_FloatGrid *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsVolume<MR::FloatGrid>` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_VoxelsVolume_MR_FloatGrid_Get_dims(const MR_VoxelsVolume_MR_FloatGrid *_this);

/// Modifies a member variable of class `MR::VoxelsVolume<MR::FloatGrid>` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsVolume_MR_FloatGrid_Set_dims(MR_VoxelsVolume_MR_FloatGrid *_this, MR_Vector3i value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsVolume<MR::FloatGrid>` named `dims`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_VoxelsVolume_MR_FloatGrid_GetMutable_dims(MR_VoxelsVolume_MR_FloatGrid *_this);

/// Returns a pointer to a member variable of class `MR::VoxelsVolume<MR::FloatGrid>` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_VoxelsVolume_MR_FloatGrid_Get_voxelSize(const MR_VoxelsVolume_MR_FloatGrid *_this);

/// Modifies a member variable of class `MR::VoxelsVolume<MR::FloatGrid>` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelsVolume_MR_FloatGrid_Set_voxelSize(MR_VoxelsVolume_MR_FloatGrid *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::VoxelsVolume<MR::FloatGrid>` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_VoxelsVolume_MR_FloatGrid_GetMutable_voxelSize(MR_VoxelsVolume_MR_FloatGrid *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolume_MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolume_MR_FloatGrid *MR_VoxelsVolume_MR_FloatGrid_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelsVolume_MR_FloatGrid_DestroyArray()`.
/// Use `MR_VoxelsVolume_MR_FloatGrid_OffsetMutablePtr()` and `MR_VoxelsVolume_MR_FloatGrid_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelsVolume_MR_FloatGrid *MR_VoxelsVolume_MR_FloatGrid_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VoxelsVolume<MR::FloatGrid>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolume_MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolume_MR_FloatGrid *MR_VoxelsVolume_MR_FloatGrid_ConstructFrom(MR_PassBy data_pass_by, MR_FloatGrid *data, MR_Vector3i dims, MR_Vector3f voxelSize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelsVolume_MR_FloatGrid *MR_VoxelsVolume_MR_FloatGrid_OffsetPtr(const MR_VoxelsVolume_MR_FloatGrid *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelsVolume_MR_FloatGrid *MR_VoxelsVolume_MR_FloatGrid_OffsetMutablePtr(MR_VoxelsVolume_MR_FloatGrid *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::VoxelsVolume<MR::FloatGrid>` to a derived class `MR::VdbVolume`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_VdbVolume *MR_VoxelsVolume_MR_FloatGrid_StaticDowncastTo_MR_VdbVolume(const MR_VoxelsVolume_MR_FloatGrid *object);

/// Downcasts an instance of `MR::VoxelsVolume<MR::FloatGrid>` to a derived class `MR::VdbVolume`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_VdbVolume *MR_VoxelsVolume_MR_FloatGrid_MutableStaticDowncastTo_MR_VdbVolume(MR_VoxelsVolume_MR_FloatGrid *object);

/// Generated from a constructor of class `MR::VoxelsVolume<MR::FloatGrid>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelsVolume_MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelsVolume_MR_FloatGrid *MR_VoxelsVolume_MR_FloatGrid_ConstructFromAnother(MR_PassBy _other_pass_by, MR_VoxelsVolume_MR_FloatGrid *_other);

/// Destroys a heap-allocated instance of `MR_VoxelsVolume_MR_FloatGrid`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolume_MR_FloatGrid_Destroy(const MR_VoxelsVolume_MR_FloatGrid *_this);

/// Destroys a heap-allocated array of `MR_VoxelsVolume_MR_FloatGrid`. Does nothing if the pointer is null.
MRC_API void MR_VoxelsVolume_MR_FloatGrid_DestroyArray(const MR_VoxelsVolume_MR_FloatGrid *_this);

/// Generated from a method of class `MR::VoxelsVolume<MR::FloatGrid>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelsVolume_MR_FloatGrid *MR_VoxelsVolume_MR_FloatGrid_AssignFromAnother(MR_VoxelsVolume_MR_FloatGrid *_this, MR_PassBy _other_pass_by, MR_VoxelsVolume_MR_FloatGrid *_other);

/// Generated from a method of class `MR::VoxelsVolume<MR::FloatGrid>` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_VoxelsVolume_MR_FloatGrid_heapBytes(const MR_VoxelsVolume_MR_FloatGrid *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_MR_Vector_float_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_MR_Vector_float_MR_VoxelId *MR_VoxelTraits_MR_Vector_float_MR_VoxelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelTraits_MR_Vector_float_MR_VoxelId_DestroyArray()`.
/// Use `MR_VoxelTraits_MR_Vector_float_MR_VoxelId_OffsetMutablePtr()` and `MR_VoxelTraits_MR_Vector_float_MR_VoxelId_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelTraits_MR_Vector_float_MR_VoxelId *MR_VoxelTraits_MR_Vector_float_MR_VoxelId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelTraits_MR_Vector_float_MR_VoxelId *MR_VoxelTraits_MR_Vector_float_MR_VoxelId_OffsetPtr(const MR_VoxelTraits_MR_Vector_float_MR_VoxelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelTraits_MR_Vector_float_MR_VoxelId *MR_VoxelTraits_MR_Vector_float_MR_VoxelId_OffsetMutablePtr(MR_VoxelTraits_MR_Vector_float_MR_VoxelId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelTraits<MR::Vector<float, MR::VoxelId>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_MR_Vector_float_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_MR_Vector_float_MR_VoxelId *MR_VoxelTraits_MR_Vector_float_MR_VoxelId_ConstructFromAnother(const MR_VoxelTraits_MR_Vector_float_MR_VoxelId *_other);

/// Destroys a heap-allocated instance of `MR_VoxelTraits_MR_Vector_float_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_MR_Vector_float_MR_VoxelId_Destroy(const MR_VoxelTraits_MR_Vector_float_MR_VoxelId *_this);

/// Destroys a heap-allocated array of `MR_VoxelTraits_MR_Vector_float_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_MR_Vector_float_MR_VoxelId_DestroyArray(const MR_VoxelTraits_MR_Vector_float_MR_VoxelId *_this);

/// Generated from a method of class `MR::VoxelTraits<MR::Vector<float, MR::VoxelId>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelTraits_MR_Vector_float_MR_VoxelId *MR_VoxelTraits_MR_Vector_float_MR_VoxelId_AssignFromAnother(MR_VoxelTraits_MR_Vector_float_MR_VoxelId *_this, const MR_VoxelTraits_MR_Vector_float_MR_VoxelId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_DestroyArray()`.
/// Use `MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_OffsetMutablePtr()` and `MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_OffsetPtr(const MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_OffsetMutablePtr(MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelTraits<MR::Vector<uint16_t, MR::VoxelId>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_ConstructFromAnother(const MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *_other);

/// Destroys a heap-allocated instance of `MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_Destroy(const MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *_this);

/// Destroys a heap-allocated array of `MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_DestroyArray(const MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *_this);

/// Generated from a method of class `MR::VoxelTraits<MR::Vector<uint16_t, MR::VoxelId>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId_AssignFromAnother(MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *_this, const MR_VoxelTraits_MR_Vector_uint16_t_MR_VoxelId *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_DestroyArray()`.
/// Use `MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_OffsetMutablePtr()` and `MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_OffsetPtr(const MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_OffsetMutablePtr(MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelTraits<std::function<float(const MR::Vector3i &)>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_ConstructFromAnother(const MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *_other);

/// Destroys a heap-allocated instance of `MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_Destroy(const MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *_this);

/// Destroys a heap-allocated array of `MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_DestroyArray(const MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *_this);

/// Generated from a method of class `MR::VoxelTraits<std::function<float(const MR::Vector3i &)>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref_AssignFromAnother(MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *_this, const MR_VoxelTraits_std_function_float_func_from_const_MR_Vector3i_ref *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_DestroyArray()`.
/// Use `MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_OffsetMutablePtr()` and `MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_OffsetPtr(const MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_OffsetMutablePtr(MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelTraits<std::function<uint8_t(const MR::Vector3i &)>>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_ConstructFromAnother(const MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *_other);

/// Destroys a heap-allocated instance of `MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_Destroy(const MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *_this);

/// Destroys a heap-allocated array of `MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_DestroyArray(const MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *_this);

/// Generated from a method of class `MR::VoxelTraits<std::function<uint8_t(const MR::Vector3i &)>>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref_AssignFromAnother(MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *_this, const MR_VoxelTraits_std_function_uint8_t_func_from_const_MR_Vector3i_ref *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_MR_VoxelBitSet *MR_VoxelTraits_MR_VoxelBitSet_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelTraits_MR_VoxelBitSet_DestroyArray()`.
/// Use `MR_VoxelTraits_MR_VoxelBitSet_OffsetMutablePtr()` and `MR_VoxelTraits_MR_VoxelBitSet_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelTraits_MR_VoxelBitSet *MR_VoxelTraits_MR_VoxelBitSet_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelTraits_MR_VoxelBitSet *MR_VoxelTraits_MR_VoxelBitSet_OffsetPtr(const MR_VoxelTraits_MR_VoxelBitSet *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelTraits_MR_VoxelBitSet *MR_VoxelTraits_MR_VoxelBitSet_OffsetMutablePtr(MR_VoxelTraits_MR_VoxelBitSet *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelTraits<MR::VoxelBitSet>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_MR_VoxelBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_MR_VoxelBitSet *MR_VoxelTraits_MR_VoxelBitSet_ConstructFromAnother(const MR_VoxelTraits_MR_VoxelBitSet *_other);

/// Destroys a heap-allocated instance of `MR_VoxelTraits_MR_VoxelBitSet`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_MR_VoxelBitSet_Destroy(const MR_VoxelTraits_MR_VoxelBitSet *_this);

/// Destroys a heap-allocated array of `MR_VoxelTraits_MR_VoxelBitSet`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_MR_VoxelBitSet_DestroyArray(const MR_VoxelTraits_MR_VoxelBitSet *_this);

/// Generated from a method of class `MR::VoxelTraits<MR::VoxelBitSet>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelTraits_MR_VoxelBitSet *MR_VoxelTraits_MR_VoxelBitSet_AssignFromAnother(MR_VoxelTraits_MR_VoxelBitSet *_this, const MR_VoxelTraits_MR_VoxelBitSet *_other);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_MR_FloatGrid *MR_VoxelTraits_MR_FloatGrid_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelTraits_MR_FloatGrid_DestroyArray()`.
/// Use `MR_VoxelTraits_MR_FloatGrid_OffsetMutablePtr()` and `MR_VoxelTraits_MR_FloatGrid_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelTraits_MR_FloatGrid *MR_VoxelTraits_MR_FloatGrid_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelTraits_MR_FloatGrid *MR_VoxelTraits_MR_FloatGrid_OffsetPtr(const MR_VoxelTraits_MR_FloatGrid *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelTraits_MR_FloatGrid *MR_VoxelTraits_MR_FloatGrid_OffsetMutablePtr(MR_VoxelTraits_MR_FloatGrid *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelTraits<MR::FloatGrid>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelTraits_MR_FloatGrid_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelTraits_MR_FloatGrid *MR_VoxelTraits_MR_FloatGrid_ConstructFromAnother(const MR_VoxelTraits_MR_FloatGrid *_other);

/// Destroys a heap-allocated instance of `MR_VoxelTraits_MR_FloatGrid`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_MR_FloatGrid_Destroy(const MR_VoxelTraits_MR_FloatGrid *_this);

/// Destroys a heap-allocated array of `MR_VoxelTraits_MR_FloatGrid`. Does nothing if the pointer is null.
MRC_API void MR_VoxelTraits_MR_FloatGrid_DestroyArray(const MR_VoxelTraits_MR_FloatGrid *_this);

/// Generated from a method of class `MR::VoxelTraits<MR::FloatGrid>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelTraits_MR_FloatGrid *MR_VoxelTraits_MR_FloatGrid_AssignFromAnother(MR_VoxelTraits_MR_FloatGrid *_this, const MR_VoxelTraits_MR_FloatGrid *_other);

/// converts function volume into simple volume
/// Generated from function `MR::functionVolumeToSimpleVolume`.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `callback` is a single object.
/// Parameter `callback` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_SimpleVolumeMinMax_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_SimpleVolumeMinMax_std_string *MR_functionVolumeToSimpleVolume(const MR_FunctionVolume *volume, const MR_std_function_bool_from_float *callback);

#ifdef __cplusplus
} // extern "C"
#endif
