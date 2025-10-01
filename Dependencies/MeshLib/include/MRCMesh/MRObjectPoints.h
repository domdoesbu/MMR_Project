// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRMeshFwd.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectMesh MR_ObjectMesh; // Defined in `#include <MRCMesh/MRObjectMesh.h>`.
typedef struct MR_ObjectPointsHolder MR_ObjectPointsHolder; // Defined in `#include <MRCMesh/MRObjectPointsHolder.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectPoints MR_std_shared_ptr_MR_ObjectPoints; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectPoints.h>`.
typedef struct MR_std_shared_ptr_MR_PointCloud MR_std_shared_ptr_MR_PointCloud; // Defined in `#include <MRCMisc/std_shared_ptr_MR_PointCloud.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_ObjectPoints MR_std_vector_std_shared_ptr_MR_ObjectPoints; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_ObjectPoints.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


/// an object that stores a points
/// Generated from class `MR::ObjectPoints`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ObjectPointsHolder`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_ObjectPoints MR_ObjectPoints;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectPoints_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectPoints *MR_ObjectPoints_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectPoints_DestroyArray()`.
/// Use `MR_ObjectPoints_OffsetMutablePtr()` and `MR_ObjectPoints_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectPoints *MR_ObjectPoints_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectPoints *MR_ObjectPoints_OffsetPtr(const MR_ObjectPoints *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectPoints *MR_ObjectPoints_OffsetMutablePtr(MR_ObjectPoints *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectPoints` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectPoints_UpcastTo_MR_Object(const MR_ObjectPoints *object);

/// Upcasts an instance of `MR::ObjectPoints` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectPoints_MutableUpcastTo_MR_Object(MR_ObjectPoints *object);

/// Upcasts an instance of `MR::ObjectPoints` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectPoints_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectPoints *object);

/// Upcasts an instance of `MR::ObjectPoints` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectPoints_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectPoints *object);

/// Upcasts an instance of `MR::ObjectPoints` to its base class `MR::ObjectPointsHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectPointsHolder *MR_ObjectPoints_UpcastTo_MR_ObjectPointsHolder(const MR_ObjectPoints *object);

/// Upcasts an instance of `MR::ObjectPoints` to its base class `MR::ObjectPointsHolder`.
MRC_API MR_ObjectPointsHolder *MR_ObjectPoints_MutableUpcastTo_MR_ObjectPointsHolder(MR_ObjectPoints *object);

/// Upcasts an instance of `MR::ObjectPoints` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectPoints_UpcastTo_MR_VisualObject(const MR_ObjectPoints *object);

/// Upcasts an instance of `MR::ObjectPoints` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectPoints_MutableUpcastTo_MR_VisualObject(MR_ObjectPoints *object);

/// Generated from a constructor of class `MR::ObjectPoints`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectPoints_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectPoints *MR_ObjectPoints_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectPoints *_other);

/// Generated from a constructor of class `MR::ObjectPoints`.
/// Parameter `objMesh` can not be null. It is a single object.
/// Parameter `saveNormals` has a default argument: `true`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectPoints_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectPoints *MR_ObjectPoints_Construct(const MR_ObjectMesh *objMesh, const bool *saveNormals);

/// Destroys a heap-allocated instance of `MR_ObjectPoints`. Does nothing if the pointer is null.
MRC_API void MR_ObjectPoints_Destroy(const MR_ObjectPoints *_this);

/// Destroys a heap-allocated array of `MR_ObjectPoints`. Does nothing if the pointer is null.
MRC_API void MR_ObjectPoints_DestroyArray(const MR_ObjectPoints *_this);

/// Generated from a method of class `MR::ObjectPoints` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectPoints *MR_ObjectPoints_AssignFromAnother(MR_ObjectPoints *_this, MR_PassBy _other_pass_by, MR_ObjectPoints *_other);

/// Generated from a method of class `MR::ObjectPoints` named `TypeName`.
MRC_API const char *MR_ObjectPoints_TypeName(void);

/// Generated from a method of class `MR::ObjectPoints` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectPoints_typeName(const MR_ObjectPoints *_this);

/// returns variable point cloud, if const point cloud is needed use `pointCloud()` instead
/// Generated from a method of class `MR::ObjectPoints` named `varPointCloud`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_PointCloud *MR_ObjectPoints_varPointCloud(MR_ObjectPoints *_this);

/// Generated from a method of class `MR::ObjectPoints` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectPoints_clone(const MR_ObjectPoints *_this);

/// Generated from a method of class `MR::ObjectPoints` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectPoints_shallowClone(const MR_ObjectPoints *_this);

/// Generated from a method of class `MR::ObjectPoints` named `setPointCloud`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `pointCloud` can not be null. It is a single object.
MRC_API void MR_ObjectPoints_setPointCloud(MR_ObjectPoints *_this, const MR_std_shared_ptr_MR_PointCloud *pointCloud);

/// sets given point cloud to this, and returns back previous mesh of this;
/// does not touch selection
/// Generated from a method of class `MR::ObjectPoints` named `swapPointCloud`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
MRC_API void MR_ObjectPoints_swapPointCloud(MR_ObjectPoints *_this, MR_std_shared_ptr_MR_PointCloud *points);

/// Generated from a method of class `MR::ObjectPoints` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_ObjectPoints_getInfoLines(const MR_ObjectPoints *_this);

/// Generated from a method of class `MR::ObjectPoints` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectPoints_getClassName(const MR_ObjectPoints *_this);

/// Generated from a method of class `MR::ObjectPoints` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectPoints_getClassNameInPlural(const MR_ObjectPoints *_this);

/// Generated from a method of class `MR::ObjectPoints` named `setDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `invalidateCaches` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjectPoints_setDirtyFlags(MR_ObjectPoints *_this, uint32_t mask, const bool *invalidateCaches);

/// constructs new ObjectPoints containing the union of valid points from all input objects
/// Generated from function `MR::merge`.
/// Parameter `objsPoints` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectPoints_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectPoints *MR_merge_std_vector_std_shared_ptr_MR_ObjectPoints(const MR_std_vector_std_shared_ptr_MR_ObjectPoints *objsPoints);

/// constructs new ObjectPoints containing the region of data from input object
/// does not copy selection
/// Generated from function `MR::cloneRegion`.
/// Parameter `objPoints` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectPoints_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectPoints *MR_cloneRegion_2_std_shared_ptr_MR_ObjectPoints(const MR_std_shared_ptr_MR_ObjectPoints *objPoints, const MR_VertBitSet *region);

/// constructs new ObjectPoints containing the packed version of input points,
/// \param newValidVerts if given, then use them instead of valid points from pts
/// \return nullptr if the operation was cancelled
/// Generated from function `MR::pack`.
/// Parameter `pts` can not be null. It is a single object.
/// Parameter `newValidVerts` defaults to a null pointer in C++.
/// Parameter `cb` is a single object.
/// Parameter `cb` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectPoints_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectPoints *MR_pack(const MR_ObjectPoints *pts, MR_Reorder reorder, MR_VertBitSet *newValidVerts, const MR_std_function_bool_from_float *cb);

#ifdef __cplusplus
} // extern "C"
#endif
