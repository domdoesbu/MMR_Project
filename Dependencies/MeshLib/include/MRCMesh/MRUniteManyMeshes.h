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

typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_vector_const_MR_Mesh_ptr MR_std_vector_const_MR_Mesh_ptr; // Defined in `#include <MRCMisc/std_vector_const_MR_Mesh_ptr.h>`.


/// Mode of processing components
typedef int32_t MR_NestedComponenetsMode;
enum // MR_NestedComponenetsMode
{
    ///< Default: separate nested meshes and remove them, just like union operation should do, use this if input meshes are single component
    MR_NestedComponenetsMode_Remove = 0,
    ///< merge nested meshes, useful if input meshes are components of single object
    MR_NestedComponenetsMode_Merge = 1,
    ///< does not separate components and call union for all input meshes, works slower than Remove and Merge method but returns valid result if input meshes has multiple components
    MR_NestedComponenetsMode_Union = 2,
};

/// Parameters structure for uniteManyMeshes function
/// Generated from class `MR::UniteManyMeshesParams`.
typedef struct MR_UniteManyMeshesParams MR_UniteManyMeshesParams;

/// Apply random shift to each mesh, to prevent degenerations on coincident surfaces
/// Returns a pointer to a member variable of class `MR::UniteManyMeshesParams` named `useRandomShifts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_UniteManyMeshesParams_Get_useRandomShifts(const MR_UniteManyMeshesParams *_this);

/// Apply random shift to each mesh, to prevent degenerations on coincident surfaces
/// Modifies a member variable of class `MR::UniteManyMeshesParams` named `useRandomShifts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniteManyMeshesParams_Set_useRandomShifts(MR_UniteManyMeshesParams *_this, bool value);

/// Apply random shift to each mesh, to prevent degenerations on coincident surfaces
/// Returns a mutable pointer to a member variable of class `MR::UniteManyMeshesParams` named `useRandomShifts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_UniteManyMeshesParams_GetMutable_useRandomShifts(MR_UniteManyMeshesParams *_this);

/// Try fix degenerations after each boolean step, to prevent boolean failure due to high amount of degenerated faces
/// useful on meshes with many coincident surfaces 
/// (useRandomShifts used for same issue)
/// Returns a pointer to a member variable of class `MR::UniteManyMeshesParams` named `fixDegenerations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_UniteManyMeshesParams_Get_fixDegenerations(const MR_UniteManyMeshesParams *_this);

/// Try fix degenerations after each boolean step, to prevent boolean failure due to high amount of degenerated faces
/// useful on meshes with many coincident surfaces 
/// (useRandomShifts used for same issue)
/// Modifies a member variable of class `MR::UniteManyMeshesParams` named `fixDegenerations`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniteManyMeshesParams_Set_fixDegenerations(MR_UniteManyMeshesParams *_this, bool value);

/// Try fix degenerations after each boolean step, to prevent boolean failure due to high amount of degenerated faces
/// useful on meshes with many coincident surfaces 
/// (useRandomShifts used for same issue)
/// Returns a mutable pointer to a member variable of class `MR::UniteManyMeshesParams` named `fixDegenerations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_UniteManyMeshesParams_GetMutable_fixDegenerations(MR_UniteManyMeshesParams *_this);

/// Max allowed random shifts in each direction, and max allowed deviation after degeneration fixing
/// not used if both flags (useRandomShifts,fixDegenerations) are false
/// Returns a pointer to a member variable of class `MR::UniteManyMeshesParams` named `maxAllowedError`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_UniteManyMeshesParams_Get_maxAllowedError(const MR_UniteManyMeshesParams *_this);

/// Max allowed random shifts in each direction, and max allowed deviation after degeneration fixing
/// not used if both flags (useRandomShifts,fixDegenerations) are false
/// Modifies a member variable of class `MR::UniteManyMeshesParams` named `maxAllowedError`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniteManyMeshesParams_Set_maxAllowedError(MR_UniteManyMeshesParams *_this, float value);

/// Max allowed random shifts in each direction, and max allowed deviation after degeneration fixing
/// not used if both flags (useRandomShifts,fixDegenerations) are false
/// Returns a mutable pointer to a member variable of class `MR::UniteManyMeshesParams` named `maxAllowedError`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_UniteManyMeshesParams_GetMutable_maxAllowedError(MR_UniteManyMeshesParams *_this);

/// Seed that is used for random shifts
/// Returns a pointer to a member variable of class `MR::UniteManyMeshesParams` named `randomShiftsSeed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint32_t *MR_UniteManyMeshesParams_Get_randomShiftsSeed(const MR_UniteManyMeshesParams *_this);

/// Seed that is used for random shifts
/// Modifies a member variable of class `MR::UniteManyMeshesParams` named `randomShiftsSeed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniteManyMeshesParams_Set_randomShiftsSeed(MR_UniteManyMeshesParams *_this, uint32_t value);

/// Seed that is used for random shifts
/// Returns a mutable pointer to a member variable of class `MR::UniteManyMeshesParams` named `randomShiftsSeed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint32_t *MR_UniteManyMeshesParams_GetMutable_randomShiftsSeed(MR_UniteManyMeshesParams *_this);

/// If set, the bitset will store new faces created by boolean operations
/// Returns a pointer to a member variable of class `MR::UniteManyMeshesParams` named `newFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *const *MR_UniteManyMeshesParams_Get_newFaces(const MR_UniteManyMeshesParams *_this);

/// If set, the bitset will store new faces created by boolean operations
/// Modifies a member variable of class `MR::UniteManyMeshesParams` named `newFaces`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniteManyMeshesParams_Set_newFaces(MR_UniteManyMeshesParams *_this, MR_FaceBitSet *value);

/// If set, the bitset will store new faces created by boolean operations
/// Returns a mutable pointer to a member variable of class `MR::UniteManyMeshesParams` named `newFaces`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet **MR_UniteManyMeshesParams_GetMutable_newFaces(MR_UniteManyMeshesParams *_this);

/// By default function separate nested meshes and remove them, just like union operation should do
/// read comment of NestedComponenetsMode enum for more information
/// Returns a pointer to a member variable of class `MR::UniteManyMeshesParams` named `nestedComponentsMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_NestedComponenetsMode *MR_UniteManyMeshesParams_Get_nestedComponentsMode(const MR_UniteManyMeshesParams *_this);

/// By default function separate nested meshes and remove them, just like union operation should do
/// read comment of NestedComponenetsMode enum for more information
/// Modifies a member variable of class `MR::UniteManyMeshesParams` named `nestedComponentsMode`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniteManyMeshesParams_Set_nestedComponentsMode(MR_UniteManyMeshesParams *_this, MR_NestedComponenetsMode value);

/// By default function separate nested meshes and remove them, just like union operation should do
/// read comment of NestedComponenetsMode enum for more information
/// Returns a mutable pointer to a member variable of class `MR::UniteManyMeshesParams` named `nestedComponentsMode`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_NestedComponenetsMode *MR_UniteManyMeshesParams_GetMutable_nestedComponentsMode(MR_UniteManyMeshesParams *_this);

/// If set - merges meshes instead of booleaning it if boolean operation fails
/// Returns a pointer to a member variable of class `MR::UniteManyMeshesParams` named `mergeOnFail`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_UniteManyMeshesParams_Get_mergeOnFail(const MR_UniteManyMeshesParams *_this);

/// If set - merges meshes instead of booleaning it if boolean operation fails
/// Modifies a member variable of class `MR::UniteManyMeshesParams` named `mergeOnFail`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniteManyMeshesParams_Set_mergeOnFail(MR_UniteManyMeshesParams *_this, bool value);

/// If set - merges meshes instead of booleaning it if boolean operation fails
/// Returns a mutable pointer to a member variable of class `MR::UniteManyMeshesParams` named `mergeOnFail`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_UniteManyMeshesParams_GetMutable_mergeOnFail(MR_UniteManyMeshesParams *_this);

/// If this option is enabled boolean will try to cut meshes even if there are self-intersections in intersecting area
/// it might work in some cases, but in general it might prevent fast error report and lead to other errors along the way
/// \warning not recommended in most cases
/// Returns a pointer to a member variable of class `MR::UniteManyMeshesParams` named `forceCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_UniteManyMeshesParams_Get_forceCut(const MR_UniteManyMeshesParams *_this);

/// If this option is enabled boolean will try to cut meshes even if there are self-intersections in intersecting area
/// it might work in some cases, but in general it might prevent fast error report and lead to other errors along the way
/// \warning not recommended in most cases
/// Modifies a member variable of class `MR::UniteManyMeshesParams` named `forceCut`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniteManyMeshesParams_Set_forceCut(MR_UniteManyMeshesParams *_this, bool value);

/// If this option is enabled boolean will try to cut meshes even if there are self-intersections in intersecting area
/// it might work in some cases, but in general it might prevent fast error report and lead to other errors along the way
/// \warning not recommended in most cases
/// Returns a mutable pointer to a member variable of class `MR::UniteManyMeshesParams` named `forceCut`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_UniteManyMeshesParams_GetMutable_forceCut(MR_UniteManyMeshesParams *_this);

/// Returns a pointer to a member variable of class `MR::UniteManyMeshesParams` named `progressCb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_UniteManyMeshesParams_Get_progressCb(const MR_UniteManyMeshesParams *_this);

/// Modifies a member variable of class `MR::UniteManyMeshesParams` named `progressCb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UniteManyMeshesParams_Set_progressCb(MR_UniteManyMeshesParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

/// Returns a mutable pointer to a member variable of class `MR::UniteManyMeshesParams` named `progressCb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_UniteManyMeshesParams_GetMutable_progressCb(MR_UniteManyMeshesParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniteManyMeshesParams_Destroy()` to free it when you're done using it.
MRC_API MR_UniteManyMeshesParams *MR_UniteManyMeshesParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UniteManyMeshesParams_DestroyArray()`.
/// Use `MR_UniteManyMeshesParams_OffsetMutablePtr()` and `MR_UniteManyMeshesParams_OffsetPtr()` to access the array elements.
MRC_API MR_UniteManyMeshesParams *MR_UniteManyMeshesParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::UniteManyMeshesParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniteManyMeshesParams_Destroy()` to free it when you're done using it.
MRC_API MR_UniteManyMeshesParams *MR_UniteManyMeshesParams_ConstructFrom(bool useRandomShifts, bool fixDegenerations, float maxAllowedError, uint32_t randomShiftsSeed, MR_FaceBitSet *newFaces, MR_NestedComponenetsMode nestedComponentsMode, bool mergeOnFail, bool forceCut, MR_PassBy progressCb_pass_by, MR_std_function_bool_from_float *progressCb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UniteManyMeshesParams *MR_UniteManyMeshesParams_OffsetPtr(const MR_UniteManyMeshesParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UniteManyMeshesParams *MR_UniteManyMeshesParams_OffsetMutablePtr(MR_UniteManyMeshesParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UniteManyMeshesParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UniteManyMeshesParams_Destroy()` to free it when you're done using it.
MRC_API MR_UniteManyMeshesParams *MR_UniteManyMeshesParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_UniteManyMeshesParams *_other);

/// Destroys a heap-allocated instance of `MR_UniteManyMeshesParams`. Does nothing if the pointer is null.
MRC_API void MR_UniteManyMeshesParams_Destroy(const MR_UniteManyMeshesParams *_this);

/// Destroys a heap-allocated array of `MR_UniteManyMeshesParams`. Does nothing if the pointer is null.
MRC_API void MR_UniteManyMeshesParams_DestroyArray(const MR_UniteManyMeshesParams *_this);

/// Generated from a method of class `MR::UniteManyMeshesParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UniteManyMeshesParams *MR_UniteManyMeshesParams_AssignFromAnother(MR_UniteManyMeshesParams *_this, MR_PassBy _other_pass_by, MR_UniteManyMeshesParams *_other);

// Computes the surface of objects' union each of which is defined by its own surface mesh
// - merge non intersecting meshes first
// - unite merged groups
/// Generated from function `MR::uniteManyMeshes`.
/// Parameter `meshes` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_uniteManyMeshes(const MR_std_vector_const_MR_Mesh_ptr *meshes, const MR_UniteManyMeshesParams *params);

#ifdef __cplusplus
} // extern "C"
#endif
