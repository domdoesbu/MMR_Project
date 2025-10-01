// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceColors MR_FaceColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_TexturePerFace MR_TexturePerFace; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertColors MR_VertColors; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertCoords2 MR_VertCoords2; // Defined in `#include <MRCMesh/MRVector.h>`.


// the attribute data of the mesh that needs to be updated
/// Generated from class `MR::MeshAttributesToUpdate`.
typedef struct MR_MeshAttributesToUpdate MR_MeshAttributesToUpdate;

/// Returns a pointer to a member variable of class `MR::MeshAttributesToUpdate` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 *const *MR_MeshAttributesToUpdate_Get_uvCoords(const MR_MeshAttributesToUpdate *_this);

/// Modifies a member variable of class `MR::MeshAttributesToUpdate` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshAttributesToUpdate_Set_uvCoords(MR_MeshAttributesToUpdate *_this, MR_VertCoords2 *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshAttributesToUpdate` named `uvCoords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertCoords2 **MR_MeshAttributesToUpdate_GetMutable_uvCoords(MR_MeshAttributesToUpdate *_this);

/// Returns a pointer to a member variable of class `MR::MeshAttributesToUpdate` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors *const *MR_MeshAttributesToUpdate_Get_colorMap(const MR_MeshAttributesToUpdate *_this);

/// Modifies a member variable of class `MR::MeshAttributesToUpdate` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshAttributesToUpdate_Set_colorMap(MR_MeshAttributesToUpdate *_this, MR_VertColors *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshAttributesToUpdate` named `colorMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertColors **MR_MeshAttributesToUpdate_GetMutable_colorMap(MR_MeshAttributesToUpdate *_this);

/// Returns a pointer to a member variable of class `MR::MeshAttributesToUpdate` named `texturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TexturePerFace *const *MR_MeshAttributesToUpdate_Get_texturePerFace(const MR_MeshAttributesToUpdate *_this);

/// Modifies a member variable of class `MR::MeshAttributesToUpdate` named `texturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshAttributesToUpdate_Set_texturePerFace(MR_MeshAttributesToUpdate *_this, MR_TexturePerFace *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshAttributesToUpdate` named `texturePerFace`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TexturePerFace **MR_MeshAttributesToUpdate_GetMutable_texturePerFace(MR_MeshAttributesToUpdate *_this);

/// Returns a pointer to a member variable of class `MR::MeshAttributesToUpdate` named `faceColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceColors *const *MR_MeshAttributesToUpdate_Get_faceColors(const MR_MeshAttributesToUpdate *_this);

/// Modifies a member variable of class `MR::MeshAttributesToUpdate` named `faceColors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshAttributesToUpdate_Set_faceColors(MR_MeshAttributesToUpdate *_this, MR_FaceColors *value);

/// Returns a mutable pointer to a member variable of class `MR::MeshAttributesToUpdate` named `faceColors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceColors **MR_MeshAttributesToUpdate_GetMutable_faceColors(MR_MeshAttributesToUpdate *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshAttributesToUpdate_Destroy()` to free it when you're done using it.
MRC_API MR_MeshAttributesToUpdate *MR_MeshAttributesToUpdate_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MeshAttributesToUpdate_DestroyArray()`.
/// Use `MR_MeshAttributesToUpdate_OffsetMutablePtr()` and `MR_MeshAttributesToUpdate_OffsetPtr()` to access the array elements.
MRC_API MR_MeshAttributesToUpdate *MR_MeshAttributesToUpdate_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MeshAttributesToUpdate` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshAttributesToUpdate_Destroy()` to free it when you're done using it.
MRC_API MR_MeshAttributesToUpdate *MR_MeshAttributesToUpdate_ConstructFrom(MR_VertCoords2 *uvCoords, MR_VertColors *colorMap, MR_TexturePerFace *texturePerFace, MR_FaceColors *faceColors);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshAttributesToUpdate *MR_MeshAttributesToUpdate_OffsetPtr(const MR_MeshAttributesToUpdate *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshAttributesToUpdate *MR_MeshAttributesToUpdate_OffsetMutablePtr(MR_MeshAttributesToUpdate *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MeshAttributesToUpdate`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshAttributesToUpdate_Destroy()` to free it when you're done using it.
MRC_API MR_MeshAttributesToUpdate *MR_MeshAttributesToUpdate_ConstructFromAnother(const MR_MeshAttributesToUpdate *_other);

/// Destroys a heap-allocated instance of `MR_MeshAttributesToUpdate`. Does nothing if the pointer is null.
MRC_API void MR_MeshAttributesToUpdate_Destroy(const MR_MeshAttributesToUpdate *_this);

/// Destroys a heap-allocated array of `MR_MeshAttributesToUpdate`. Does nothing if the pointer is null.
MRC_API void MR_MeshAttributesToUpdate_DestroyArray(const MR_MeshAttributesToUpdate *_this);

/// Generated from a method of class `MR::MeshAttributesToUpdate` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshAttributesToUpdate *MR_MeshAttributesToUpdate_AssignFromAnother(MR_MeshAttributesToUpdate *_this, const MR_MeshAttributesToUpdate *_other);

#ifdef __cplusplus
} // extern "C"
#endif
