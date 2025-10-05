// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


/// end mill cutter specifications
/// Generated from class `MR::EndMillCutter`.
typedef struct MR_EndMillCutter MR_EndMillCutter;

/// cutter type
typedef int32_t MR_EndMillCutter_Type;
enum // MR_EndMillCutter_Type
{
    /// flat end mill
    MR_EndMillCutter_Type_Flat = 0,
    /// ball end mill
    MR_EndMillCutter_Type_Ball = 1,
    /// bull nose end mill
    MR_EndMillCutter_Type_BullNose = 2,
    /// chamfer end mill
    MR_EndMillCutter_Type_Chamfer = 3,
    /// chamfer end mill
    MR_EndMillCutter_Type_Count = 4,
};

/// end mill tool specifications
/// Generated from class `MR::EndMillTool`.
typedef struct MR_EndMillTool MR_EndMillTool;

/// Returns a pointer to a member variable of class `MR::EndMillCutter` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EndMillCutter_Type *MR_EndMillCutter_Get_type(const MR_EndMillCutter *_this);

/// Modifies a member variable of class `MR::EndMillCutter` named `type`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EndMillCutter_Set_type(MR_EndMillCutter *_this, MR_EndMillCutter_Type value);

/// Returns a mutable pointer to a member variable of class `MR::EndMillCutter` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EndMillCutter_Type *MR_EndMillCutter_GetMutable_type(MR_EndMillCutter *_this);

/// (bull nose) corner radius
/// Returns a pointer to a member variable of class `MR::EndMillCutter` named `cornerRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EndMillCutter_Get_cornerRadius(const MR_EndMillCutter *_this);

/// (bull nose) corner radius
/// Modifies a member variable of class `MR::EndMillCutter` named `cornerRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EndMillCutter_Set_cornerRadius(MR_EndMillCutter *_this, float value);

/// (bull nose) corner radius
/// Returns a mutable pointer to a member variable of class `MR::EndMillCutter` named `cornerRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EndMillCutter_GetMutable_cornerRadius(MR_EndMillCutter *_this);

/// (chamfer) cutting angle
/// Returns a pointer to a member variable of class `MR::EndMillCutter` named `cuttingAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EndMillCutter_Get_cuttingAngle(const MR_EndMillCutter *_this);

/// (chamfer) cutting angle
/// Modifies a member variable of class `MR::EndMillCutter` named `cuttingAngle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EndMillCutter_Set_cuttingAngle(MR_EndMillCutter *_this, float value);

/// (chamfer) cutting angle
/// Returns a mutable pointer to a member variable of class `MR::EndMillCutter` named `cuttingAngle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EndMillCutter_GetMutable_cuttingAngle(MR_EndMillCutter *_this);

/// (chamfer) end diameter
/// Returns a pointer to a member variable of class `MR::EndMillCutter` named `endDiameter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EndMillCutter_Get_endDiameter(const MR_EndMillCutter *_this);

/// (chamfer) end diameter
/// Modifies a member variable of class `MR::EndMillCutter` named `endDiameter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EndMillCutter_Set_endDiameter(MR_EndMillCutter *_this, float value);

/// (chamfer) end diameter
/// Returns a mutable pointer to a member variable of class `MR::EndMillCutter` named `endDiameter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EndMillCutter_GetMutable_endDiameter(MR_EndMillCutter *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EndMillCutter_Destroy()` to free it when you're done using it.
MRC_API MR_EndMillCutter *MR_EndMillCutter_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EndMillCutter_DestroyArray()`.
/// Use `MR_EndMillCutter_OffsetMutablePtr()` and `MR_EndMillCutter_OffsetPtr()` to access the array elements.
MRC_API MR_EndMillCutter *MR_EndMillCutter_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::EndMillCutter` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EndMillCutter_Destroy()` to free it when you're done using it.
MRC_API MR_EndMillCutter *MR_EndMillCutter_ConstructFrom(MR_EndMillCutter_Type type, float cornerRadius, float cuttingAngle, float endDiameter);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EndMillCutter *MR_EndMillCutter_OffsetPtr(const MR_EndMillCutter *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EndMillCutter *MR_EndMillCutter_OffsetMutablePtr(MR_EndMillCutter *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EndMillCutter`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EndMillCutter_Destroy()` to free it when you're done using it.
MRC_API MR_EndMillCutter *MR_EndMillCutter_ConstructFromAnother(const MR_EndMillCutter *_other);

/// Destroys a heap-allocated instance of `MR_EndMillCutter`. Does nothing if the pointer is null.
MRC_API void MR_EndMillCutter_Destroy(const MR_EndMillCutter *_this);

/// Destroys a heap-allocated array of `MR_EndMillCutter`. Does nothing if the pointer is null.
MRC_API void MR_EndMillCutter_DestroyArray(const MR_EndMillCutter *_this);

/// Generated from a method of class `MR::EndMillCutter` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EndMillCutter *MR_EndMillCutter_AssignFromAnother(MR_EndMillCutter *_this, const MR_EndMillCutter *_other);

/// overall tool length
/// Returns a pointer to a member variable of class `MR::EndMillTool` named `length`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EndMillTool_Get_length(const MR_EndMillTool *_this);

/// overall tool length
/// Modifies a member variable of class `MR::EndMillTool` named `length`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EndMillTool_Set_length(MR_EndMillTool *_this, float value);

/// overall tool length
/// Returns a mutable pointer to a member variable of class `MR::EndMillTool` named `length`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EndMillTool_GetMutable_length(MR_EndMillTool *_this);

/// tool diameter
/// Returns a pointer to a member variable of class `MR::EndMillTool` named `diameter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_EndMillTool_Get_diameter(const MR_EndMillTool *_this);

/// tool diameter
/// Modifies a member variable of class `MR::EndMillTool` named `diameter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_EndMillTool_Set_diameter(MR_EndMillTool *_this, float value);

/// tool diameter
/// Returns a mutable pointer to a member variable of class `MR::EndMillTool` named `diameter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_EndMillTool_GetMutable_diameter(MR_EndMillTool *_this);

/// cutter
/// Returns a pointer to a member variable of class `MR::EndMillTool` named `cutter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_EndMillCutter *MR_EndMillTool_Get_cutter(const MR_EndMillTool *_this);

/// cutter
/// Modifies a member variable of class `MR::EndMillTool` named `cutter`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_EndMillTool_Set_cutter(MR_EndMillTool *_this, const MR_EndMillCutter *value);

/// cutter
/// Returns a mutable pointer to a member variable of class `MR::EndMillTool` named `cutter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EndMillCutter *MR_EndMillTool_GetMutable_cutter(MR_EndMillTool *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EndMillTool_Destroy()` to free it when you're done using it.
MRC_API MR_EndMillTool *MR_EndMillTool_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_EndMillTool_DestroyArray()`.
/// Use `MR_EndMillTool_OffsetMutablePtr()` and `MR_EndMillTool_OffsetPtr()` to access the array elements.
MRC_API MR_EndMillTool *MR_EndMillTool_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::EndMillTool` elementwise.
/// Parameter `cutter` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EndMillTool_Destroy()` to free it when you're done using it.
MRC_API MR_EndMillTool *MR_EndMillTool_ConstructFrom(float length, float diameter, const MR_EndMillCutter *cutter);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_EndMillTool *MR_EndMillTool_OffsetPtr(const MR_EndMillTool *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_EndMillTool *MR_EndMillTool_OffsetMutablePtr(MR_EndMillTool *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::EndMillTool`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_EndMillTool_Destroy()` to free it when you're done using it.
MRC_API MR_EndMillTool *MR_EndMillTool_ConstructFromAnother(const MR_EndMillTool *_other);

/// Destroys a heap-allocated instance of `MR_EndMillTool`. Does nothing if the pointer is null.
MRC_API void MR_EndMillTool_Destroy(const MR_EndMillTool *_this);

/// Destroys a heap-allocated array of `MR_EndMillTool`. Does nothing if the pointer is null.
MRC_API void MR_EndMillTool_DestroyArray(const MR_EndMillTool *_this);

/// Generated from a method of class `MR::EndMillTool` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_EndMillTool *MR_EndMillTool_AssignFromAnother(MR_EndMillTool *_this, const MR_EndMillTool *_other);

/// compute the minimal cut length based on the cutter parameters
/// Generated from a method of class `MR::EndMillTool` named `getMinimalCutLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_EndMillTool_getMinimalCutLength(const MR_EndMillTool *_this);

/// create a tool mesh
/// Generated from a method of class `MR::EndMillTool` named `toMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `horizontalResolution` has a default argument: `32`, pass a null pointer to use it.
/// Parameter `verticalResolution` has a default argument: `32`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_Mesh *MR_EndMillTool_toMesh(const MR_EndMillTool *_this, const int32_t *horizontalResolution, const int32_t *verticalResolution);

#ifdef __cplusplus
} // extern "C"
#endif
