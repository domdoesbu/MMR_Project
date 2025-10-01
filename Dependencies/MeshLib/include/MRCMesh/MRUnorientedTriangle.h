// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>
#include <MRCMisc/std_array_MR_VertId_3.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_VertId MR_VertId; // Defined in `#include <MRCMesh/MRId.h>`.


/// describes a triangle as three vertex IDs sorted in a way to quickly find same triangles
/// irrespective of vertex order (clockwise or counterclockwise)
/// Generated from class `MR::UnorientedTriangle`.
typedef struct MR_UnorientedTriangle MR_UnorientedTriangle;

/// Returns a pointer to a member variable of class `MR::UnorientedTriangle` named `verts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_array_MR_VertId_3 *MR_UnorientedTriangle_Get_verts(const MR_UnorientedTriangle *_this);

/// Modifies a member variable of class `MR::UnorientedTriangle` named `verts`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UnorientedTriangle_Set_verts(MR_UnorientedTriangle *_this, MR_std_array_MR_VertId_3 value);

/// Returns a mutable pointer to a member variable of class `MR::UnorientedTriangle` named `verts`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_array_MR_VertId_3 *MR_UnorientedTriangle_GetMutable_verts(MR_UnorientedTriangle *_this);

/// Generated from a constructor of class `MR::UnorientedTriangle`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnorientedTriangle_Destroy()` to free it when you're done using it.
MRC_API MR_UnorientedTriangle *MR_UnorientedTriangle_ConstructFromAnother(const MR_UnorientedTriangle *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UnorientedTriangle *MR_UnorientedTriangle_OffsetPtr(const MR_UnorientedTriangle *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UnorientedTriangle *MR_UnorientedTriangle_OffsetMutablePtr(MR_UnorientedTriangle *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::UnorientedTriangle`.
/// Parameter `inVs` can not be null. It is a single object.
/// Parameter `outFlipped` defaults to a null pointer in C++.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UnorientedTriangle_Destroy()` to free it when you're done using it.
MRC_API MR_UnorientedTriangle *MR_UnorientedTriangle_Construct(const MR_std_array_MR_VertId_3 *inVs, bool *outFlipped);

/// Destroys a heap-allocated instance of `MR_UnorientedTriangle`. Does nothing if the pointer is null.
MRC_API void MR_UnorientedTriangle_Destroy(const MR_UnorientedTriangle *_this);

/// Destroys a heap-allocated array of `MR_UnorientedTriangle`. Does nothing if the pointer is null.
MRC_API void MR_UnorientedTriangle_DestroyArray(const MR_UnorientedTriangle *_this);

/// Generated from a conversion operator of class `MR::UnorientedTriangle` to type `std::array<MR::VertId, 3> &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_array_MR_VertId_3 *MR_UnorientedTriangle_ConvertTo_std_array_MR_VertId_3_ref(MR_UnorientedTriangle *_this);

/// Generated from a conversion operator of class `MR::UnorientedTriangle` to type `const std::array<MR::VertId, 3> &`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_array_MR_VertId_3 *MR_UnorientedTriangle_ConvertTo_const_std_array_MR_VertId_3_ref(const MR_UnorientedTriangle *_this);

/// Generated from a method of class `MR::UnorientedTriangle` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_UnorientedTriangle *MR_UnorientedTriangle_AssignFromAnother(MR_UnorientedTriangle *_this, const MR_UnorientedTriangle *_other);

/// returns this triangle with the opposite orientation
/// Generated from a method of class `MR::UnorientedTriangle` named `getFlipped`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_std_array_MR_VertId_3 MR_UnorientedTriangle_getFlipped(const MR_UnorientedTriangle *_this);

/// Generated from a method of class `MR::UnorientedTriangle` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_UnorientedTriangle_index(MR_UnorientedTriangle *_this, MR_uint64_t i);

/// Generated from a method of class `MR::UnorientedTriangle` named `operator[]`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_UnorientedTriangle_index_const(const MR_UnorientedTriangle *_this, MR_uint64_t i);

/// Generated from function `MR::operator==`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_equal_MR_UnorientedTriangle(const MR_UnorientedTriangle *a, const MR_UnorientedTriangle *b);

#ifdef __cplusplus
} // extern "C"
#endif
