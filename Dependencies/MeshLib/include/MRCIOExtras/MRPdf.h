// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRColor.h>
#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_Pdf_PaletteRowStats MR_std_vector_MR_Pdf_PaletteRowStats; // Defined in `#include <MRCMisc/std_vector_MR_Pdf_PaletteRowStats.h>`.
typedef struct MR_std_vector_std_pair_std_string_float MR_std_vector_std_pair_std_string_float; // Defined in `#include <MRCMisc/std_vector_std_pair_std_string_float.h>`.


/**
* @brief Parameters of document style
*/
/// Generated from class `MR::PdfParameters`.
typedef struct MR_PdfParameters MR_PdfParameters;

/**
* Class for simple creation pdf.
*/
/// Generated from class `MR::Pdf`.
typedef struct MR_Pdf MR_Pdf;

/// Generated from class `MR::Pdf::PaletteRowStats`.
typedef struct MR_Pdf_PaletteRowStats MR_Pdf_PaletteRowStats;

/// Parameters to adding image from file
/// Generated from class `MR::Pdf::ImageParams`.
typedef struct MR_Pdf_ImageParams MR_Pdf_ImageParams;

/// Returns a pointer to a member variable of class `MR::PdfParameters` named `titleSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PdfParameters_Get_titleSize(const MR_PdfParameters *_this);

/// Modifies a member variable of class `MR::PdfParameters` named `titleSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PdfParameters_Set_titleSize(MR_PdfParameters *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::PdfParameters` named `titleSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PdfParameters_GetMutable_titleSize(MR_PdfParameters *_this);

/// Returns a pointer to a member variable of class `MR::PdfParameters` named `textSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PdfParameters_Get_textSize(const MR_PdfParameters *_this);

/// Modifies a member variable of class `MR::PdfParameters` named `textSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PdfParameters_Set_textSize(MR_PdfParameters *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::PdfParameters` named `textSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PdfParameters_GetMutable_textSize(MR_PdfParameters *_this);

/**
* @brief Font name
* list of available fonts:
* Courier (-Bold, -Oblique, -BoldOblique)
* Helvetica (-Bold, -Oblique, -BoldOblique)
* Times (-Roman, -Bold, -Italic, -BoldItalic)
* Symbol
* ZapfDingbats
*/
/// Returns a pointer to a member variable of class `MR::PdfParameters` named `defaultFontName`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_PdfParameters_Get_defaultFontName(const MR_PdfParameters *_this);

/**
* @brief Font name
* list of available fonts:
* Courier (-Bold, -Oblique, -BoldOblique)
* Helvetica (-Bold, -Oblique, -BoldOblique)
* Times (-Roman, -Bold, -Italic, -BoldItalic)
* Symbol
* ZapfDingbats
*/
/// Modifies a member variable of class `MR::PdfParameters` named `defaultFontName`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_PdfParameters_Set_defaultFontName(MR_PdfParameters *_this, const char *value, const char *value_end);

/**
* @brief Font name
* list of available fonts:
* Courier (-Bold, -Oblique, -BoldOblique)
* Helvetica (-Bold, -Oblique, -BoldOblique)
* Times (-Roman, -Bold, -Italic, -BoldItalic)
* Symbol
* ZapfDingbats
*/
/// Returns a mutable pointer to a member variable of class `MR::PdfParameters` named `defaultFontName`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_PdfParameters_GetMutable_defaultFontName(MR_PdfParameters *_this);

/**
* Font name for table (monospaced)
*/
/// Returns a pointer to a member variable of class `MR::PdfParameters` named `tableFontName`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_PdfParameters_Get_tableFontName(const MR_PdfParameters *_this);

/**
* Font name for table (monospaced)
*/
/// Modifies a member variable of class `MR::PdfParameters` named `tableFontName`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_PdfParameters_Set_tableFontName(MR_PdfParameters *_this, const char *value, const char *value_end);

/**
* Font name for table (monospaced)
*/
/// Returns a mutable pointer to a member variable of class `MR::PdfParameters` named `tableFontName`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_PdfParameters_GetMutable_tableFontName(MR_PdfParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PdfParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PdfParameters *MR_PdfParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PdfParameters_DestroyArray()`.
/// Use `MR_PdfParameters_OffsetMutablePtr()` and `MR_PdfParameters_OffsetPtr()` to access the array elements.
MRC_API MR_PdfParameters *MR_PdfParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PdfParameters` elementwise.
/// Parameter `defaultFontName` can not be null.
/// If `defaultFontName_end` is null, then `defaultFontName` is assumed to be null-terminated.
/// Parameter `tableFontName` can not be null.
/// If `tableFontName_end` is null, then `tableFontName` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PdfParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PdfParameters *MR_PdfParameters_ConstructFrom(float titleSize, float textSize, const char *defaultFontName, const char *defaultFontName_end, const char *tableFontName, const char *tableFontName_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PdfParameters *MR_PdfParameters_OffsetPtr(const MR_PdfParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PdfParameters *MR_PdfParameters_OffsetMutablePtr(MR_PdfParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PdfParameters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PdfParameters_Destroy()` to free it when you're done using it.
MRC_API MR_PdfParameters *MR_PdfParameters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PdfParameters *_other);

/// Destroys a heap-allocated instance of `MR_PdfParameters`. Does nothing if the pointer is null.
MRC_API void MR_PdfParameters_Destroy(const MR_PdfParameters *_this);

/// Destroys a heap-allocated array of `MR_PdfParameters`. Does nothing if the pointer is null.
MRC_API void MR_PdfParameters_DestroyArray(const MR_PdfParameters *_this);

/// Generated from a method of class `MR::PdfParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PdfParameters *MR_PdfParameters_AssignFromAnother(MR_PdfParameters *_this, MR_PassBy _other_pass_by, MR_PdfParameters *_other);

/// Generated from a constructor of class `MR::Pdf`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Pdf_Destroy()` to free it when you're done using it.
MRC_API MR_Pdf *MR_Pdf_ConstructFromAnother(MR_PassBy other_pass_by, MR_Pdf *other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Pdf *MR_Pdf_OffsetPtr(const MR_Pdf *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Pdf *MR_Pdf_OffsetMutablePtr(MR_Pdf *ptr, ptrdiff_t i);

/// Ctor
/// Generated from a constructor of class `MR::Pdf`.
/// Parameter `documentPath` is a UTF-8 encoded filesystem path.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `MR::PdfParameters()`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Pdf_Destroy()` to free it when you're done using it.
MRC_API MR_Pdf *MR_Pdf_Construct(const char *documentPath, const char *documentPath_end, const MR_PdfParameters *params);

/// Destroys a heap-allocated instance of `MR_Pdf`. Does nothing if the pointer is null.
MRC_API void MR_Pdf_Destroy(const MR_Pdf *_this);

/// Destroys a heap-allocated array of `MR_Pdf`. Does nothing if the pointer is null.
MRC_API void MR_Pdf_DestroyArray(const MR_Pdf *_this);

/// Checking the ability to work with a document
/// Generated from a conversion operator of class `MR::Pdf` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Pdf_ConvertTo_bool(const MR_Pdf *_this);

/// Generated from a method of class `MR::Pdf` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Pdf *MR_Pdf_AssignFromAnother(MR_Pdf *_this, MR_PassBy other_pass_by, MR_Pdf *other);

/**
* Add text block in current cursor position.
* Move cursor.
* Box horizontal size is page width without offset.
* Box vertical size is automatically for text.
* horAlignment = left
* if isTitle - horAlignment = center, use titleFontSize
*/
/// Generated from a method of class `MR::Pdf` named `addText`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `text` can not be null. It is a single object.
/// Parameter `isTitle` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_Pdf_addText(MR_Pdf *_this, const MR_std_string *text, const bool *isTitle);

/**
* Add set of pair string - value in current cursor position.
* Move cursor.
* Box horizontal size is page width without offset.
* Box vertical size is automatically for text.
*/
/// Generated from a method of class `MR::Pdf` named `addTable`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `table` can not be null. It is a single object.
MRC_API void MR_Pdf_addTable(MR_Pdf *_this, const MR_std_vector_std_pair_std_string_float *table);

/// Generated from a method of class `MR::Pdf` named `addPaletteStatsTable`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `paletteStats` can not be null. It is a single object.
MRC_API void MR_Pdf_addPaletteStatsTable(MR_Pdf *_this, const MR_std_vector_MR_Pdf_PaletteRowStats *paletteStats);

/**
* @brief Add image from file in current cursor position.
* If image bigger than page size, autoscale image to page size.
* Move cursor.
*/
/// Generated from a method of class `MR::Pdf` named `addImageFromFile`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `imagePath` is a UTF-8 encoded filesystem path.
/// Parameter `params` can not be null. It is a single object.
MRC_API void MR_Pdf_addImageFromFile(MR_Pdf *_this, const char *imagePath, const char *imagePath_end, const MR_Pdf_ImageParams *params);

/// Add new pageand move cursor on it
/// Generated from a method of class `MR::Pdf` named `newPage`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Pdf_newPage(MR_Pdf *_this);

/// Save and close document. After this impossible add anything in document
/// Generated from a method of class `MR::Pdf` named `close`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Pdf_close(MR_Pdf *_this);

/// Generated from a method of class `MR::Pdf` named `setCursorPosX`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Pdf_setCursorPosX(MR_Pdf *_this, float posX);

/// Generated from a method of class `MR::Pdf` named `setCursorPosY`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Pdf_setCursorPosY(MR_Pdf *_this, float posY);

/// Generated from a method of class `MR::Pdf` named `getCursorPosX`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Pdf_getCursorPosX(const MR_Pdf *_this);

/// Generated from a method of class `MR::Pdf` named `getCursorPosY`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Pdf_getCursorPosY(const MR_Pdf *_this);

/// Generated from a method of class `MR::Pdf` named `getPageSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Pdf_getPageSize(const MR_Pdf *_this);

/// Generated from a method of class `MR::Pdf` named `getPageWorkArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box2f MR_Pdf_getPageWorkArea(const MR_Pdf *_this);

/// Returns a pointer to a member variable of class `MR::Pdf::PaletteRowStats` named `color`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_Pdf_PaletteRowStats_Get_color(const MR_Pdf_PaletteRowStats *_this);

/// Modifies a member variable of class `MR::Pdf::PaletteRowStats` named `color`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Pdf_PaletteRowStats_Set_color(MR_Pdf_PaletteRowStats *_this, MR_Color value);

/// Returns a mutable pointer to a member variable of class `MR::Pdf::PaletteRowStats` named `color`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Color *MR_Pdf_PaletteRowStats_GetMutable_color(MR_Pdf_PaletteRowStats *_this);

/// Returns a pointer to a member variable of class `MR::Pdf::PaletteRowStats` named `rangeMin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_Pdf_PaletteRowStats_Get_rangeMin(const MR_Pdf_PaletteRowStats *_this);

/// Modifies a member variable of class `MR::Pdf::PaletteRowStats` named `rangeMin`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_Pdf_PaletteRowStats_Set_rangeMin(MR_Pdf_PaletteRowStats *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::Pdf::PaletteRowStats` named `rangeMin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_Pdf_PaletteRowStats_GetMutable_rangeMin(MR_Pdf_PaletteRowStats *_this);

/// Returns a pointer to a member variable of class `MR::Pdf::PaletteRowStats` named `rangeMax`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_Pdf_PaletteRowStats_Get_rangeMax(const MR_Pdf_PaletteRowStats *_this);

/// Modifies a member variable of class `MR::Pdf::PaletteRowStats` named `rangeMax`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_Pdf_PaletteRowStats_Set_rangeMax(MR_Pdf_PaletteRowStats *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::Pdf::PaletteRowStats` named `rangeMax`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_Pdf_PaletteRowStats_GetMutable_rangeMax(MR_Pdf_PaletteRowStats *_this);

/// Returns a pointer to a member variable of class `MR::Pdf::PaletteRowStats` named `percent`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_Pdf_PaletteRowStats_Get_percent(const MR_Pdf_PaletteRowStats *_this);

/// Modifies a member variable of class `MR::Pdf::PaletteRowStats` named `percent`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_Pdf_PaletteRowStats_Set_percent(MR_Pdf_PaletteRowStats *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::Pdf::PaletteRowStats` named `percent`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_Pdf_PaletteRowStats_GetMutable_percent(MR_Pdf_PaletteRowStats *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Pdf_PaletteRowStats_Destroy()` to free it when you're done using it.
MRC_API MR_Pdf_PaletteRowStats *MR_Pdf_PaletteRowStats_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Pdf_PaletteRowStats_DestroyArray()`.
/// Use `MR_Pdf_PaletteRowStats_OffsetMutablePtr()` and `MR_Pdf_PaletteRowStats_OffsetPtr()` to access the array elements.
MRC_API MR_Pdf_PaletteRowStats *MR_Pdf_PaletteRowStats_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Pdf::PaletteRowStats` elementwise.
/// Parameter `rangeMin` can not be null.
/// If `rangeMin_end` is null, then `rangeMin` is assumed to be null-terminated.
/// Parameter `rangeMax` can not be null.
/// If `rangeMax_end` is null, then `rangeMax` is assumed to be null-terminated.
/// Parameter `percent` can not be null.
/// If `percent_end` is null, then `percent` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Pdf_PaletteRowStats_Destroy()` to free it when you're done using it.
MRC_API MR_Pdf_PaletteRowStats *MR_Pdf_PaletteRowStats_ConstructFrom(MR_Color color, const char *rangeMin, const char *rangeMin_end, const char *rangeMax, const char *rangeMax_end, const char *percent, const char *percent_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Pdf_PaletteRowStats *MR_Pdf_PaletteRowStats_OffsetPtr(const MR_Pdf_PaletteRowStats *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Pdf_PaletteRowStats *MR_Pdf_PaletteRowStats_OffsetMutablePtr(MR_Pdf_PaletteRowStats *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Pdf::PaletteRowStats`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Pdf_PaletteRowStats_Destroy()` to free it when you're done using it.
MRC_API MR_Pdf_PaletteRowStats *MR_Pdf_PaletteRowStats_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Pdf_PaletteRowStats *_other);

/// Destroys a heap-allocated instance of `MR_Pdf_PaletteRowStats`. Does nothing if the pointer is null.
MRC_API void MR_Pdf_PaletteRowStats_Destroy(const MR_Pdf_PaletteRowStats *_this);

/// Destroys a heap-allocated array of `MR_Pdf_PaletteRowStats`. Does nothing if the pointer is null.
MRC_API void MR_Pdf_PaletteRowStats_DestroyArray(const MR_Pdf_PaletteRowStats *_this);

/// Generated from a method of class `MR::Pdf::PaletteRowStats` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Pdf_PaletteRowStats *MR_Pdf_PaletteRowStats_AssignFromAnother(MR_Pdf_PaletteRowStats *_this, MR_PassBy _other_pass_by, MR_Pdf_PaletteRowStats *_other);

/// image size in page space
/// if == {0, 0} - use image size
/// if .x or .y < 0 use the available page size from the current cursor position (caption size is also accounted for)
/// Returns a pointer to a member variable of class `MR::Pdf::ImageParams` named `size`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_Pdf_ImageParams_Get_size(const MR_Pdf_ImageParams *_this);

/// image size in page space
/// if == {0, 0} - use image size
/// if .x or .y < 0 use the available page size from the current cursor position (caption size is also accounted for)
/// Modifies a member variable of class `MR::Pdf::ImageParams` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Pdf_ImageParams_Set_size(MR_Pdf_ImageParams *_this, MR_Vector2f value);

/// image size in page space
/// if == {0, 0} - use image size
/// if .x or .y < 0 use the available page size from the current cursor position (caption size is also accounted for)
/// Returns a mutable pointer to a member variable of class `MR::Pdf::ImageParams` named `size`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_Pdf_ImageParams_GetMutable_size(MR_Pdf_ImageParams *_this);

/// caption if not empty - add caption under marks (if exist) or image.
/// Returns a pointer to a member variable of class `MR::Pdf::ImageParams` named `caption`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_Pdf_ImageParams_Get_caption(const MR_Pdf_ImageParams *_this);

/// caption if not empty - add caption under marks (if exist) or image.
/// Modifies a member variable of class `MR::Pdf::ImageParams` named `caption`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_Pdf_ImageParams_Set_caption(MR_Pdf_ImageParams *_this, const char *value, const char *value_end);

/// caption if not empty - add caption under marks (if exist) or image.
/// Returns a mutable pointer to a member variable of class `MR::Pdf::ImageParams` named `caption`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_Pdf_ImageParams_GetMutable_caption(MR_Pdf_ImageParams *_this);

/// set height to keep same scale as width scale
/// Returns a pointer to a member variable of class `MR::Pdf::ImageParams` named `uniformScaleFromWidth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_Pdf_ImageParams_Get_uniformScaleFromWidth(const MR_Pdf_ImageParams *_this);

/// set height to keep same scale as width scale
/// Modifies a member variable of class `MR::Pdf::ImageParams` named `uniformScaleFromWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Pdf_ImageParams_Set_uniformScaleFromWidth(MR_Pdf_ImageParams *_this, bool value);

/// set height to keep same scale as width scale
/// Returns a mutable pointer to a member variable of class `MR::Pdf::ImageParams` named `uniformScaleFromWidth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_Pdf_ImageParams_GetMutable_uniformScaleFromWidth(MR_Pdf_ImageParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Pdf_ImageParams_Destroy()` to free it when you're done using it.
MRC_API MR_Pdf_ImageParams *MR_Pdf_ImageParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Pdf_ImageParams_DestroyArray()`.
/// Use `MR_Pdf_ImageParams_OffsetMutablePtr()` and `MR_Pdf_ImageParams_OffsetPtr()` to access the array elements.
MRC_API MR_Pdf_ImageParams *MR_Pdf_ImageParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Pdf::ImageParams` elementwise.
/// Parameter `caption` can not be null.
/// If `caption_end` is null, then `caption` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Pdf_ImageParams_Destroy()` to free it when you're done using it.
MRC_API MR_Pdf_ImageParams *MR_Pdf_ImageParams_ConstructFrom(MR_Vector2f size, const char *caption, const char *caption_end, bool uniformScaleFromWidth);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Pdf_ImageParams *MR_Pdf_ImageParams_OffsetPtr(const MR_Pdf_ImageParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Pdf_ImageParams *MR_Pdf_ImageParams_OffsetMutablePtr(MR_Pdf_ImageParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Pdf::ImageParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Pdf_ImageParams_Destroy()` to free it when you're done using it.
MRC_API MR_Pdf_ImageParams *MR_Pdf_ImageParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Pdf_ImageParams *_other);

/// Destroys a heap-allocated instance of `MR_Pdf_ImageParams`. Does nothing if the pointer is null.
MRC_API void MR_Pdf_ImageParams_Destroy(const MR_Pdf_ImageParams *_this);

/// Destroys a heap-allocated array of `MR_Pdf_ImageParams`. Does nothing if the pointer is null.
MRC_API void MR_Pdf_ImageParams_DestroyArray(const MR_Pdf_ImageParams *_this);

/// Generated from a method of class `MR::Pdf::ImageParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Pdf_ImageParams *MR_Pdf_ImageParams_AssignFromAnother(MR_Pdf_ImageParams *_this, MR_PassBy _other_pass_by, MR_Pdf_ImageParams *_other);

#ifdef __cplusplus
} // extern "C"
#endif
