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

typedef struct MR_FeatureObject MR_FeatureObject; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_FeatureObjectProjectPointResult MR_FeatureObjectProjectPointResult; // Defined in `#include <MRCMesh/MRFeatureObject.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_FeatureObjectSharedProperty MR_std_vector_MR_FeatureObjectSharedProperty; // Defined in `#include <MRCMisc/std_vector_MR_FeatureObjectSharedProperty.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/// Object to show point feature
/// Generated from class `MR::PointObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::FeatureObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_PointObject MR_PointObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointObject_Destroy()` to free it when you're done using it.
MRC_API MR_PointObject *MR_PointObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PointObject_DestroyArray()`.
/// Use `MR_PointObject_OffsetMutablePtr()` and `MR_PointObject_OffsetPtr()` to access the array elements.
MRC_API MR_PointObject *MR_PointObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PointObject *MR_PointObject_OffsetPtr(const MR_PointObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PointObject *MR_PointObject_OffsetMutablePtr(MR_PointObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PointObject` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_PointObject_UpcastTo_MR_FeatureObject(const MR_PointObject *object);

/// Upcasts an instance of `MR::PointObject` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_PointObject_MutableUpcastTo_MR_FeatureObject(MR_PointObject *object);

/// Upcasts an instance of `MR::PointObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_PointObject_UpcastTo_MR_Object(const MR_PointObject *object);

/// Upcasts an instance of `MR::PointObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_PointObject_MutableUpcastTo_MR_Object(MR_PointObject *object);

/// Upcasts an instance of `MR::PointObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_PointObject_UpcastTo_MR_ObjectChildrenHolder(const MR_PointObject *object);

/// Upcasts an instance of `MR::PointObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_PointObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_PointObject *object);

/// Upcasts an instance of `MR::PointObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_PointObject_UpcastTo_MR_VisualObject(const MR_PointObject *object);

/// Upcasts an instance of `MR::PointObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_PointObject_MutableUpcastTo_MR_VisualObject(MR_PointObject *object);

/// Generated from a constructor of class `MR::PointObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointObject_Destroy()` to free it when you're done using it.
MRC_API MR_PointObject *MR_PointObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PointObject *_other);

/// Finds best point to approx given points
/// Generated from a constructor of class `MR::PointObject`.
/// Parameter `pointsToApprox` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PointObject_Destroy()` to free it when you're done using it.
MRC_API MR_PointObject *MR_PointObject_Construct(const MR_std_vector_MR_Vector3f *pointsToApprox);

/// Destroys a heap-allocated instance of `MR_PointObject`. Does nothing if the pointer is null.
MRC_API void MR_PointObject_Destroy(const MR_PointObject *_this);

/// Destroys a heap-allocated array of `MR_PointObject`. Does nothing if the pointer is null.
MRC_API void MR_PointObject_DestroyArray(const MR_PointObject *_this);

/// Generated from a method of class `MR::PointObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PointObject *MR_PointObject_AssignFromAnother(MR_PointObject *_this, MR_PassBy _other_pass_by, MR_PointObject *_other);

/// Generated from a method of class `MR::PointObject` named `TypeName`.
MRC_API const char *MR_PointObject_TypeName(void);

/// Generated from a method of class `MR::PointObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_PointObject_typeName(const MR_PointObject *_this);

/// Generated from a method of class `MR::PointObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_PointObject_getClassName(const MR_PointObject *_this);

/// Generated from a method of class `MR::PointObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_PointObject_getClassNameInPlural(const MR_PointObject *_this);

/// Generated from a method of class `MR::PointObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_PointObject_clone(const MR_PointObject *_this);

/// Generated from a method of class `MR::PointObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_PointObject_shallowClone(const MR_PointObject *_this);

/// calculates point from xf
/// Generated from a method of class `MR::PointObject` named `getPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_PointObject_getPoint(const MR_PointObject *_this, const MR_ViewportId *id);

/// updates xf to fit given point
/// Generated from a method of class `MR::PointObject` named `setPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_PointObject_setPoint(MR_PointObject *_this, const MR_Vector3f *point, const MR_ViewportId *id);

/// Generated from a method of class `MR::PointObject` named `getAllSharedProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_FeatureObjectSharedProperty *MR_PointObject_getAllSharedProperties(const MR_PointObject *_this);

/// Generated from a method of class `MR::PointObject` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_PointObject_projectPoint(const MR_PointObject *_this, const MR_Vector3f *_1, const MR_ViewportId *id);

#ifdef __cplusplus
} // extern "C"
#endif
