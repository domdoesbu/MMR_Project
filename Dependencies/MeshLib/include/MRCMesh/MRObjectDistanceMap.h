// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectMeshHolder MR_ObjectMeshHolder; // Defined in `#include <MRCMesh/MRObjectMeshHolder.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_shared_ptr_MR_DistanceMap MR_std_shared_ptr_MR_DistanceMap; // Defined in `#include <MRCMisc/std_shared_ptr_MR_DistanceMap.h>`.
typedef struct MR_std_shared_ptr_MR_Mesh MR_std_shared_ptr_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Mesh.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


/// This class stores information about distance map object
/// Generated from class `MR::ObjectDistanceMap`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ObjectMeshHolder`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_ObjectDistanceMap MR_ObjectDistanceMap;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectDistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectDistanceMap *MR_ObjectDistanceMap_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectDistanceMap_DestroyArray()`.
/// Use `MR_ObjectDistanceMap_OffsetMutablePtr()` and `MR_ObjectDistanceMap_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectDistanceMap *MR_ObjectDistanceMap_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectDistanceMap *MR_ObjectDistanceMap_OffsetPtr(const MR_ObjectDistanceMap *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectDistanceMap *MR_ObjectDistanceMap_OffsetMutablePtr(MR_ObjectDistanceMap *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectDistanceMap` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectDistanceMap_UpcastTo_MR_Object(const MR_ObjectDistanceMap *object);

/// Upcasts an instance of `MR::ObjectDistanceMap` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectDistanceMap_MutableUpcastTo_MR_Object(MR_ObjectDistanceMap *object);

/// Upcasts an instance of `MR::ObjectDistanceMap` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectDistanceMap_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectDistanceMap *object);

/// Upcasts an instance of `MR::ObjectDistanceMap` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectDistanceMap_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectDistanceMap *object);

/// Upcasts an instance of `MR::ObjectDistanceMap` to its base class `MR::ObjectMeshHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMeshHolder *MR_ObjectDistanceMap_UpcastTo_MR_ObjectMeshHolder(const MR_ObjectDistanceMap *object);

/// Upcasts an instance of `MR::ObjectDistanceMap` to its base class `MR::ObjectMeshHolder`.
MRC_API MR_ObjectMeshHolder *MR_ObjectDistanceMap_MutableUpcastTo_MR_ObjectMeshHolder(MR_ObjectDistanceMap *object);

/// Upcasts an instance of `MR::ObjectDistanceMap` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectDistanceMap_UpcastTo_MR_VisualObject(const MR_ObjectDistanceMap *object);

/// Upcasts an instance of `MR::ObjectDistanceMap` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectDistanceMap_MutableUpcastTo_MR_VisualObject(MR_ObjectDistanceMap *object);

/// Generated from a constructor of class `MR::ObjectDistanceMap`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectDistanceMap_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectDistanceMap *MR_ObjectDistanceMap_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectDistanceMap *_other);

/// Destroys a heap-allocated instance of `MR_ObjectDistanceMap`. Does nothing if the pointer is null.
MRC_API void MR_ObjectDistanceMap_Destroy(const MR_ObjectDistanceMap *_this);

/// Destroys a heap-allocated array of `MR_ObjectDistanceMap`. Does nothing if the pointer is null.
MRC_API void MR_ObjectDistanceMap_DestroyArray(const MR_ObjectDistanceMap *_this);

/// Generated from a method of class `MR::ObjectDistanceMap` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectDistanceMap *MR_ObjectDistanceMap_AssignFromAnother(MR_ObjectDistanceMap *_this, MR_PassBy _other_pass_by, MR_ObjectDistanceMap *_other);

/// Generated from a method of class `MR::ObjectDistanceMap` named `TypeName`.
MRC_API const char *MR_ObjectDistanceMap_TypeName(void);

/// Generated from a method of class `MR::ObjectDistanceMap` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectDistanceMap_typeName(const MR_ObjectDistanceMap *_this);

/// Generated from a method of class `MR::ObjectDistanceMap` named `applyScale`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectDistanceMap_applyScale(MR_ObjectDistanceMap *_this, float scaleFactor);

/// Generated from a method of class `MR::ObjectDistanceMap` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectDistanceMap_clone(const MR_ObjectDistanceMap *_this);

/// Generated from a method of class `MR::ObjectDistanceMap` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectDistanceMap_shallowClone(const MR_ObjectDistanceMap *_this);

/// Generated from a method of class `MR::ObjectDistanceMap` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_ObjectDistanceMap_getInfoLines(const MR_ObjectDistanceMap *_this);

/// Generated from a method of class `MR::ObjectDistanceMap` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectDistanceMap_getClassName(const MR_ObjectDistanceMap *_this);

/// Generated from a method of class `MR::ObjectDistanceMap` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectDistanceMap_getClassNameInPlural(const MR_ObjectDistanceMap *_this);

/// rebuilds the mesh;
/// if it is executed in the rendering stream then you can set the needUpdateMesh = true
/// otherwise you should set the needUpdateMesh = false and call the function calculateMesh
/// and after finishing in the rendering stream, call the function updateMesh
/// Generated from a method of class `MR::ObjectDistanceMap` named `setDistanceMap`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `dmap` can not be null. It is a single object.
/// Parameter `dmap2local` can not be null. It is a single object.
/// Parameter `needUpdateMesh` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_ObjectDistanceMap_setDistanceMap(MR_ObjectDistanceMap *_this, const MR_std_shared_ptr_MR_DistanceMap *dmap, const MR_AffineXf3f *dmap2local, const bool *needUpdateMesh, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// creates a grid for this object
/// Generated from a method of class `MR::ObjectDistanceMap` named `calculateMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Mesh *MR_ObjectDistanceMap_calculateMesh(const MR_ObjectDistanceMap *_this, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// updates the grid to the current one
/// Generated from a method of class `MR::ObjectDistanceMap` named `updateMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API void MR_ObjectDistanceMap_updateMesh(MR_ObjectDistanceMap *_this, const MR_std_shared_ptr_MR_Mesh *mesh);

/// Generated from a method of class `MR::ObjectDistanceMap` named `getDistanceMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_DistanceMap *MR_ObjectDistanceMap_getDistanceMap(const MR_ObjectDistanceMap *_this);

/// Generated from a method of class `MR::ObjectDistanceMap` named `hasModel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectDistanceMap_hasModel(const MR_ObjectDistanceMap *_this);

/// unlike the name, actually it is the transformation from distance map in local space
/// Generated from a method of class `MR::ObjectDistanceMap` named `getToWorldParameters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *MR_ObjectDistanceMap_getToWorldParameters(const MR_ObjectDistanceMap *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::ObjectDistanceMap` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectDistanceMap_heapBytes(const MR_ObjectDistanceMap *_this);

#ifdef __cplusplus
} // extern "C"
#endif
