// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRViewportId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_CNCMachineSettings MR_CNCMachineSettings; // Defined in `#include <MRCMesh/MRCNCMachineSettings.h>`.
typedef struct MR_Color MR_Color; // Defined in `#include <MRCMesh/MRColor.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectLinesHolder MR_ObjectLinesHolder; // Defined in `#include <MRCMesh/MRObjectLinesHolder.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_std_vector_std_string MR_std_shared_ptr_std_vector_std_string; // Defined in `#include <MRCMisc/std_shared_ptr_std_vector_std_string.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_GcodeProcessor_MoveAction MR_std_vector_MR_GcodeProcessor_MoveAction; // Defined in `#include <MRCMisc/std_vector_MR_GcodeProcessor_MoveAction.h>`.
typedef struct MR_std_vector_int32_t MR_std_vector_int32_t; // Defined in `#include <MRCMisc/std_vector_int32_t.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


/// an object that stores a g-code
/// Generated from class `MR::ObjectGcode`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ObjectLinesHolder`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_ObjectGcode MR_ObjectGcode;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectGcode_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectGcode *MR_ObjectGcode_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectGcode_DestroyArray()`.
/// Use `MR_ObjectGcode_OffsetMutablePtr()` and `MR_ObjectGcode_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectGcode *MR_ObjectGcode_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectGcode *MR_ObjectGcode_OffsetPtr(const MR_ObjectGcode *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectGcode *MR_ObjectGcode_OffsetMutablePtr(MR_ObjectGcode *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectGcode` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectGcode_UpcastTo_MR_Object(const MR_ObjectGcode *object);

/// Upcasts an instance of `MR::ObjectGcode` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectGcode_MutableUpcastTo_MR_Object(MR_ObjectGcode *object);

/// Upcasts an instance of `MR::ObjectGcode` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectGcode_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectGcode *object);

/// Upcasts an instance of `MR::ObjectGcode` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectGcode_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectGcode *object);

/// Upcasts an instance of `MR::ObjectGcode` to its base class `MR::ObjectLinesHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectLinesHolder *MR_ObjectGcode_UpcastTo_MR_ObjectLinesHolder(const MR_ObjectGcode *object);

/// Upcasts an instance of `MR::ObjectGcode` to its base class `MR::ObjectLinesHolder`.
MRC_API MR_ObjectLinesHolder *MR_ObjectGcode_MutableUpcastTo_MR_ObjectLinesHolder(MR_ObjectGcode *object);

/// Upcasts an instance of `MR::ObjectGcode` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectGcode_UpcastTo_MR_VisualObject(const MR_ObjectGcode *object);

/// Upcasts an instance of `MR::ObjectGcode` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectGcode_MutableUpcastTo_MR_VisualObject(MR_ObjectGcode *object);

/// Generated from a constructor of class `MR::ObjectGcode`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectGcode_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectGcode *MR_ObjectGcode_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectGcode *_other);

/// Destroys a heap-allocated instance of `MR_ObjectGcode`. Does nothing if the pointer is null.
MRC_API void MR_ObjectGcode_Destroy(const MR_ObjectGcode *_this);

/// Destroys a heap-allocated array of `MR_ObjectGcode`. Does nothing if the pointer is null.
MRC_API void MR_ObjectGcode_DestroyArray(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectGcode *MR_ObjectGcode_AssignFromAnother(MR_ObjectGcode *_this, MR_PassBy _other_pass_by, MR_ObjectGcode *_other);

/// Generated from a method of class `MR::ObjectGcode` named `TypeName`.
MRC_API const char *MR_ObjectGcode_TypeName(void);

/// Generated from a method of class `MR::ObjectGcode` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectGcode_typeName(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectGcode_clone(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectGcode_shallowClone(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `setCNCMachineSettings`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cncSettings` can not be null. It is a single object.
MRC_API void MR_ObjectGcode_setCNCMachineSettings(MR_ObjectGcode *_this, const MR_CNCMachineSettings *cncSettings);

/// Generated from a method of class `MR::ObjectGcode` named `getCNCMachineSettings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CNCMachineSettings *MR_ObjectGcode_getCNCMachineSettings(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `setGcodeSource`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `gcodeSource` can not be null. It is a single object.
MRC_API void MR_ObjectGcode_setGcodeSource(MR_ObjectGcode *_this, const MR_std_shared_ptr_std_vector_std_string *gcodeSource);

/// Generated from a method of class `MR::ObjectGcode` named `gcodeSource`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_std_vector_std_string *MR_ObjectGcode_gcodeSource(const MR_ObjectGcode *_this);

// get action list (produced from g-code source)
/// Generated from a method of class `MR::ObjectGcode` named `actionList`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_GcodeProcessor_MoveAction *MR_ObjectGcode_actionList(const MR_ObjectGcode *_this);

// get mapping of tool path polyline segment id to source line number of g-code source
/// Generated from a method of class `MR::ObjectGcode` named `segmentToSourceLineMap`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_int32_t *MR_ObjectGcode_segmentToSourceLineMap(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `setDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `invalidateCaches` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjectGcode_setDirtyFlags(MR_ObjectGcode *_this, uint32_t mask, const bool *invalidateCaches);

/// Generated from a method of class `MR::ObjectGcode` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_ObjectGcode_getInfoLines(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectGcode_getClassName(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectGcode_getClassNameInPlural(const MR_ObjectGcode *_this);

// set drawing feedrate as gradient of brightness
/// Generated from a method of class `MR::ObjectGcode` named `switchFeedrateGradient`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectGcode_switchFeedrateGradient(MR_ObjectGcode *_this, bool isFeedrateGradientEnabled);

/// Generated from a method of class `MR::ObjectGcode` named `isFeedrateGradient`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectGcode_isFeedrateGradient(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `setIdleColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
MRC_API void MR_ObjectGcode_setIdleColor(MR_ObjectGcode *_this, const MR_Color *color);

/// Generated from a method of class `MR::ObjectGcode` named `getIdleColor`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectGcode_getIdleColor(const MR_ObjectGcode *_this);

/// Generated from a method of class `MR::ObjectGcode` named `select`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectGcode_select(MR_ObjectGcode *_this, bool isSelected);

/// Generated from a method of class `MR::ObjectGcode` named `setFrontColor`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `color` can not be null. It is a single object.
/// Parameter `viewportId` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectGcode_setFrontColor(MR_ObjectGcode *_this, const MR_Color *color, bool selected, const MR_ViewportId *viewportId);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::ObjectGcode` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectGcode_heapBytes(const MR_ObjectGcode *_this);

#ifdef __cplusplus
} // extern "C"
#endif
