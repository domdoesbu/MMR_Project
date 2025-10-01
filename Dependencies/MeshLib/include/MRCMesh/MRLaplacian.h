// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.


/// Laplacian to smoothly deform a region preserving mesh fine details.
/// How to use:
/// 1. Initialize Laplacian for the region being deformed, here region properties are remembered.
/// 2. Change positions of some vertices within the region and call fixVertex for them.
/// 3. Optionally call updateSolver()
/// 4. Call apply() to change the remaining vertices within the region
/// Then steps 1-4 or 2-4 can be repeated.
/// \snippet cpp-samples/LaplacianDeformation.cpp 0
/// Generated from class `MR::Laplacian`.
typedef struct MR_Laplacian MR_Laplacian;

typedef int32_t MR_Laplacian_RememberShape;
enum // MR_Laplacian_RememberShape
{
    // true Laplacian mode when initial mesh shape is remembered and copied in apply
    MR_Laplacian_RememberShape_Yes = 0,
    // ignore initial mesh shape in the region and just position vertices smoothly in the region
    MR_Laplacian_RememberShape_No = 1,
};

/// Generated from a constructor of class `MR::Laplacian`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Laplacian_Destroy()` to free it when you're done using it.
MRC_API MR_Laplacian *MR_Laplacian_ConstructFromAnother(MR_PassBy _other_pass_by, MR_Laplacian *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Laplacian *MR_Laplacian_OffsetPtr(const MR_Laplacian *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Laplacian *MR_Laplacian_OffsetMutablePtr(MR_Laplacian *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Laplacian`.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Laplacian_Destroy()` to free it when you're done using it.
MRC_API MR_Laplacian *MR_Laplacian_Construct_1(MR_Mesh *mesh);

/// Generated from a constructor of class `MR::Laplacian`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Laplacian_Destroy()` to free it when you're done using it.
MRC_API MR_Laplacian *MR_Laplacian_Construct_2(const MR_MeshTopology *topology, MR_VertCoords *points);

/// Destroys a heap-allocated instance of `MR_Laplacian`. Does nothing if the pointer is null.
MRC_API void MR_Laplacian_Destroy(const MR_Laplacian *_this);

/// Destroys a heap-allocated array of `MR_Laplacian`. Does nothing if the pointer is null.
MRC_API void MR_Laplacian_DestroyArray(const MR_Laplacian *_this);

/// initialize Laplacian for the region being deformed, here region properties are remembered and precomputed;
/// \param freeVerts must not include all vertices of a mesh connected component
/// Generated from a method of class `MR::Laplacian` named `init`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `freeVerts` can not be null. It is a single object.
/// Parameter `vmass` has a default argument: `VertexMass::Unit`, pass a null pointer to use it.
/// Parameter `rem` has a default argument: `Laplacian::RememberShape::Yes`, pass a null pointer to use it.
MRC_API void MR_Laplacian_init(MR_Laplacian *_this, const MR_VertBitSet *freeVerts, MR_EdgeWeights weights, const MR_VertexMass *vmass, const MR_Laplacian_RememberShape *rem);

/// notify Laplacian that given vertex has changed after init and must be fixed during apply;
/// \param smooth whether to make the surface smooth in this vertex (sharp otherwise)
/// Generated from a method of class `MR::Laplacian` named `fixVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `smooth` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_Laplacian_fixVertex_2(MR_Laplacian *_this, MR_VertId v, const bool *smooth);

/// sets position of given vertex after init and it must be fixed during apply (THIS METHOD CHANGES THE MESH);
/// \param smooth whether to make the surface smooth in this vertex (sharp otherwise)
/// Generated from a method of class `MR::Laplacian` named `fixVertex`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `fixedPos` can not be null. It is a single object.
/// Parameter `smooth` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_Laplacian_fixVertex_3(MR_Laplacian *_this, MR_VertId v, const MR_Vector3f *fixedPos, const bool *smooth);

/// if you manually call this method after initialization and fixing vertices then next apply call will be much faster
/// Generated from a method of class `MR::Laplacian` named `updateSolver`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Laplacian_updateSolver(MR_Laplacian *_this);

/// given fixed vertices, computes positions of remaining region vertices
/// Generated from a method of class `MR::Laplacian` named `apply`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Laplacian_apply(MR_Laplacian *_this);

/// given a pre-resized scalar field with set values in fixed vertices, computes the values in free vertices
/// Generated from a method of class `MR::Laplacian` named `applyToScalar`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `scalarField` can not be null. It is a single object.
MRC_API void MR_Laplacian_applyToScalar(MR_Laplacian *_this, MR_VertScalars *scalarField);

/// return all initially free vertices and the first layer of vertices around them
/// Generated from a method of class `MR::Laplacian` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_Laplacian_region(const MR_Laplacian *_this);

/// return currently free vertices
/// Generated from a method of class `MR::Laplacian` named `freeVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_Laplacian_freeVerts(const MR_Laplacian *_this);

/// return fixed vertices from the first layer around free vertices
/// Generated from a method of class `MR::Laplacian` named `firstLayerFixedVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *MR_Laplacian_firstLayerFixedVerts(const MR_Laplacian *_this);

#ifdef __cplusplus
} // extern "C"
#endif
