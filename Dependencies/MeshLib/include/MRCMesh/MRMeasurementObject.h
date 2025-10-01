// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AngleMeasurementObject MR_AngleMeasurementObject; // Defined in `#include <MRCMesh/MRAngleMeasurementObject.h>`.
typedef struct MR_DistanceMeasurementObject MR_DistanceMeasurementObject; // Defined in `#include <MRCMesh/MRDistanceMeasurementObject.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_RadiusMeasurementObject MR_RadiusMeasurementObject; // Defined in `#include <MRCMesh/MRRadiusMeasurementObject.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.


// A common base class for measurement objects.
// Can't be constructed directly.
/// Generated from class `MR::MeasurementObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::VisualObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::AngleMeasurementObject`
///     `MR::DistanceMeasurementObject`
///     `MR::RadiusMeasurementObject`
typedef struct MR_MeasurementObject MR_MeasurementObject;

/// Generated from a constructor of class `MR::MeasurementObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeasurementObject_Destroy()` to free it when you're done using it.
MRC_API MR_MeasurementObject *MR_MeasurementObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeasurementObject *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeasurementObject *MR_MeasurementObject_OffsetPtr(const MR_MeasurementObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeasurementObject *MR_MeasurementObject_OffsetMutablePtr(MR_MeasurementObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::MeasurementObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_MeasurementObject_UpcastTo_MR_Object(const MR_MeasurementObject *object);

/// Upcasts an instance of `MR::MeasurementObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_MeasurementObject_MutableUpcastTo_MR_Object(MR_MeasurementObject *object);

/// Upcasts an instance of `MR::MeasurementObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_MeasurementObject_UpcastTo_MR_ObjectChildrenHolder(const MR_MeasurementObject *object);

/// Upcasts an instance of `MR::MeasurementObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_MeasurementObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_MeasurementObject *object);

/// Upcasts an instance of `MR::MeasurementObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_MeasurementObject_UpcastTo_MR_VisualObject(const MR_MeasurementObject *object);

/// Upcasts an instance of `MR::MeasurementObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_MeasurementObject_MutableUpcastTo_MR_VisualObject(MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_AngleMeasurementObject *MR_MeasurementObject_StaticDowncastTo_MR_AngleMeasurementObject(const MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_AngleMeasurementObject *MR_MeasurementObject_MutableStaticDowncastTo_MR_AngleMeasurementObject(MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_AngleMeasurementObject *MR_MeasurementObject_DynamicDowncastTo_MR_AngleMeasurementObject(const MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_AngleMeasurementObject *MR_MeasurementObject_MutableDynamicDowncastTo_MR_AngleMeasurementObject(MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AngleMeasurementObject *MR_MeasurementObject_DynamicDowncastToOrFail_MR_AngleMeasurementObject(const MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::AngleMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AngleMeasurementObject *MR_MeasurementObject_MutableDynamicDowncastToOrFail_MR_AngleMeasurementObject(MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceMeasurementObject *MR_MeasurementObject_StaticDowncastTo_MR_DistanceMeasurementObject(const MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_DistanceMeasurementObject *MR_MeasurementObject_MutableStaticDowncastTo_MR_DistanceMeasurementObject(MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_DistanceMeasurementObject *MR_MeasurementObject_DynamicDowncastTo_MR_DistanceMeasurementObject(const MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_DistanceMeasurementObject *MR_MeasurementObject_MutableDynamicDowncastTo_MR_DistanceMeasurementObject(MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DistanceMeasurementObject *MR_MeasurementObject_DynamicDowncastToOrFail_MR_DistanceMeasurementObject(const MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::DistanceMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DistanceMeasurementObject *MR_MeasurementObject_MutableDynamicDowncastToOrFail_MR_DistanceMeasurementObject(MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_RadiusMeasurementObject *MR_MeasurementObject_StaticDowncastTo_MR_RadiusMeasurementObject(const MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_RadiusMeasurementObject *MR_MeasurementObject_MutableStaticDowncastTo_MR_RadiusMeasurementObject(MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
/// This version is acting on mutable pointers.
MRC_API const MR_RadiusMeasurementObject *MR_MeasurementObject_DynamicDowncastTo_MR_RadiusMeasurementObject(const MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will return zero if the target type is wrong.
MRC_API MR_RadiusMeasurementObject *MR_MeasurementObject_MutableDynamicDowncastTo_MR_RadiusMeasurementObject(MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// This version is acting on mutable pointers.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RadiusMeasurementObject *MR_MeasurementObject_DynamicDowncastToOrFail_MR_RadiusMeasurementObject(const MR_MeasurementObject *object);

/// Downcasts an instance of `MR::MeasurementObject` to a derived class `MR::RadiusMeasurementObject`.
/// This is a dynamic downcast, it checks the type before casting. This version will throw if the target type is wrong.
/// Parameter `object` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RadiusMeasurementObject *MR_MeasurementObject_MutableDynamicDowncastToOrFail_MR_RadiusMeasurementObject(MR_MeasurementObject *object);

/// Destroys a heap-allocated instance of `MR_MeasurementObject`. Does nothing if the pointer is null.
MRC_API void MR_MeasurementObject_Destroy(const MR_MeasurementObject *_this);

/// Destroys a heap-allocated array of `MR_MeasurementObject`. Does nothing if the pointer is null.
MRC_API void MR_MeasurementObject_DestroyArray(const MR_MeasurementObject *_this);

/// Generated from a method of class `MR::MeasurementObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeasurementObject *MR_MeasurementObject_AssignFromAnother(MR_MeasurementObject *_this, MR_PassBy _other_pass_by, MR_MeasurementObject *_other);

#ifdef __cplusplus
} // extern "C"
#endif
