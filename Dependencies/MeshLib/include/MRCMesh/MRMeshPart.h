// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.


/// stores reference on whole mesh (if region is nullptr) or on its part (if region pointer is valid)
/// Generated from class `MR::MeshPart`.
typedef struct MR_MeshPart MR_MeshPart;

/// stores reference on whole mesh (if region is nullptr) or on its part (if region pointer is valid)
/// Generated from class `MR::MeshVertPart`.
typedef struct MR_MeshVertPart MR_MeshVertPart;

/// Returns a pointer to a member variable of class `MR::MeshPart` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_MeshPart_Get_mesh(const MR_MeshPart *_this);

// nullptr here means whole mesh
/// Returns a pointer to a member variable of class `MR::MeshPart` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *const *MR_MeshPart_Get_region(const MR_MeshPart *_this);

// nullptr here means whole mesh
/// Modifies a member variable of class `MR::MeshPart` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshPart_Set_region(MR_MeshPart *_this, const MR_FaceBitSet *value);

// nullptr here means whole mesh
/// Returns a mutable pointer to a member variable of class `MR::MeshPart` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet **MR_MeshPart_GetMutable_region(MR_MeshPart *_this);

/// Generated from a constructor of class `MR::MeshPart`.
/// Parameter `m` can not be null. It is a single object.
/// Parameter `bs` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshPart_Destroy()` to free it when you're done using it.
MRC_API MR_MeshPart *MR_MeshPart_Construct(const MR_Mesh *m, const MR_FaceBitSet *bs);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshPart *MR_MeshPart_OffsetPtr(const MR_MeshPart *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshPart *MR_MeshPart_OffsetMutablePtr(MR_MeshPart *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MeshPart`. Does nothing if the pointer is null.
MRC_API void MR_MeshPart_Destroy(const MR_MeshPart *_this);

/// Destroys a heap-allocated array of `MR_MeshPart`. Does nothing if the pointer is null.
MRC_API void MR_MeshPart_DestroyArray(const MR_MeshPart *_this);

/// Returns a pointer to a member variable of class `MR::MeshVertPart` named `mesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_MeshVertPart_Get_mesh(const MR_MeshVertPart *_this);

// nullptr here means whole mesh
/// Returns a pointer to a member variable of class `MR::MeshVertPart` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *const *MR_MeshVertPart_Get_region(const MR_MeshVertPart *_this);

// nullptr here means whole mesh
/// Modifies a member variable of class `MR::MeshVertPart` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MeshVertPart_Set_region(MR_MeshVertPart *_this, const MR_VertBitSet *value);

// nullptr here means whole mesh
/// Returns a mutable pointer to a member variable of class `MR::MeshVertPart` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet **MR_MeshVertPart_GetMutable_region(MR_MeshVertPart *_this);

/// Generated from a constructor of class `MR::MeshVertPart`.
/// Parameter `m` can not be null. It is a single object.
/// Parameter `bs` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MeshVertPart_Destroy()` to free it when you're done using it.
MRC_API MR_MeshVertPart *MR_MeshVertPart_Construct(const MR_Mesh *m, const MR_VertBitSet *bs);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MeshVertPart *MR_MeshVertPart_OffsetPtr(const MR_MeshVertPart *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MeshVertPart *MR_MeshVertPart_OffsetMutablePtr(MR_MeshVertPart *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_MeshVertPart`. Does nothing if the pointer is null.
MRC_API void MR_MeshVertPart_Destroy(const MR_MeshVertPart *_this);

/// Destroys a heap-allocated array of `MR_MeshVertPart`. Does nothing if the pointer is null.
MRC_API void MR_MeshVertPart_DestroyArray(const MR_MeshVertPart *_this);

#ifdef __cplusplus
} // extern "C"
#endif
