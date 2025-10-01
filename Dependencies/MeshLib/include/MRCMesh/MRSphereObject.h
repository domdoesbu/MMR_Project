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
/// Generated from class `MR::SphereObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`
///   Indirect: (non-virtual)
///     `MR::FeatureObject`
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_SphereObject MR_SphereObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SphereObject_Destroy()` to free it when you're done using it.
MRC_API MR_SphereObject *MR_SphereObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SphereObject_DestroyArray()`.
/// Use `MR_SphereObject_OffsetMutablePtr()` and `MR_SphereObject_OffsetPtr()` to access the array elements.
MRC_API MR_SphereObject *MR_SphereObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SphereObject *MR_SphereObject_OffsetPtr(const MR_SphereObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SphereObject *MR_SphereObject_OffsetMutablePtr(MR_SphereObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_SphereObject_UpcastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_SphereObject *object);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_SphereObject_MutableUpcastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_SphereObject *object);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_SphereObject_UpcastTo_MR_FeatureObject(const MR_SphereObject *object);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_SphereObject_MutableUpcastTo_MR_FeatureObject(MR_SphereObject *object);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_SphereObject_UpcastTo_MR_Object(const MR_SphereObject *object);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_SphereObject_MutableUpcastTo_MR_Object(MR_SphereObject *object);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_SphereObject_UpcastTo_MR_ObjectChildrenHolder(const MR_SphereObject *object);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_SphereObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_SphereObject *object);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_SphereObject_UpcastTo_MR_VisualObject(const MR_SphereObject *object);

/// Upcasts an instance of `MR::SphereObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_SphereObject_MutableUpcastTo_MR_VisualObject(MR_SphereObject *object);

/// Generated from a constructor of class `MR::SphereObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SphereObject_Destroy()` to free it when you're done using it.
MRC_API MR_SphereObject *MR_SphereObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SphereObject *_other);

/// Finds best sphere to approx given points
/// Generated from a constructor of class `MR::SphereObject`.
/// Parameter `pointsToApprox` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SphereObject_Destroy()` to free it when you're done using it.
MRC_API MR_SphereObject *MR_SphereObject_Construct(const MR_std_vector_MR_Vector3f *pointsToApprox);

/// Destroys a heap-allocated instance of `MR_SphereObject`. Does nothing if the pointer is null.
MRC_API void MR_SphereObject_Destroy(const MR_SphereObject *_this);

/// Destroys a heap-allocated array of `MR_SphereObject`. Does nothing if the pointer is null.
MRC_API void MR_SphereObject_DestroyArray(const MR_SphereObject *_this);

/// Generated from a method of class `MR::SphereObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SphereObject *MR_SphereObject_AssignFromAnother(MR_SphereObject *_this, MR_PassBy _other_pass_by, MR_SphereObject *_other);

/// Generated from a method of class `MR::SphereObject` named `TypeName`.
MRC_API const char *MR_SphereObject_TypeName(void);

/// Generated from a method of class `MR::SphereObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_SphereObject_typeName(const MR_SphereObject *_this);

/// Generated from a method of class `MR::SphereObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_SphereObject_getClassName(const MR_SphereObject *_this);

/// Generated from a method of class `MR::SphereObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_SphereObject_getClassNameInPlural(const MR_SphereObject *_this);

/// Generated from a method of class `MR::SphereObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_SphereObject_clone(const MR_SphereObject *_this);

/// Generated from a method of class `MR::SphereObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_SphereObject_shallowClone(const MR_SphereObject *_this);

/// calculates radius from xf
/// Generated from a method of class `MR::SphereObject` named `getRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_SphereObject_getRadius(const MR_SphereObject *_this, const MR_ViewportId *id);

/// calculates center from xf
/// Generated from a method of class `MR::SphereObject` named `getCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_SphereObject_getCenter(const MR_SphereObject *_this, const MR_ViewportId *id);

/// updates xf to fit given radius
/// Generated from a method of class `MR::SphereObject` named `setRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_SphereObject_setRadius(MR_SphereObject *_this, float radius, const MR_ViewportId *id);

/// updates xf to fit given center
/// Generated from a method of class `MR::SphereObject` named `setCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_SphereObject_setCenter(MR_SphereObject *_this, const MR_Vector3f *center, const MR_ViewportId *id);

/// Generated from a method of class `MR::SphereObject` named `getAllSharedProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_FeatureObjectSharedProperty *MR_SphereObject_getAllSharedProperties(const MR_SphereObject *_this);

/// Generated from a method of class `MR::SphereObject` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_SphereObject_projectPoint(const MR_SphereObject *_this, const MR_Vector3f *point, const MR_ViewportId *id);

#ifdef __cplusplus
} // extern "C"
#endif
