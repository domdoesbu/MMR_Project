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

typedef struct MR_Polyline2 MR_Polyline2; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Polyline3 MR_Polyline3; // Defined in `#include <MRCMesh/MRPolyline.h>`.
typedef struct MR_Vector_MR_QuadraticForm2f_MR_VertId MR_Vector_MR_QuadraticForm2f_MR_VertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Vector_MR_QuadraticForm3f_MR_VertId MR_Vector_MR_QuadraticForm3f_MR_VertId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_std_function_bool_from_MR_EdgeId_const_MR_Vector2f_ref MR_std_function_bool_from_MR_EdgeId_const_MR_Vector2f_ref; // Defined in `#include <MRCMisc/std_function_bool_from_MR_EdgeId_const_MR_Vector2f_ref.h>`.
typedef struct MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref.h>`.
typedef struct MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector2f_ref MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector2f_ref; // Defined in `#include <MRCMisc/std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector2f_ref.h>`.
typedef struct MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref; // Defined in `#include <MRCMisc/std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref.h>`.
typedef struct MR_std_vector_MR_Vector2f MR_std_vector_MR_Vector2f; // Defined in `#include <MRCMisc/std_vector_MR_Vector2f.h>`.
typedef struct MR_std_vector_MR_Vector3f MR_std_vector_MR_Vector3f; // Defined in `#include <MRCMisc/std_vector_MR_Vector3f.h>`.


/**
* \struct MR::DecimatePolylineSettings
* \brief Parameters structure for MR::decimatePolyline
*
*
* \sa \ref decimatePolyline
*/
/// Generated from class `MR::DecimatePolylineSettings<MR::Vector2f>`.
typedef struct MR_DecimatePolylineSettings_MR_Vector2f MR_DecimatePolylineSettings_MR_Vector2f;

/**
* \struct MR::DecimatePolylineSettings
* \brief Parameters structure for MR::decimatePolyline
*
*
* \sa \ref decimatePolyline
*/
/// Generated from class `MR::DecimatePolylineSettings<MR::Vector3f>`.
typedef struct MR_DecimatePolylineSettings_MR_Vector3f MR_DecimatePolylineSettings_MR_Vector3f;

/**
* \struct MR::DecimatePolylineResult
* \brief Results of MR::decimateContour
*/
/// Generated from class `MR::DecimatePolylineResult`.
typedef struct MR_DecimatePolylineResult MR_DecimatePolylineResult;

/// Limit from above on the maximum distance from moved vertices to original contour
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `maxError`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimatePolylineSettings_MR_Vector2f_Get_maxError(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Limit from above on the maximum distance from moved vertices to original contour
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `maxError`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_maxError(MR_DecimatePolylineSettings_MR_Vector2f *_this, float value);

/// Limit from above on the maximum distance from moved vertices to original contour
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `maxError`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_maxError(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Maximal possible edge length created during decimation
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimatePolylineSettings_MR_Vector2f_Get_maxEdgeLen(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Maximal possible edge length created during decimation
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_maxEdgeLen(MR_DecimatePolylineSettings_MR_Vector2f *_this, float value);

/// Maximal possible edge length created during decimation
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_maxEdgeLen(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Stabilizer is dimensionless coefficient.
/// The larger is stabilizer, the more Decimator will strive to retain the density of input points.
/// If stabilizer is zero, then only the shape of input line will be preserved.
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimatePolylineSettings_MR_Vector2f_Get_stabilizer(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Stabilizer is dimensionless coefficient.
/// The larger is stabilizer, the more Decimator will strive to retain the density of input points.
/// If stabilizer is zero, then only the shape of input line will be preserved.
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_stabilizer(MR_DecimatePolylineSettings_MR_Vector2f *_this, float value);

/// Stabilizer is dimensionless coefficient.
/// The larger is stabilizer, the more Decimator will strive to retain the density of input points.
/// If stabilizer is zero, then only the shape of input line will be preserved.
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_stabilizer(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// if true then after each edge collapse the position of remaining vertex is optimized to
/// minimize local shape change, if false then the edge is collapsed in one of its vertices, which keeps its position
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `optimizeVertexPos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimatePolylineSettings_MR_Vector2f_Get_optimizeVertexPos(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// if true then after each edge collapse the position of remaining vertex is optimized to
/// minimize local shape change, if false then the edge is collapsed in one of its vertices, which keeps its position
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `optimizeVertexPos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_optimizeVertexPos(MR_DecimatePolylineSettings_MR_Vector2f *_this, bool value);

/// if true then after each edge collapse the position of remaining vertex is optimized to
/// minimize local shape change, if false then the edge is collapsed in one of its vertices, which keeps its position
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `optimizeVertexPos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_optimizeVertexPos(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Limit on the number of deleted vertices
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `maxDeletedVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DecimatePolylineSettings_MR_Vector2f_Get_maxDeletedVertices(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Limit on the number of deleted vertices
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `maxDeletedVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_maxDeletedVertices(MR_DecimatePolylineSettings_MR_Vector2f *_this, int32_t value);

/// Limit on the number of deleted vertices
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `maxDeletedVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_maxDeletedVertices(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Region of the polyline to be decimated, it is updated during the operation
/// Remain nullptr to include the whole polyline
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *const *MR_DecimatePolylineSettings_MR_Vector2f_Get_region(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Region of the polyline to be decimated, it is updated during the operation
/// Remain nullptr to include the whole polyline
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_region(MR_DecimatePolylineSettings_MR_Vector2f *_this, MR_VertBitSet *value);

/// Region of the polyline to be decimated, it is updated during the operation
/// Remain nullptr to include the whole polyline
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet **MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_region(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Whether to allow collapsing edges with at least one vertex on the end of not-closed polyline
/// (or on region boundary if region is given);
/// if touchBdVertices is false then boundary vertices are strictly fixed
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `touchBdVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimatePolylineSettings_MR_Vector2f_Get_touchBdVertices(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Whether to allow collapsing edges with at least one vertex on the end of not-closed polyline
/// (or on region boundary if region is given);
/// if touchBdVertices is false then boundary vertices are strictly fixed
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `touchBdVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_touchBdVertices(MR_DecimatePolylineSettings_MR_Vector2f *_this, bool value);

/// Whether to allow collapsing edges with at least one vertex on the end of not-closed polyline
/// (or on region boundary if region is given);
/// if touchBdVertices is false then boundary vertices are strictly fixed
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `touchBdVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_touchBdVertices(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_MR_EdgeId_const_MR_Vector2f_ref *MR_DecimatePolylineSettings_MR_Vector2f_Get_preCollapse(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_preCollapse(MR_DecimatePolylineSettings_MR_Vector2f *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_MR_EdgeId_const_MR_Vector2f_ref *value);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_MR_EdgeId_const_MR_Vector2f_ref *MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_preCollapse(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/**
* \brief The user can provide this optional callback for adjusting error introduced by this
* edge collapse and the collapse position.
* \details On input the callback gets the squared error and position computed by standard means,
* and callback can modify any of them. The larger the error, the later this edge will be collapsed.
* This callback can be called from many threads in parallel and must be thread-safe.
* This callback can be called many times for each edge before real collapsing, and it is important to make the same adjustment.
*/
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `adjustCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector2f_ref *MR_DecimatePolylineSettings_MR_Vector2f_Get_adjustCollapse(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/**
* \brief The user can provide this optional callback for adjusting error introduced by this
* edge collapse and the collapse position.
* \details On input the callback gets the squared error and position computed by standard means,
* and callback can modify any of them. The larger the error, the later this edge will be collapsed.
* This callback can be called from many threads in parallel and must be thread-safe.
* This callback can be called many times for each edge before real collapsing, and it is important to make the same adjustment.
*/
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `adjustCollapse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_adjustCollapse(MR_DecimatePolylineSettings_MR_Vector2f *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector2f_ref *value);

/**
* \brief The user can provide this optional callback for adjusting error introduced by this
* edge collapse and the collapse position.
* \details On input the callback gets the squared error and position computed by standard means,
* and callback can modify any of them. The larger the error, the later this edge will be collapsed.
* This callback can be called from many threads in parallel and must be thread-safe.
* This callback can be called many times for each edge before real collapsing, and it is important to make the same adjustment.
*/
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `adjustCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector2f_ref *MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_adjustCollapse(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/**
* \brief  If not null, then
* on input: if the vector is not empty then it is taken for initialization instead of form computation for all vertices;
* on output: quadratic form for each remaining vertex is returned there
*/
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `vertForms`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_QuadraticForm2f_MR_VertId *const *MR_DecimatePolylineSettings_MR_Vector2f_Get_vertForms(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/**
* \brief  If not null, then
* on input: if the vector is not empty then it is taken for initialization instead of form computation for all vertices;
* on output: quadratic form for each remaining vertex is returned there
*/
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `vertForms`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Set_vertForms(MR_DecimatePolylineSettings_MR_Vector2f *_this, MR_Vector_MR_QuadraticForm2f_MR_VertId *value);

/**
* \brief  If not null, then
* on input: if the vector is not empty then it is taken for initialization instead of form computation for all vertices;
* on output: quadratic form for each remaining vertex is returned there
*/
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `vertForms`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_QuadraticForm2f_MR_VertId **MR_DecimatePolylineSettings_MR_Vector2f_GetMutable_vertForms(MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineSettings_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineSettings_MR_Vector2f *MR_DecimatePolylineSettings_MR_Vector2f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DecimatePolylineSettings_MR_Vector2f_DestroyArray()`.
/// Use `MR_DecimatePolylineSettings_MR_Vector2f_OffsetMutablePtr()` and `MR_DecimatePolylineSettings_MR_Vector2f_OffsetPtr()` to access the array elements.
MRC_API MR_DecimatePolylineSettings_MR_Vector2f *MR_DecimatePolylineSettings_MR_Vector2f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DecimatePolylineSettings<MR::Vector2f>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineSettings_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineSettings_MR_Vector2f *MR_DecimatePolylineSettings_MR_Vector2f_ConstructFrom(float maxError, float maxEdgeLen, float stabilizer, bool optimizeVertexPos, int32_t maxDeletedVertices, MR_VertBitSet *region, bool touchBdVertices, MR_PassBy preCollapse_pass_by, MR_std_function_bool_from_MR_EdgeId_const_MR_Vector2f_ref *preCollapse, MR_PassBy adjustCollapse_pass_by, MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector2f_ref *adjustCollapse, MR_Vector_MR_QuadraticForm2f_MR_VertId *vertForms);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DecimatePolylineSettings_MR_Vector2f *MR_DecimatePolylineSettings_MR_Vector2f_OffsetPtr(const MR_DecimatePolylineSettings_MR_Vector2f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DecimatePolylineSettings_MR_Vector2f *MR_DecimatePolylineSettings_MR_Vector2f_OffsetMutablePtr(MR_DecimatePolylineSettings_MR_Vector2f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DecimatePolylineSettings<MR::Vector2f>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineSettings_MR_Vector2f_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineSettings_MR_Vector2f *MR_DecimatePolylineSettings_MR_Vector2f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DecimatePolylineSettings_MR_Vector2f *_other);

/// Destroys a heap-allocated instance of `MR_DecimatePolylineSettings_MR_Vector2f`. Does nothing if the pointer is null.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_Destroy(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Destroys a heap-allocated array of `MR_DecimatePolylineSettings_MR_Vector2f`. Does nothing if the pointer is null.
MRC_API void MR_DecimatePolylineSettings_MR_Vector2f_DestroyArray(const MR_DecimatePolylineSettings_MR_Vector2f *_this);

/// Generated from a method of class `MR::DecimatePolylineSettings<MR::Vector2f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DecimatePolylineSettings_MR_Vector2f *MR_DecimatePolylineSettings_MR_Vector2f_AssignFromAnother(MR_DecimatePolylineSettings_MR_Vector2f *_this, MR_PassBy _other_pass_by, MR_DecimatePolylineSettings_MR_Vector2f *_other);

/// Limit from above on the maximum distance from moved vertices to original contour
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `maxError`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimatePolylineSettings_MR_Vector3f_Get_maxError(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Limit from above on the maximum distance from moved vertices to original contour
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `maxError`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_maxError(MR_DecimatePolylineSettings_MR_Vector3f *_this, float value);

/// Limit from above on the maximum distance from moved vertices to original contour
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `maxError`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_maxError(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Maximal possible edge length created during decimation
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimatePolylineSettings_MR_Vector3f_Get_maxEdgeLen(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Maximal possible edge length created during decimation
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_maxEdgeLen(MR_DecimatePolylineSettings_MR_Vector3f *_this, float value);

/// Maximal possible edge length created during decimation
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `maxEdgeLen`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_maxEdgeLen(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Stabilizer is dimensionless coefficient.
/// The larger is stabilizer, the more Decimator will strive to retain the density of input points.
/// If stabilizer is zero, then only the shape of input line will be preserved.
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimatePolylineSettings_MR_Vector3f_Get_stabilizer(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Stabilizer is dimensionless coefficient.
/// The larger is stabilizer, the more Decimator will strive to retain the density of input points.
/// If stabilizer is zero, then only the shape of input line will be preserved.
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_stabilizer(MR_DecimatePolylineSettings_MR_Vector3f *_this, float value);

/// Stabilizer is dimensionless coefficient.
/// The larger is stabilizer, the more Decimator will strive to retain the density of input points.
/// If stabilizer is zero, then only the shape of input line will be preserved.
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_stabilizer(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// if true then after each edge collapse the position of remaining vertex is optimized to
/// minimize local shape change, if false then the edge is collapsed in one of its vertices, which keeps its position
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `optimizeVertexPos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimatePolylineSettings_MR_Vector3f_Get_optimizeVertexPos(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// if true then after each edge collapse the position of remaining vertex is optimized to
/// minimize local shape change, if false then the edge is collapsed in one of its vertices, which keeps its position
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `optimizeVertexPos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_optimizeVertexPos(MR_DecimatePolylineSettings_MR_Vector3f *_this, bool value);

/// if true then after each edge collapse the position of remaining vertex is optimized to
/// minimize local shape change, if false then the edge is collapsed in one of its vertices, which keeps its position
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `optimizeVertexPos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_optimizeVertexPos(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Limit on the number of deleted vertices
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `maxDeletedVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DecimatePolylineSettings_MR_Vector3f_Get_maxDeletedVertices(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Limit on the number of deleted vertices
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `maxDeletedVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_maxDeletedVertices(MR_DecimatePolylineSettings_MR_Vector3f *_this, int32_t value);

/// Limit on the number of deleted vertices
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `maxDeletedVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_maxDeletedVertices(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Region of the polyline to be decimated, it is updated during the operation
/// Remain nullptr to include the whole polyline
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet *const *MR_DecimatePolylineSettings_MR_Vector3f_Get_region(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Region of the polyline to be decimated, it is updated during the operation
/// Remain nullptr to include the whole polyline
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_region(MR_DecimatePolylineSettings_MR_Vector3f *_this, MR_VertBitSet *value);

/// Region of the polyline to be decimated, it is updated during the operation
/// Remain nullptr to include the whole polyline
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VertBitSet **MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_region(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Whether to allow collapsing edges with at least one vertex on the end of not-closed polyline
/// (or on region boundary if region is given);
/// if touchBdVertices is false then boundary vertices are strictly fixed
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `touchBdVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_DecimatePolylineSettings_MR_Vector3f_Get_touchBdVertices(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Whether to allow collapsing edges with at least one vertex on the end of not-closed polyline
/// (or on region boundary if region is given);
/// if touchBdVertices is false then boundary vertices are strictly fixed
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `touchBdVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_touchBdVertices(MR_DecimatePolylineSettings_MR_Vector3f *_this, bool value);

/// Whether to allow collapsing edges with at least one vertex on the end of not-closed polyline
/// (or on region boundary if region is given);
/// if touchBdVertices is false then boundary vertices are strictly fixed
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `touchBdVertices`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_touchBdVertices(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *MR_DecimatePolylineSettings_MR_Vector3f_Get_preCollapse(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_preCollapse(MR_DecimatePolylineSettings_MR_Vector3f *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *value);

/**
* \brief The user can provide this optional callback that is invoked immediately before edge collapse;
* \details It receives the edge being collapsed: its destination vertex will disappear,
* and its origin vertex will get new position (provided as the second argument) after collapse;
* If the callback returns false, then the collapse is prohibited
*/
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `preCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_preCollapse(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/**
* \brief The user can provide this optional callback for adjusting error introduced by this
* edge collapse and the collapse position.
* \details On input the callback gets the squared error and position computed by standard means,
* and callback can modify any of them. The larger the error, the later this edge will be collapsed.
* This callback can be called from many threads in parallel and must be thread-safe.
* This callback can be called many times for each edge before real collapsing, and it is important to make the same adjustment.
*/
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `adjustCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref *MR_DecimatePolylineSettings_MR_Vector3f_Get_adjustCollapse(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/**
* \brief The user can provide this optional callback for adjusting error introduced by this
* edge collapse and the collapse position.
* \details On input the callback gets the squared error and position computed by standard means,
* and callback can modify any of them. The larger the error, the later this edge will be collapsed.
* This callback can be called from many threads in parallel and must be thread-safe.
* This callback can be called many times for each edge before real collapsing, and it is important to make the same adjustment.
*/
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `adjustCollapse`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_adjustCollapse(MR_DecimatePolylineSettings_MR_Vector3f *_this, MR_PassBy value_pass_by, MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref *value);

/**
* \brief The user can provide this optional callback for adjusting error introduced by this
* edge collapse and the collapse position.
* \details On input the callback gets the squared error and position computed by standard means,
* and callback can modify any of them. The larger the error, the later this edge will be collapsed.
* This callback can be called from many threads in parallel and must be thread-safe.
* This callback can be called many times for each edge before real collapsing, and it is important to make the same adjustment.
*/
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `adjustCollapse`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref *MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_adjustCollapse(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/**
* \brief  If not null, then
* on input: if the vector is not empty then it is taken for initialization instead of form computation for all vertices;
* on output: quadratic form for each remaining vertex is returned there
*/
/// Returns a pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `vertForms`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_QuadraticForm3f_MR_VertId *const *MR_DecimatePolylineSettings_MR_Vector3f_Get_vertForms(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/**
* \brief  If not null, then
* on input: if the vector is not empty then it is taken for initialization instead of form computation for all vertices;
* on output: quadratic form for each remaining vertex is returned there
*/
/// Modifies a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `vertForms`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Set_vertForms(MR_DecimatePolylineSettings_MR_Vector3f *_this, MR_Vector_MR_QuadraticForm3f_MR_VertId *value);

/**
* \brief  If not null, then
* on input: if the vector is not empty then it is taken for initialization instead of form computation for all vertices;
* on output: quadratic form for each remaining vertex is returned there
*/
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `vertForms`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector_MR_QuadraticForm3f_MR_VertId **MR_DecimatePolylineSettings_MR_Vector3f_GetMutable_vertForms(MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineSettings_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineSettings_MR_Vector3f *MR_DecimatePolylineSettings_MR_Vector3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DecimatePolylineSettings_MR_Vector3f_DestroyArray()`.
/// Use `MR_DecimatePolylineSettings_MR_Vector3f_OffsetMutablePtr()` and `MR_DecimatePolylineSettings_MR_Vector3f_OffsetPtr()` to access the array elements.
MRC_API MR_DecimatePolylineSettings_MR_Vector3f *MR_DecimatePolylineSettings_MR_Vector3f_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DecimatePolylineSettings<MR::Vector3f>` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineSettings_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineSettings_MR_Vector3f *MR_DecimatePolylineSettings_MR_Vector3f_ConstructFrom(float maxError, float maxEdgeLen, float stabilizer, bool optimizeVertexPos, int32_t maxDeletedVertices, MR_VertBitSet *region, bool touchBdVertices, MR_PassBy preCollapse_pass_by, MR_std_function_bool_from_MR_EdgeId_const_MR_Vector3f_ref *preCollapse, MR_PassBy adjustCollapse_pass_by, MR_std_function_void_from_MR_UndirectedEdgeId_float_ref_MR_Vector3f_ref *adjustCollapse, MR_Vector_MR_QuadraticForm3f_MR_VertId *vertForms);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DecimatePolylineSettings_MR_Vector3f *MR_DecimatePolylineSettings_MR_Vector3f_OffsetPtr(const MR_DecimatePolylineSettings_MR_Vector3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DecimatePolylineSettings_MR_Vector3f *MR_DecimatePolylineSettings_MR_Vector3f_OffsetMutablePtr(MR_DecimatePolylineSettings_MR_Vector3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DecimatePolylineSettings<MR::Vector3f>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineSettings_MR_Vector3f_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineSettings_MR_Vector3f *MR_DecimatePolylineSettings_MR_Vector3f_ConstructFromAnother(MR_PassBy _other_pass_by, MR_DecimatePolylineSettings_MR_Vector3f *_other);

/// Destroys a heap-allocated instance of `MR_DecimatePolylineSettings_MR_Vector3f`. Does nothing if the pointer is null.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_Destroy(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Destroys a heap-allocated array of `MR_DecimatePolylineSettings_MR_Vector3f`. Does nothing if the pointer is null.
MRC_API void MR_DecimatePolylineSettings_MR_Vector3f_DestroyArray(const MR_DecimatePolylineSettings_MR_Vector3f *_this);

/// Generated from a method of class `MR::DecimatePolylineSettings<MR::Vector3f>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DecimatePolylineSettings_MR_Vector3f *MR_DecimatePolylineSettings_MR_Vector3f_AssignFromAnother(MR_DecimatePolylineSettings_MR_Vector3f *_this, MR_PassBy _other_pass_by, MR_DecimatePolylineSettings_MR_Vector3f *_other);

///< Number deleted verts. Same as the number of performed collapses
/// Returns a pointer to a member variable of class `MR::DecimatePolylineResult` named `vertsDeleted`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_DecimatePolylineResult_Get_vertsDeleted(const MR_DecimatePolylineResult *_this);

///< Number deleted verts. Same as the number of performed collapses
/// Modifies a member variable of class `MR::DecimatePolylineResult` named `vertsDeleted`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineResult_Set_vertsDeleted(MR_DecimatePolylineResult *_this, int32_t value);

///< Number deleted verts. Same as the number of performed collapses
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineResult` named `vertsDeleted`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_DecimatePolylineResult_GetMutable_vertsDeleted(MR_DecimatePolylineResult *_this);

///< Max different (as distance) between original contour and result contour
/// Returns a pointer to a member variable of class `MR::DecimatePolylineResult` named `errorIntroduced`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_DecimatePolylineResult_Get_errorIntroduced(const MR_DecimatePolylineResult *_this);

///< Max different (as distance) between original contour and result contour
/// Modifies a member variable of class `MR::DecimatePolylineResult` named `errorIntroduced`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_DecimatePolylineResult_Set_errorIntroduced(MR_DecimatePolylineResult *_this, float value);

///< Max different (as distance) between original contour and result contour
/// Returns a mutable pointer to a member variable of class `MR::DecimatePolylineResult` named `errorIntroduced`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_DecimatePolylineResult_GetMutable_errorIntroduced(MR_DecimatePolylineResult *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineResult *MR_DecimatePolylineResult_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_DecimatePolylineResult_DestroyArray()`.
/// Use `MR_DecimatePolylineResult_OffsetMutablePtr()` and `MR_DecimatePolylineResult_OffsetPtr()` to access the array elements.
MRC_API MR_DecimatePolylineResult *MR_DecimatePolylineResult_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::DecimatePolylineResult` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineResult *MR_DecimatePolylineResult_ConstructFrom(int32_t vertsDeleted, float errorIntroduced);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_DecimatePolylineResult *MR_DecimatePolylineResult_OffsetPtr(const MR_DecimatePolylineResult *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_DecimatePolylineResult *MR_DecimatePolylineResult_OffsetMutablePtr(MR_DecimatePolylineResult *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::DecimatePolylineResult`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineResult *MR_DecimatePolylineResult_ConstructFromAnother(const MR_DecimatePolylineResult *_other);

/// Destroys a heap-allocated instance of `MR_DecimatePolylineResult`. Does nothing if the pointer is null.
MRC_API void MR_DecimatePolylineResult_Destroy(const MR_DecimatePolylineResult *_this);

/// Destroys a heap-allocated array of `MR_DecimatePolylineResult`. Does nothing if the pointer is null.
MRC_API void MR_DecimatePolylineResult_DestroyArray(const MR_DecimatePolylineResult *_this);

/// Generated from a method of class `MR::DecimatePolylineResult` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_DecimatePolylineResult *MR_DecimatePolylineResult_AssignFromAnother(MR_DecimatePolylineResult *_this, const MR_DecimatePolylineResult *_other);

/**
* \brief Collapse edges in the polyline according to the settings
*
*/
/// Generated from function `MR::decimatePolyline`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineResult *MR_decimatePolyline_MR_Polyline2(MR_Polyline2 *polyline, const MR_DecimatePolylineSettings_MR_Vector2f *settings);

/// Generated from function `MR::decimatePolyline`.
/// Parameter `polyline` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineResult *MR_decimatePolyline_MR_Polyline3(MR_Polyline3 *polyline, const MR_DecimatePolylineSettings_MR_Vector3f *settings);

/**
* \brief Collapse edges in the contour according to the settings
*
*/
/// Generated from function `MR::decimateContour`.
/// Parameter `contour` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineResult *MR_decimateContour_std_vector_MR_Vector2f(MR_std_vector_MR_Vector2f *contour, const MR_DecimatePolylineSettings_MR_Vector2f *settings);

/// Generated from function `MR::decimateContour`.
/// Parameter `contour` can not be null. It is a single object.
/// Parameter `settings` is a single object.
/// Parameter `settings` has a default argument: `{}`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_DecimatePolylineResult_Destroy()` to free it when you're done using it.
MRC_API MR_DecimatePolylineResult *MR_decimateContour_std_vector_MR_Vector3f(MR_std_vector_MR_Vector3f *contour, const MR_DecimatePolylineSettings_MR_Vector3f *settings);

#ifdef __cplusplus
} // extern "C"
#endif
