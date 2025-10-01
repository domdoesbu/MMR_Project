// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_WatershedGraph MR_WatershedGraph; // Defined in `#include <MRCMesh/MRWatershedGraph.h>`.


/// the class models water increase in the terrain under the rain with constant precipitation
/// Generated from class `MR::PrecipitationSimulator`.
typedef struct MR_PrecipitationSimulator MR_PrecipitationSimulator;

typedef int32_t MR_PrecipitationSimulator_Event;
enum // MR_PrecipitationSimulator_Event
{
    ///< all basins are full and water goes outside
    MR_PrecipitationSimulator_Event_Finish = 0,
    ///< one basin just became full
    MR_PrecipitationSimulator_Event_BasinFull = 1,
    ///< two basins just merged
    MR_PrecipitationSimulator_Event_Merge = 2,
};

/// Generated from class `MR::PrecipitationSimulator::SimulationStep`.
typedef struct MR_PrecipitationSimulator_SimulationStep MR_PrecipitationSimulator_SimulationStep;

/// Generated from a constructor of class `MR::PrecipitationSimulator`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PrecipitationSimulator_Destroy()` to free it when you're done using it.
MRC_API MR_PrecipitationSimulator *MR_PrecipitationSimulator_ConstructFromAnother(MR_PassBy _other_pass_by, MR_PrecipitationSimulator *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PrecipitationSimulator *MR_PrecipitationSimulator_OffsetPtr(const MR_PrecipitationSimulator *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PrecipitationSimulator *MR_PrecipitationSimulator_OffsetMutablePtr(MR_PrecipitationSimulator *ptr, ptrdiff_t i);

/// initializes modeling from the initial subdivision of the terrain
/// Generated from a constructor of class `MR::PrecipitationSimulator`.
/// Parameter `wg` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PrecipitationSimulator_Destroy()` to free it when you're done using it.
MRC_API MR_PrecipitationSimulator *MR_PrecipitationSimulator_Construct(MR_WatershedGraph *wg);

/// Destroys a heap-allocated instance of `MR_PrecipitationSimulator`. Does nothing if the pointer is null.
MRC_API void MR_PrecipitationSimulator_Destroy(const MR_PrecipitationSimulator *_this);

/// Destroys a heap-allocated array of `MR_PrecipitationSimulator`. Does nothing if the pointer is null.
MRC_API void MR_PrecipitationSimulator_DestroyArray(const MR_PrecipitationSimulator *_this);

/// processes the next event happened with the terrain basins
/// Generated from a method of class `MR::PrecipitationSimulator` named `simulateOne`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PrecipitationSimulator_SimulationStep_Destroy()` to free it when you're done using it.
MRC_API MR_PrecipitationSimulator_SimulationStep *MR_PrecipitationSimulator_simulateOne(MR_PrecipitationSimulator *_this);

/// Returns a pointer to a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `event`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_PrecipitationSimulator_Event *MR_PrecipitationSimulator_SimulationStep_Get_event(const MR_PrecipitationSimulator_SimulationStep *_this);

/// Modifies a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `event`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PrecipitationSimulator_SimulationStep_Set_event(MR_PrecipitationSimulator_SimulationStep *_this, MR_PrecipitationSimulator_Event value);

/// Returns a mutable pointer to a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `event`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PrecipitationSimulator_Event *MR_PrecipitationSimulator_SimulationStep_GetMutable_event(MR_PrecipitationSimulator_SimulationStep *_this);

///< amount of precipitation (in same units as mesh coordinates and water level)
/// Returns a pointer to a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `amount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_PrecipitationSimulator_SimulationStep_Get_amount(const MR_PrecipitationSimulator_SimulationStep *_this);

///< amount of precipitation (in same units as mesh coordinates and water level)
/// Modifies a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `amount`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PrecipitationSimulator_SimulationStep_Set_amount(MR_PrecipitationSimulator_SimulationStep *_this, float value);

///< amount of precipitation (in same units as mesh coordinates and water level)
/// Returns a mutable pointer to a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `amount`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_PrecipitationSimulator_SimulationStep_GetMutable_amount(MR_PrecipitationSimulator_SimulationStep *_this);

///< BasinFull: this basin just became full
///< Merge: this basin just absorbed the other basin
/// Returns a pointer to a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `basin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphVertId *MR_PrecipitationSimulator_SimulationStep_Get_basin(const MR_PrecipitationSimulator_SimulationStep *_this);

///< BasinFull: this basin just became full
///< Merge: this basin just absorbed the other basin
/// Modifies a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `basin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PrecipitationSimulator_SimulationStep_Set_basin(MR_PrecipitationSimulator_SimulationStep *_this, MR_GraphVertId value);

///< BasinFull: this basin just became full
///< Merge: this basin just absorbed the other basin
/// Returns a mutable pointer to a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `basin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_PrecipitationSimulator_SimulationStep_GetMutable_basin(MR_PrecipitationSimulator_SimulationStep *_this);

///< BasinFull: the flow from full basin will first go here (may be not the last destination)
///< Merge: this basin was just absorbed
/// Returns a pointer to a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `neiBasin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GraphVertId *MR_PrecipitationSimulator_SimulationStep_Get_neiBasin(const MR_PrecipitationSimulator_SimulationStep *_this);

///< BasinFull: the flow from full basin will first go here (may be not the last destination)
///< Merge: this basin was just absorbed
/// Modifies a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `neiBasin`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PrecipitationSimulator_SimulationStep_Set_neiBasin(MR_PrecipitationSimulator_SimulationStep *_this, MR_GraphVertId value);

///< BasinFull: the flow from full basin will first go here (may be not the last destination)
///< Merge: this basin was just absorbed
/// Returns a mutable pointer to a member variable of class `MR::PrecipitationSimulator::SimulationStep` named `neiBasin`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GraphVertId *MR_PrecipitationSimulator_SimulationStep_GetMutable_neiBasin(MR_PrecipitationSimulator_SimulationStep *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PrecipitationSimulator_SimulationStep_Destroy()` to free it when you're done using it.
MRC_API MR_PrecipitationSimulator_SimulationStep *MR_PrecipitationSimulator_SimulationStep_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PrecipitationSimulator_SimulationStep_DestroyArray()`.
/// Use `MR_PrecipitationSimulator_SimulationStep_OffsetMutablePtr()` and `MR_PrecipitationSimulator_SimulationStep_OffsetPtr()` to access the array elements.
MRC_API MR_PrecipitationSimulator_SimulationStep *MR_PrecipitationSimulator_SimulationStep_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PrecipitationSimulator::SimulationStep` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PrecipitationSimulator_SimulationStep_Destroy()` to free it when you're done using it.
MRC_API MR_PrecipitationSimulator_SimulationStep *MR_PrecipitationSimulator_SimulationStep_ConstructFrom(MR_PrecipitationSimulator_Event event, float amount, MR_GraphVertId basin, MR_GraphVertId neiBasin);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PrecipitationSimulator_SimulationStep *MR_PrecipitationSimulator_SimulationStep_OffsetPtr(const MR_PrecipitationSimulator_SimulationStep *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PrecipitationSimulator_SimulationStep *MR_PrecipitationSimulator_SimulationStep_OffsetMutablePtr(MR_PrecipitationSimulator_SimulationStep *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PrecipitationSimulator::SimulationStep`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PrecipitationSimulator_SimulationStep_Destroy()` to free it when you're done using it.
MRC_API MR_PrecipitationSimulator_SimulationStep *MR_PrecipitationSimulator_SimulationStep_ConstructFromAnother(const MR_PrecipitationSimulator_SimulationStep *_other);

/// Destroys a heap-allocated instance of `MR_PrecipitationSimulator_SimulationStep`. Does nothing if the pointer is null.
MRC_API void MR_PrecipitationSimulator_SimulationStep_Destroy(const MR_PrecipitationSimulator_SimulationStep *_this);

/// Destroys a heap-allocated array of `MR_PrecipitationSimulator_SimulationStep`. Does nothing if the pointer is null.
MRC_API void MR_PrecipitationSimulator_SimulationStep_DestroyArray(const MR_PrecipitationSimulator_SimulationStep *_this);

/// Generated from a method of class `MR::PrecipitationSimulator::SimulationStep` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PrecipitationSimulator_SimulationStep *MR_PrecipitationSimulator_SimulationStep_AssignFromAnother(MR_PrecipitationSimulator_SimulationStep *_this, const MR_PrecipitationSimulator_SimulationStep *_other);

#ifdef __cplusplus
} // extern "C"
#endif
