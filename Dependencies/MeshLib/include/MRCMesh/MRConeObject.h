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

typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_FeatureObject MR_FeatureObject; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_FeatureObjectProjectPointResult MR_FeatureObjectProjectPointResult; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_FeatureObjectSharedProperty MR_std_vector_MR_FeatureObjectSharedProperty; // Defined in `#include <MRCMisc/std_vector_MR_FeatureObjectSharedProperty.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/// Object to show Cone feature, position and radius are controlled by xf
/// Generated from class `MR::ConeObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`
///   Indirect: (non-virtual)
///     `MR::FeatureObject`
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_ConeObject MR_ConeObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ConeObject_Destroy()` to free it when you're done using it.
MRC_API MR_ConeObject *MR_ConeObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ConeObject_DestroyArray()`.
/// Use `MR_ConeObject_OffsetMutablePtr()` and `MR_ConeObject_OffsetPtr()` to access the array elements.
MRC_API MR_ConeObject *MR_ConeObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ConeObject *MR_ConeObject_OffsetPtr(const MR_ConeObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ConeObject *MR_ConeObject_OffsetMutablePtr(MR_ConeObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_ConeObject_UpcastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_ConeObject *object);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_ConeObject_MutableUpcastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_ConeObject *object);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_ConeObject_UpcastTo_MR_FeatureObject(const MR_ConeObject *object);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_ConeObject_MutableUpcastTo_MR_FeatureObject(MR_ConeObject *object);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ConeObject_UpcastTo_MR_Object(const MR_ConeObject *object);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_ConeObject_MutableUpcastTo_MR_Object(MR_ConeObject *object);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ConeObject_UpcastTo_MR_ObjectChildrenHolder(const MR_ConeObject *object);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ConeObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ConeObject *object);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ConeObject_UpcastTo_MR_VisualObject(const MR_ConeObject *object);

/// Upcasts an instance of `MR::ConeObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ConeObject_MutableUpcastTo_MR_VisualObject(MR_ConeObject *object);

/// Generated from a constructor of class `MR::ConeObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ConeObject_Destroy()` to free it when you're done using it.
MRC_API MR_ConeObject *MR_ConeObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ConeObject *_other);

/// Finds best Cone to approx given points
/// Generated from a constructor of class `MR::ConeObject`.
/// Parameter `pointsToApprox` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ConeObject_Destroy()` to free it when you're done using it.
MRC_API MR_ConeObject *MR_ConeObject_Construct(const MR_std_vector_MR_Vector3f *pointsToApprox);

/// Destroys a heap-allocated instance of `MR_ConeObject`. Does nothing if the pointer is null.
MRC_API void MR_ConeObject_Destroy(const MR_ConeObject *_this);

/// Destroys a heap-allocated array of `MR_ConeObject`. Does nothing if the pointer is null.
MRC_API void MR_ConeObject_DestroyArray(const MR_ConeObject *_this);

/// Generated from a method of class `MR::ConeObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ConeObject *MR_ConeObject_AssignFromAnother(MR_ConeObject *_this, MR_PassBy _other_pass_by, MR_ConeObject *_other);

/// Generated from a method of class `MR::ConeObject` named `TypeName`.
MRC_API const char *MR_ConeObject_TypeName(void);

/// Generated from a method of class `MR::ConeObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ConeObject_typeName(const MR_ConeObject *_this);

/// Generated from a method of class `MR::ConeObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ConeObject_getClassName(const MR_ConeObject *_this);

/// Generated from a method of class `MR::ConeObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ConeObject_getClassNameInPlural(const MR_ConeObject *_this);

/// Generated from a method of class `MR::ConeObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ConeObject_clone(const MR_ConeObject *_this);

/// Generated from a method of class `MR::ConeObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ConeObject_shallowClone(const MR_ConeObject *_this);

/// calculates cone angle from xf. It is an angle betweeh main axis and side.
/// Generated from a method of class `MR::ConeObject` named `getAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_ConeObject_getAngle(const MR_ConeObject *_this, const MR_ViewportId *id);

/// calculates center from xf. Center is the apex of the cone.
/// Generated from a method of class `MR::ConeObject` named `getCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_ConeObject_getCenter(const MR_ConeObject *_this, const MR_ViewportId *id);

/// calculates cone height from xf
/// Generated from a method of class `MR::ConeObject` named `getHeight`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_ConeObject_getHeight(const MR_ConeObject *_this, const MR_ViewportId *id);

/// calculates main axis direction from xf
/// Generated from a method of class `MR::ConeObject` named `getDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_ConeObject_getDirection(const MR_ConeObject *_this, const MR_ViewportId *id);

/// updates xf to fit given center.  Center is the apex of the cone.
/// Generated from a method of class `MR::ConeObject` named `setCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ConeObject_setCenter(MR_ConeObject *_this, const MR_Vector3f *center, const MR_ViewportId *id);

/// updates xf to fit main axis
/// Generated from a method of class `MR::ConeObject` named `setDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `normal` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ConeObject_setDirection(MR_ConeObject *_this, const MR_Vector3f *normal, const MR_ViewportId *id);

/// updates xf to fit cone height
/// Generated from a method of class `MR::ConeObject` named `setHeight`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ConeObject_setHeight(MR_ConeObject *_this, float height, const MR_ViewportId *id);

/// updates xf to fit given cone angle.  It is an angle betweeh main axis and side
/// Generated from a method of class `MR::ConeObject` named `setAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ConeObject_setAngle(MR_ConeObject *_this, float angle, const MR_ViewportId *id);

/// Computes the base base radius from the xf.
/// Generated from a method of class `MR::ConeObject` named `getBaseRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_ConeObject_getBaseRadius(const MR_ConeObject *_this, const MR_ViewportId *id);

/// Updates the xf for the new base radius.
/// Generated from a method of class `MR::ConeObject` named `setBaseRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ConeObject_setBaseRadius(MR_ConeObject *_this, float radius, const MR_ViewportId *id);

// Returns point considered as base for the feature
/// Generated from a method of class `MR::ConeObject` named `getBasePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_ConeObject_getBasePoint(const MR_ConeObject *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::ConeObject` named `getAllSharedProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_FeatureObjectSharedProperty *MR_ConeObject_getAllSharedProperties(const MR_ConeObject *_this);

/// Generated from a method of class `MR::ConeObject` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_ConeObject_projectPoint(const MR_ConeObject *_this, const MR_Vector3f *point, const MR_ViewportId *id);

#ifdef __cplusplus
} // extern "C"
#endif
