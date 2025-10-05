// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRBox.h>
#include <MRCMesh/MRViewportId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AnyVisualizeMaskEnum MR_AnyVisualizeMaskEnum; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_Color MR_Color; // Defined in `#include <MRCMesh/MRColor.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_PositionedText MR_PositionedText; // Defined in `#include <MRCMesh/MRPositionedText.h>`.
typedef struct MR_Vector2f MR_Vector2f; // Defined in `#include <MRCMesh/MRVector2.h>`.
typedef struct MR_ViewportMask MR_ViewportMask; // Defined in `#include <MRCMesh/MRViewportId.h>`.
typedef struct MR_ViewportProperty_MR_Color MR_ViewportProperty_MR_Color; // Defined in `#include <MRCMesh/MRViewportProperty.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_filesystem_path MR_std_filesystem_path; // Defined in `#include <MRCMisc/std_filesystem_path.h>`.
typedef struct MR_std_shared_ptr_MR_Mesh MR_std_shared_ptr_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Mesh.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_vector_MR_ViewportMask MR_std_vector_MR_ViewportMask; // Defined in `#include <MRCMisc/std_vector_MR_ViewportMask.h>`.


typedef int32_t MR_LabelVisualizePropertyType;
enum // MR_LabelVisualizePropertyType
{
    MR_LabelVisualizePropertyType_SourcePoint = 0,
    MR_LabelVisualizePropertyType_LeaderLine = 1,
    MR_LabelVisualizePropertyType_Background = 2,
    MR_LabelVisualizePropertyType_Contour = 3,
    MR_LabelVisualizePropertyType__count = 4,
};

/// This object type renders label in scene
/// \details default pivot point = (0, 0)
/// Generated from class `MR::ObjectLabel`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::VisualObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
typedef struct MR_ObjectLabel MR_ObjectLabel;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectLabel_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectLabel *MR_ObjectLabel_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectLabel_DestroyArray()`.
/// Use `MR_ObjectLabel_OffsetMutablePtr()` and `MR_ObjectLabel_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectLabel *MR_ObjectLabel_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectLabel *MR_ObjectLabel_OffsetPtr(const MR_ObjectLabel *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectLabel *MR_ObjectLabel_OffsetMutablePtr(MR_ObjectLabel *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectLabel` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectLabel_UpcastTo_MR_Object(const MR_ObjectLabel *object);

/// Upcasts an instance of `MR::ObjectLabel` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectLabel_MutableUpcastTo_MR_Object(MR_ObjectLabel *object);

/// Upcasts an instance of `MR::ObjectLabel` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectLabel_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectLabel *object);

/// Upcasts an instance of `MR::ObjectLabel` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectLabel_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectLabel *object);

/// Upcasts an instance of `MR::ObjectLabel` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectLabel_UpcastTo_MR_VisualObject(const MR_ObjectLabel *object);

/// Upcasts an instance of `MR::ObjectLabel` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectLabel_MutableUpcastTo_MR_VisualObject(MR_ObjectLabel *object);

/// Generated from a constructor of class `MR::ObjectLabel`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectLabel_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectLabel *MR_ObjectLabel_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectLabel *_other);

/// Destroys a heap-allocated instance of `MR_ObjectLabel`. Does nothing if the pointer is null.
MRC_API void MR_ObjectLabel_Destroy(const MR_ObjectLabel *_this);

/// Destroys a heap-allocated array of `MR_ObjectLabel`. Does nothing if the pointer is null.
MRC_API void MR_ObjectLabel_DestroyArray(const MR_ObjectLabel *_this);

/// Generated from a method of class `MR::ObjectLabel` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLabel *MR_ObjectLabel_AssignFromAnother(MR_ObjectLabel *_this, MR_PassBy _other_pass_by, MR_ObjectLabel *_other);

/// Generated from a method of class `MR::ObjectLabel` named `TypeName`.
MRC_API const char *MR_ObjectLabel_TypeName(void);

/// Generated from a method of class `MR::ObjectLabel` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectLabel_typeName(const MR_ObjectLabel *_this);

/// Generated from a method of class `MR::ObjectLabel` named `applyScale`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_applyScale(MR_ObjectLabel *_this, float scaleFactor);

/// Generated from a method of class `MR::ObjectLabel` named `hasVisualRepresentation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectLabel_hasVisualRepresentation(const MR_ObjectLabel *_this);

/// Generated from a method of class `MR::ObjectLabel` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectLabel_clone(const MR_ObjectLabel *_this);

/// Generated from a method of class `MR::ObjectLabel` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectLabel_shallowClone(const MR_ObjectLabel *_this);

/// sets size of label font in pixels
/// Generated from a method of class `MR::ObjectLabel` named `setFontHeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_setFontHeight(MR_ObjectLabel *_this, float size);

/// returns size of label font on screen in pixels
/// Generated from a method of class `MR::ObjectLabel` named `getFontHeight`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectLabel_getFontHeight(const MR_ObjectLabel *_this);

/// sets text and position of label
/// Generated from a method of class `MR::ObjectLabel` named `setLabel`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `label` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_setLabel(MR_ObjectLabel *_this, const MR_PositionedText *label);

/// Generated from a method of class `MR::ObjectLabel` named `getLabel`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PositionedText *MR_ObjectLabel_getLabel(const MR_ObjectLabel *_this);

/// sets path to font file
/// Generated from a method of class `MR::ObjectLabel` named `setFontPath`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pathToFont` is a UTF-8 encoded filesystem path.
MRC_API void MR_ObjectLabel_setFontPath(MR_ObjectLabel *_this, const char *pathToFont, const char *pathToFont_end);

/// Generated from a method of class `MR::ObjectLabel` named `getFontPath`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_filesystem_path *MR_ObjectLabel_getFontPath(const MR_ObjectLabel *_this);

/// set pivot point
/// \param pivotPoint - text location parameter of  relative to text position point
/// [0, 0] - text position point is left-down corner of text
/// [1, 1] - text position point is right-up corner
/// can be outside range [0, 0] - [1, 1]
/// Generated from a method of class `MR::ObjectLabel` named `setPivotPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pivotPoint` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_setPivotPoint(MR_ObjectLabel *_this, const MR_Vector2f *pivotPoint);

/// get pivot point
/// Generated from a method of class `MR::ObjectLabel` named `getPivotPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_ObjectLabel_getPivotPoint(const MR_ObjectLabel *_this);

/// get pivot shift (pivot point * text diagonal)
/// Generated from a method of class `MR::ObjectLabel` named `getPivotShift`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_ObjectLabel_getPivotShift(const MR_ObjectLabel *_this);

/// sets width of leader line in pixels
/// Generated from a method of class `MR::ObjectLabel` named `setLeaderLineWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_setLeaderLineWidth(MR_ObjectLabel *_this, float width);

/// returns width of leader line in pixels
/// Generated from a method of class `MR::ObjectLabel` named `getLeaderLineWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectLabel_getLeaderLineWidth(const MR_ObjectLabel *_this);

/// sets size of source point in pixels
/// Generated from a method of class `MR::ObjectLabel` named `setSourcePointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_setSourcePointSize(MR_ObjectLabel *_this, float size);

/// returns size of source point in pixels
/// Generated from a method of class `MR::ObjectLabel` named `getSourcePointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectLabel_getSourcePointSize(const MR_ObjectLabel *_this);

/// sets background padding in pixels
/// Generated from a method of class `MR::ObjectLabel` named `setBackgroundPadding`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_setBackgroundPadding(MR_ObjectLabel *_this, float padding);

/// returns background padding in pixels
/// Generated from a method of class `MR::ObjectLabel` named `getBackgroundPadding`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectLabel_getBackgroundPadding(const MR_ObjectLabel *_this);

/// sets color of source point
/// Generated from a method of class `MR::ObjectLabel` named `setSourcePointColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectLabel_setSourcePointColor(MR_ObjectLabel *_this, const MR_Color *color, const MR_ViewportId *id);

/// returns color of source point
/// Generated from a method of class `MR::ObjectLabel` named `getSourcePointColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectLabel_getSourcePointColor(const MR_ObjectLabel *_this, const MR_ViewportId *id);

/// sets color of leader line
/// Generated from a method of class `MR::ObjectLabel` named `setLeaderLineColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectLabel_setLeaderLineColor(MR_ObjectLabel *_this, const MR_Color *color, const MR_ViewportId *id);

/// return color of leader line
/// Generated from a method of class `MR::ObjectLabel` named `getLeaderLineColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectLabel_getLeaderLineColor(const MR_ObjectLabel *_this, const MR_ViewportId *id);

/// sets contour color
/// Generated from a method of class `MR::ObjectLabel` named `setContourColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectLabel_setContourColor(MR_ObjectLabel *_this, const MR_Color *color, const MR_ViewportId *id);

/// return contour color
/// Generated from a method of class `MR::ObjectLabel` named `getContourColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectLabel_getContourColor(const MR_ObjectLabel *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::ObjectLabel` named `getSourcePointColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_ObjectLabel_getSourcePointColorsForAllViewports(const MR_ObjectLabel *_this);

/// Generated from a method of class `MR::ObjectLabel` named `setSourcePointColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_setSourcePointColorsForAllViewports(MR_ObjectLabel *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val);

/// Generated from a method of class `MR::ObjectLabel` named `getLeaderLineColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_ObjectLabel_getLeaderLineColorsForAllViewports(const MR_ObjectLabel *_this);

/// Generated from a method of class `MR::ObjectLabel` named `setLeaderLineColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_setLeaderLineColorsForAllViewports(MR_ObjectLabel *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val);

/// Generated from a method of class `MR::ObjectLabel` named `getContourColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_ObjectLabel_getContourColorsForAllViewports(const MR_ObjectLabel *_this);

/// Generated from a method of class `MR::ObjectLabel` named `setContourColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_setContourColorsForAllViewports(MR_ObjectLabel *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val);

/// returns cached bounding box of this label object in world coordinates;
/// if you need bounding box in local coordinates please call getBoundingBox()
/// Generated from a method of class `MR::ObjectLabel` named `getWorldBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Box3f MR_ObjectLabel_getWorldBox(const MR_ObjectLabel *_this, const MR_ViewportId *_1);

/// returns mesh that represents current label
/// only used in Render object for binding, cleared after it
/// Generated from a method of class `MR::ObjectLabel` named `labelRepresentingMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_Mesh *MR_ObjectLabel_labelRepresentingMesh(const MR_ObjectLabel *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::ObjectLabel` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectLabel_heapBytes(const MR_ObjectLabel *_this);

/// get all visualize properties masks
/// Generated from a method of class `MR::ObjectLabel` named `getAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_ViewportMask *MR_ObjectLabel_getAllVisualizeProperties(const MR_ObjectLabel *_this);

/// returns mask of viewports where given property is set
/// Generated from a method of class `MR::ObjectLabel` named `getVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportMask *MR_ObjectLabel_getVisualizePropertyMask(const MR_ObjectLabel *_this, const MR_AnyVisualizeMaskEnum *type);

/// Loads font, and converts the symbols of text into mesh;
/// since this operation is time consuming, one can call this method in parallel for several ObjectLabels before rendering
/// Generated from a method of class `MR::ObjectLabel` named `buildMeshFromText`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLabel_buildMeshFromText(const MR_ObjectLabel *_this);

#ifdef __cplusplus
} // extern "C"
#endif
