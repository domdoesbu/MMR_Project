// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTriPoint MR_MeshTriPoint; // Defined in `#include <MRCMesh/MRMeshTriPoint.h>`.
typedef struct MR_SymbolMeshParams MR_SymbolMeshParams; // Defined in `#include <MRCSymbolMesh/MRSymbolMesh.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.


/// Generated from class `MR::TextMeshAlignParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::SymbolMeshParams`
typedef struct MR_TextMeshAlignParams MR_TextMeshAlignParams;

// Start coordinate on mesh, represent lowest left corner of text
/// Returns a pointer to a member variable of class `MR::TextMeshAlignParams` named `startPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MeshTriPoint *MR_TextMeshAlignParams_Get_startPoint(const MR_TextMeshAlignParams *_this);

// Start coordinate on mesh, represent lowest left corner of text
/// Modifies a member variable of class `MR::TextMeshAlignParams` named `startPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_TextMeshAlignParams_Set_startPoint(MR_TextMeshAlignParams *_this, const MR_MeshTriPoint *value);

// Start coordinate on mesh, represent lowest left corner of text
/// Returns a mutable pointer to a member variable of class `MR::TextMeshAlignParams` named `startPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshTriPoint *MR_TextMeshAlignParams_GetMutable_startPoint(MR_TextMeshAlignParams *_this);

// Position of the startPoint in a text bounding box
// (0, 0) - bottom left, (0, 1) - bottom right, (0.5, 0.5) - center, (1, 1) - top right
/// Returns a pointer to a member variable of class `MR::TextMeshAlignParams` named `pivotPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_TextMeshAlignParams_Get_pivotPoint(const MR_TextMeshAlignParams *_this);

// Position of the startPoint in a text bounding box
// (0, 0) - bottom left, (0, 1) - bottom right, (0.5, 0.5) - center, (1, 1) - top right
/// Modifies a member variable of class `MR::TextMeshAlignParams` named `pivotPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TextMeshAlignParams_Set_pivotPoint(MR_TextMeshAlignParams *_this, MR_Vector2f value);

// Position of the startPoint in a text bounding box
// (0, 0) - bottom left, (0, 1) - bottom right, (0.5, 0.5) - center, (1, 1) - top right
/// Returns a mutable pointer to a member variable of class `MR::TextMeshAlignParams` named `pivotPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_TextMeshAlignParams_GetMutable_pivotPoint(MR_TextMeshAlignParams *_this);

// Direction of text
/// Returns a pointer to a member variable of class `MR::TextMeshAlignParams` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_TextMeshAlignParams_Get_direction(const MR_TextMeshAlignParams *_this);

// Direction of text
/// Modifies a member variable of class `MR::TextMeshAlignParams` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TextMeshAlignParams_Set_direction(MR_TextMeshAlignParams *_this, MR_Vector3f value);

// Direction of text
/// Returns a mutable pointer to a member variable of class `MR::TextMeshAlignParams` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_TextMeshAlignParams_GetMutable_direction(MR_TextMeshAlignParams *_this);

// Text normal to surface, if nullptr - use mesh normal at `startPoint`
/// Returns a pointer to a member variable of class `MR::TextMeshAlignParams` named `textNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *const *MR_TextMeshAlignParams_Get_textNormal(const MR_TextMeshAlignParams *_this);

// Text normal to surface, if nullptr - use mesh normal at `startPoint`
/// Modifies a member variable of class `MR::TextMeshAlignParams` named `textNormal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TextMeshAlignParams_Set_textNormal(MR_TextMeshAlignParams *_this, const MR_Vector3f *value);

// Text normal to surface, if nullptr - use mesh normal at `startPoint`
/// Returns a mutable pointer to a member variable of class `MR::TextMeshAlignParams` named `textNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f **MR_TextMeshAlignParams_GetMutable_textNormal(MR_TextMeshAlignParams *_this);

// Font height, meters
/// Returns a pointer to a member variable of class `MR::TextMeshAlignParams` named `fontHeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TextMeshAlignParams_Get_fontHeight(const MR_TextMeshAlignParams *_this);

// Font height, meters
/// Modifies a member variable of class `MR::TextMeshAlignParams` named `fontHeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TextMeshAlignParams_Set_fontHeight(MR_TextMeshAlignParams *_this, float value);

// Font height, meters
/// Returns a mutable pointer to a member variable of class `MR::TextMeshAlignParams` named `fontHeight`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TextMeshAlignParams_GetMutable_fontHeight(MR_TextMeshAlignParams *_this);

// Text mesh inside and outside offset of input mesh
/// Returns a pointer to a member variable of class `MR::TextMeshAlignParams` named `surfaceOffset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TextMeshAlignParams_Get_surfaceOffset(const MR_TextMeshAlignParams *_this);

// Text mesh inside and outside offset of input mesh
/// Modifies a member variable of class `MR::TextMeshAlignParams` named `surfaceOffset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TextMeshAlignParams_Set_surfaceOffset(MR_TextMeshAlignParams *_this, float value);

// Text mesh inside and outside offset of input mesh
/// Returns a mutable pointer to a member variable of class `MR::TextMeshAlignParams` named `surfaceOffset`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TextMeshAlignParams_GetMutable_surfaceOffset(MR_TextMeshAlignParams *_this);

// Maximum possible movement of text mesh alignment, meters
/// Returns a pointer to a member variable of class `MR::TextMeshAlignParams` named `textMaximumMovement`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_TextMeshAlignParams_Get_textMaximumMovement(const MR_TextMeshAlignParams *_this);

// Maximum possible movement of text mesh alignment, meters
/// Modifies a member variable of class `MR::TextMeshAlignParams` named `textMaximumMovement`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TextMeshAlignParams_Set_textMaximumMovement(MR_TextMeshAlignParams *_this, float value);

// Maximum possible movement of text mesh alignment, meters
/// Returns a mutable pointer to a member variable of class `MR::TextMeshAlignParams` named `textMaximumMovement`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_TextMeshAlignParams_GetMutable_textMaximumMovement(MR_TextMeshAlignParams *_this);

// If true then size of each symbol will be calculated from font height, otherwise - on bounding box of the text
/// Returns a pointer to a member variable of class `MR::TextMeshAlignParams` named `fontBasedSizeCalc`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_TextMeshAlignParams_Get_fontBasedSizeCalc(const MR_TextMeshAlignParams *_this);

// If true then size of each symbol will be calculated from font height, otherwise - on bounding box of the text
/// Modifies a member variable of class `MR::TextMeshAlignParams` named `fontBasedSizeCalc`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TextMeshAlignParams_Set_fontBasedSizeCalc(MR_TextMeshAlignParams *_this, bool value);

// If true then size of each symbol will be calculated from font height, otherwise - on bounding box of the text
/// Returns a mutable pointer to a member variable of class `MR::TextMeshAlignParams` named `fontBasedSizeCalc`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_TextMeshAlignParams_GetMutable_fontBasedSizeCalc(MR_TextMeshAlignParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextMeshAlignParams_Destroy()` to free it when you're done using it.
MRC_API MR_TextMeshAlignParams *MR_TextMeshAlignParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TextMeshAlignParams_DestroyArray()`.
/// Use `MR_TextMeshAlignParams_OffsetMutablePtr()` and `MR_TextMeshAlignParams_OffsetPtr()` to access the array elements.
MRC_API MR_TextMeshAlignParams *MR_TextMeshAlignParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TextMeshAlignParams *MR_TextMeshAlignParams_OffsetPtr(const MR_TextMeshAlignParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TextMeshAlignParams *MR_TextMeshAlignParams_OffsetMutablePtr(MR_TextMeshAlignParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::TextMeshAlignParams` to its base class `MR::SymbolMeshParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_SymbolMeshParams *MR_TextMeshAlignParams_UpcastTo_MR_SymbolMeshParams(const MR_TextMeshAlignParams *object);

/// Upcasts an instance of `MR::TextMeshAlignParams` to its base class `MR::SymbolMeshParams`.
MRC_API MR_SymbolMeshParams *MR_TextMeshAlignParams_MutableUpcastTo_MR_SymbolMeshParams(MR_TextMeshAlignParams *object);

/// Generated from a constructor of class `MR::TextMeshAlignParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TextMeshAlignParams_Destroy()` to free it when you're done using it.
MRC_API MR_TextMeshAlignParams *MR_TextMeshAlignParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_TextMeshAlignParams *_other);

/// Destroys a heap-allocated instance of `MR_TextMeshAlignParams`. Does nothing if the pointer is null.
MRC_API void MR_TextMeshAlignParams_Destroy(const MR_TextMeshAlignParams *_this);

/// Destroys a heap-allocated array of `MR_TextMeshAlignParams`. Does nothing if the pointer is null.
MRC_API void MR_TextMeshAlignParams_DestroyArray(const MR_TextMeshAlignParams *_this);

/// Generated from a method of class `MR::TextMeshAlignParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TextMeshAlignParams *MR_TextMeshAlignParams_AssignFromAnother(MR_TextMeshAlignParams *_this, MR_PassBy _other_pass_by, MR_TextMeshAlignParams *_other);

// Creates symbol mesh and aligns it to given surface
/// Generated from function `MR::alignTextToMesh`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_alignTextToMesh(const MR_Mesh *mesh, const MR_TextMeshAlignParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
