// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeasurementObject MR_MeasurementObject; // Defined in `#include <MRCMesh/MRMeasurementObject.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


// Represents a radius measurement.
/// Generated from class `MR::RadiusMeasurementObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::MeasurementObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_RadiusMeasurementObject MR_RadiusMeasurementObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RadiusMeasurementObject_Destroy()` to free it when you're done using it.
MRC_API MR_RadiusMeasurementObject *MR_RadiusMeasurementObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RadiusMeasurementObject_DestroyArray()`.
/// Use `MR_RadiusMeasurementObject_OffsetMutablePtr()` and `MR_RadiusMeasurementObject_OffsetPtr()` to access the array elements.
MRC_API MR_RadiusMeasurementObject *MR_RadiusMeasurementObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RadiusMeasurementObject *MR_RadiusMeasurementObject_OffsetPtr(const MR_RadiusMeasurementObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RadiusMeasurementObject *MR_RadiusMeasurementObject_OffsetMutablePtr(MR_RadiusMeasurementObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::RadiusMeasurementObject` to its base class `MR::MeasurementObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_MeasurementObject *MR_RadiusMeasurementObject_UpcastTo_MR_MeasurementObject(const MR_RadiusMeasurementObject *object);

/// Upcasts an instance of `MR::RadiusMeasurementObject` to its base class `MR::MeasurementObject`.
MRC_API MR_MeasurementObject *MR_RadiusMeasurementObject_MutableUpcastTo_MR_MeasurementObject(MR_RadiusMeasurementObject *object);

/// Upcasts an instance of `MR::RadiusMeasurementObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_RadiusMeasurementObject_UpcastTo_MR_Object(const MR_RadiusMeasurementObject *object);

/// Upcasts an instance of `MR::RadiusMeasurementObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_RadiusMeasurementObject_MutableUpcastTo_MR_Object(MR_RadiusMeasurementObject *object);

/// Upcasts an instance of `MR::RadiusMeasurementObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_RadiusMeasurementObject_UpcastTo_MR_ObjectChildrenHolder(const MR_RadiusMeasurementObject *object);

/// Upcasts an instance of `MR::RadiusMeasurementObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_RadiusMeasurementObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_RadiusMeasurementObject *object);

/// Upcasts an instance of `MR::RadiusMeasurementObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_RadiusMeasurementObject_UpcastTo_MR_VisualObject(const MR_RadiusMeasurementObject *object);

/// Upcasts an instance of `MR::RadiusMeasurementObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_RadiusMeasurementObject_MutableUpcastTo_MR_VisualObject(MR_RadiusMeasurementObject *object);

/// Generated from a constructor of class `MR::RadiusMeasurementObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RadiusMeasurementObject_Destroy()` to free it when you're done using it.
MRC_API MR_RadiusMeasurementObject *MR_RadiusMeasurementObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_RadiusMeasurementObject *_other);

/// Destroys a heap-allocated instance of `MR_RadiusMeasurementObject`. Does nothing if the pointer is null.
MRC_API void MR_RadiusMeasurementObject_Destroy(const MR_RadiusMeasurementObject *_this);

/// Destroys a heap-allocated array of `MR_RadiusMeasurementObject`. Does nothing if the pointer is null.
MRC_API void MR_RadiusMeasurementObject_DestroyArray(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RadiusMeasurementObject *MR_RadiusMeasurementObject_AssignFromAnother(MR_RadiusMeasurementObject *_this, MR_PassBy _other_pass_by, MR_RadiusMeasurementObject *_other);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `TypeName`.
MRC_API const char *MR_RadiusMeasurementObject_TypeName(void);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_RadiusMeasurementObject_typeName(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_RadiusMeasurementObject_getClassName(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_RadiusMeasurementObject_getClassNameInPlural(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_RadiusMeasurementObject_clone(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_RadiusMeasurementObject_shallowClone(const MR_RadiusMeasurementObject *_this);

// Get the center in world coordinates.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `getWorldCenter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_RadiusMeasurementObject_getWorldCenter(const MR_RadiusMeasurementObject *_this);

// Get the center in local coordinates.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `getLocalCenter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_RadiusMeasurementObject_getLocalCenter(const MR_RadiusMeasurementObject *_this);

// The length of this vector is the radius, and the direction is the preferred line drawing direction.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `getWorldRadiusAsVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_RadiusMeasurementObject_getWorldRadiusAsVector(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `getLocalRadiusAsVector`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_RadiusMeasurementObject_getLocalRadiusAsVector(const MR_RadiusMeasurementObject *_this);

// The preferred radius normal, for non-spherical radiuses.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `getWorldNormal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_RadiusMeasurementObject_getWorldNormal(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `getLocalNormal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_RadiusMeasurementObject_getLocalNormal(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `setLocalCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
MRC_API void MR_RadiusMeasurementObject_setLocalCenter(MR_RadiusMeasurementObject *_this, const MR_Vector3f *center);

// Sets the local radius vector (the length of which is the radius value),
//   and also the radius normal (which is ignored for spherical radiuses).
// The normal is automatically normalized and made perpendicular to the `radiusVec`.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `setLocalRadiusAsVector`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `radiusVec` can not be null. It is a single object.
/// Parameter `normal` can not be null. It is a single object.
MRC_API void MR_RadiusMeasurementObject_setLocalRadiusAsVector_2(MR_RadiusMeasurementObject *_this, const MR_Vector3f *radiusVec, const MR_Vector3f *normal);

// Same, but without a preferred normal.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `setLocalRadiusAsVector`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `radiusVec` can not be null. It is a single object.
MRC_API void MR_RadiusMeasurementObject_setLocalRadiusAsVector_1(MR_RadiusMeasurementObject *_this, const MR_Vector3f *radiusVec);

// Whether we should draw this as a diameter instead of a radius.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `getDrawAsDiameter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_RadiusMeasurementObject_getDrawAsDiameter(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `setDrawAsDiameter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RadiusMeasurementObject_setDrawAsDiameter(MR_RadiusMeasurementObject *_this, bool value);

// Whether this is a sphere radius, as opposed to circle/cylinder radius.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `getIsSpherical`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_RadiusMeasurementObject_getIsSpherical(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `setIsSpherical`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RadiusMeasurementObject_setIsSpherical(MR_RadiusMeasurementObject *_this, bool value);

// The visual leader line length multiplier, relative to the radius.
// You're recommended to set a min absolute value for the resulting length when rendering.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `getVisualLengthMultiplier`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_RadiusMeasurementObject_getVisualLengthMultiplier(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `setVisualLengthMultiplier`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_RadiusMeasurementObject_setVisualLengthMultiplier(MR_RadiusMeasurementObject *_this, float value);

// Computes the radius/diameter value, as if by `getLocalRadiusAsVector()`, possibly multiplied by two if `getDrawAsDiameter()`.
/// Generated from a method of class `MR::RadiusMeasurementObject` named `computeRadiusOrDiameter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_RadiusMeasurementObject_computeRadiusOrDiameter(const MR_RadiusMeasurementObject *_this);

/// Generated from a method of class `MR::RadiusMeasurementObject` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_RadiusMeasurementObject_getInfoLines(const MR_RadiusMeasurementObject *_this);

#ifdef __cplusplus
} // extern "C"
#endif
