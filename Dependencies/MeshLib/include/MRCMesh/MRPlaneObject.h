// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRMatrix3.h>
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
/// Generated from class `MR::PlaneObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::FeatureObject`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_PlaneObject MR_PlaneObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlaneObject_Destroy()` to free it when you're done using it.
MRC_API MR_PlaneObject *MR_PlaneObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PlaneObject_DestroyArray()`.
/// Use `MR_PlaneObject_OffsetMutablePtr()` and `MR_PlaneObject_OffsetPtr()` to access the array elements.
MRC_API MR_PlaneObject *MR_PlaneObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PlaneObject *MR_PlaneObject_OffsetPtr(const MR_PlaneObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PlaneObject *MR_PlaneObject_OffsetMutablePtr(MR_PlaneObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::PlaneObject` to its base class `MR::FeatureObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_FeatureObject *MR_PlaneObject_UpcastTo_MR_FeatureObject(const MR_PlaneObject *object);

/// Upcasts an instance of `MR::PlaneObject` to its base class `MR::FeatureObject`.
MRC_API MR_FeatureObject *MR_PlaneObject_MutableUpcastTo_MR_FeatureObject(MR_PlaneObject *object);

/// Upcasts an instance of `MR::PlaneObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_PlaneObject_UpcastTo_MR_Object(const MR_PlaneObject *object);

/// Upcasts an instance of `MR::PlaneObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_PlaneObject_MutableUpcastTo_MR_Object(MR_PlaneObject *object);

/// Upcasts an instance of `MR::PlaneObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_PlaneObject_UpcastTo_MR_ObjectChildrenHolder(const MR_PlaneObject *object);

/// Upcasts an instance of `MR::PlaneObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_PlaneObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_PlaneObject *object);

/// Upcasts an instance of `MR::PlaneObject` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_PlaneObject_UpcastTo_MR_VisualObject(const MR_PlaneObject *object);

/// Upcasts an instance of `MR::PlaneObject` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_PlaneObject_MutableUpcastTo_MR_VisualObject(MR_PlaneObject *object);

/// Generated from a constructor of class `MR::PlaneObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlaneObject_Destroy()` to free it when you're done using it.
MRC_API MR_PlaneObject *MR_PlaneObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PlaneObject *_other);

/// Finds best plane to approx given points
/// Generated from a constructor of class `MR::PlaneObject`.
/// Parameter `pointsToApprox` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PlaneObject_Destroy()` to free it when you're done using it.
MRC_API MR_PlaneObject *MR_PlaneObject_Construct(const MR_std_vector_MR_Vector3f *pointsToApprox);

/// Destroys a heap-allocated instance of `MR_PlaneObject`. Does nothing if the pointer is null.
MRC_API void MR_PlaneObject_Destroy(const MR_PlaneObject *_this);

/// Destroys a heap-allocated array of `MR_PlaneObject`. Does nothing if the pointer is null.
MRC_API void MR_PlaneObject_DestroyArray(const MR_PlaneObject *_this);

/// Generated from a method of class `MR::PlaneObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PlaneObject *MR_PlaneObject_AssignFromAnother(MR_PlaneObject *_this, MR_PassBy _other_pass_by, MR_PlaneObject *_other);

/// Generated from a method of class `MR::PlaneObject` named `TypeName`.
MRC_API const char *MR_PlaneObject_TypeName(void);

/// Generated from a method of class `MR::PlaneObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_PlaneObject_typeName(const MR_PlaneObject *_this);

/// Generated from a method of class `MR::PlaneObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_PlaneObject_getClassName(const MR_PlaneObject *_this);

/// Generated from a method of class `MR::PlaneObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_PlaneObject_getClassNameInPlural(const MR_PlaneObject *_this);

/// Generated from a method of class `MR::PlaneObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_PlaneObject_clone(const MR_PlaneObject *_this);

/// Generated from a method of class `MR::PlaneObject` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_PlaneObject_shallowClone(const MR_PlaneObject *_this);

/// calculates normal from xf
/// Generated from a method of class `MR::PlaneObject` named `getNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_PlaneObject_getNormal(const MR_PlaneObject *_this, const MR_ViewportId *id);

/// calculates center from xf
/// Generated from a method of class `MR::PlaneObject` named `getCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_PlaneObject_getCenter(const MR_PlaneObject *_this, const MR_ViewportId *id);

/// updates xf to fit given normal
/// Generated from a method of class `MR::PlaneObject` named `setNormal`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `normal` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_PlaneObject_setNormal(MR_PlaneObject *_this, const MR_Vector3f *normal, const MR_ViewportId *id);

/// updates xf to fit given center
/// Generated from a method of class `MR::PlaneObject` named `setCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `center` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_PlaneObject_setCenter(MR_PlaneObject *_this, const MR_Vector3f *center, const MR_ViewportId *id);

/// updates xf to scale size
/// Generated from a method of class `MR::PlaneObject` named `setSize`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_PlaneObject_setSize(MR_PlaneObject *_this, float size, const MR_ViewportId *id);

/// calculates plane size from xf
/// Generated from a method of class `MR::PlaneObject` named `getSize`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_PlaneObject_getSize(const MR_PlaneObject *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::PlaneObject` named `getSizeX`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_PlaneObject_getSizeX(const MR_PlaneObject *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::PlaneObject` named `getSizeY`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API float MR_PlaneObject_getSizeY(const MR_PlaneObject *_this, const MR_ViewportId *id);

/// calculates normalized directions of X,Y axis of the plane and normal as Z
/// Generated from a method of class `MR::PlaneObject` named `calcLocalBasis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Matrix3f MR_PlaneObject_calcLocalBasis(const MR_PlaneObject *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::PlaneObject` named `setSizeX`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_PlaneObject_setSizeX(MR_PlaneObject *_this, float size, const MR_ViewportId *id);

/// Generated from a method of class `MR::PlaneObject` named `setSizeY`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_PlaneObject_setSizeY(MR_PlaneObject *_this, float size, const MR_ViewportId *id);

// Returns point considered as base for the feature
/// Generated from a method of class `MR::PlaneObject` named `getBasePoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
MRC_API MR_Vector3f MR_PlaneObject_getBasePoint(const MR_PlaneObject *_this, const MR_ViewportId *id);

/// Generated from a method of class `MR::PlaneObject` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
/// Parameter `id` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FeatureObjectProjectPointResult_Destroy()` to free it when you're done using it.
MRC_API MR_FeatureObjectProjectPointResult *MR_PlaneObject_projectPoint(const MR_PlaneObject *_this, const MR_Vector3f *point, const MR_ViewportId *id);

/// Generated from a method of class `MR::PlaneObject` named `getAllSharedProperties`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_FeatureObjectSharedProperty *MR_PlaneObject_getAllSharedProperties(const MR_PlaneObject *_this);

#ifdef __cplusplus
} // extern "C"
#endif
