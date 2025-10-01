// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>
#include <MRCMisc/std_array_MR_Vector3f_3.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


/// the class to compute the volume of water some basin can accumulate,
/// considering that water upper surface has constant z-level
/// Generated from class `MR::BasinVolumeCalculator`.
typedef struct MR_BasinVolumeCalculator MR_BasinVolumeCalculator;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BasinVolumeCalculator_Destroy()` to free it when you're done using it.
MRC_API MR_BasinVolumeCalculator *MR_BasinVolumeCalculator_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BasinVolumeCalculator_DestroyArray()`.
/// Use `MR_BasinVolumeCalculator_OffsetMutablePtr()` and `MR_BasinVolumeCalculator_OffsetPtr()` to access the array elements.
MRC_API MR_BasinVolumeCalculator *MR_BasinVolumeCalculator_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BasinVolumeCalculator *MR_BasinVolumeCalculator_OffsetPtr(const MR_BasinVolumeCalculator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BasinVolumeCalculator *MR_BasinVolumeCalculator_OffsetMutablePtr(MR_BasinVolumeCalculator *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BasinVolumeCalculator`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BasinVolumeCalculator_Destroy()` to free it when you're done using it.
MRC_API MR_BasinVolumeCalculator *MR_BasinVolumeCalculator_ConstructFromAnother(const MR_BasinVolumeCalculator *_other);

/// Destroys a heap-allocated instance of `MR_BasinVolumeCalculator`. Does nothing if the pointer is null.
MRC_API void MR_BasinVolumeCalculator_Destroy(const MR_BasinVolumeCalculator *_this);

/// Destroys a heap-allocated array of `MR_BasinVolumeCalculator`. Does nothing if the pointer is null.
MRC_API void MR_BasinVolumeCalculator_DestroyArray(const MR_BasinVolumeCalculator *_this);

/// Generated from a method of class `MR::BasinVolumeCalculator` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BasinVolumeCalculator *MR_BasinVolumeCalculator_AssignFromAnother(MR_BasinVolumeCalculator *_this, const MR_BasinVolumeCalculator *_other);

/// pass every triangle of the basin here, and the water level;
/// \return true if the triangle is at least partially below the water level and influences on the volume
/// Generated from a method of class `MR::BasinVolumeCalculator` named `addTerrainTri`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_BasinVolumeCalculator_addTerrainTri(MR_BasinVolumeCalculator *_this, MR_std_array_MR_Vector3f_3 t, float level);

/// call it after all addTerrainTri to get the volume
/// Generated from a method of class `MR::BasinVolumeCalculator` named `getVolume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_BasinVolumeCalculator_getVolume(const MR_BasinVolumeCalculator *_this);

/// computes the volume of given mesh basin below given water level;
/// \param faces shall include all basin faces at least partially below the water level
/// Generated from function `MR::computeBasinVolume`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `faces` can not be null. It is a single object.
MRC_API double MR_computeBasinVolume(const MR_Mesh *mesh, const MR_FaceBitSet *faces, float level);

#ifdef __cplusplus
} // extern "C"
#endif
