// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AnyVisualizeMaskEnum MR_AnyVisualizeMaskEnum; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_CircleObject MR_CircleObject; // Defined in `#include <MRCMesh/MRCircleObject.h>`.
typedef struct MR_ConeObject MR_ConeObject; // Defined in `#include <MRCMesh/MRConeObject.h>`.
typedef struct MR_CylinderObject MR_CylinderObject; // Defined in `#include <MRCMesh/MRCylinderObject.h>`.
typedef struct MR_FeatureObject MR_FeatureObject; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_SphereObject MR_SphereObject; // Defined in `#include <MRCMesh/MRSphereObject.h>`.
typedef struct MR_ViewportMask MR_ViewportMask; // Defined in `#include <MRCMesh/MRViewportId.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_vector_MR_ViewportMask MR_std_vector_MR_ViewportMask; // Defined in `#include <MRCMisc/std_vector_MR_ViewportMask.h>`.


// Inherits from a datamodel object, adding some visual property masks to it.
// `BaseObjectType` is the datamodel type to inherit from.
// `Properties...` is the list of properties to add. Each must be a value from a enum marked as `IsVisualizeMaskEnum`.
/// Generated from class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::FeatureObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CircleObject`
///     `MR::SphereObject`
typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter;

// Inherits from a datamodel object, adding some visual property masks to it.
// `BaseObjectType` is the datamodel type to inherit from.
// `Properties...` is the list of properties to add. Each must be a value from a enum marked as `IsVisualizeMaskEnum`.
/// Generated from class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::FeatureObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ConeObject`
typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length;

// Inherits from a datamodel object, adding some visual property masks to it.
// `BaseObjectType` is the datamodel type to inherit from.
// `Properties...` is the list of properties to add. Each must be a value from a enum marked as `IsVisualizeMaskEnum`.
/// Generated from class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::FeatureObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::CylinderObject`
typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length;

/// Destroys a heap-allocated instance of `MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter`. Does nothing if the pointer is null.
MRC_API void MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_Destroy(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *_this);

/// Destroys a heap-allocated array of `MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter`. Does nothing if the pointer is null.
MRC_API void MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_DestroyArray(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *_this);

/// Generated from a method of class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` named `supportsVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
MRC_API bool MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_supportsVisualizeProperty(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *_this, const MR_AnyVisualizeMaskEnum *type);

/// Generated from a method of class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` named `getAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_ViewportMask *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_getAllVisualizeProperties(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *_this);

/// Generated from a method of class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` named `getVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportMask *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_getVisualizePropertyMask(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *_this, const MR_AnyVisualizeMaskEnum *type);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_OffsetPtr(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_OffsetMutablePtr(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_UpcastTo_MR_FeatureObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableUpcastTo_MR_FeatureObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_UpcastTo_MR_Object(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to its base class `MR::Object`.
MRC_API MR_Object *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableUpcastTo_MR_Object(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_UpcastTo_MR_ObjectChildrenHolder(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableUpcastTo_MR_ObjectChildrenHolder(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_UpcastTo_MR_VisualObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableUpcastTo_MR_VisualObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CircleObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_StaticDowncastTo_MR_CircleObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CircleObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableStaticDowncastTo_MR_CircleObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_CircleObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_DynamicDowncastTo_MR_CircleObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_CircleObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableDynamicDowncastTo_MR_CircleObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CircleObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_DynamicDowncastToOrFail_MR_CircleObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CircleObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableDynamicDowncastToOrFail_MR_CircleObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SphereObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_StaticDowncastTo_MR_SphereObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SphereObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableStaticDowncastTo_MR_SphereObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_SphereObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_DynamicDowncastTo_MR_SphereObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_SphereObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableDynamicDowncastTo_MR_SphereObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SphereObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_DynamicDowncastToOrFail_MR_SphereObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SphereObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MutableDynamicDowncastToOrFail_MR_SphereObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *object);

/// Destroys a heap-allocated instance of `MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length`. Does nothing if the pointer is null.
MRC_API void MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_Destroy(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *_this);

/// Destroys a heap-allocated array of `MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length`. Does nothing if the pointer is null.
MRC_API void MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_DestroyArray(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *_this);

/// Generated from a method of class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` named `supportsVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
MRC_API bool MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_supportsVisualizeProperty(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *_this, const MR_AnyVisualizeMaskEnum *type);

/// Generated from a method of class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` named `getAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_ViewportMask *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_getAllVisualizeProperties(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *_this);

/// Generated from a method of class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` named `getVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportMask *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_getVisualizePropertyMask(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *_this, const MR_AnyVisualizeMaskEnum *type);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_OffsetPtr(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_OffsetMutablePtr(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_UpcastTo_MR_FeatureObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_MutableUpcastTo_MR_FeatureObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_UpcastTo_MR_Object(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::Object`.
MRC_API MR_Object *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_MutableUpcastTo_MR_Object(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_UpcastTo_MR_ObjectChildrenHolder(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_MutableUpcastTo_MR_ObjectChildrenHolder(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_UpcastTo_MR_VisualObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_MutableUpcastTo_MR_VisualObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ConeObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_StaticDowncastTo_MR_ConeObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ConeObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_MutableStaticDowncastTo_MR_ConeObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ConeObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_DynamicDowncastTo_MR_ConeObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ConeObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_MutableDynamicDowncastTo_MR_ConeObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ConeObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_DynamicDowncastToOrFail_MR_ConeObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ConeObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length_MutableDynamicDowncastToOrFail_MR_ConeObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *object);

/// Destroys a heap-allocated instance of `MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length`. Does nothing if the pointer is null.
MRC_API void MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_Destroy(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *_this);

/// Destroys a heap-allocated array of `MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length`. Does nothing if the pointer is null.
MRC_API void MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_DestroyArray(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *_this);

/// Generated from a method of class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` named `supportsVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
MRC_API bool MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_supportsVisualizeProperty(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *_this, const MR_AnyVisualizeMaskEnum *type);

/// Generated from a method of class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` named `getAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_ViewportMask *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_getAllVisualizeProperties(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *_this);

/// Generated from a method of class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` named `getVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportMask *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_getVisualizePropertyMask(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *_this, const MR_AnyVisualizeMaskEnum *type);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_OffsetPtr(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_OffsetMutablePtr(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_UpcastTo_MR_FeatureObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_MutableUpcastTo_MR_FeatureObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_UpcastTo_MR_Object(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::Object`.
MRC_API MR_Object *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_MutableUpcastTo_MR_Object(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_UpcastTo_MR_ObjectChildrenHolder(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_MutableUpcastTo_MR_ObjectChildrenHolder(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_UpcastTo_MR_VisualObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Upcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_MutableUpcastTo_MR_VisualObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CylinderObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_StaticDowncastTo_MR_CylinderObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CylinderObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_MutableStaticDowncastTo_MR_CylinderObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_CylinderObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_DynamicDowncastTo_MR_CylinderObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_CylinderObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_MutableDynamicDowncastTo_MR_CylinderObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CylinderObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_DynamicDowncastToOrFail_MR_CylinderObject(const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

/// Downcasts an instance of `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CylinderObject *MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length_MutableDynamicDowncastToOrFail_MR_CylinderObject(MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *object);

#ifdef __cplusplus
} // extern "C"
#endif
