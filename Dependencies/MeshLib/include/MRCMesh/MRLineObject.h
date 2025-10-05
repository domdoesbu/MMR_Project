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


/// Object to show plane feature
/// Generated from class `MR::LineObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::FeatureObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_LineObject MR_LineObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineObject_Destroy()` to free it when you're done using it.
MRC_API MR_LineObject *MR_LineObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LineObject_DestroyArray()`.
/// Use `MR_LineObject_OffsetMutablePtr()` and `MR_LineObject_OffsetPtr()` to access the array elements.
MRC_API MR_LineObject *MR_LineObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LineObject *MR_LineObject_OffsetPtr(const MR_LineObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LineObject *MR_LineObject_OffsetMutablePtr(MR_LineObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::LineObject` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_LineObject_UpcastTo_MR_FeatureObject(const MR_LineObject *object);

/// Upcasts an instance of `MR::LineObject` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_LineObject_MutableUpcastTo_MR_FeatureObject(MR_LineObject *object);

/// Upcasts an instance of `MR::LineObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_LineObject_UpcastTo_MR_Object(const MR_LineObject *object);

/// Upcasts an instance of `MR::LineObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_LineObject_MutableUpcastTo_MR_Object(MR_LineObject *object);

/// Upcasts an instance of `MR::LineObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_LineObject_UpcastTo_MR_ObjectChildrenHolder(const MR_LineObject *object);

/// Upcasts an instance of `MR::LineObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_LineObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_LineObject *object);

/// Upcasts an instance of `MR::LineObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_LineObject_UpcastTo_MR_VisualObject(const MR_LineObject *object);

/// Upcasts an instance of `MR::LineObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_LineObject_MutableUpcastTo_MR_VisualObject(MR_LineObject *object);

/// Generated from a constructor of class `MR::LineObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineObject_Destroy()` to free it when you're done using it.
MRC_API MR_LineObject *MR_LineObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_LineObject *_other);

/// Finds best plane to approx given points
/// Generated from a constructor of class `MR::LineObject`.
/// Parameter `pointsToApprox` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineObject_Destroy()` to free it when you're done using it.
MRC_API MR_LineObject *MR_LineObject_Construct(const MR_std_vector_MR_Vector3f *pointsToApprox);

/// Destroys a heap-allocated instance of `MR_LineObject`. Does nothing if the pointer is null.
MRC_API void MR_LineObject_Destroy(const MR_LineObject *_this);

/// Destroys a heap-allocated array of `MR_LineObject`. Does nothing if the pointer is null.
MRC_API void MR_LineObject_DestroyArray(const MR_LineObject *_this);

/// Generated from a method of class `MR::LineObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LineObject *MR_LineObject_AssignFromAnother(MR_LineObject *_this, MR_PassBy _other_pass_by, MR_LineObject *_other);

/// Generated from a method of class `MR::LineObject` named `TypeName`.
MRC_API const char *MR_LineObject_TypeName(void);

/// Generated from a method of class `MR::LineObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_LineObject_typeName(const MR_LineObject *_this);

/// Generated from a method of class `MR::LineObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_LineObject_getClassName(const MR_LineObject *_this);

/// Generated from a method of class `MR::LineObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_LineObject_getClassNameInPlural(const MR_LineObject *_this);

/// Generated from a method of class `MR::LineObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_LineObject_clone(const MR_LineObject *_this);

/// Generated from a method of class `MR::LineObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_LineObject_shallowClone(const MR_LineObject *_this);

/// calculates direction from xf
/// Generated from a method of class `MR::LineObject` named `getDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_LineObject_getDirection(const MR_LineObject *_this, const MR_ViewportId *id);

/// calculates center from xf
/// Generated from a method of class `MR::LineObject` named `getCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_LineObject_getCenter(const MR_LineObject *_this, const MR_ViewportId *id);

/// updates xf to fit given normal
/// Generated from a method of class `MR::LineObject` named `setDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `normal` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_LineObject_setDirection(MR_LineObject *_this, const MR_Vector3f *normal, const MR_ViewportId *id);

/// updates xf to fit given center
/// Generated from a method of class `MR::LineObject` named `setCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_LineObject_setCenter(MR_LineObject *_this, const MR_Vector3f *center, const MR_ViewportId *id);

/// updates xf to scale size
/// Generated from a method of class `MR::LineObject` named `setLength`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_LineObject_setLength(MR_LineObject *_this, float size, const MR_ViewportId *id);

/// calculates line size from xf
/// Generated from a method of class `MR::LineObject` named `getLength`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_LineObject_getLength(const MR_LineObject *_this, const MR_ViewportId *id);

// Returns point considered as base for the feature
/// Generated from a method of class `MR::LineObject` named `getBasePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_LineObject_getBasePoint(const MR_LineObject *_this, const MR_ViewportId *id);

/// Returns the starting point, aka `center - dir * len/2`.
/// Generated from a method of class `MR::LineObject` named `getPointA`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_LineObject_getPointA(const MR_LineObject *_this, const MR_ViewportId *id);

/// Returns the finishing point, aka `center + dir * len/2`.
/// Generated from a method of class `MR::LineObject` named `getPointB`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_LineObject_getPointB(const MR_LineObject *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::LineObject` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_LineObject_projectPoint(const MR_LineObject *_this, const MR_Vector3f *point, const MR_ViewportId *id);

/// Generated from a method of class `MR::LineObject` named `getAllSharedProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_FeatureObjectSharedProperty *MR_LineObject_getAllSharedProperties(const MR_LineObject *_this);

#ifdef __cplusplus
} // extern "C"
#endif
