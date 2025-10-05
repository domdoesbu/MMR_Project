// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_TextMeshAlignParams MR_TextMeshAlignParams; // Defined in `#include <MRCSymbolMesh/MRAlignTextToMesh.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_expected_std_vector_std_vector_MR_Vector2f_std_string MR_expected_std_vector_std_vector_MR_Vector2f_std_string; // Defined in `#include <MRCMisc/expected_std_vector_std_vector_MR_Vector2f_std_string.h>`.
typedef struct MR_std_filesystem_path MR_std_filesystem_path; // Defined in `#include <MRCMisc/std_filesystem_path.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


typedef enum MR_AlignType
{
    MR_AlignType_Left = 0,
    MR_AlignType_Center = 1,
    MR_AlignType_Right = 2,
} MR_AlignType;

/// Generated from class `MR::SymbolMeshParams`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::TextMeshAlignParams`
typedef struct MR_SymbolMeshParams MR_SymbolMeshParams;

// max font size with 128 << 6 FT_F26Dot6 font size
/// Returns a pointer to a member variable of class `MR::SymbolMeshParams` named `MaxGeneratedFontHeight`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymbolMeshParams_Get_MaxGeneratedFontHeight(void);

// Text that will be made mesh
/// Returns a pointer to a member variable of class `MR::SymbolMeshParams` named `text`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_SymbolMeshParams_Get_text(const MR_SymbolMeshParams *_this);

// Text that will be made mesh
/// Modifies a member variable of class `MR::SymbolMeshParams` named `text`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_SymbolMeshParams_Set_text(MR_SymbolMeshParams *_this, const char *value, const char *value_end);

// Text that will be made mesh
/// Returns a mutable pointer to a member variable of class `MR::SymbolMeshParams` named `text`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_SymbolMeshParams_GetMutable_text(MR_SymbolMeshParams *_this);

// Detailization of Bezier curves on font glyphs
/// Returns a pointer to a member variable of class `MR::SymbolMeshParams` named `fontDetalization`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SymbolMeshParams_Get_fontDetalization(const MR_SymbolMeshParams *_this);

// Detailization of Bezier curves on font glyphs
/// Modifies a member variable of class `MR::SymbolMeshParams` named `fontDetalization`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymbolMeshParams_Set_fontDetalization(MR_SymbolMeshParams *_this, int32_t value);

// Detailization of Bezier curves on font glyphs
/// Returns a mutable pointer to a member variable of class `MR::SymbolMeshParams` named `fontDetalization`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SymbolMeshParams_GetMutable_fontDetalization(MR_SymbolMeshParams *_this);

// Additional offset between symbols
// X: In symbol size: 1.0f adds one "space", 0.5 adds half "space".
// Y: In symbol size: 1.0f adds one base height, 0.5 adds half base height
/// Returns a pointer to a member variable of class `MR::SymbolMeshParams` named `symbolsDistanceAdditionalOffset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_SymbolMeshParams_Get_symbolsDistanceAdditionalOffset(const MR_SymbolMeshParams *_this);

// Additional offset between symbols
// X: In symbol size: 1.0f adds one "space", 0.5 adds half "space".
// Y: In symbol size: 1.0f adds one base height, 0.5 adds half base height
/// Modifies a member variable of class `MR::SymbolMeshParams` named `symbolsDistanceAdditionalOffset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymbolMeshParams_Set_symbolsDistanceAdditionalOffset(MR_SymbolMeshParams *_this, MR_Vector2f value);

// Additional offset between symbols
// X: In symbol size: 1.0f adds one "space", 0.5 adds half "space".
// Y: In symbol size: 1.0f adds one base height, 0.5 adds half base height
/// Returns a mutable pointer to a member variable of class `MR::SymbolMeshParams` named `symbolsDistanceAdditionalOffset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_SymbolMeshParams_GetMutable_symbolsDistanceAdditionalOffset(MR_SymbolMeshParams *_this);

// Symbols thickness will be modified by this value (newThickness = modifier*baseSymbolHeight + defaultThickness)
// note: changing this to non-zero values cause costly calculations
/// Returns a pointer to a member variable of class `MR::SymbolMeshParams` named `symbolsThicknessOffsetModifier`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SymbolMeshParams_Get_symbolsThicknessOffsetModifier(const MR_SymbolMeshParams *_this);

// Symbols thickness will be modified by this value (newThickness = modifier*baseSymbolHeight + defaultThickness)
// note: changing this to non-zero values cause costly calculations
/// Modifies a member variable of class `MR::SymbolMeshParams` named `symbolsThicknessOffsetModifier`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymbolMeshParams_Set_symbolsThicknessOffsetModifier(MR_SymbolMeshParams *_this, float value);

// Symbols thickness will be modified by this value (newThickness = modifier*baseSymbolHeight + defaultThickness)
// note: changing this to non-zero values cause costly calculations
/// Returns a mutable pointer to a member variable of class `MR::SymbolMeshParams` named `symbolsThicknessOffsetModifier`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SymbolMeshParams_GetMutable_symbolsThicknessOffsetModifier(MR_SymbolMeshParams *_this);

// alignment of the text inside bbox
/// Returns a pointer to a member variable of class `MR::SymbolMeshParams` named `align`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AlignType *MR_SymbolMeshParams_Get_align(const MR_SymbolMeshParams *_this);

// alignment of the text inside bbox
/// Modifies a member variable of class `MR::SymbolMeshParams` named `align`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SymbolMeshParams_Set_align(MR_SymbolMeshParams *_this, MR_AlignType value);

// alignment of the text inside bbox
/// Returns a mutable pointer to a member variable of class `MR::SymbolMeshParams` named `align`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AlignType *MR_SymbolMeshParams_GetMutable_align(MR_SymbolMeshParams *_this);

// Path to font file
/// Returns a pointer to a member variable of class `MR::SymbolMeshParams` named `pathToFontFile`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_filesystem_path *MR_SymbolMeshParams_Get_pathToFontFile(const MR_SymbolMeshParams *_this);

// Path to font file
/// Modifies a member variable of class `MR::SymbolMeshParams` named `pathToFontFile`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is a UTF-8 encoded filesystem path.
MRC_API void MR_SymbolMeshParams_Set_pathToFontFile(MR_SymbolMeshParams *_this, const char *value, const char *value_end);

// Path to font file
/// Returns a mutable pointer to a member variable of class `MR::SymbolMeshParams` named `pathToFontFile`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_filesystem_path *MR_SymbolMeshParams_GetMutable_pathToFontFile(MR_SymbolMeshParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymbolMeshParams_Destroy()` to free it when you're done using it.
MRC_API MR_SymbolMeshParams *MR_SymbolMeshParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SymbolMeshParams_DestroyArray()`.
/// Use `MR_SymbolMeshParams_OffsetMutablePtr()` and `MR_SymbolMeshParams_OffsetPtr()` to access the array elements.
MRC_API MR_SymbolMeshParams *MR_SymbolMeshParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SymbolMeshParams` elementwise.
/// Parameter `text` can not be null.
/// If `text_end` is null, then `text` is assumed to be null-terminated.
/// Parameter `pathToFontFile` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymbolMeshParams_Destroy()` to free it when you're done using it.
MRC_API MR_SymbolMeshParams *MR_SymbolMeshParams_ConstructFrom(const char *text, const char *text_end, int32_t fontDetalization, MR_Vector2f symbolsDistanceAdditionalOffset, float symbolsThicknessOffsetModifier, MR_AlignType align, const char *pathToFontFile, const char *pathToFontFile_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SymbolMeshParams *MR_SymbolMeshParams_OffsetPtr(const MR_SymbolMeshParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SymbolMeshParams *MR_SymbolMeshParams_OffsetMutablePtr(MR_SymbolMeshParams *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::SymbolMeshParams` to a derived class `MR::TextMeshAlignParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_TextMeshAlignParams *MR_SymbolMeshParams_StaticDowncastTo_MR_TextMeshAlignParams(const MR_SymbolMeshParams *object);

/// Downcasts an instance of `MR::SymbolMeshParams` to a derived class `MR::TextMeshAlignParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_TextMeshAlignParams *MR_SymbolMeshParams_MutableStaticDowncastTo_MR_TextMeshAlignParams(MR_SymbolMeshParams *object);

/// Generated from a constructor of class `MR::SymbolMeshParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SymbolMeshParams_Destroy()` to free it when you're done using it.
MRC_API MR_SymbolMeshParams *MR_SymbolMeshParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SymbolMeshParams *_other);

/// Destroys a heap-allocated instance of `MR_SymbolMeshParams`. Does nothing if the pointer is null.
MRC_API void MR_SymbolMeshParams_Destroy(const MR_SymbolMeshParams *_this);

/// Destroys a heap-allocated array of `MR_SymbolMeshParams`. Does nothing if the pointer is null.
MRC_API void MR_SymbolMeshParams_DestroyArray(const MR_SymbolMeshParams *_this);

/// Generated from a method of class `MR::SymbolMeshParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SymbolMeshParams *MR_SymbolMeshParams_AssignFromAnother(MR_SymbolMeshParams *_this, MR_PassBy _other_pass_by, MR_SymbolMeshParams *_other);

// converts text string into set of contours
/// Generated from function `MR::createSymbolContours`.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_vector_std_vector_MR_Vector2f_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_vector_std_vector_MR_Vector2f_std_string *MR_createSymbolContours(const MR_SymbolMeshParams *params);

// converts text string into Z-facing symbol mesh
/// Generated from function `MR::createSymbolsMesh`.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_createSymbolsMesh(const MR_SymbolMeshParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
