// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector2.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_std_optional_MR_Vector2f MR_std_optional_MR_Vector2f; // Defined in `#include <MRCMisc/std_optional_MR_Vector2f.h>`.
typedef struct MR_std_vector_MR_CNCMachineSettings_RotationAxisName MR_std_vector_MR_CNCMachineSettings_RotationAxisName; // Defined in `#include <MRCMisc/std_vector_MR_CNCMachineSettings_RotationAxisName.h>`.


/// class with CNC machine emulation settings
/// Generated from class `MR::CNCMachineSettings`.
typedef struct MR_CNCMachineSettings MR_CNCMachineSettings;

// enumeration of axes of rotation
typedef int32_t MR_CNCMachineSettings_RotationAxisName;
enum // MR_CNCMachineSettings_RotationAxisName
{
    MR_CNCMachineSettings_RotationAxisName_A = 0,
    MR_CNCMachineSettings_RotationAxisName_B = 1,
    MR_CNCMachineSettings_RotationAxisName_C = 2,
};

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CNCMachineSettings_Destroy()` to free it when you're done using it.
MRC_API MR_CNCMachineSettings *MR_CNCMachineSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_CNCMachineSettings_DestroyArray()`.
/// Use `MR_CNCMachineSettings_OffsetMutablePtr()` and `MR_CNCMachineSettings_OffsetPtr()` to access the array elements.
MRC_API MR_CNCMachineSettings *MR_CNCMachineSettings_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_CNCMachineSettings *MR_CNCMachineSettings_OffsetPtr(const MR_CNCMachineSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_CNCMachineSettings *MR_CNCMachineSettings_OffsetMutablePtr(MR_CNCMachineSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::CNCMachineSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_CNCMachineSettings_Destroy()` to free it when you're done using it.
MRC_API MR_CNCMachineSettings *MR_CNCMachineSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_CNCMachineSettings *_other);

/// Destroys a heap-allocated instance of `MR_CNCMachineSettings`. Does nothing if the pointer is null.
MRC_API void MR_CNCMachineSettings_Destroy(const MR_CNCMachineSettings *_this);

/// Destroys a heap-allocated array of `MR_CNCMachineSettings`. Does nothing if the pointer is null.
MRC_API void MR_CNCMachineSettings_DestroyArray(const MR_CNCMachineSettings *_this);

/// Generated from a method of class `MR::CNCMachineSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_CNCMachineSettings *MR_CNCMachineSettings_AssignFromAnother(MR_CNCMachineSettings *_this, MR_PassBy _other_pass_by, MR_CNCMachineSettings *_other);

/// Generated from a method of class `MR::CNCMachineSettings` named `getAxesCount`.
MRC_API int32_t MR_CNCMachineSettings_getAxesCount(void);

// rotationAxis length will be more then 0.01
/// Generated from a method of class `MR::CNCMachineSettings` named `setRotationAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rotationAxis` can not be null. It is a single object.
MRC_API void MR_CNCMachineSettings_setRotationAxis(MR_CNCMachineSettings *_this, MR_CNCMachineSettings_RotationAxisName paramName, const MR_Vector3f *rotationAxis);

/// Generated from a method of class `MR::CNCMachineSettings` named `getRotationAxis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_CNCMachineSettings_getRotationAxis(const MR_CNCMachineSettings *_this, MR_CNCMachineSettings_RotationAxisName paramName);

// rotationLimits = {min, max}
// valid range -180 <= min < max <= 180
/// Generated from a method of class `MR::CNCMachineSettings` named `setRotationLimits`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rotationLimits` is optional. To keep it empty, pass a null pointer.
MRC_API void MR_CNCMachineSettings_setRotationLimits(MR_CNCMachineSettings *_this, MR_CNCMachineSettings_RotationAxisName paramName, const MR_Vector2f *rotationLimits);

/// Generated from a method of class `MR::CNCMachineSettings` named `getRotationLimits`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_optional_MR_Vector2f *MR_CNCMachineSettings_getRotationLimits(const MR_CNCMachineSettings *_this, MR_CNCMachineSettings_RotationAxisName paramName);

// duplicated values will be removed (ABAAC - > ABC)
/// Generated from a method of class `MR::CNCMachineSettings` named `setRotationOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rotationAxesOrder` can not be null. It is a single object.
MRC_API void MR_CNCMachineSettings_setRotationOrder(MR_CNCMachineSettings *_this, const MR_std_vector_MR_CNCMachineSettings_RotationAxisName *rotationAxesOrder);

/// Generated from a method of class `MR::CNCMachineSettings` named `getRotationOrder`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_CNCMachineSettings_RotationAxisName *MR_CNCMachineSettings_getRotationOrder(const MR_CNCMachineSettings *_this);

// set feedrate idle. valid range - [0, 100000]
// 0 - feedrate idle set as maximum feedrate on any action, or 100 if feedrate is not set in any action
/// Generated from a method of class `MR::CNCMachineSettings` named `setFeedrateIdle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_CNCMachineSettings_setFeedrateIdle(MR_CNCMachineSettings *_this, float feedrateIdle);

/// Generated from a method of class `MR::CNCMachineSettings` named `getFeedrateIdle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_CNCMachineSettings_getFeedrateIdle(const MR_CNCMachineSettings *_this);

/// Generated from a method of class `MR::CNCMachineSettings` named `setHomePosition`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `homePosition` can not be null. It is a single object.
MRC_API void MR_CNCMachineSettings_setHomePosition(MR_CNCMachineSettings *_this, const MR_Vector3f *homePosition);

/// Generated from a method of class `MR::CNCMachineSettings` named `getHomePosition`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_CNCMachineSettings_getHomePosition(const MR_CNCMachineSettings *_this);

/// Generated from a method of class `MR::CNCMachineSettings` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_equal_MR_CNCMachineSettings(MR_CNCMachineSettings *_this, const MR_CNCMachineSettings *rhs);

/// Generated from a method of class `MR::CNCMachineSettings` named `operator!=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `rhs` can not be null. It is a single object.
MRC_API bool MR_not_equal_MR_CNCMachineSettings(MR_CNCMachineSettings *_this, const MR_CNCMachineSettings *rhs);

#ifdef __cplusplus
} // extern "C"
#endif
