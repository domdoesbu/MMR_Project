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

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_EdgeBitSet MR_EdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_FaceMap MR_FaceMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertMap MR_VertMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_WholeEdgeMap MR_WholeEdgeMap; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_array_MR_BooleanResultMapper_Maps_2 MR_std_array_MR_BooleanResultMapper_Maps_2; // Defined in `#include <MRCMisc/std_array_MR_BooleanResultMapper_Maps_2.h>`.
typedef struct MR_std_vector_std_vector_MR_EdgeId MR_std_vector_std_vector_MR_EdgeId; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_EdgeId.h>`.


/**
* Enum class of available CSG operations
* \image html boolean/no_bool.png "Two separate meshes" width = 300cm
* \sa \ref MR::boolean
*/
typedef int32_t MR_BooleanOperation;
enum // MR_BooleanOperation
{
    /// Part of mesh `A` that is inside of mesh `B`
    /// \image html boolean/inside_a.png "Inside A" width = 300cm
    MR_BooleanOperation_InsideA = 0,
    /// Part of mesh `B` that is inside of mesh `A`
    /// \image html boolean/inside_b.png "Inside B" width = 300cm
    MR_BooleanOperation_InsideB = 1,
    /// Part of mesh `A` that is outside of mesh `B`
    /// \image html boolean/outside_a.png "Outside A" width = 300cm
    MR_BooleanOperation_OutsideA = 2,
    /// Part of mesh `B` that is outside of mesh `A`
    /// \image html boolean/outside_b.png "Outside B" width = 300cm
    MR_BooleanOperation_OutsideB = 3,
    /// Union surface of two meshes (outside parts)
    /// \image html boolean/union.png "Union" width = 300cm
    MR_BooleanOperation_Union = 4,
    /// Intersection surface of two meshes (inside parts)
    /// \image html boolean/intersection.png "Intersection" width = 300cm
    MR_BooleanOperation_Intersection = 5,
    /// Surface of mesh `B` - surface of mesh `A` (outside `B` - inside `A`)
    /// \image html boolean/b-a.png "Difference B-A" width = 300cm
    MR_BooleanOperation_DifferenceBA = 6,
    /// Surface of mesh `A` - surface of mesh `B` (outside `A` - inside `B`)
    /// \image html boolean/a-b.png "Difference A-B" width = 300cm
    MR_BooleanOperation_DifferenceAB = 7,
    ///< not a valid operation
    MR_BooleanOperation_Count = 8,
};

/** \struct MR::BooleanResultMapper
* \brief Structure to map old mesh BitSets to new
* \details Structure to easily map topology of MR::boolean input meshes to result mesh
*
* This structure allows to map faces, vertices and edges of mesh `A` and mesh `B` input of MR::boolean to result mesh topology primitives
* \sa \ref MR::boolean
*/
/// Generated from class `MR::BooleanResultMapper`.
typedef struct MR_BooleanResultMapper MR_BooleanResultMapper;

/// Input object index enum
typedef int32_t MR_BooleanResultMapper_MapObject;
enum // MR_BooleanResultMapper_MapObject
{
    MR_BooleanResultMapper_MapObject_A = 0,
    MR_BooleanResultMapper_MapObject_B = 1,
    MR_BooleanResultMapper_MapObject_Count = 2,
};

/// Generated from class `MR::BooleanResultMapper::Maps`.
typedef struct MR_BooleanResultMapper_Maps MR_BooleanResultMapper_Maps;

/// Parameters will be useful if specified
/// Generated from class `MR::BooleanInternalParameters`.
typedef struct MR_BooleanInternalParameters MR_BooleanInternalParameters;

/// Returns a pointer to a member variable of class `MR::BooleanResultMapper` named `maps`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_array_MR_BooleanResultMapper_Maps_2 *MR_BooleanResultMapper_Get_maps(const MR_BooleanResultMapper *_this);

/// Modifies a member variable of class `MR::BooleanResultMapper` named `maps`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResultMapper_Set_maps(MR_BooleanResultMapper *_this, MR_PassBy value_pass_by, MR_std_array_MR_BooleanResultMapper_Maps_2 *value);

/// Returns a mutable pointer to a member variable of class `MR::BooleanResultMapper` named `maps`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_array_MR_BooleanResultMapper_Maps_2 *MR_BooleanResultMapper_GetMutable_maps(MR_BooleanResultMapper *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResultMapper_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResultMapper *MR_BooleanResultMapper_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BooleanResultMapper_DestroyArray()`.
/// Use `MR_BooleanResultMapper_OffsetMutablePtr()` and `MR_BooleanResultMapper_OffsetPtr()` to access the array elements.
MRC_API MR_BooleanResultMapper *MR_BooleanResultMapper_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BooleanResultMapper *MR_BooleanResultMapper_OffsetPtr(const MR_BooleanResultMapper *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BooleanResultMapper *MR_BooleanResultMapper_OffsetMutablePtr(MR_BooleanResultMapper *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BooleanResultMapper`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResultMapper_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResultMapper *MR_BooleanResultMapper_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BooleanResultMapper *_other);

/// Destroys a heap-allocated instance of `MR_BooleanResultMapper`. Does nothing if the pointer is null.
MRC_API void MR_BooleanResultMapper_Destroy(const MR_BooleanResultMapper *_this);

/// Destroys a heap-allocated array of `MR_BooleanResultMapper`. Does nothing if the pointer is null.
MRC_API void MR_BooleanResultMapper_DestroyArray(const MR_BooleanResultMapper *_this);

/// Generated from a method of class `MR::BooleanResultMapper` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanResultMapper *MR_BooleanResultMapper_AssignFromAnother(MR_BooleanResultMapper *_this, MR_PassBy _other_pass_by, MR_BooleanResultMapper *_other);

/// Returns faces bitset of result mesh corresponding input one
/// Generated from a method of class `MR::BooleanResultMapper` named `map`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `oldBS` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_BooleanResultMapper_map_MR_FaceBitSet(const MR_BooleanResultMapper *_this, const MR_FaceBitSet *oldBS, MR_BooleanResultMapper_MapObject obj);

/// Returns vertices bitset of result mesh corresponding input one
/// Generated from a method of class `MR::BooleanResultMapper` named `map`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `oldBS` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VertBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_VertBitSet *MR_BooleanResultMapper_map_MR_VertBitSet(const MR_BooleanResultMapper *_this, const MR_VertBitSet *oldBS, MR_BooleanResultMapper_MapObject obj);

/// Returns edges bitset of result mesh corresponding input one
/// Generated from a method of class `MR::BooleanResultMapper` named `map`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `oldBS` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EdgeBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_EdgeBitSet *MR_BooleanResultMapper_map_MR_EdgeBitSet(const MR_BooleanResultMapper *_this, const MR_EdgeBitSet *oldBS, MR_BooleanResultMapper_MapObject obj);

/// Returns only new faces that are created during boolean operation
/// Generated from a method of class `MR::BooleanResultMapper` named `newFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_BooleanResultMapper_newFaces(const MR_BooleanResultMapper *_this);

/// returns updated oldBS leaving only faces that has corresponding ones in result mesh
/// Generated from a method of class `MR::BooleanResultMapper` named `filteredOldFaceBitSet`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `oldBS` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_BooleanResultMapper_filteredOldFaceBitSet(MR_BooleanResultMapper *_this, const MR_FaceBitSet *oldBS, MR_BooleanResultMapper_MapObject obj);

/// Generated from a method of class `MR::BooleanResultMapper` named `getMaps`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BooleanResultMapper_Maps *MR_BooleanResultMapper_getMaps(const MR_BooleanResultMapper *_this, MR_BooleanResultMapper_MapObject index);

/// "after cut" faces to "origin" faces
/// this map is not 1-1, but N-1
/// Returns a pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `cut2origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceMap *MR_BooleanResultMapper_Maps_Get_cut2origin(const MR_BooleanResultMapper_Maps *_this);

/// "after cut" faces to "origin" faces
/// this map is not 1-1, but N-1
/// Modifies a member variable of class `MR::BooleanResultMapper::Maps` named `cut2origin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResultMapper_Maps_Set_cut2origin(MR_BooleanResultMapper_Maps *_this, MR_PassBy value_pass_by, MR_FaceMap *value);

/// "after cut" faces to "origin" faces
/// this map is not 1-1, but N-1
/// Returns a mutable pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `cut2origin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceMap *MR_BooleanResultMapper_Maps_GetMutable_cut2origin(MR_BooleanResultMapper_Maps *_this);

/// "after cut" faces to "after stitch" faces (1-1)
/// Returns a pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `cut2newFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceMap *MR_BooleanResultMapper_Maps_Get_cut2newFaces(const MR_BooleanResultMapper_Maps *_this);

/// "after cut" faces to "after stitch" faces (1-1)
/// Modifies a member variable of class `MR::BooleanResultMapper::Maps` named `cut2newFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResultMapper_Maps_Set_cut2newFaces(MR_BooleanResultMapper_Maps *_this, MR_PassBy value_pass_by, MR_FaceMap *value);

/// "after cut" faces to "after stitch" faces (1-1)
/// Returns a mutable pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `cut2newFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceMap *MR_BooleanResultMapper_Maps_GetMutable_cut2newFaces(MR_BooleanResultMapper_Maps *_this);

/// "origin" edges to "after stitch" edges (1-1)
/// Returns a pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `old2newEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_WholeEdgeMap *MR_BooleanResultMapper_Maps_Get_old2newEdges(const MR_BooleanResultMapper_Maps *_this);

/// "origin" edges to "after stitch" edges (1-1)
/// Modifies a member variable of class `MR::BooleanResultMapper::Maps` named `old2newEdges`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResultMapper_Maps_Set_old2newEdges(MR_BooleanResultMapper_Maps *_this, MR_PassBy value_pass_by, MR_WholeEdgeMap *value);

/// "origin" edges to "after stitch" edges (1-1)
/// Returns a mutable pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `old2newEdges`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_WholeEdgeMap *MR_BooleanResultMapper_Maps_GetMutable_old2newEdges(MR_BooleanResultMapper_Maps *_this);

/// "origin" vertices to "after stitch" vertices (1-1)
/// Returns a pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `old2newVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertMap *MR_BooleanResultMapper_Maps_Get_old2newVerts(const MR_BooleanResultMapper_Maps *_this);

/// "origin" vertices to "after stitch" vertices (1-1)
/// Modifies a member variable of class `MR::BooleanResultMapper::Maps` named `old2newVerts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResultMapper_Maps_Set_old2newVerts(MR_BooleanResultMapper_Maps *_this, MR_PassBy value_pass_by, MR_VertMap *value);

/// "origin" vertices to "after stitch" vertices (1-1)
/// Returns a mutable pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `old2newVerts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertMap *MR_BooleanResultMapper_Maps_GetMutable_old2newVerts(MR_BooleanResultMapper_Maps *_this);

/// old topology indexes are valid if true
/// Returns a pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `identity`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_BooleanResultMapper_Maps_Get_identity(const MR_BooleanResultMapper_Maps *_this);

/// old topology indexes are valid if true
/// Modifies a member variable of class `MR::BooleanResultMapper::Maps` named `identity`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanResultMapper_Maps_Set_identity(MR_BooleanResultMapper_Maps *_this, bool value);

/// old topology indexes are valid if true
/// Returns a mutable pointer to a member variable of class `MR::BooleanResultMapper::Maps` named `identity`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_BooleanResultMapper_Maps_GetMutable_identity(MR_BooleanResultMapper_Maps *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResultMapper_Maps_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResultMapper_Maps *MR_BooleanResultMapper_Maps_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BooleanResultMapper_Maps_DestroyArray()`.
/// Use `MR_BooleanResultMapper_Maps_OffsetMutablePtr()` and `MR_BooleanResultMapper_Maps_OffsetPtr()` to access the array elements.
MRC_API MR_BooleanResultMapper_Maps *MR_BooleanResultMapper_Maps_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BooleanResultMapper::Maps` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResultMapper_Maps_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResultMapper_Maps *MR_BooleanResultMapper_Maps_ConstructFrom(MR_PassBy cut2origin_pass_by, MR_FaceMap *cut2origin, MR_PassBy cut2newFaces_pass_by, MR_FaceMap *cut2newFaces, MR_PassBy old2newEdges_pass_by, MR_WholeEdgeMap *old2newEdges, MR_PassBy old2newVerts_pass_by, MR_VertMap *old2newVerts, bool identity);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BooleanResultMapper_Maps *MR_BooleanResultMapper_Maps_OffsetPtr(const MR_BooleanResultMapper_Maps *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BooleanResultMapper_Maps *MR_BooleanResultMapper_Maps_OffsetMutablePtr(MR_BooleanResultMapper_Maps *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BooleanResultMapper::Maps`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanResultMapper_Maps_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanResultMapper_Maps *MR_BooleanResultMapper_Maps_ConstructFromAnother(MR_PassBy _other_pass_by, MR_BooleanResultMapper_Maps *_other);

/// Destroys a heap-allocated instance of `MR_BooleanResultMapper_Maps`. Does nothing if the pointer is null.
MRC_API void MR_BooleanResultMapper_Maps_Destroy(const MR_BooleanResultMapper_Maps *_this);

/// Destroys a heap-allocated array of `MR_BooleanResultMapper_Maps`. Does nothing if the pointer is null.
MRC_API void MR_BooleanResultMapper_Maps_DestroyArray(const MR_BooleanResultMapper_Maps *_this);

/// Generated from a method of class `MR::BooleanResultMapper::Maps` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanResultMapper_Maps *MR_BooleanResultMapper_Maps_AssignFromAnother(MR_BooleanResultMapper_Maps *_this, MR_PassBy _other_pass_by, MR_BooleanResultMapper_Maps *_other);

/// Instance of original mesh with tree for better speed
/// Returns a pointer to a member variable of class `MR::BooleanInternalParameters` named `originalMeshA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *const *MR_BooleanInternalParameters_Get_originalMeshA(const MR_BooleanInternalParameters *_this);

/// Instance of original mesh with tree for better speed
/// Modifies a member variable of class `MR::BooleanInternalParameters` named `originalMeshA`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanInternalParameters_Set_originalMeshA(MR_BooleanInternalParameters *_this, const MR_Mesh *value);

/// Instance of original mesh with tree for better speed
/// Returns a mutable pointer to a member variable of class `MR::BooleanInternalParameters` named `originalMeshA`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh **MR_BooleanInternalParameters_GetMutable_originalMeshA(MR_BooleanInternalParameters *_this);

/// Instance of original mesh with tree for better speed
/// Returns a pointer to a member variable of class `MR::BooleanInternalParameters` named `originalMeshB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *const *MR_BooleanInternalParameters_Get_originalMeshB(const MR_BooleanInternalParameters *_this);

/// Instance of original mesh with tree for better speed
/// Modifies a member variable of class `MR::BooleanInternalParameters` named `originalMeshB`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanInternalParameters_Set_originalMeshB(MR_BooleanInternalParameters *_this, const MR_Mesh *value);

/// Instance of original mesh with tree for better speed
/// Returns a mutable pointer to a member variable of class `MR::BooleanInternalParameters` named `originalMeshB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh **MR_BooleanInternalParameters_GetMutable_originalMeshB(MR_BooleanInternalParameters *_this);

/// Optional output cut edges of booleaned meshes
/// Returns a pointer to a member variable of class `MR::BooleanInternalParameters` named `optionalOutCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_EdgeId *const *MR_BooleanInternalParameters_Get_optionalOutCut(const MR_BooleanInternalParameters *_this);

/// Optional output cut edges of booleaned meshes
/// Modifies a member variable of class `MR::BooleanInternalParameters` named `optionalOutCut`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BooleanInternalParameters_Set_optionalOutCut(MR_BooleanInternalParameters *_this, MR_std_vector_std_vector_MR_EdgeId *value);

/// Optional output cut edges of booleaned meshes
/// Returns a mutable pointer to a member variable of class `MR::BooleanInternalParameters` named `optionalOutCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_EdgeId **MR_BooleanInternalParameters_GetMutable_optionalOutCut(MR_BooleanInternalParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanInternalParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanInternalParameters *MR_BooleanInternalParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BooleanInternalParameters_DestroyArray()`.
/// Use `MR_BooleanInternalParameters_OffsetMutablePtr()` and `MR_BooleanInternalParameters_OffsetPtr()` to access the array elements.
MRC_API MR_BooleanInternalParameters *MR_BooleanInternalParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BooleanInternalParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanInternalParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanInternalParameters *MR_BooleanInternalParameters_ConstructFrom(const MR_Mesh *originalMeshA, const MR_Mesh *originalMeshB, MR_std_vector_std_vector_MR_EdgeId *optionalOutCut);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BooleanInternalParameters *MR_BooleanInternalParameters_OffsetPtr(const MR_BooleanInternalParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BooleanInternalParameters *MR_BooleanInternalParameters_OffsetMutablePtr(MR_BooleanInternalParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BooleanInternalParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BooleanInternalParameters_Destroy()` to free it when you're done using it.
MRC_API MR_BooleanInternalParameters *MR_BooleanInternalParameters_ConstructFromAnother(const MR_BooleanInternalParameters *_other);

/// Destroys a heap-allocated instance of `MR_BooleanInternalParameters`. Does nothing if the pointer is null.
MRC_API void MR_BooleanInternalParameters_Destroy(const MR_BooleanInternalParameters *_this);

/// Destroys a heap-allocated array of `MR_BooleanInternalParameters`. Does nothing if the pointer is null.
MRC_API void MR_BooleanInternalParameters_DestroyArray(const MR_BooleanInternalParameters *_this);

/// Generated from a method of class `MR::BooleanInternalParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BooleanInternalParameters *MR_BooleanInternalParameters_AssignFromAnother(MR_BooleanInternalParameters *_this, const MR_BooleanInternalParameters *_other);

/// Perform boolean operation on cut meshes
/// \return mesh in space of meshA or error.
/// \note: actually this function is meant to be internal, use "boolean" instead
/// Generated from function `MR::doBooleanOperation`.
/// Parameter `meshACut` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `meshBCut` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Parameter `cutEdgesA` can not be null. It is a single object.
/// Parameter `cutEdgesB` can not be null. It is a single object.
/// Parameter `rigidB2A` defaults to a null pointer in C++.
/// Parameter `mapper` defaults to a null pointer in C++.
/// Parameter `mergeAllNonIntersectingComponents` has a default argument: `false`, pass a null pointer to use it.
/// Parameter `intParams` is a single object.
/// Parameter `intParams` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_doBooleanOperation(MR_Mesh *meshACut, MR_Mesh *meshBCut, const MR_std_vector_std_vector_MR_EdgeId *cutEdgesA, const MR_std_vector_std_vector_MR_EdgeId *cutEdgesB, MR_BooleanOperation operation, const MR_AffineXf3f *rigidB2A, MR_BooleanResultMapper *mapper, const bool *mergeAllNonIntersectingComponents, const MR_BooleanInternalParameters *intParams);

#ifdef __cplusplus
} // extern "C"
#endif
