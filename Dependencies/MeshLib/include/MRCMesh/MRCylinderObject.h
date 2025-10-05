// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMesh/MRViewportId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_FeatureObject MR_FeatureObject; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_FeatureObjectProjectPointResult MR_FeatureObjectProjectPointResult; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_FeatureObjectSharedProperty MR_std_vector_MR_FeatureObjectSharedProperty; // Defined in `#include <MRCMisc/std_vector_MR_FeatureObjectSharedProperty.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/// Object to show Cylinder feature, position and radius are controlled by xf
/// Generated from class `MR::CylinderObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`
///   Indirect: (non-virtual)
///     `MR::FeatureObject`
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_CylinderObject MR_CylinderObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CylinderObject_Destroy()` to free it when you're done using it.
MRC_API MR_CylinderObject *MR_CylinderObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CylinderObject_DestroyArray()`.
/// Use `MR_CylinderObject_OffsetMutablePtr()` and `MR_CylinderObject_OffsetPtr()` to access the array elements.
MRC_API MR_CylinderObject *MR_CylinderObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CylinderObject *MR_CylinderObject_OffsetPtr(const MR_CylinderObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CylinderObject *MR_CylinderObject_OffsetMutablePtr(MR_CylinderObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_CylinderObject_UpcastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_CylinderObject *object);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_CylinderObject_MutableUpcastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_CylinderObject *object);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_CylinderObject_UpcastTo_MR_FeatureObject(const MR_CylinderObject *object);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_CylinderObject_MutableUpcastTo_MR_FeatureObject(MR_CylinderObject *object);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_CylinderObject_UpcastTo_MR_Object(const MR_CylinderObject *object);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_CylinderObject_MutableUpcastTo_MR_Object(MR_CylinderObject *object);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_CylinderObject_UpcastTo_MR_ObjectChildrenHolder(const MR_CylinderObject *object);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_CylinderObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_CylinderObject *object);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_CylinderObject_UpcastTo_MR_VisualObject(const MR_CylinderObject *object);

/// Upcasts an instance of `MR::CylinderObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_CylinderObject_MutableUpcastTo_MR_VisualObject(MR_CylinderObject *object);

/// Generated from a constructor of class `MR::CylinderObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CylinderObject_Destroy()` to free it when you're done using it.
MRC_API MR_CylinderObject *MR_CylinderObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_CylinderObject *_other);

/// Finds best Cylinder to approx given points
/// Generated from a constructor of class `MR::CylinderObject`.
/// Parameter `pointsToApprox` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CylinderObject_Destroy()` to free it when you're done using it.
MRC_API MR_CylinderObject *MR_CylinderObject_Construct(const MR_std_vector_MR_Vector3f *pointsToApprox);

/// Destroys a heap-allocated instance of `MR_CylinderObject`. Does nothing if the pointer is null.
MRC_API void MR_CylinderObject_Destroy(const MR_CylinderObject *_this);

/// Destroys a heap-allocated array of `MR_CylinderObject`. Does nothing if the pointer is null.
MRC_API void MR_CylinderObject_DestroyArray(const MR_CylinderObject *_this);

/// Generated from a method of class `MR::CylinderObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CylinderObject *MR_CylinderObject_AssignFromAnother(MR_CylinderObject *_this, MR_PassBy _other_pass_by, MR_CylinderObject *_other);

/// Generated from a method of class `MR::CylinderObject` named `TypeName`.
MRC_API const char *MR_CylinderObject_TypeName(void);

/// Generated from a method of class `MR::CylinderObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_CylinderObject_typeName(const MR_CylinderObject *_this);

/// Generated from a method of class `MR::CylinderObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_CylinderObject_getClassName(const MR_CylinderObject *_this);

/// Generated from a method of class `MR::CylinderObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_CylinderObject_getClassNameInPlural(const MR_CylinderObject *_this);

/// Generated from a method of class `MR::CylinderObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_CylinderObject_clone(const MR_CylinderObject *_this);

/// Generated from a method of class `MR::CylinderObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_CylinderObject_shallowClone(const MR_CylinderObject *_this);

/// calculates radius from xf
/// Generated from a method of class `MR::CylinderObject` named `getRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_CylinderObject_getRadius(const MR_CylinderObject *_this, const MR_ViewportId *id);

/// calculates center from xf
/// Generated from a method of class `MR::CylinderObject` named `getCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_CylinderObject_getCenter(const MR_CylinderObject *_this, const MR_ViewportId *id);

/// updates xf to fit given radius
/// Generated from a method of class `MR::CylinderObject` named `setRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_CylinderObject_setRadius(MR_CylinderObject *_this, float radius, const MR_ViewportId *id);

/// updates xf to fit given center
/// Generated from a method of class `MR::CylinderObject` named `setCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_CylinderObject_setCenter(MR_CylinderObject *_this, const MR_Vector3f *center, const MR_ViewportId *id);

/// calculates main axis direction from xf
/// Generated from a method of class `MR::CylinderObject` named `getDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_CylinderObject_getDirection(const MR_CylinderObject *_this, const MR_ViewportId *id);

/// updates xf to fit main axis
/// Generated from a method of class `MR::CylinderObject` named `setDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `normal` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_CylinderObject_setDirection(MR_CylinderObject *_this, const MR_Vector3f *normal, const MR_ViewportId *id);

/// calculates cylinder length from xf
/// Generated from a method of class `MR::CylinderObject` named `getLength`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_CylinderObject_getLength(const MR_CylinderObject *_this, const MR_ViewportId *id);

/// updates xf to fit cylinder length
/// Generated from a method of class `MR::CylinderObject` named `setLength`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_CylinderObject_setLength(MR_CylinderObject *_this, float length, const MR_ViewportId *id);

// Returns point considered as base for the feature
/// Generated from a method of class `MR::CylinderObject` named `getBasePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_CylinderObject_getBasePoint(const MR_CylinderObject *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::CylinderObject` named `getAllSharedProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_FeatureObjectSharedProperty *MR_CylinderObject_getAllSharedProperties(const MR_CylinderObject *_this);

/// Generated from a method of class `MR::CylinderObject` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_CylinderObject_projectPoint(const MR_CylinderObject *_this, const MR_Vector3f *point, const MR_ViewportId *id);

#ifdef __cplusplus
} // extern "C"
#endif
