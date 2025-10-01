// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRHistoryAction.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_HistoryAction MR_HistoryAction; // Defined in `#include <MRCMesh/MRHistoryAction.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_TexturePerFace MR_TexturePerFace; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_MeshTexture_MR_TextureId MR_Vector_MR_MeshTexture_MR_TextureId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_shared_ptr_MR_Mesh MR_std_shared_ptr_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Mesh.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectMesh MR_std_shared_ptr_MR_ObjectMesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectMesh.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectMeshHolder MR_std_shared_ptr_MR_ObjectMeshHolder; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectMeshHolder.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Undo action for ObjectMesh mesh change
/// Generated from class `MR::ChangeMeshAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeMeshAction MR_ChangeMeshAction;

/// Undo action for ObjectMeshHolder uvCoords change
/// Generated from class `MR::ChangeMeshUVCoordsAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeMeshUVCoordsAction MR_ChangeMeshUVCoordsAction;

/// History action for texture change
/// Generated from class `MR::ChangeTextureAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeTextureAction MR_ChangeTextureAction;

/// Undo action for ObjectMesh points only (not topology) change
/// Generated from class `MR::ChangeMeshPointsAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeMeshPointsAction MR_ChangeMeshPointsAction;

/// Undo action for ObjectMesh topology only (not points) change
/// Generated from class `MR::ChangeMeshTopologyAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeMeshTopologyAction MR_ChangeMeshTopologyAction;

/// Undo action for ObjectMeshHolder texturePerFace change
/// Generated from class `MR::ChangeMeshTexturePerFaceAction`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::HistoryAction`
typedef struct MR_ChangeMeshTexturePerFaceAction MR_ChangeMeshTexturePerFaceAction;

/// Generated from a constructor of class `MR::ChangeMeshAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshAction *MR_ChangeMeshAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeMeshAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeMeshAction *MR_ChangeMeshAction_OffsetPtr(const MR_ChangeMeshAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeMeshAction *MR_ChangeMeshAction_OffsetMutablePtr(MR_ChangeMeshAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeMeshAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeMeshAction_UpcastTo_MR_HistoryAction(const MR_ChangeMeshAction *object);

/// Upcasts an instance of `MR::ChangeMeshAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeMeshAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeMeshAction *object);

/// use this constructor to remember object's mesh before making any changes in it
/// Generated from a constructor of class `MR::ChangeMeshAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshAction *MR_ChangeMeshAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMesh *obj);

/// use this constructor to remember object's mesh and immediately set new mesh
/// Generated from a constructor of class `MR::ChangeMeshAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshAction *MR_ChangeMeshAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMesh *obj, MR_PassBy newMesh_pass_by, MR_std_shared_ptr_MR_Mesh *newMesh);

/// Destroys a heap-allocated instance of `MR_ChangeMeshAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshAction_Destroy(const MR_ChangeMeshAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeMeshAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshAction_DestroyArray(const MR_ChangeMeshAction *_this);

/// Generated from a method of class `MR::ChangeMeshAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshAction *MR_ChangeMeshAction_AssignFromAnother(MR_ChangeMeshAction *_this, MR_PassBy _other_pass_by, MR_ChangeMeshAction *_other);

/// Generated from a method of class `MR::ChangeMeshAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeMeshAction_name(const MR_ChangeMeshAction *_this);

/// Generated from a method of class `MR::ChangeMeshAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeMeshAction_action(MR_ChangeMeshAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeMeshAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeMeshAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMesh *obj);

/// Generated from a method of class `MR::ChangeMeshAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeMeshAction_heapBytes(const MR_ChangeMeshAction *_this);

/// Generated from a constructor of class `MR::ChangeMeshUVCoordsAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshUVCoordsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshUVCoordsAction *MR_ChangeMeshUVCoordsAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeMeshUVCoordsAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeMeshUVCoordsAction *MR_ChangeMeshUVCoordsAction_OffsetPtr(const MR_ChangeMeshUVCoordsAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeMeshUVCoordsAction *MR_ChangeMeshUVCoordsAction_OffsetMutablePtr(MR_ChangeMeshUVCoordsAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeMeshUVCoordsAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeMeshUVCoordsAction_UpcastTo_MR_HistoryAction(const MR_ChangeMeshUVCoordsAction *object);

/// Upcasts an instance of `MR::ChangeMeshUVCoordsAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeMeshUVCoordsAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeMeshUVCoordsAction *object);

/// use this constructor to remember object's uv-coordinates before making any changes in them
/// Generated from a constructor of class `MR::ChangeMeshUVCoordsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshUVCoordsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshUVCoordsAction *MR_ChangeMeshUVCoordsAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMeshHolder *obj);

/// use this constructor to remember object's uv-coordinates and immediate set new value
/// Generated from a constructor of class `MR::ChangeMeshUVCoordsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newUvCoords` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshUVCoordsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshUVCoordsAction *MR_ChangeMeshUVCoordsAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMeshHolder *obj, MR_VertCoords2 *newUvCoords);

/// Destroys a heap-allocated instance of `MR_ChangeMeshUVCoordsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshUVCoordsAction_Destroy(const MR_ChangeMeshUVCoordsAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeMeshUVCoordsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshUVCoordsAction_DestroyArray(const MR_ChangeMeshUVCoordsAction *_this);

/// Generated from a method of class `MR::ChangeMeshUVCoordsAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshUVCoordsAction *MR_ChangeMeshUVCoordsAction_AssignFromAnother(MR_ChangeMeshUVCoordsAction *_this, MR_PassBy _other_pass_by, MR_ChangeMeshUVCoordsAction *_other);

/// Generated from a method of class `MR::ChangeMeshUVCoordsAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeMeshUVCoordsAction_name(const MR_ChangeMeshUVCoordsAction *_this);

/// Generated from a method of class `MR::ChangeMeshUVCoordsAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeMeshUVCoordsAction_action(MR_ChangeMeshUVCoordsAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeMeshUVCoordsAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeMeshUVCoordsAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMeshHolder *obj);

/// Generated from a method of class `MR::ChangeMeshUVCoordsAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeMeshUVCoordsAction_heapBytes(const MR_ChangeMeshUVCoordsAction *_this);

/// Generated from a constructor of class `MR::ChangeTextureAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeTextureAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeTextureAction *MR_ChangeTextureAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeTextureAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeTextureAction *MR_ChangeTextureAction_OffsetPtr(const MR_ChangeTextureAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeTextureAction *MR_ChangeTextureAction_OffsetMutablePtr(MR_ChangeTextureAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeTextureAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeTextureAction_UpcastTo_MR_HistoryAction(const MR_ChangeTextureAction *object);

/// Upcasts an instance of `MR::ChangeTextureAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeTextureAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeTextureAction *object);

/// use this constructor to remember object's textures before making any changes in them
/// Generated from a constructor of class `MR::ChangeTextureAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeTextureAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeTextureAction *MR_ChangeTextureAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMeshHolder *obj);

/// use this constructor to remember object's textures and immediate set new value
/// Generated from a constructor of class `MR::ChangeTextureAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newTextures` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeTextureAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeTextureAction *MR_ChangeTextureAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMeshHolder *obj, MR_Vector_MR_MeshTexture_MR_TextureId *newTextures);

/// Destroys a heap-allocated instance of `MR_ChangeTextureAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeTextureAction_Destroy(const MR_ChangeTextureAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeTextureAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeTextureAction_DestroyArray(const MR_ChangeTextureAction *_this);

/// Generated from a method of class `MR::ChangeTextureAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeTextureAction *MR_ChangeTextureAction_AssignFromAnother(MR_ChangeTextureAction *_this, MR_PassBy _other_pass_by, MR_ChangeTextureAction *_other);

/// Generated from a method of class `MR::ChangeTextureAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeTextureAction_name(const MR_ChangeTextureAction *_this);

/// Generated from a method of class `MR::ChangeTextureAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeTextureAction_action(MR_ChangeTextureAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeTextureAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeTextureAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMeshHolder *obj);

/// Generated from a method of class `MR::ChangeTextureAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeTextureAction_heapBytes(const MR_ChangeTextureAction *_this);

/// Generated from a constructor of class `MR::ChangeMeshPointsAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshPointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshPointsAction *MR_ChangeMeshPointsAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeMeshPointsAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeMeshPointsAction *MR_ChangeMeshPointsAction_OffsetPtr(const MR_ChangeMeshPointsAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeMeshPointsAction *MR_ChangeMeshPointsAction_OffsetMutablePtr(MR_ChangeMeshPointsAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeMeshPointsAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeMeshPointsAction_UpcastTo_MR_HistoryAction(const MR_ChangeMeshPointsAction *object);

/// Upcasts an instance of `MR::ChangeMeshPointsAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeMeshPointsAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeMeshPointsAction *object);

/// use this constructor to remember object's mesh points before making any changes in it
/// Generated from a constructor of class `MR::ChangeMeshPointsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshPointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshPointsAction *MR_ChangeMeshPointsAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMesh *obj);

/// use this constructor to remember object's mesh points and immediate set new value
/// Generated from a constructor of class `MR::ChangeMeshPointsAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newCoords` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshPointsAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshPointsAction *MR_ChangeMeshPointsAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMesh *obj, MR_VertCoords *newCoords);

/// Destroys a heap-allocated instance of `MR_ChangeMeshPointsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshPointsAction_Destroy(const MR_ChangeMeshPointsAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeMeshPointsAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshPointsAction_DestroyArray(const MR_ChangeMeshPointsAction *_this);

/// Generated from a method of class `MR::ChangeMeshPointsAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshPointsAction *MR_ChangeMeshPointsAction_AssignFromAnother(MR_ChangeMeshPointsAction *_this, MR_PassBy _other_pass_by, MR_ChangeMeshPointsAction *_other);

/// Generated from a method of class `MR::ChangeMeshPointsAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeMeshPointsAction_name(const MR_ChangeMeshPointsAction *_this);

/// Generated from a method of class `MR::ChangeMeshPointsAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeMeshPointsAction_action(MR_ChangeMeshPointsAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeMeshPointsAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeMeshPointsAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMesh *obj);

/// Generated from a method of class `MR::ChangeMeshPointsAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeMeshPointsAction_heapBytes(const MR_ChangeMeshPointsAction *_this);

/// Generated from a method of class `MR::ChangeMeshPointsAction` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_ObjectMesh *MR_ChangeMeshPointsAction_obj(const MR_ChangeMeshPointsAction *_this);

/// Generated from a method of class `MR::ChangeMeshPointsAction` named `clonePoints`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertCoords *MR_ChangeMeshPointsAction_clonePoints(const MR_ChangeMeshPointsAction *_this);

/// Generated from a constructor of class `MR::ChangeMeshTopologyAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshTopologyAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshTopologyAction *MR_ChangeMeshTopologyAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeMeshTopologyAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeMeshTopologyAction *MR_ChangeMeshTopologyAction_OffsetPtr(const MR_ChangeMeshTopologyAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeMeshTopologyAction *MR_ChangeMeshTopologyAction_OffsetMutablePtr(MR_ChangeMeshTopologyAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeMeshTopologyAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeMeshTopologyAction_UpcastTo_MR_HistoryAction(const MR_ChangeMeshTopologyAction *object);

/// Upcasts an instance of `MR::ChangeMeshTopologyAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeMeshTopologyAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeMeshTopologyAction *object);

/// use this constructor to remember object's mesh points before making any changes in it
/// Generated from a constructor of class `MR::ChangeMeshTopologyAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshTopologyAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshTopologyAction *MR_ChangeMeshTopologyAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMesh *obj);

/// use this constructor to remember object's mesh topology and immediate set new value
/// Generated from a constructor of class `MR::ChangeMeshTopologyAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newTopology` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshTopologyAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshTopologyAction *MR_ChangeMeshTopologyAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMesh *obj, MR_MeshTopology *newTopology);

/// Destroys a heap-allocated instance of `MR_ChangeMeshTopologyAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshTopologyAction_Destroy(const MR_ChangeMeshTopologyAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeMeshTopologyAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshTopologyAction_DestroyArray(const MR_ChangeMeshTopologyAction *_this);

/// Generated from a method of class `MR::ChangeMeshTopologyAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshTopologyAction *MR_ChangeMeshTopologyAction_AssignFromAnother(MR_ChangeMeshTopologyAction *_this, MR_PassBy _other_pass_by, MR_ChangeMeshTopologyAction *_other);

/// Generated from a method of class `MR::ChangeMeshTopologyAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeMeshTopologyAction_name(const MR_ChangeMeshTopologyAction *_this);

/// Generated from a method of class `MR::ChangeMeshTopologyAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeMeshTopologyAction_action(MR_ChangeMeshTopologyAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeMeshTopologyAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeMeshTopologyAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMesh *obj);

/// Generated from a method of class `MR::ChangeMeshTopologyAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeMeshTopologyAction_heapBytes(const MR_ChangeMeshTopologyAction *_this);

/// Generated from a constructor of class `MR::ChangeMeshTexturePerFaceAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshTexturePerFaceAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshTexturePerFaceAction *MR_ChangeMeshTexturePerFaceAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ChangeMeshTexturePerFaceAction *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ChangeMeshTexturePerFaceAction *MR_ChangeMeshTexturePerFaceAction_OffsetPtr(const MR_ChangeMeshTexturePerFaceAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ChangeMeshTexturePerFaceAction *MR_ChangeMeshTexturePerFaceAction_OffsetMutablePtr(MR_ChangeMeshTexturePerFaceAction *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ChangeMeshTexturePerFaceAction` to its base class `MR::HistoryAction`.
/// This version is acting on mutable pointers.
MRC_API const MR_HistoryAction *MR_ChangeMeshTexturePerFaceAction_UpcastTo_MR_HistoryAction(const MR_ChangeMeshTexturePerFaceAction *object);

/// Upcasts an instance of `MR::ChangeMeshTexturePerFaceAction` to its base class `MR::HistoryAction`.
MRC_API MR_HistoryAction *MR_ChangeMeshTexturePerFaceAction_MutableUpcastTo_MR_HistoryAction(MR_ChangeMeshTexturePerFaceAction *object);

/// use this constructor to remember object's texturePerFace data before making any changes in them
/// Generated from a constructor of class `MR::ChangeMeshTexturePerFaceAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshTexturePerFaceAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshTexturePerFaceAction *MR_ChangeMeshTexturePerFaceAction_Construct_2(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMeshHolder *obj);

/// use this constructor to remember object's texturePerFace data and immediate set new value
/// Generated from a constructor of class `MR::ChangeMeshTexturePerFaceAction`.
/// Parameter `name` can not be null.
/// If `name_end` is null, then `name` is assumed to be null-terminated.
/// Parameter `obj` can not be null. It is a single object.
/// Parameter `newTexturePerFace` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ChangeMeshTexturePerFaceAction_Destroy()` to free it when you're done using it.
MRC_API MR_ChangeMeshTexturePerFaceAction *MR_ChangeMeshTexturePerFaceAction_Construct_3(const char *name, const char *name_end, const MR_std_shared_ptr_MR_ObjectMeshHolder *obj, MR_TexturePerFace *newTexturePerFace);

/// Destroys a heap-allocated instance of `MR_ChangeMeshTexturePerFaceAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshTexturePerFaceAction_Destroy(const MR_ChangeMeshTexturePerFaceAction *_this);

/// Destroys a heap-allocated array of `MR_ChangeMeshTexturePerFaceAction`. Does nothing if the pointer is null.
MRC_API void MR_ChangeMeshTexturePerFaceAction_DestroyArray(const MR_ChangeMeshTexturePerFaceAction *_this);

/// Generated from a method of class `MR::ChangeMeshTexturePerFaceAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ChangeMeshTexturePerFaceAction *MR_ChangeMeshTexturePerFaceAction_AssignFromAnother(MR_ChangeMeshTexturePerFaceAction *_this, MR_PassBy _other_pass_by, MR_ChangeMeshTexturePerFaceAction *_other);

/// Generated from a method of class `MR::ChangeMeshTexturePerFaceAction` named `name`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ChangeMeshTexturePerFaceAction_name(const MR_ChangeMeshTexturePerFaceAction *_this);

/// Generated from a method of class `MR::ChangeMeshTexturePerFaceAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ChangeMeshTexturePerFaceAction_action(MR_ChangeMeshTexturePerFaceAction *_this, MR_HistoryAction_Type _1);

/// Generated from a method of class `MR::ChangeMeshTexturePerFaceAction` named `setObjectDirty`.
/// Parameter `obj` can not be null. It is a single object.
MRC_API void MR_ChangeMeshTexturePerFaceAction_setObjectDirty(const MR_std_shared_ptr_MR_ObjectMeshHolder *obj);

/// Generated from a method of class `MR::ChangeMeshTexturePerFaceAction` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ChangeMeshTexturePerFaceAction_heapBytes(const MR_ChangeMeshTexturePerFaceAction *_this);

#ifdef __cplusplus
} // extern "C"
#endif
