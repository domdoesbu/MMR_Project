// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRAxis.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AffineXf3f MR_AffineXf3f; // Defined in `#include <MRCMesh/MRAffineXf.h>`.
typedef struct MR_FaceBitSet MR_FaceBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshPart MR_MeshPart; // Defined in `#include <MRCMesh/MRMeshPart.h>`.
typedef struct MR_expected_MR_ToolPathResult_std_string MR_expected_MR_ToolPathResult_std_string; // Defined in `#include <MRCMisc/expected_MR_ToolPathResult_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectGcode MR_std_shared_ptr_MR_ObjectGcode; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectGcode.h>`.
typedef struct MR_std_vector_MR_GCommand MR_std_vector_MR_GCommand; // Defined in `#include <MRCMisc/std_vector_MR_GCommand.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.
typedef struct MR_std_vector_std_vector_MR_Vector3f MR_std_vector_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_std_vector_MR_Vector3f.h>`.


typedef int32_t MR_BypassDirection;
enum // MR_BypassDirection
{
    MR_BypassDirection_Clockwise = 0,
    MR_BypassDirection_CounterClockwise = 1,
};

/// Generated from class `MR::ToolPathParams`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ConstantCuspParams`
typedef struct MR_ToolPathParams MR_ToolPathParams;

/// Generated from class `MR::ConstantCuspParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ToolPathParams`
typedef struct MR_ConstantCuspParams MR_ConstantCuspParams;

/// Generated from class `MR::LineInterpolationParams`.
typedef struct MR_LineInterpolationParams MR_LineInterpolationParams;

/// Generated from class `MR::ArcInterpolationParams`.
typedef struct MR_ArcInterpolationParams MR_ArcInterpolationParams;

typedef int32_t MR_MoveType;
enum // MR_MoveType
{
    MR_MoveType_None = -1,
    MR_MoveType_FastLinear = 0,
    MR_MoveType_Linear = 1,
    MR_MoveType_ArcCW = 2,
    MR_MoveType_ArcCCW = 3,
};

typedef int32_t MR_ArcPlane;
enum // MR_ArcPlane
{
    MR_ArcPlane_None = -1,
    MR_ArcPlane_XY = 17,
    MR_ArcPlane_XZ = 18,
    MR_ArcPlane_YZ = 19,
};

/// Generated from class `MR::GCommand`.
typedef struct MR_GCommand MR_GCommand;

/// Generated from class `MR::ToolPathResult`.
typedef struct MR_ToolPathResult MR_ToolPathResult;

// radius of the milling tool
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `millRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_millRadius(const MR_ToolPathParams *_this);

// radius of the milling tool
/// Modifies a member variable of class `MR::ToolPathParams` named `millRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_millRadius(MR_ToolPathParams *_this, float value);

// radius of the milling tool
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `millRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_millRadius(MR_ToolPathParams *_this);

// size of voxel needed to offset mesh
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_voxelSize(const MR_ToolPathParams *_this);

// size of voxel needed to offset mesh
/// Modifies a member variable of class `MR::ToolPathParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_voxelSize(MR_ToolPathParams *_this, float value);

// size of voxel needed to offset mesh
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_voxelSize(MR_ToolPathParams *_this);

// distance between sections built along Z axis
// in Constant Cusp mode sectionStep should be bigger than voxelSize (x1.2 or more is recomended)
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `sectionStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_sectionStep(const MR_ToolPathParams *_this);

// distance between sections built along Z axis
// in Constant Cusp mode sectionStep should be bigger than voxelSize (x1.2 or more is recomended)
/// Modifies a member variable of class `MR::ToolPathParams` named `sectionStep`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_sectionStep(MR_ToolPathParams *_this, float value);

// distance between sections built along Z axis
// in Constant Cusp mode sectionStep should be bigger than voxelSize (x1.2 or more is recomended)
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `sectionStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_sectionStep(MR_ToolPathParams *_this);

// if distance to the next section is smaller than it, transition will be performed along the surface
// otherwise transition will be through the safe plane
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `critTransitionLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_critTransitionLength(const MR_ToolPathParams *_this);

// if distance to the next section is smaller than it, transition will be performed along the surface
// otherwise transition will be through the safe plane
/// Modifies a member variable of class `MR::ToolPathParams` named `critTransitionLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_critTransitionLength(MR_ToolPathParams *_this, float value);

// if distance to the next section is smaller than it, transition will be performed along the surface
// otherwise transition will be through the safe plane
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `critTransitionLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_critTransitionLength(MR_ToolPathParams *_this);

// when the mill is moving down, it will be slowed down in this distance from mesh
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `plungeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_plungeLength(const MR_ToolPathParams *_this);

// when the mill is moving down, it will be slowed down in this distance from mesh
/// Modifies a member variable of class `MR::ToolPathParams` named `plungeLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_plungeLength(MR_ToolPathParams *_this, float value);

// when the mill is moving down, it will be slowed down in this distance from mesh
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `plungeLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_plungeLength(MR_ToolPathParams *_this);

// when the mill is moving up, it will be slowed down in this distance from mesh
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `retractLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_retractLength(const MR_ToolPathParams *_this);

// when the mill is moving up, it will be slowed down in this distance from mesh
/// Modifies a member variable of class `MR::ToolPathParams` named `retractLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_retractLength(MR_ToolPathParams *_this, float value);

// when the mill is moving up, it will be slowed down in this distance from mesh
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `retractLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_retractLength(MR_ToolPathParams *_this);

// speed of slow movement down
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `plungeFeed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_plungeFeed(const MR_ToolPathParams *_this);

// speed of slow movement down
/// Modifies a member variable of class `MR::ToolPathParams` named `plungeFeed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_plungeFeed(MR_ToolPathParams *_this, float value);

// speed of slow movement down
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `plungeFeed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_plungeFeed(MR_ToolPathParams *_this);

// speed of slow movement up
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `retractFeed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_retractFeed(const MR_ToolPathParams *_this);

// speed of slow movement up
/// Modifies a member variable of class `MR::ToolPathParams` named `retractFeed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_retractFeed(MR_ToolPathParams *_this, float value);

// speed of slow movement up
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `retractFeed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_retractFeed(MR_ToolPathParams *_this);

// speed of regular milling
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `baseFeed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_baseFeed(const MR_ToolPathParams *_this);

// speed of regular milling
/// Modifies a member variable of class `MR::ToolPathParams` named `baseFeed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_baseFeed(MR_ToolPathParams *_this, float value);

// speed of regular milling
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `baseFeed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_baseFeed(MR_ToolPathParams *_this);

// z-coordinate of plane where tool can move in any direction without touching the object
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `safeZ`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_safeZ(const MR_ToolPathParams *_this);

// z-coordinate of plane where tool can move in any direction without touching the object
/// Modifies a member variable of class `MR::ToolPathParams` named `safeZ`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_safeZ(MR_ToolPathParams *_this, float value);

// z-coordinate of plane where tool can move in any direction without touching the object
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `safeZ`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_safeZ(MR_ToolPathParams *_this);

// which direction isolines or sections should be passed in
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `bypassDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BypassDirection *MR_ToolPathParams_Get_bypassDir(const MR_ToolPathParams *_this);

// which direction isolines or sections should be passed in
/// Modifies a member variable of class `MR::ToolPathParams` named `bypassDir`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_bypassDir(MR_ToolPathParams *_this, MR_BypassDirection value);

// which direction isolines or sections should be passed in
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `bypassDir`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BypassDirection *MR_ToolPathParams_GetMutable_bypassDir(MR_ToolPathParams *_this);

// mesh can be transformed using xf parameter
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f *const *MR_ToolPathParams_Get_xf(const MR_ToolPathParams *_this);

// mesh can be transformed using xf parameter
/// Modifies a member variable of class `MR::ToolPathParams` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_xf(MR_ToolPathParams *_this, const MR_AffineXf3f *value);

// mesh can be transformed using xf parameter
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `xf`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_AffineXf3f **MR_ToolPathParams_GetMutable_xf(MR_ToolPathParams *_this);

// if true then a tool path for a flat milling tool will be generated
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `flatTool`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_ToolPathParams_Get_flatTool(const MR_ToolPathParams *_this);

// if true then a tool path for a flat milling tool will be generated
/// Modifies a member variable of class `MR::ToolPathParams` named `flatTool`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_flatTool(MR_ToolPathParams *_this, bool value);

// if true then a tool path for a flat milling tool will be generated
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `flatTool`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_ToolPathParams_GetMutable_flatTool(MR_ToolPathParams *_this);

// callback for reporting on progress
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_ToolPathParams_Get_cb(const MR_ToolPathParams *_this);

// callback for reporting on progress
/// Modifies a member variable of class `MR::ToolPathParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_cb(MR_ToolPathParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

// callback for reporting on progress
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_ToolPathParams_GetMutable_cb(MR_ToolPathParams *_this);

// if > 0 - expand the trajectory creation area and create toolpath to mill excess material to make empty areas.
// The area has the shape of a box.
// Lacing specific only.
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `toolpathExpansion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ToolPathParams_Get_toolpathExpansion(const MR_ToolPathParams *_this);

// if > 0 - expand the trajectory creation area and create toolpath to mill excess material to make empty areas.
// The area has the shape of a box.
// Lacing specific only.
/// Modifies a member variable of class `MR::ToolPathParams` named `toolpathExpansion`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_toolpathExpansion(MR_ToolPathParams *_this, float value);

// if > 0 - expand the trajectory creation area and create toolpath to mill excess material to make empty areas.
// The area has the shape of a box.
// Lacing specific only.
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `toolpathExpansion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ToolPathParams_GetMutable_toolpathExpansion(MR_ToolPathParams *_this);

// optional output, stores isolines without transits
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `isolines`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *const *MR_ToolPathParams_Get_isolines(const MR_ToolPathParams *_this);

// optional output, stores isolines without transits
/// Modifies a member variable of class `MR::ToolPathParams` named `isolines`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_isolines(MR_ToolPathParams *_this, MR_std_vector_std_vector_MR_Vector3f *value);

// optional output, stores isolines without transits
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `isolines`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_Vector3f **MR_ToolPathParams_GetMutable_isolines(MR_ToolPathParams *_this);

// optional output, polyline containing start vertices for isolines
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `startContours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_Vector3f *const *MR_ToolPathParams_Get_startContours(const MR_ToolPathParams *_this);

// optional output, polyline containing start vertices for isolines
/// Modifies a member variable of class `MR::ToolPathParams` named `startContours`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_startContours(MR_ToolPathParams *_this, MR_std_vector_std_vector_MR_Vector3f *value);

// optional output, polyline containing start vertices for isolines
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `startContours`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_vector_MR_Vector3f **MR_ToolPathParams_GetMutable_startContours(MR_ToolPathParams *_this);

// start vertices on the offset mesh used for calcutating isolines
/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `startVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f *const *MR_ToolPathParams_Get_startVertices(const MR_ToolPathParams *_this);

// start vertices on the offset mesh used for calcutating isolines
/// Modifies a member variable of class `MR::ToolPathParams` named `startVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_startVertices(MR_ToolPathParams *_this, MR_std_vector_MR_Vector3f *value);

// start vertices on the offset mesh used for calcutating isolines
/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `startVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_Vector3f **MR_ToolPathParams_GetMutable_startVertices(MR_ToolPathParams *_this);

/// Returns a pointer to a member variable of class `MR::ToolPathParams` named `offsetMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshPart *const *MR_ToolPathParams_Get_offsetMesh(const MR_ToolPathParams *_this);

/// Modifies a member variable of class `MR::ToolPathParams` named `offsetMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathParams_Set_offsetMesh(MR_ToolPathParams *_this, MR_MeshPart *value);

/// Returns a mutable pointer to a member variable of class `MR::ToolPathParams` named `offsetMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MeshPart **MR_ToolPathParams_GetMutable_offsetMesh(MR_ToolPathParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ToolPathParams_Destroy()` to free it when you're done using it.
MRC_API MR_ToolPathParams *MR_ToolPathParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ToolPathParams_DestroyArray()`.
/// Use `MR_ToolPathParams_OffsetMutablePtr()` and `MR_ToolPathParams_OffsetPtr()` to access the array elements.
MRC_API MR_ToolPathParams *MR_ToolPathParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ToolPathParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ToolPathParams_Destroy()` to free it when you're done using it.
MRC_API MR_ToolPathParams *MR_ToolPathParams_ConstructFrom(float millRadius, float voxelSize, float sectionStep, float critTransitionLength, float plungeLength, float retractLength, float plungeFeed, float retractFeed, float baseFeed, float safeZ, MR_BypassDirection bypassDir, const MR_AffineXf3f *xf, bool flatTool, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, float toolpathExpansion, MR_std_vector_std_vector_MR_Vector3f *isolines, MR_std_vector_std_vector_MR_Vector3f *startContours, MR_std_vector_MR_Vector3f *startVertices, MR_MeshPart *offsetMesh);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ToolPathParams *MR_ToolPathParams_OffsetPtr(const MR_ToolPathParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ToolPathParams *MR_ToolPathParams_OffsetMutablePtr(MR_ToolPathParams *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::ToolPathParams` to a derived class `MR::ConstantCuspParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ConstantCuspParams *MR_ToolPathParams_StaticDowncastTo_MR_ConstantCuspParams(const MR_ToolPathParams *object);

/// Downcasts an instance of `MR::ToolPathParams` to a derived class `MR::ConstantCuspParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ConstantCuspParams *MR_ToolPathParams_MutableStaticDowncastTo_MR_ConstantCuspParams(MR_ToolPathParams *object);

/// Generated from a constructor of class `MR::ToolPathParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ToolPathParams_Destroy()` to free it when you're done using it.
MRC_API MR_ToolPathParams *MR_ToolPathParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ToolPathParams *_other);

/// Destroys a heap-allocated instance of `MR_ToolPathParams`. Does nothing if the pointer is null.
MRC_API void MR_ToolPathParams_Destroy(const MR_ToolPathParams *_this);

/// Destroys a heap-allocated array of `MR_ToolPathParams`. Does nothing if the pointer is null.
MRC_API void MR_ToolPathParams_DestroyArray(const MR_ToolPathParams *_this);

/// Generated from a method of class `MR::ToolPathParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ToolPathParams *MR_ToolPathParams_AssignFromAnother(MR_ToolPathParams *_this, MR_PassBy _other_pass_by, MR_ToolPathParams *_other);

// if true isolines will be processed from center point to the boundary (usually it means from up to down)
/// Returns a pointer to a member variable of class `MR::ConstantCuspParams` named `fromCenterToBoundary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_ConstantCuspParams_Get_fromCenterToBoundary(const MR_ConstantCuspParams *_this);

// if true isolines will be processed from center point to the boundary (usually it means from up to down)
/// Modifies a member variable of class `MR::ConstantCuspParams` named `fromCenterToBoundary`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ConstantCuspParams_Set_fromCenterToBoundary(MR_ConstantCuspParams *_this, bool value);

// if true isolines will be processed from center point to the boundary (usually it means from up to down)
/// Returns a mutable pointer to a member variable of class `MR::ConstantCuspParams` named `fromCenterToBoundary`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_ConstantCuspParams_GetMutable_fromCenterToBoundary(MR_ConstantCuspParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ConstantCuspParams_Destroy()` to free it when you're done using it.
MRC_API MR_ConstantCuspParams *MR_ConstantCuspParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ConstantCuspParams_DestroyArray()`.
/// Use `MR_ConstantCuspParams_OffsetMutablePtr()` and `MR_ConstantCuspParams_OffsetPtr()` to access the array elements.
MRC_API MR_ConstantCuspParams *MR_ConstantCuspParams_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ConstantCuspParams *MR_ConstantCuspParams_OffsetPtr(const MR_ConstantCuspParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ConstantCuspParams *MR_ConstantCuspParams_OffsetMutablePtr(MR_ConstantCuspParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ConstantCuspParams` to its base class `MR::ToolPathParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_ToolPathParams *MR_ConstantCuspParams_UpcastTo_MR_ToolPathParams(const MR_ConstantCuspParams *object);

/// Upcasts an instance of `MR::ConstantCuspParams` to its base class `MR::ToolPathParams`.
MRC_API MR_ToolPathParams *MR_ConstantCuspParams_MutableUpcastTo_MR_ToolPathParams(MR_ConstantCuspParams *object);

/// Generated from a constructor of class `MR::ConstantCuspParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ConstantCuspParams_Destroy()` to free it when you're done using it.
MRC_API MR_ConstantCuspParams *MR_ConstantCuspParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ConstantCuspParams *_other);

/// Destroys a heap-allocated instance of `MR_ConstantCuspParams`. Does nothing if the pointer is null.
MRC_API void MR_ConstantCuspParams_Destroy(const MR_ConstantCuspParams *_this);

/// Destroys a heap-allocated array of `MR_ConstantCuspParams`. Does nothing if the pointer is null.
MRC_API void MR_ConstantCuspParams_DestroyArray(const MR_ConstantCuspParams *_this);

/// Generated from a method of class `MR::ConstantCuspParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ConstantCuspParams *MR_ConstantCuspParams_AssignFromAnother(MR_ConstantCuspParams *_this, MR_PassBy _other_pass_by, MR_ConstantCuspParams *_other);

// maximal deviation from given line
/// Returns a pointer to a member variable of class `MR::LineInterpolationParams` named `eps`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_LineInterpolationParams_Get_eps(const MR_LineInterpolationParams *_this);

// maximal deviation from given line
/// Modifies a member variable of class `MR::LineInterpolationParams` named `eps`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineInterpolationParams_Set_eps(MR_LineInterpolationParams *_this, float value);

// maximal deviation from given line
/// Returns a mutable pointer to a member variable of class `MR::LineInterpolationParams` named `eps`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_LineInterpolationParams_GetMutable_eps(MR_LineInterpolationParams *_this);

// maximal length of the line
/// Returns a pointer to a member variable of class `MR::LineInterpolationParams` named `maxLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_LineInterpolationParams_Get_maxLength(const MR_LineInterpolationParams *_this);

// maximal length of the line
/// Modifies a member variable of class `MR::LineInterpolationParams` named `maxLength`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineInterpolationParams_Set_maxLength(MR_LineInterpolationParams *_this, float value);

// maximal length of the line
/// Returns a mutable pointer to a member variable of class `MR::LineInterpolationParams` named `maxLength`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_LineInterpolationParams_GetMutable_maxLength(MR_LineInterpolationParams *_this);

// callback for reporting on progress
/// Returns a pointer to a member variable of class `MR::LineInterpolationParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_LineInterpolationParams_Get_cb(const MR_LineInterpolationParams *_this);

// callback for reporting on progress
/// Modifies a member variable of class `MR::LineInterpolationParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LineInterpolationParams_Set_cb(MR_LineInterpolationParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

// callback for reporting on progress
/// Returns a mutable pointer to a member variable of class `MR::LineInterpolationParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_LineInterpolationParams_GetMutable_cb(MR_LineInterpolationParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineInterpolationParams_Destroy()` to free it when you're done using it.
MRC_API MR_LineInterpolationParams *MR_LineInterpolationParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LineInterpolationParams_DestroyArray()`.
/// Use `MR_LineInterpolationParams_OffsetMutablePtr()` and `MR_LineInterpolationParams_OffsetPtr()` to access the array elements.
MRC_API MR_LineInterpolationParams *MR_LineInterpolationParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LineInterpolationParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineInterpolationParams_Destroy()` to free it when you're done using it.
MRC_API MR_LineInterpolationParams *MR_LineInterpolationParams_ConstructFrom(float eps, float maxLength, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LineInterpolationParams *MR_LineInterpolationParams_OffsetPtr(const MR_LineInterpolationParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LineInterpolationParams *MR_LineInterpolationParams_OffsetMutablePtr(MR_LineInterpolationParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LineInterpolationParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LineInterpolationParams_Destroy()` to free it when you're done using it.
MRC_API MR_LineInterpolationParams *MR_LineInterpolationParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_LineInterpolationParams *_other);

/// Destroys a heap-allocated instance of `MR_LineInterpolationParams`. Does nothing if the pointer is null.
MRC_API void MR_LineInterpolationParams_Destroy(const MR_LineInterpolationParams *_this);

/// Destroys a heap-allocated array of `MR_LineInterpolationParams`. Does nothing if the pointer is null.
MRC_API void MR_LineInterpolationParams_DestroyArray(const MR_LineInterpolationParams *_this);

/// Generated from a method of class `MR::LineInterpolationParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LineInterpolationParams *MR_LineInterpolationParams_AssignFromAnother(MR_LineInterpolationParams *_this, MR_PassBy _other_pass_by, MR_LineInterpolationParams *_other);

// maximal deviation of arc from given path
/// Returns a pointer to a member variable of class `MR::ArcInterpolationParams` named `eps`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ArcInterpolationParams_Get_eps(const MR_ArcInterpolationParams *_this);

// maximal deviation of arc from given path
/// Modifies a member variable of class `MR::ArcInterpolationParams` named `eps`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ArcInterpolationParams_Set_eps(MR_ArcInterpolationParams *_this, float value);

// maximal deviation of arc from given path
/// Returns a mutable pointer to a member variable of class `MR::ArcInterpolationParams` named `eps`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ArcInterpolationParams_GetMutable_eps(MR_ArcInterpolationParams *_this);

// maximal radius of the arc
/// Returns a pointer to a member variable of class `MR::ArcInterpolationParams` named `maxRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ArcInterpolationParams_Get_maxRadius(const MR_ArcInterpolationParams *_this);

// maximal radius of the arc
/// Modifies a member variable of class `MR::ArcInterpolationParams` named `maxRadius`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ArcInterpolationParams_Set_maxRadius(MR_ArcInterpolationParams *_this, float value);

// maximal radius of the arc
/// Returns a mutable pointer to a member variable of class `MR::ArcInterpolationParams` named `maxRadius`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ArcInterpolationParams_GetMutable_maxRadius(MR_ArcInterpolationParams *_this);

// callback for reporting on progress
/// Returns a pointer to a member variable of class `MR::ArcInterpolationParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_float *MR_ArcInterpolationParams_Get_cb(const MR_ArcInterpolationParams *_this);

// callback for reporting on progress
/// Modifies a member variable of class `MR::ArcInterpolationParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ArcInterpolationParams_Set_cb(MR_ArcInterpolationParams *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_float *value);

// callback for reporting on progress
/// Returns a mutable pointer to a member variable of class `MR::ArcInterpolationParams` named `cb`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_float *MR_ArcInterpolationParams_GetMutable_cb(MR_ArcInterpolationParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ArcInterpolationParams_Destroy()` to free it when you're done using it.
MRC_API MR_ArcInterpolationParams *MR_ArcInterpolationParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ArcInterpolationParams_DestroyArray()`.
/// Use `MR_ArcInterpolationParams_OffsetMutablePtr()` and `MR_ArcInterpolationParams_OffsetPtr()` to access the array elements.
MRC_API MR_ArcInterpolationParams *MR_ArcInterpolationParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ArcInterpolationParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ArcInterpolationParams_Destroy()` to free it when you're done using it.
MRC_API MR_ArcInterpolationParams *MR_ArcInterpolationParams_ConstructFrom(float eps, float maxRadius, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ArcInterpolationParams *MR_ArcInterpolationParams_OffsetPtr(const MR_ArcInterpolationParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ArcInterpolationParams *MR_ArcInterpolationParams_OffsetMutablePtr(MR_ArcInterpolationParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ArcInterpolationParams`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ArcInterpolationParams_Destroy()` to free it when you're done using it.
MRC_API MR_ArcInterpolationParams *MR_ArcInterpolationParams_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ArcInterpolationParams *_other);

/// Destroys a heap-allocated instance of `MR_ArcInterpolationParams`. Does nothing if the pointer is null.
MRC_API void MR_ArcInterpolationParams_Destroy(const MR_ArcInterpolationParams *_this);

/// Destroys a heap-allocated array of `MR_ArcInterpolationParams`. Does nothing if the pointer is null.
MRC_API void MR_ArcInterpolationParams_DestroyArray(const MR_ArcInterpolationParams *_this);

/// Generated from a method of class `MR::ArcInterpolationParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ArcInterpolationParams *MR_ArcInterpolationParams_AssignFromAnother(MR_ArcInterpolationParams *_this, MR_PassBy _other_pass_by, MR_ArcInterpolationParams *_other);

// type of command GX (G0, G1, etc). By default - G1
/// Returns a pointer to a member variable of class `MR::GCommand` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_MoveType *MR_GCommand_Get_type(const MR_GCommand *_this);

// type of command GX (G0, G1, etc). By default - G1
/// Modifies a member variable of class `MR::GCommand` named `type`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GCommand_Set_type(MR_GCommand *_this, MR_MoveType value);

// type of command GX (G0, G1, etc). By default - G1
/// Returns a mutable pointer to a member variable of class `MR::GCommand` named `type`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_MoveType *MR_GCommand_GetMutable_type(MR_GCommand *_this);

// Place for comment
/// Returns a pointer to a member variable of class `MR::GCommand` named `arcPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ArcPlane *MR_GCommand_Get_arcPlane(const MR_GCommand *_this);

// Place for comment
/// Modifies a member variable of class `MR::GCommand` named `arcPlane`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GCommand_Set_arcPlane(MR_GCommand *_this, MR_ArcPlane value);

// Place for comment
/// Returns a mutable pointer to a member variable of class `MR::GCommand` named `arcPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ArcPlane *MR_GCommand_GetMutable_arcPlane(MR_GCommand *_this);

// feedrate for move
/// Returns a pointer to a member variable of class `MR::GCommand` named `feed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_GCommand_Get_feed(const MR_GCommand *_this);

// feedrate for move
/// Modifies a member variable of class `MR::GCommand` named `feed`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GCommand_Set_feed(MR_GCommand *_this, float value);

// feedrate for move
/// Returns a mutable pointer to a member variable of class `MR::GCommand` named `feed`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_GCommand_GetMutable_feed(MR_GCommand *_this);

// coordinates of destination point
/// Returns a pointer to a member variable of class `MR::GCommand` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_GCommand_Get_x(const MR_GCommand *_this);

// coordinates of destination point
/// Modifies a member variable of class `MR::GCommand` named `x`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GCommand_Set_x(MR_GCommand *_this, float value);

// coordinates of destination point
/// Returns a mutable pointer to a member variable of class `MR::GCommand` named `x`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_GCommand_GetMutable_x(MR_GCommand *_this);

/// Returns a pointer to a member variable of class `MR::GCommand` named `y`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_GCommand_Get_y(const MR_GCommand *_this);

/// Modifies a member variable of class `MR::GCommand` named `y`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GCommand_Set_y(MR_GCommand *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::GCommand` named `y`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_GCommand_GetMutable_y(MR_GCommand *_this);

/// Returns a pointer to a member variable of class `MR::GCommand` named `z`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_GCommand_Get_z(const MR_GCommand *_this);

/// Modifies a member variable of class `MR::GCommand` named `z`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GCommand_Set_z(MR_GCommand *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::GCommand` named `z`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_GCommand_GetMutable_z(MR_GCommand *_this);

// if moveType is ArcCW or ArcCCW center of the arc shoult be specified
/// Returns a pointer to a member variable of class `MR::GCommand` named `arcCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_GCommand_Get_arcCenter(const MR_GCommand *_this);

// if moveType is ArcCW or ArcCCW center of the arc shoult be specified
/// Modifies a member variable of class `MR::GCommand` named `arcCenter`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_GCommand_Set_arcCenter(MR_GCommand *_this, MR_Vector3f value);

// if moveType is ArcCW or ArcCCW center of the arc shoult be specified
/// Returns a mutable pointer to a member variable of class `MR::GCommand` named `arcCenter`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_GCommand_GetMutable_arcCenter(MR_GCommand *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GCommand_Destroy()` to free it when you're done using it.
MRC_API MR_GCommand *MR_GCommand_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_GCommand_DestroyArray()`.
/// Use `MR_GCommand_OffsetMutablePtr()` and `MR_GCommand_OffsetPtr()` to access the array elements.
MRC_API MR_GCommand *MR_GCommand_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::GCommand` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GCommand_Destroy()` to free it when you're done using it.
MRC_API MR_GCommand *MR_GCommand_ConstructFrom(MR_MoveType type, MR_ArcPlane arcPlane, float feed, float x, float y, float z, MR_Vector3f arcCenter);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_GCommand *MR_GCommand_OffsetPtr(const MR_GCommand *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_GCommand *MR_GCommand_OffsetMutablePtr(MR_GCommand *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::GCommand`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_GCommand_Destroy()` to free it when you're done using it.
MRC_API MR_GCommand *MR_GCommand_ConstructFromAnother(const MR_GCommand *_other);

/// Destroys a heap-allocated instance of `MR_GCommand`. Does nothing if the pointer is null.
MRC_API void MR_GCommand_Destroy(const MR_GCommand *_this);

/// Destroys a heap-allocated array of `MR_GCommand`. Does nothing if the pointer is null.
MRC_API void MR_GCommand_DestroyArray(const MR_GCommand *_this);

/// Generated from a method of class `MR::GCommand` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_GCommand *MR_GCommand_AssignFromAnother(MR_GCommand *_this, const MR_GCommand *_other);

// mesh after fixing undercuts and offset
/// Returns a pointer to a member variable of class `MR::ToolPathResult` named `modifiedMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Mesh *MR_ToolPathResult_Get_modifiedMesh(const MR_ToolPathResult *_this);

// mesh after fixing undercuts and offset
/// Modifies a member variable of class `MR::ToolPathResult` named `modifiedMesh`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathResult_Set_modifiedMesh(MR_ToolPathResult *_this, MR_PassBy value_pass_by, MR_Mesh *value);

// mesh after fixing undercuts and offset
/// Returns a mutable pointer to a member variable of class `MR::ToolPathResult` named `modifiedMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Mesh *MR_ToolPathResult_GetMutable_modifiedMesh(MR_ToolPathResult *_this);

// selected region projected from the original mesh to the offset
/// Returns a pointer to a member variable of class `MR::ToolPathResult` named `modifiedRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FaceBitSet *MR_ToolPathResult_Get_modifiedRegion(const MR_ToolPathResult *_this);

// selected region projected from the original mesh to the offset
/// Modifies a member variable of class `MR::ToolPathResult` named `modifiedRegion`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathResult_Set_modifiedRegion(MR_ToolPathResult *_this, MR_PassBy value_pass_by, MR_FaceBitSet *value);

// selected region projected from the original mesh to the offset
/// Returns a mutable pointer to a member variable of class `MR::ToolPathResult` named `modifiedRegion`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FaceBitSet *MR_ToolPathResult_GetMutable_modifiedRegion(MR_ToolPathResult *_this);

// constains type of movement and its feed
/// Returns a pointer to a member variable of class `MR::ToolPathResult` named `commands`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_MR_GCommand *MR_ToolPathResult_Get_commands(const MR_ToolPathResult *_this);

// constains type of movement and its feed
/// Modifies a member variable of class `MR::ToolPathResult` named `commands`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ToolPathResult_Set_commands(MR_ToolPathResult *_this, MR_PassBy value_pass_by, MR_std_vector_MR_GCommand *value);

// constains type of movement and its feed
/// Returns a mutable pointer to a member variable of class `MR::ToolPathResult` named `commands`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_MR_GCommand *MR_ToolPathResult_GetMutable_commands(MR_ToolPathResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ToolPathResult_Destroy()` to free it when you're done using it.
MRC_API MR_ToolPathResult *MR_ToolPathResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ToolPathResult_DestroyArray()`.
/// Use `MR_ToolPathResult_OffsetMutablePtr()` and `MR_ToolPathResult_OffsetPtr()` to access the array elements.
MRC_API MR_ToolPathResult *MR_ToolPathResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ToolPathResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ToolPathResult_Destroy()` to free it when you're done using it.
MRC_API MR_ToolPathResult *MR_ToolPathResult_ConstructFrom(MR_PassBy modifiedMesh_pass_by, MR_Mesh *modifiedMesh, MR_PassBy modifiedRegion_pass_by, MR_FaceBitSet *modifiedRegion, MR_PassBy commands_pass_by, MR_std_vector_MR_GCommand *commands);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ToolPathResult *MR_ToolPathResult_OffsetPtr(const MR_ToolPathResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ToolPathResult *MR_ToolPathResult_OffsetMutablePtr(MR_ToolPathResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ToolPathResult`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ToolPathResult_Destroy()` to free it when you're done using it.
MRC_API MR_ToolPathResult *MR_ToolPathResult_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ToolPathResult *_other);

/// Destroys a heap-allocated instance of `MR_ToolPathResult`. Does nothing if the pointer is null.
MRC_API void MR_ToolPathResult_Destroy(const MR_ToolPathResult *_this);

/// Destroys a heap-allocated array of `MR_ToolPathResult`. Does nothing if the pointer is null.
MRC_API void MR_ToolPathResult_DestroyArray(const MR_ToolPathResult *_this);

/// Generated from a method of class `MR::ToolPathResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ToolPathResult *MR_ToolPathResult_AssignFromAnother(MR_ToolPathResult *_this, MR_PassBy _other_pass_by, MR_ToolPathResult *_other);

// compute path of the milling tool for the given mesh with parameters ( direction of milling is from up to down along Z-direction )
// this toolpath is built from the parallel sections along Z-axis
// mesh can be transformed using xf parameter
/// Generated from function `MR::constantZToolPath`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_ToolPathResult_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_ToolPathResult_std_string *MR_constantZToolPath(const MR_MeshPart *mp, const MR_ToolPathParams *params);

// Slices are built along the axis defined by cutDirection argument (can be Axis::X or Axis::Y)
/// Generated from function `MR::lacingToolPath`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_ToolPathResult_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_ToolPathResult_std_string *MR_lacingToolPath(const MR_MeshPart *mp, const MR_ToolPathParams *params, MR_Axis cutDirection);

// compute path of the milling tool for the given mesh with parameters ( direction of milling is from up to down along Z-direction )
// this toolpath is built from geodesic parallels divercing from the given start point or from the bounaries of selected areas
// if neither is specified, the lowest section by XY plane will be used as a start contour
// mesh can be transformed using xf parameter
/// Generated from function `MR::constantCuspToolPath`.
/// Parameter `mp` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_ToolPathResult_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_ToolPathResult_std_string *MR_constantCuspToolPath(const MR_MeshPart *mp, const MR_ConstantCuspParams *params);

// generates G-Code for milling tool
/// Generated from function `MR::exportToolPathToGCode`.
/// Parameter `commands` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_ObjectGcode_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_ObjectGcode *MR_exportToolPathToGCode(const MR_std_vector_MR_GCommand *commands);

// interpolates several points lying on the same straight line with one move
/// Generated from function `MR::interpolateLines`.
/// Parameter `commands` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_interpolateLines(MR_std_vector_MR_GCommand *commands, const MR_LineInterpolationParams *params, MR_Axis axis);

// interpolates given path with arcs
/// Generated from function `MR::interpolateArcs`.
/// Parameter `commands` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_interpolateArcs(MR_std_vector_MR_GCommand *commands, const MR_ArcInterpolationParams *params, MR_Axis axis);

// makes the given selection more smooth with shifthing a boundary of the selection outside and back. Input mesh is changed because we have to cut new edges along the new boundaries
// \param expandOffset defines how much the boundary is expanded
// \param expandOffset defines how much the boundary is shrinked after that
/// Generated from function `MR::smoothSelection`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `region` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_FaceBitSet_Destroy()` to free it when you're done using it.
MRC_API MR_FaceBitSet *MR_smoothSelection(MR_Mesh *mesh, const MR_FaceBitSet *region, float expandOffset, float shrinkOffset);

#ifdef __cplusplus
} // extern "C"
#endif
