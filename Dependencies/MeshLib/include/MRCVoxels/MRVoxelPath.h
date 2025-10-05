// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_function_float_from_uint64_t_uint64_t MR_std_function_float_from_uint64_t_uint64_t; // Defined in `#include <MRCMisc/std_function_float_from_uint64_t_uint64_t.h>`.
typedef struct MR_std_vector_uint64_t MR_std_vector_uint64_t; // Defined in `#include <MRCMisc/std_vector_uint64_t.h>`.


typedef char MR_QuarterBit;
enum // MR_QuarterBit
{
    MR_QuarterBit_LeftLeft = 1,
    MR_QuarterBit_LeftRight = 2,
    MR_QuarterBit_RightLeft = 4,
    MR_QuarterBit_RightRight = 8,
    MR_QuarterBit_All = 15,
};

/// Plane of slice in which to find path
typedef enum MR_SlicePlane
{
    ///< = 0 cause main axis is x - [0]
    MR_SlicePlane_YZ = 0,
    ///< = 1 cause main axis is y - [1]
    MR_SlicePlane_ZX = 1,
    ///< = 2 cause main axis is z - [2]
    MR_SlicePlane_XY = 2,
    ///< special value not to limit path in one slice
    MR_SlicePlane_None = 3,
} MR_SlicePlane;

/// Parameters for building metric function
/// Generated from class `MR::VoxelMetricParameters`.
typedef struct MR_VoxelMetricParameters MR_VoxelMetricParameters;

/// Generated from function `MR::operator&`.
MRC_API MR_QuarterBit MR_bitand_MR_QuarterBit(MR_QuarterBit a, MR_QuarterBit b);

/// Generated from function `MR::operator|`.
MRC_API MR_QuarterBit MR_bitor_MR_QuarterBit(MR_QuarterBit a, MR_QuarterBit b);

/// Generated from function `MR::operator~`.
MRC_API MR_QuarterBit MR_compl_MR_QuarterBit(MR_QuarterBit a);

/// Generated from function `MR::operator&=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_QuarterBit *MR_bitand_assign_MR_QuarterBit(MR_QuarterBit *a, MR_QuarterBit b);

/// Generated from function `MR::operator|=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_QuarterBit *MR_bitor_assign_MR_QuarterBit(MR_QuarterBit *a, MR_QuarterBit b);

/// Generated from function `MR::operator*`.
MRC_API MR_QuarterBit MR_mul_MR_QuarterBit_bool(MR_QuarterBit a, bool b);

/// Generated from function `MR::operator*`.
MRC_API MR_QuarterBit MR_mul_bool_MR_QuarterBit(bool a, MR_QuarterBit b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_QuarterBit *MR_mul_assign_MR_QuarterBit_bool(MR_QuarterBit *a, bool b);

///< start voxel index
/// Returns a pointer to a member variable of class `MR::VoxelMetricParameters` named `start`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_VoxelMetricParameters_Get_start(const MR_VoxelMetricParameters *_this);

///< start voxel index
/// Modifies a member variable of class `MR::VoxelMetricParameters` named `start`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelMetricParameters_Set_start(MR_VoxelMetricParameters *_this, MR_uint64_t value);

///< start voxel index
/// Returns a mutable pointer to a member variable of class `MR::VoxelMetricParameters` named `start`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_VoxelMetricParameters_GetMutable_start(MR_VoxelMetricParameters *_this);

///< stop voxel index
/// Returns a pointer to a member variable of class `MR::VoxelMetricParameters` named `stop`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_uint64_t *MR_VoxelMetricParameters_Get_stop(const MR_VoxelMetricParameters *_this);

///< stop voxel index
/// Modifies a member variable of class `MR::VoxelMetricParameters` named `stop`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelMetricParameters_Set_stop(MR_VoxelMetricParameters *_this, MR_uint64_t value);

///< stop voxel index
/// Returns a mutable pointer to a member variable of class `MR::VoxelMetricParameters` named `stop`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_uint64_t *MR_VoxelMetricParameters_GetMutable_stop(MR_VoxelMetricParameters *_this);

///< max distance ratio: if (dist^2(next,start) + dist^2(next,stop) > maxDistRatio^2*dist^2(start,stop)) - candidate is not processed
/// Returns a pointer to a member variable of class `MR::VoxelMetricParameters` named `maxDistRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_VoxelMetricParameters_Get_maxDistRatio(const MR_VoxelMetricParameters *_this);

///< max distance ratio: if (dist^2(next,start) + dist^2(next,stop) > maxDistRatio^2*dist^2(start,stop)) - candidate is not processed
/// Modifies a member variable of class `MR::VoxelMetricParameters` named `maxDistRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelMetricParameters_Set_maxDistRatio(MR_VoxelMetricParameters *_this, float value);

///< max distance ratio: if (dist^2(next,start) + dist^2(next,stop) > maxDistRatio^2*dist^2(start,stop)) - candidate is not processed
/// Returns a mutable pointer to a member variable of class `MR::VoxelMetricParameters` named `maxDistRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_VoxelMetricParameters_GetMutable_maxDistRatio(MR_VoxelMetricParameters *_this);

///< if not None - builds path in one slice of voxels (make sure start and stop has same main axis coordinate)
/// Returns a pointer to a member variable of class `MR::VoxelMetricParameters` named `plane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_SlicePlane *MR_VoxelMetricParameters_Get_plane(const MR_VoxelMetricParameters *_this);

///< if not None - builds path in one slice of voxels (make sure start and stop has same main axis coordinate)
/// Modifies a member variable of class `MR::VoxelMetricParameters` named `plane`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelMetricParameters_Set_plane(MR_VoxelMetricParameters *_this, MR_SlicePlane value);

///< if not None - builds path in one slice of voxels (make sure start and stop has same main axis coordinate)
/// Returns a mutable pointer to a member variable of class `MR::VoxelMetricParameters` named `plane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SlicePlane *MR_VoxelMetricParameters_GetMutable_plane(MR_VoxelMetricParameters *_this);

///< quarter of building path, if plane is selected, it should be (LeftLeft | LeftRigth) or (RigthLeft | RightRight) or All
/// Returns a pointer to a member variable of class `MR::VoxelMetricParameters` named `quatersMask`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_QuarterBit *MR_VoxelMetricParameters_Get_quatersMask(const MR_VoxelMetricParameters *_this);

///< quarter of building path, if plane is selected, it should be (LeftLeft | LeftRigth) or (RigthLeft | RightRight) or All
/// Modifies a member variable of class `MR::VoxelMetricParameters` named `quatersMask`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_VoxelMetricParameters_Set_quatersMask(MR_VoxelMetricParameters *_this, MR_QuarterBit value);

///< quarter of building path, if plane is selected, it should be (LeftLeft | LeftRigth) or (RigthLeft | RightRight) or All
/// Returns a mutable pointer to a member variable of class `MR::VoxelMetricParameters` named `quatersMask`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_QuarterBit *MR_VoxelMetricParameters_GetMutable_quatersMask(MR_VoxelMetricParameters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelMetricParameters_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelMetricParameters *MR_VoxelMetricParameters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_VoxelMetricParameters_DestroyArray()`.
/// Use `MR_VoxelMetricParameters_OffsetMutablePtr()` and `MR_VoxelMetricParameters_OffsetPtr()` to access the array elements.
MRC_API MR_VoxelMetricParameters *MR_VoxelMetricParameters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::VoxelMetricParameters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelMetricParameters_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelMetricParameters *MR_VoxelMetricParameters_ConstructFrom(MR_uint64_t start, MR_uint64_t stop, float maxDistRatio, MR_SlicePlane plane, MR_QuarterBit quatersMask);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_VoxelMetricParameters *MR_VoxelMetricParameters_OffsetPtr(const MR_VoxelMetricParameters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_VoxelMetricParameters *MR_VoxelMetricParameters_OffsetMutablePtr(MR_VoxelMetricParameters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::VoxelMetricParameters`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VoxelMetricParameters_Destroy()` to free it when you're done using it.
MRC_API MR_VoxelMetricParameters *MR_VoxelMetricParameters_ConstructFromAnother(const MR_VoxelMetricParameters *_other);

/// Destroys a heap-allocated instance of `MR_VoxelMetricParameters`. Does nothing if the pointer is null.
MRC_API void MR_VoxelMetricParameters_Destroy(const MR_VoxelMetricParameters *_this);

/// Destroys a heap-allocated array of `MR_VoxelMetricParameters`. Does nothing if the pointer is null.
MRC_API void MR_VoxelMetricParameters_DestroyArray(const MR_VoxelMetricParameters *_this);

/// Generated from a method of class `MR::VoxelMetricParameters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VoxelMetricParameters *MR_VoxelMetricParameters_AssignFromAnother(MR_VoxelMetricParameters *_this, const MR_VoxelMetricParameters *_other);

/// e^(modifier*(dens1+dens2))
/// Generated from function `MR::voxelsExponentMetric`.
/// Parameter `voxels` can not be null. It is a single object.
/// Parameter `parameters` can not be null. It is a single object.
/// Parameter `modifier` has a default argument: `-1.F`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_uint64_t_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_uint64_t_uint64_t *MR_voxelsExponentMetric(const MR_VdbVolume *voxels, const MR_VoxelMetricParameters *parameters, const float *modifier);

/// sum of dense differences with start and stop voxels
/// Generated from function `MR::voxelsSumDiffsMetric`.
/// Parameter `voxels` can not be null. It is a single object.
/// Parameter `parameters` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_float_from_uint64_t_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_float_from_uint64_t_uint64_t *MR_voxelsSumDiffsMetric(const MR_VdbVolume *voxels, const MR_VoxelMetricParameters *parameters);

/// builds shortest path in given metric from start to finish voxels; if no path can be found then empty path is returned
/// Generated from function `MR::buildSmallestMetricPath`.
/// Parameter `voxels` can not be null. It is a single object.
/// Parameter `metric` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_uint64_t_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_uint64_t *MR_buildSmallestMetricPath_const_MR_VdbVolume_ref(const MR_VdbVolume *voxels, const MR_std_function_float_from_uint64_t_uint64_t *metric, MR_uint64_t start, MR_uint64_t finish, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
