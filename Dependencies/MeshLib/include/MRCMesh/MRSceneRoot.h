// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_std_filesystem_path MR_std_filesystem_path; // Defined in `#include <MRCMisc/std_filesystem_path.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_MR_SceneRootObject MR_std_shared_ptr_MR_SceneRootObject; // Defined in `#include <MRCMisc/std_shared_ptr_MR_SceneRootObject.h>`.
typedef struct MR_std_shared_ptr_const_MR_SceneRootObject MR_std_shared_ptr_const_MR_SceneRootObject; // Defined in `#include <MRCMisc/std_shared_ptr_const_MR_SceneRootObject.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Object that is parent of all scene
/// Generated from class `MR::SceneRootObject`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::Object`
///   Indirect: (non-virtual)
///     `MR::ObjectChildrenHolder`
typedef struct MR_SceneRootObject MR_SceneRootObject;

/// Singleton to store scene root object
/// Generated from class `MR::SceneRoot`.
typedef struct MR_SceneRoot MR_SceneRoot;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SceneRootObject_Destroy()` to free it when you're done using it.
MRC_API MR_SceneRootObject *MR_SceneRootObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SceneRootObject_DestroyArray()`.
/// Use `MR_SceneRootObject_OffsetMutablePtr()` and `MR_SceneRootObject_OffsetPtr()` to access the array elements.
MRC_API MR_SceneRootObject *MR_SceneRootObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SceneRootObject *MR_SceneRootObject_OffsetPtr(const MR_SceneRootObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SceneRootObject *MR_SceneRootObject_OffsetMutablePtr(MR_SceneRootObject *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::SceneRootObject` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_SceneRootObject_UpcastTo_MR_Object(const MR_SceneRootObject *object);

/// Upcasts an instance of `MR::SceneRootObject` to its base class `MR::Object`.
MRC_API MR_Object *MR_SceneRootObject_MutableUpcastTo_MR_Object(MR_SceneRootObject *object);

/// Upcasts an instance of `MR::SceneRootObject` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_SceneRootObject_UpcastTo_MR_ObjectChildrenHolder(const MR_SceneRootObject *object);

/// Upcasts an instance of `MR::SceneRootObject` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_SceneRootObject_MutableUpcastTo_MR_ObjectChildrenHolder(MR_SceneRootObject *object);

/// Generated from a constructor of class `MR::SceneRootObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SceneRootObject_Destroy()` to free it when you're done using it.
MRC_API MR_SceneRootObject *MR_SceneRootObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SceneRootObject *_other);

/// Destroys a heap-allocated instance of `MR_SceneRootObject`. Does nothing if the pointer is null.
MRC_API void MR_SceneRootObject_Destroy(const MR_SceneRootObject *_this);

/// Destroys a heap-allocated array of `MR_SceneRootObject`. Does nothing if the pointer is null.
MRC_API void MR_SceneRootObject_DestroyArray(const MR_SceneRootObject *_this);

/// Generated from a method of class `MR::SceneRootObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SceneRootObject *MR_SceneRootObject_AssignFromAnother(MR_SceneRootObject *_this, MR_PassBy _other_pass_by, MR_SceneRootObject *_other);

/// Generated from a method of class `MR::SceneRootObject` named `TypeName`.
MRC_API const char *MR_SceneRootObject_TypeName(void);

/// Generated from a method of class `MR::SceneRootObject` named `RootName`.
MRC_API const char *MR_SceneRootObject_RootName(void);

/// Generated from a method of class `MR::SceneRootObject` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_SceneRootObject_getClassName(const MR_SceneRootObject *_this);

/// Generated from a method of class `MR::SceneRootObject` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_SceneRootObject_getClassNameInPlural(const MR_SceneRootObject *_this);

/// Generated from a method of class `MR::SceneRootObject` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_SceneRootObject_typeName(const MR_SceneRootObject *_this);

/// Generated from a method of class `MR::SceneRootObject` named `setAncillary`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SceneRootObject_setAncillary(MR_SceneRootObject *_this, bool _1);

/// Generated from a method of class `MR::SceneRootObject` named `select`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SceneRootObject_select(MR_SceneRootObject *_this, bool _1);

/// Generated from a method of class `MR::SceneRootObject` named `setName`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null.
/// If `_1_end` is null, then `_1` is assumed to be null-terminated.
MRC_API void MR_SceneRootObject_setName(MR_SceneRootObject *_this, const char *_1, const char *_1_end);

/// Generated from a method of class `MR::SceneRootObject` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_SceneRootObject_clone(const MR_SceneRootObject *_this);

/// same as clone but returns correct type
/// Generated from a method of class `MR::SceneRootObject` named `cloneRoot`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_SceneRootObject_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_SceneRootObject *MR_SceneRootObject_cloneRoot(const MR_SceneRootObject *_this);

/// Removes all `obj` children and attaches it to newly created `SceneRootObject`
/// note that it does not respect `obj` xf
/// Generated from function `MR::createRootFormObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_SceneRootObject_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_SceneRootObject *MR_createRootFormObject(MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_Object *obj);

/// Generated from a constructor of class `MR::SceneRoot`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SceneRoot_Destroy()` to free it when you're done using it.
MRC_API MR_SceneRoot *MR_SceneRoot_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SceneRoot *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SceneRoot *MR_SceneRoot_OffsetPtr(const MR_SceneRoot *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SceneRoot *MR_SceneRoot_OffsetMutablePtr(MR_SceneRoot *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_SceneRoot`. Does nothing if the pointer is null.
MRC_API void MR_SceneRoot_Destroy(const MR_SceneRoot *_this);

/// Destroys a heap-allocated array of `MR_SceneRoot`. Does nothing if the pointer is null.
MRC_API void MR_SceneRoot_DestroyArray(const MR_SceneRoot *_this);

/// Generated from a method of class `MR::SceneRoot` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SceneRoot *MR_SceneRoot_AssignFromAnother(MR_SceneRoot *_this, MR_PassBy _other_pass_by, MR_SceneRoot *_other);

/// Generated from a method of class `MR::SceneRoot` named `get`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SceneRootObject *MR_SceneRoot_get(void);

/// Generated from a method of class `MR::SceneRoot` named `getSharedPtr`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_SceneRootObject *MR_SceneRoot_getSharedPtr(void);

/// Generated from a method of class `MR::SceneRoot` named `setScenePath`.
/// Parameter `scenePath` is a UTF-8 encoded filesystem path.
MRC_API void MR_SceneRoot_setScenePath(const char *scenePath, const char *scenePath_end);

/// Generated from a method of class `MR::SceneRoot` named `constGet`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SceneRootObject *MR_SceneRoot_constGet(void);

/// Generated from a method of class `MR::SceneRoot` named `constGetSharedPtr`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_const_MR_SceneRootObject_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_const_MR_SceneRootObject *MR_SceneRoot_constGetSharedPtr(void);

/// Generated from a method of class `MR::SceneRoot` named `getScenePath`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_filesystem_path *MR_SceneRoot_getScenePath(void);

#ifdef __cplusplus
} // extern "C"
#endif
