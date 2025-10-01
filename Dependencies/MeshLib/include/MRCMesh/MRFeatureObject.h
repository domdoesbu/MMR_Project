// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRMatrix3.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMesh/MRViewportId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length; // Defined in `#include <MRCMesh/MRAddVisualPropertiesMixin.h>`.
typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_AnyVisualizeMaskEnum MR_AnyVisualizeMaskEnum; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_CircleObject MR_CircleObject; // Defined in `#include <MRCMesh/MRCircleObject.h>`.
typedef struct MR_Color MR_Color; // Defined in `#include <MRCMesh/MRColor.h>`.
typedef struct MR_ConeObject MR_ConeObject; // Defined in `#include <MRCMesh/MRConeObject.h>`.
typedef struct MR_CylinderObject MR_CylinderObject; // Defined in `#include <MRCMesh/MRCylinderObject.h>`.
typedef struct MR_LineObject MR_LineObject; // Defined in `#include <MRCMesh/MRLineObject.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_PlaneObject MR_PlaneObject; // Defined in `#include <MRCMesh/MRPlaneObject.h>`.
typedef struct MR_PointObject MR_PointObject; // Defined in `#include <MRCMesh/MRPointObject.h>`.
typedef struct MR_SphereObject MR_SphereObject; // Defined in `#include <MRCMesh/MRSphereObject.h>`.
typedef struct MR_ViewportMask MR_ViewportMask; // Defined in `#include <MRCMesh/MRViewportId.h>`.
typedef struct MR_ViewportProperty_MR_Color MR_ViewportProperty_MR_Color; // Defined in `#include <MRCMesh/MRViewportProperty.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_function_std_variant_float_MR_Vector3f_from_const_MR_FeatureObject_ptr_MR_ViewportId MR_std_function_std_variant_float_MR_Vector3f_from_const_MR_FeatureObject_ptr_MR_ViewportId; // Defined in `#include <MRCMisc/std_function_std_variant_float_MR_Vector3f_from_const_MR_FeatureObject_ptr_MR_ViewportId.h>`.
typedef struct MR_std_function_void_from_const_std_variant_float_MR_Vector3f_ref_MR_FeatureObject_ptr_MR_ViewportId MR_std_function_void_from_const_std_variant_float_MR_Vector3f_ref_MR_FeatureObject_ptr_MR_ViewportId; // Defined in `#include <MRCMisc/std_function_void_from_const_std_variant_float_MR_Vector3f_ref_MR_FeatureObject_ptr_MR_Viewp__37af.h>`.
typedef struct MR_std_optional_MR_Vector3f MR_std_optional_MR_Vector3f; // Defined in `#include <MRCMisc/std_optional_MR_Vector3f.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_FeatureObjectSharedProperty MR_std_vector_MR_FeatureObjectSharedProperty; // Defined in `#include <MRCMisc/std_vector_MR_FeatureObjectSharedProperty.h>`.
typedef struct MR_std_vector_MR_ViewportMask MR_std_vector_MR_ViewportMask; // Defined in `#include <MRCMisc/std_vector_MR_ViewportMask.h>`.


// Classifies `FeatureObjectSharedProperty`, mostly for informational purposes.
typedef int32_t MR_FeaturePropertyKind;
enum // MR_FeaturePropertyKind
{
    // Position, normally Vector3f.
    MR_FeaturePropertyKind_position = 0,
    // Length or size.
    MR_FeaturePropertyKind_linearDimension = 1,
    // Direction, normally Vector3f.
    MR_FeaturePropertyKind_direction = 2,
    // Angle, normally float. Measure in radians.
    MR_FeaturePropertyKind_angle = 3,
    MR_FeaturePropertyKind_other = 4,
};

// FeatureObjectSharedProperty struct is designed to represent a shared property of a feature object, enabling the use of generalized getter and setter methods for property manipulation.
// propertyName: A string representing the name of the property.
// getter : A std::function encapsulating a method with no parameters that returns a FeaturesPropertyTypesVariant.This allows for a generic way to retrieve the value of the property.
// setter : A std::function encapsulating a method that takes a FeaturesPropertyTypesVariant as a parameter and returns void.This function sets the value of the property.
// The templated constructor of this struct takes the property name, pointers to the getter and setter member functions, and a pointer to the object( obj ).
// The constructor initializes the propertyName and uses lambdas to adapt the member function pointers into std::function objects that conform to the expected
// getter and setter signatures.The getter lambda invokes the getter method on the object, and the setter lambda ensures the correct variant type is passed before
// invoking the setter method.
/// Generated from class `MR::FeatureObjectSharedProperty`.
typedef struct MR_FeatureObjectSharedProperty MR_FeatureObjectSharedProperty;

/// Generated from class `MR::FeatureObjectProjectPointResult`.
typedef struct MR_FeatureObjectProjectPointResult MR_FeatureObjectProjectPointResult;

typedef int32_t MR_FeatureVisualizePropertyType;
enum // MR_FeatureVisualizePropertyType
{
    MR_FeatureVisualizePropertyType_Subfeatures = 0,
    // If true, show additional details on the name tag, such as point coordinates. Not all features use this.
    MR_FeatureVisualizePropertyType_DetailsOnNameTag = 1,
    MR_FeatureVisualizePropertyType__count = 2,
};

/// An interface class which allows feature objects to share setters and getters on their main properties, for convenient presentation in the UI
/// Generated from class `MR::FeatureObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::VisualObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`
///     `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`
///     `MR::LineObject`
///     `MR::PlaneObject`
///     `MR::PointObject`
///   Indirect: (non-virtual)
///     `MR::CircleObject`
///     `MR::ConeObject`
///     `MR::CylinderObject`
///     `MR::SphereObject`
typedef struct MR_FeatureObject MR_FeatureObject;

/// Returns a pointer to a member variable of class `MR::FeatureObjectSharedProperty` named `propertyName`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_FeatureObjectSharedProperty_Get_propertyName(const MR_FeatureObjectSharedProperty *_this);

/// Modifies a member variable of class `MR::FeatureObjectSharedProperty` named `propertyName`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_FeatureObjectSharedProperty_Set_propertyName(MR_FeatureObjectSharedProperty *_this, const char *value, const char *value_end);

/// Returns a mutable pointer to a member variable of class `MR::FeatureObjectSharedProperty` named `propertyName`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_FeatureObjectSharedProperty_GetMutable_propertyName(MR_FeatureObjectSharedProperty *_this);

/// Returns a pointer to a member variable of class `MR::FeatureObjectSharedProperty` named `kind`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FeaturePropertyKind *MR_FeatureObjectSharedProperty_Get_kind(const MR_FeatureObjectSharedProperty *_this);

/// Modifies a member variable of class `MR::FeatureObjectSharedProperty` named `kind`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObjectSharedProperty_Set_kind(MR_FeatureObjectSharedProperty *_this, MR_FeaturePropertyKind value);

/// Returns a mutable pointer to a member variable of class `MR::FeatureObjectSharedProperty` named `kind`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FeaturePropertyKind *MR_FeatureObjectSharedProperty_GetMutable_kind(MR_FeatureObjectSharedProperty *_this);

// due to getAllSharedProperties in FeatureObject returns static vector, we need externaly setup object to invoke setter ad getter.
/// Returns a pointer to a member variable of class `MR::FeatureObjectSharedProperty` named `getter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_std_variant_float_MR_Vector3f_from_const_MR_FeatureObject_ptr_MR_ViewportId *MR_FeatureObjectSharedProperty_Get_getter(const MR_FeatureObjectSharedProperty *_this);

// due to getAllSharedProperties in FeatureObject returns static vector, we need externaly setup object to invoke setter ad getter.
/// Modifies a member variable of class `MR::FeatureObjectSharedProperty` named `getter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObjectSharedProperty_Set_getter(MR_FeatureObjectSharedProperty *_this, MR_PassBy value_pass_by, MR_std_function_std_variant_float_MR_Vector3f_from_const_MR_FeatureObject_ptr_MR_ViewportId *value);

// due to getAllSharedProperties in FeatureObject returns static vector, we need externaly setup object to invoke setter ad getter.
/// Returns a mutable pointer to a member variable of class `MR::FeatureObjectSharedProperty` named `getter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_std_variant_float_MR_Vector3f_from_const_MR_FeatureObject_ptr_MR_ViewportId *MR_FeatureObjectSharedProperty_GetMutable_getter(MR_FeatureObjectSharedProperty *_this);

// NOTE: `id` should usually be `{}`, not the current viewport ID, to set the property for all viewports.
// Passing a non-zero ID would only modify the active viewport, and per-viewport properties aren't usually used.
/// Returns a pointer to a member variable of class `MR::FeatureObjectSharedProperty` named `setter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_const_std_variant_float_MR_Vector3f_ref_MR_FeatureObject_ptr_MR_ViewportId *MR_FeatureObjectSharedProperty_Get_setter(const MR_FeatureObjectSharedProperty *_this);

// NOTE: `id` should usually be `{}`, not the current viewport ID, to set the property for all viewports.
// Passing a non-zero ID would only modify the active viewport, and per-viewport properties aren't usually used.
/// Modifies a member variable of class `MR::FeatureObjectSharedProperty` named `setter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObjectSharedProperty_Set_setter(MR_FeatureObjectSharedProperty *_this, MR_PassBy value_pass_by, MR_std_function_void_from_const_std_variant_float_MR_Vector3f_ref_MR_FeatureObject_ptr_MR_ViewportId *value);

// NOTE: `id` should usually be `{}`, not the current viewport ID, to set the property for all viewports.
// Passing a non-zero ID would only modify the active viewport, and per-viewport properties aren't usually used.
/// Returns a mutable pointer to a member variable of class `MR::FeatureObjectSharedProperty` named `setter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_const_std_variant_float_MR_Vector3f_ref_MR_FeatureObject_ptr_MR_ViewportId *MR_FeatureObjectSharedProperty_GetMutable_setter(MR_FeatureObjectSharedProperty *_this);

/// Generated from a constructor of class `MR::FeatureObjectSharedProperty`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectSharedProperty_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectSharedProperty *MR_FeatureObjectSharedProperty_ConstructFromAnother(MR_PassBy _other_pass_by, MR_FeatureObjectSharedProperty *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FeatureObjectSharedProperty *MR_FeatureObjectSharedProperty_OffsetPtr(const MR_FeatureObjectSharedProperty *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FeatureObjectSharedProperty *MR_FeatureObjectSharedProperty_OffsetMutablePtr(MR_FeatureObjectSharedProperty *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_FeatureObjectSharedProperty`. Does nothing if the pointer is null.
MRC_API void MR_FeatureObjectSharedProperty_Destroy(const MR_FeatureObjectSharedProperty *_this);

/// Destroys a heap-allocated array of `MR_FeatureObjectSharedProperty`. Does nothing if the pointer is null.
MRC_API void MR_FeatureObjectSharedProperty_DestroyArray(const MR_FeatureObjectSharedProperty *_this);

/// Generated from a method of class `MR::FeatureObjectSharedProperty` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FeatureObjectSharedProperty *MR_FeatureObjectSharedProperty_AssignFromAnother(MR_FeatureObjectSharedProperty *_this, MR_PassBy _other_pass_by, MR_FeatureObjectSharedProperty *_other);

/// Returns a pointer to a member variable of class `MR::FeatureObjectProjectPointResult` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_FeatureObjectProjectPointResult_Get_point(const MR_FeatureObjectProjectPointResult *_this);

/// Modifies a member variable of class `MR::FeatureObjectProjectPointResult` named `point`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObjectProjectPointResult_Set_point(MR_FeatureObjectProjectPointResult *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::FeatureObjectProjectPointResult` named `point`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_FeatureObjectProjectPointResult_GetMutable_point(MR_FeatureObjectProjectPointResult *_this);

/// Returns a pointer to a member variable of class `MR::FeatureObjectProjectPointResult` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_optional_MR_Vector3f *MR_FeatureObjectProjectPointResult_Get_normal(const MR_FeatureObjectProjectPointResult *_this);

/// Modifies a member variable of class `MR::FeatureObjectProjectPointResult` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` is optional. To keep it empty, pass a null pointer.
MRC_API void MR_FeatureObjectProjectPointResult_Set_normal(MR_FeatureObjectProjectPointResult *_this, const MR_Vector3f *value);

/// Returns a mutable pointer to a member variable of class `MR::FeatureObjectProjectPointResult` named `normal`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_optional_MR_Vector3f *MR_FeatureObjectProjectPointResult_GetMutable_normal(MR_FeatureObjectProjectPointResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_FeatureObjectProjectPointResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FeatureObjectProjectPointResult_DestroyArray()`.
/// Use `MR_FeatureObjectProjectPointResult_OffsetMutablePtr()` and `MR_FeatureObjectProjectPointResult_OffsetPtr()` to access the array elements.
MRC_API MR_FeatureObjectProjectPointResult *MR_FeatureObjectProjectPointResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::FeatureObjectProjectPointResult` elementwise.
/// Parameter `normal` is optional. To keep it empty, pass a null pointer.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_FeatureObjectProjectPointResult_ConstructFrom(MR_Vector3f point, const MR_Vector3f *normal);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FeatureObjectProjectPointResult *MR_FeatureObjectProjectPointResult_OffsetPtr(const MR_FeatureObjectProjectPointResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FeatureObjectProjectPointResult *MR_FeatureObjectProjectPointResult_OffsetMutablePtr(MR_FeatureObjectProjectPointResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::FeatureObjectProjectPointResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_FeatureObjectProjectPointResult_ConstructFromAnother(const MR_FeatureObjectProjectPointResult *_other);

/// Destroys a heap-allocated instance of `MR_FeatureObjectProjectPointResult`. Does nothing if the pointer is null.
MRC_API void MR_FeatureObjectProjectPointResult_Destroy(const MR_FeatureObjectProjectPointResult *_this);

/// Destroys a heap-allocated array of `MR_FeatureObjectProjectPointResult`. Does nothing if the pointer is null.
MRC_API void MR_FeatureObjectProjectPointResult_DestroyArray(const MR_FeatureObjectProjectPointResult *_this);

/// Generated from a method of class `MR::FeatureObjectProjectPointResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FeatureObjectProjectPointResult *MR_FeatureObjectProjectPointResult_AssignFromAnother(MR_FeatureObjectProjectPointResult *_this, const MR_FeatureObjectProjectPointResult *_other);

/// Destroys a heap-allocated instance of `MR_FeatureObject`. Does nothing if the pointer is null.
MRC_API void MR_FeatureObject_Destroy(const MR_FeatureObject *_this);

/// Destroys a heap-allocated array of `MR_FeatureObject`. Does nothing if the pointer is null.
MRC_API void MR_FeatureObject_DestroyArray(const MR_FeatureObject *_this);

/// Create and generate list of bounded getters and setters for the main properties of feature object, together with prop. name for display and edit into UI.
/// Generated from a method of class `MR::FeatureObject` named `getAllSharedProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_FeatureObjectSharedProperty *MR_FeatureObject_getAllSharedProperties(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `supportsVisualizeProperty`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
MRC_API bool MR_FeatureObject_supportsVisualizeProperty(const MR_FeatureObject *_this, const MR_AnyVisualizeMaskEnum *type);

/// Generated from a method of class `MR::FeatureObject` named `getAllVisualizeProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_ViewportMask_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_ViewportMask *MR_FeatureObject_getAllVisualizeProperties(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `getVisualizePropertyMask`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `type` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportMask *MR_FeatureObject_getVisualizePropertyMask(const MR_FeatureObject *_this, const MR_AnyVisualizeMaskEnum *type);

// Since a point on an abstract feature is difficult to uniquely parameterize,
// the projection function simultaneously returns the normal to the surface at the projection point.
/// Generated from a method of class `MR::FeatureObject` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_FeatureObject_projectPoint(const MR_FeatureObject *_this, const MR_Vector3f *point, const MR_ViewportId *id);

/// Generated from a method of class `MR::FeatureObject` named `getNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Vector3f *MR_FeatureObject_getNormal(const MR_FeatureObject *_this, const MR_Vector3f *point);

/// Generated from a method of class `MR::FeatureObject` named `setXf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `xf` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_FeatureObject_setXf(MR_FeatureObject *_this, const MR_AffineXf3f *xf, const MR_ViewportId *id);

/// Generated from a method of class `MR::FeatureObject` named `resetXf`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_FeatureObject_resetXf(MR_FeatureObject *_this, const MR_ViewportId *id);

// Returns point considered as base for the feature
/// Generated from a method of class `MR::FeatureObject` named `getBasePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_FeatureObject_getBasePoint(const MR_FeatureObject *_this, const MR_ViewportId *id);

// The cached orthonormalized rotation matrix.
// `isDef` receives false if matrix is overridden for this specific viewport.
/// Generated from a method of class `MR::FeatureObject` named `getRotationMatrix`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `isDef` defaults to a null pointer in C++.
MRC_API MR_Matrix3f MR_FeatureObject_getRotationMatrix(const MR_FeatureObject *_this, const MR_ViewportId *id, bool *isDef);

// The cached scale and shear matrix. The main diagnoal stores the scale, and some other elements store the shearing.
// `isDef` receives false if matrix is overridden for this specific viewport.
/// Generated from a method of class `MR::FeatureObject` named `getScaleShearMatrix`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `isDef` defaults to a null pointer in C++.
MRC_API MR_Matrix3f MR_FeatureObject_getScaleShearMatrix(const MR_FeatureObject *_this, const MR_ViewportId *id, bool *isDef);

// This color is used for subfeatures.
// `isDef` receives false if matrix is overridden for this specific viewport.
/// Generated from a method of class `MR::FeatureObject` named `getDecorationsColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `viewportId` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `isDef` defaults to a null pointer in C++.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_FeatureObject_getDecorationsColor(const MR_FeatureObject *_this, bool selected, const MR_ViewportId *viewportId, bool *isDef);

/// Generated from a method of class `MR::FeatureObject` named `setDecorationsColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `viewportId` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_FeatureObject_setDecorationsColor(MR_FeatureObject *_this, const MR_Color *color, bool selected, const MR_ViewportId *viewportId);

/// Generated from a method of class `MR::FeatureObject` named `getDecorationsColorForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportProperty_MR_Color *MR_FeatureObject_getDecorationsColorForAllViewports(const MR_FeatureObject *_this, bool selected);

/// Generated from a method of class `MR::FeatureObject` named `setDecorationsColorForAllViewports`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObject_setDecorationsColorForAllViewports(MR_FeatureObject *_this, MR_PassBy val_pass_by, MR_ViewportProperty_MR_Color *val, bool selected);

// Point size and line width, for primary rendering rather than subfeatures.
/// Generated from a method of class `MR::FeatureObject` named `getPointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_FeatureObject_getPointSize(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `getLineWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_FeatureObject_getLineWidth(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `setPointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObject_setPointSize(MR_FeatureObject *_this, float pointSize);

/// Generated from a method of class `MR::FeatureObject` named `setLineWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObject_setLineWidth(MR_FeatureObject *_this, float lineWidth);

// Point size and line width, for subfeatures rather than primary rendering.
/// Generated from a method of class `MR::FeatureObject` named `getSubfeaturePointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_FeatureObject_getSubfeaturePointSize(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `getSubfeatureLineWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_FeatureObject_getSubfeatureLineWidth(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `setSubfeaturePointSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObject_setSubfeaturePointSize(MR_FeatureObject *_this, float pointSize);

/// Generated from a method of class `MR::FeatureObject` named `setSubfeatureLineWidth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObject_setSubfeatureLineWidth(MR_FeatureObject *_this, float lineWidth);

// Per-component alpha multipliers. The global alpha is multiplied by thise.
/// Generated from a method of class `MR::FeatureObject` named `getMainFeatureAlpha`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_FeatureObject_getMainFeatureAlpha(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `getSubfeatureAlphaPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_FeatureObject_getSubfeatureAlphaPoints(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `getSubfeatureAlphaLines`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_FeatureObject_getSubfeatureAlphaLines(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `getSubfeatureAlphaMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_FeatureObject_getSubfeatureAlphaMesh(const MR_FeatureObject *_this);

/// Generated from a method of class `MR::FeatureObject` named `setMainFeatureAlpha`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObject_setMainFeatureAlpha(MR_FeatureObject *_this, float alpha);

/// Generated from a method of class `MR::FeatureObject` named `setSubfeatureAlphaPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObject_setSubfeatureAlphaPoints(MR_FeatureObject *_this, float alpha);

/// Generated from a method of class `MR::FeatureObject` named `setSubfeatureAlphaLines`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObject_setSubfeatureAlphaLines(MR_FeatureObject *_this, float alpha);

/// Generated from a method of class `MR::FeatureObject` named `setSubfeatureAlphaMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FeatureObject_setSubfeatureAlphaMesh(MR_FeatureObject *_this, float alpha);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FeatureObject *MR_FeatureObject_OffsetPtr(const MR_FeatureObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FeatureObject *MR_FeatureObject_OffsetMutablePtr(MR_FeatureObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::FeatureObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_FeatureObject_UpcastTo_MR_Object(const MR_FeatureObject *object);

/// Upcasts an instance of `MR::FeatureObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_FeatureObject_MutableUpcastTo_MR_Object(MR_FeatureObject *object);

/// Upcasts an instance of `MR::FeatureObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_FeatureObject_UpcastTo_MR_ObjectChildrenHolder(const MR_FeatureObject *object);

/// Upcasts an instance of `MR::FeatureObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_FeatureObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_FeatureObject *object);

/// Upcasts an instance of `MR::FeatureObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_FeatureObject_UpcastTo_MR_VisualObject(const MR_FeatureObject *object);

/// Upcasts an instance of `MR::FeatureObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_FeatureObject_MutableUpcastTo_MR_VisualObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_DynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_MutableDynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_DynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::angle, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_angle_MR_DimensionsVisualizePropertyType_length(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_DynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_MutableDynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_DynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter, MR::DimensionsVisualizePropertyType::length>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter_MR_DimensionsVisualizePropertyType_length(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_FeatureObject_StaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_FeatureObject_MutableStaticDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_FeatureObject_DynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_FeatureObject_MutableDynamicDowncastTo_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_FeatureObject_DynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::AddVisualProperties<MR::FeatureObject, MR::DimensionsVisualizePropertyType::diameter>`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_AddVisualProperties_MR_FeatureObject_MR_DimensionsVisualizePropertyType_diameter(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CircleObject *MR_FeatureObject_StaticDowncastTo_MR_CircleObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CircleObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CircleObject *MR_FeatureObject_MutableStaticDowncastTo_MR_CircleObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_CircleObject *MR_FeatureObject_DynamicDowncastTo_MR_CircleObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_CircleObject *MR_FeatureObject_MutableDynamicDowncastTo_MR_CircleObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CircleObject *MR_FeatureObject_DynamicDowncastToOrFail_MR_CircleObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CircleObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CircleObject *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_CircleObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ConeObject *MR_FeatureObject_StaticDowncastTo_MR_ConeObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::ConeObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ConeObject *MR_FeatureObject_MutableStaticDowncastTo_MR_ConeObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_ConeObject *MR_FeatureObject_DynamicDowncastTo_MR_ConeObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_ConeObject *MR_FeatureObject_MutableDynamicDowncastTo_MR_ConeObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ConeObject *MR_FeatureObject_DynamicDowncastToOrFail_MR_ConeObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::ConeObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ConeObject *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_ConeObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_CylinderObject *MR_FeatureObject_StaticDowncastTo_MR_CylinderObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CylinderObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_CylinderObject *MR_FeatureObject_MutableStaticDowncastTo_MR_CylinderObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_CylinderObject *MR_FeatureObject_DynamicDowncastTo_MR_CylinderObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_CylinderObject *MR_FeatureObject_MutableDynamicDowncastTo_MR_CylinderObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CylinderObject *MR_FeatureObject_DynamicDowncastToOrFail_MR_CylinderObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::CylinderObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CylinderObject *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_CylinderObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::LineObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_LineObject *MR_FeatureObject_StaticDowncastTo_MR_LineObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::LineObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_LineObject *MR_FeatureObject_MutableStaticDowncastTo_MR_LineObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_LineObject *MR_FeatureObject_DynamicDowncastTo_MR_LineObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_LineObject *MR_FeatureObject_MutableDynamicDowncastTo_MR_LineObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_LineObject *MR_FeatureObject_DynamicDowncastToOrFail_MR_LineObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::LineObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LineObject *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_LineObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PlaneObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PlaneObject *MR_FeatureObject_StaticDowncastTo_MR_PlaneObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PlaneObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PlaneObject *MR_FeatureObject_MutableStaticDowncastTo_MR_PlaneObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PlaneObject *MR_FeatureObject_DynamicDowncastTo_MR_PlaneObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PlaneObject *MR_FeatureObject_MutableDynamicDowncastTo_MR_PlaneObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PlaneObject *MR_FeatureObject_DynamicDowncastToOrFail_MR_PlaneObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PlaneObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlaneObject *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_PlaneObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PointObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_PointObject *MR_FeatureObject_StaticDowncastTo_MR_PointObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PointObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_PointObject *MR_FeatureObject_MutableStaticDowncastTo_MR_PointObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_PointObject *MR_FeatureObject_DynamicDowncastTo_MR_PointObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_PointObject *MR_FeatureObject_MutableDynamicDowncastTo_MR_PointObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PointObject *MR_FeatureObject_DynamicDowncastToOrFail_MR_PointObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::PointObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointObject *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_PointObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SphereObject *MR_FeatureObject_StaticDowncastTo_MR_SphereObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::SphereObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SphereObject *MR_FeatureObject_MutableStaticDowncastTo_MR_SphereObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_SphereObject *MR_FeatureObject_DynamicDowncastTo_MR_SphereObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_SphereObject *MR_FeatureObject_MutableDynamicDowncastTo_MR_SphereObject(MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SphereObject *MR_FeatureObject_DynamicDowncastToOrFail_MR_SphereObject(const MR_FeatureObject *object);

/// Downcasts an instance of `MR::FeatureObject` to a derived class `MR::SphereObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SphereObject *MR_FeatureObject_MutableDynamicDowncastToOrFail_MR_SphereObject(MR_FeatureObject *object);

#ifdef __cplusplus
} // extern "C"
#endif
