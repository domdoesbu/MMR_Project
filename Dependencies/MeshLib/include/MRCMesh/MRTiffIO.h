// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_expected_MR_TiffParameters_std_string MR_expected_MR_TiffParameters_std_string; // Defined in `#include <MRCMisc/expected_MR_TiffParameters_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.


/// Generated from class `MR::BaseTiffParameters`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::TiffParameters`
typedef struct MR_BaseTiffParameters MR_BaseTiffParameters;

typedef int32_t MR_BaseTiffParameters_SampleType;
enum // MR_BaseTiffParameters_SampleType
{
    MR_BaseTiffParameters_SampleType_Unknown = 0,
    MR_BaseTiffParameters_SampleType_Uint = 1,
    MR_BaseTiffParameters_SampleType_Int = 2,
    MR_BaseTiffParameters_SampleType_Float = 3,
};

typedef int32_t MR_BaseTiffParameters_ValueType;
enum // MR_BaseTiffParameters_ValueType
{
    MR_BaseTiffParameters_ValueType_Unknown = 0,
    MR_BaseTiffParameters_ValueType_Scalar = 1,
    MR_BaseTiffParameters_ValueType_RGB = 2,
    MR_BaseTiffParameters_ValueType_RGBA = 3,
};

/// Generated from class `MR::TiffParameters`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BaseTiffParameters`
typedef struct MR_TiffParameters MR_TiffParameters;

/// Generated from class `MR::RawTiffOutput`.
typedef struct MR_RawTiffOutput MR_RawTiffOutput;

/// Returns a pointer to a member variable of class `MR::BaseTiffParameters` named `sampleType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BaseTiffParameters_SampleType *MR_BaseTiffParameters_Get_sampleType(const MR_BaseTiffParameters *_this);

/// Modifies a member variable of class `MR::BaseTiffParameters` named `sampleType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BaseTiffParameters_Set_sampleType(MR_BaseTiffParameters *_this, MR_BaseTiffParameters_SampleType value);

/// Returns a mutable pointer to a member variable of class `MR::BaseTiffParameters` named `sampleType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BaseTiffParameters_SampleType *MR_BaseTiffParameters_GetMutable_sampleType(MR_BaseTiffParameters *_this);

/// Returns a pointer to a member variable of class `MR::BaseTiffParameters` named `valueType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BaseTiffParameters_ValueType *MR_BaseTiffParameters_Get_valueType(const MR_BaseTiffParameters *_this);

/// Modifies a member variable of class `MR::BaseTiffParameters` named `valueType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BaseTiffParameters_Set_valueType(MR_BaseTiffParameters *_this, MR_BaseTiffParameters_ValueType value);

/// Returns a mutable pointer to a member variable of class `MR::BaseTiffParameters` named `valueType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BaseTiffParameters_ValueType *MR_BaseTiffParameters_GetMutable_valueType(MR_BaseTiffParameters *_this);

// size of internal data in file
/// Returns a pointer to a member variable of class `MR::BaseTiffParameters` named `bytesPerSample`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_BaseTiffParameters_Get_bytesPerSample(const MR_BaseTiffParameters *_this);

// size of internal data in file
/// Modifies a member variable of class `MR::BaseTiffParameters` named `bytesPerSample`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BaseTiffParameters_Set_bytesPerSample(MR_BaseTiffParameters *_this, int32_t value);

// size of internal data in file
/// Returns a mutable pointer to a member variable of class `MR::BaseTiffParameters` named `bytesPerSample`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_BaseTiffParameters_GetMutable_bytesPerSample(MR_BaseTiffParameters *_this);

// size of image if not layered, otherwise size of layer
/// Returns a pointer to a member variable of class `MR::BaseTiffParameters` named `imageSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_BaseTiffParameters_Get_imageSize(const MR_BaseTiffParameters *_this);

// size of image if not layered, otherwise size of layer
/// Modifies a member variable of class `MR::BaseTiffParameters` named `imageSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BaseTiffParameters_Set_imageSize(MR_BaseTiffParameters *_this, MR_Vector2i value);

// size of image if not layered, otherwise size of layer
/// Returns a mutable pointer to a member variable of class `MR::BaseTiffParameters` named `imageSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_BaseTiffParameters_GetMutable_imageSize(MR_BaseTiffParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BaseTiffParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BaseTiffParameters *MR_BaseTiffParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BaseTiffParameters_DestroyArray()`.
/// Use `MR_BaseTiffParameters_OffsetMutablePtr()` and `MR_BaseTiffParameters_OffsetPtr()` to access the array elements.
MRC_API MR_BaseTiffParameters *MR_BaseTiffParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BaseTiffParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BaseTiffParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BaseTiffParameters *MR_BaseTiffParameters_ConstructFrom(MR_BaseTiffParameters_SampleType sampleType, MR_BaseTiffParameters_ValueType valueType, int32_t bytesPerSample, MR_Vector2i imageSize);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BaseTiffParameters *MR_BaseTiffParameters_OffsetPtr(const MR_BaseTiffParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BaseTiffParameters *MR_BaseTiffParameters_OffsetMutablePtr(MR_BaseTiffParameters *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::BaseTiffParameters` to a derived class `MR::TiffParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_TiffParameters *MR_BaseTiffParameters_StaticDowncastTo_MR_TiffParameters(const MR_BaseTiffParameters *object);

/// Downcasts an instance of `MR::BaseTiffParameters` to a derived class `MR::TiffParameters`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_TiffParameters *MR_BaseTiffParameters_MutableStaticDowncastTo_MR_TiffParameters(MR_BaseTiffParameters *object);

/// Generated from a constructor of class `MR::BaseTiffParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BaseTiffParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BaseTiffParameters *MR_BaseTiffParameters_ConstructFromAnother(const MR_BaseTiffParameters *_other);

/// Destroys a heap-allocated instance of `MR_BaseTiffParameters`. Does nothing if the pointer is null.
MRC_API void MR_BaseTiffParameters_Destroy(const MR_BaseTiffParameters *_this);

/// Destroys a heap-allocated array of `MR_BaseTiffParameters`. Does nothing if the pointer is null.
MRC_API void MR_BaseTiffParameters_DestroyArray(const MR_BaseTiffParameters *_this);

/// Generated from a method of class `MR::BaseTiffParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BaseTiffParameters *MR_BaseTiffParameters_AssignFromAnother(MR_BaseTiffParameters *_this, const MR_BaseTiffParameters *_other);

/// Generated from a method of class `MR::BaseTiffParameters` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_BaseTiffParameters(const MR_BaseTiffParameters *_this, const MR_BaseTiffParameters *_1);

// true if tif file is tiled
/// Returns a pointer to a member variable of class `MR::TiffParameters` named `tiled`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_TiffParameters_Get_tiled(const MR_TiffParameters *_this);

// true if tif file is tiled
/// Modifies a member variable of class `MR::TiffParameters` named `tiled`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TiffParameters_Set_tiled(MR_TiffParameters *_this, bool value);

// true if tif file is tiled
/// Returns a mutable pointer to a member variable of class `MR::TiffParameters` named `tiled`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_TiffParameters_GetMutable_tiled(MR_TiffParameters *_this);

/// Returns a pointer to a member variable of class `MR::TiffParameters` named `tileSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_TiffParameters_Get_tileSize(const MR_TiffParameters *_this);

/// Modifies a member variable of class `MR::TiffParameters` named `tileSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TiffParameters_Set_tileSize(MR_TiffParameters *_this, MR_Vector2i value);

/// Returns a mutable pointer to a member variable of class `MR::TiffParameters` named `tileSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_TiffParameters_GetMutable_tileSize(MR_TiffParameters *_this);

/// Returns a pointer to a member variable of class `MR::TiffParameters` named `layers`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_TiffParameters_Get_layers(const MR_TiffParameters *_this);

/// Modifies a member variable of class `MR::TiffParameters` named `layers`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TiffParameters_Set_layers(MR_TiffParameters *_this, int32_t value);

/// Returns a mutable pointer to a member variable of class `MR::TiffParameters` named `layers`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_TiffParameters_GetMutable_layers(MR_TiffParameters *_this);

// tile depth (if several layers)
/// Returns a pointer to a member variable of class `MR::TiffParameters` named `depth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_TiffParameters_Get_depth(const MR_TiffParameters *_this);

// tile depth (if several layers)
/// Modifies a member variable of class `MR::TiffParameters` named `depth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TiffParameters_Set_depth(MR_TiffParameters *_this, int32_t value);

// tile depth (if several layers)
/// Returns a mutable pointer to a member variable of class `MR::TiffParameters` named `depth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_TiffParameters_GetMutable_depth(MR_TiffParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TiffParameters_Destroy()` to free it when you're done using it.
MRC_API MR_TiffParameters *MR_TiffParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TiffParameters_DestroyArray()`.
/// Use `MR_TiffParameters_OffsetMutablePtr()` and `MR_TiffParameters_OffsetPtr()` to access the array elements.
MRC_API MR_TiffParameters *MR_TiffParameters_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TiffParameters *MR_TiffParameters_OffsetPtr(const MR_TiffParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TiffParameters *MR_TiffParameters_OffsetMutablePtr(MR_TiffParameters *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::TiffParameters` to its base class `MR::BaseTiffParameters`.
/// This version is acting on mutable pointers.
MRC_API const MR_BaseTiffParameters *MR_TiffParameters_UpcastTo_MR_BaseTiffParameters(const MR_TiffParameters *object);

/// Upcasts an instance of `MR::TiffParameters` to its base class `MR::BaseTiffParameters`.
MRC_API MR_BaseTiffParameters *MR_TiffParameters_MutableUpcastTo_MR_BaseTiffParameters(MR_TiffParameters *object);

/// Generated from a constructor of class `MR::TiffParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TiffParameters_Destroy()` to free it when you're done using it.
MRC_API MR_TiffParameters *MR_TiffParameters_ConstructFromAnother(const MR_TiffParameters *_other);

/// Destroys a heap-allocated instance of `MR_TiffParameters`. Does nothing if the pointer is null.
MRC_API void MR_TiffParameters_Destroy(const MR_TiffParameters *_this);

/// Destroys a heap-allocated array of `MR_TiffParameters`. Does nothing if the pointer is null.
MRC_API void MR_TiffParameters_DestroyArray(const MR_TiffParameters *_this);

/// Generated from a method of class `MR::TiffParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TiffParameters *MR_TiffParameters_AssignFromAnother(MR_TiffParameters *_this, const MR_TiffParameters *_other);

/// Generated from a method of class `MR::TiffParameters` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_TiffParameters(const MR_TiffParameters *_this, const MR_TiffParameters *_1);

// returns true if given file is tiff
/// Generated from function `MR::isTIFFFile`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
MRC_API bool MR_isTIFFFile(const char *path, const char *path_end);

// reads parameters of tiff file
/// Generated from function `MR::readTiffParameters`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_TiffParameters_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_TiffParameters_std_string *MR_readTiffParameters(const char *path, const char *path_end);

// main output data, should be allocated
/// Returns a pointer to a member variable of class `MR::RawTiffOutput` named `bytes`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint8_t *const *MR_RawTiffOutput_Get_bytes(const MR_RawTiffOutput *_this);

// main output data, should be allocated
/// Modifies a member variable of class `MR::RawTiffOutput` named `bytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RawTiffOutput_Set_bytes(MR_RawTiffOutput *_this, uint8_t *value);

// main output data, should be allocated
/// Returns a mutable pointer to a member variable of class `MR::RawTiffOutput` named `bytes`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint8_t **MR_RawTiffOutput_GetMutable_bytes(MR_RawTiffOutput *_this);

// allocated data size
/// Returns a pointer to a member variable of class `MR::RawTiffOutput` named `size`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_RawTiffOutput_Get_size(const MR_RawTiffOutput *_this);

// allocated data size
/// Modifies a member variable of class `MR::RawTiffOutput` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RawTiffOutput_Set_size(MR_RawTiffOutput *_this, MR_uint64_t value);

// allocated data size
/// Returns a mutable pointer to a member variable of class `MR::RawTiffOutput` named `size`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_RawTiffOutput_GetMutable_size(MR_RawTiffOutput *_this);

// optional params output
/// Returns a pointer to a member variable of class `MR::RawTiffOutput` named `params`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TiffParameters *const *MR_RawTiffOutput_Get_params(const MR_RawTiffOutput *_this);

// optional params output
/// Modifies a member variable of class `MR::RawTiffOutput` named `params`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RawTiffOutput_Set_params(MR_RawTiffOutput *_this, MR_TiffParameters *value);

// optional params output
/// Returns a mutable pointer to a member variable of class `MR::RawTiffOutput` named `params`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TiffParameters **MR_RawTiffOutput_GetMutable_params(MR_RawTiffOutput *_this);

// optional pixel to world transform
/// Returns a pointer to a member variable of class `MR::RawTiffOutput` named `p2wXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f *const *MR_RawTiffOutput_Get_p2wXf(const MR_RawTiffOutput *_this);

// optional pixel to world transform
/// Modifies a member variable of class `MR::RawTiffOutput` named `p2wXf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RawTiffOutput_Set_p2wXf(MR_RawTiffOutput *_this, MR_AffineXf3f *value);

// optional pixel to world transform
/// Returns a mutable pointer to a member variable of class `MR::RawTiffOutput` named `p2wXf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AffineXf3f **MR_RawTiffOutput_GetMutable_p2wXf(MR_RawTiffOutput *_this);

// input if true loads tiff file as floats array
/// Returns a pointer to a member variable of class `MR::RawTiffOutput` named `convertToFloat`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_RawTiffOutput_Get_convertToFloat(const MR_RawTiffOutput *_this);

// input if true loads tiff file as floats array
/// Modifies a member variable of class `MR::RawTiffOutput` named `convertToFloat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RawTiffOutput_Set_convertToFloat(MR_RawTiffOutput *_this, bool value);

// input if true loads tiff file as floats array
/// Returns a mutable pointer to a member variable of class `MR::RawTiffOutput` named `convertToFloat`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_RawTiffOutput_GetMutable_convertToFloat(MR_RawTiffOutput *_this);

// min max
/// Returns a pointer to a member variable of class `MR::RawTiffOutput` named `min`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *const *MR_RawTiffOutput_Get_min(const MR_RawTiffOutput *_this);

// min max
/// Modifies a member variable of class `MR::RawTiffOutput` named `min`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RawTiffOutput_Set_min(MR_RawTiffOutput *_this, float *value);

// min max
/// Returns a mutable pointer to a member variable of class `MR::RawTiffOutput` named `min`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float **MR_RawTiffOutput_GetMutable_min(MR_RawTiffOutput *_this);

/// Returns a pointer to a member variable of class `MR::RawTiffOutput` named `max`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *const *MR_RawTiffOutput_Get_max(const MR_RawTiffOutput *_this);

/// Modifies a member variable of class `MR::RawTiffOutput` named `max`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RawTiffOutput_Set_max(MR_RawTiffOutput *_this, float *value);

/// Returns a mutable pointer to a member variable of class `MR::RawTiffOutput` named `max`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float **MR_RawTiffOutput_GetMutable_max(MR_RawTiffOutput *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RawTiffOutput_Destroy()` to free it when you're done using it.
MRC_API MR_RawTiffOutput *MR_RawTiffOutput_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RawTiffOutput_DestroyArray()`.
/// Use `MR_RawTiffOutput_OffsetMutablePtr()` and `MR_RawTiffOutput_OffsetPtr()` to access the array elements.
MRC_API MR_RawTiffOutput *MR_RawTiffOutput_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::RawTiffOutput` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RawTiffOutput_Destroy()` to free it when you're done using it.
MRC_API MR_RawTiffOutput *MR_RawTiffOutput_ConstructFrom(uint8_t *bytes, MR_uint64_t size, MR_TiffParameters *params, MR_AffineXf3f *p2wXf, bool convertToFloat, float *min, float *max);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RawTiffOutput *MR_RawTiffOutput_OffsetPtr(const MR_RawTiffOutput *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RawTiffOutput *MR_RawTiffOutput_OffsetMutablePtr(MR_RawTiffOutput *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::RawTiffOutput`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RawTiffOutput_Destroy()` to free it when you're done using it.
MRC_API MR_RawTiffOutput *MR_RawTiffOutput_ConstructFromAnother(const MR_RawTiffOutput *_other);

/// Destroys a heap-allocated instance of `MR_RawTiffOutput`. Does nothing if the pointer is null.
MRC_API void MR_RawTiffOutput_Destroy(const MR_RawTiffOutput *_this);

/// Destroys a heap-allocated array of `MR_RawTiffOutput`. Does nothing if the pointer is null.
MRC_API void MR_RawTiffOutput_DestroyArray(const MR_RawTiffOutput *_this);

/// Generated from a method of class `MR::RawTiffOutput` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RawTiffOutput *MR_RawTiffOutput_AssignFromAnother(MR_RawTiffOutput *_this, const MR_RawTiffOutput *_other);

// load values from tiff to ouput.data
/// Generated from function `MR::readRawTiff`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `output` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_readRawTiff(const char *path, const char *path_end, MR_RawTiffOutput *output);

// writes bytes to tiff file
/// Generated from function `MR::writeRawTiff`.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_writeRawTiff(const uint8_t *bytes, const char *path, const char *path_end, const MR_BaseTiffParameters *params);

#ifdef __cplusplus
} // extern "C"
#endif
