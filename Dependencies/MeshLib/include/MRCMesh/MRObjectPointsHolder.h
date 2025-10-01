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
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectPoints MR_ObjectPoints; // Defined in `#include <MRCMesh/MRObjectPoints.h>`.
typedef struct MR_PointCloudPart MR_PointCloudPart; // Defined in `#include <MRCMesh/MRPointCloudPart.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_ViewportMask MR_ViewportMask; // Defined in `#include <MRCMesh/MRViewportId.h>`.
typedef struct MR_ViewportProperty_MR_Color MR_ViewportProperty_MR_Color; // Defined in `#include <MRCMesh/MRViewportProperty.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_const_MR_PointCloud MR_std_shared_ptr_const_MR_PointCloud; // Defined in `#include <MRCMisc/std_shared_ptr_const_MR_PointCloud.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_ViewportMask MR_std_vector_MR_ViewportMask; // Defined in `#include <MRCMisc/std_vector_MR_ViewportMask.h>`.


typedef int32_t MR_PointsVisualizePropertyType;
enum // MR_PointsVisualizePropertyType
{
    MR_PointsVisualizePropertyType_SelectedVertices = 0,
    MR_PointsVisualizePropertyType__count = 1,
};

/// an object that stores a points
/// Generated from class `MR::ObjectPointsHolder`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::VisualObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ObjectPoints`
typedef struct MR_ObjectPointsHolder MR_ObjectPointsHolder;

/// default value for maximum rendered points number
/// Returns a pointer to a member variable of class `MR::ObjectPointsHolder` named `MaxRenderingPointsDefault`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_ObjectPointsHolder_Get_MaxRenderingPointsDefault(void);

/// recommended value for maximum rendered points number to disable discretization
/// Returns a pointer to a member variable of class `MR::ObjectPointsHolder` named `MaxRenderingPointsUnlimited`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_ObjectPointsHolder_Get_MaxRenderingPointsUnlimited(void);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectPointsHolder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectPointsHolder *MR_ObjectPointsHolder_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectPointsHolder_DestroyArray()`.
/// Use `MR_ObjectPointsHolder_OffsetMutablePtr()` and `MR_ObjectPointsHolder_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectPointsHolder *MR_ObjectPointsHolder_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectPointsHolder *MR_ObjectPointsHolder_OffsetPtr(const MR_ObjectPointsHolder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectPointsHolder *MR_ObjectPointsHolder_OffsetMutablePtr(MR_ObjectPointsHolder *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectPointsHolder` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectPointsHolder_UpcastTo_MR_Object(const MR_ObjectPointsHolder *object);

/// Upcasts an instance of `MR::ObjectPointsHolder` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectPointsHolder_MutableUpcastTo_MR_Object(MR_ObjectPointsHolder *object);

/// Upcasts an instance of `MR::ObjectPointsHolder` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectPointsHolder_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectPointsHolder *object);

/// Upcasts an instance of `MR::ObjectPointsHolder` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectPointsHolder_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectPointsHolder *object);

/// Upcasts an instance of `MR::ObjectPointsHolder` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectPointsHolder_UpcastTo_MR_VisualObject(const MR_ObjectPointsHolder *object);

/// Upcasts an instance of `MR::ObjectPointsHolder` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectPointsHolder_MutableUpcastTo_MR_VisualObject(MR_ObjectPointsHolder *object);

/// Downcasts an instance of `MR::ObjectPointsHolder` to a derived class `MR::ObjectPoints`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPoints *MR_ObjectPointsHolder_StaticDowncastTo_MR_ObjectPoints(const MR_ObjectPointsHolder *object);

/// Downcasts an instance of `MR::ObjectPointsHolder` to a derived class `MR::ObjectPoints`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectPoints *MR_ObjectPointsHolder_MutableStaticDowncastTo_MR_ObjectPoints(MR_ObjectPointsHolder *object);

/// Downcasts an instance of `MR::ObjectPointsHolder` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPoints *MR_ObjectPointsHolder_DynamicDowncastTo_MR_ObjectPoints(const MR_ObjectPointsHolder *object);

/// Downcasts an instance of `MR::ObjectPointsHolder` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectPoints *MR_ObjectPointsHolder_MutableDynamicDowncastTo_MR_ObjectPoints(MR_ObjectPointsHolder *object);

/// Downcasts an instance of `MR::ObjectPointsHolder` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectPoints *MR_ObjectPointsHolder_DynamicDowncastToOrFail_MR_ObjectPoints(const MR_ObjectPointsHolder *object);

/// Downcasts an instance of `MR::ObjectPointsHolder` to a derived class `MR::ObjectPoints`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectPoints *MR_ObjectPointsHolder_MutableDynamicDowncastToOrFail_MR_ObjectPoints(MR_ObjectPointsHolder *object);

/// Generated from a constructor of class `MR::ObjectPointsHolder`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectPointsHolder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectPointsHolder *MR_ObjectPointsHolder_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectPointsHolder *_other);

/// Destroys a heap-allocated instance of `MR_ObjectPointsHolder`. Does nothing if the pointer is null.
MRC_API void MR_ObjectPointsHolder_Destroy(const MR_ObjectPointsHolder *_this);

/// Destroys a heap-allocated array of `MR_ObjectPointsHolder`. Does nothing if the pointer is null.
MRC_API void MR_ObjectPointsHolder_DestroyArray(const MR_ObjectPointsHolder *_this);

/// Generated from a method of class `MR::ObjectPointsHolder` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectPointsHolder *MR_ObjectPointsHolder_AssignFromAnother(MR_ObjectPointsHolder *_this, MR_PassBy _other_pass_by, MR_ObjectPointsHolder *_other);

/// Generated from a method of class `MR::ObjectPointsHolder` named `TypeName`.
MRC_API const char *MR_ObjectPointsHolder_TypeName(void);

/// Generated from a method of class `MR::ObjectPointsHolder` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectPointsHolder_typeName(const MR_ObjectPointsHolder *_this);

/// Generated from a method of class `MR::ObjectPointsHolder` named `applyScale`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_applyScale(MR_ObjectPointsHolder *_this, float scaleFactor);

/// Generated from a method of class `MR::ObjectPointsHolder` named `hasVisualRepresentation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectPointsHolder_hasVisualRepresentation(const MR_ObjectPointsHolder *_this);

/// Generated from a method of class `MR::ObjectPointsHolder` named `hasModel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectPointsHolder_hasModel(const MR_ObjectPointsHolder *_this);

/// Generated from a method of class `MR::ObjectPointsHolder` named `pointCloud`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_const_MR_PointCloud *MR_ObjectPointsHolder_pointCloud(const MR_ObjectPointsHolder *_this);

/// \return the pair ( point cloud, selected points ) if any point is selected or full point cloud otherwise
/// Generated from a method of class `MR::ObjectPointsHolder` named `pointCloudPart`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointCloudPart_Destroy()` to free it when you're done using it.
MRC_API MR_PointCloudPart *MR_ObjectPointsHolder_pointCloudPart(const MR_ObjectPointsHolder *_this);

/// Generated from a method of class `MR::ObjectPointsHolder` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectPointsHolder_clone(const MR_ObjectPointsHolder *_this);

/// Generated from a method of class `MR::ObjectPointsHolder` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectPointsHolder_shallowClone(const MR_ObjectPointsHolder *_this);

/// Generated from a method of class `MR::ObjectPointsHolder` named `setDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `invalidateCaches` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjectPointsHolder_setDirtyFlags(MR_ObjectPointsHolder *_this, uint32_t mask, const bool *invalidateCaches);

/// gets current selected points
/// Generated from a method of class `MR::ObjectPointsHolder` named `getSelectedPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_ObjectPointsHolder_getSelectedPoints(const MR_ObjectPointsHolder *_this);

/// sets current selected points
/// Generated from a method of class `MR::ObjectPointsHolder` named `selectPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_selectPoints(MR_ObjectPointsHolder *_this, MR_PassBy newSelection_pass_by, MR_VertBitSet *newSelection);

/// swaps current selected points with the argument
/// Generated from a method of class `MR::ObjectPointsHolder` named `updateSelectedPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `selection` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_updateSelectedPoints(MR_ObjectPointsHolder *_this, MR_VertBitSet *selection);

/// returns selected points if any, otherwise returns all valid points
/// Generated from a method of class `MR::ObjectPointsHolder` named `getSelectedPointsOrAll`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_ObjectPointsHolder_getSelectedPointsOrAll(const MR_ObjectPointsHolder *_this);

/// returns colors of selected vertices
/// Generated from a method of class `MR::ObjectPointsHolder` named `getSelectedVerticesColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectPointsHolder_getSelectedVerticesColor(const MR_ObjectPointsHolder *_this, const MR_ViewportId *id);

/// sets colors of selected vertices
/// Generated from a method of class `MR::ObjectPointsHolder` named `setSelectedVerticesColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectPointsHolder_setSelectedVerticesColor(MR_ObjectPointsHolder *_this, const MR_Color *color, const MR_ViewportId *id);

/// Generated from a method of class `MR::ObjectPointsHolder` named `getSelectedVerticesColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_ObjectPointsHolder_getSelectedVerticesColorsForAllViewports(const MR_ObjectPointsHolder *_this);

/// Generated from a method of class `MR::ObjectPointsHolder` named `setSelectedVerticesColorsForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_setSelectedVerticesColorsForAllViewports(MR_ObjectPointsHolder *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val);

/// Generated from a method of class `MR::ObjectPointsHolder` named `supportsVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
MRC_API bool MR_ObjectPointsHolder_supportsVisualizeProperty(const MR_ObjectPointsHolder *_this, const MR_AnyVisualizeMaskEnum *type);

/// returns per-point colors of the object
/// Generated from a method of class `MR::ObjectPointsHolder` named `getVertsColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *MR_ObjectPointsHolder_getVertsColorMap(const MR_ObjectPointsHolder *_this);

/// sets per-point colors of the object
/// Generated from a method of class `MR::ObjectPointsHolder` named `setVertsColorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_setVertsColorMap(MR_ObjectPointsHolder *_this, MR_PassBy vertsColorMap_pass_by, MR_VertColors *vertsColorMap);

/// swaps per-point colors of the object with given argument
/// Generated from a method of class `MR::ObjectPointsHolder` named `updateVertsColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `vertsColorMap` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_updateVertsColorMap(MR_ObjectPointsHolder *_this, MR_VertColors *vertsColorMap);

/// copies point colors from given source object \param src using given map \param thisToSrc
/// Generated from a method of class `MR::ObjectPointsHolder` named `copyColors`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Parameter `thisToSrc` can not be null. It is a single object.
/// Parameter `thisToSrcFaces` is a single object.
/// Parameter `thisToSrcFaces` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectPointsHolder_copyColors(MR_ObjectPointsHolder *_this, const MR_ObjectPointsHolder *src, const MR_VertMap *thisToSrc, const MR_FaceMap *thisToSrcFaces);

/// get all visualize properties masks
/// Generated from a method of class `MR::ObjectPointsHolder` named `getAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_ViewportMask *MR_ObjectPointsHolder_getAllVisualizeProperties(const MR_ObjectPointsHolder *_this);

/// returns mask of viewports where given property is set
/// Generated from a method of class `MR::ObjectPointsHolder` named `getVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportMask *MR_ObjectPointsHolder_getVisualizePropertyMask(const MR_ObjectPointsHolder *_this, const MR_AnyVisualizeMaskEnum *type);

/// sets size of points on screen in pixels
/// Generated from a method of class `MR::ObjectPointsHolder` named `setPointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_setPointSize(MR_ObjectPointsHolder *_this, float size);

/// returns size of points on screen in pixels
/// Generated from a method of class `MR::ObjectPointsHolder` named `getPointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectPointsHolder_getPointSize(const MR_ObjectPointsHolder *_this);

/// returns cached bounding box of this point object in world coordinates;
/// if you need bounding box in local coordinates please call getBoundingBox()
/// Generated from a method of class `MR::ObjectPointsHolder` named `getWorldBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Box3f MR_ObjectPointsHolder_getWorldBox(const MR_ObjectPointsHolder *_this, const MR_ViewportId *_1);

/// returns cached information about the number of valid points
/// Generated from a method of class `MR::ObjectPointsHolder` named `numValidPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectPointsHolder_numValidPoints(const MR_ObjectPointsHolder *_this);

/// returns cached information about the number of selected points
/// Generated from a method of class `MR::ObjectPointsHolder` named `numSelectedPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectPointsHolder_numSelectedPoints(const MR_ObjectPointsHolder *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::ObjectPointsHolder` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectPointsHolder_heapBytes(const MR_ObjectPointsHolder *_this);

/// returns rendering discretization
/// display each `renderDiscretization`-th point only,
/// starting from 0 index, total number is \ref numRenderingValidPoints()
/// \detail defined by maximum rendered points number as:
/// \ref numValidPoints() / \ref getMaxRenderingPoints() (rounded up)
/// updated when setting `maxRenderingPoints` or changing the cloud (setting `DIRTY_FACE` flag)
/// Generated from a method of class `MR::ObjectPointsHolder` named `getRenderDiscretization`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_ObjectPointsHolder_getRenderDiscretization(const MR_ObjectPointsHolder *_this);

/// returns count of valid points that will be rendered
/// Generated from a method of class `MR::ObjectPointsHolder` named `numRenderingValidPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectPointsHolder_numRenderingValidPoints(const MR_ObjectPointsHolder *_this);

/// returns maximal number of points that will be rendered
/// if actual count of valid points is greater then the points will be sampled
/// Generated from a method of class `MR::ObjectPointsHolder` named `getMaxRenderingPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_ObjectPointsHolder_getMaxRenderingPoints(const MR_ObjectPointsHolder *_this);

/// sets maximal number of points that will be rendered
/// \sa \ref getRenderDiscretization, \ref MaxRenderingPointsDefault, \ref MaxRenderingPointsUnlimited
/// Generated from a method of class `MR::ObjectPointsHolder` named `setMaxRenderingPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_setMaxRenderingPoints(MR_ObjectPointsHolder *_this, int32_t val);

/// returns overriden file extension used to serialize point cloud inside this object, nullptr means defaultSerializePointsFormat()
/// Generated from a method of class `MR::ObjectPointsHolder` named `serializeFormat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectPointsHolder_serializeFormat(const MR_ObjectPointsHolder *_this);

/// overrides file extension used to serialize point cloud inside this object: must start from '.',
/// nullptr means serialize in defaultSerializePointsFormat()
/// Generated from a method of class `MR::ObjectPointsHolder` named `setSerializeFormat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_setSerializeFormat(MR_ObjectPointsHolder *_this, const char *newFormat);

/// reset basic object colors to their default values from the current theme
/// Generated from a method of class `MR::ObjectPointsHolder` named `resetFrontColor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_resetFrontColor(MR_ObjectPointsHolder *_this);

/// reset all object colors to their default values from the current theme
/// Generated from a method of class `MR::ObjectPointsHolder` named `resetColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectPointsHolder_resetColors(MR_ObjectPointsHolder *_this);

/// returns file extension used to serialize ObjectPointsHolder by default (if not overridden in specific object),
/// the string starts with '.'
/// Generated from function `MR::defaultSerializePointsFormat`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_defaultSerializePointsFormat(void);

/// sets file extension used to serialize serialize ObjectPointsHolder by default (if not overridden in specific object),
/// the string must start from '.';
// serialization falls back to the PLY format if given format support is available
// NOTE: CTM format support is available in the MRIOExtras library; make sure to load it if you prefer CTM
/// Generated from function `MR::setDefaultSerializePointsFormat`.
/// Parameter `newFormat` can not be null.
/// If `newFormat_end` is null, then `newFormat` is assumed to be null-terminated.
MRC_API void MR_setDefaultSerializePointsFormat(const char *newFormat, const char *newFormat_end);

#ifdef __cplusplus
} // extern "C"
#endif
