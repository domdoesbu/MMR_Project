// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_Object MR_std_vector_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_Object.h>`.


typedef int32_t MR_ObjectSelectivityType;
enum // MR_ObjectSelectivityType
{
    MR_ObjectSelectivityType_Selectable = 0,
    MR_ObjectSelectivityType_Selected = 1,
    MR_ObjectSelectivityType_Any = 2,
};

/// if input object is of given type then returns another pointer on it
/// Generated from function `MR::asSelectivityType<MR::Object>`.
/// Parameter `type` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_asSelectivityType(MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_Object *obj, const MR_ObjectSelectivityType *type);

/// Traverses tree and collect objects of given type excluding root
/// returns vector
/// Generated from function `MR::getAllObjectsInTree<MR::Object>`.
/// Parameter `type` is a single object.
/// Parameter `type` has a default argument: `ObjectSelectivityType::Selectable`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_shared_ptr_MR_Object *MR_getAllObjectsInTree(MR_Object *root, const MR_ObjectSelectivityType *type);

/// Returns all topmost visible objects of given type (if an object is returned, its children are not) excluding root
/// Generated from function `MR::getTopmostVisibleObjects<MR::Object>`.
/// Parameter `type` is a single object.
/// Parameter `type` has a default argument: `ObjectSelectivityType::Selectable`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_shared_ptr_MR_Object *MR_getTopmostVisibleObjects(MR_Object *root, const MR_ObjectSelectivityType *type);

/// Returns all topmost objects of given type (if an object is returned, its children are not) excluding root
/// Generated from function `MR::getTopmostObjects<MR::Object>`.
/// Parameter `type` is a single object.
/// Parameter `type` has a default argument: `ObjectSelectivityType::Selectable`, pass a null pointer to use it.
/// Parameter `visibilityCheck` has a default argument: `false`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_shared_ptr_MR_Object *MR_getTopmostObjects(MR_Object *root, const MR_ObjectSelectivityType *type, const bool *visibilityCheck);

/// return first object of given type in depth-first traverse order excluding root
/// Generated from function `MR::getDepthFirstObject<MR::Object>`.
/// Parameter `type` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_getDepthFirstObject(MR_Object *root, const MR_ObjectSelectivityType *type);

/// Generated from function `MR::objectHasSelectableChildren`.
/// Parameter `object` can not be null. It is a single object.
MRC_API bool MR_objectHasSelectableChildren(const MR_Object *object);

#ifdef __cplusplus
} // extern "C"
#endif
