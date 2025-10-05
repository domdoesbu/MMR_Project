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
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectGcode MR_ObjectGcode; // Defined in `#include <MRCMesh/MRObjectGcode.h>`.
typedef struct MR_ObjectLines MR_ObjectLines; // Defined in `#include <MRCMesh/MRObjectLines.h>`.
typedef struct MR_UndirectedEdgeColors MR_UndirectedEdgeColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_ViewportMask MR_ViewportMask; // Defined in `#include <MRCMesh/MRViewportId.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_const_MR_Polyline3 MR_std_shared_ptr_const_MR_Polyline3; // Defined in `#include <MRCMisc/std_shared_ptr_const_MR_Polyline3.h>`.
typedef struct MR_std_vector_MR_ViewportMask MR_std_vector_MR_ViewportMask; // Defined in `#include <MRCMisc/std_vector_MR_ViewportMask.h>`.


typedef int32_t MR_LinesVisualizePropertyType;
enum // MR_LinesVisualizePropertyType
{
    MR_LinesVisualizePropertyType_Points = 0,
    MR_LinesVisualizePropertyType_Smooth = 1,
    MR_LinesVisualizePropertyType__count = 2,
};

/// an object that stores a lines
/// Generated from class `MR::ObjectLinesHolder`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::VisualObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ObjectGcode`
///     `MR::ObjectLines`
typedef struct MR_ObjectLinesHolder MR_ObjectLinesHolder;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectLinesHolder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectLinesHolder *MR_ObjectLinesHolder_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectLinesHolder_DestroyArray()`.
/// Use `MR_ObjectLinesHolder_OffsetMutablePtr()` and `MR_ObjectLinesHolder_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectLinesHolder *MR_ObjectLinesHolder_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectLinesHolder *MR_ObjectLinesHolder_OffsetPtr(const MR_ObjectLinesHolder *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectLinesHolder *MR_ObjectLinesHolder_OffsetMutablePtr(MR_ObjectLinesHolder *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectLinesHolder` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectLinesHolder_UpcastTo_MR_Object(const MR_ObjectLinesHolder *object);

/// Upcasts an instance of `MR::ObjectLinesHolder` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectLinesHolder_MutableUpcastTo_MR_Object(MR_ObjectLinesHolder *object);

/// Upcasts an instance of `MR::ObjectLinesHolder` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectLinesHolder_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectLinesHolder *object);

/// Upcasts an instance of `MR::ObjectLinesHolder` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectLinesHolder_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectLinesHolder *object);

/// Upcasts an instance of `MR::ObjectLinesHolder` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectLinesHolder_UpcastTo_MR_VisualObject(const MR_ObjectLinesHolder *object);

/// Upcasts an instance of `MR::ObjectLinesHolder` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectLinesHolder_MutableUpcastTo_MR_VisualObject(MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectGcode`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectGcode *MR_ObjectLinesHolder_StaticDowncastTo_MR_ObjectGcode(const MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectGcode`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectGcode *MR_ObjectLinesHolder_MutableStaticDowncastTo_MR_ObjectGcode(MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectGcode *MR_ObjectLinesHolder_DynamicDowncastTo_MR_ObjectGcode(const MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectGcode *MR_ObjectLinesHolder_MutableDynamicDowncastTo_MR_ObjectGcode(MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectGcode *MR_ObjectLinesHolder_DynamicDowncastToOrFail_MR_ObjectGcode(const MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectGcode`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectGcode *MR_ObjectLinesHolder_MutableDynamicDowncastToOrFail_MR_ObjectGcode(MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectLines`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLines *MR_ObjectLinesHolder_StaticDowncastTo_MR_ObjectLines(const MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectLines`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ObjectLines *MR_ObjectLinesHolder_MutableStaticDowncastTo_MR_ObjectLines(MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLines *MR_ObjectLinesHolder_DynamicDowncastTo_MR_ObjectLines(const MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ObjectLines *MR_ObjectLinesHolder_MutableDynamicDowncastTo_MR_ObjectLines(MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectLines *MR_ObjectLinesHolder_DynamicDowncastToOrFail_MR_ObjectLines(const MR_ObjectLinesHolder *object);

/// Downcasts an instance of `MR::ObjectLinesHolder` to a derived class `MR::ObjectLines`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLines *MR_ObjectLinesHolder_MutableDynamicDowncastToOrFail_MR_ObjectLines(MR_ObjectLinesHolder *object);

/// Generated from a constructor of class `MR::ObjectLinesHolder`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectLinesHolder_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectLinesHolder *MR_ObjectLinesHolder_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectLinesHolder *_other);

/// Destroys a heap-allocated instance of `MR_ObjectLinesHolder`. Does nothing if the pointer is null.
MRC_API void MR_ObjectLinesHolder_Destroy(const MR_ObjectLinesHolder *_this);

/// Destroys a heap-allocated array of `MR_ObjectLinesHolder`. Does nothing if the pointer is null.
MRC_API void MR_ObjectLinesHolder_DestroyArray(const MR_ObjectLinesHolder *_this);

/// Generated from a method of class `MR::ObjectLinesHolder` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLinesHolder *MR_ObjectLinesHolder_AssignFromAnother(MR_ObjectLinesHolder *_this, MR_PassBy _other_pass_by, MR_ObjectLinesHolder *_other);

/// Generated from a method of class `MR::ObjectLinesHolder` named `TypeName`.
MRC_API const char *MR_ObjectLinesHolder_TypeName(void);

/// Generated from a method of class `MR::ObjectLinesHolder` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectLinesHolder_typeName(const MR_ObjectLinesHolder *_this);

/// Generated from a method of class `MR::ObjectLinesHolder` named `applyScale`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLinesHolder_applyScale(MR_ObjectLinesHolder *_this, float scaleFactor);

/// Generated from a method of class `MR::ObjectLinesHolder` named `hasVisualRepresentation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectLinesHolder_hasVisualRepresentation(const MR_ObjectLinesHolder *_this);

/// Generated from a method of class `MR::ObjectLinesHolder` named `hasModel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectLinesHolder_hasModel(const MR_ObjectLinesHolder *_this);

/// Generated from a method of class `MR::ObjectLinesHolder` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectLinesHolder_clone(const MR_ObjectLinesHolder *_this);

/// Generated from a method of class `MR::ObjectLinesHolder` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectLinesHolder_shallowClone(const MR_ObjectLinesHolder *_this);

/// Generated from a method of class `MR::ObjectLinesHolder` named `polyline`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_const_MR_Polyline3 *MR_ObjectLinesHolder_polyline(const MR_ObjectLinesHolder *_this);

/// Generated from a method of class `MR::ObjectLinesHolder` named `setDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `invalidateCaches` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjectLinesHolder_setDirtyFlags(MR_ObjectLinesHolder *_this, uint32_t mask, const bool *invalidateCaches);

/// Generated from a method of class `MR::ObjectLinesHolder` named `setLineWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLinesHolder_setLineWidth(MR_ObjectLinesHolder *_this, float width);

/// Generated from a method of class `MR::ObjectLinesHolder` named `getLineWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectLinesHolder_getLineWidth(const MR_ObjectLinesHolder *_this);

/// Generated from a method of class `MR::ObjectLinesHolder` named `setPointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLinesHolder_setPointSize(MR_ObjectLinesHolder *_this, float size);

/// Generated from a method of class `MR::ObjectLinesHolder` named `getPointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectLinesHolder_getPointSize(const MR_ObjectLinesHolder *_this);

/// returns per-vertex colors of the object
/// Generated from a method of class `MR::ObjectLinesHolder` named `getVertsColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertColors *MR_ObjectLinesHolder_getVertsColorMap(const MR_ObjectLinesHolder *_this);

/// sets per-vertex colors of the object
/// Generated from a method of class `MR::ObjectLinesHolder` named `setVertsColorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLinesHolder_setVertsColorMap(MR_ObjectLinesHolder *_this, MR_PassBy vertsColorMap_pass_by, MR_VertColors *vertsColorMap);

/// swaps per-vertex colors of the object with given argument
/// Generated from a method of class `MR::ObjectLinesHolder` named `updateVertsColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `vertsColorMap` can not be null. It is a single object.
MRC_API void MR_ObjectLinesHolder_updateVertsColorMap(MR_ObjectLinesHolder *_this, MR_VertColors *vertsColorMap);

/// Generated from a method of class `MR::ObjectLinesHolder` named `getLinesColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_UndirectedEdgeColors *MR_ObjectLinesHolder_getLinesColorMap(const MR_ObjectLinesHolder *_this);

/// Generated from a method of class `MR::ObjectLinesHolder` named `setLinesColorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLinesHolder_setLinesColorMap(MR_ObjectLinesHolder *_this, MR_PassBy linesColorMap_pass_by, MR_UndirectedEdgeColors *linesColorMap);

/// Generated from a method of class `MR::ObjectLinesHolder` named `updateLinesColorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `updated` can not be null. It is a single object.
MRC_API void MR_ObjectLinesHolder_updateLinesColorMap(MR_ObjectLinesHolder *_this, MR_UndirectedEdgeColors *updated);

/// Generated from a method of class `MR::ObjectLinesHolder` named `supportsVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
MRC_API bool MR_ObjectLinesHolder_supportsVisualizeProperty(const MR_ObjectLinesHolder *_this, const MR_AnyVisualizeMaskEnum *type);

/// get all visualize properties masks
/// Generated from a method of class `MR::ObjectLinesHolder` named `getAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_ViewportMask *MR_ObjectLinesHolder_getAllVisualizeProperties(const MR_ObjectLinesHolder *_this);

/// returns mask of viewports where given property is set
/// Generated from a method of class `MR::ObjectLinesHolder` named `getVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportMask *MR_ObjectLinesHolder_getVisualizePropertyMask(const MR_ObjectLinesHolder *_this, const MR_AnyVisualizeMaskEnum *type);

/// copies vertex colors from given source object \param src using given map \param thisToSrc
/// Generated from a method of class `MR::ObjectLinesHolder` named `copyColors`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `src` can not be null. It is a single object.
/// Parameter `thisToSrc` can not be null. It is a single object.
MRC_API void MR_ObjectLinesHolder_copyColors(MR_ObjectLinesHolder *_this, const MR_ObjectLinesHolder *src, const MR_VertMap *thisToSrc);

/// returns cached bounding box of this point object in world coordinates;
/// if you need bounding box in local coordinates please call getBoundingBox()
/// Generated from a method of class `MR::ObjectLinesHolder` named `getWorldBox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Box3f MR_ObjectLinesHolder_getWorldBox(const MR_ObjectLinesHolder *_this, const MR_ViewportId *_1);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::ObjectLinesHolder` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectLinesHolder_heapBytes(const MR_ObjectLinesHolder *_this);

/// returns cached average edge length
/// Generated from a method of class `MR::ObjectLinesHolder` named `avgEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectLinesHolder_avgEdgeLen(const MR_ObjectLinesHolder *_this);

/// returns cached information about the number of undirected edges in the polyline
/// Generated from a method of class `MR::ObjectLinesHolder` named `numUndirectedEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectLinesHolder_numUndirectedEdges(const MR_ObjectLinesHolder *_this);

/// returns cached information about the number of components in the polyline
/// Generated from a method of class `MR::ObjectLinesHolder` named `numComponents`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectLinesHolder_numComponents(const MR_ObjectLinesHolder *_this);

/// return cached total length
/// Generated from a method of class `MR::ObjectLinesHolder` named `totalLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectLinesHolder_totalLength(const MR_ObjectLinesHolder *_this);

/// reset basic object colors to their default values from the current theme
/// Generated from a method of class `MR::ObjectLinesHolder` named `resetFrontColor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectLinesHolder_resetFrontColor(MR_ObjectLinesHolder *_this);

#ifdef __cplusplus
} // extern "C"
#endif
