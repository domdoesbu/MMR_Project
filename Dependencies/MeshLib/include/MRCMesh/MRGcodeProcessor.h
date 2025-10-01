// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_CNCMachineSettings MR_CNCMachineSettings; // Defined in `#include <MRCMesh/MRCNCMachineSettings.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_MR_GcodeProcessor_Command MR_std_vector_MR_GcodeProcessor_Command; // Defined in `#include <MRCMisc/std_vector_MR_GcodeProcessor_Command.h>`.
typedef struct MR_std_vector_MR_GcodeProcessor_MoveAction MR_std_vector_MR_GcodeProcessor_MoveAction; // Defined in `#include <MRCMisc/std_vector_MR_GcodeProcessor_MoveAction.h>`.
typedef struct MR_std_vector_MR_Vector2f MR_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_MR_Vector2f.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


// class to process g-code source and generate toolpath
/// Generated from class `MR::GcodeProcessor`.
typedef struct MR_GcodeProcessor MR_GcodeProcessor;

/// Generated from class `MR::GcodeProcessor::BaseAction<MR::Vector2f>`.
typedef struct MR_GcodeProcessor_BaseAction_MR_Vector2f MR_GcodeProcessor_BaseAction_MR_Vector2f;

/// Generated from class `MR::GcodeProcessor::BaseAction<MR::Vector3f>`.
typedef struct MR_GcodeProcessor_BaseAction_MR_Vector3f MR_GcodeProcessor_BaseAction_MR_Vector3f;

// structure that stores information about the movement of the tool, specified by some string of commands
/// Generated from class `MR::GcodeProcessor::MoveAction`.
typedef struct MR_GcodeProcessor_MoveAction MR_GcodeProcessor_MoveAction;

/// Generated from class `MR::GcodeProcessor::Command`.
typedef struct MR_GcodeProcessor_Command MR_GcodeProcessor_Command;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor *MR_GcodeProcessor_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GcodeProcessor_DestroyArray()`.
/// Use `MR_GcodeProcessor_OffsetMutablePtr()` and `MR_GcodeProcessor_OffsetPtr()` to access the array elements.
MRC_API MR_GcodeProcessor *MR_GcodeProcessor_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GcodeProcessor *MR_GcodeProcessor_OffsetPtr(const MR_GcodeProcessor *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GcodeProcessor *MR_GcodeProcessor_OffsetMutablePtr(MR_GcodeProcessor *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::GcodeProcessor`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor *MR_GcodeProcessor_ConstructFromAnother(MR_PassBy _other_pass_by, MR_GcodeProcessor *_other);

/// Destroys a heap-allocated instance of `MR_GcodeProcessor`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_Destroy(const MR_GcodeProcessor *_this);

/// Destroys a heap-allocated array of `MR_GcodeProcessor`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_DestroyArray(const MR_GcodeProcessor *_this);

/// Generated from a method of class `MR::GcodeProcessor` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GcodeProcessor *MR_GcodeProcessor_AssignFromAnother(MR_GcodeProcessor *_this, MR_PassBy _other_pass_by, MR_GcodeProcessor *_other);

// reset internal states
/// Generated from a method of class `MR::GcodeProcessor` named `reset`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_reset(MR_GcodeProcessor *_this);

// set g-code source
/// Generated from a method of class `MR::GcodeProcessor` named `setGcodeSource`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `gcodeSource` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_setGcodeSource(MR_GcodeProcessor *_this, const MR_std_vector_std_string *gcodeSource);

// process all lines g-code source and generate corresponding move actions
/// Generated from a method of class `MR::GcodeProcessor` named `processSource`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_MR_GcodeProcessor_MoveAction_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_MR_GcodeProcessor_MoveAction *MR_GcodeProcessor_processSource(MR_GcodeProcessor *_this);

// process all commands from one line g-code source and generate corresponding move action;
// \param externalStorage to avoid memory allocation on each line
/// Generated from a method of class `MR::GcodeProcessor` named `processLine`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `line` can not be null.
/// If `line_end` is null, then `line` is assumed to be null-terminated.
/// Parameter `externalStorage` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_MoveAction_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_MoveAction *MR_GcodeProcessor_processLine(MR_GcodeProcessor *_this, const char *line, const char *line_end, MR_std_vector_MR_GcodeProcessor_Command *externalStorage);

// settings
/// Generated from a method of class `MR::GcodeProcessor` named `setCNCMachineSettings`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_setCNCMachineSettings(MR_GcodeProcessor *_this, const MR_CNCMachineSettings *settings);

/// Generated from a method of class `MR::GcodeProcessor` named `getCNCMachineSettings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_CNCMachineSettings *MR_GcodeProcessor_getCNCMachineSettings(MR_GcodeProcessor *_this);

// tool movement parsed from gcode
/// Returns a pointer to a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector2f>` named `path`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_Vector2f *MR_GcodeProcessor_BaseAction_MR_Vector2f_Get_path(const MR_GcodeProcessor_BaseAction_MR_Vector2f *_this);

// tool movement parsed from gcode
/// Modifies a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector2f>` named `path`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_BaseAction_MR_Vector2f_Set_path(MR_GcodeProcessor_BaseAction_MR_Vector2f *_this, MR_PassBy value_pass_by, MR_std_vector_MR_Vector2f *value);

// tool movement parsed from gcode
/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector2f>` named `path`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector2f *MR_GcodeProcessor_BaseAction_MR_Vector2f_GetMutable_path(MR_GcodeProcessor_BaseAction_MR_Vector2f *_this);

// parser warning
/// Returns a pointer to a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector2f>` named `warning`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_GcodeProcessor_BaseAction_MR_Vector2f_Get_warning(const MR_GcodeProcessor_BaseAction_MR_Vector2f *_this);

// parser warning
/// Modifies a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector2f>` named `warning`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_GcodeProcessor_BaseAction_MR_Vector2f_Set_warning(MR_GcodeProcessor_BaseAction_MR_Vector2f *_this, const char *value, const char *value_end);

// parser warning
/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector2f>` named `warning`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_GcodeProcessor_BaseAction_MR_Vector2f_GetMutable_warning(MR_GcodeProcessor_BaseAction_MR_Vector2f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_BaseAction_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector2f *MR_GcodeProcessor_BaseAction_MR_Vector2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GcodeProcessor_BaseAction_MR_Vector2f_DestroyArray()`.
/// Use `MR_GcodeProcessor_BaseAction_MR_Vector2f_OffsetMutablePtr()` and `MR_GcodeProcessor_BaseAction_MR_Vector2f_OffsetPtr()` to access the array elements.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector2f *MR_GcodeProcessor_BaseAction_MR_Vector2f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::GcodeProcessor::BaseAction<MR::Vector2f>` elementwise.
/// Parameter `warning` can not be null.
/// If `warning_end` is null, then `warning` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_BaseAction_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector2f *MR_GcodeProcessor_BaseAction_MR_Vector2f_ConstructFrom(MR_PassBy path_pass_by, MR_std_vector_MR_Vector2f *path, const char *warning, const char *warning_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GcodeProcessor_BaseAction_MR_Vector2f *MR_GcodeProcessor_BaseAction_MR_Vector2f_OffsetPtr(const MR_GcodeProcessor_BaseAction_MR_Vector2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector2f *MR_GcodeProcessor_BaseAction_MR_Vector2f_OffsetMutablePtr(MR_GcodeProcessor_BaseAction_MR_Vector2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::GcodeProcessor::BaseAction<MR::Vector2f>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_BaseAction_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector2f *MR_GcodeProcessor_BaseAction_MR_Vector2f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_GcodeProcessor_BaseAction_MR_Vector2f *_other);

/// Destroys a heap-allocated instance of `MR_GcodeProcessor_BaseAction_MR_Vector2f`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_BaseAction_MR_Vector2f_Destroy(const MR_GcodeProcessor_BaseAction_MR_Vector2f *_this);

/// Destroys a heap-allocated array of `MR_GcodeProcessor_BaseAction_MR_Vector2f`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_BaseAction_MR_Vector2f_DestroyArray(const MR_GcodeProcessor_BaseAction_MR_Vector2f *_this);

/// Generated from a method of class `MR::GcodeProcessor::BaseAction<MR::Vector2f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector2f *MR_GcodeProcessor_BaseAction_MR_Vector2f_AssignFromAnother(MR_GcodeProcessor_BaseAction_MR_Vector2f *_this, MR_PassBy _other_pass_by, MR_GcodeProcessor_BaseAction_MR_Vector2f *_other);

// tool movement parsed from gcode
/// Returns a pointer to a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector3f>` named `path`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_Vector3f *MR_GcodeProcessor_BaseAction_MR_Vector3f_Get_path(const MR_GcodeProcessor_BaseAction_MR_Vector3f *_this);

// tool movement parsed from gcode
/// Modifies a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector3f>` named `path`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_BaseAction_MR_Vector3f_Set_path(MR_GcodeProcessor_BaseAction_MR_Vector3f *_this, MR_PassBy value_pass_by, MR_std_vector_MR_Vector3f *value);

// tool movement parsed from gcode
/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector3f>` named `path`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f *MR_GcodeProcessor_BaseAction_MR_Vector3f_GetMutable_path(MR_GcodeProcessor_BaseAction_MR_Vector3f *_this);

// parser warning
/// Returns a pointer to a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector3f>` named `warning`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_GcodeProcessor_BaseAction_MR_Vector3f_Get_warning(const MR_GcodeProcessor_BaseAction_MR_Vector3f *_this);

// parser warning
/// Modifies a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector3f>` named `warning`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_GcodeProcessor_BaseAction_MR_Vector3f_Set_warning(MR_GcodeProcessor_BaseAction_MR_Vector3f *_this, const char *value, const char *value_end);

// parser warning
/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::BaseAction<MR::Vector3f>` named `warning`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_GcodeProcessor_BaseAction_MR_Vector3f_GetMutable_warning(MR_GcodeProcessor_BaseAction_MR_Vector3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_BaseAction_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector3f *MR_GcodeProcessor_BaseAction_MR_Vector3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GcodeProcessor_BaseAction_MR_Vector3f_DestroyArray()`.
/// Use `MR_GcodeProcessor_BaseAction_MR_Vector3f_OffsetMutablePtr()` and `MR_GcodeProcessor_BaseAction_MR_Vector3f_OffsetPtr()` to access the array elements.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector3f *MR_GcodeProcessor_BaseAction_MR_Vector3f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::GcodeProcessor::BaseAction<MR::Vector3f>` elementwise.
/// Parameter `warning` can not be null.
/// If `warning_end` is null, then `warning` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_BaseAction_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector3f *MR_GcodeProcessor_BaseAction_MR_Vector3f_ConstructFrom(MR_PassBy path_pass_by, MR_std_vector_MR_Vector3f *path, const char *warning, const char *warning_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GcodeProcessor_BaseAction_MR_Vector3f *MR_GcodeProcessor_BaseAction_MR_Vector3f_OffsetPtr(const MR_GcodeProcessor_BaseAction_MR_Vector3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector3f *MR_GcodeProcessor_BaseAction_MR_Vector3f_OffsetMutablePtr(MR_GcodeProcessor_BaseAction_MR_Vector3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::GcodeProcessor::BaseAction<MR::Vector3f>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_BaseAction_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector3f *MR_GcodeProcessor_BaseAction_MR_Vector3f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_GcodeProcessor_BaseAction_MR_Vector3f *_other);

/// Destroys a heap-allocated instance of `MR_GcodeProcessor_BaseAction_MR_Vector3f`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_BaseAction_MR_Vector3f_Destroy(const MR_GcodeProcessor_BaseAction_MR_Vector3f *_this);

/// Destroys a heap-allocated array of `MR_GcodeProcessor_BaseAction_MR_Vector3f`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_BaseAction_MR_Vector3f_DestroyArray(const MR_GcodeProcessor_BaseAction_MR_Vector3f *_this);

/// Generated from a method of class `MR::GcodeProcessor::BaseAction<MR::Vector3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector3f *MR_GcodeProcessor_BaseAction_MR_Vector3f_AssignFromAnother(MR_GcodeProcessor_BaseAction_MR_Vector3f *_this, MR_PassBy _other_pass_by, MR_GcodeProcessor_BaseAction_MR_Vector3f *_other);

/// Returns a pointer to a member variable of class `MR::GcodeProcessor::MoveAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_GcodeProcessor_BaseAction_MR_Vector3f *MR_GcodeProcessor_MoveAction_Get_action(const MR_GcodeProcessor_MoveAction *_this);

/// Modifies a member variable of class `MR::GcodeProcessor::MoveAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_MoveAction_Set_action(MR_GcodeProcessor_MoveAction *_this, MR_PassBy value_pass_by, MR_GcodeProcessor_BaseAction_MR_Vector3f *value);

/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::MoveAction` named `action`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GcodeProcessor_BaseAction_MR_Vector3f *MR_GcodeProcessor_MoveAction_GetMutable_action(MR_GcodeProcessor_MoveAction *_this);

// tool direction for each point from action.path
/// Returns a pointer to a member variable of class `MR::GcodeProcessor::MoveAction` named `toolDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_Vector3f *MR_GcodeProcessor_MoveAction_Get_toolDirection(const MR_GcodeProcessor_MoveAction *_this);

// tool direction for each point from action.path
/// Modifies a member variable of class `MR::GcodeProcessor::MoveAction` named `toolDirection`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_MoveAction_Set_toolDirection(MR_GcodeProcessor_MoveAction *_this, MR_PassBy value_pass_by, MR_std_vector_MR_Vector3f *value);

// tool direction for each point from action.path
/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::MoveAction` named `toolDirection`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f *MR_GcodeProcessor_MoveAction_GetMutable_toolDirection(MR_GcodeProcessor_MoveAction *_this);

/// Returns a pointer to a member variable of class `MR::GcodeProcessor::MoveAction` named `idle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_GcodeProcessor_MoveAction_Get_idle(const MR_GcodeProcessor_MoveAction *_this);

/// Modifies a member variable of class `MR::GcodeProcessor::MoveAction` named `idle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_MoveAction_Set_idle(MR_GcodeProcessor_MoveAction *_this, bool value);

/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::MoveAction` named `idle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_GcodeProcessor_MoveAction_GetMutable_idle(MR_GcodeProcessor_MoveAction *_this);

/// Returns a pointer to a member variable of class `MR::GcodeProcessor::MoveAction` named `feedrate`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_GcodeProcessor_MoveAction_Get_feedrate(const MR_GcodeProcessor_MoveAction *_this);

/// Modifies a member variable of class `MR::GcodeProcessor::MoveAction` named `feedrate`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_MoveAction_Set_feedrate(MR_GcodeProcessor_MoveAction *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::MoveAction` named `feedrate`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_GcodeProcessor_MoveAction_GetMutable_feedrate(MR_GcodeProcessor_MoveAction *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_MoveAction_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_MoveAction *MR_GcodeProcessor_MoveAction_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GcodeProcessor_MoveAction_DestroyArray()`.
/// Use `MR_GcodeProcessor_MoveAction_OffsetMutablePtr()` and `MR_GcodeProcessor_MoveAction_OffsetPtr()` to access the array elements.
MRC_API MR_GcodeProcessor_MoveAction *MR_GcodeProcessor_MoveAction_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::GcodeProcessor::MoveAction` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_MoveAction_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_MoveAction *MR_GcodeProcessor_MoveAction_ConstructFrom(MR_PassBy action_pass_by, MR_GcodeProcessor_BaseAction_MR_Vector3f *action, MR_PassBy toolDirection_pass_by, MR_std_vector_MR_Vector3f *toolDirection, bool idle, float feedrate);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GcodeProcessor_MoveAction *MR_GcodeProcessor_MoveAction_OffsetPtr(const MR_GcodeProcessor_MoveAction *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GcodeProcessor_MoveAction *MR_GcodeProcessor_MoveAction_OffsetMutablePtr(MR_GcodeProcessor_MoveAction *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::GcodeProcessor::MoveAction`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_MoveAction_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_MoveAction *MR_GcodeProcessor_MoveAction_ConstructFromAnother(MR_PassBy _other_pass_by, MR_GcodeProcessor_MoveAction *_other);

/// Destroys a heap-allocated instance of `MR_GcodeProcessor_MoveAction`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_MoveAction_Destroy(const MR_GcodeProcessor_MoveAction *_this);

/// Destroys a heap-allocated array of `MR_GcodeProcessor_MoveAction`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_MoveAction_DestroyArray(const MR_GcodeProcessor_MoveAction *_this);

/// Generated from a conversion operator of class `MR::GcodeProcessor::MoveAction` to type `bool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GcodeProcessor_MoveAction_ConvertTo_bool(const MR_GcodeProcessor_MoveAction *_this);

/// Generated from a method of class `MR::GcodeProcessor::MoveAction` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GcodeProcessor_MoveAction *MR_GcodeProcessor_MoveAction_AssignFromAnother(MR_GcodeProcessor_MoveAction *_this, MR_PassBy _other_pass_by, MR_GcodeProcessor_MoveAction *_other);

// return true if operation was parsed without warnings
/// Generated from a method of class `MR::GcodeProcessor::MoveAction` named `valid`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_GcodeProcessor_MoveAction_valid(const MR_GcodeProcessor_MoveAction *_this);

// in lowercase
/// Returns a pointer to a member variable of class `MR::GcodeProcessor::Command` named `key`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const char *MR_GcodeProcessor_Command_Get_key(const MR_GcodeProcessor_Command *_this);

// in lowercase
/// Modifies a member variable of class `MR::GcodeProcessor::Command` named `key`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_Command_Set_key(MR_GcodeProcessor_Command *_this, char value);

// in lowercase
/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::Command` named `key`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API char *MR_GcodeProcessor_Command_GetMutable_key(MR_GcodeProcessor_Command *_this);

/// Returns a pointer to a member variable of class `MR::GcodeProcessor::Command` named `value`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_GcodeProcessor_Command_Get_value(const MR_GcodeProcessor_Command *_this);

/// Modifies a member variable of class `MR::GcodeProcessor::Command` named `value`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GcodeProcessor_Command_Set_value(MR_GcodeProcessor_Command *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::GcodeProcessor::Command` named `value`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_GcodeProcessor_Command_GetMutable_value(MR_GcodeProcessor_Command *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_Command_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_Command *MR_GcodeProcessor_Command_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GcodeProcessor_Command_DestroyArray()`.
/// Use `MR_GcodeProcessor_Command_OffsetMutablePtr()` and `MR_GcodeProcessor_Command_OffsetPtr()` to access the array elements.
MRC_API MR_GcodeProcessor_Command *MR_GcodeProcessor_Command_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::GcodeProcessor::Command` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_Command_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_Command *MR_GcodeProcessor_Command_ConstructFrom(char key, float value);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GcodeProcessor_Command *MR_GcodeProcessor_Command_OffsetPtr(const MR_GcodeProcessor_Command *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GcodeProcessor_Command *MR_GcodeProcessor_Command_OffsetMutablePtr(MR_GcodeProcessor_Command *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::GcodeProcessor::Command`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GcodeProcessor_Command_Destroy()` to free it when you're done using it.
MRC_API MR_GcodeProcessor_Command *MR_GcodeProcessor_Command_ConstructFromAnother(const MR_GcodeProcessor_Command *_other);

/// Destroys a heap-allocated instance of `MR_GcodeProcessor_Command`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_Command_Destroy(const MR_GcodeProcessor_Command *_this);

/// Destroys a heap-allocated array of `MR_GcodeProcessor_Command`. Does nothing if the pointer is null.
MRC_API void MR_GcodeProcessor_Command_DestroyArray(const MR_GcodeProcessor_Command *_this);

/// Generated from a method of class `MR::GcodeProcessor::Command` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GcodeProcessor_Command *MR_GcodeProcessor_Command_AssignFromAnother(MR_GcodeProcessor_Command *_this, const MR_GcodeProcessor_Command *_other);

#ifdef __cplusplus
} // extern "C"
#endif
