// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MREnums.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_MeshTopology MR_MeshTopology; // Defined in `#include <MRCMesh/MRMeshTopology.h>`.
typedef struct MR_VertBitSet MR_VertBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_VertCoords MR_VertCoords; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_VertScalars MR_VertScalars; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_function_bool_from_MR_FaceId MR_std_function_bool_from_MR_FaceId; // Defined in `#include <MRCMisc/std_function_bool_from_MR_FaceId.h>`.
typedef struct MR_std_function_float_from_MR_UndirectedEdgeId MR_std_function_float_from_MR_UndirectedEdgeId; // Defined in `#include <MRCMisc/std_function_float_from_MR_UndirectedEdgeId.h>`.


/// Generated from class `MR::SpacingSettings`.
typedef struct MR_SpacingSettings MR_SpacingSettings;

/// Generated from class `MR::InflateSettings`.
typedef struct MR_InflateSettings MR_InflateSettings;

/// Puts given vertices in such positions to make smooth surface both inside verts-region and on its boundary;
/// \param verts must not include all vertices of a mesh connected component
/// \param fixedSharpVertices in these vertices the surface can be not-smooth
/// Generated from function `MR::positionVertsSmoothly`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
/// Parameter `edgeWeights` has a default argument: `EdgeWeights::Cotan`, pass a null pointer to use it.
/// Parameter `vmass` has a default argument: `VertexMass::Unit`, pass a null pointer to use it.
/// Parameter `fixedSharpVertices` defaults to a null pointer in C++.
MRC_API void MR_positionVertsSmoothly_5(MR_Mesh *mesh, const MR_VertBitSet *verts, const MR_EdgeWeights *edgeWeights, const MR_VertexMass *vmass, const MR_VertBitSet *fixedSharpVertices);

/// Generated from function `MR::positionVertsSmoothly`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
/// Parameter `edgeWeights` has a default argument: `EdgeWeights::Cotan`, pass a null pointer to use it.
/// Parameter `vmass` has a default argument: `VertexMass::Unit`, pass a null pointer to use it.
/// Parameter `fixedSharpVertices` defaults to a null pointer in C++.
MRC_API void MR_positionVertsSmoothly_6(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_VertBitSet *verts, const MR_EdgeWeights *edgeWeights, const MR_VertexMass *vmass, const MR_VertBitSet *fixedSharpVertices);

/// Puts given vertices in such positions to make smooth surface inside verts-region, but sharp on its boundary;
/// \param verts must not include all vertices of a mesh connected component unless vertStabilizers are given
/// \param vertShifts optional additional shifts of each vertex relative to smooth position
/// \param vertStabilizers optional per-vertex stabilizers: the more the value, the bigger vertex attraction to its original position
/// Generated from function `MR::positionVertsSmoothlySharpBd`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
/// Parameter `vertShifts` defaults to a null pointer in C++.
/// Parameter `vertStabilizers` defaults to a null pointer in C++.
MRC_API void MR_positionVertsSmoothlySharpBd_4(MR_Mesh *mesh, const MR_VertBitSet *verts, const MR_VertCoords *vertShifts, const MR_VertScalars *vertStabilizers);

/// Generated from function `MR::positionVertsSmoothlySharpBd`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
/// Parameter `vertShifts` defaults to a null pointer in C++.
/// Parameter `vertStabilizers` defaults to a null pointer in C++.
MRC_API void MR_positionVertsSmoothlySharpBd_5(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_VertBitSet *verts, const MR_VertCoords *vertShifts, const MR_VertScalars *vertStabilizers);

/// vertices to be moved by the algorithm, nullptr means all valid vertices
/// Returns a pointer to a member variable of class `MR::SpacingSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet *const *MR_SpacingSettings_Get_region(const MR_SpacingSettings *_this);

/// vertices to be moved by the algorithm, nullptr means all valid vertices
/// Modifies a member variable of class `MR::SpacingSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SpacingSettings_Set_region(MR_SpacingSettings *_this, const MR_VertBitSet *value);

/// vertices to be moved by the algorithm, nullptr means all valid vertices
/// Returns a mutable pointer to a member variable of class `MR::SpacingSettings` named `region`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VertBitSet **MR_SpacingSettings_GetMutable_region(MR_SpacingSettings *_this);

// must be defined by the caller
/// Returns a pointer to a member variable of class `MR::SpacingSettings` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_float_from_MR_UndirectedEdgeId *MR_SpacingSettings_Get_dist(const MR_SpacingSettings *_this);

// must be defined by the caller
/// Modifies a member variable of class `MR::SpacingSettings` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SpacingSettings_Set_dist(MR_SpacingSettings *_this, MR_PassBy value_pass_by, MR_std_function_float_from_MR_UndirectedEdgeId *value);

// must be defined by the caller
/// Returns a mutable pointer to a member variable of class `MR::SpacingSettings` named `dist`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_float_from_MR_UndirectedEdgeId *MR_SpacingSettings_GetMutable_dist(MR_SpacingSettings *_this);

/// the algorithm is iterative, the more iterations the closer result to exact solution
/// Returns a pointer to a member variable of class `MR::SpacingSettings` named `numIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SpacingSettings_Get_numIters(const MR_SpacingSettings *_this);

/// the algorithm is iterative, the more iterations the closer result to exact solution
/// Modifies a member variable of class `MR::SpacingSettings` named `numIters`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SpacingSettings_Set_numIters(MR_SpacingSettings *_this, int32_t value);

/// the algorithm is iterative, the more iterations the closer result to exact solution
/// Returns a mutable pointer to a member variable of class `MR::SpacingSettings` named `numIters`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SpacingSettings_GetMutable_numIters(MR_SpacingSettings *_this);

/// too small number here can lead to instability, too large - to slow convergence
/// Returns a pointer to a member variable of class `MR::SpacingSettings` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SpacingSettings_Get_stabilizer(const MR_SpacingSettings *_this);

/// too small number here can lead to instability, too large - to slow convergence
/// Modifies a member variable of class `MR::SpacingSettings` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SpacingSettings_Set_stabilizer(MR_SpacingSettings *_this, float value);

/// too small number here can lead to instability, too large - to slow convergence
/// Returns a mutable pointer to a member variable of class `MR::SpacingSettings` named `stabilizer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SpacingSettings_GetMutable_stabilizer(MR_SpacingSettings *_this);

/// maximum sum of minus negative weights, if it is exceeded then stabilizer is increased automatically
/// Returns a pointer to a member variable of class `MR::SpacingSettings` named `maxSumNegW`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_SpacingSettings_Get_maxSumNegW(const MR_SpacingSettings *_this);

/// maximum sum of minus negative weights, if it is exceeded then stabilizer is increased automatically
/// Modifies a member variable of class `MR::SpacingSettings` named `maxSumNegW`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SpacingSettings_Set_maxSumNegW(MR_SpacingSettings *_this, float value);

/// maximum sum of minus negative weights, if it is exceeded then stabilizer is increased automatically
/// Returns a mutable pointer to a member variable of class `MR::SpacingSettings` named `maxSumNegW`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_SpacingSettings_GetMutable_maxSumNegW(MR_SpacingSettings *_this);

/// if this predicated is given, then all inverted faces will be converted in degenerate faces at the end of each iteration
/// Returns a pointer to a member variable of class `MR::SpacingSettings` named `isInverted`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_function_bool_from_MR_FaceId *MR_SpacingSettings_Get_isInverted(const MR_SpacingSettings *_this);

/// if this predicated is given, then all inverted faces will be converted in degenerate faces at the end of each iteration
/// Modifies a member variable of class `MR::SpacingSettings` named `isInverted`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SpacingSettings_Set_isInverted(MR_SpacingSettings *_this, MR_PassBy value_pass_by, MR_std_function_bool_from_MR_FaceId *value);

/// if this predicated is given, then all inverted faces will be converted in degenerate faces at the end of each iteration
/// Returns a mutable pointer to a member variable of class `MR::SpacingSettings` named `isInverted`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_function_bool_from_MR_FaceId *MR_SpacingSettings_GetMutable_isInverted(MR_SpacingSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SpacingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SpacingSettings *MR_SpacingSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SpacingSettings_DestroyArray()`.
/// Use `MR_SpacingSettings_OffsetMutablePtr()` and `MR_SpacingSettings_OffsetPtr()` to access the array elements.
MRC_API MR_SpacingSettings *MR_SpacingSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SpacingSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SpacingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SpacingSettings *MR_SpacingSettings_ConstructFrom(const MR_VertBitSet *region, MR_PassBy dist_pass_by, MR_std_function_float_from_MR_UndirectedEdgeId *dist, int32_t numIters, float stabilizer, float maxSumNegW, MR_PassBy isInverted_pass_by, MR_std_function_bool_from_MR_FaceId *isInverted);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SpacingSettings *MR_SpacingSettings_OffsetPtr(const MR_SpacingSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SpacingSettings *MR_SpacingSettings_OffsetMutablePtr(MR_SpacingSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::SpacingSettings`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SpacingSettings_Destroy()` to free it when you're done using it.
MRC_API MR_SpacingSettings *MR_SpacingSettings_ConstructFromAnother(MR_PassBy _other_pass_by, MR_SpacingSettings *_other);

/// Destroys a heap-allocated instance of `MR_SpacingSettings`. Does nothing if the pointer is null.
MRC_API void MR_SpacingSettings_Destroy(const MR_SpacingSettings *_this);

/// Destroys a heap-allocated array of `MR_SpacingSettings`. Does nothing if the pointer is null.
MRC_API void MR_SpacingSettings_DestroyArray(const MR_SpacingSettings *_this);

/// Generated from a method of class `MR::SpacingSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SpacingSettings *MR_SpacingSettings_AssignFromAnother(MR_SpacingSettings *_this, MR_PassBy _other_pass_by, MR_SpacingSettings *_other);

/// Moves given vertices to make the distances between them as specified
/// Generated from function `MR::positionVertsWithSpacing`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
MRC_API void MR_positionVertsWithSpacing_2(MR_Mesh *mesh, const MR_SpacingSettings *settings);

/// Generated from function `MR::positionVertsWithSpacing`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
MRC_API void MR_positionVertsWithSpacing_3(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_SpacingSettings *settings);

/// the amount of pressure applied to mesh region:
/// positive pressure moves the vertices outside, negative - inside;
/// please specify a value by magnitude about the region diagonal
/// Returns a pointer to a member variable of class `MR::InflateSettings` named `pressure`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_InflateSettings_Get_pressure(const MR_InflateSettings *_this);

/// the amount of pressure applied to mesh region:
/// positive pressure moves the vertices outside, negative - inside;
/// please specify a value by magnitude about the region diagonal
/// Modifies a member variable of class `MR::InflateSettings` named `pressure`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InflateSettings_Set_pressure(MR_InflateSettings *_this, float value);

/// the amount of pressure applied to mesh region:
/// positive pressure moves the vertices outside, negative - inside;
/// please specify a value by magnitude about the region diagonal
/// Returns a mutable pointer to a member variable of class `MR::InflateSettings` named `pressure`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_InflateSettings_GetMutable_pressure(MR_InflateSettings *_this);

/// the number of internal iterations (>=1);
/// larger number of iterations makes the performance slower, but the quality better
/// Returns a pointer to a member variable of class `MR::InflateSettings` named `iterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_InflateSettings_Get_iterations(const MR_InflateSettings *_this);

/// the number of internal iterations (>=1);
/// larger number of iterations makes the performance slower, but the quality better
/// Modifies a member variable of class `MR::InflateSettings` named `iterations`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InflateSettings_Set_iterations(MR_InflateSettings *_this, int32_t value);

/// the number of internal iterations (>=1);
/// larger number of iterations makes the performance slower, but the quality better
/// Returns a mutable pointer to a member variable of class `MR::InflateSettings` named `iterations`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_InflateSettings_GetMutable_iterations(MR_InflateSettings *_this);

/// smooths the area before starting inflation;
/// please set to false only if the region is known to be already smooth
/// Returns a pointer to a member variable of class `MR::InflateSettings` named `preSmooth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_InflateSettings_Get_preSmooth(const MR_InflateSettings *_this);

/// smooths the area before starting inflation;
/// please set to false only if the region is known to be already smooth
/// Modifies a member variable of class `MR::InflateSettings` named `preSmooth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InflateSettings_Set_preSmooth(MR_InflateSettings *_this, bool value);

/// smooths the area before starting inflation;
/// please set to false only if the region is known to be already smooth
/// Returns a mutable pointer to a member variable of class `MR::InflateSettings` named `preSmooth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_InflateSettings_GetMutable_preSmooth(MR_InflateSettings *_this);

/// whether to increase the pressure gradually during the iterations (recommended for best quality)
/// Returns a pointer to a member variable of class `MR::InflateSettings` named `gradualPressureGrowth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const bool *MR_InflateSettings_Get_gradualPressureGrowth(const MR_InflateSettings *_this);

/// whether to increase the pressure gradually during the iterations (recommended for best quality)
/// Modifies a member variable of class `MR::InflateSettings` named `gradualPressureGrowth`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_InflateSettings_Set_gradualPressureGrowth(MR_InflateSettings *_this, bool value);

/// whether to increase the pressure gradually during the iterations (recommended for best quality)
/// Returns a mutable pointer to a member variable of class `MR::InflateSettings` named `gradualPressureGrowth`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API bool *MR_InflateSettings_GetMutable_gradualPressureGrowth(MR_InflateSettings *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InflateSettings_Destroy()` to free it when you're done using it.
MRC_API MR_InflateSettings *MR_InflateSettings_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_InflateSettings_DestroyArray()`.
/// Use `MR_InflateSettings_OffsetMutablePtr()` and `MR_InflateSettings_OffsetPtr()` to access the array elements.
MRC_API MR_InflateSettings *MR_InflateSettings_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::InflateSettings` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InflateSettings_Destroy()` to free it when you're done using it.
MRC_API MR_InflateSettings *MR_InflateSettings_ConstructFrom(float pressure, int32_t iterations, bool preSmooth, bool gradualPressureGrowth);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_InflateSettings *MR_InflateSettings_OffsetPtr(const MR_InflateSettings *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_InflateSettings *MR_InflateSettings_OffsetMutablePtr(MR_InflateSettings *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::InflateSettings`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_InflateSettings_Destroy()` to free it when you're done using it.
MRC_API MR_InflateSettings *MR_InflateSettings_ConstructFromAnother(const MR_InflateSettings *_other);

/// Destroys a heap-allocated instance of `MR_InflateSettings`. Does nothing if the pointer is null.
MRC_API void MR_InflateSettings_Destroy(const MR_InflateSettings *_this);

/// Destroys a heap-allocated array of `MR_InflateSettings`. Does nothing if the pointer is null.
MRC_API void MR_InflateSettings_DestroyArray(const MR_InflateSettings *_this);

/// Generated from a method of class `MR::InflateSettings` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_InflateSettings *MR_InflateSettings_AssignFromAnother(MR_InflateSettings *_this, const MR_InflateSettings *_other);

/// Inflates (in one of two sides) given mesh region,
/// putting given vertices in such positions to make smooth surface inside verts-region, but sharp on its boundary;
/// \param verts must not include all vertices of a mesh connected component
/// Generated from function `MR::inflate`.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
MRC_API void MR_inflate_3(MR_Mesh *mesh, const MR_VertBitSet *verts, const MR_InflateSettings *settings);

/// Generated from function `MR::inflate`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
/// Parameter `settings` can not be null. It is a single object.
MRC_API void MR_inflate_4(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_VertBitSet *verts, const MR_InflateSettings *settings);

/// Inflates (in one of two sides) given mesh region,
/// putting given vertices in such positions to make smooth surface inside verts-region, but sharp on its boundary;
/// this function makes just 1 iteration of inflation and is used inside inflate(...)
/// Generated from function `MR::inflate1`.
/// Parameter `topology` can not be null. It is a single object.
/// Parameter `points` can not be null. It is a single object.
/// Parameter `verts` can not be null. It is a single object.
MRC_API void MR_inflate1(const MR_MeshTopology *topology, MR_VertCoords *points, const MR_VertBitSet *verts, float pressure);

#ifdef __cplusplus
} // extern "C"
#endif
