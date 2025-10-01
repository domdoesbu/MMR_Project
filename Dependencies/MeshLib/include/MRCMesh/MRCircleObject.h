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

typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_FeatureObject MR_FeatureObject; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_FeatureObjectProjectPointResult MR_FeatureObjectProjectPointResult; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_FeatureObjectSharedProperty MR_std_vector_MR_FeatureObjectSharedProperty; // Defined in `#include <MRCMisc/std_vector_MR_FeatureObjectSharedProperty.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/// Object to show sphere feature, position and radius are controlled by xf
/// Generated from class `MR::CircleObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`
///   Indirect: (non-virtual)
///     `MR::FeatureObject`
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_CircleObject MR_CircleObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CircleObject_Destroy()` to free it when you're done using it.
MRC_API MR_CircleObject *MR_CircleObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CircleObject_DestroyArray()`.
/// Use `MR_CircleObject_OffsetMutablePtr()` and `MR_CircleObject_OffsetPtr()` to access the array elements.
MRC_API MR_CircleObject *MR_CircleObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CircleObject *MR_CircleObject_OffsetPtr(const MR_CircleObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CircleObject *MR_CircleObject_OffsetMutablePtr(MR_CircleObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_CircleObject_UpcastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_CircleObject *object);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_CircleObject_MutableUpcastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_CircleObject *object);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_CircleObject_UpcastTo_MR_FeatureObject(const MR_CircleObject *object);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_CircleObject_MutableUpcastTo_MR_FeatureObject(MR_CircleObject *object);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_CircleObject_UpcastTo_MR_Object(const MR_CircleObject *object);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_CircleObject_MutableUpcastTo_MR_Object(MR_CircleObject *object);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_CircleObject_UpcastTo_MR_ObjectChildrenHolder(const MR_CircleObject *object);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_CircleObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_CircleObject *object);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_CircleObject_UpcastTo_MR_VisualObject(const MR_CircleObject *object);

/// Upcasts an instance of `MR::CircleObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_CircleObject_MutableUpcastTo_MR_VisualObject(MR_CircleObject *object);

/// Generated from a constructor of class `MR::CircleObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CircleObject_Destroy()` to free it when you're done using it.
MRC_API MR_CircleObject *MR_CircleObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_CircleObject *_other);

/// Finds best sphere to approx given points
/// Generated from a constructor of class `MR::CircleObject`.
/// Parameter `pointsToApprox` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CircleObject_Destroy()` to free it when you're done using it.
MRC_API MR_CircleObject *MR_CircleObject_Construct(const MR_std_vector_MR_Vector3f *pointsToApprox);

/// Destroys a heap-allocated instance of `MR_CircleObject`. Does nothing if the pointer is null.
MRC_API void MR_CircleObject_Destroy(const MR_CircleObject *_this);

/// Destroys a heap-allocated array of `MR_CircleObject`. Does nothing if the pointer is null.
MRC_API void MR_CircleObject_DestroyArray(const MR_CircleObject *_this);

/// Generated from a method of class `MR::CircleObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CircleObject *MR_CircleObject_AssignFromAnother(MR_CircleObject *_this, MR_PassBy _other_pass_by, MR_CircleObject *_other);

/// Generated from a method of class `MR::CircleObject` named `TypeName`.
MRC_API const char *MR_CircleObject_TypeName(void);

/// Generated from a method of class `MR::CircleObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_CircleObject_typeName(const MR_CircleObject *_this);

/// Generated from a method of class `MR::CircleObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_CircleObject_getClassName(const MR_CircleObject *_this);

/// Generated from a method of class `MR::CircleObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_CircleObject_getClassNameInPlural(const MR_CircleObject *_this);

/// Generated from a method of class `MR::CircleObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_CircleObject_clone(const MR_CircleObject *_this);

/// Generated from a method of class `MR::CircleObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_CircleObject_shallowClone(const MR_CircleObject *_this);

/// calculates radius from xf
/// Generated from a method of class `MR::CircleObject` named `getRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_CircleObject_getRadius(const MR_CircleObject *_this, const MR_ViewportId *id);

/// calculates center from xf
/// Generated from a method of class `MR::CircleObject` named `getCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_CircleObject_getCenter(const MR_CircleObject *_this, const MR_ViewportId *id);

/// calculates normal from xf
/// Generated from a method of class `MR::CircleObject` named `getNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_CircleObject_getNormal(const MR_CircleObject *_this, const MR_ViewportId *id);

/// updates xf to fit given radius
/// Generated from a method of class `MR::CircleObject` named `setRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_CircleObject_setRadius(MR_CircleObject *_this, float radius, const MR_ViewportId *id);

/// updates xf to fit given center
/// Generated from a method of class `MR::CircleObject` named `setCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_CircleObject_setCenter(MR_CircleObject *_this, const MR_Vector3f *center, const MR_ViewportId *id);

/// updates xf to fit given normal
/// Generated from a method of class `MR::CircleObject` named `setNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `normal` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_CircleObject_setNormal(MR_CircleObject *_this, const MR_Vector3f *normal, const MR_ViewportId *id);

/// Generated from a method of class `MR::CircleObject` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_CircleObject_projectPoint(const MR_CircleObject *_this, const MR_Vector3f *point, const MR_ViewportId *id);

/// Generated from a method of class `MR::CircleObject` named `getAllSharedProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_FeatureObjectSharedProperty *MR_CircleObject_getAllSharedProperties(const MR_CircleObject *_this);

#ifdef __cplusplus
} // extern "C"
#endif
