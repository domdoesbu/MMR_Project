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

typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectLinesHolder MR_ObjectLinesHolder; // Defined in `#include <MRCMesh/MRObjectLinesHolder.h>`.
typedef struct MR_UndirectedEdgeBitSet MR_UndirectedEdgeBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectLines MR_std_shared_ptr_MR_ObjectLines; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectLines.h>`.
typedef struct MR_std_shared_ptr_MR_Polyline3 MR_std_shared_ptr_MR_Polyline3; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Polyline3.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_ObjectLines MR_std_vector_std_shared_ptr_MR_ObjectLines; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_ObjectLines.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


/// This object type has not visual representation, just holder for lines in scene
/// Generated from class `MR::ObjectLines`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ObjectLinesHolder`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_ObjectLines MR_ObjectLines;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectLines_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectLines *MR_ObjectLines_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectLines_DestroyArray()`.
/// Use `MR_ObjectLines_OffsetMutablePtr()` and `MR_ObjectLines_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectLines *MR_ObjectLines_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectLines *MR_ObjectLines_OffsetPtr(const MR_ObjectLines *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectLines *MR_ObjectLines_OffsetMutablePtr(MR_ObjectLines *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectLines` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectLines_UpcastTo_MR_Object(const MR_ObjectLines *object);

/// Upcasts an instance of `MR::ObjectLines` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectLines_MutableUpcastTo_MR_Object(MR_ObjectLines *object);

/// Upcasts an instance of `MR::ObjectLines` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectLines_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectLines *object);

/// Upcasts an instance of `MR::ObjectLines` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectLines_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectLines *object);

/// Upcasts an instance of `MR::ObjectLines` to its base class `MR::ObjectLinesHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLinesHolder *MR_ObjectLines_UpcastTo_MR_ObjectLinesHolder(const MR_ObjectLines *object);

/// Upcasts an instance of `MR::ObjectLines` to its base class `MR::ObjectLinesHolder`.
MRC_API MR_ObjectLinesHolder *MR_ObjectLines_MutableUpcastTo_MR_ObjectLinesHolder(MR_ObjectLines *object);

/// Upcasts an instance of `MR::ObjectLines` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectLines_UpcastTo_MR_VisualObject(const MR_ObjectLines *object);

/// Upcasts an instance of `MR::ObjectLines` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectLines_MutableUpcastTo_MR_VisualObject(MR_ObjectLines *object);

/// Generated from a constructor of class `MR::ObjectLines`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectLines_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectLines *MR_ObjectLines_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectLines *_other);

/// Destroys a heap-allocated instance of `MR_ObjectLines`. Does nothing if the pointer is null.
MRC_API void MR_ObjectLines_Destroy(const MR_ObjectLines *_this);

/// Destroys a heap-allocated array of `MR_ObjectLines`. Does nothing if the pointer is null.
MRC_API void MR_ObjectLines_DestroyArray(const MR_ObjectLines *_this);

/// Generated from a method of class `MR::ObjectLines` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectLines *MR_ObjectLines_AssignFromAnother(MR_ObjectLines *_this, MR_PassBy _other_pass_by, MR_ObjectLines *_other);

/// Generated from a method of class `MR::ObjectLines` named `TypeName`.
MRC_API const char *MR_ObjectLines_TypeName(void);

/// Generated from a method of class `MR::ObjectLines` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectLines_typeName(const MR_ObjectLines *_this);

/// Generated from a method of class `MR::ObjectLines` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectLines_clone(const MR_ObjectLines *_this);

/// Generated from a method of class `MR::ObjectLines` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectLines_shallowClone(const MR_ObjectLines *_this);

/// Generated from a method of class `MR::ObjectLines` named `setPolyline`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `polyline` can not be null. It is a single object.
MRC_API void MR_ObjectLines_setPolyline(MR_ObjectLines *_this, const MR_std_shared_ptr_MR_Polyline3 *polyline);

/// sets given polyline to this, and returns back previous polyline of this;
/// Generated from a method of class `MR::ObjectLines` named `updatePolyline`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Polyline3_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Polyline3 *MR_ObjectLines_updatePolyline(MR_ObjectLines *_this, MR_PassBy polyline_pass_by, MR_std_shared_ptr_MR_Polyline3 *polyline);

/// Generated from a method of class `MR::ObjectLines` named `varPolyline`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_Polyline3 *MR_ObjectLines_varPolyline(MR_ObjectLines *_this);

/// Generated from a method of class `MR::ObjectLines` named `setDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `invalidateCaches` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjectLines_setDirtyFlags(MR_ObjectLines *_this, uint32_t mask, const bool *invalidateCaches);

/// Generated from a method of class `MR::ObjectLines` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_ObjectLines_getInfoLines(const MR_ObjectLines *_this);

/// Generated from a method of class `MR::ObjectLines` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectLines_getClassName(const MR_ObjectLines *_this);

/// Generated from a method of class `MR::ObjectLines` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectLines_getClassNameInPlural(const MR_ObjectLines *_this);

/// constructs new ObjectLines containing the union of valid data from all input objects
/// Generated from function `MR::merge`.
/// Parameter `objsLines` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectLines_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectLines *MR_merge_std_vector_std_shared_ptr_MR_ObjectLines(const MR_std_vector_std_shared_ptr_MR_ObjectLines *objsLines);

/// constructs new ObjectLines containing the region of data from input object
/// Generated from function `MR::cloneRegion`.
/// Parameter `objLines` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectLines_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectLines *MR_cloneRegion_2_std_shared_ptr_MR_ObjectLines(const MR_std_shared_ptr_MR_ObjectLines *objLines, const MR_UndirectedEdgeBitSet *region);

#ifdef __cplusplus
} // extern "C"
#endif
