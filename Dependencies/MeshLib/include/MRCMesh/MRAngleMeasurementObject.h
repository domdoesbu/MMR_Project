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


// Represents an angle measurement.
/// Generated from class `MR::AngleMeasurementObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::MeasurementObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_AngleMeasurementObject MR_AngleMeasurementObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AngleMeasurementObject_Destroy()` to free it when you're done using it.
MRC_API MR_AngleMeasurementObject *MR_AngleMeasurementObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AngleMeasurementObject_DestroyArray()`.
/// Use `MR_AngleMeasurementObject_OffsetMutablePtr()` and `MR_AngleMeasurementObject_OffsetPtr()` to access the array elements.
MRC_API MR_AngleMeasurementObject *MR_AngleMeasurementObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AngleMeasurementObject *MR_AngleMeasurementObject_OffsetPtr(const MR_AngleMeasurementObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AngleMeasurementObject *MR_AngleMeasurementObject_OffsetMutablePtr(MR_AngleMeasurementObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::AngleMeasurementObject` to its base class `MR::MeasurementObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_MeasurementObject *MR_AngleMeasurementObject_UpcastTo_MR_MeasurementObject(const MR_AngleMeasurementObject *object);

/// Upcasts an instance of `MR::AngleMeasurementObject` to its base class `MR::MeasurementObject`.
MRC_API MR_MeasurementObject *MR_AngleMeasurementObject_MutableUpcastTo_MR_MeasurementObject(MR_AngleMeasurementObject *object);

/// Upcasts an instance of `MR::AngleMeasurementObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_AngleMeasurementObject_UpcastTo_MR_Object(const MR_AngleMeasurementObject *object);

/// Upcasts an instance of `MR::AngleMeasurementObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_AngleMeasurementObject_MutableUpcastTo_MR_Object(MR_AngleMeasurementObject *object);

/// Upcasts an instance of `MR::AngleMeasurementObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_AngleMeasurementObject_UpcastTo_MR_ObjectChildrenHolder(const MR_AngleMeasurementObject *object);

/// Upcasts an instance of `MR::AngleMeasurementObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_AngleMeasurementObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_AngleMeasurementObject *object);

/// Upcasts an instance of `MR::AngleMeasurementObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_AngleMeasurementObject_UpcastTo_MR_VisualObject(const MR_AngleMeasurementObject *object);

/// Upcasts an instance of `MR::AngleMeasurementObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_AngleMeasurementObject_MutableUpcastTo_MR_VisualObject(MR_AngleMeasurementObject *object);

/// Generated from a constructor of class `MR::AngleMeasurementObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AngleMeasurementObject_Destroy()` to free it when you're done using it.
MRC_API MR_AngleMeasurementObject *MR_AngleMeasurementObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AngleMeasurementObject *_other);

/// Destroys a heap-allocated instance of `MR_AngleMeasurementObject`. Does nothing if the pointer is null.
MRC_API void MR_AngleMeasurementObject_Destroy(const MR_AngleMeasurementObject *_this);

/// Destroys a heap-allocated array of `MR_AngleMeasurementObject`. Does nothing if the pointer is null.
MRC_API void MR_AngleMeasurementObject_DestroyArray(const MR_AngleMeasurementObject *_this);

/// Generated from a method of class `MR::AngleMeasurementObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AngleMeasurementObject *MR_AngleMeasurementObject_AssignFromAnother(MR_AngleMeasurementObject *_this, MR_PassBy _other_pass_by, MR_AngleMeasurementObject *_other);

/// Generated from a method of class `MR::AngleMeasurementObject` named `TypeName`.
MRC_API const char *MR_AngleMeasurementObject_TypeName(void);

/// Generated from a method of class `MR::AngleMeasurementObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_AngleMeasurementObject_typeName(const MR_AngleMeasurementObject *_this);

/// Generated from a method of class `MR::AngleMeasurementObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_AngleMeasurementObject_getClassName(const MR_AngleMeasurementObject *_this);

/// Generated from a method of class `MR::AngleMeasurementObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_AngleMeasurementObject_getClassNameInPlural(const MR_AngleMeasurementObject *_this);

/// Generated from a method of class `MR::AngleMeasurementObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_AngleMeasurementObject_clone(const MR_AngleMeasurementObject *_this);

/// Generated from a method of class `MR::AngleMeasurementObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_AngleMeasurementObject_shallowClone(const MR_AngleMeasurementObject *_this);

// Get the angle point in world coordinates.
/// Generated from a method of class `MR::AngleMeasurementObject` named `getWorldPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_AngleMeasurementObject_getWorldPoint(const MR_AngleMeasurementObject *_this);

// Get the angle point in local coordinates.
/// Generated from a method of class `MR::AngleMeasurementObject` named `getLocalPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_AngleMeasurementObject_getLocalPoint(const MR_AngleMeasurementObject *_this);

// One of the two rays representing the angle, relative to the starting point.
// They can have length != 1 for visualization purposes, it's probably a good idea to take the smaller of the two lengths.
/// Generated from a method of class `MR::AngleMeasurementObject` named `getWorldRay`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_AngleMeasurementObject_getWorldRay(const MR_AngleMeasurementObject *_this, bool second);

// Same, but in local coordinates.
/// Generated from a method of class `MR::AngleMeasurementObject` named `getLocalRay`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_AngleMeasurementObject_getLocalRay(const MR_AngleMeasurementObject *_this, bool second);

// Set the angle point in the local coordinates.
/// Generated from a method of class `MR::AngleMeasurementObject` named `setLocalPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
MRC_API void MR_AngleMeasurementObject_setLocalPoint(MR_AngleMeasurementObject *_this, const MR_Vector3f *point);

// Set the two rays representing the angle in the local coordinates.
// The lengths are preserved.
/// Generated from a method of class `MR::AngleMeasurementObject` named `setLocalRays`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_AngleMeasurementObject_setLocalRays(MR_AngleMeasurementObject *_this, const MR_Vector3f *a, const MR_Vector3f *b);

// Whether this is a conical angle. The middle line between the rays is preserved, but the rays themselves can be rotated.
/// Generated from a method of class `MR::AngleMeasurementObject` named `getIsConical`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_AngleMeasurementObject_getIsConical(const MR_AngleMeasurementObject *_this);

/// Generated from a method of class `MR::AngleMeasurementObject` named `setIsConical`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AngleMeasurementObject_setIsConical(MR_AngleMeasurementObject *_this, bool value);

// Whether we should draw a ray from the center point to better visualize the angle. Enable this if there isn't already a line object there.
/// Generated from a method of class `MR::AngleMeasurementObject` named `getShouldVisualizeRay`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_AngleMeasurementObject_getShouldVisualizeRay(const MR_AngleMeasurementObject *_this, bool second);

/// Generated from a method of class `MR::AngleMeasurementObject` named `setShouldVisualizeRay`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AngleMeasurementObject_setShouldVisualizeRay(MR_AngleMeasurementObject *_this, bool second, bool enable);

// Computes the angle value, as if by `acos(dot(...))` from the two normalized `getWorldRay()`s.
/// Generated from a method of class `MR::AngleMeasurementObject` named `computeAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_AngleMeasurementObject_computeAngle(const MR_AngleMeasurementObject *_this);

/// Generated from a method of class `MR::AngleMeasurementObject` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_AngleMeasurementObject_getInfoLines(const MR_AngleMeasurementObject *_this);

#ifdef __cplusplus
} // extern "C"
#endif
