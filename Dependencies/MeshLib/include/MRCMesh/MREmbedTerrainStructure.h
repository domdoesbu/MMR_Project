// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.


// Parameters of structure embedding in terrain
/// Generated from class `MR::EmbeddedStructureParameters`.
typedef struct MR_EmbeddedStructureParameters MR_EmbeddedStructureParameters;

// angle of fill cone (mound)
/// Returns a pointer to a member variable of class `MR::EmbeddedStructureParameters` named `fillAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EmbeddedStructureParameters_Get_fillAngle(const MR_EmbeddedStructureParameters *_this);

// angle of fill cone (mound)
/// Modifies a member variable of class `MR::EmbeddedStructureParameters` named `fillAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EmbeddedStructureParameters_Set_fillAngle(MR_EmbeddedStructureParameters *_this, float value);

// angle of fill cone (mound)
/// Returns a mutable pointer to a member variable of class `MR::EmbeddedStructureParameters` named `fillAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EmbeddedStructureParameters_GetMutable_fillAngle(MR_EmbeddedStructureParameters *_this);

// angle of cut cone (pit)
/// Returns a pointer to a member variable of class `MR::EmbeddedStructureParameters` named `cutAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EmbeddedStructureParameters_Get_cutAngle(const MR_EmbeddedStructureParameters *_this);

// angle of cut cone (pit)
/// Modifies a member variable of class `MR::EmbeddedStructureParameters` named `cutAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EmbeddedStructureParameters_Set_cutAngle(MR_EmbeddedStructureParameters *_this, float value);

// angle of cut cone (pit)
/// Returns a mutable pointer to a member variable of class `MR::EmbeddedStructureParameters` named `cutAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EmbeddedStructureParameters_GetMutable_cutAngle(MR_EmbeddedStructureParameters *_this);

// 20 deg
/// Returns a pointer to a member variable of class `MR::EmbeddedStructureParameters` named `minAnglePrecision`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EmbeddedStructureParameters_Get_minAnglePrecision(const MR_EmbeddedStructureParameters *_this);

// 20 deg
/// Modifies a member variable of class `MR::EmbeddedStructureParameters` named `minAnglePrecision`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EmbeddedStructureParameters_Set_minAnglePrecision(MR_EmbeddedStructureParameters *_this, float value);

// 20 deg
/// Returns a mutable pointer to a member variable of class `MR::EmbeddedStructureParameters` named `minAnglePrecision`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EmbeddedStructureParameters_GetMutable_minAnglePrecision(MR_EmbeddedStructureParameters *_this);

// optional out new faces of embedded structure 
/// Returns a pointer to a member variable of class `MR::EmbeddedStructureParameters` named `outStructFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_EmbeddedStructureParameters_Get_outStructFaces(const MR_EmbeddedStructureParameters *_this);

// optional out new faces of embedded structure 
/// Modifies a member variable of class `MR::EmbeddedStructureParameters` named `outStructFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EmbeddedStructureParameters_Set_outStructFaces(MR_EmbeddedStructureParameters *_this, MR_FaceBitSet *value);

// optional out new faces of embedded structure 
/// Returns a mutable pointer to a member variable of class `MR::EmbeddedStructureParameters` named `outStructFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_EmbeddedStructureParameters_GetMutable_outStructFaces(MR_EmbeddedStructureParameters *_this);

// optional out new faces of fill part
/// Returns a pointer to a member variable of class `MR::EmbeddedStructureParameters` named `outFillFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_EmbeddedStructureParameters_Get_outFillFaces(const MR_EmbeddedStructureParameters *_this);

// optional out new faces of fill part
/// Modifies a member variable of class `MR::EmbeddedStructureParameters` named `outFillFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EmbeddedStructureParameters_Set_outFillFaces(MR_EmbeddedStructureParameters *_this, MR_FaceBitSet *value);

// optional out new faces of fill part
/// Returns a mutable pointer to a member variable of class `MR::EmbeddedStructureParameters` named `outFillFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_EmbeddedStructureParameters_GetMutable_outFillFaces(MR_EmbeddedStructureParameters *_this);

// optional out new faces of cut part
/// Returns a pointer to a member variable of class `MR::EmbeddedStructureParameters` named `outCutFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_EmbeddedStructureParameters_Get_outCutFaces(const MR_EmbeddedStructureParameters *_this);

// optional out new faces of cut part
/// Modifies a member variable of class `MR::EmbeddedStructureParameters` named `outCutFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EmbeddedStructureParameters_Set_outCutFaces(MR_EmbeddedStructureParameters *_this, MR_FaceBitSet *value);

// optional out new faces of cut part
/// Returns a mutable pointer to a member variable of class `MR::EmbeddedStructureParameters` named `outCutFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_EmbeddedStructureParameters_GetMutable_outCutFaces(MR_EmbeddedStructureParameters *_this);

// optional out map new terrain faces to old terrain faces
/// Returns a pointer to a member variable of class `MR::EmbeddedStructureParameters` named `new2oldFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceMap *const *MR_EmbeddedStructureParameters_Get_new2oldFaces(const MR_EmbeddedStructureParameters *_this);

// optional out map new terrain faces to old terrain faces
/// Modifies a member variable of class `MR::EmbeddedStructureParameters` named `new2oldFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EmbeddedStructureParameters_Set_new2oldFaces(MR_EmbeddedStructureParameters *_this, MR_FaceMap *value);

// optional out map new terrain faces to old terrain faces
/// Returns a mutable pointer to a member variable of class `MR::EmbeddedStructureParameters` named `new2oldFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceMap **MR_EmbeddedStructureParameters_GetMutable_new2oldFaces(MR_EmbeddedStructureParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EmbeddedStructureParameters_Destroy()` to free it when you're done using it.
MRC_API MR_EmbeddedStructureParameters *MR_EmbeddedStructureParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EmbeddedStructureParameters_DestroyArray()`.
/// Use `MR_EmbeddedStructureParameters_OffsetMutablePtr()` and `MR_EmbeddedStructureParameters_OffsetPtr()` to access the array elements.
MRC_API MR_EmbeddedStructureParameters *MR_EmbeddedStructureParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::EmbeddedStructureParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EmbeddedStructureParameters_Destroy()` to free it when you're done using it.
MRC_API MR_EmbeddedStructureParameters *MR_EmbeddedStructureParameters_ConstructFrom(float fillAngle, float cutAngle, float minAnglePrecision, MR_FaceBitSet *outStructFaces, MR_FaceBitSet *outFillFaces, MR_FaceBitSet *outCutFaces, MR_FaceMap *new2oldFaces);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EmbeddedStructureParameters *MR_EmbeddedStructureParameters_OffsetPtr(const MR_EmbeddedStructureParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EmbeddedStructureParameters *MR_EmbeddedStructureParameters_OffsetMutablePtr(MR_EmbeddedStructureParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EmbeddedStructureParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EmbeddedStructureParameters_Destroy()` to free it when you're done using it.
MRC_API MR_EmbeddedStructureParameters *MR_EmbeddedStructureParameters_ConstructFromAnother(const MR_EmbeddedStructureParameters *_other);

/// Destroys a heap-allocated instance of `MR_EmbeddedStructureParameters`. Does nothing if the pointer is null.
MRC_API void MR_EmbeddedStructureParameters_Destroy(const MR_EmbeddedStructureParameters *_this);

/// Destroys a heap-allocated array of `MR_EmbeddedStructureParameters`. Does nothing if the pointer is null.
MRC_API void MR_EmbeddedStructureParameters_DestroyArray(const MR_EmbeddedStructureParameters *_this);

/// Generated from a method of class `MR::EmbeddedStructureParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EmbeddedStructureParameters *MR_EmbeddedStructureParameters_AssignFromAnother(MR_EmbeddedStructureParameters *_this, const MR_EmbeddedStructureParameters *_other);

// Returns terrain mesh with structure embedded to it, or error string
// terrain - mesh with +Z normal (not-closed mesh is expected)
// structure - mesh with one open contour and +Z normal, that will be embedded in terrain
/// Generated from function `MR::embedStructureToTerrain`.
/// Parameter `terrain` can not be null. It is a single object.
/// Parameter `structure` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_embedStructureToTerrain(const MR_Mesh *terrain, const MR_Mesh *structure, const MR_EmbeddedStructureParameters *params);

#ifdef __cplusplus
} // extern "C"
#endif
