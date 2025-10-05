// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>
#include <MRCMisc/std_array_int32_t_4.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Buffer_MR_VertId MR_Buffer_MR_VertId; // Defined in `#include <MRCMesh/MRBuffer.h>`.
typedef struct MR_NoInit MR_NoInit; // Defined in `#include <MRCMesh/MRMeshFwd.h>`.
typedef struct MR_PointCloud MR_PointCloud; // Defined in `#include <MRCMesh/MRPointCloud.h>`.
typedef struct MR_Triangulation MR_Triangulation; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_FanRecord_MR_VertId MR_Vector_MR_FanRecord_MR_VertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_MR_Vector3f_from_MR_VertId MR_std_function_MR_Vector3f_from_MR_VertId; // Defined in `#include <MRCMisc/std_function_MR_Vector3f_from_MR_VertId.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_AllLocalTriangulations MR_std_optional_MR_AllLocalTriangulations; // Defined in `#include <MRCMisc/std_optional_MR_AllLocalTriangulations.h>`.
typedef struct MR_std_vector_MR_FanRecordWithCenter MR_std_vector_MR_FanRecordWithCenter; // Defined in `#include <MRCMisc/std_vector_MR_FanRecordWithCenter.h>`.
typedef struct MR_std_vector_MR_SomeLocalTriangulations MR_std_vector_MR_SomeLocalTriangulations; // Defined in `#include <MRCMisc/std_vector_MR_SomeLocalTriangulations.h>`.
typedef struct MR_std_vector_MR_UnorientedTriangle MR_std_vector_MR_UnorientedTriangle; // Defined in `#include <MRCMisc/std_vector_MR_UnorientedTriangle.h>`.
typedef struct MR_std_vector_MR_VertId MR_std_vector_MR_VertId; // Defined in `#include <MRCMisc/std_vector_MR_VertId.h>`.


/// describes one fan of triangles around a point excluding the point
/// Generated from class `MR::FanRecord`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::FanRecordWithCenter`
typedef struct MR_FanRecord MR_FanRecord;

/// describes one fan of triangles around a point including the point
/// Generated from class `MR::FanRecordWithCenter`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::FanRecord`
typedef struct MR_FanRecordWithCenter MR_FanRecordWithCenter;

/// describes a number of local triangulations of some points (e.g. assigned to a thread)
/// Generated from class `MR::SomeLocalTriangulations`.
typedef struct MR_SomeLocalTriangulations MR_SomeLocalTriangulations;

/// triangulations for all points, with easy access by VertId
/// Generated from class `MR::AllLocalTriangulations`.
typedef struct MR_AllLocalTriangulations MR_AllLocalTriangulations;

/// first border edge (invalid if the center point is not on the boundary);
/// triangle associated with this point is absent
/// Returns a pointer to a member variable of class `MR::FanRecord` named `border`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_FanRecord_Get_border(const MR_FanRecord *_this);

/// first border edge (invalid if the center point is not on the boundary);
/// triangle associated with this point is absent
/// Modifies a member variable of class `MR::FanRecord` named `border`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FanRecord_Set_border(MR_FanRecord *_this, MR_VertId value);

/// first border edge (invalid if the center point is not on the boundary);
/// triangle associated with this point is absent
/// Returns a mutable pointer to a member variable of class `MR::FanRecord` named `border`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_FanRecord_GetMutable_border(MR_FanRecord *_this);

/// the position of first neigbor in LocalTriangulations::neighbours
/// Returns a pointer to a member variable of class `MR::FanRecord` named `firstNei`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint32_t *MR_FanRecord_Get_firstNei(const MR_FanRecord *_this);

/// the position of first neigbor in LocalTriangulations::neighbours
/// Modifies a member variable of class `MR::FanRecord` named `firstNei`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FanRecord_Set_firstNei(MR_FanRecord *_this, uint32_t value);

/// the position of first neigbor in LocalTriangulations::neighbours
/// Returns a mutable pointer to a member variable of class `MR::FanRecord` named `firstNei`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint32_t *MR_FanRecord_GetMutable_firstNei(MR_FanRecord *_this);

/// Generated from a constructor of class `MR::FanRecord`.
/// Parameter `b` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `fn` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FanRecord_Destroy()` to free it when you're done using it.
MRC_API MR_FanRecord *MR_FanRecord_Construct_2(const MR_VertId *b, const uint32_t *fn);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FanRecord_DestroyArray()`.
/// Use `MR_FanRecord_OffsetMutablePtr()` and `MR_FanRecord_OffsetPtr()` to access the array elements.
MRC_API MR_FanRecord *MR_FanRecord_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FanRecord *MR_FanRecord_OffsetPtr(const MR_FanRecord *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FanRecord *MR_FanRecord_OffsetMutablePtr(MR_FanRecord *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::FanRecord` to a derived class `MR::FanRecordWithCenter`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_FanRecordWithCenter *MR_FanRecord_StaticDowncastTo_MR_FanRecordWithCenter(const MR_FanRecord *object);

/// Downcasts an instance of `MR::FanRecord` to a derived class `MR::FanRecordWithCenter`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_FanRecordWithCenter *MR_FanRecord_MutableStaticDowncastTo_MR_FanRecordWithCenter(MR_FanRecord *object);

/// Generated from a constructor of class `MR::FanRecord`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FanRecord_Destroy()` to free it when you're done using it.
MRC_API MR_FanRecord *MR_FanRecord_ConstructFromAnother(const MR_FanRecord *_other);

/// Generated from a constructor of class `MR::FanRecord`.
/// Parameter `_1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FanRecord_Destroy()` to free it when you're done using it.
MRC_API MR_FanRecord *MR_FanRecord_Construct_1(const MR_NoInit *_1);

/// Destroys a heap-allocated instance of `MR_FanRecord`. Does nothing if the pointer is null.
MRC_API void MR_FanRecord_Destroy(const MR_FanRecord *_this);

/// Destroys a heap-allocated array of `MR_FanRecord`. Does nothing if the pointer is null.
MRC_API void MR_FanRecord_DestroyArray(const MR_FanRecord *_this);

/// Generated from a method of class `MR::FanRecord` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FanRecord *MR_FanRecord_AssignFromAnother(MR_FanRecord *_this, const MR_FanRecord *_other);

/// center point in the fan
/// Returns a pointer to a member variable of class `MR::FanRecordWithCenter` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_FanRecordWithCenter_Get_center(const MR_FanRecordWithCenter *_this);

/// center point in the fan
/// Modifies a member variable of class `MR::FanRecordWithCenter` named `center`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_FanRecordWithCenter_Set_center(MR_FanRecordWithCenter *_this, MR_VertId value);

/// center point in the fan
/// Returns a mutable pointer to a member variable of class `MR::FanRecordWithCenter` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_FanRecordWithCenter_GetMutable_center(MR_FanRecordWithCenter *_this);

/// Generated from a constructor of class `MR::FanRecordWithCenter`.
/// Parameter `c` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `b` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `fn` has a default argument: `0`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FanRecordWithCenter_Destroy()` to free it when you're done using it.
MRC_API MR_FanRecordWithCenter *MR_FanRecordWithCenter_Construct_3(const MR_VertId *c, const MR_VertId *b, const uint32_t *fn);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_FanRecordWithCenter_DestroyArray()`.
/// Use `MR_FanRecordWithCenter_OffsetMutablePtr()` and `MR_FanRecordWithCenter_OffsetPtr()` to access the array elements.
MRC_API MR_FanRecordWithCenter *MR_FanRecordWithCenter_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_FanRecordWithCenter *MR_FanRecordWithCenter_OffsetPtr(const MR_FanRecordWithCenter *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_FanRecordWithCenter *MR_FanRecordWithCenter_OffsetMutablePtr(MR_FanRecordWithCenter *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::FanRecordWithCenter` to its base class `MR::FanRecord`.
/// This version is acting on mutable pointers.
MRC_API const MR_FanRecord *MR_FanRecordWithCenter_UpcastTo_MR_FanRecord(const MR_FanRecordWithCenter *object);

/// Upcasts an instance of `MR::FanRecordWithCenter` to its base class `MR::FanRecord`.
MRC_API MR_FanRecord *MR_FanRecordWithCenter_MutableUpcastTo_MR_FanRecord(MR_FanRecordWithCenter *object);

/// Generated from a constructor of class `MR::FanRecordWithCenter`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FanRecordWithCenter_Destroy()` to free it when you're done using it.
MRC_API MR_FanRecordWithCenter *MR_FanRecordWithCenter_ConstructFromAnother(const MR_FanRecordWithCenter *_other);

/// Generated from a constructor of class `MR::FanRecordWithCenter`.
/// Parameter `_1` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FanRecordWithCenter_Destroy()` to free it when you're done using it.
MRC_API MR_FanRecordWithCenter *MR_FanRecordWithCenter_Construct_1(const MR_NoInit *_1);

/// Destroys a heap-allocated instance of `MR_FanRecordWithCenter`. Does nothing if the pointer is null.
MRC_API void MR_FanRecordWithCenter_Destroy(const MR_FanRecordWithCenter *_this);

/// Destroys a heap-allocated array of `MR_FanRecordWithCenter`. Does nothing if the pointer is null.
MRC_API void MR_FanRecordWithCenter_DestroyArray(const MR_FanRecordWithCenter *_this);

/// Generated from a method of class `MR::FanRecordWithCenter` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FanRecordWithCenter *MR_FanRecordWithCenter_AssignFromAnother(MR_FanRecordWithCenter *_this, const MR_FanRecordWithCenter *_other);

/// Returns a pointer to a member variable of class `MR::SomeLocalTriangulations` named `neighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_VertId *MR_SomeLocalTriangulations_Get_neighbors(const MR_SomeLocalTriangulations *_this);

/// Modifies a member variable of class `MR::SomeLocalTriangulations` named `neighbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SomeLocalTriangulations_Set_neighbors(MR_SomeLocalTriangulations *_this, MR_PassBy value_pass_by, MR_std_vector_MR_VertId *value);

/// Returns a mutable pointer to a member variable of class `MR::SomeLocalTriangulations` named `neighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_VertId *MR_SomeLocalTriangulations_GetMutable_neighbors(MR_SomeLocalTriangulations *_this);

/// Returns a pointer to a member variable of class `MR::SomeLocalTriangulations` named `fanRecords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_FanRecordWithCenter *MR_SomeLocalTriangulations_Get_fanRecords(const MR_SomeLocalTriangulations *_this);

/// Modifies a member variable of class `MR::SomeLocalTriangulations` named `fanRecords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SomeLocalTriangulations_Set_fanRecords(MR_SomeLocalTriangulations *_this, MR_PassBy value_pass_by, MR_std_vector_MR_FanRecordWithCenter *value);

/// Returns a mutable pointer to a member variable of class `MR::SomeLocalTriangulations` named `fanRecords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_FanRecordWithCenter *MR_SomeLocalTriangulations_GetMutable_fanRecords(MR_SomeLocalTriangulations *_this);

//in fanRecords
/// Returns a pointer to a member variable of class `MR::SomeLocalTriangulations` named `maxCenterId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertId *MR_SomeLocalTriangulations_Get_maxCenterId(const MR_SomeLocalTriangulations *_this);

//in fanRecords
/// Modifies a member variable of class `MR::SomeLocalTriangulations` named `maxCenterId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SomeLocalTriangulations_Set_maxCenterId(MR_SomeLocalTriangulations *_this, MR_VertId value);

//in fanRecords
/// Returns a mutable pointer to a member variable of class `MR::SomeLocalTriangulations` named `maxCenterId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertId *MR_SomeLocalTriangulations_GetMutable_maxCenterId(MR_SomeLocalTriangulations *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SomeLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_SomeLocalTriangulations *MR_SomeLocalTriangulations_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SomeLocalTriangulations_DestroyArray()`.
/// Use `MR_SomeLocalTriangulations_OffsetMutablePtr()` and `MR_SomeLocalTriangulations_OffsetPtr()` to access the array elements.
MRC_API MR_SomeLocalTriangulations *MR_SomeLocalTriangulations_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SomeLocalTriangulations` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SomeLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_SomeLocalTriangulations *MR_SomeLocalTriangulations_ConstructFrom(MR_PassBy neighbors_pass_by, MR_std_vector_MR_VertId *neighbors, MR_PassBy fanRecords_pass_by, MR_std_vector_MR_FanRecordWithCenter *fanRecords, MR_VertId maxCenterId);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SomeLocalTriangulations *MR_SomeLocalTriangulations_OffsetPtr(const MR_SomeLocalTriangulations *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SomeLocalTriangulations *MR_SomeLocalTriangulations_OffsetMutablePtr(MR_SomeLocalTriangulations *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SomeLocalTriangulations`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SomeLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_SomeLocalTriangulations *MR_SomeLocalTriangulations_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SomeLocalTriangulations *_other);

/// Destroys a heap-allocated instance of `MR_SomeLocalTriangulations`. Does nothing if the pointer is null.
MRC_API void MR_SomeLocalTriangulations_Destroy(const MR_SomeLocalTriangulations *_this);

/// Destroys a heap-allocated array of `MR_SomeLocalTriangulations`. Does nothing if the pointer is null.
MRC_API void MR_SomeLocalTriangulations_DestroyArray(const MR_SomeLocalTriangulations *_this);

/// Generated from a method of class `MR::SomeLocalTriangulations` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SomeLocalTriangulations *MR_SomeLocalTriangulations_AssignFromAnother(MR_SomeLocalTriangulations *_this, MR_PassBy _other_pass_by, MR_SomeLocalTriangulations *_other);

/// Returns a pointer to a member variable of class `MR::AllLocalTriangulations` named `neighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Buffer_MR_VertId *MR_AllLocalTriangulations_Get_neighbors(const MR_AllLocalTriangulations *_this);

/// Modifies a member variable of class `MR::AllLocalTriangulations` named `neighbors`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AllLocalTriangulations_Set_neighbors(MR_AllLocalTriangulations *_this, MR_PassBy value_pass_by, MR_Buffer_MR_VertId *value);

/// Returns a mutable pointer to a member variable of class `MR::AllLocalTriangulations` named `neighbors`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Buffer_MR_VertId *MR_AllLocalTriangulations_GetMutable_neighbors(MR_AllLocalTriangulations *_this);

/// Returns a pointer to a member variable of class `MR::AllLocalTriangulations` named `fanRecords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector_MR_FanRecord_MR_VertId *MR_AllLocalTriangulations_Get_fanRecords(const MR_AllLocalTriangulations *_this);

/// Modifies a member variable of class `MR::AllLocalTriangulations` named `fanRecords`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_AllLocalTriangulations_Set_fanRecords(MR_AllLocalTriangulations *_this, MR_PassBy value_pass_by, MR_Vector_MR_FanRecord_MR_VertId *value);

/// Returns a mutable pointer to a member variable of class `MR::AllLocalTriangulations` named `fanRecords`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_FanRecord_MR_VertId *MR_AllLocalTriangulations_GetMutable_fanRecords(MR_AllLocalTriangulations *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AllLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_AllLocalTriangulations *MR_AllLocalTriangulations_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_AllLocalTriangulations_DestroyArray()`.
/// Use `MR_AllLocalTriangulations_OffsetMutablePtr()` and `MR_AllLocalTriangulations_OffsetPtr()` to access the array elements.
MRC_API MR_AllLocalTriangulations *MR_AllLocalTriangulations_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::AllLocalTriangulations` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AllLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_AllLocalTriangulations *MR_AllLocalTriangulations_ConstructFrom(MR_PassBy neighbors_pass_by, MR_Buffer_MR_VertId *neighbors, MR_PassBy fanRecords_pass_by, MR_Vector_MR_FanRecord_MR_VertId *fanRecords);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_AllLocalTriangulations *MR_AllLocalTriangulations_OffsetPtr(const MR_AllLocalTriangulations *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_AllLocalTriangulations *MR_AllLocalTriangulations_OffsetMutablePtr(MR_AllLocalTriangulations *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::AllLocalTriangulations`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_AllLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_AllLocalTriangulations *MR_AllLocalTriangulations_ConstructFromAnother(MR_PassBy _other_pass_by, MR_AllLocalTriangulations *_other);

/// Destroys a heap-allocated instance of `MR_AllLocalTriangulations`. Does nothing if the pointer is null.
MRC_API void MR_AllLocalTriangulations_Destroy(const MR_AllLocalTriangulations *_this);

/// Destroys a heap-allocated array of `MR_AllLocalTriangulations`. Does nothing if the pointer is null.
MRC_API void MR_AllLocalTriangulations_DestroyArray(const MR_AllLocalTriangulations *_this);

/// Generated from a method of class `MR::AllLocalTriangulations` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_AllLocalTriangulations *MR_AllLocalTriangulations_AssignFromAnother(MR_AllLocalTriangulations *_this, MR_PassBy _other_pass_by, MR_AllLocalTriangulations *_other);

/// converts a set of SomeLocalTriangulations containing local triangulations of all points arbitrary distributed among them
/// into one AllLocalTriangulations with records for all points
/// Generated from function `MR::uniteLocalTriangulations`.
/// Parameter `in` can not be null. It is a single object.
/// Parameter `progress` is a single object.
/// Parameter `progress` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_optional_MR_AllLocalTriangulations_Destroy()` to free it when you're done using it.
MRC_API MR_std_optional_MR_AllLocalTriangulations *MR_uniteLocalTriangulations(const MR_std_vector_MR_SomeLocalTriangulations *in, const MR_std_function_bool_from_float *progress);

/// compute normal at point by averaging neighbor triangle normals weighted by triangle's angle at the point
/// Generated from function `MR::computeNormal`.
/// Parameter `triangs` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API MR_Vector3f MR_computeNormal(const MR_AllLocalTriangulations *triangs, const MR_VertCoords *points, MR_VertId v);

/// orient neighbors around each point in \param region so they will be in clockwise order if look from the tip of target direction
/// Generated from function `MR::orientLocalTriangulations`.
/// Parameter `triangs` can not be null. It is a single object.
/// Parameter `coords` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `targetDir` can not be null. It is a single object.
MRC_API void MR_orientLocalTriangulations_MR_VertCoords(MR_AllLocalTriangulations *triangs, const MR_VertCoords *coords, const MR_VertBitSet *region, const MR_VertCoords *targetDir);

/// Generated from function `MR::orientLocalTriangulations`.
/// Parameter `triangs` can not be null. It is a single object.
/// Parameter `coords` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `targetDir` can not be null. It is a single object.
MRC_API void MR_orientLocalTriangulations_std_function_MR_Vector3f_func_from_MR_VertId(MR_AllLocalTriangulations *triangs, const MR_VertCoords *coords, const MR_VertBitSet *region, const MR_std_function_MR_Vector3f_from_MR_VertId *targetDir);

/// orient neighbors around each point in \param region so there will be as many triangles with same (and not opposite) orientation as possible
/// Generated from function `MR::autoOrientLocalTriangulations`.
/// Parameter `pointCloud` can not be null. It is a single object.
/// Parameter `triangs` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Parameter `progress` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `outRep3` defaults to a null pointer in C++.
/// Parameter `outRep2` defaults to a null pointer in C++.
MRC_API bool MR_autoOrientLocalTriangulations(const MR_PointCloud *pointCloud, MR_AllLocalTriangulations *triangs, const MR_VertBitSet *region, MR_PassBy progress_pass_by, MR_std_function_bool_from_float *progress, MR_Triangulation *outRep3, MR_Triangulation *outRep2);

/// computes statistics about the number of triangle repetitions in local triangulations
/// Generated from function `MR::computeTrianglesRepetitions`.
/// Parameter `triangs` can not be null. It is a single object.
MRC_API MR_std_array_int32_t_4 MR_computeTrianglesRepetitions(const MR_AllLocalTriangulations *triangs);

/// from local triangulations returns all unoriented triangles with given number of repetitions each in [1,3]
/// Generated from function `MR::findRepeatedUnorientedTriangles`.
/// Parameter `triangs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_UnorientedTriangle_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_UnorientedTriangle *MR_findRepeatedUnorientedTriangles(const MR_AllLocalTriangulations *triangs, int32_t repetitions);

/// from local triangulations returns all oriented triangles with given number of repetitions each in [1,3]
/// Generated from function `MR::findRepeatedOrientedTriangles`.
/// Parameter `triangs` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Triangulation_Destroy()` to free it when you're done using it.
MRC_API MR_Triangulation *MR_findRepeatedOrientedTriangles_2(const MR_AllLocalTriangulations *triangs, int32_t repetitions);

/// from local triangulations returns all oriented triangles with 3 or 2 repetitions each;
/// if both outRep3 and outRep2 are necessary then it is faster to call this function than above one
/// Generated from function `MR::findRepeatedOrientedTriangles`.
/// Parameter `triangs` can not be null. It is a single object.
MRC_API void MR_findRepeatedOrientedTriangles_3(const MR_AllLocalTriangulations *triangs, MR_Triangulation *outRep3, MR_Triangulation *outRep2);

#ifdef __cplusplus
} // extern "C"
#endif
