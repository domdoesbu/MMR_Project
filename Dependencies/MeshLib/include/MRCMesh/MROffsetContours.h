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

typedef struct MR_std_function_float_from_const_std_vector_std_vector_MR_Vector2f_ref_const_MR_OffsetContourIndex_ref_const_MR_OffsetContoursOrigins_ref MR_std_function_float_from_const_std_vector_std_vector_MR_Vector2f_ref_const_MR_OffsetContourIndex_ref_const_MR_OffsetContoursOrigins_ref; // Defined in `#include <MRCMisc/std_function_float_from_const_std_vector_std_vector_MR_Vector2f_ref_const_MR_OffsetContourIn__4993.h>`.
typedef struct MR_std_function_float_from_int32_t_int32_t MR_std_function_float_from_int32_t_int32_t; // Defined in `#include <MRCMisc/std_function_float_from_int32_t_int32_t.h>`.
typedef struct MR_std_vector_std_vector_MR_OffsetContoursOrigins MR_std_vector_std_vector_MR_OffsetContoursOrigins; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_OffsetContoursOrigins.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector2f MR_std_vector_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector2f.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.


/// Generated from class `MR::OffsetContourIndex`.
typedef struct MR_OffsetContourIndex MR_OffsetContourIndex;

/// Generated from class `MR::OffsetContoursOrigins`.
typedef struct MR_OffsetContoursOrigins MR_OffsetContoursOrigins;

/// Generated from class `MR::OffsetContoursParams`.
typedef struct MR_OffsetContoursParams MR_OffsetContoursParams;

/// type of offset
typedef int32_t MR_OffsetContoursParams_Type;
enum // MR_OffsetContoursParams_Type
{
    ///< One-side signed offset, requires closed contours
    MR_OffsetContoursParams_Type_Offset = 0,
    ///< Two-side offset
    MR_OffsetContoursParams_Type_Shell = 1,
};

/// type of offsetting on ends of non-closed contours
typedef int32_t MR_OffsetContoursParams_EndType;
enum // MR_OffsetContoursParams_EndType
{
    ///< creates round ends (use `minAnglePrecision`)
    MR_OffsetContoursParams_EndType_Round = 0,
    ///< creates sharp end (same as Round with `minAnglePrecision` < 180 deg)
    MR_OffsetContoursParams_EndType_Cut = 1,
};

/// type of positive offset curve in corners
typedef int32_t MR_OffsetContoursParams_CornerType;
enum // MR_OffsetContoursParams_CornerType
{
    ///< creates round corners (use `minAnglePrecision`)
    MR_OffsetContoursParams_CornerType_Round = 0,
    ///< creates sharp connected corner (use `maxSharpAngle` as limit)
    MR_OffsetContoursParams_CornerType_Sharp = 1,
};

/// Parameters of restoring Z coordinate of XY offset 3d contours
/// Generated from class `MR::OffsetContoursRestoreZParams`.
typedef struct MR_OffsetContoursRestoreZParams MR_OffsetContoursRestoreZParams;

// -1 means unknown index
/// Returns a pointer to a member variable of class `MR::OffsetContourIndex` named `contourId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_OffsetContourIndex_Get_contourId(const MR_OffsetContourIndex *_this);

// -1 means unknown index
/// Modifies a member variable of class `MR::OffsetContourIndex` named `contourId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContourIndex_Set_contourId(MR_OffsetContourIndex *_this, int32_t value);

// -1 means unknown index
/// Returns a mutable pointer to a member variable of class `MR::OffsetContourIndex` named `contourId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_OffsetContourIndex_GetMutable_contourId(MR_OffsetContourIndex *_this);

// -1 means unknown index
/// Returns a pointer to a member variable of class `MR::OffsetContourIndex` named `vertId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_OffsetContourIndex_Get_vertId(const MR_OffsetContourIndex *_this);

// -1 means unknown index
/// Modifies a member variable of class `MR::OffsetContourIndex` named `vertId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContourIndex_Set_vertId(MR_OffsetContourIndex *_this, int32_t value);

// -1 means unknown index
/// Returns a mutable pointer to a member variable of class `MR::OffsetContourIndex` named `vertId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_OffsetContourIndex_GetMutable_vertId(MR_OffsetContourIndex *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContourIndex_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContourIndex *MR_OffsetContourIndex_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OffsetContourIndex_DestroyArray()`.
/// Use `MR_OffsetContourIndex_OffsetMutablePtr()` and `MR_OffsetContourIndex_OffsetPtr()` to access the array elements.
MRC_API MR_OffsetContourIndex *MR_OffsetContourIndex_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::OffsetContourIndex` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContourIndex_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContourIndex *MR_OffsetContourIndex_ConstructFrom(int32_t contourId, int32_t vertId);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OffsetContourIndex *MR_OffsetContourIndex_OffsetPtr(const MR_OffsetContourIndex *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OffsetContourIndex *MR_OffsetContourIndex_OffsetMutablePtr(MR_OffsetContourIndex *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OffsetContourIndex`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContourIndex_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContourIndex *MR_OffsetContourIndex_ConstructFromAnother(const MR_OffsetContourIndex *_other);

/// Destroys a heap-allocated instance of `MR_OffsetContourIndex`. Does nothing if the pointer is null.
MRC_API void MR_OffsetContourIndex_Destroy(const MR_OffsetContourIndex *_this);

/// Destroys a heap-allocated array of `MR_OffsetContourIndex`. Does nothing if the pointer is null.
MRC_API void MR_OffsetContourIndex_DestroyArray(const MR_OffsetContourIndex *_this);

/// Generated from a method of class `MR::OffsetContourIndex` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContourIndex *MR_OffsetContourIndex_AssignFromAnother(MR_OffsetContourIndex *_this, const MR_OffsetContourIndex *_other);

/// Generated from a method of class `MR::OffsetContourIndex` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_OffsetContourIndex_valid(const MR_OffsetContourIndex *_this);

// Should be always valid
// index of lower corresponding origin point on input contour
/// Returns a pointer to a member variable of class `MR::OffsetContoursOrigins` named `lOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OffsetContourIndex *MR_OffsetContoursOrigins_Get_lOrg(const MR_OffsetContoursOrigins *_this);

// Should be always valid
// index of lower corresponding origin point on input contour
/// Modifies a member variable of class `MR::OffsetContoursOrigins` named `lOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_OffsetContoursOrigins_Set_lOrg(MR_OffsetContoursOrigins *_this, const MR_OffsetContourIndex *value);

// Should be always valid
// index of lower corresponding origin point on input contour
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursOrigins` named `lOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContourIndex *MR_OffsetContoursOrigins_GetMutable_lOrg(MR_OffsetContoursOrigins *_this);

// index of lower corresponding destination point on input contour
/// Returns a pointer to a member variable of class `MR::OffsetContoursOrigins` named `lDest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OffsetContourIndex *MR_OffsetContoursOrigins_Get_lDest(const MR_OffsetContoursOrigins *_this);

// index of lower corresponding destination point on input contour
/// Modifies a member variable of class `MR::OffsetContoursOrigins` named `lDest`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_OffsetContoursOrigins_Set_lDest(MR_OffsetContoursOrigins *_this, const MR_OffsetContourIndex *value);

// index of lower corresponding destination point on input contour
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursOrigins` named `lDest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContourIndex *MR_OffsetContoursOrigins_GetMutable_lDest(MR_OffsetContoursOrigins *_this);

// index of upper corresponding origin point on input contour
/// Returns a pointer to a member variable of class `MR::OffsetContoursOrigins` named `uOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OffsetContourIndex *MR_OffsetContoursOrigins_Get_uOrg(const MR_OffsetContoursOrigins *_this);

// index of upper corresponding origin point on input contour
/// Modifies a member variable of class `MR::OffsetContoursOrigins` named `uOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_OffsetContoursOrigins_Set_uOrg(MR_OffsetContoursOrigins *_this, const MR_OffsetContourIndex *value);

// index of upper corresponding origin point on input contour
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursOrigins` named `uOrg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContourIndex *MR_OffsetContoursOrigins_GetMutable_uOrg(MR_OffsetContoursOrigins *_this);

// index of upper corresponding destination point on input contour
/// Returns a pointer to a member variable of class `MR::OffsetContoursOrigins` named `uDest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OffsetContourIndex *MR_OffsetContoursOrigins_Get_uDest(const MR_OffsetContoursOrigins *_this);

// index of upper corresponding destination point on input contour
/// Modifies a member variable of class `MR::OffsetContoursOrigins` named `uDest`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_OffsetContoursOrigins_Set_uDest(MR_OffsetContoursOrigins *_this, const MR_OffsetContourIndex *value);

// index of upper corresponding destination point on input contour
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursOrigins` named `uDest`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContourIndex *MR_OffsetContoursOrigins_GetMutable_uDest(MR_OffsetContoursOrigins *_this);

// ratio of intersection point on lOrg->lDest segment
// 0.0 -> lOrg
// 1.0 -> lDest
/// Returns a pointer to a member variable of class `MR::OffsetContoursOrigins` named `lRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_OffsetContoursOrigins_Get_lRatio(const MR_OffsetContoursOrigins *_this);

// ratio of intersection point on lOrg->lDest segment
// 0.0 -> lOrg
// 1.0 -> lDest
/// Modifies a member variable of class `MR::OffsetContoursOrigins` named `lRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursOrigins_Set_lRatio(MR_OffsetContoursOrigins *_this, float value);

// ratio of intersection point on lOrg->lDest segment
// 0.0 -> lOrg
// 1.0 -> lDest
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursOrigins` named `lRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_OffsetContoursOrigins_GetMutable_lRatio(MR_OffsetContoursOrigins *_this);

// ratio of intersection point on uOrg->uDest segment
// 0.0 -> uOrg
// 1.0 -> uDest
/// Returns a pointer to a member variable of class `MR::OffsetContoursOrigins` named `uRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_OffsetContoursOrigins_Get_uRatio(const MR_OffsetContoursOrigins *_this);

// ratio of intersection point on uOrg->uDest segment
// 0.0 -> uOrg
// 1.0 -> uDest
/// Modifies a member variable of class `MR::OffsetContoursOrigins` named `uRatio`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursOrigins_Set_uRatio(MR_OffsetContoursOrigins *_this, float value);

// ratio of intersection point on uOrg->uDest segment
// 0.0 -> uOrg
// 1.0 -> uDest
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursOrigins` named `uRatio`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_OffsetContoursOrigins_GetMutable_uRatio(MR_OffsetContoursOrigins *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContoursOrigins_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContoursOrigins *MR_OffsetContoursOrigins_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OffsetContoursOrigins_DestroyArray()`.
/// Use `MR_OffsetContoursOrigins_OffsetMutablePtr()` and `MR_OffsetContoursOrigins_OffsetPtr()` to access the array elements.
MRC_API MR_OffsetContoursOrigins *MR_OffsetContoursOrigins_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::OffsetContoursOrigins` elementwise.
/// Parameter `lOrg` can not be null. It is a single object.
/// Parameter `lDest` can not be null. It is a single object.
/// Parameter `uOrg` can not be null. It is a single object.
/// Parameter `uDest` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContoursOrigins_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContoursOrigins *MR_OffsetContoursOrigins_ConstructFrom(const MR_OffsetContourIndex *lOrg, const MR_OffsetContourIndex *lDest, const MR_OffsetContourIndex *uOrg, const MR_OffsetContourIndex *uDest, float lRatio, float uRatio);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OffsetContoursOrigins *MR_OffsetContoursOrigins_OffsetPtr(const MR_OffsetContoursOrigins *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OffsetContoursOrigins *MR_OffsetContoursOrigins_OffsetMutablePtr(MR_OffsetContoursOrigins *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OffsetContoursOrigins`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContoursOrigins_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContoursOrigins *MR_OffsetContoursOrigins_ConstructFromAnother(const MR_OffsetContoursOrigins *_other);

/// Destroys a heap-allocated instance of `MR_OffsetContoursOrigins`. Does nothing if the pointer is null.
MRC_API void MR_OffsetContoursOrigins_Destroy(const MR_OffsetContoursOrigins *_this);

/// Destroys a heap-allocated array of `MR_OffsetContoursOrigins`. Does nothing if the pointer is null.
MRC_API void MR_OffsetContoursOrigins_DestroyArray(const MR_OffsetContoursOrigins *_this);

/// Generated from a method of class `MR::OffsetContoursOrigins` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContoursOrigins *MR_OffsetContoursOrigins_AssignFromAnother(MR_OffsetContoursOrigins *_this, const MR_OffsetContoursOrigins *_other);

/// Generated from a method of class `MR::OffsetContoursOrigins` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_OffsetContoursOrigins_valid(const MR_OffsetContoursOrigins *_this);

/// Generated from a method of class `MR::OffsetContoursOrigins` named `isIntersection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_OffsetContoursOrigins_isIntersection(const MR_OffsetContoursOrigins *_this);

/// Returns a pointer to a member variable of class `MR::OffsetContoursParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OffsetContoursParams_Type *MR_OffsetContoursParams_Get_type(const MR_OffsetContoursParams *_this);

/// Modifies a member variable of class `MR::OffsetContoursParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursParams_Set_type(MR_OffsetContoursParams *_this, MR_OffsetContoursParams_Type value);

/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursParams` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContoursParams_Type *MR_OffsetContoursParams_GetMutable_type(MR_OffsetContoursParams *_this);

/// Returns a pointer to a member variable of class `MR::OffsetContoursParams` named `endType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OffsetContoursParams_EndType *MR_OffsetContoursParams_Get_endType(const MR_OffsetContoursParams *_this);

/// Modifies a member variable of class `MR::OffsetContoursParams` named `endType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursParams_Set_endType(MR_OffsetContoursParams *_this, MR_OffsetContoursParams_EndType value);

/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursParams` named `endType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContoursParams_EndType *MR_OffsetContoursParams_GetMutable_endType(MR_OffsetContoursParams *_this);

/// Returns a pointer to a member variable of class `MR::OffsetContoursParams` named `cornerType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_OffsetContoursParams_CornerType *MR_OffsetContoursParams_Get_cornerType(const MR_OffsetContoursParams *_this);

/// Modifies a member variable of class `MR::OffsetContoursParams` named `cornerType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursParams_Set_cornerType(MR_OffsetContoursParams *_this, MR_OffsetContoursParams_CornerType value);

/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursParams` named `cornerType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContoursParams_CornerType *MR_OffsetContoursParams_GetMutable_cornerType(MR_OffsetContoursParams *_this);

// 20 deg
/// Returns a pointer to a member variable of class `MR::OffsetContoursParams` named `minAnglePrecision`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_OffsetContoursParams_Get_minAnglePrecision(const MR_OffsetContoursParams *_this);

// 20 deg
/// Modifies a member variable of class `MR::OffsetContoursParams` named `minAnglePrecision`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursParams_Set_minAnglePrecision(MR_OffsetContoursParams *_this, float value);

// 20 deg
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursParams` named `minAnglePrecision`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_OffsetContoursParams_GetMutable_minAnglePrecision(MR_OffsetContoursParams *_this);

// 120 deg
/// Returns a pointer to a member variable of class `MR::OffsetContoursParams` named `maxSharpAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_OffsetContoursParams_Get_maxSharpAngle(const MR_OffsetContoursParams *_this);

// 120 deg
/// Modifies a member variable of class `MR::OffsetContoursParams` named `maxSharpAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursParams_Set_maxSharpAngle(MR_OffsetContoursParams *_this, float value);

// 120 deg
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursParams` named `maxSharpAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_OffsetContoursParams_GetMutable_maxSharpAngle(MR_OffsetContoursParams *_this);

/// optional output that maps result contour ids to input contour ids
/// Returns a pointer to a member variable of class `MR::OffsetContoursParams` named `indicesMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_OffsetContoursOrigins *const *MR_OffsetContoursParams_Get_indicesMap(const MR_OffsetContoursParams *_this);

/// optional output that maps result contour ids to input contour ids
/// Modifies a member variable of class `MR::OffsetContoursParams` named `indicesMap`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursParams_Set_indicesMap(MR_OffsetContoursParams *_this, MR_std_vector_std_vector_MR_OffsetContoursOrigins *value);

/// optional output that maps result contour ids to input contour ids
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursParams` named `indicesMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_OffsetContoursOrigins **MR_OffsetContoursParams_GetMutable_indicesMap(MR_OffsetContoursParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContoursParams_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContoursParams *MR_OffsetContoursParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OffsetContoursParams_DestroyArray()`.
/// Use `MR_OffsetContoursParams_OffsetMutablePtr()` and `MR_OffsetContoursParams_OffsetPtr()` to access the array elements.
MRC_API MR_OffsetContoursParams *MR_OffsetContoursParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::OffsetContoursParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContoursParams_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContoursParams *MR_OffsetContoursParams_ConstructFrom(MR_OffsetContoursParams_Type type, MR_OffsetContoursParams_EndType endType, MR_OffsetContoursParams_CornerType cornerType, float minAnglePrecision, float maxSharpAngle, MR_std_vector_std_vector_MR_OffsetContoursOrigins *indicesMap);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OffsetContoursParams *MR_OffsetContoursParams_OffsetPtr(const MR_OffsetContoursParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OffsetContoursParams *MR_OffsetContoursParams_OffsetMutablePtr(MR_OffsetContoursParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OffsetContoursParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContoursParams_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContoursParams *MR_OffsetContoursParams_ConstructFromAnother(const MR_OffsetContoursParams *_other);

/// Destroys a heap-allocated instance of `MR_OffsetContoursParams`. Does nothing if the pointer is null.
MRC_API void MR_OffsetContoursParams_Destroy(const MR_OffsetContoursParams *_this);

/// Destroys a heap-allocated array of `MR_OffsetContoursParams`. Does nothing if the pointer is null.
MRC_API void MR_OffsetContoursParams_DestroyArray(const MR_OffsetContoursParams *_this);

/// Generated from a method of class `MR::OffsetContoursParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContoursParams *MR_OffsetContoursParams_AssignFromAnother(MR_OffsetContoursParams *_this, const MR_OffsetContoursParams *_other);

/// offsets 2d contours in plane
/// Generated from function `MR::offsetContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_offsetContours_3_float(const MR_std_vector_std_vector_MR_Vector2f *contours, float offset, const MR_OffsetContoursParams *params);

/// offsets 2d contours in plane
/// Generated from function `MR::offsetContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector2f *MR_offsetContours_3_std_function_float_func_from_int32_t_int32_t(const MR_std_vector_std_vector_MR_Vector2f *contours, MR_PassBy offset_pass_by, MR_std_function_float_from_int32_t_int32_t *offset, const MR_OffsetContoursParams *params);

/// Returns a pointer to a member variable of class `MR::OffsetContoursRestoreZParams` named `zCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_float_from_const_std_vector_std_vector_MR_Vector2f_ref_const_MR_OffsetContourIndex_ref_const_MR_OffsetContoursOrigins_ref *MR_OffsetContoursRestoreZParams_Get_zCallback(const MR_OffsetContoursRestoreZParams *_this);

/// Modifies a member variable of class `MR::OffsetContoursRestoreZParams` named `zCallback`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursRestoreZParams_Set_zCallback(MR_OffsetContoursRestoreZParams *_this, MR_PassBy value_pass_by, MR_std_function_float_from_const_std_vector_std_vector_MR_Vector2f_ref_const_MR_OffsetContourIndex_ref_const_MR_OffsetContoursOrigins_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursRestoreZParams` named `zCallback`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_float_from_const_std_vector_std_vector_MR_Vector2f_ref_const_MR_OffsetContourIndex_ref_const_MR_OffsetContoursOrigins_ref *MR_OffsetContoursRestoreZParams_GetMutable_zCallback(MR_OffsetContoursRestoreZParams *_this);

/// if > 0 z coordinate will be relaxed this many iterations
/// Returns a pointer to a member variable of class `MR::OffsetContoursRestoreZParams` named `relaxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_OffsetContoursRestoreZParams_Get_relaxIterations(const MR_OffsetContoursRestoreZParams *_this);

/// if > 0 z coordinate will be relaxed this many iterations
/// Modifies a member variable of class `MR::OffsetContoursRestoreZParams` named `relaxIterations`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_OffsetContoursRestoreZParams_Set_relaxIterations(MR_OffsetContoursRestoreZParams *_this, int32_t value);

/// if > 0 z coordinate will be relaxed this many iterations
/// Returns a mutable pointer to a member variable of class `MR::OffsetContoursRestoreZParams` named `relaxIterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_OffsetContoursRestoreZParams_GetMutable_relaxIterations(MR_OffsetContoursRestoreZParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContoursRestoreZParams_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContoursRestoreZParams *MR_OffsetContoursRestoreZParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_OffsetContoursRestoreZParams_DestroyArray()`.
/// Use `MR_OffsetContoursRestoreZParams_OffsetMutablePtr()` and `MR_OffsetContoursRestoreZParams_OffsetPtr()` to access the array elements.
MRC_API MR_OffsetContoursRestoreZParams *MR_OffsetContoursRestoreZParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::OffsetContoursRestoreZParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContoursRestoreZParams_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContoursRestoreZParams *MR_OffsetContoursRestoreZParams_ConstructFrom(MR_PassBy zCallback_pass_by, MR_std_function_float_from_const_std_vector_std_vector_MR_Vector2f_ref_const_MR_OffsetContourIndex_ref_const_MR_OffsetContoursOrigins_ref *zCallback, int32_t relaxIterations);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_OffsetContoursRestoreZParams *MR_OffsetContoursRestoreZParams_OffsetPtr(const MR_OffsetContoursRestoreZParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_OffsetContoursRestoreZParams *MR_OffsetContoursRestoreZParams_OffsetMutablePtr(MR_OffsetContoursRestoreZParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::OffsetContoursRestoreZParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_OffsetContoursRestoreZParams_Destroy()` to free it when you're done using it.
MRC_API MR_OffsetContoursRestoreZParams *MR_OffsetContoursRestoreZParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_OffsetContoursRestoreZParams *_other);

/// Destroys a heap-allocated instance of `MR_OffsetContoursRestoreZParams`. Does nothing if the pointer is null.
MRC_API void MR_OffsetContoursRestoreZParams_Destroy(const MR_OffsetContoursRestoreZParams *_this);

/// Destroys a heap-allocated array of `MR_OffsetContoursRestoreZParams`. Does nothing if the pointer is null.
MRC_API void MR_OffsetContoursRestoreZParams_DestroyArray(const MR_OffsetContoursRestoreZParams *_this);

/// Generated from a method of class `MR::OffsetContoursRestoreZParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_OffsetContoursRestoreZParams *MR_OffsetContoursRestoreZParams_AssignFromAnother(MR_OffsetContoursRestoreZParams *_this, MR_PassBy _other_pass_by, MR_OffsetContoursRestoreZParams *_other);

/// offsets 3d contours in XY plane
/// Generated from function `MR::offsetContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `zParmas` is a single object.
/// Parameter `zParmas` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_offsetContours_4_float(const MR_std_vector_std_vector_MR_Vector3f *contours, float offset, const MR_OffsetContoursParams *params, const MR_OffsetContoursRestoreZParams *zParmas);

/// offsets 3d contours in XY plane
/// Generated from function `MR::offsetContours`.
/// Parameter `contours` can not be null. It is a single object.
/// Parameter `params` is a single object.
/// Parameter `params` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `zParmas` is a single object.
/// Parameter `zParmas` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_vector_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *MR_offsetContours_4_std_function_float_func_from_int32_t_int32_t(const MR_std_vector_std_vector_MR_Vector3f *contours, MR_PassBy offset_pass_by, MR_std_function_float_from_int32_t_int32_t *offset, const MR_OffsetContoursParams *params, const MR_OffsetContoursRestoreZParams *zParmas);

#ifdef __cplusplus
} // extern "C"
#endif
