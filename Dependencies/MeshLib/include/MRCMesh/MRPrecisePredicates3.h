// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box3d MR_Box3d; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_std_array_MR_PreciseVertCoords_4 MR_std_array_MR_PreciseVertCoords_4; // Defined in `#include <MRCMisc/std_array_MR_PreciseVertCoords_4.h>`.
typedef struct MR_std_array_MR_PreciseVertCoords_5 MR_std_array_MR_PreciseVertCoords_5; // Defined in `#include <MRCMisc/std_array_MR_PreciseVertCoords_5.h>`.
typedef struct MR_std_array_MR_PreciseVertCoords_8 MR_std_array_MR_PreciseVertCoords_8; // Defined in `#include <MRCMisc/std_array_MR_PreciseVertCoords_8.h>`.
typedef struct MR_std_function_MR_Vector3f_from_const_MR_Vector3i_ref MR_std_function_MR_Vector3f_from_const_MR_Vector3i_ref; // Defined in `#include <MRCMisc/std_function_MR_Vector3f_from_const_MR_Vector3i_ref.h>`.
typedef struct MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_MR_Vector3i_from_const_MR_Vector3f_ref.h>`.
typedef struct MR_std_optional_MR_Vector3i MR_std_optional_MR_Vector3i; // Defined in `#include <MRCMisc/std_optional_MR_Vector3i.h>`.


/// Generated from class `MR::PreciseVertCoords`.
typedef struct MR_PreciseVertCoords MR_PreciseVertCoords;

/// Generated from class `MR::TriangleSegmentIntersectResult`.
typedef struct MR_TriangleSegmentIntersectResult MR_TriangleSegmentIntersectResult;

/// this struct contains coordinate converters float-int-float
/// Generated from class `MR::CoordinateConverters`.
typedef struct MR_CoordinateConverters MR_CoordinateConverters;

/// returns true if the plane with orientated triangle ABC has 0 point at the left;
/// uses simulation-of-simplicity to avoid "0 is exactly on plane"
/// Generated from function `MR::orient3d`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API bool MR_orient3d_3(const MR_Vector3i *a, const MR_Vector3i *b, const MR_Vector3i *c);

/// returns true if the plane with orientated triangle ABC has D point at the left;
/// uses simulation-of-simplicity to avoid "D is exactly on plane"
/// Generated from function `MR::orient3d`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
MRC_API bool MR_orient3d_4(const MR_Vector3i *a, const MR_Vector3i *b, const MR_Vector3i *c, const MR_Vector3i *d);

///< unique id of the vertex (in both meshes)
/// Returns a pointer to a member variable of class `MR::PreciseVertCoords` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PreciseVertCoords_Get_id(const MR_PreciseVertCoords *_this);

///< unique id of the vertex (in both meshes)
/// Modifies a member variable of class `MR::PreciseVertCoords` named `id`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PreciseVertCoords_Set_id(MR_PreciseVertCoords *_this, MR_VertId value);

///< unique id of the vertex (in both meshes)
/// Returns a mutable pointer to a member variable of class `MR::PreciseVertCoords` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PreciseVertCoords_GetMutable_id(MR_PreciseVertCoords *_this);

///< integer coordinates of the vertex
/// Returns a pointer to a member variable of class `MR::PreciseVertCoords` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_PreciseVertCoords_Get_pt(const MR_PreciseVertCoords *_this);

///< integer coordinates of the vertex
/// Modifies a member variable of class `MR::PreciseVertCoords` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PreciseVertCoords_Set_pt(MR_PreciseVertCoords *_this, MR_Vector3i value);

///< integer coordinates of the vertex
/// Returns a mutable pointer to a member variable of class `MR::PreciseVertCoords` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3i *MR_PreciseVertCoords_GetMutable_pt(MR_PreciseVertCoords *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PreciseVertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_PreciseVertCoords *MR_PreciseVertCoords_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PreciseVertCoords_DestroyArray()`.
/// Use `MR_PreciseVertCoords_OffsetMutablePtr()` and `MR_PreciseVertCoords_OffsetPtr()` to access the array elements.
MRC_API MR_PreciseVertCoords *MR_PreciseVertCoords_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PreciseVertCoords` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PreciseVertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_PreciseVertCoords *MR_PreciseVertCoords_ConstructFrom(MR_VertId id, MR_Vector3i pt);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PreciseVertCoords *MR_PreciseVertCoords_OffsetPtr(const MR_PreciseVertCoords *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PreciseVertCoords *MR_PreciseVertCoords_OffsetMutablePtr(MR_PreciseVertCoords *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PreciseVertCoords`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PreciseVertCoords_Destroy()` to free it when you're done using it.
MRC_API MR_PreciseVertCoords *MR_PreciseVertCoords_ConstructFromAnother(const MR_PreciseVertCoords *_other);

/// Destroys a heap-allocated instance of `MR_PreciseVertCoords`. Does nothing if the pointer is null.
MRC_API void MR_PreciseVertCoords_Destroy(const MR_PreciseVertCoords *_this);

/// Destroys a heap-allocated array of `MR_PreciseVertCoords`. Does nothing if the pointer is null.
MRC_API void MR_PreciseVertCoords_DestroyArray(const MR_PreciseVertCoords *_this);

/// Generated from a method of class `MR::PreciseVertCoords` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PreciseVertCoords *MR_PreciseVertCoords_AssignFromAnother(MR_PreciseVertCoords *_this, const MR_PreciseVertCoords *_other);

/// first sorts the indices in ascending order, then calls the predicate for sorted points
/// Generated from function `MR::orient3d`.
/// Parameter `vs` can not be null. It is a single object.
MRC_API bool MR_orient3d_1_std_array_MR_PreciseVertCoords_4(const MR_std_array_MR_PreciseVertCoords_4 *vs);

/// Generated from function `MR::orient3d`.
MRC_API bool MR_orient3d_1_const_MR_PreciseVertCoords_ptr(const MR_PreciseVertCoords *vs);

///< whether triangle and segment intersect
/// Returns a pointer to a member variable of class `MR::TriangleSegmentIntersectResult` named `doIntersect`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_TriangleSegmentIntersectResult_Get_doIntersect(const MR_TriangleSegmentIntersectResult *_this);

///< whether triangle and segment intersect
/// Modifies a member variable of class `MR::TriangleSegmentIntersectResult` named `doIntersect`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangleSegmentIntersectResult_Set_doIntersect(MR_TriangleSegmentIntersectResult *_this, bool value);

///< whether triangle and segment intersect
/// Returns a mutable pointer to a member variable of class `MR::TriangleSegmentIntersectResult` named `doIntersect`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_TriangleSegmentIntersectResult_GetMutable_doIntersect(MR_TriangleSegmentIntersectResult *_this);

///< whether the plane with orientated triangle ABC has D point at the left
/// Returns a pointer to a member variable of class `MR::TriangleSegmentIntersectResult` named `dIsLeftFromABC`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_TriangleSegmentIntersectResult_Get_dIsLeftFromABC(const MR_TriangleSegmentIntersectResult *_this);

///< whether the plane with orientated triangle ABC has D point at the left
/// Modifies a member variable of class `MR::TriangleSegmentIntersectResult` named `dIsLeftFromABC`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_TriangleSegmentIntersectResult_Set_dIsLeftFromABC(MR_TriangleSegmentIntersectResult *_this, bool value);

///< whether the plane with orientated triangle ABC has D point at the left
/// Returns a mutable pointer to a member variable of class `MR::TriangleSegmentIntersectResult` named `dIsLeftFromABC`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_TriangleSegmentIntersectResult_GetMutable_dIsLeftFromABC(MR_TriangleSegmentIntersectResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangleSegmentIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_TriangleSegmentIntersectResult *MR_TriangleSegmentIntersectResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_TriangleSegmentIntersectResult_DestroyArray()`.
/// Use `MR_TriangleSegmentIntersectResult_OffsetMutablePtr()` and `MR_TriangleSegmentIntersectResult_OffsetPtr()` to access the array elements.
MRC_API MR_TriangleSegmentIntersectResult *MR_TriangleSegmentIntersectResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::TriangleSegmentIntersectResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangleSegmentIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_TriangleSegmentIntersectResult *MR_TriangleSegmentIntersectResult_ConstructFrom(bool doIntersect, bool dIsLeftFromABC);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_TriangleSegmentIntersectResult *MR_TriangleSegmentIntersectResult_OffsetPtr(const MR_TriangleSegmentIntersectResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_TriangleSegmentIntersectResult *MR_TriangleSegmentIntersectResult_OffsetMutablePtr(MR_TriangleSegmentIntersectResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::TriangleSegmentIntersectResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangleSegmentIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_TriangleSegmentIntersectResult *MR_TriangleSegmentIntersectResult_ConstructFromAnother(const MR_TriangleSegmentIntersectResult *_other);

/// Destroys a heap-allocated instance of `MR_TriangleSegmentIntersectResult`. Does nothing if the pointer is null.
MRC_API void MR_TriangleSegmentIntersectResult_Destroy(const MR_TriangleSegmentIntersectResult *_this);

/// Destroys a heap-allocated array of `MR_TriangleSegmentIntersectResult`. Does nothing if the pointer is null.
MRC_API void MR_TriangleSegmentIntersectResult_DestroyArray(const MR_TriangleSegmentIntersectResult *_this);

/// Generated from a conversion operator of class `MR::TriangleSegmentIntersectResult` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_TriangleSegmentIntersectResult_ConvertTo_bool(const MR_TriangleSegmentIntersectResult *_this);

/// Generated from a method of class `MR::TriangleSegmentIntersectResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_TriangleSegmentIntersectResult *MR_TriangleSegmentIntersectResult_AssignFromAnother(MR_TriangleSegmentIntersectResult *_this, const MR_TriangleSegmentIntersectResult *_other);

/// checks whether triangle ABC (indices 012) and segment DE (indices 34) intersect
/// uses simulation-of-simplicity to avoid edge-segment intersections and co-planarity
/// Generated from function `MR::doTriangleSegmentIntersect`.
/// Parameter `vs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_TriangleSegmentIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_TriangleSegmentIntersectResult *MR_doTriangleSegmentIntersect(const MR_std_array_MR_PreciseVertCoords_5 *vs);

/// given line segment s=01 and two triangles ta=234, tb=567 known to intersect it, finds the order of intersection using precise predicates:
/// true:  s[0], s ^ ta, s ^ tb, s[1]
/// false: s[0], s ^ tb, s ^ ta, s[1]
/// segments ta and tb can have at most two shared points, all other points must be unique
/// Generated from function `MR::segmentIntersectionOrder`.
/// Parameter `vs` can not be null. It is a single object.
MRC_API bool MR_segmentIntersectionOrder_std_array_MR_PreciseVertCoords_8(const MR_std_array_MR_PreciseVertCoords_8 *vs);

/// Returns a pointer to a member variable of class `MR::CoordinateConverters` named `toInt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *MR_CoordinateConverters_Get_toInt(const MR_CoordinateConverters *_this);

/// Modifies a member variable of class `MR::CoordinateConverters` named `toInt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CoordinateConverters_Set_toInt(MR_CoordinateConverters *_this, MR_PassBy value_pass_by, MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::CoordinateConverters` named `toInt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *MR_CoordinateConverters_GetMutable_toInt(MR_CoordinateConverters *_this);

/// Returns a pointer to a member variable of class `MR::CoordinateConverters` named `toFloat`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_MR_Vector3f_from_const_MR_Vector3i_ref *MR_CoordinateConverters_Get_toFloat(const MR_CoordinateConverters *_this);

/// Modifies a member variable of class `MR::CoordinateConverters` named `toFloat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CoordinateConverters_Set_toFloat(MR_CoordinateConverters *_this, MR_PassBy value_pass_by, MR_std_function_MR_Vector3f_from_const_MR_Vector3i_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::CoordinateConverters` named `toFloat`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_MR_Vector3f_from_const_MR_Vector3i_ref *MR_CoordinateConverters_GetMutable_toFloat(MR_CoordinateConverters *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CoordinateConverters_Destroy()` to free it when you're done using it.
MRC_API MR_CoordinateConverters *MR_CoordinateConverters_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CoordinateConverters_DestroyArray()`.
/// Use `MR_CoordinateConverters_OffsetMutablePtr()` and `MR_CoordinateConverters_OffsetPtr()` to access the array elements.
MRC_API MR_CoordinateConverters *MR_CoordinateConverters_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CoordinateConverters` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CoordinateConverters_Destroy()` to free it when you're done using it.
MRC_API MR_CoordinateConverters *MR_CoordinateConverters_ConstructFrom(MR_PassBy toInt_pass_by, MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *toInt, MR_PassBy toFloat_pass_by, MR_std_function_MR_Vector3f_from_const_MR_Vector3i_ref *toFloat);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CoordinateConverters *MR_CoordinateConverters_OffsetPtr(const MR_CoordinateConverters *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CoordinateConverters *MR_CoordinateConverters_OffsetMutablePtr(MR_CoordinateConverters *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CoordinateConverters`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CoordinateConverters_Destroy()` to free it when you're done using it.
MRC_API MR_CoordinateConverters *MR_CoordinateConverters_ConstructFromAnother(MR_PassBy _other_pass_by, MR_CoordinateConverters *_other);

/// Destroys a heap-allocated instance of `MR_CoordinateConverters`. Does nothing if the pointer is null.
MRC_API void MR_CoordinateConverters_Destroy(const MR_CoordinateConverters *_this);

/// Destroys a heap-allocated array of `MR_CoordinateConverters`. Does nothing if the pointer is null.
MRC_API void MR_CoordinateConverters_DestroyArray(const MR_CoordinateConverters *_this);

/// Generated from a method of class `MR::CoordinateConverters` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CoordinateConverters *MR_CoordinateConverters_AssignFromAnother(MR_CoordinateConverters *_this, MR_PassBy _other_pass_by, MR_CoordinateConverters *_other);

/// creates converter from Vector3f to Vector3i in Box range (int diapason is mapped to box range)
/// Generated from function `MR::getToIntConverter`.
/// Parameter `box` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_MR_Vector3i_from_const_MR_Vector3f_ref *MR_getToIntConverter(const MR_Box3d *box);

/// creates converter from Vector3i to Vector3f in Box range (int diapason is mapped to box range)
/// Generated from function `MR::getToFloatConverter`.
/// Parameter `box` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_function_MR_Vector3f_from_const_MR_Vector3i_ref_Destroy()` to free it when you're done using it.
MRC_API MR_std_function_MR_Vector3f_from_const_MR_Vector3i_ref *MR_getToFloatConverter(const MR_Box3d *box);

/// given two line segments AB and CD located in one plane,
/// finds whether they intersect and if yes, computes their common point using integer-only arithmetic
/// Generated from function `MR::findTwoSegmentsIntersection`.
/// Parameter `ai` can not be null. It is a single object.
/// Parameter `bi` can not be null. It is a single object.
/// Parameter `ci` can not be null. It is a single object.
/// Parameter `di` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_Vector3i_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_Vector3i *MR_findTwoSegmentsIntersection(const MR_Vector3i *ai, const MR_Vector3i *bi, const MR_Vector3i *ci, const MR_Vector3i *di);

/// finds intersection precise, using high precision int inside
/// this function input should have intersection
/// Generated from function `MR::findTriangleSegmentIntersectionPrecise`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
/// Parameter `e` can not be null. It is a single object.
MRC_API MR_Vector3f MR_findTriangleSegmentIntersectionPrecise(const MR_Vector3f *a, const MR_Vector3f *b, const MR_Vector3f *c, const MR_Vector3f *d, const MR_Vector3f *e, MR_PassBy converters_pass_by, MR_CoordinateConverters *converters);

#ifdef __cplusplus
} // extern "C"
#endif
