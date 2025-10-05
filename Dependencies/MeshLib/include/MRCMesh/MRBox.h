// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_NoInit MR_NoInit; // Defined in `#include <MRCMesh/MRMeshFwd.h>`.
typedef struct MR_SimpleVolumeMinMax MR_SimpleVolumeMinMax; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleVolumeMinMaxU16 MR_SimpleVolumeMinMaxU16; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.


/// Box given by its min- and max- corners
/// Generated from class `MR::Box1i`.
typedef struct MR_Box1i
{
    int32_t min;
    int32_t max;
} MR_Box1i;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box1i64`.
typedef struct MR_Box1i64
{
    MR_int64_t min;
    MR_int64_t max;
} MR_Box1i64;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box1f`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::SimpleVolumeMinMax`
///     `MR::VdbVolume`
typedef struct MR_Box1f
{
    float min;
    float max;
} MR_Box1f;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box1d`.
typedef struct MR_Box1d
{
    double min;
    double max;
} MR_Box1d;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box2i`.
typedef struct MR_Box2i
{
    MR_Vector2i min;
    MR_Vector2i max;
} MR_Box2i;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box2i64`.
typedef struct MR_Box2i64
{
    MR_Vector2i64 min;
    MR_Vector2i64 max;
} MR_Box2i64;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box2f`.
typedef struct MR_Box2f
{
    MR_Vector2f min;
    MR_Vector2f max;
} MR_Box2f;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box2d`.
typedef struct MR_Box2d
{
    MR_Vector2d min;
    MR_Vector2d max;
} MR_Box2d;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box3i`.
typedef struct MR_Box3i
{
    MR_Vector3i min;
    MR_Vector3i max;
} MR_Box3i;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box3i64`.
typedef struct MR_Box3i64
{
    MR_Vector3i64 min;
    MR_Vector3i64 max;
} MR_Box3i64;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box3f`.
typedef struct MR_Box3f
{
    MR_Vector3f min;
    MR_Vector3f max;
} MR_Box3f;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box3d`.
typedef struct MR_Box3d
{
    MR_Vector3d min;
    MR_Vector3d max;
} MR_Box3d;

/// Box given by its min- and max- corners
/// Generated from class `MR::Box<uint16_t>`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::SimpleVolumeMinMaxU16`
typedef struct MR_Box_uint16_t MR_Box_uint16_t;

/// Returns a pointer to a member variable of class `MR::Box1i` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box1i_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box1i MR_Box1i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box1i_DestroyArray()`.
/// Use `MR_Box1i_OffsetMutablePtr()` and `MR_Box1i_OffsetPtr()` to access the array elements.
MRC_API MR_Box1i *MR_Box1i_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box1i`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box1i MR_Box1i_Construct_2(const int32_t *min, const int32_t *max);

/// Generated from a constructor of class `MR::Box1i`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box1i MR_Box1i_Construct_1(const MR_NoInit *_1);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box1i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box1i_index_const(const MR_Box1i *_this, int32_t e);

/// Generated from a method of class `MR::Box1i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_Box1i_index(MR_Box1i *_this, int32_t e);

/// Generated from a method of class `MR::Box1i` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box1i MR_Box1i_fromMinAndSize(const int32_t *min, const int32_t *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box1i` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box1i_valid(const MR_Box1i *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box1i` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Box1i_center(const MR_Box1i *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box1i` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API int32_t MR_Box1i_corner(const MR_Box1i *_this, const bool *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box1i` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box1i_getMinBoxCorner(const int32_t *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box1i` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box1i_getMaxBoxCorner(const int32_t *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box1i` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Box1i_size(const MR_Box1i *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box1i` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Box1i_diagonal(const MR_Box1i *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box1i` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Box1i_volume(const MR_Box1i *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box1i` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box1i_include_int32_t(MR_Box1i *_this, const int32_t *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box1i` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box1i_include_MR_Box1i(MR_Box1i *_this, const MR_Box1i *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box1i` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box1i_contains_int32_t(const MR_Box1i *_this, const int32_t *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box1i` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box1i_contains_MR_Box1i(const MR_Box1i *_this, const MR_Box1i *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box1i` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API int32_t MR_Box1i_getBoxClosestPointTo(const MR_Box1i *_this, const int32_t *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box1i` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box1i_intersects(const MR_Box1i *_this, const MR_Box1i *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box1i` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box1i MR_Box1i_intersection(const MR_Box1i *_this, const MR_Box1i *b);

/// Generated from a method of class `MR::Box1i` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box1i *MR_Box1i_intersect(MR_Box1i *_this, const MR_Box1i *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box1i` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API int32_t MR_Box1i_getDistanceSq_MR_Box1i(const MR_Box1i *_this, const MR_Box1i *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box1i` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API int32_t MR_Box1i_getDistanceSq_int32_t(const MR_Box1i *_this, const int32_t *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box1i` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API int32_t MR_Box1i_getProjection(const MR_Box1i *_this, const int32_t *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box1i` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box1i MR_Box1i_expanded(const MR_Box1i *_this, const int32_t *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box1i` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box1i MR_Box1i_insignificantlyExpanded(const MR_Box1i *_this);

/// Generated from a method of class `MR::Box1i` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box1i(const MR_Box1i *_this, const MR_Box1i *a);

/// Generated from a method of class `MR::Box1i` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box1i(const MR_Box1i *_this, const MR_Box1i *a);

/// Returns a pointer to a member variable of class `MR::Box1i64` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box1i64_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box1i64 MR_Box1i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box1i64_DestroyArray()`.
/// Use `MR_Box1i64_OffsetMutablePtr()` and `MR_Box1i64_OffsetPtr()` to access the array elements.
MRC_API MR_Box1i64 *MR_Box1i64_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box1i64`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box1i64 MR_Box1i64_Construct_2(const MR_int64_t *min, const MR_int64_t *max);

/// Generated from a constructor of class `MR::Box1i64`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box1i64 MR_Box1i64_Construct_1(const MR_NoInit *_1);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box1i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_int64_t *MR_Box1i64_index_const(const MR_Box1i64 *_this, int32_t e);

/// Generated from a method of class `MR::Box1i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_int64_t *MR_Box1i64_index(MR_Box1i64 *_this, int32_t e);

/// Generated from a method of class `MR::Box1i64` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box1i64 MR_Box1i64_fromMinAndSize(const MR_int64_t *min, const MR_int64_t *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box1i64` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box1i64_valid(const MR_Box1i64 *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box1i64` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box1i64_center(const MR_Box1i64 *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box1i64` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box1i64_corner(const MR_Box1i64 *_this, const bool *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box1i64` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box1i64_getMinBoxCorner(const MR_int64_t *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box1i64` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box1i64_getMaxBoxCorner(const MR_int64_t *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box1i64` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box1i64_size(const MR_Box1i64 *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box1i64` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box1i64_diagonal(const MR_Box1i64 *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box1i64` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box1i64_volume(const MR_Box1i64 *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box1i64` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box1i64_include_int64_t(MR_Box1i64 *_this, const MR_int64_t *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box1i64` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box1i64_include_MR_Box1i64(MR_Box1i64 *_this, const MR_Box1i64 *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box1i64` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box1i64_contains_int64_t(const MR_Box1i64 *_this, const MR_int64_t *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box1i64` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box1i64_contains_MR_Box1i64(const MR_Box1i64 *_this, const MR_Box1i64 *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box1i64` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box1i64_getBoxClosestPointTo(const MR_Box1i64 *_this, const MR_int64_t *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box1i64` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box1i64_intersects(const MR_Box1i64 *_this, const MR_Box1i64 *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box1i64` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box1i64 MR_Box1i64_intersection(const MR_Box1i64 *_this, const MR_Box1i64 *b);

/// Generated from a method of class `MR::Box1i64` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box1i64 *MR_Box1i64_intersect(MR_Box1i64 *_this, const MR_Box1i64 *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box1i64` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box1i64_getDistanceSq_MR_Box1i64(const MR_Box1i64 *_this, const MR_Box1i64 *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box1i64` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box1i64_getDistanceSq_int64_t(const MR_Box1i64 *_this, const MR_int64_t *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box1i64` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box1i64_getProjection(const MR_Box1i64 *_this, const MR_int64_t *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box1i64` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box1i64 MR_Box1i64_expanded(const MR_Box1i64 *_this, const MR_int64_t *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box1i64` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box1i64 MR_Box1i64_insignificantlyExpanded(const MR_Box1i64 *_this);

/// Generated from a method of class `MR::Box1i64` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box1i64(const MR_Box1i64 *_this, const MR_Box1i64 *a);

/// Generated from a method of class `MR::Box1i64` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box1i64(const MR_Box1i64 *_this, const MR_Box1i64 *a);

/// Returns a pointer to a member variable of class `MR::Box1f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box1f_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box1f MR_Box1f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box1f_DestroyArray()`.
/// Use `MR_Box1f_OffsetMutablePtr()` and `MR_Box1f_OffsetPtr()` to access the array elements.
MRC_API MR_Box1f *MR_Box1f_DefaultConstructArray(size_t num_elems);

/// Downcasts an instance of `MR::Box1f` to a derived class `MR::SimpleVolumeMinMax`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SimpleVolumeMinMax *MR_Box1f_StaticDowncastTo_MR_SimpleVolumeMinMax(const MR_Box1f *object);

/// Downcasts an instance of `MR::Box1f` to a derived class `MR::SimpleVolumeMinMax`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SimpleVolumeMinMax *MR_Box1f_MutableStaticDowncastTo_MR_SimpleVolumeMinMax(MR_Box1f *object);

/// Downcasts an instance of `MR::Box1f` to a derived class `MR::VdbVolume`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_VdbVolume *MR_Box1f_StaticDowncastTo_MR_VdbVolume(const MR_Box1f *object);

/// Downcasts an instance of `MR::Box1f` to a derived class `MR::VdbVolume`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_VdbVolume *MR_Box1f_MutableStaticDowncastTo_MR_VdbVolume(MR_Box1f *object);

/// Generated from a constructor of class `MR::Box1f`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box1f MR_Box1f_Construct_2(const float *min, const float *max);

/// Generated from a constructor of class `MR::Box1f`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box1f MR_Box1f_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Box1f`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Box1f MR_Box1f_Construct_float(const MR_Box1f *a);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box1f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Box1f_index_const(const MR_Box1f *_this, int32_t e);

/// Generated from a method of class `MR::Box1f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Box1f_index(MR_Box1f *_this, int32_t e);

/// Generated from a method of class `MR::Box1f` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box1f MR_Box1f_fromMinAndSize(const float *min, const float *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box1f` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box1f_valid(const MR_Box1f *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box1f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Box1f_center(const MR_Box1f *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box1f` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API float MR_Box1f_corner(const MR_Box1f *_this, const bool *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box1f` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box1f_getMinBoxCorner(const float *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box1f` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box1f_getMaxBoxCorner(const float *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box1f` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Box1f_size(const MR_Box1f *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box1f` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Box1f_diagonal(const MR_Box1f *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box1f` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Box1f_volume(const MR_Box1f *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box1f` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box1f_include_float(MR_Box1f *_this, const float *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box1f` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box1f_include_MR_Box1f(MR_Box1f *_this, const MR_Box1f *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box1f` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box1f_contains_float(const MR_Box1f *_this, const float *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box1f` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box1f_contains_MR_Box1f(const MR_Box1f *_this, const MR_Box1f *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box1f` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API float MR_Box1f_getBoxClosestPointTo(const MR_Box1f *_this, const float *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box1f` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box1f_intersects(const MR_Box1f *_this, const MR_Box1f *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box1f` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box1f MR_Box1f_intersection(const MR_Box1f *_this, const MR_Box1f *b);

/// Generated from a method of class `MR::Box1f` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box1f *MR_Box1f_intersect(MR_Box1f *_this, const MR_Box1f *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box1f` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API float MR_Box1f_getDistanceSq_MR_Box1f(const MR_Box1f *_this, const MR_Box1f *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box1f` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API float MR_Box1f_getDistanceSq_float(const MR_Box1f *_this, const float *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box1f` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API float MR_Box1f_getProjection(const MR_Box1f *_this, const float *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box1f` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box1f MR_Box1f_expanded(const MR_Box1f *_this, const float *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box1f` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box1f MR_Box1f_insignificantlyExpanded(const MR_Box1f *_this);

/// Generated from a method of class `MR::Box1f` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box1f(const MR_Box1f *_this, const MR_Box1f *a);

/// Generated from a method of class `MR::Box1f` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box1f(const MR_Box1f *_this, const MR_Box1f *a);

/// Returns a pointer to a member variable of class `MR::Box1d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box1d_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box1d MR_Box1d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box1d_DestroyArray()`.
/// Use `MR_Box1d_OffsetMutablePtr()` and `MR_Box1d_OffsetPtr()` to access the array elements.
MRC_API MR_Box1d *MR_Box1d_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box1d`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box1d MR_Box1d_Construct_2(const double *min, const double *max);

/// Generated from a constructor of class `MR::Box1d`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box1d MR_Box1d_Construct_1(const MR_NoInit *_1);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box1d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Box1d_index_const(const MR_Box1d *_this, int32_t e);

/// Generated from a method of class `MR::Box1d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Box1d_index(MR_Box1d *_this, int32_t e);

/// Generated from a method of class `MR::Box1d` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box1d MR_Box1d_fromMinAndSize(const double *min, const double *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box1d` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box1d_valid(const MR_Box1d *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box1d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Box1d_center(const MR_Box1d *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box1d` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API double MR_Box1d_corner(const MR_Box1d *_this, const bool *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box1d` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box1d_getMinBoxCorner(const double *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box1d` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box1d_getMaxBoxCorner(const double *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box1d` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Box1d_size(const MR_Box1d *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box1d` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Box1d_diagonal(const MR_Box1d *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box1d` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Box1d_volume(const MR_Box1d *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box1d` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box1d_include_double(MR_Box1d *_this, const double *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box1d` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box1d_include_MR_Box1d(MR_Box1d *_this, const MR_Box1d *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box1d` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box1d_contains_double(const MR_Box1d *_this, const double *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box1d` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box1d_contains_MR_Box1d(const MR_Box1d *_this, const MR_Box1d *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box1d` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API double MR_Box1d_getBoxClosestPointTo(const MR_Box1d *_this, const double *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box1d` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box1d_intersects(const MR_Box1d *_this, const MR_Box1d *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box1d` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box1d MR_Box1d_intersection(const MR_Box1d *_this, const MR_Box1d *b);

/// Generated from a method of class `MR::Box1d` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box1d *MR_Box1d_intersect(MR_Box1d *_this, const MR_Box1d *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box1d` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API double MR_Box1d_getDistanceSq_MR_Box1d(const MR_Box1d *_this, const MR_Box1d *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box1d` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API double MR_Box1d_getDistanceSq_double(const MR_Box1d *_this, const double *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box1d` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API double MR_Box1d_getProjection(const MR_Box1d *_this, const double *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box1d` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box1d MR_Box1d_expanded(const MR_Box1d *_this, const double *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box1d` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box1d MR_Box1d_insignificantlyExpanded(const MR_Box1d *_this);

/// Generated from a method of class `MR::Box1d` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box1d(const MR_Box1d *_this, const MR_Box1d *a);

/// Generated from a method of class `MR::Box1d` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box1d(const MR_Box1d *_this, const MR_Box1d *a);

/// Returns a pointer to a member variable of class `MR::Box2i` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box2i_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box2i MR_Box2i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box2i_DestroyArray()`.
/// Use `MR_Box2i_OffsetMutablePtr()` and `MR_Box2i_OffsetPtr()` to access the array elements.
MRC_API MR_Box2i *MR_Box2i_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box2i`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box2i MR_Box2i_Construct_2(const MR_Vector2i *min, const MR_Vector2i *max);

// If the compiler supports `requires`, use that instead of `std::enable_if` here.
// Not (only) because it looks cooler, but because of a bug in our binding generator that makes it choke on it: https://github.com/MeshInspector/mrbind/issues/19
/// Generated from a constructor of class `MR::Box2i`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box2i MR_Box2i_Construct_1(const MR_NoInit *_1);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box2i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_Box2i_index_const(const MR_Box2i *_this, int32_t e);

/// Generated from a method of class `MR::Box2i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_Box2i_index(MR_Box2i *_this, int32_t e);

/// Generated from a method of class `MR::Box2i` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box2i MR_Box2i_fromMinAndSize(const MR_Vector2i *min, const MR_Vector2i *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box2i` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box2i_valid(const MR_Box2i *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box2i` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i MR_Box2i_center(const MR_Box2i *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box2i` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API MR_Vector2i MR_Box2i_corner(const MR_Box2i *_this, const MR_Vector2b *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box2i` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Box2i_getMinBoxCorner(const MR_Vector2i *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box2i` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Box2i_getMaxBoxCorner(const MR_Vector2i *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box2i` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i MR_Box2i_size(const MR_Box2i *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box2i` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Box2i_diagonal(const MR_Box2i *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box2i` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Box2i_volume(const MR_Box2i *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box2i` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box2i_include_MR_Vector2i(MR_Box2i *_this, const MR_Vector2i *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box2i` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box2i_include_MR_Box2i(MR_Box2i *_this, const MR_Box2i *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box2i` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box2i_contains_MR_Vector2i(const MR_Box2i *_this, const MR_Vector2i *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box2i` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box2i_contains_MR_Box2i(const MR_Box2i *_this, const MR_Box2i *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box2i` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector2i MR_Box2i_getBoxClosestPointTo(const MR_Box2i *_this, const MR_Vector2i *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box2i` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box2i_intersects(const MR_Box2i *_this, const MR_Box2i *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box2i` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box2i MR_Box2i_intersection(const MR_Box2i *_this, const MR_Box2i *b);

/// Generated from a method of class `MR::Box2i` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box2i *MR_Box2i_intersect(MR_Box2i *_this, const MR_Box2i *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box2i` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API int32_t MR_Box2i_getDistanceSq_MR_Box2i(const MR_Box2i *_this, const MR_Box2i *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box2i` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API int32_t MR_Box2i_getDistanceSq_MR_Vector2i(const MR_Box2i *_this, const MR_Vector2i *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box2i` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector2i MR_Box2i_getProjection(const MR_Box2i *_this, const MR_Vector2i *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box2i` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box2i MR_Box2i_expanded(const MR_Box2i *_this, const MR_Vector2i *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box2i` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box2i MR_Box2i_insignificantlyExpanded(const MR_Box2i *_this);

/// Generated from a method of class `MR::Box2i` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box2i(const MR_Box2i *_this, const MR_Box2i *a);

/// Generated from a method of class `MR::Box2i` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box2i(const MR_Box2i *_this, const MR_Box2i *a);

/// Returns a pointer to a member variable of class `MR::Box2i64` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box2i64_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box2i64 MR_Box2i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box2i64_DestroyArray()`.
/// Use `MR_Box2i64_OffsetMutablePtr()` and `MR_Box2i64_OffsetPtr()` to access the array elements.
MRC_API MR_Box2i64 *MR_Box2i64_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box2i64`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box2i64 MR_Box2i64_Construct_2(const MR_Vector2i64 *min, const MR_Vector2i64 *max);

// If the compiler supports `requires`, use that instead of `std::enable_if` here.
// Not (only) because it looks cooler, but because of a bug in our binding generator that makes it choke on it: https://github.com/MeshInspector/mrbind/issues/19
/// Generated from a constructor of class `MR::Box2i64`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box2i64 MR_Box2i64_Construct_1(const MR_NoInit *_1);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box2i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i64 *MR_Box2i64_index_const(const MR_Box2i64 *_this, int32_t e);

/// Generated from a method of class `MR::Box2i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i64 *MR_Box2i64_index(MR_Box2i64 *_this, int32_t e);

/// Generated from a method of class `MR::Box2i64` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box2i64 MR_Box2i64_fromMinAndSize(const MR_Vector2i64 *min, const MR_Vector2i64 *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box2i64` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box2i64_valid(const MR_Box2i64 *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box2i64` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_Box2i64_center(const MR_Box2i64 *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box2i64` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_Box2i64_corner(const MR_Box2i64 *_this, const MR_Vector2b *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box2i64` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Box2i64_getMinBoxCorner(const MR_Vector2i64 *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box2i64` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Box2i64_getMaxBoxCorner(const MR_Vector2i64 *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box2i64` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_Box2i64_size(const MR_Box2i64 *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box2i64` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box2i64_diagonal(const MR_Box2i64 *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box2i64` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box2i64_volume(const MR_Box2i64 *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box2i64` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box2i64_include_MR_Vector2i64(MR_Box2i64 *_this, const MR_Vector2i64 *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box2i64` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box2i64_include_MR_Box2i64(MR_Box2i64 *_this, const MR_Box2i64 *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box2i64` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box2i64_contains_MR_Vector2i64(const MR_Box2i64 *_this, const MR_Vector2i64 *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box2i64` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box2i64_contains_MR_Box2i64(const MR_Box2i64 *_this, const MR_Box2i64 *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box2i64` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_Box2i64_getBoxClosestPointTo(const MR_Box2i64 *_this, const MR_Vector2i64 *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box2i64` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box2i64_intersects(const MR_Box2i64 *_this, const MR_Box2i64 *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box2i64` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box2i64 MR_Box2i64_intersection(const MR_Box2i64 *_this, const MR_Box2i64 *b);

/// Generated from a method of class `MR::Box2i64` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box2i64 *MR_Box2i64_intersect(MR_Box2i64 *_this, const MR_Box2i64 *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box2i64` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box2i64_getDistanceSq_MR_Box2i64(const MR_Box2i64 *_this, const MR_Box2i64 *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box2i64` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box2i64_getDistanceSq_MR_Vector2i64(const MR_Box2i64 *_this, const MR_Vector2i64 *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box2i64` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector2i64 MR_Box2i64_getProjection(const MR_Box2i64 *_this, const MR_Vector2i64 *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box2i64` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box2i64 MR_Box2i64_expanded(const MR_Box2i64 *_this, const MR_Vector2i64 *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box2i64` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box2i64 MR_Box2i64_insignificantlyExpanded(const MR_Box2i64 *_this);

/// Generated from a method of class `MR::Box2i64` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box2i64(const MR_Box2i64 *_this, const MR_Box2i64 *a);

/// Generated from a method of class `MR::Box2i64` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box2i64(const MR_Box2i64 *_this, const MR_Box2i64 *a);

/// Returns a pointer to a member variable of class `MR::Box2f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box2f_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box2f MR_Box2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box2f_DestroyArray()`.
/// Use `MR_Box2f_OffsetMutablePtr()` and `MR_Box2f_OffsetPtr()` to access the array elements.
MRC_API MR_Box2f *MR_Box2f_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box2f`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box2f MR_Box2f_Construct_2(const MR_Vector2f *min, const MR_Vector2f *max);

// If the compiler supports `requires`, use that instead of `std::enable_if` here.
// Not (only) because it looks cooler, but because of a bug in our binding generator that makes it choke on it: https://github.com/MeshInspector/mrbind/issues/19
/// Generated from a constructor of class `MR::Box2f`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box2f MR_Box2f_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Box2f`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Box2f MR_Box2f_Construct_MR_Vector2f(const MR_Box2f *a);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box2f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2f *MR_Box2f_index_const(const MR_Box2f *_this, int32_t e);

/// Generated from a method of class `MR::Box2f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2f *MR_Box2f_index(MR_Box2f *_this, int32_t e);

/// Generated from a method of class `MR::Box2f` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box2f MR_Box2f_fromMinAndSize(const MR_Vector2f *min, const MR_Vector2f *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box2f` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box2f_valid(const MR_Box2f *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box2f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Box2f_center(const MR_Box2f *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box2f` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Box2f_corner(const MR_Box2f *_this, const MR_Vector2b *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box2f` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Box2f_getMinBoxCorner(const MR_Vector2f *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box2f` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Box2f_getMaxBoxCorner(const MR_Vector2f *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box2f` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Box2f_size(const MR_Box2f *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box2f` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Box2f_diagonal(const MR_Box2f *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box2f` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Box2f_volume(const MR_Box2f *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box2f` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box2f_include_MR_Vector2f(MR_Box2f *_this, const MR_Vector2f *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box2f` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box2f_include_MR_Box2f(MR_Box2f *_this, const MR_Box2f *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box2f` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box2f_contains_MR_Vector2f(const MR_Box2f *_this, const MR_Vector2f *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box2f` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box2f_contains_MR_Box2f(const MR_Box2f *_this, const MR_Box2f *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box2f` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Box2f_getBoxClosestPointTo(const MR_Box2f *_this, const MR_Vector2f *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box2f` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box2f_intersects(const MR_Box2f *_this, const MR_Box2f *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box2f` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box2f MR_Box2f_intersection(const MR_Box2f *_this, const MR_Box2f *b);

/// Generated from a method of class `MR::Box2f` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box2f *MR_Box2f_intersect(MR_Box2f *_this, const MR_Box2f *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box2f` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API float MR_Box2f_getDistanceSq_MR_Box2f(const MR_Box2f *_this, const MR_Box2f *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box2f` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API float MR_Box2f_getDistanceSq_MR_Vector2f(const MR_Box2f *_this, const MR_Vector2f *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box2f` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector2f MR_Box2f_getProjection(const MR_Box2f *_this, const MR_Vector2f *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box2f` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box2f MR_Box2f_expanded(const MR_Box2f *_this, const MR_Vector2f *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box2f` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box2f MR_Box2f_insignificantlyExpanded(const MR_Box2f *_this);

/// Generated from a method of class `MR::Box2f` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box2f(const MR_Box2f *_this, const MR_Box2f *a);

/// Generated from a method of class `MR::Box2f` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box2f(const MR_Box2f *_this, const MR_Box2f *a);

/// Returns a pointer to a member variable of class `MR::Box2d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box2d_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box2d MR_Box2d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box2d_DestroyArray()`.
/// Use `MR_Box2d_OffsetMutablePtr()` and `MR_Box2d_OffsetPtr()` to access the array elements.
MRC_API MR_Box2d *MR_Box2d_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box2d`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box2d MR_Box2d_Construct_2(const MR_Vector2d *min, const MR_Vector2d *max);

// If the compiler supports `requires`, use that instead of `std::enable_if` here.
// Not (only) because it looks cooler, but because of a bug in our binding generator that makes it choke on it: https://github.com/MeshInspector/mrbind/issues/19
/// Generated from a constructor of class `MR::Box2d`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box2d MR_Box2d_Construct_1(const MR_NoInit *_1);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box2d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2d *MR_Box2d_index_const(const MR_Box2d *_this, int32_t e);

/// Generated from a method of class `MR::Box2d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2d *MR_Box2d_index(MR_Box2d *_this, int32_t e);

/// Generated from a method of class `MR::Box2d` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box2d MR_Box2d_fromMinAndSize(const MR_Vector2d *min, const MR_Vector2d *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box2d` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box2d_valid(const MR_Box2d *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box2d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Box2d_center(const MR_Box2d *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box2d` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Box2d_corner(const MR_Box2d *_this, const MR_Vector2b *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box2d` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Box2d_getMinBoxCorner(const MR_Vector2d *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box2d` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector2b MR_Box2d_getMaxBoxCorner(const MR_Vector2d *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box2d` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Box2d_size(const MR_Box2d *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box2d` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Box2d_diagonal(const MR_Box2d *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box2d` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Box2d_volume(const MR_Box2d *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box2d` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box2d_include_MR_Vector2d(MR_Box2d *_this, const MR_Vector2d *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box2d` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box2d_include_MR_Box2d(MR_Box2d *_this, const MR_Box2d *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box2d` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box2d_contains_MR_Vector2d(const MR_Box2d *_this, const MR_Vector2d *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box2d` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box2d_contains_MR_Box2d(const MR_Box2d *_this, const MR_Box2d *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box2d` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Box2d_getBoxClosestPointTo(const MR_Box2d *_this, const MR_Vector2d *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box2d` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box2d_intersects(const MR_Box2d *_this, const MR_Box2d *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box2d` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box2d MR_Box2d_intersection(const MR_Box2d *_this, const MR_Box2d *b);

/// Generated from a method of class `MR::Box2d` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box2d *MR_Box2d_intersect(MR_Box2d *_this, const MR_Box2d *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box2d` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API double MR_Box2d_getDistanceSq_MR_Box2d(const MR_Box2d *_this, const MR_Box2d *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box2d` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API double MR_Box2d_getDistanceSq_MR_Vector2d(const MR_Box2d *_this, const MR_Vector2d *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box2d` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector2d MR_Box2d_getProjection(const MR_Box2d *_this, const MR_Vector2d *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box2d` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box2d MR_Box2d_expanded(const MR_Box2d *_this, const MR_Vector2d *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box2d` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box2d MR_Box2d_insignificantlyExpanded(const MR_Box2d *_this);

/// Generated from a method of class `MR::Box2d` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box2d(const MR_Box2d *_this, const MR_Box2d *a);

/// Generated from a method of class `MR::Box2d` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box2d(const MR_Box2d *_this, const MR_Box2d *a);

/// Returns a pointer to a member variable of class `MR::Box3i` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box3i_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box3i MR_Box3i_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box3i_DestroyArray()`.
/// Use `MR_Box3i_OffsetMutablePtr()` and `MR_Box3i_OffsetPtr()` to access the array elements.
MRC_API MR_Box3i *MR_Box3i_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box3i`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box3i MR_Box3i_Construct_2(const MR_Vector3i *min, const MR_Vector3i *max);

// If the compiler supports `requires`, use that instead of `std::enable_if` here.
// Not (only) because it looks cooler, but because of a bug in our binding generator that makes it choke on it: https://github.com/MeshInspector/mrbind/issues/19
/// Generated from a constructor of class `MR::Box3i`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box3i MR_Box3i_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Box3i`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Box3i MR_Box3i_Construct_MR_Vector3i(const MR_Box3i *a);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box3i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_Box3i_index_const(const MR_Box3i *_this, int32_t e);

/// Generated from a method of class `MR::Box3i` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_Box3i_index(MR_Box3i *_this, int32_t e);

/// Generated from a method of class `MR::Box3i` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box3i MR_Box3i_fromMinAndSize(const MR_Vector3i *min, const MR_Vector3i *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box3i` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box3i_valid(const MR_Box3i *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box3i` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Box3i_center(const MR_Box3i *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box3i` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Box3i_corner(const MR_Box3i *_this, const MR_Vector3b *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box3i` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Box3i_getMinBoxCorner(const MR_Vector3i *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box3i` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Box3i_getMaxBoxCorner(const MR_Vector3i *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box3i` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Box3i_size(const MR_Box3i *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box3i` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Box3i_diagonal(const MR_Box3i *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box3i` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_Box3i_volume(const MR_Box3i *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box3i` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box3i_include_MR_Vector3i(MR_Box3i *_this, const MR_Vector3i *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box3i` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box3i_include_MR_Box3i(MR_Box3i *_this, const MR_Box3i *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box3i` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box3i_contains_MR_Vector3i(const MR_Box3i *_this, const MR_Vector3i *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box3i` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box3i_contains_MR_Box3i(const MR_Box3i *_this, const MR_Box3i *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box3i` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Box3i_getBoxClosestPointTo(const MR_Box3i *_this, const MR_Vector3i *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box3i` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box3i_intersects(const MR_Box3i *_this, const MR_Box3i *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box3i` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box3i MR_Box3i_intersection(const MR_Box3i *_this, const MR_Box3i *b);

/// Generated from a method of class `MR::Box3i` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box3i *MR_Box3i_intersect(MR_Box3i *_this, const MR_Box3i *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box3i` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API int32_t MR_Box3i_getDistanceSq_MR_Box3i(const MR_Box3i *_this, const MR_Box3i *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box3i` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API int32_t MR_Box3i_getDistanceSq_MR_Vector3i(const MR_Box3i *_this, const MR_Vector3i *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box3i` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3i MR_Box3i_getProjection(const MR_Box3i *_this, const MR_Vector3i *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box3i` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box3i MR_Box3i_expanded(const MR_Box3i *_this, const MR_Vector3i *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box3i` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3i MR_Box3i_insignificantlyExpanded(const MR_Box3i *_this);

/// Generated from a method of class `MR::Box3i` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box3i(const MR_Box3i *_this, const MR_Box3i *a);

/// Generated from a method of class `MR::Box3i` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box3i(const MR_Box3i *_this, const MR_Box3i *a);

/// Returns a pointer to a member variable of class `MR::Box3i64` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box3i64_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box3i64 MR_Box3i64_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box3i64_DestroyArray()`.
/// Use `MR_Box3i64_OffsetMutablePtr()` and `MR_Box3i64_OffsetPtr()` to access the array elements.
MRC_API MR_Box3i64 *MR_Box3i64_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box3i64`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box3i64 MR_Box3i64_Construct_2(const MR_Vector3i64 *min, const MR_Vector3i64 *max);

// If the compiler supports `requires`, use that instead of `std::enable_if` here.
// Not (only) because it looks cooler, but because of a bug in our binding generator that makes it choke on it: https://github.com/MeshInspector/mrbind/issues/19
/// Generated from a constructor of class `MR::Box3i64`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box3i64 MR_Box3i64_Construct_1(const MR_NoInit *_1);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box3i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i64 *MR_Box3i64_index_const(const MR_Box3i64 *_this, int32_t e);

/// Generated from a method of class `MR::Box3i64` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i64 *MR_Box3i64_index(MR_Box3i64 *_this, int32_t e);

/// Generated from a method of class `MR::Box3i64` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box3i64 MR_Box3i64_fromMinAndSize(const MR_Vector3i64 *min, const MR_Vector3i64 *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box3i64` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box3i64_valid(const MR_Box3i64 *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box3i64` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_Box3i64_center(const MR_Box3i64 *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box3i64` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_Box3i64_corner(const MR_Box3i64 *_this, const MR_Vector3b *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box3i64` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Box3i64_getMinBoxCorner(const MR_Vector3i64 *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box3i64` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Box3i64_getMaxBoxCorner(const MR_Vector3i64 *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box3i64` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_Box3i64_size(const MR_Box3i64 *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box3i64` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box3i64_diagonal(const MR_Box3i64 *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box3i64` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box3i64_volume(const MR_Box3i64 *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box3i64` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box3i64_include_MR_Vector3i64(MR_Box3i64 *_this, const MR_Vector3i64 *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box3i64` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box3i64_include_MR_Box3i64(MR_Box3i64 *_this, const MR_Box3i64 *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box3i64` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box3i64_contains_MR_Vector3i64(const MR_Box3i64 *_this, const MR_Vector3i64 *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box3i64` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box3i64_contains_MR_Box3i64(const MR_Box3i64 *_this, const MR_Box3i64 *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box3i64` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_Box3i64_getBoxClosestPointTo(const MR_Box3i64 *_this, const MR_Vector3i64 *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box3i64` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box3i64_intersects(const MR_Box3i64 *_this, const MR_Box3i64 *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box3i64` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box3i64 MR_Box3i64_intersection(const MR_Box3i64 *_this, const MR_Box3i64 *b);

/// Generated from a method of class `MR::Box3i64` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box3i64 *MR_Box3i64_intersect(MR_Box3i64 *_this, const MR_Box3i64 *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box3i64` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box3i64_getDistanceSq_MR_Box3i64(const MR_Box3i64 *_this, const MR_Box3i64 *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box3i64` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_int64_t MR_Box3i64_getDistanceSq_MR_Vector3i64(const MR_Box3i64 *_this, const MR_Vector3i64 *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box3i64` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3i64 MR_Box3i64_getProjection(const MR_Box3i64 *_this, const MR_Vector3i64 *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box3i64` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box3i64 MR_Box3i64_expanded(const MR_Box3i64 *_this, const MR_Vector3i64 *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box3i64` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3i64 MR_Box3i64_insignificantlyExpanded(const MR_Box3i64 *_this);

/// Generated from a method of class `MR::Box3i64` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box3i64(const MR_Box3i64 *_this, const MR_Box3i64 *a);

/// Generated from a method of class `MR::Box3i64` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box3i64(const MR_Box3i64 *_this, const MR_Box3i64 *a);

/// Returns a pointer to a member variable of class `MR::Box3f` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box3f_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box3f MR_Box3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box3f_DestroyArray()`.
/// Use `MR_Box3f_OffsetMutablePtr()` and `MR_Box3f_OffsetPtr()` to access the array elements.
MRC_API MR_Box3f *MR_Box3f_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box3f`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box3f MR_Box3f_Construct_2(const MR_Vector3f *min, const MR_Vector3f *max);

// If the compiler supports `requires`, use that instead of `std::enable_if` here.
// Not (only) because it looks cooler, but because of a bug in our binding generator that makes it choke on it: https://github.com/MeshInspector/mrbind/issues/19
/// Generated from a constructor of class `MR::Box3f`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box3f MR_Box3f_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Box3f`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Box3f MR_Box3f_Construct_MR_Vector3f(const MR_Box3f *a);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box3f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Box3f_index_const(const MR_Box3f *_this, int32_t e);

/// Generated from a method of class `MR::Box3f` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Box3f_index(MR_Box3f *_this, int32_t e);

/// Generated from a method of class `MR::Box3f` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box3f MR_Box3f_fromMinAndSize(const MR_Vector3f *min, const MR_Vector3f *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box3f` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box3f_valid(const MR_Box3f *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Box3f_center(const MR_Box3f *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box3f` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Box3f_corner(const MR_Box3f *_this, const MR_Vector3b *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box3f` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Box3f_getMinBoxCorner(const MR_Vector3f *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box3f` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Box3f_getMaxBoxCorner(const MR_Vector3f *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box3f` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Box3f_size(const MR_Box3f *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box3f` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Box3f_diagonal(const MR_Box3f *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box3f` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_Box3f_volume(const MR_Box3f *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box3f` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box3f_include_MR_Vector3f(MR_Box3f *_this, const MR_Vector3f *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box3f` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box3f_include_MR_Box3f(MR_Box3f *_this, const MR_Box3f *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box3f` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box3f_contains_MR_Vector3f(const MR_Box3f *_this, const MR_Vector3f *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box3f` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box3f_contains_MR_Box3f(const MR_Box3f *_this, const MR_Box3f *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box3f` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Box3f_getBoxClosestPointTo(const MR_Box3f *_this, const MR_Vector3f *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box3f` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box3f_intersects(const MR_Box3f *_this, const MR_Box3f *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box3f` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box3f MR_Box3f_intersection(const MR_Box3f *_this, const MR_Box3f *b);

/// Generated from a method of class `MR::Box3f` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box3f *MR_Box3f_intersect(MR_Box3f *_this, const MR_Box3f *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box3f` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API float MR_Box3f_getDistanceSq_MR_Box3f(const MR_Box3f *_this, const MR_Box3f *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box3f` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API float MR_Box3f_getDistanceSq_MR_Vector3f(const MR_Box3f *_this, const MR_Vector3f *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box3f` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Box3f_getProjection(const MR_Box3f *_this, const MR_Vector3f *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box3f` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box3f MR_Box3f_expanded(const MR_Box3f *_this, const MR_Vector3f *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box3f` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3f MR_Box3f_insignificantlyExpanded(const MR_Box3f *_this);

/// Generated from a method of class `MR::Box3f` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box3f(const MR_Box3f *_this, const MR_Box3f *a);

/// Generated from a method of class `MR::Box3f` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box3f(const MR_Box3f *_this, const MR_Box3f *a);

/// Returns a pointer to a member variable of class `MR::Box3d` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box3d_Get_elements(void);

/// Constructs an empty (default-constructed) instance.
MRC_API MR_Box3d MR_Box3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box3d_DestroyArray()`.
/// Use `MR_Box3d_OffsetMutablePtr()` and `MR_Box3d_OffsetPtr()` to access the array elements.
MRC_API MR_Box3d *MR_Box3d_DefaultConstructArray(size_t num_elems);

/// Generated from a constructor of class `MR::Box3d`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
MRC_API MR_Box3d MR_Box3d_Construct_2(const MR_Vector3d *min, const MR_Vector3d *max);

// If the compiler supports `requires`, use that instead of `std::enable_if` here.
// Not (only) because it looks cooler, but because of a bug in our binding generator that makes it choke on it: https://github.com/MeshInspector/mrbind/issues/19
/// Generated from a constructor of class `MR::Box3d`.
/// Parameter `_1` can not be null. It is a single object.
MRC_API MR_Box3d MR_Box3d_Construct_1(const MR_NoInit *_1);

/// Generated from a constructor of class `MR::Box3d`.
/// Parameter `a` can not be null. It is a single object.
MRC_API MR_Box3d MR_Box3d_Construct_MR_Vector3d(const MR_Box3d *a);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box3d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Box3d_index_const(const MR_Box3d *_this, int32_t e);

/// Generated from a method of class `MR::Box3d` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Box3d_index(MR_Box3d *_this, int32_t e);

/// Generated from a method of class `MR::Box3d` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
MRC_API MR_Box3d MR_Box3d_fromMinAndSize(const MR_Vector3d *min, const MR_Vector3d *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box3d` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box3d_valid(const MR_Box3d *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Box3d_center(const MR_Box3d *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box3d` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Box3d_corner(const MR_Box3d *_this, const MR_Vector3b *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box3d` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Box3d_getMinBoxCorner(const MR_Vector3d *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box3d` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API MR_Vector3b MR_Box3d_getMaxBoxCorner(const MR_Vector3d *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box3d` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Box3d_size(const MR_Box3d *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box3d` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Box3d_diagonal(const MR_Box3d *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box3d` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API double MR_Box3d_volume(const MR_Box3d *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box3d` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box3d_include_MR_Vector3d(MR_Box3d *_this, const MR_Vector3d *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box3d` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box3d_include_MR_Box3d(MR_Box3d *_this, const MR_Box3d *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box3d` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box3d_contains_MR_Vector3d(const MR_Box3d *_this, const MR_Vector3d *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box3d` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box3d_contains_MR_Box3d(const MR_Box3d *_this, const MR_Box3d *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box3d` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Box3d_getBoxClosestPointTo(const MR_Box3d *_this, const MR_Vector3d *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box3d` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box3d_intersects(const MR_Box3d *_this, const MR_Box3d *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box3d` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API MR_Box3d MR_Box3d_intersection(const MR_Box3d *_this, const MR_Box3d *b);

/// Generated from a method of class `MR::Box3d` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box3d *MR_Box3d_intersect(MR_Box3d *_this, const MR_Box3d *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box3d` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API double MR_Box3d_getDistanceSq_MR_Box3d(const MR_Box3d *_this, const MR_Box3d *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box3d` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API double MR_Box3d_getDistanceSq_MR_Vector3d(const MR_Box3d *_this, const MR_Vector3d *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box3d` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Box3d_getProjection(const MR_Box3d *_this, const MR_Vector3d *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box3d` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
MRC_API MR_Box3d MR_Box3d_expanded(const MR_Box3d *_this, const MR_Vector3d *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box3d` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Box3d MR_Box3d_insignificantlyExpanded(const MR_Box3d *_this);

/// Generated from a method of class `MR::Box3d` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box3d(const MR_Box3d *_this, const MR_Box3d *a);

/// Generated from a method of class `MR::Box3d` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box3d(const MR_Box3d *_this, const MR_Box3d *a);

/// Returns a pointer to a member variable of class `MR::Box<uint16_t>` named `elements`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_Box_uint16_t_Get_elements(void);

/// Returns a pointer to a member variable of class `MR::Box<uint16_t>` named `min`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint16_t *MR_Box_uint16_t_Get_min(const MR_Box_uint16_t *_this);

/// Modifies a member variable of class `MR::Box<uint16_t>` named `min`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Box_uint16_t_Set_min(MR_Box_uint16_t *_this, uint16_t value);

/// Returns a mutable pointer to a member variable of class `MR::Box<uint16_t>` named `min`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint16_t *MR_Box_uint16_t_GetMutable_min(MR_Box_uint16_t *_this);

/// Returns a pointer to a member variable of class `MR::Box<uint16_t>` named `max`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint16_t *MR_Box_uint16_t_Get_max(const MR_Box_uint16_t *_this);

/// Modifies a member variable of class `MR::Box<uint16_t>` named `max`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Box_uint16_t_Set_max(MR_Box_uint16_t *_this, uint16_t value);

/// Returns a mutable pointer to a member variable of class `MR::Box<uint16_t>` named `max`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint16_t *MR_Box_uint16_t_GetMutable_max(MR_Box_uint16_t *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Box_uint16_t_Destroy()` to free it when you're done using it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Box_uint16_t_DestroyArray()`.
/// Use `MR_Box_uint16_t_OffsetMutablePtr()` and `MR_Box_uint16_t_OffsetPtr()` to access the array elements.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Box_uint16_t *MR_Box_uint16_t_OffsetPtr(const MR_Box_uint16_t *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_OffsetMutablePtr(MR_Box_uint16_t *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::Box<uint16_t>` to a derived class `MR::SimpleVolumeMinMaxU16`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SimpleVolumeMinMaxU16 *MR_Box_uint16_t_StaticDowncastTo_MR_SimpleVolumeMinMaxU16(const MR_Box_uint16_t *object);

/// Downcasts an instance of `MR::Box<uint16_t>` to a derived class `MR::SimpleVolumeMinMaxU16`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SimpleVolumeMinMaxU16 *MR_Box_uint16_t_MutableStaticDowncastTo_MR_SimpleVolumeMinMaxU16(MR_Box_uint16_t *object);

/// Generated from a constructor of class `MR::Box<uint16_t>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Box_uint16_t_Destroy()` to free it when you're done using it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_ConstructFromAnother(const MR_Box_uint16_t *_other);

/// Generated from a constructor of class `MR::Box<uint16_t>`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `max` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Box_uint16_t_Destroy()` to free it when you're done using it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_Construct_2(const uint16_t *min, const uint16_t *max);

/// Generated from a constructor of class `MR::Box<uint16_t>`.
/// Parameter `_1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Box_uint16_t_Destroy()` to free it when you're done using it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_Construct_1(const MR_NoInit *_1);

/// Destroys a heap-allocated instance of `MR_Box_uint16_t`. Does nothing if the pointer is null.
MRC_API void MR_Box_uint16_t_Destroy(const MR_Box_uint16_t *_this);

/// Destroys a heap-allocated array of `MR_Box_uint16_t`. Does nothing if the pointer is null.
MRC_API void MR_Box_uint16_t_DestroyArray(const MR_Box_uint16_t *_this);

/// Generated from a method of class `MR::Box<uint16_t>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_AssignFromAnother(MR_Box_uint16_t *_this, const MR_Box_uint16_t *_other);

/// min/max access by 0/1 index
/// Generated from a method of class `MR::Box<uint16_t>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint16_t *MR_Box_uint16_t_index_const(const MR_Box_uint16_t *_this, int32_t e);

/// Generated from a method of class `MR::Box<uint16_t>` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint16_t *MR_Box_uint16_t_index(MR_Box_uint16_t *_this, int32_t e);

/// Generated from a method of class `MR::Box<uint16_t>` named `fromMinAndSize`.
/// Parameter `min` can not be null. It is a single object.
/// Parameter `size` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Box_uint16_t_Destroy()` to free it when you're done using it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_fromMinAndSize(const uint16_t *min, const uint16_t *size);

/// true if the box contains at least one point
/// Generated from a method of class `MR::Box<uint16_t>` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_Box_uint16_t_valid(const MR_Box_uint16_t *_this);

/// computes center of the box
/// Generated from a method of class `MR::Box<uint16_t>` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint16_t MR_Box_uint16_t_center(const MR_Box_uint16_t *_this);

/// returns the corner of this box as specified by given bool-vector:
/// 0 element in (c) means take min's coordinate,
/// 1 element in (c) means take max's coordinate
/// Generated from a method of class `MR::Box<uint16_t>` named `corner`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API uint16_t MR_Box_uint16_t_corner(const MR_Box_uint16_t *_this, const bool *c);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is minimal
/// Generated from a method of class `MR::Box<uint16_t>` named `getMinBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box_uint16_t_getMinBoxCorner(const uint16_t *n);

/// considering all planes with given normal and arbitrary shift: dot(n,x) = d
/// finds the box's corner for which d is maximal
/// Generated from a method of class `MR::Box<uint16_t>` named `getMaxBoxCorner`.
/// Parameter `n` can not be null. It is a single object.
MRC_API bool MR_Box_uint16_t_getMaxBoxCorner(const uint16_t *n);

/// computes size of the box in all dimensions
/// Generated from a method of class `MR::Box<uint16_t>` named `size`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint16_t MR_Box_uint16_t_size(const MR_Box_uint16_t *_this);

/// computes length from min to max
/// Generated from a method of class `MR::Box<uint16_t>` named `diagonal`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint16_t MR_Box_uint16_t_diagonal(const MR_Box_uint16_t *_this);

/// computes the volume of this box
/// Generated from a method of class `MR::Box<uint16_t>` named `volume`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API uint16_t MR_Box_uint16_t_volume(const MR_Box_uint16_t *_this);

/// minimally increases the box to include given point
/// Generated from a method of class `MR::Box<uint16_t>` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API void MR_Box_uint16_t_include_uint16_t(MR_Box_uint16_t *_this, const uint16_t *pt);

/// minimally increases the box to include another box
/// Generated from a method of class `MR::Box<uint16_t>` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API void MR_Box_uint16_t_include_MR_Box_uint16_t(MR_Box_uint16_t *_this, const MR_Box_uint16_t *b);

/// checks whether given point is inside (including the surface) of this box
/// Generated from a method of class `MR::Box<uint16_t>` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API bool MR_Box_uint16_t_contains_uint16_t(const MR_Box_uint16_t *_this, const uint16_t *pt);

/// checks whether given box is fully inside (the surfaces may touch) of this box
/// Generated from a method of class `MR::Box<uint16_t>` named `contains`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `otherbox` can not be null. It is a single object.
MRC_API bool MR_Box_uint16_t_contains_MR_Box_uint16_t(const MR_Box_uint16_t *_this, const MR_Box_uint16_t *otherbox);

/// returns closest point in the box to given point
/// Generated from a method of class `MR::Box<uint16_t>` named `getBoxClosestPointTo`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API uint16_t MR_Box_uint16_t_getBoxClosestPointTo(const MR_Box_uint16_t *_this, const uint16_t *pt);

/// checks whether this box intersects or touches given box
/// Generated from a method of class `MR::Box<uint16_t>` named `intersects`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_Box_uint16_t_intersects(const MR_Box_uint16_t *_this, const MR_Box_uint16_t *b);

/// computes intersection between this and other box
/// Generated from a method of class `MR::Box<uint16_t>` named `intersection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Box_uint16_t_Destroy()` to free it when you're done using it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_intersection(const MR_Box_uint16_t *_this, const MR_Box_uint16_t *b);

/// Generated from a method of class `MR::Box<uint16_t>` named `intersect`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_intersect(MR_Box_uint16_t *_this, const MR_Box_uint16_t *b);

/// returns squared distance between this box and given one;
/// returns zero if the boxes touch or intersect
/// Generated from a method of class `MR::Box<uint16_t>` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API uint16_t MR_Box_uint16_t_getDistanceSq_MR_Box_uint16_t(const MR_Box_uint16_t *_this, const MR_Box_uint16_t *b);

/// returns squared distance between this box and given point;
/// returns zero if the point is inside or on the boundary of the box
/// Generated from a method of class `MR::Box<uint16_t>` named `getDistanceSq`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API uint16_t MR_Box_uint16_t_getDistanceSq_uint16_t(const MR_Box_uint16_t *_this, const uint16_t *pt);

/// returns the closest point on the box to the given point
/// for points outside the box this is equivalent to getBoxClosestPointTo
/// Generated from a method of class `MR::Box<uint16_t>` named `getProjection`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pt` can not be null. It is a single object.
MRC_API uint16_t MR_Box_uint16_t_getProjection(const MR_Box_uint16_t *_this, const uint16_t *pt);

/// decreases min and increased max on given value
/// Generated from a method of class `MR::Box<uint16_t>` named `expanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `expansion` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Box_uint16_t_Destroy()` to free it when you're done using it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_expanded(const MR_Box_uint16_t *_this, const uint16_t *expansion);

/// decreases min and increases max to their closest representable value
/// Generated from a method of class `MR::Box<uint16_t>` named `insignificantlyExpanded`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Box_uint16_t_Destroy()` to free it when you're done using it.
MRC_API MR_Box_uint16_t *MR_Box_uint16_t_insignificantlyExpanded(const MR_Box_uint16_t *_this);

/// Generated from a method of class `MR::Box<uint16_t>` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_equal_MR_Box_uint16_t(const MR_Box_uint16_t *_this, const MR_Box_uint16_t *a);

/// Generated from a method of class `MR::Box<uint16_t>` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `a` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_Box_uint16_t(const MR_Box_uint16_t *_this, const MR_Box_uint16_t *a);

#ifdef __cplusplus
} // extern "C"
#endif
