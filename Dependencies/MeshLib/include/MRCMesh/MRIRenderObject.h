// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRRenderModelParameters.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMesh/MRVector4.h>
#include <MRCMesh/MRViewportId.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Matrix4f MR_Matrix4f; // Defined in `#include <MRCMesh/MRMatrix4.h>`.
typedef struct MR_Plane3f MR_Plane3f; // Defined in `#include <MRCMesh/MRPlane3.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_BasicUiRenderTask MR_std_vector_std_shared_ptr_MR_BasicUiRenderTask; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_BasicUiRenderTask.h>`.


typedef int32_t MR_DepthFunction;
enum // MR_DepthFunction
{
    MR_DepthFunction_Never = 0,
    MR_DepthFunction_Less = 1,
    MR_DepthFunction_Equal = 2,
    MR_DepthFunction_Greater = 4,
    MR_DepthFunction_LessOrEqual = 3,
    MR_DepthFunction_GreaterOrEqual = 6,
    MR_DepthFunction_NotEqual = 5,
    MR_DepthFunction_Always = 7,
    // usually "Less" but may differ for different object types
    MR_DepthFunction_Default = 8,
};

/// Common rendering parameters for meshes and UI.
/// Generated from class `MR::BaseRenderParams`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ModelBaseRenderParams`
///     `MR::UiRenderParams`
///   Indirect: (non-virtual)
///     `MR::ModelRenderParams`
typedef struct MR_BaseRenderParams MR_BaseRenderParams;

/// Common rendering parameters for meshes (both for primary rendering and for the picker;
/// the picker uses this as is while the primary rendering adds more fields).
/// Generated from class `MR::ModelBaseRenderParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BaseRenderParams`
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::ModelRenderParams`
typedef struct MR_ModelBaseRenderParams MR_ModelBaseRenderParams;

/// Mesh rendering parameters for primary rendering (as opposed to the picker).
/// Generated from class `MR::ModelRenderParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ModelBaseRenderParams`
///   Indirect: (non-virtual)
///     `MR::BaseRenderParams`
typedef struct MR_ModelRenderParams MR_ModelRenderParams;

/// `IRenderObject::renderUi()` can emit zero or more or more of those tasks. They are sorted by depth every frame.
/// Generated from class `MR::BasicUiRenderTask`.
typedef struct MR_BasicUiRenderTask MR_BasicUiRenderTask;

typedef int32_t MR_BasicUiRenderTask_InteractionMask;
enum // MR_BasicUiRenderTask_InteractionMask
{
    MR_BasicUiRenderTask_InteractionMask_mouseHover = 1,
    MR_BasicUiRenderTask_InteractionMask_mouseScroll = 2,
};

/// Generated from class `MR::BasicUiRenderTask::BackwardPassParams`.
typedef struct MR_BasicUiRenderTask_BackwardPassParams MR_BasicUiRenderTask_BackwardPassParams;

/// Generated from class `MR::UiRenderParams`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::BaseRenderParams`
typedef struct MR_UiRenderParams MR_UiRenderParams;

/// Generated from class `MR::UiRenderManager`.
typedef struct MR_UiRenderManager MR_UiRenderManager;

/// Generated from class `MR::IRenderObject`.
typedef struct MR_IRenderObject MR_IRenderObject;

/// Generated from function `MR::operator&`.
MRC_API MR_DepthFunction MR_bitand_MR_DepthFunction(MR_DepthFunction a, MR_DepthFunction b);

/// Generated from function `MR::operator|`.
MRC_API MR_DepthFunction MR_bitor_MR_DepthFunction(MR_DepthFunction a, MR_DepthFunction b);

/// Generated from function `MR::operator~`.
MRC_API MR_DepthFunction MR_compl_MR_DepthFunction(MR_DepthFunction a);

/// Generated from function `MR::operator&=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DepthFunction *MR_bitand_assign_MR_DepthFunction(MR_DepthFunction *a, MR_DepthFunction b);

/// Generated from function `MR::operator|=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DepthFunction *MR_bitor_assign_MR_DepthFunction(MR_DepthFunction *a, MR_DepthFunction b);

/// Generated from function `MR::operator*`.
MRC_API MR_DepthFunction MR_mul_MR_DepthFunction_bool(MR_DepthFunction a, bool b);

/// Generated from function `MR::operator*`.
MRC_API MR_DepthFunction MR_mul_bool_MR_DepthFunction(bool a, MR_DepthFunction b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DepthFunction *MR_mul_assign_MR_DepthFunction_bool(MR_DepthFunction *a, bool b);

/// Returns a pointer to a member variable of class `MR::BaseRenderParams` named `viewMatrix`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix4f *MR_BaseRenderParams_Get_viewMatrix(const MR_BaseRenderParams *_this);

/// Returns a pointer to a member variable of class `MR::BaseRenderParams` named `projMatrix`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix4f *MR_BaseRenderParams_Get_projMatrix(const MR_BaseRenderParams *_this);

// id of the viewport
/// Returns a pointer to a member variable of class `MR::BaseRenderParams` named `viewportId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ViewportId *MR_BaseRenderParams_Get_viewportId(const MR_BaseRenderParams *_this);

// id of the viewport
/// Modifies a member variable of class `MR::BaseRenderParams` named `viewportId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BaseRenderParams_Set_viewportId(MR_BaseRenderParams *_this, MR_ViewportId value);

// id of the viewport
/// Returns a mutable pointer to a member variable of class `MR::BaseRenderParams` named `viewportId`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ViewportId *MR_BaseRenderParams_GetMutable_viewportId(MR_BaseRenderParams *_this);

// viewport x0, y0, width, height
/// Returns a pointer to a member variable of class `MR::BaseRenderParams` named `viewport`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector4i *MR_BaseRenderParams_Get_viewport(const MR_BaseRenderParams *_this);

// viewport x0, y0, width, height
/// Modifies a member variable of class `MR::BaseRenderParams` named `viewport`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BaseRenderParams_Set_viewport(MR_BaseRenderParams *_this, MR_Vector4i value);

// viewport x0, y0, width, height
/// Returns a mutable pointer to a member variable of class `MR::BaseRenderParams` named `viewport`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector4i *MR_BaseRenderParams_GetMutable_viewport(MR_BaseRenderParams *_this);

/// Generated from a constructor of class `MR::BaseRenderParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BaseRenderParams_Destroy()` to free it when you're done using it.
MRC_API MR_BaseRenderParams *MR_BaseRenderParams_ConstructFromAnother(const MR_BaseRenderParams *_other);

/// Constructs `MR::BaseRenderParams` elementwise.
/// Parameter `viewMatrix` can not be null. It is a single object.
/// Parameter `projMatrix` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BaseRenderParams_Destroy()` to free it when you're done using it.
MRC_API MR_BaseRenderParams *MR_BaseRenderParams_ConstructFrom(const MR_Matrix4f *viewMatrix, const MR_Matrix4f *projMatrix, MR_ViewportId viewportId, MR_Vector4i viewport);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BaseRenderParams *MR_BaseRenderParams_OffsetPtr(const MR_BaseRenderParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BaseRenderParams *MR_BaseRenderParams_OffsetMutablePtr(MR_BaseRenderParams *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::BaseRenderParams` to a derived class `MR::ModelBaseRenderParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ModelBaseRenderParams *MR_BaseRenderParams_StaticDowncastTo_MR_ModelBaseRenderParams(const MR_BaseRenderParams *object);

/// Downcasts an instance of `MR::BaseRenderParams` to a derived class `MR::ModelBaseRenderParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ModelBaseRenderParams *MR_BaseRenderParams_MutableStaticDowncastTo_MR_ModelBaseRenderParams(MR_BaseRenderParams *object);

/// Downcasts an instance of `MR::BaseRenderParams` to a derived class `MR::ModelRenderParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ModelRenderParams *MR_BaseRenderParams_StaticDowncastTo_MR_ModelRenderParams(const MR_BaseRenderParams *object);

/// Downcasts an instance of `MR::BaseRenderParams` to a derived class `MR::ModelRenderParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ModelRenderParams *MR_BaseRenderParams_MutableStaticDowncastTo_MR_ModelRenderParams(MR_BaseRenderParams *object);

/// Downcasts an instance of `MR::BaseRenderParams` to a derived class `MR::UiRenderParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_UiRenderParams *MR_BaseRenderParams_StaticDowncastTo_MR_UiRenderParams(const MR_BaseRenderParams *object);

/// Downcasts an instance of `MR::BaseRenderParams` to a derived class `MR::UiRenderParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_UiRenderParams *MR_BaseRenderParams_MutableStaticDowncastTo_MR_UiRenderParams(MR_BaseRenderParams *object);

/// Destroys a heap-allocated instance of `MR_BaseRenderParams`. Does nothing if the pointer is null.
MRC_API void MR_BaseRenderParams_Destroy(const MR_BaseRenderParams *_this);

/// Destroys a heap-allocated array of `MR_BaseRenderParams`. Does nothing if the pointer is null.
MRC_API void MR_BaseRenderParams_DestroyArray(const MR_BaseRenderParams *_this);

/// Returns a pointer to a member variable of class `MR::ModelBaseRenderParams` named `modelMatrix`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix4f *MR_ModelBaseRenderParams_Get_modelMatrix(const MR_ModelBaseRenderParams *_this);

// viewport clip plane (it is not applied while object does not have clipping flag set)
/// Returns a pointer to a member variable of class `MR::ModelBaseRenderParams` named `clipPlane`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Plane3f *MR_ModelBaseRenderParams_Get_clipPlane(const MR_ModelBaseRenderParams *_this);

/// Returns a pointer to a member variable of class `MR::ModelBaseRenderParams` named `depthFunction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_DepthFunction *MR_ModelBaseRenderParams_Get_depthFunction(const MR_ModelBaseRenderParams *_this);

/// Modifies a member variable of class `MR::ModelBaseRenderParams` named `depthFunction`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ModelBaseRenderParams_Set_depthFunction(MR_ModelBaseRenderParams *_this, MR_DepthFunction value);

/// Returns a mutable pointer to a member variable of class `MR::ModelBaseRenderParams` named `depthFunction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DepthFunction *MR_ModelBaseRenderParams_GetMutable_depthFunction(MR_ModelBaseRenderParams *_this);

/// Generated from a constructor of class `MR::ModelBaseRenderParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ModelBaseRenderParams_Destroy()` to free it when you're done using it.
MRC_API MR_ModelBaseRenderParams *MR_ModelBaseRenderParams_ConstructFromAnother(const MR_ModelBaseRenderParams *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ModelBaseRenderParams *MR_ModelBaseRenderParams_OffsetPtr(const MR_ModelBaseRenderParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ModelBaseRenderParams *MR_ModelBaseRenderParams_OffsetMutablePtr(MR_ModelBaseRenderParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ModelBaseRenderParams` to its base class `MR::BaseRenderParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_BaseRenderParams *MR_ModelBaseRenderParams_UpcastTo_MR_BaseRenderParams(const MR_ModelBaseRenderParams *object);

/// Upcasts an instance of `MR::ModelBaseRenderParams` to its base class `MR::BaseRenderParams`.
MRC_API MR_BaseRenderParams *MR_ModelBaseRenderParams_MutableUpcastTo_MR_BaseRenderParams(MR_ModelBaseRenderParams *object);

/// Downcasts an instance of `MR::ModelBaseRenderParams` to a derived class `MR::ModelRenderParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_ModelRenderParams *MR_ModelBaseRenderParams_StaticDowncastTo_MR_ModelRenderParams(const MR_ModelBaseRenderParams *object);

/// Downcasts an instance of `MR::ModelBaseRenderParams` to a derived class `MR::ModelRenderParams`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_ModelRenderParams *MR_ModelBaseRenderParams_MutableStaticDowncastTo_MR_ModelRenderParams(MR_ModelBaseRenderParams *object);

/// Destroys a heap-allocated instance of `MR_ModelBaseRenderParams`. Does nothing if the pointer is null.
MRC_API void MR_ModelBaseRenderParams_Destroy(const MR_ModelBaseRenderParams *_this);

/// Destroys a heap-allocated array of `MR_ModelBaseRenderParams`. Does nothing if the pointer is null.
MRC_API void MR_ModelBaseRenderParams_DestroyArray(const MR_ModelBaseRenderParams *_this);

// normal matrix, only necessary for triangles rendering
/// Returns a pointer to a member variable of class `MR::ModelRenderParams` named `normMatrixPtr`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix4f *const *MR_ModelRenderParams_Get_normMatrixPtr(const MR_ModelRenderParams *_this);

// normal matrix, only necessary for triangles rendering
/// Modifies a member variable of class `MR::ModelRenderParams` named `normMatrixPtr`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ModelRenderParams_Set_normMatrixPtr(MR_ModelRenderParams *_this, const MR_Matrix4f *value);

// normal matrix, only necessary for triangles rendering
/// Returns a mutable pointer to a member variable of class `MR::ModelRenderParams` named `normMatrixPtr`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Matrix4f **MR_ModelRenderParams_GetMutable_normMatrixPtr(MR_ModelRenderParams *_this);

// position of light source
/// Returns a pointer to a member variable of class `MR::ModelRenderParams` named `lightPos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_ModelRenderParams_Get_lightPos(const MR_ModelRenderParams *_this);

// position of light source
/// Modifies a member variable of class `MR::ModelRenderParams` named `lightPos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ModelRenderParams_Set_lightPos(MR_ModelRenderParams *_this, MR_Vector3f value);

// position of light source
/// Returns a mutable pointer to a member variable of class `MR::ModelRenderParams` named `lightPos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_ModelRenderParams_GetMutable_lightPos(MR_ModelRenderParams *_this);

// if true, the object can use the alpha sorting shader if it wants to
/// Returns a pointer to a member variable of class `MR::ModelRenderParams` named `allowAlphaSort`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_ModelRenderParams_Get_allowAlphaSort(const MR_ModelRenderParams *_this);

// if true, the object can use the alpha sorting shader if it wants to
/// Modifies a member variable of class `MR::ModelRenderParams` named `allowAlphaSort`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ModelRenderParams_Set_allowAlphaSort(MR_ModelRenderParams *_this, bool value);

// if true, the object can use the alpha sorting shader if it wants to
/// Returns a mutable pointer to a member variable of class `MR::ModelRenderParams` named `allowAlphaSort`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_ModelRenderParams_GetMutable_allowAlphaSort(MR_ModelRenderParams *_this);

// Only perform rendering if `bool( passMask & desiredPass )` is true.
/// Returns a pointer to a member variable of class `MR::ModelRenderParams` named `passMask`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_RenderModelPassMask *MR_ModelRenderParams_Get_passMask(const MR_ModelRenderParams *_this);

// Only perform rendering if `bool( passMask & desiredPass )` is true.
/// Modifies a member variable of class `MR::ModelRenderParams` named `passMask`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ModelRenderParams_Set_passMask(MR_ModelRenderParams *_this, MR_RenderModelPassMask value);

// Only perform rendering if `bool( passMask & desiredPass )` is true.
/// Returns a mutable pointer to a member variable of class `MR::ModelRenderParams` named `passMask`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RenderModelPassMask *MR_ModelRenderParams_GetMutable_passMask(MR_ModelRenderParams *_this);

/// Generated from a constructor of class `MR::ModelRenderParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ModelRenderParams_Destroy()` to free it when you're done using it.
MRC_API MR_ModelRenderParams *MR_ModelRenderParams_ConstructFromAnother(const MR_ModelRenderParams *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ModelRenderParams *MR_ModelRenderParams_OffsetPtr(const MR_ModelRenderParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ModelRenderParams *MR_ModelRenderParams_OffsetMutablePtr(MR_ModelRenderParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ModelRenderParams` to its base class `MR::BaseRenderParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_BaseRenderParams *MR_ModelRenderParams_UpcastTo_MR_BaseRenderParams(const MR_ModelRenderParams *object);

/// Upcasts an instance of `MR::ModelRenderParams` to its base class `MR::BaseRenderParams`.
MRC_API MR_BaseRenderParams *MR_ModelRenderParams_MutableUpcastTo_MR_BaseRenderParams(MR_ModelRenderParams *object);

/// Upcasts an instance of `MR::ModelRenderParams` to its base class `MR::ModelBaseRenderParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_ModelBaseRenderParams *MR_ModelRenderParams_UpcastTo_MR_ModelBaseRenderParams(const MR_ModelRenderParams *object);

/// Upcasts an instance of `MR::ModelRenderParams` to its base class `MR::ModelBaseRenderParams`.
MRC_API MR_ModelBaseRenderParams *MR_ModelRenderParams_MutableUpcastTo_MR_ModelBaseRenderParams(MR_ModelRenderParams *object);

/// Destroys a heap-allocated instance of `MR_ModelRenderParams`. Does nothing if the pointer is null.
MRC_API void MR_ModelRenderParams_Destroy(const MR_ModelRenderParams *_this);

/// Destroys a heap-allocated array of `MR_ModelRenderParams`. Does nothing if the pointer is null.
MRC_API void MR_ModelRenderParams_DestroyArray(const MR_ModelRenderParams *_this);

/// The tasks are sorted by this depth, descending (larger depth = further away).
/// Returns a pointer to a member variable of class `MR::BasicUiRenderTask` named `renderTaskDepth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_BasicUiRenderTask_Get_renderTaskDepth(const MR_BasicUiRenderTask *_this);

/// The tasks are sorted by this depth, descending (larger depth = further away).
/// Modifies a member variable of class `MR::BasicUiRenderTask` named `renderTaskDepth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BasicUiRenderTask_Set_renderTaskDepth(MR_BasicUiRenderTask *_this, float value);

/// The tasks are sorted by this depth, descending (larger depth = further away).
/// Returns a mutable pointer to a member variable of class `MR::BasicUiRenderTask` named `renderTaskDepth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_BasicUiRenderTask_GetMutable_renderTaskDepth(MR_BasicUiRenderTask *_this);

/// Destroys a heap-allocated instance of `MR_BasicUiRenderTask`. Does nothing if the pointer is null.
MRC_API void MR_BasicUiRenderTask_Destroy(const MR_BasicUiRenderTask *_this);

/// Destroys a heap-allocated array of `MR_BasicUiRenderTask`. Does nothing if the pointer is null.
MRC_API void MR_BasicUiRenderTask_DestroyArray(const MR_BasicUiRenderTask *_this);

/// This is an optional early pass, where you can claim exclusive control over the mouse.
/// This pass is executed in reverse draw order.
/// Generated from a method of class `MR::BasicUiRenderTask` named `earlyBackwardPass`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
MRC_API void MR_BasicUiRenderTask_earlyBackwardPass(MR_BasicUiRenderTask *_this, const MR_BasicUiRenderTask_BackwardPassParams *params);

/// This is the main rendering pass.
/// Generated from a method of class `MR::BasicUiRenderTask` named `renderPass`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BasicUiRenderTask_renderPass(MR_BasicUiRenderTask *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BasicUiRenderTask *MR_BasicUiRenderTask_OffsetPtr(const MR_BasicUiRenderTask *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BasicUiRenderTask *MR_BasicUiRenderTask_OffsetMutablePtr(MR_BasicUiRenderTask *ptr, ptrdiff_t i);

/// Generated from function `MR::operator&`.
MRC_API MR_BasicUiRenderTask_InteractionMask MR_bitand_MR_BasicUiRenderTask_InteractionMask(MR_BasicUiRenderTask_InteractionMask a, MR_BasicUiRenderTask_InteractionMask b);

/// Generated from function `MR::operator|`.
MRC_API MR_BasicUiRenderTask_InteractionMask MR_bitor_MR_BasicUiRenderTask_InteractionMask(MR_BasicUiRenderTask_InteractionMask a, MR_BasicUiRenderTask_InteractionMask b);

/// Generated from function `MR::operator~`.
MRC_API MR_BasicUiRenderTask_InteractionMask MR_compl_MR_BasicUiRenderTask_InteractionMask(MR_BasicUiRenderTask_InteractionMask a);

/// Generated from function `MR::operator&=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BasicUiRenderTask_InteractionMask *MR_bitand_assign_MR_BasicUiRenderTask_InteractionMask(MR_BasicUiRenderTask_InteractionMask *a, MR_BasicUiRenderTask_InteractionMask b);

/// Generated from function `MR::operator|=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BasicUiRenderTask_InteractionMask *MR_bitor_assign_MR_BasicUiRenderTask_InteractionMask(MR_BasicUiRenderTask_InteractionMask *a, MR_BasicUiRenderTask_InteractionMask b);

/// Generated from function `MR::operator*`.
MRC_API MR_BasicUiRenderTask_InteractionMask MR_mul_MR_BasicUiRenderTask_InteractionMask_bool(MR_BasicUiRenderTask_InteractionMask a, bool b);

/// Generated from function `MR::operator*`.
MRC_API MR_BasicUiRenderTask_InteractionMask MR_mul_bool_MR_BasicUiRenderTask_InteractionMask(bool a, MR_BasicUiRenderTask_InteractionMask b);

/// Generated from function `MR::operator*=`.
/// Parameter `a` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BasicUiRenderTask_InteractionMask *MR_mul_assign_MR_BasicUiRenderTask_InteractionMask_bool(MR_BasicUiRenderTask_InteractionMask *a, bool b);

// Which interactions should be blocked by this object.
// This is passed along between all `renderUi()` calls in a single frame, and then the end result is used.
/// Returns a pointer to a member variable of class `MR::BasicUiRenderTask::BackwardPassParams` named `consumedInteractions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_BasicUiRenderTask_InteractionMask *MR_BasicUiRenderTask_BackwardPassParams_Get_consumedInteractions(const MR_BasicUiRenderTask_BackwardPassParams *_this);

// Which interactions should be blocked by this object.
// This is passed along between all `renderUi()` calls in a single frame, and then the end result is used.
/// Modifies a member variable of class `MR::BasicUiRenderTask::BackwardPassParams` named `consumedInteractions`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_BasicUiRenderTask_BackwardPassParams_Set_consumedInteractions(MR_BasicUiRenderTask_BackwardPassParams *_this, MR_BasicUiRenderTask_InteractionMask value);

// Which interactions should be blocked by this object.
// This is passed along between all `renderUi()` calls in a single frame, and then the end result is used.
/// Returns a mutable pointer to a member variable of class `MR::BasicUiRenderTask::BackwardPassParams` named `consumedInteractions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BasicUiRenderTask_InteractionMask *MR_BasicUiRenderTask_BackwardPassParams_GetMutable_consumedInteractions(MR_BasicUiRenderTask_BackwardPassParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BasicUiRenderTask_BackwardPassParams_Destroy()` to free it when you're done using it.
MRC_API MR_BasicUiRenderTask_BackwardPassParams *MR_BasicUiRenderTask_BackwardPassParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_BasicUiRenderTask_BackwardPassParams_DestroyArray()`.
/// Use `MR_BasicUiRenderTask_BackwardPassParams_OffsetMutablePtr()` and `MR_BasicUiRenderTask_BackwardPassParams_OffsetPtr()` to access the array elements.
MRC_API MR_BasicUiRenderTask_BackwardPassParams *MR_BasicUiRenderTask_BackwardPassParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::BasicUiRenderTask::BackwardPassParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BasicUiRenderTask_BackwardPassParams_Destroy()` to free it when you're done using it.
MRC_API MR_BasicUiRenderTask_BackwardPassParams *MR_BasicUiRenderTask_BackwardPassParams_ConstructFrom(MR_BasicUiRenderTask_InteractionMask consumedInteractions);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_BasicUiRenderTask_BackwardPassParams *MR_BasicUiRenderTask_BackwardPassParams_OffsetPtr(const MR_BasicUiRenderTask_BackwardPassParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_BasicUiRenderTask_BackwardPassParams *MR_BasicUiRenderTask_BackwardPassParams_OffsetMutablePtr(MR_BasicUiRenderTask_BackwardPassParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::BasicUiRenderTask::BackwardPassParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BasicUiRenderTask_BackwardPassParams_Destroy()` to free it when you're done using it.
MRC_API MR_BasicUiRenderTask_BackwardPassParams *MR_BasicUiRenderTask_BackwardPassParams_ConstructFromAnother(const MR_BasicUiRenderTask_BackwardPassParams *_other);

/// Destroys a heap-allocated instance of `MR_BasicUiRenderTask_BackwardPassParams`. Does nothing if the pointer is null.
MRC_API void MR_BasicUiRenderTask_BackwardPassParams_Destroy(const MR_BasicUiRenderTask_BackwardPassParams *_this);

/// Destroys a heap-allocated array of `MR_BasicUiRenderTask_BackwardPassParams`. Does nothing if the pointer is null.
MRC_API void MR_BasicUiRenderTask_BackwardPassParams_DestroyArray(const MR_BasicUiRenderTask_BackwardPassParams *_this);

/// Generated from a method of class `MR::BasicUiRenderTask::BackwardPassParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_BasicUiRenderTask_BackwardPassParams *MR_BasicUiRenderTask_BackwardPassParams_AssignFromAnother(MR_BasicUiRenderTask_BackwardPassParams *_this, const MR_BasicUiRenderTask_BackwardPassParams *_other);

// If nothing else is hovered, this returns true and writes `mouseHover` to `consumedInteractions`.
/// Generated from a method of class `MR::BasicUiRenderTask::BackwardPassParams` named `tryConsumeMouseHover`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_BasicUiRenderTask_BackwardPassParams_tryConsumeMouseHover(const MR_BasicUiRenderTask_BackwardPassParams *_this);

/// Multiply all your hardcoded sizes by this amount.
/// Returns a pointer to a member variable of class `MR::UiRenderParams` named `scale`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_UiRenderParams_Get_scale(const MR_UiRenderParams *_this);

/// Multiply all your hardcoded sizes by this amount.
/// Modifies a member variable of class `MR::UiRenderParams` named `scale`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UiRenderParams_Set_scale(MR_UiRenderParams *_this, float value);

/// Multiply all your hardcoded sizes by this amount.
/// Returns a mutable pointer to a member variable of class `MR::UiRenderParams` named `scale`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_UiRenderParams_GetMutable_scale(MR_UiRenderParams *_this);

// Those are Z-sorted and then executed.
/// Returns a pointer to a member variable of class `MR::UiRenderParams` named `tasks`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_shared_ptr_MR_BasicUiRenderTask *const *MR_UiRenderParams_Get_tasks(const MR_UiRenderParams *_this);

// Those are Z-sorted and then executed.
/// Modifies a member variable of class `MR::UiRenderParams` named `tasks`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UiRenderParams_Set_tasks(MR_UiRenderParams *_this, MR_std_vector_std_shared_ptr_MR_BasicUiRenderTask *value);

// Those are Z-sorted and then executed.
/// Returns a mutable pointer to a member variable of class `MR::UiRenderParams` named `tasks`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_shared_ptr_MR_BasicUiRenderTask **MR_UiRenderParams_GetMutable_tasks(MR_UiRenderParams *_this);

/// Generated from a constructor of class `MR::UiRenderParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UiRenderParams_Destroy()` to free it when you're done using it.
MRC_API MR_UiRenderParams *MR_UiRenderParams_ConstructFromAnother(const MR_UiRenderParams *_other);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UiRenderParams *MR_UiRenderParams_OffsetPtr(const MR_UiRenderParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UiRenderParams *MR_UiRenderParams_OffsetMutablePtr(MR_UiRenderParams *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::UiRenderParams` to its base class `MR::BaseRenderParams`.
/// This version is acting on mutable pointers.
MRC_API const MR_BaseRenderParams *MR_UiRenderParams_UpcastTo_MR_BaseRenderParams(const MR_UiRenderParams *object);

/// Upcasts an instance of `MR::UiRenderParams` to its base class `MR::BaseRenderParams`.
MRC_API MR_BaseRenderParams *MR_UiRenderParams_MutableUpcastTo_MR_BaseRenderParams(MR_UiRenderParams *object);

/// Destroys a heap-allocated instance of `MR_UiRenderParams`. Does nothing if the pointer is null.
MRC_API void MR_UiRenderParams_Destroy(const MR_UiRenderParams *_this);

/// Destroys a heap-allocated array of `MR_UiRenderParams`. Does nothing if the pointer is null.
MRC_API void MR_UiRenderParams_DestroyArray(const MR_UiRenderParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_UiRenderManager_Destroy()` to free it when you're done using it.
MRC_API MR_UiRenderManager *MR_UiRenderManager_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_UiRenderManager_DestroyArray()`.
/// Use `MR_UiRenderManager_OffsetMutablePtr()` and `MR_UiRenderManager_OffsetPtr()` to access the array elements.
MRC_API MR_UiRenderManager *MR_UiRenderManager_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_UiRenderManager *MR_UiRenderManager_OffsetPtr(const MR_UiRenderManager *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_UiRenderManager *MR_UiRenderManager_OffsetMutablePtr(MR_UiRenderManager *ptr, ptrdiff_t i);

/// Destroys a heap-allocated instance of `MR_UiRenderManager`. Does nothing if the pointer is null.
MRC_API void MR_UiRenderManager_Destroy(const MR_UiRenderManager *_this);

/// Destroys a heap-allocated array of `MR_UiRenderManager`. Does nothing if the pointer is null.
MRC_API void MR_UiRenderManager_DestroyArray(const MR_UiRenderManager *_this);

// This is called before doing `IRenderObject::renderUi()` on even object in a viewport. Each viewport is rendered separately.
/// Generated from a method of class `MR::UiRenderManager` named `preRenderViewport`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UiRenderManager_preRenderViewport(MR_UiRenderManager *_this, MR_ViewportId viewport);

// This is called after doing `IRenderObject::renderUi()` on even object in a viewport. Each viewport is rendered separately.
/// Generated from a method of class `MR::UiRenderManager` named `postRenderViewport`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_UiRenderManager_postRenderViewport(MR_UiRenderManager *_this, MR_ViewportId viewport);

// Returns the parameters for the `IRenderObject::earlyBackwardPass()`.
// This will be called exactly once per viewport, each time the UI in it is rendered.
/// Generated from a method of class `MR::UiRenderManager` named `beginBackwardPass`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `tasks` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_BasicUiRenderTask_BackwardPassParams_Destroy()` to free it when you're done using it.
MRC_API MR_BasicUiRenderTask_BackwardPassParams *MR_UiRenderManager_beginBackwardPass(MR_UiRenderManager *_this, MR_ViewportId viewport, MR_std_vector_std_shared_ptr_MR_BasicUiRenderTask *tasks);

// After the backward pass is performed, the parameters should be passed back into this function.
/// Generated from a method of class `MR::UiRenderManager` named `finishBackwardPass`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
MRC_API void MR_UiRenderManager_finishBackwardPass(MR_UiRenderManager *_this, const MR_BasicUiRenderTask_BackwardPassParams *params);

/// Destroys a heap-allocated instance of `MR_IRenderObject`. Does nothing if the pointer is null.
MRC_API void MR_IRenderObject_Destroy(const MR_IRenderObject *_this);

/// Destroys a heap-allocated array of `MR_IRenderObject`. Does nothing if the pointer is null.
MRC_API void MR_IRenderObject_DestroyArray(const MR_IRenderObject *_this);

// Returns true if something was rendered, or false if nothing to render.
/// Generated from a method of class `MR::IRenderObject` named `render`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
MRC_API bool MR_IRenderObject_render(MR_IRenderObject *_this, const MR_ModelRenderParams *params);

/// Generated from a method of class `MR::IRenderObject` named `renderPicker`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
MRC_API void MR_IRenderObject_renderPicker(MR_IRenderObject *_this, const MR_ModelBaseRenderParams *params, uint32_t geomId);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::IRenderObject` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_IRenderObject_heapBytes(const MR_IRenderObject *_this);

/// returns the amount of memory this object allocated in OpenGL
/// Generated from a method of class `MR::IRenderObject` named `glBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_IRenderObject_glBytes(const MR_IRenderObject *_this);

/// binds all data for this render object, not to bind ever again (until object becomes dirty)
/// Generated from a method of class `MR::IRenderObject` named `forceBindAll`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_IRenderObject_forceBindAll(MR_IRenderObject *_this);

/// Render the UI. This is repeated for each viewport.
/// Here you can either render immediately, or insert a task into `params.tasks`, which get Z-sorted.
/// * `params` will remain alive as long as the tasks are used.
/// * You'll have at most one living task at a time, so you can write a non-owning pointer to an internal task.
/// Generated from a method of class `MR::IRenderObject` named `renderUi`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
MRC_API void MR_IRenderObject_renderUi(MR_IRenderObject *_this, const MR_UiRenderParams *params);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_IRenderObject *MR_IRenderObject_OffsetPtr(const MR_IRenderObject *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_IRenderObject *MR_IRenderObject_OffsetMutablePtr(MR_IRenderObject *ptr, ptrdiff_t i);

#ifdef __cplusplus
} // extern "C"
#endif
