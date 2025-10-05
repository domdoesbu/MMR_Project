// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_pair_float_MR_VertId MR_std_pair_float_MR_VertId; // Defined in `#include <MRCMisc/std_pair_float_MR_VertId.h>`.


/// minimum and maximum of some elements of type T,
/// and the indices of where minimum and maximum are reached of type I
/// Generated from class `MR::MinMaxArg<float, MR::VertId>`.
typedef struct MR_MinMaxArg_float_MR_VertId MR_MinMaxArg_float_MR_VertId;

/// Returns a pointer to a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `min`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MinMaxArg_float_MR_VertId_Get_min(const MR_MinMaxArg_float_MR_VertId *_this);

/// Modifies a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `min`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MinMaxArg_float_MR_VertId_Set_min(MR_MinMaxArg_float_MR_VertId *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `min`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MinMaxArg_float_MR_VertId_GetMutable_min(MR_MinMaxArg_float_MR_VertId *_this);

/// Returns a pointer to a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `max`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_MinMaxArg_float_MR_VertId_Get_max(const MR_MinMaxArg_float_MR_VertId *_this);

/// Modifies a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `max`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MinMaxArg_float_MR_VertId_Set_max(MR_MinMaxArg_float_MR_VertId *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `max`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_MinMaxArg_float_MR_VertId_GetMutable_max(MR_MinMaxArg_float_MR_VertId *_this);

/// Returns a pointer to a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `minArg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_MinMaxArg_float_MR_VertId_Get_minArg(const MR_MinMaxArg_float_MR_VertId *_this);

/// Modifies a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `minArg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MinMaxArg_float_MR_VertId_Set_minArg(MR_MinMaxArg_float_MR_VertId *_this, MR_VertId value);

/// Returns a mutable pointer to a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `minArg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_MinMaxArg_float_MR_VertId_GetMutable_minArg(MR_MinMaxArg_float_MR_VertId *_this);

/// Returns a pointer to a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `maxArg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_MinMaxArg_float_MR_VertId_Get_maxArg(const MR_MinMaxArg_float_MR_VertId *_this);

/// Modifies a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `maxArg`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MinMaxArg_float_MR_VertId_Set_maxArg(MR_MinMaxArg_float_MR_VertId *_this, MR_VertId value);

/// Returns a mutable pointer to a member variable of class `MR::MinMaxArg<float, MR::VertId>` named `maxArg`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_MinMaxArg_float_MR_VertId_GetMutable_maxArg(MR_MinMaxArg_float_MR_VertId *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_MinMaxArg_float_MR_VertId_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_MinMaxArg_float_MR_VertId_DestroyArray()`.
/// Use `MR_MinMaxArg_float_MR_VertId_OffsetMutablePtr()` and `MR_MinMaxArg_float_MR_VertId_OffsetPtr()` to access the array elements.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_MinMaxArg_float_MR_VertId_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::MinMaxArg<float, MR::VertId>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_MinMaxArg_float_MR_VertId_ConstructFrom(float min, float max, MR_VertId minArg, MR_VertId maxArg);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_MinMaxArg_float_MR_VertId *MR_MinMaxArg_float_MR_VertId_OffsetPtr(const MR_MinMaxArg_float_MR_VertId *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_MinMaxArg_float_MR_VertId_OffsetMutablePtr(MR_MinMaxArg_float_MR_VertId *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::MinMaxArg<float, MR::VertId>`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_MinMaxArg_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_MinMaxArg_float_MR_VertId_ConstructFromAnother(const MR_MinMaxArg_float_MR_VertId *_other);

/// Destroys a heap-allocated instance of `MR_MinMaxArg_float_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_MinMaxArg_float_MR_VertId_Destroy(const MR_MinMaxArg_float_MR_VertId *_this);

/// Destroys a heap-allocated array of `MR_MinMaxArg_float_MR_VertId`. Does nothing if the pointer is null.
MRC_API void MR_MinMaxArg_float_MR_VertId_DestroyArray(const MR_MinMaxArg_float_MR_VertId *_this);

/// Generated from a method of class `MR::MinMaxArg<float, MR::VertId>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MinMaxArg_float_MR_VertId *MR_MinMaxArg_float_MR_VertId_AssignFromAnother(MR_MinMaxArg_float_MR_VertId *_this, const MR_MinMaxArg_float_MR_VertId *_other);

/// Generated from a method of class `MR::MinMaxArg<float, MR::VertId>` named `minPair`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_float_MR_VertId *MR_MinMaxArg_float_MR_VertId_minPair(const MR_MinMaxArg_float_MR_VertId *_this);

/// Generated from a method of class `MR::MinMaxArg<float, MR::VertId>` named `maxPair`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_pair_float_MR_VertId_Destroy()` to free it when you're done using it.
MRC_API MR_std_pair_float_MR_VertId *MR_MinMaxArg_float_MR_VertId_maxPair(const MR_MinMaxArg_float_MR_VertId *_this);

/// changes min(Arg) and max(Arg) if necessary to include given point
/// Generated from a method of class `MR::MinMaxArg<float, MR::VertId>` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `p` can not be null. It is a single object.
MRC_API void MR_MinMaxArg_float_MR_VertId_include_1_std_pair_float_MR_VertId(MR_MinMaxArg_float_MR_VertId *_this, const MR_std_pair_float_MR_VertId *p);

/// changes min(Arg) and max(Arg) if necessary to include given point
/// Generated from a method of class `MR::MinMaxArg<float, MR::VertId>` named `include`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_MinMaxArg_float_MR_VertId_include_2(MR_MinMaxArg_float_MR_VertId *_this, float v, MR_VertId arg);

/// changes min(Arg) and max(Arg) if necessary to include given segment
/// Generated from a method of class `MR::MinMaxArg<float, MR::VertId>` named `include`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `s` can not be null. It is a single object.
MRC_API void MR_MinMaxArg_float_MR_VertId_include_1_MR_MinMaxArg_float_MR_VertId(MR_MinMaxArg_float_MR_VertId *_this, const MR_MinMaxArg_float_MR_VertId *s);

#ifdef __cplusplus
} // extern "C"
#endif
