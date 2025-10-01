// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_array_MR_PreciseVertCoords2_3 MR_std_array_MR_PreciseVertCoords2_3; // Defined in `#include <MRCMisc/std_array_MR_PreciseVertCoords2_3.h>`.
typedef struct MR_std_array_MR_PreciseVertCoords2_4 MR_std_array_MR_PreciseVertCoords2_4; // Defined in `#include <MRCMisc/std_array_MR_PreciseVertCoords2_4.h>`.
typedef struct MR_std_array_MR_PreciseVertCoords2_6 MR_std_array_MR_PreciseVertCoords2_6; // Defined in `#include <MRCMisc/std_array_MR_PreciseVertCoords2_6.h>`.
typedef struct MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref; // Defined in `#include <MRCMisc/std_function_MR_Vector2f_from_const_MR_Vector2i_ref.h>`.
typedef struct MR_std_function_MR_Vector2i_from_const_MR_Vector2f_ref MR_std_function_MR_Vector2i_from_const_MR_Vector2f_ref; // Defined in `#include <MRCMisc/std_function_MR_Vector2i_from_const_MR_Vector2f_ref.h>`.


/// Generated from class `MR::PreciseVertCoord`.
typedef struct MR_PreciseVertCoord MR_PreciseVertCoord;

/// Generated from class `MR::PreciseVertCoords2`.
typedef struct MR_PreciseVertCoords2 MR_PreciseVertCoords2;

/// Generated from class `MR::SegmentSegmentIntersectResult`.
typedef struct MR_SegmentSegmentIntersectResult MR_SegmentSegmentIntersectResult;

/// this struct contains coordinate converters float-int-float
/// Generated from class `MR::CoordinateConverters2`.
typedef struct MR_CoordinateConverters2 MR_CoordinateConverters2;

///< unique id of the vertex (in both contours)
/// Returns a pointer to a member variable of class `MR::PreciseVertCoord` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PreciseVertCoord_Get_id(const MR_PreciseVertCoord *_this);

///< unique id of the vertex (in both contours)
/// Modifies a member variable of class `MR::PreciseVertCoord` named `id`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PreciseVertCoord_Set_id(MR_PreciseVertCoord *_this, MR_VertId value);

///< unique id of the vertex (in both contours)
/// Returns a mutable pointer to a member variable of class `MR::PreciseVertCoord` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PreciseVertCoord_GetMutable_id(MR_PreciseVertCoord *_this);

///< coordinate
/// Returns a pointer to a member variable of class `MR::PreciseVertCoord` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_PreciseVertCoord_Get_pt(const MR_PreciseVertCoord *_this);

///< coordinate
/// Modifies a member variable of class `MR::PreciseVertCoord` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PreciseVertCoord_Set_pt(MR_PreciseVertCoord *_this, int32_t value);

///< coordinate
/// Returns a mutable pointer to a member variable of class `MR::PreciseVertCoord` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_PreciseVertCoord_GetMutable_pt(MR_PreciseVertCoord *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PreciseVertCoord_Destroy()` to free it when you're done using it.
MRC_API MR_PreciseVertCoord *MR_PreciseVertCoord_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PreciseVertCoord_DestroyArray()`.
/// Use `MR_PreciseVertCoord_OffsetMutablePtr()` and `MR_PreciseVertCoord_OffsetPtr()` to access the array elements.
MRC_API MR_PreciseVertCoord *MR_PreciseVertCoord_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PreciseVertCoord` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PreciseVertCoord_Destroy()` to free it when you're done using it.
MRC_API MR_PreciseVertCoord *MR_PreciseVertCoord_ConstructFrom(MR_VertId id, int32_t pt);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PreciseVertCoord *MR_PreciseVertCoord_OffsetPtr(const MR_PreciseVertCoord *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PreciseVertCoord *MR_PreciseVertCoord_OffsetMutablePtr(MR_PreciseVertCoord *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PreciseVertCoord`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PreciseVertCoord_Destroy()` to free it when you're done using it.
MRC_API MR_PreciseVertCoord *MR_PreciseVertCoord_ConstructFromAnother(const MR_PreciseVertCoord *_other);

/// Destroys a heap-allocated instance of `MR_PreciseVertCoord`. Does nothing if the pointer is null.
MRC_API void MR_PreciseVertCoord_Destroy(const MR_PreciseVertCoord *_this);

/// Destroys a heap-allocated array of `MR_PreciseVertCoord`. Does nothing if the pointer is null.
MRC_API void MR_PreciseVertCoord_DestroyArray(const MR_PreciseVertCoord *_this);

/// Generated from a method of class `MR::PreciseVertCoord` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PreciseVertCoord *MR_PreciseVertCoord_AssignFromAnother(MR_PreciseVertCoord *_this, const MR_PreciseVertCoord *_other);

/// return true if l is smaller than r,
/// uses simulation-of-simplicity (assuming larger perturbations of points with smaller id) to avoid "coordinates are the same"
/// Generated from function `MR::smaller`.
/// Parameter `l` can not be null. It is a single object.
/// Parameter `r` can not be null. It is a single object.
MRC_API bool MR_smaller(const MR_PreciseVertCoord *l, const MR_PreciseVertCoord *r);

/// return true if the smallest rotation from vector (a) to vector (b) is in counter-clock-wise direction;
/// uses simulation-of-simplicity (assuming perturbations a >> b) to avoid "vectors are collinear"
/// Generated from function `MR::ccw`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
MRC_API bool MR_ccw_2(const MR_Vector2i *a, const MR_Vector2i *b);

/// return true if the smallest rotation from vector (a-c) to vector (b-c) is in counter-clock-wise direction;
/// uses simulation-of-simplicity (assuming perturbations a >> b >> c) to avoid "vectors are collinear"
/// Generated from function `MR::ccw`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API bool MR_ccw_3(const MR_Vector2i *a, const MR_Vector2i *b, const MR_Vector2i *c);

///< unique id of the vertex (in both contours)
/// Returns a pointer to a member variable of class `MR::PreciseVertCoords2` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_PreciseVertCoords2_Get_id(const MR_PreciseVertCoords2 *_this);

///< unique id of the vertex (in both contours)
/// Modifies a member variable of class `MR::PreciseVertCoords2` named `id`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PreciseVertCoords2_Set_id(MR_PreciseVertCoords2 *_this, MR_VertId value);

///< unique id of the vertex (in both contours)
/// Returns a mutable pointer to a member variable of class `MR::PreciseVertCoords2` named `id`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_PreciseVertCoords2_GetMutable_id(MR_PreciseVertCoords2 *_this);

///< integer coordinates of the vertex
/// Returns a pointer to a member variable of class `MR::PreciseVertCoords2` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector2i *MR_PreciseVertCoords2_Get_pt(const MR_PreciseVertCoords2 *_this);

///< integer coordinates of the vertex
/// Modifies a member variable of class `MR::PreciseVertCoords2` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_PreciseVertCoords2_Set_pt(MR_PreciseVertCoords2 *_this, MR_Vector2i value);

///< integer coordinates of the vertex
/// Returns a mutable pointer to a member variable of class `MR::PreciseVertCoords2` named `pt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector2i *MR_PreciseVertCoords2_GetMutable_pt(MR_PreciseVertCoords2 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PreciseVertCoords2_Destroy()` to free it when you're done using it.
MRC_API MR_PreciseVertCoords2 *MR_PreciseVertCoords2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_PreciseVertCoords2_DestroyArray()`.
/// Use `MR_PreciseVertCoords2_OffsetMutablePtr()` and `MR_PreciseVertCoords2_OffsetPtr()` to access the array elements.
MRC_API MR_PreciseVertCoords2 *MR_PreciseVertCoords2_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::PreciseVertCoords2` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PreciseVertCoords2_Destroy()` to free it when you're done using it.
MRC_API MR_PreciseVertCoords2 *MR_PreciseVertCoords2_ConstructFrom(MR_VertId id, MR_Vector2i pt);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_PreciseVertCoords2 *MR_PreciseVertCoords2_OffsetPtr(const MR_PreciseVertCoords2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_PreciseVertCoords2 *MR_PreciseVertCoords2_OffsetMutablePtr(MR_PreciseVertCoords2 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::PreciseVertCoords2`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_PreciseVertCoords2_Destroy()` to free it when you're done using it.
MRC_API MR_PreciseVertCoords2 *MR_PreciseVertCoords2_ConstructFromAnother(const MR_PreciseVertCoords2 *_other);

/// Destroys a heap-allocated instance of `MR_PreciseVertCoords2`. Does nothing if the pointer is null.
MRC_API void MR_PreciseVertCoords2_Destroy(const MR_PreciseVertCoords2 *_this);

/// Destroys a heap-allocated array of `MR_PreciseVertCoords2`. Does nothing if the pointer is null.
MRC_API void MR_PreciseVertCoords2_DestroyArray(const MR_PreciseVertCoords2 *_this);

/// Generated from a method of class `MR::PreciseVertCoords2` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_PreciseVertCoords2 *MR_PreciseVertCoords2_AssignFromAnother(MR_PreciseVertCoords2 *_this, const MR_PreciseVertCoords2 *_other);

/// return true if the smallest rotation from vector (vs[0]-vs[2]) to vector (vs[1]-vs[2]) is in counter-clock-wise direction;
/// uses simulation-of-simplicity (assuming larger perturbations of points with smaller id) to avoid "vectors are collinear"
/// Generated from function `MR::ccw`.
/// Parameter `vs` can not be null. It is a single object.
MRC_API bool MR_ccw_1_std_array_MR_PreciseVertCoords2_3(const MR_std_array_MR_PreciseVertCoords2_3 *vs);

/// Generated from function `MR::ccw`.
MRC_API bool MR_ccw_1_const_MR_PreciseVertCoords2_ptr(const MR_PreciseVertCoords2 *vs);

/// given the line passing via points vs[0] and vs[1], which defines linear signed scalar distance field:
/// zero on the line, positive for x where ccw(vs[0], vs[1], x) == true, and negative for x where ccw(vs[0], vs[1], x) == false
/// finds whether sdistance(vs[2]) < sdistance(vs[3]);
/// avoids equality of signed distances using simulation-of-simplicity approach (assuming larger perturbations of points with smaller id)
/// Generated from function `MR::smaller2`.
/// Parameter `vs` can not be null. It is a single object.
MRC_API bool MR_smaller2(const MR_std_array_MR_PreciseVertCoords2_4 *vs);

/// considers 3D points obtained from 2D inputs by moving each point on paraboloid: z = x*x+y*y;
/// returns true if the plane with orientated triangle ABC has D point at the left;
/// uses simulation-of-simplicity to avoid "D is exactly on plane"
/// Generated from function `MR::orientParaboloid3d`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
MRC_API bool MR_orientParaboloid3d_3(const MR_Vector2i *a, const MR_Vector2i *b, const MR_Vector2i *c);

/// Generated from function `MR::orientParaboloid3d`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
MRC_API bool MR_orientParaboloid3d_4(const MR_Vector2i *a, const MR_Vector2i *b, const MR_Vector2i *c, const MR_Vector2i *d);

/// return true if 4th point in array lays inside circumcircle of first 3 points based triangle
/// Generated from function `MR::inCircle`.
/// Parameter `vs` can not be null. It is a single object.
MRC_API bool MR_inCircle_std_array_MR_PreciseVertCoords2_4(const MR_std_array_MR_PreciseVertCoords2_4 *vs);

/// Generated from function `MR::inCircle`.
MRC_API bool MR_inCircle_const_MR_PreciseVertCoords2_ptr(const MR_PreciseVertCoords2 *vs);

///< whether the segments intersect
/// Returns a pointer to a member variable of class `MR::SegmentSegmentIntersectResult` named `doIntersect`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SegmentSegmentIntersectResult_Get_doIntersect(const MR_SegmentSegmentIntersectResult *_this);

///< whether the segments intersect
/// Modifies a member variable of class `MR::SegmentSegmentIntersectResult` named `doIntersect`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SegmentSegmentIntersectResult_Set_doIntersect(MR_SegmentSegmentIntersectResult *_this, bool value);

///< whether the segments intersect
/// Returns a mutable pointer to a member variable of class `MR::SegmentSegmentIntersectResult` named `doIntersect`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SegmentSegmentIntersectResult_GetMutable_doIntersect(MR_SegmentSegmentIntersectResult *_this);

///< whether the directed line AB has C point at the left
/// Returns a pointer to a member variable of class `MR::SegmentSegmentIntersectResult` named `cIsLeftFromAB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_SegmentSegmentIntersectResult_Get_cIsLeftFromAB(const MR_SegmentSegmentIntersectResult *_this);

///< whether the directed line AB has C point at the left
/// Modifies a member variable of class `MR::SegmentSegmentIntersectResult` named `cIsLeftFromAB`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SegmentSegmentIntersectResult_Set_cIsLeftFromAB(MR_SegmentSegmentIntersectResult *_this, bool value);

///< whether the directed line AB has C point at the left
/// Returns a mutable pointer to a member variable of class `MR::SegmentSegmentIntersectResult` named `cIsLeftFromAB`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_SegmentSegmentIntersectResult_GetMutable_cIsLeftFromAB(MR_SegmentSegmentIntersectResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmentSegmentIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_SegmentSegmentIntersectResult *MR_SegmentSegmentIntersectResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SegmentSegmentIntersectResult_DestroyArray()`.
/// Use `MR_SegmentSegmentIntersectResult_OffsetMutablePtr()` and `MR_SegmentSegmentIntersectResult_OffsetPtr()` to access the array elements.
MRC_API MR_SegmentSegmentIntersectResult *MR_SegmentSegmentIntersectResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SegmentSegmentIntersectResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmentSegmentIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_SegmentSegmentIntersectResult *MR_SegmentSegmentIntersectResult_ConstructFrom(bool doIntersect, bool cIsLeftFromAB);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SegmentSegmentIntersectResult *MR_SegmentSegmentIntersectResult_OffsetPtr(const MR_SegmentSegmentIntersectResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SegmentSegmentIntersectResult *MR_SegmentSegmentIntersectResult_OffsetMutablePtr(MR_SegmentSegmentIntersectResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SegmentSegmentIntersectResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmentSegmentIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_SegmentSegmentIntersectResult *MR_SegmentSegmentIntersectResult_ConstructFromAnother(const MR_SegmentSegmentIntersectResult *_other);

/// Destroys a heap-allocated instance of `MR_SegmentSegmentIntersectResult`. Does nothing if the pointer is null.
MRC_API void MR_SegmentSegmentIntersectResult_Destroy(const MR_SegmentSegmentIntersectResult *_this);

/// Destroys a heap-allocated array of `MR_SegmentSegmentIntersectResult`. Does nothing if the pointer is null.
MRC_API void MR_SegmentSegmentIntersectResult_DestroyArray(const MR_SegmentSegmentIntersectResult *_this);

/// Generated from a conversion operator of class `MR::SegmentSegmentIntersectResult` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_SegmentSegmentIntersectResult_ConvertTo_bool(const MR_SegmentSegmentIntersectResult *_this);

/// Generated from a method of class `MR::SegmentSegmentIntersectResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SegmentSegmentIntersectResult *MR_SegmentSegmentIntersectResult_AssignFromAnother(MR_SegmentSegmentIntersectResult *_this, const MR_SegmentSegmentIntersectResult *_other);

/// checks whether the segments AB (indices 01) and segments CD (indices 23) intersect;
/// uses simulation-of-simplicity to avoid edge-segment intersections and co-planarity
/// Generated from function `MR::doSegmentSegmentIntersect`.
/// Parameter `vs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SegmentSegmentIntersectResult_Destroy()` to free it when you're done using it.
MRC_API MR_SegmentSegmentIntersectResult *MR_doSegmentSegmentIntersect(const MR_std_array_MR_PreciseVertCoords2_4 *vs);

/// Returns a pointer to a member variable of class `MR::CoordinateConverters2` named `toInt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_MR_Vector2i_from_const_MR_Vector2f_ref *MR_CoordinateConverters2_Get_toInt(const MR_CoordinateConverters2 *_this);

/// Modifies a member variable of class `MR::CoordinateConverters2` named `toInt`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CoordinateConverters2_Set_toInt(MR_CoordinateConverters2 *_this, MR_PassBy value_pass_by, MR_std_function_MR_Vector2i_from_const_MR_Vector2f_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::CoordinateConverters2` named `toInt`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_MR_Vector2i_from_const_MR_Vector2f_ref *MR_CoordinateConverters2_GetMutable_toInt(MR_CoordinateConverters2 *_this);

/// Returns a pointer to a member variable of class `MR::CoordinateConverters2` named `toFloat`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *MR_CoordinateConverters2_Get_toFloat(const MR_CoordinateConverters2 *_this);

/// Modifies a member variable of class `MR::CoordinateConverters2` named `toFloat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CoordinateConverters2_Set_toFloat(MR_CoordinateConverters2 *_this, MR_PassBy value_pass_by, MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *value);

/// Returns a mutable pointer to a member variable of class `MR::CoordinateConverters2` named `toFloat`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *MR_CoordinateConverters2_GetMutable_toFloat(MR_CoordinateConverters2 *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CoordinateConverters2_Destroy()` to free it when you're done using it.
MRC_API MR_CoordinateConverters2 *MR_CoordinateConverters2_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CoordinateConverters2_DestroyArray()`.
/// Use `MR_CoordinateConverters2_OffsetMutablePtr()` and `MR_CoordinateConverters2_OffsetPtr()` to access the array elements.
MRC_API MR_CoordinateConverters2 *MR_CoordinateConverters2_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::CoordinateConverters2` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CoordinateConverters2_Destroy()` to free it when you're done using it.
MRC_API MR_CoordinateConverters2 *MR_CoordinateConverters2_ConstructFrom(MR_PassBy toInt_pass_by, MR_std_function_MR_Vector2i_from_const_MR_Vector2f_ref *toInt, MR_PassBy toFloat_pass_by, MR_std_function_MR_Vector2f_from_const_MR_Vector2i_ref *toFloat);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CoordinateConverters2 *MR_CoordinateConverters2_OffsetPtr(const MR_CoordinateConverters2 *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CoordinateConverters2 *MR_CoordinateConverters2_OffsetMutablePtr(MR_CoordinateConverters2 *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CoordinateConverters2`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CoordinateConverters2_Destroy()` to free it when you're done using it.
MRC_API MR_CoordinateConverters2 *MR_CoordinateConverters2_ConstructFromAnother(MR_PassBy _other_pass_by, MR_CoordinateConverters2 *_other);

/// Destroys a heap-allocated instance of `MR_CoordinateConverters2`. Does nothing if the pointer is null.
MRC_API void MR_CoordinateConverters2_Destroy(const MR_CoordinateConverters2 *_this);

/// Destroys a heap-allocated array of `MR_CoordinateConverters2`. Does nothing if the pointer is null.
MRC_API void MR_CoordinateConverters2_DestroyArray(const MR_CoordinateConverters2 *_this);

/// Generated from a method of class `MR::CoordinateConverters2` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CoordinateConverters2 *MR_CoordinateConverters2_AssignFromAnother(MR_CoordinateConverters2 *_this, MR_PassBy _other_pass_by, MR_CoordinateConverters2 *_other);

/// given line segment s=01 and two other segments sa=23, sb=45 known to intersect it, finds the order of intersection using precise predicates:
/// true:  s[0], s ^ sa, s ^ sb, s[1]
/// false: s[0], s ^ sb, s ^ sa, s[1]
/// segments sa and sb can have at most one shared point, all other points must be unique
/// Generated from function `MR::segmentIntersectionOrder`.
/// Parameter `vs` can not be null. It is a single object.
MRC_API bool MR_segmentIntersectionOrder_std_array_MR_PreciseVertCoords2_6(const MR_std_array_MR_PreciseVertCoords2_6 *vs);

/// finds intersection precise, using high precision int inside
/// this function input should have intersection
/// Generated from function `MR::findSegmentSegmentIntersectionPrecise`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
MRC_API MR_Vector2i MR_findSegmentSegmentIntersectionPrecise_4(const MR_Vector2i *a, const MR_Vector2i *b, const MR_Vector2i *c, const MR_Vector2i *d);

/// finds intersection precise, using high precision int inside
/// this function input should have intersection
/// Generated from function `MR::findSegmentSegmentIntersectionPrecise`.
/// Parameter `a` can not be null. It is a single object.
/// Parameter `b` can not be null. It is a single object.
/// Parameter `c` can not be null. It is a single object.
/// Parameter `d` can not be null. It is a single object.
MRC_API MR_Vector2f MR_findSegmentSegmentIntersectionPrecise_5(const MR_Vector2f *a, const MR_Vector2f *b, const MR_Vector2f *c, const MR_Vector2f *d, MR_PassBy converters_pass_by, MR_CoordinateConverters2 *converters);

#ifdef __cplusplus
} // extern "C"
#endif
