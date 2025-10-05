// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

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


// Represents a distance measurement.
/// Generated from class `MR::DistanceMeasurementObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::MeasurementObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_DistanceMeasurementObject MR_DistanceMeasurementObject;

typedef int32_t MR_DistanceMeasurementObject_PerCoordDeltas;
enum // MR_DistanceMeasurementObject_PerCoordDeltas
{
    // Hide.
    MR_DistanceMeasurementObject_PerCoordDeltas_none = 0,
    // Display as is.
    MR_DistanceMeasurementObject_PerCoordDeltas_withSign = 1,
    // Display absolute values.
    MR_DistanceMeasurementObject_PerCoordDeltas_absolute = 2,
};

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMeasurementObject_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMeasurementObject *MR_DistanceMeasurementObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DistanceMeasurementObject_DestroyArray()`.
/// Use `MR_DistanceMeasurementObject_OffsetMutablePtr()` and `MR_DistanceMeasurementObject_OffsetPtr()` to access the array elements.
MRC_API MR_DistanceMeasurementObject *MR_DistanceMeasurementObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DistanceMeasurementObject *MR_DistanceMeasurementObject_OffsetPtr(const MR_DistanceMeasurementObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DistanceMeasurementObject *MR_DistanceMeasurementObject_OffsetMutablePtr(MR_DistanceMeasurementObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::DistanceMeasurementObject` to its base class `MR::MeasurementObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_MeasurementObject *MR_DistanceMeasurementObject_UpcastTo_MR_MeasurementObject(const MR_DistanceMeasurementObject *object);

/// Upcasts an instance of `MR::DistanceMeasurementObject` to its base class `MR::MeasurementObject`.
MRC_API MR_MeasurementObject *MR_DistanceMeasurementObject_MutableUpcastTo_MR_MeasurementObject(MR_DistanceMeasurementObject *object);

/// Upcasts an instance of `MR::DistanceMeasurementObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_DistanceMeasurementObject_UpcastTo_MR_Object(const MR_DistanceMeasurementObject *object);

/// Upcasts an instance of `MR::DistanceMeasurementObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_DistanceMeasurementObject_MutableUpcastTo_MR_Object(MR_DistanceMeasurementObject *object);

/// Upcasts an instance of `MR::DistanceMeasurementObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_DistanceMeasurementObject_UpcastTo_MR_ObjectChildrenHolder(const MR_DistanceMeasurementObject *object);

/// Upcasts an instance of `MR::DistanceMeasurementObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_DistanceMeasurementObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_DistanceMeasurementObject *object);

/// Upcasts an instance of `MR::DistanceMeasurementObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_DistanceMeasurementObject_UpcastTo_MR_VisualObject(const MR_DistanceMeasurementObject *object);

/// Upcasts an instance of `MR::DistanceMeasurementObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_DistanceMeasurementObject_MutableUpcastTo_MR_VisualObject(MR_DistanceMeasurementObject *object);

/// Generated from a constructor of class `MR::DistanceMeasurementObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DistanceMeasurementObject_Destroy()` to free it when you're done using it.
MRC_API MR_DistanceMeasurementObject *MR_DistanceMeasurementObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DistanceMeasurementObject *_other);

/// Destroys a heap-allocated instance of `MR_DistanceMeasurementObject`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMeasurementObject_Destroy(const MR_DistanceMeasurementObject *_this);

/// Destroys a heap-allocated array of `MR_DistanceMeasurementObject`. Does nothing if the pointer is null.
MRC_API void MR_DistanceMeasurementObject_DestroyArray(const MR_DistanceMeasurementObject *_this);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMeasurementObject *MR_DistanceMeasurementObject_AssignFromAnother(MR_DistanceMeasurementObject *_this, MR_PassBy _other_pass_by, MR_DistanceMeasurementObject *_other);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `TypeName`.
MRC_API const char *MR_DistanceMeasurementObject_TypeName(void);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_DistanceMeasurementObject_typeName(const MR_DistanceMeasurementObject *_this);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_DistanceMeasurementObject_getClassName(const MR_DistanceMeasurementObject *_this);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_DistanceMeasurementObject_getClassNameInPlural(const MR_DistanceMeasurementObject *_this);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_DistanceMeasurementObject_clone(const MR_DistanceMeasurementObject *_this);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_DistanceMeasurementObject_shallowClone(const MR_DistanceMeasurementObject *_this);

// Get the starting point in world coordinates.
/// Generated from a method of class `MR::DistanceMeasurementObject` named `getWorldPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_DistanceMeasurementObject_getWorldPoint(const MR_DistanceMeasurementObject *_this);

// Get the starting point in local coordinates.
/// Generated from a method of class `MR::DistanceMeasurementObject` named `getLocalPoint`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_DistanceMeasurementObject_getLocalPoint(const MR_DistanceMeasurementObject *_this);

// The delta from the starting point to the other point.
/// Generated from a method of class `MR::DistanceMeasurementObject` named `getWorldDelta`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_DistanceMeasurementObject_getWorldDelta(const MR_DistanceMeasurementObject *_this);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `getLocalDelta`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_DistanceMeasurementObject_getLocalDelta(const MR_DistanceMeasurementObject *_this);

// Set the start point in the local coordinates.
/// Generated from a method of class `MR::DistanceMeasurementObject` named `setLocalPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
MRC_API void MR_DistanceMeasurementObject_setLocalPoint(MR_DistanceMeasurementObject *_this, const MR_Vector3f *point);

// Set the delta vector in the local coordinates.
/// Generated from a method of class `MR::DistanceMeasurementObject` named `setLocalDelta`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `delta` can not be null. It is a single object.
MRC_API void MR_DistanceMeasurementObject_setLocalDelta(MR_DistanceMeasurementObject *_this, const MR_Vector3f *delta);

// Whether the distance should be displayed as a negative one.
/// Generated from a method of class `MR::DistanceMeasurementObject` named `getDrawAsNegative`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_DistanceMeasurementObject_getDrawAsNegative(const MR_DistanceMeasurementObject *_this);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `setDrawAsNegative`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMeasurementObject_setDrawAsNegative(MR_DistanceMeasurementObject *_this, bool value);

// Whether we should draw the individual X/Y/Z deltas in addition to the distance itself.
/// Generated from a method of class `MR::DistanceMeasurementObject` named `getPerCoordDeltasMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_DistanceMeasurementObject_PerCoordDeltas MR_DistanceMeasurementObject_getPerCoordDeltasMode(const MR_DistanceMeasurementObject *_this);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `setPerCoordDeltasMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DistanceMeasurementObject_setPerCoordDeltasMode(MR_DistanceMeasurementObject *_this, MR_DistanceMeasurementObject_PerCoordDeltas mode);

// Computes the distance value: `getWorldDelta().length() * (getDrawAsNegative() ? -1 : 1)`.
/// Generated from a method of class `MR::DistanceMeasurementObject` named `computeDistance`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_DistanceMeasurementObject_computeDistance(const MR_DistanceMeasurementObject *_this);

/// Generated from a method of class `MR::DistanceMeasurementObject` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_DistanceMeasurementObject_getInfoLines(const MR_DistanceMeasurementObject *_this);

#ifdef __cplusplus
} // extern "C"
#endif
