// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Line3f MR_Line3f; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_MeshIntersectionResult MR_MeshIntersectionResult; // Defined in `#include <MRCMesh/MRMeshIntersect.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectMeshHolder MR_ObjectMeshHolder; // Defined in `#include <MRCMesh/MRObjectMeshHolder.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Mesh MR_std_shared_ptr_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Mesh.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectMesh MR_std_shared_ptr_MR_ObjectMesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectMesh.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_ObjectMesh MR_std_vector_std_shared_ptr_MR_ObjectMesh; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_ObjectMesh.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


/// an object that stores a mesh
/// Generated from class `MR::ObjectMesh`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ObjectMeshHolder`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_ObjectMesh MR_ObjectMesh;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectMesh_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectMesh *MR_ObjectMesh_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectMesh_DestroyArray()`.
/// Use `MR_ObjectMesh_OffsetMutablePtr()` and `MR_ObjectMesh_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectMesh *MR_ObjectMesh_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectMesh *MR_ObjectMesh_OffsetPtr(const MR_ObjectMesh *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectMesh *MR_ObjectMesh_OffsetMutablePtr(MR_ObjectMesh *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectMesh` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectMesh_UpcastTo_MR_Object(const MR_ObjectMesh *object);

/// Upcasts an instance of `MR::ObjectMesh` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectMesh_MutableUpcastTo_MR_Object(MR_ObjectMesh *object);

/// Upcasts an instance of `MR::ObjectMesh` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectMesh_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectMesh *object);

/// Upcasts an instance of `MR::ObjectMesh` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectMesh_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectMesh *object);

/// Upcasts an instance of `MR::ObjectMesh` to its base class `MR::ObjectMeshHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMeshHolder *MR_ObjectMesh_UpcastTo_MR_ObjectMeshHolder(const MR_ObjectMesh *object);

/// Upcasts an instance of `MR::ObjectMesh` to its base class `MR::ObjectMeshHolder`.
MRC_API MR_ObjectMeshHolder *MR_ObjectMesh_MutableUpcastTo_MR_ObjectMeshHolder(MR_ObjectMesh *object);

/// Upcasts an instance of `MR::ObjectMesh` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectMesh_UpcastTo_MR_VisualObject(const MR_ObjectMesh *object);

/// Upcasts an instance of `MR::ObjectMesh` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectMesh_MutableUpcastTo_MR_VisualObject(MR_ObjectMesh *object);

/// Generated from a constructor of class `MR::ObjectMesh`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectMesh_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectMesh *MR_ObjectMesh_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectMesh *_other);

/// Destroys a heap-allocated instance of `MR_ObjectMesh`. Does nothing if the pointer is null.
MRC_API void MR_ObjectMesh_Destroy(const MR_ObjectMesh *_this);

/// Destroys a heap-allocated array of `MR_ObjectMesh`. Does nothing if the pointer is null.
MRC_API void MR_ObjectMesh_DestroyArray(const MR_ObjectMesh *_this);

/// Generated from a method of class `MR::ObjectMesh` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectMesh *MR_ObjectMesh_AssignFromAnother(MR_ObjectMesh *_this, MR_PassBy _other_pass_by, MR_ObjectMesh *_other);

/// Generated from a method of class `MR::ObjectMesh` named `TypeName`.
MRC_API const char *MR_ObjectMesh_TypeName(void);

/// Generated from a method of class `MR::ObjectMesh` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectMesh_typeName(const MR_ObjectMesh *_this);

/// returns variable mesh, if const mesh is needed use `mesh()` instead
/// Generated from a method of class `MR::ObjectMesh` named `varMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_Mesh *MR_ObjectMesh_varMesh(MR_ObjectMesh *_this);

/// sets given mesh to this, resets selection and creases
/// Generated from a method of class `MR::ObjectMesh` named `setMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectMesh_setMesh(MR_ObjectMesh *_this, MR_PassBy mesh_pass_by, MR_std_shared_ptr_MR_Mesh *mesh);

/// sets given mesh to this, and returns back previous mesh of this;
/// does not touch selection or creases
/// Generated from a method of class `MR::ObjectMesh` named `updateMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Mesh *MR_ObjectMesh_updateMesh(MR_ObjectMesh *_this, MR_PassBy mesh_pass_by, MR_std_shared_ptr_MR_Mesh *mesh);

/// Generated from a method of class `MR::ObjectMesh` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_ObjectMesh_getInfoLines(const MR_ObjectMesh *_this);

/// Generated from a method of class `MR::ObjectMesh` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectMesh_getClassName(const MR_ObjectMesh *_this);

/// Generated from a method of class `MR::ObjectMesh` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectMesh_getClassNameInPlural(const MR_ObjectMesh *_this);

/// Generated from a method of class `MR::ObjectMesh` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectMesh_clone(const MR_ObjectMesh *_this);

/// Generated from a method of class `MR::ObjectMesh` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectMesh_shallowClone(const MR_ObjectMesh *_this);

/// Generated from a method of class `MR::ObjectMesh` named `setDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `invalidateCaches` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjectMesh_setDirtyFlags(MR_ObjectMesh *_this, uint32_t mask, const bool *invalidateCaches);

/// given ray in world coordinates, e.g. obtained from Viewport::unprojectPixelRay;
/// finds its intersection with the mesh of this object considering its transformation relative to the world;
/// it is inefficient to call this function for many rays, because it computes world-to-local xf every time
/// Generated from a method of class `MR::ObjectMesh` named `worldRayIntersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `worldRay` can not be null. It is a single object.
/// Parameter `region` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshIntersectionResult_Destroy()` to free it when you're done using it.
MRC_API MR_MeshIntersectionResult *MR_ObjectMesh_worldRayIntersection(const MR_ObjectMesh *_this, const MR_Line3f *worldRay, const MR_FaceBitSet *region);

/// constructs new ObjectMesh containing the union of valid data from all input objects
/// Generated from function `MR::merge`.
/// Parameter `objsMesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectMesh_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectMesh *MR_merge_std_vector_std_shared_ptr_MR_ObjectMesh(const MR_std_vector_std_shared_ptr_MR_ObjectMesh *objsMesh);

/// constructs new ObjectMesh containing the region of data from input object
/// does not copy selection
/// Generated from function `MR::cloneRegion`.
/// Parameter `objMesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `copyTexture` has a default argument: `true`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectMesh_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectMesh *MR_cloneRegion_3(const MR_std_shared_ptr_MR_ObjectMesh *objMesh, const MR_FaceBitSet *region, const bool *copyTexture);

#ifdef __cplusplus
} // extern "C"
#endif
