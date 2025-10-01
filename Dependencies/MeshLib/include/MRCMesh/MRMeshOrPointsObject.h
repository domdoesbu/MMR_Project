// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_MeshOrPoints MR_MeshOrPoints; // Defined in `#include <MRCMesh/MRMeshOrPoints.h>`.
typedef struct MR_ObjectMesh MR_ObjectMesh; // Defined in `#include <MRCMesh/MRObjectMesh.h>`.
typedef struct MR_ObjectPoints MR_ObjectPoints; // Defined in `#include <MRCMesh/MRObjectPoints.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectMesh MR_std_shared_ptr_MR_ObjectMesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectMesh.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectPoints MR_std_shared_ptr_MR_ObjectPoints; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectPoints.h>`.
typedef struct MR_std_shared_ptr_MR_VisualObject MR_std_shared_ptr_MR_VisualObject; // Defined in `#include <MRCMisc/std_shared_ptr_MR_VisualObject.h>`.


/// This class can hold either ObjectMesh or ObjectPoint
/// It is used for convenient storage and operation with any of them
/// Generated from class `MR::MeshOrPointsObject`.
typedef struct MR_MeshOrPointsObject MR_MeshOrPointsObject;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPointsObject_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPointsObject *MR_MeshOrPointsObject_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshOrPointsObject_DestroyArray()`.
/// Use `MR_MeshOrPointsObject_OffsetMutablePtr()` and `MR_MeshOrPointsObject_OffsetPtr()` to access the array elements.
MRC_API MR_MeshOrPointsObject *MR_MeshOrPointsObject_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshOrPointsObject *MR_MeshOrPointsObject_OffsetPtr(const MR_MeshOrPointsObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshOrPointsObject *MR_MeshOrPointsObject_OffsetMutablePtr(MR_MeshOrPointsObject *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshOrPointsObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPointsObject_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPointsObject *MR_MeshOrPointsObject_ConstructFromAnother(MR_PassBy _other_pass_by, MR_MeshOrPointsObject *_other);

/// construct, automatically detecting the object type (ObjectMesh or ObjectPoint)
/// if set an another type, will be reset
/// Generated from a constructor of class `MR::MeshOrPointsObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPointsObject_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPointsObject *MR_MeshOrPointsObject_Construct_std_shared_ptr_MR_VisualObject(MR_PassBy vo_pass_by, MR_std_shared_ptr_MR_VisualObject *vo);

/// Generated from a constructor of class `MR::MeshOrPointsObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPointsObject_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPointsObject *MR_MeshOrPointsObject_Construct_std_shared_ptr_MR_ObjectMesh(MR_PassBy om_pass_by, MR_std_shared_ptr_MR_ObjectMesh *om);

/// Generated from a constructor of class `MR::MeshOrPointsObject`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPointsObject_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPointsObject *MR_MeshOrPointsObject_Construct_std_shared_ptr_MR_ObjectPoints(MR_PassBy op_pass_by, MR_std_shared_ptr_MR_ObjectPoints *op);

/// Destroys a heap-allocated instance of `MR_MeshOrPointsObject`. Does nothing if the pointer is null.
MRC_API void MR_MeshOrPointsObject_Destroy(const MR_MeshOrPointsObject *_this);

/// Destroys a heap-allocated array of `MR_MeshOrPointsObject`. Does nothing if the pointer is null.
MRC_API void MR_MeshOrPointsObject_DestroyArray(const MR_MeshOrPointsObject *_this);

/// Generated from a method of class `MR::MeshOrPointsObject` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshOrPointsObject *MR_MeshOrPointsObject_AssignFromAnother(MR_MeshOrPointsObject *_this, MR_PassBy _other_pass_by, MR_MeshOrPointsObject *_other);

/// set to hold ObjectMesh
/// Generated from a method of class `MR::MeshOrPointsObject` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshOrPointsObject_set_std_shared_ptr_MR_ObjectMesh(MR_MeshOrPointsObject *_this, MR_PassBy om_pass_by, MR_std_shared_ptr_MR_ObjectMesh *om);

/// if holding ObjectMesh, return pointer to it, otherwise return nullptr
/// Generated from a method of class `MR::MeshOrPointsObject` named `asObjectMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjectMesh *MR_MeshOrPointsObject_asObjectMesh(const MR_MeshOrPointsObject *_this);

/// set to hold ObjectPoints
/// Generated from a method of class `MR::MeshOrPointsObject` named `set`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshOrPointsObject_set_std_shared_ptr_MR_ObjectPoints(MR_MeshOrPointsObject *_this, MR_PassBy op_pass_by, MR_std_shared_ptr_MR_ObjectPoints *op);

/// if holding ObjectPoints, return pointer to it, otherwise return nullptr
/// Generated from a method of class `MR::MeshOrPointsObject` named `asObjectPoints`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_ObjectPoints *MR_MeshOrPointsObject_asObjectPoints(const MR_MeshOrPointsObject *_this);

/// Generated from a method of class `MR::MeshOrPointsObject` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshOrPointsObject_reset(MR_MeshOrPointsObject *_this);

/// Generated from a method of class `MR::MeshOrPointsObject` named `operator->`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_VisualObject *MR_MeshOrPointsObject_arrow(const MR_MeshOrPointsObject *_this);

/// Generated from a method of class `MR::MeshOrPointsObject` named `get`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_VisualObject *MR_MeshOrPointsObject_get(const MR_MeshOrPointsObject *_this);

/// Generated from a method of class `MR::MeshOrPointsObject` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_equal_MR_MeshOrPointsObject_std_shared_ptr_MR_VisualObject(const MR_MeshOrPointsObject *_this, MR_PassBy other_pass_by, MR_std_shared_ptr_MR_VisualObject *other);

/// get class that hold either mesh part or point cloud
/// Generated from a method of class `MR::MeshOrPointsObject` named `meshOrPoints`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshOrPoints_Destroy()` to free it when you're done using it.
MRC_API MR_MeshOrPoints *MR_MeshOrPointsObject_meshOrPoints(const MR_MeshOrPointsObject *_this);

#ifdef __cplusplus
} // extern "C"
#endif
