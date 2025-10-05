// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_BitSet MR_BitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_vector_MR_MeshIntersectionResult MR_std_vector_MR_MeshIntersectionResult; // Defined in `#include <MRCMisc/std_vector_MR_MeshIntersectionResult.h>`.
typedef struct MR_std_vector_MR_SkyPatch MR_std_vector_MR_SkyPatch; // Defined in `#include <MRCMisc/std_vector_MR_SkyPatch.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/// this class represents a portion of the sky, and its radiation
/// Generated from class `MR::SkyPatch`.
typedef struct MR_SkyPatch MR_SkyPatch;

/// returns quasi-uniform 145 samples on unit half-sphere z>0
/// Generated from function `MR::sampleHalfSphere`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_Vector3f *MR_sampleHalfSphere(void);

/// direction toward the center of the patch
/// Returns a pointer to a member variable of class `MR::SkyPatch` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_SkyPatch_Get_dir(const MR_SkyPatch *_this);

/// direction toward the center of the patch
/// Modifies a member variable of class `MR::SkyPatch` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SkyPatch_Set_dir(MR_SkyPatch *_this, MR_Vector3f value);

/// direction toward the center of the patch
/// Returns a mutable pointer to a member variable of class `MR::SkyPatch` named `dir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_SkyPatch_GetMutable_dir(MR_SkyPatch *_this);

/// radiation of the patch depending on Sun's position, sky clearness and brightness, etc
/// Returns a pointer to a member variable of class `MR::SkyPatch` named `radiation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SkyPatch_Get_radiation(const MR_SkyPatch *_this);

/// radiation of the patch depending on Sun's position, sky clearness and brightness, etc
/// Modifies a member variable of class `MR::SkyPatch` named `radiation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SkyPatch_Set_radiation(MR_SkyPatch *_this, float value);

/// radiation of the patch depending on Sun's position, sky clearness and brightness, etc
/// Returns a mutable pointer to a member variable of class `MR::SkyPatch` named `radiation`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SkyPatch_GetMutable_radiation(MR_SkyPatch *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SkyPatch_Destroy()` to free it when you're done using it.
MRC_API MR_SkyPatch *MR_SkyPatch_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SkyPatch_DestroyArray()`.
/// Use `MR_SkyPatch_OffsetMutablePtr()` and `MR_SkyPatch_OffsetPtr()` to access the array elements.
MRC_API MR_SkyPatch *MR_SkyPatch_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SkyPatch` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SkyPatch_Destroy()` to free it when you're done using it.
MRC_API MR_SkyPatch *MR_SkyPatch_ConstructFrom(MR_Vector3f dir, float radiation);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SkyPatch *MR_SkyPatch_OffsetPtr(const MR_SkyPatch *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SkyPatch *MR_SkyPatch_OffsetMutablePtr(MR_SkyPatch *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SkyPatch`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SkyPatch_Destroy()` to free it when you're done using it.
MRC_API MR_SkyPatch *MR_SkyPatch_ConstructFromAnother(const MR_SkyPatch *_other);

/// Destroys a heap-allocated instance of `MR_SkyPatch`. Does nothing if the pointer is null.
MRC_API void MR_SkyPatch_Destroy(const MR_SkyPatch *_this);

/// Destroys a heap-allocated array of `MR_SkyPatch`. Does nothing if the pointer is null.
MRC_API void MR_SkyPatch_DestroyArray(const MR_SkyPatch *_this);

/// Generated from a method of class `MR::SkyPatch` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SkyPatch *MR_SkyPatch_AssignFromAnother(MR_SkyPatch *_this, const MR_SkyPatch *_other);

/// computes relative radiation in each valid sample point by emitting rays from that point in the sky:
/// the radiation is 1.0f if all rays reach the sky not hitting the terrain;
/// the radiation is 0.0f if all rays do not reach the sky because they are intercepted by the terrain;
/// \param outSkyRays - optional output bitset where for every valid sample #i its rays are stored at indices [i*numPatches; (i+1)*numPatches),
///                     0s for occluded rays (hitting the terrain) and 1s for the ones which don't hit anything and reach the sky
/// \param outIntersections - optional output vector of MeshIntersectionResult for every valid sample point
/// Generated from function `MR::computeSkyViewFactor`.
/// Parameter `terrain` can not be null. It is a single object.
/// Parameter `samples` can not be null. It is a single object.
/// Parameter `validSamples` can not be null. It is a single object.
/// Parameter `skyPatches` can not be null. It is a single object.
/// Parameter `outSkyRays` defaults to a null pointer in C++.
/// Parameter `outIntersections` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertScalars_Destroy()` to free it when you're done using it.
MRC_API MR_VertScalars *MR_computeSkyViewFactor(const MR_Mesh *terrain, const MR_VertCoords *samples, const MR_VertBitSet *validSamples, const MR_std_vector_MR_SkyPatch *skyPatches, MR_BitSet *outSkyRays, MR_std_vector_MR_MeshIntersectionResult *outIntersections);

/// In each valid sample point tests the rays from that point in the sky;
/// \return bitset where for every valid sample #i its rays are stored at indices [i*numPatches; (i+1)*numPatches),
///         0s for occluded rays (hitting the terrain) and 1s for the ones which don't hit anything and reach the sky
/// \param outIntersections - optional output vector of MeshIntersectionResult for every valid sample point
/// Generated from function `MR::findSkyRays`.
/// Parameter `terrain` can not be null. It is a single object.
/// Parameter `samples` can not be null. It is a single object.
/// Parameter `validSamples` can not be null. It is a single object.
/// Parameter `skyPatches` can not be null. It is a single object.
/// Parameter `outIntersections` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BitSet_Destroy()` to free it when you're done using it.
MRC_API MR_BitSet *MR_findSkyRays(const MR_Mesh *terrain, const MR_VertCoords *samples, const MR_VertBitSet *validSamples, const MR_std_vector_MR_SkyPatch *skyPatches, MR_std_vector_MR_MeshIntersectionResult *outIntersections);

#ifdef __cplusplus
} // extern "C"
#endif
