// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRColor.h>
#include <MRCMesh/MRId.h>
#include <MRCMesh/MRMeshFwd.h>
#include <MRCMesh/MRVector2.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Box3i MR_Box3i; // Defined in `#include <MRCMesh/MRBox.h>`.
typedef struct MR_FloatGrid MR_FloatGrid; // Defined in `#include <MRCVoxels/MRFloatGrid.h>`.
typedef struct MR_Histogram MR_Histogram; // Defined in `#include <MRCMesh/MRHistogram.h>`.
typedef struct MR_Object MR_Object; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectChildrenHolder MR_ObjectChildrenHolder; // Defined in `#include <MRCMesh/MRObject.h>`.
typedef struct MR_ObjectMeshHolder MR_ObjectMeshHolder; // Defined in `#include <MRCMesh/MRObjectMeshHolder.h>`.
typedef struct MR_SimpleVolume MR_SimpleVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_SimpleVolumeMinMax MR_SimpleVolumeMinMax; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_VdbVolume MR_VdbVolume; // Defined in `#include <MRCVoxels/MRVoxelsVolume.h>`.
typedef struct MR_Vector3f MR_Vector3f; // Defined in `#include <MRCMesh/MRVector3.h>`.
typedef struct MR_VisualObject MR_VisualObject; // Defined in `#include <MRCMesh/MRVisualObject.h>`.
typedef struct MR_VolumeIndexer MR_VolumeIndexer; // Defined in `#include <MRCMesh/MRVolumeIndexer.h>`.
typedef struct MR_VoxelBitSet MR_VoxelBitSet; // Defined in `#include <MRCMesh/MRBitSet.h>`.
typedef struct MR_expected_bool_std_string MR_expected_bool_std_string; // Defined in `#include <MRCMisc/expected_bool_std_string.h>`.
typedef struct MR_expected_std_shared_ptr_MR_Mesh_std_string MR_expected_std_shared_ptr_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_std_shared_ptr_MR_Mesh_std_string.h>`.
typedef struct MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float; // Defined in `#include <MRCMisc/std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float.h>`.
typedef struct MR_std_function_bool_from_float MR_std_function_bool_from_float; // Defined in `#include <MRCMisc/std_function_bool_from_float.h>`.
typedef struct MR_std_optional_MR_Vector2f MR_std_optional_MR_Vector2f; // Defined in `#include <MRCMisc/std_optional_MR_Vector2f.h>`.
typedef struct MR_std_shared_ptr_MR_Mesh MR_std_shared_ptr_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Mesh.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_string MR_std_vector_std_string; // Defined in `#include <MRCMisc/std_vector_std_string.h>`.


/// This class stores information about voxels object
/// Generated from class `MR::ObjectVoxels`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::ObjectMeshHolder`
///   Indirect: (non-virtual)
///     `MR::Object`
///     `MR::ObjectChildrenHolder`
///     `MR::VisualObject`
typedef struct MR_ObjectVoxels MR_ObjectVoxels;

// struct to control volume rendering texture
/// Generated from class `MR::ObjectVoxels::VolumeRenderingParams`.
typedef struct MR_ObjectVoxels_VolumeRenderingParams MR_ObjectVoxels_VolumeRenderingParams;

// shading model
typedef int32_t MR_ObjectVoxels_VolumeRenderingParams_ShadingType;
enum // MR_ObjectVoxels_VolumeRenderingParams_ShadingType
{
    MR_ObjectVoxels_VolumeRenderingParams_ShadingType_None = 0,
    MR_ObjectVoxels_VolumeRenderingParams_ShadingType_ValueGradient = 1,
    MR_ObjectVoxels_VolumeRenderingParams_ShadingType_AlphaGradient = 2,
};

// coloring type
typedef int32_t MR_ObjectVoxels_VolumeRenderingParams_LutType;
enum // MR_ObjectVoxels_VolumeRenderingParams_LutType
{
    MR_ObjectVoxels_VolumeRenderingParams_LutType_GrayShades = 0,
    MR_ObjectVoxels_VolumeRenderingParams_LutType_Rainbow = 1,
    MR_ObjectVoxels_VolumeRenderingParams_LutType_OneColor = 2,
};

// type of alpha function on texture
typedef int32_t MR_ObjectVoxels_VolumeRenderingParams_AlphaType;
enum // MR_ObjectVoxels_VolumeRenderingParams_AlphaType
{
    MR_ObjectVoxels_VolumeRenderingParams_AlphaType_Constant = 0,
    MR_ObjectVoxels_VolumeRenderingParams_AlphaType_LinearIncreasing = 1,
    MR_ObjectVoxels_VolumeRenderingParams_AlphaType_LinearDecreasing = 2,
};

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectVoxels_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectVoxels *MR_ObjectVoxels_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectVoxels_DestroyArray()`.
/// Use `MR_ObjectVoxels_OffsetMutablePtr()` and `MR_ObjectVoxels_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectVoxels *MR_ObjectVoxels_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectVoxels *MR_ObjectVoxels_OffsetPtr(const MR_ObjectVoxels *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectVoxels *MR_ObjectVoxels_OffsetMutablePtr(MR_ObjectVoxels *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::ObjectVoxels` to its base class `MR::Object`.
/// This version is acting on mutable pointers.
MRC_API const MR_Object *MR_ObjectVoxels_UpcastTo_MR_Object(const MR_ObjectVoxels *object);

/// Upcasts an instance of `MR::ObjectVoxels` to its base class `MR::Object`.
MRC_API MR_Object *MR_ObjectVoxels_MutableUpcastTo_MR_Object(MR_ObjectVoxels *object);

/// Upcasts an instance of `MR::ObjectVoxels` to its base class `MR::ObjectChildrenHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectChildrenHolder *MR_ObjectVoxels_UpcastTo_MR_ObjectChildrenHolder(const MR_ObjectVoxels *object);

/// Upcasts an instance of `MR::ObjectVoxels` to its base class `MR::ObjectChildrenHolder`.
MRC_API MR_ObjectChildrenHolder *MR_ObjectVoxels_MutableUpcastTo_MR_ObjectChildrenHolder(MR_ObjectVoxels *object);

/// Upcasts an instance of `MR::ObjectVoxels` to its base class `MR::ObjectMeshHolder`.
/// This version is acting on mutable pointers.
MRC_API const MR_ObjectMeshHolder *MR_ObjectVoxels_UpcastTo_MR_ObjectMeshHolder(const MR_ObjectVoxels *object);

/// Upcasts an instance of `MR::ObjectVoxels` to its base class `MR::ObjectMeshHolder`.
MRC_API MR_ObjectMeshHolder *MR_ObjectVoxels_MutableUpcastTo_MR_ObjectMeshHolder(MR_ObjectVoxels *object);

/// Upcasts an instance of `MR::ObjectVoxels` to its base class `MR::VisualObject`.
/// This version is acting on mutable pointers.
MRC_API const MR_VisualObject *MR_ObjectVoxels_UpcastTo_MR_VisualObject(const MR_ObjectVoxels *object);

/// Upcasts an instance of `MR::ObjectVoxels` to its base class `MR::VisualObject`.
MRC_API MR_VisualObject *MR_ObjectVoxels_MutableUpcastTo_MR_VisualObject(MR_ObjectVoxels *object);

/// Generated from a constructor of class `MR::ObjectVoxels`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectVoxels_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectVoxels *MR_ObjectVoxels_ConstructFromAnother(MR_PassBy _other_pass_by, MR_ObjectVoxels *_other);

/// Destroys a heap-allocated instance of `MR_ObjectVoxels`. Does nothing if the pointer is null.
MRC_API void MR_ObjectVoxels_Destroy(const MR_ObjectVoxels *_this);

/// Destroys a heap-allocated array of `MR_ObjectVoxels`. Does nothing if the pointer is null.
MRC_API void MR_ObjectVoxels_DestroyArray(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectVoxels *MR_ObjectVoxels_AssignFromAnother(MR_ObjectVoxels *_this, MR_PassBy _other_pass_by, MR_ObjectVoxels *_other);

/// Generated from a method of class `MR::ObjectVoxels` named `TypeName`.
MRC_API const char *MR_ObjectVoxels_TypeName(void);

/// Generated from a method of class `MR::ObjectVoxels` named `typeName`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectVoxels_typeName(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `applyScale`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_applyScale(MR_ObjectVoxels *_this, float scaleFactor);

/// Returns iso surface, empty if iso value is not set
/// Generated from a method of class `MR::ObjectVoxels` named `surface`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_Mesh *MR_ObjectVoxels_surface(const MR_ObjectVoxels *_this);

/// Return VdbVolume
/// Generated from a method of class `MR::ObjectVoxels` named `vdbVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VdbVolume *MR_ObjectVoxels_vdbVolume(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `varVdbVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_VdbVolume *MR_ObjectVoxels_varVdbVolume(MR_ObjectVoxels *_this);

/// Returns Float grid which contains voxels data, see more on openvdb::FloatGrid
/// Generated from a method of class `MR::ObjectVoxels` named `grid`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FloatGrid *MR_ObjectVoxels_grid(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `hasModel`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectVoxels_hasModel(const MR_ObjectVoxels *_this);

/// Returns dimensions of voxel objects
/// Generated from a method of class `MR::ObjectVoxels` named `dimensions`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3i *MR_ObjectVoxels_dimensions(const MR_ObjectVoxels *_this);

/// Returns current iso value
/// Generated from a method of class `MR::ObjectVoxels` named `getIsoValue`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API float MR_ObjectVoxels_getIsoValue(const MR_ObjectVoxels *_this);

/// Returns histogram
/// Generated from a method of class `MR::ObjectVoxels` named `histogram`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Histogram *MR_ObjectVoxels_histogram(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `voxelSize`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_ObjectVoxels_voxelSize(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `getInfoLines`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_vector_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_vector_std_string *MR_ObjectVoxels_getInfoLines(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `getClassName`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectVoxels_getClassName(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `getClassNameInPlural`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_ObjectVoxels_getClassNameInPlural(const MR_ObjectVoxels *_this);

/// Clears all internal data and then creates grid and calculates histogram (surface is not built, call \ref updateHistogramAndSurface)
/// \param normalPlusGrad true means that iso-surface normals will be along gradient, false means opposite direction
/// \param minmax optional data about known min and max values
/// set a new background for the VdbVolume, if normalPlusGrad = true, use the maximum value, otherwise the minimum value
/// Generated from a method of class `MR::ObjectVoxels` named `construct`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `simpleVolume` can not be null. It is a single object.
/// Parameter `minmax` is a single object.
/// Parameter `minmax` has a default argument: `{}`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `normalPlusGrad` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_ObjectVoxels_construct_4(MR_ObjectVoxels *_this, const MR_SimpleVolume *simpleVolume, const MR_std_optional_MR_Vector2f *minmax, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const bool *normalPlusGrad);

/// Clears all internal data and then creates grid and calculates histogram (surface is not built, call \ref updateHistogramAndSurface)
/// \param normalPlusGrad true means that iso-surface normals will be along gradient, false means opposite direction
/// set a new background for the VdbVolume, if normalPlusGrad = true, use the maximum value, otherwise the minimum value
/// Generated from a method of class `MR::ObjectVoxels` named `construct`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `simpleVolumeMinMax` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `normalPlusGrad` has a default argument: `false`, pass a null pointer to use it.
MRC_API void MR_ObjectVoxels_construct_3_MR_SimpleVolumeMinMax(MR_ObjectVoxels *_this, const MR_SimpleVolumeMinMax *simpleVolumeMinMax, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const bool *normalPlusGrad);

/// Clears all internal data and then remembers grid and calculates histogram (surface is not built, call \ref updateHistogramAndSurface)
/// \param minmax optional data about known min and max values
/// Generated from a method of class `MR::ObjectVoxels` named `construct`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `grid` can not be null. It is a single object.
/// Parameter `voxelSize` can not be null. It is a single object.
/// Parameter `minmax` is a single object.
/// Parameter `minmax` has a default argument: `{}`, pass a null pointer to use it.
MRC_API void MR_ObjectVoxels_construct_3_MR_FloatGrid(MR_ObjectVoxels *_this, const MR_FloatGrid *grid, const MR_Vector3f *voxelSize, const MR_std_optional_MR_Vector2f *minmax);

/// Clears all internal data and then creates grid and calculates histogram (surface is not built, call \ref updateHistogramAndSurface)
/// Generated from a method of class `MR::ObjectVoxels` named `construct`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `vdbVolume` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_construct_1(MR_ObjectVoxels *_this, const MR_VdbVolume *vdbVolume);

/// Updates histogram, by stored grid (evals min and max values from grid)
/// rebuild iso surface if it is present
/// Generated from a method of class `MR::ObjectVoxels` named `updateHistogramAndSurface`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API void MR_ObjectVoxels_updateHistogramAndSurface(MR_ObjectVoxels *_this, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Sets iso value and updates iso-surfaces if needed: 
/// Returns true if iso-value was updated, false - otherwise
/// Generated from a method of class `MR::ObjectVoxels` named `setIsoValue`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `updateSurface` has a default argument: `true`, pass a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_bool_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_bool_std_string *MR_ObjectVoxels_setIsoValue(MR_ObjectVoxels *_this, float iso, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const bool *updateSurface);

/// Sets external surface mesh for this object
/// and returns back previous mesh of this
/// Generated from a method of class `MR::ObjectVoxels` named `updateIsoSurface`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Mesh_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Mesh *MR_ObjectVoxels_updateIsoSurface(MR_ObjectVoxels *_this, MR_PassBy mesh_pass_by, MR_std_shared_ptr_MR_Mesh *mesh);

/// Sets external vdb volume for this object
/// and returns back previous vdb volume of this
/// Generated from a method of class `MR::ObjectVoxels` named `updateVdbVolume`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_VdbVolume_Destroy()` to free it when you're done using it.
MRC_API MR_VdbVolume *MR_ObjectVoxels_updateVdbVolume(MR_ObjectVoxels *_this, MR_PassBy vdbVolume_pass_by, MR_VdbVolume *vdbVolume);

/// Sets external histogram for this object
/// and returns back previous histogram of this
/// Generated from a method of class `MR::ObjectVoxels` named `updateHistogram`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Histogram_Destroy()` to free it when you're done using it.
MRC_API MR_Histogram *MR_ObjectVoxels_updateHistogram(MR_ObjectVoxels *_this, MR_PassBy histogram_pass_by, MR_Histogram *histogram);

/// Calculates and return new mesh or error message
/// Generated from a method of class `MR::ObjectVoxels` named `recalculateIsoSurface`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_shared_ptr_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_shared_ptr_MR_Mesh_std_string *MR_ObjectVoxels_recalculateIsoSurface_2(const MR_ObjectVoxels *_this, float iso, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Same as above, but takes external volume
/// Generated from a method of class `MR::ObjectVoxels` named `recalculateIsoSurface`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `volume` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_std_shared_ptr_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_std_shared_ptr_MR_Mesh_std_string *MR_ObjectVoxels_recalculateIsoSurface_3(const MR_ObjectVoxels *_this, const MR_VdbVolume *volume, float iso, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Calculates and returns new histogram
/// Generated from a method of class `MR::ObjectVoxels` named `recalculateHistogram`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `minmax` is optional. To keep it empty, pass a null pointer.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Histogram_Destroy()` to free it when you're done using it.
MRC_API MR_Histogram *MR_ObjectVoxels_recalculateHistogram(const MR_ObjectVoxels *_this, const MR_Vector2f *minmax, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// returns true if the iso-surface is built using Dual Marching Cubes algorithm or false if using Standard Marching Cubes
/// Generated from a method of class `MR::ObjectVoxels` named `getDualMarchingCubes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectVoxels_getDualMarchingCubes(const MR_ObjectVoxels *_this);

/// sets whether to use Dual Marching Cubes algorithm for visualization (true) or Standard Marching Cubes (false);
/// \param updateSurface forces immediate update
/// Generated from a method of class `MR::ObjectVoxels` named `setDualMarchingCubes`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `updateSurface` has a default argument: `true`, pass a null pointer to use it.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API void MR_ObjectVoxels_setDualMarchingCubes(MR_ObjectVoxels *_this, bool on, const bool *updateSurface, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// set voxel point positioner for Marching Cubes (only for Standard Marching Cubes)
/// Generated from a method of class `MR::ObjectVoxels` named `setVoxelPointPositioner`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_setVoxelPointPositioner(MR_ObjectVoxels *_this, MR_PassBy positioner_pass_by, MR_std_function_MR_Vector3f_from_const_MR_Vector3f_ref_const_MR_Vector3f_ref_float_float_float *positioner);

/// Sets active bounds for some simplifications (max excluded)
/// active bounds is box in voxel coordinates, note that voxels under (0,0,0) and voxels over (dimensions) are empty 
/// NOTE: don't forget to call `invalidateActiveBoundsCaches` if you call this function from progress bar thread
/// Generated from a method of class `MR::ObjectVoxels` named `setActiveBounds`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `activeBox` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
/// Parameter `updateSurface` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjectVoxels_setActiveBounds(MR_ObjectVoxels *_this, const MR_Box3i *activeBox, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb, const bool *updateSurface);

/// Returns active bounds (max excluded)
/// active bounds is box in voxel coordinates, note that voxels under (0,0,0) and voxels over (dimensions) are empty 
/// Generated from a method of class `MR::ObjectVoxels` named `getActiveBounds`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Box3i *MR_ObjectVoxels_getActiveBounds(const MR_ObjectVoxels *_this);

/// Call this function in main thread post processing if you call setActiveBounds from progress bar thread
/// Generated from a method of class `MR::ObjectVoxels` named `invalidateActiveBoundsCaches`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_invalidateActiveBoundsCaches(MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `getSelectedVoxels`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VoxelBitSet *MR_ObjectVoxels_getSelectedVoxels(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `selectVoxels`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `selectedVoxels` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_selectVoxels(MR_ObjectVoxels *_this, const MR_VoxelBitSet *selectedVoxels);

/// get active (visible) voxels
/// Generated from a method of class `MR::ObjectVoxels` named `getVolumeRenderActiveVoxels`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VoxelBitSet *MR_ObjectVoxels_getVolumeRenderActiveVoxels(const MR_ObjectVoxels *_this);

/// set active (visible) voxels (using only in Volume Rendering mode)
/// Generated from a method of class `MR::ObjectVoxels` named `setVolumeRenderActiveVoxels`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `activeVoxels` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_setVolumeRenderActiveVoxels(MR_ObjectVoxels *_this, const MR_VoxelBitSet *activeVoxels);

/// VoxelId is numerical representation of voxel
/// Coordinate is {x,y,z} indices of voxels in box (base dimensions space, NOT active dimensions)
/// Point is local space coordinate of point in scene
/// Generated from a method of class `MR::ObjectVoxels` named `getVoxelIdByCoordinate`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `coord` can not be null. It is a single object.
MRC_API MR_VoxelId MR_ObjectVoxels_getVoxelIdByCoordinate(const MR_ObjectVoxels *_this, const MR_Vector3i *coord);

/// Generated from a method of class `MR::ObjectVoxels` named `getVoxelIdByPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
MRC_API MR_VoxelId MR_ObjectVoxels_getVoxelIdByPoint(const MR_ObjectVoxels *_this, const MR_Vector3f *point);

/// Generated from a method of class `MR::ObjectVoxels` named `getCoordinateByVoxelId`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_Vector3i MR_ObjectVoxels_getCoordinateByVoxelId(const MR_ObjectVoxels *_this, MR_VoxelId id);

/// Returns indexer with more options
/// Generated from a method of class `MR::ObjectVoxels` named `getVolumeIndexer`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_VolumeIndexer *MR_ObjectVoxels_getVolumeIndexer(const MR_ObjectVoxels *_this);

// prepare data for volume rendering
// returns false if canceled or voxel data is empty
/// Generated from a method of class `MR::ObjectVoxels` named `prepareDataForVolumeRendering`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `cb` has a default argument: `{}`, pass `MR_PassBy_DefaultArgument` and a null pointer to use it.
MRC_API bool MR_ObjectVoxels_prepareDataForVolumeRendering(const MR_ObjectVoxels *_this, MR_PassBy cb_pass_by, MR_std_function_bool_from_float *cb);

/// Generated from a method of class `MR::ObjectVoxels` named `isVolumeRenderingEnabled`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectVoxels_isVolumeRenderingEnabled(const MR_ObjectVoxels *_this);

// this function should only be called from GUI thread because it changes rendering object,
// it can take some time to prepare data, so you can prepare data with progress callback
// by calling `prepareDataForVolumeRendering(cb)` function before calling this one
/// Generated from a method of class `MR::ObjectVoxels` named `enableVolumeRendering`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_enableVolumeRendering(MR_ObjectVoxels *_this, bool on);

// move volume rendering data to caller: basically used in RenderVolumeObject 
/// Generated from a method of class `MR::ObjectVoxels` named `getVolumeRenderingData`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer is owning! If not null, it must be deallocated using `MR_SimpleVolume_Destroy().
MRC_API MR_SimpleVolume *MR_ObjectVoxels_getVolumeRenderingData(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `getVolumeRenderingParams`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectVoxels_VolumeRenderingParams *MR_ObjectVoxels_getVolumeRenderingParams(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `setVolumeRenderingParams`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `params` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_setVolumeRenderingParams(MR_ObjectVoxels *_this, const MR_ObjectVoxels_VolumeRenderingParams *params);

/// Generated from a method of class `MR::ObjectVoxels` named `hasVisualRepresentation`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API bool MR_ObjectVoxels_hasVisualRepresentation(const MR_ObjectVoxels *_this);

/// sets top limit on the number of vertices in the iso-surface
/// Generated from a method of class `MR::ObjectVoxels` named `setMaxSurfaceVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_setMaxSurfaceVertices(MR_ObjectVoxels *_this, int32_t maxVerts);

/// gets top limit on the number of vertices in the iso-surface
/// Generated from a method of class `MR::ObjectVoxels` named `getMaxSurfaceVertices`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API int32_t MR_ObjectVoxels_getMaxSurfaceVertices(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `clone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectVoxels_clone(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `shallowClone`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_ObjectVoxels_shallowClone(const MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::ObjectVoxels` named `setDirtyFlags`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `invalidateCaches` has a default argument: `true`, pass a null pointer to use it.
MRC_API void MR_ObjectVoxels_setDirtyFlags(MR_ObjectVoxels *_this, uint32_t mask, const bool *invalidateCaches);

/// returns cached information about the number of active voxels
/// Generated from a method of class `MR::ObjectVoxels` named `activeVoxels`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectVoxels_activeVoxels(const MR_ObjectVoxels *_this);

/// returns the amount of memory this object occupies on heap
/// Generated from a method of class `MR::ObjectVoxels` named `heapBytes`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API MR_uint64_t MR_ObjectVoxels_heapBytes(const MR_ObjectVoxels *_this);

/// returns overriden file extension used to serialize voxels inside this object, nullptr means defaultSerializeVoxelsFormat()
/// Generated from a method of class `MR::ObjectVoxels` named `serializeFormat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API const char *MR_ObjectVoxels_serializeFormat(const MR_ObjectVoxels *_this);

/// overrides file extension used to serialize voxels inside this object: must start from '.',
/// nullptr means serialize in defaultSerializeVoxelsFormat()
/// Generated from a method of class `MR::ObjectVoxels` named `setSerializeFormat`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_setSerializeFormat(MR_ObjectVoxels *_this, const char *newFormat);

/// reset basic object colors to their default values from the current theme
/// Generated from a method of class `MR::ObjectVoxels` named `resetFrontColor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_resetFrontColor(MR_ObjectVoxels *_this);

// volume texture smoothing
/// Returns a pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `volumeFilterType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_FilterType *MR_ObjectVoxels_VolumeRenderingParams_Get_volumeFilterType(const MR_ObjectVoxels_VolumeRenderingParams *_this);

// volume texture smoothing
/// Modifies a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `volumeFilterType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Set_volumeFilterType(MR_ObjectVoxels_VolumeRenderingParams *_this, MR_FilterType value);

// volume texture smoothing
/// Returns a mutable pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `volumeFilterType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_FilterType *MR_ObjectVoxels_VolumeRenderingParams_GetMutable_volumeFilterType(MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Returns a pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `shadingType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectVoxels_VolumeRenderingParams_ShadingType *MR_ObjectVoxels_VolumeRenderingParams_Get_shadingType(const MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Modifies a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `shadingType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Set_shadingType(MR_ObjectVoxels_VolumeRenderingParams *_this, MR_ObjectVoxels_VolumeRenderingParams_ShadingType value);

/// Returns a mutable pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `shadingType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectVoxels_VolumeRenderingParams_ShadingType *MR_ObjectVoxels_VolumeRenderingParams_GetMutable_shadingType(MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Returns a pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `lutType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectVoxels_VolumeRenderingParams_LutType *MR_ObjectVoxels_VolumeRenderingParams_Get_lutType(const MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Modifies a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `lutType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Set_lutType(MR_ObjectVoxels_VolumeRenderingParams *_this, MR_ObjectVoxels_VolumeRenderingParams_LutType value);

/// Returns a mutable pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `lutType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectVoxels_VolumeRenderingParams_LutType *MR_ObjectVoxels_VolumeRenderingParams_GetMutable_lutType(MR_ObjectVoxels_VolumeRenderingParams *_this);

// color that is used for OneColor mode
/// Returns a pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `oneColor`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Color *MR_ObjectVoxels_VolumeRenderingParams_Get_oneColor(const MR_ObjectVoxels_VolumeRenderingParams *_this);

// color that is used for OneColor mode
/// Modifies a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `oneColor`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Set_oneColor(MR_ObjectVoxels_VolumeRenderingParams *_this, MR_Color value);

// color that is used for OneColor mode
/// Returns a mutable pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `oneColor`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Color *MR_ObjectVoxels_VolumeRenderingParams_GetMutable_oneColor(MR_ObjectVoxels_VolumeRenderingParams *_this);

// minimum colored value (voxels with lower values are transparent)
/// Returns a pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `min`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ObjectVoxels_VolumeRenderingParams_Get_min(const MR_ObjectVoxels_VolumeRenderingParams *_this);

// minimum colored value (voxels with lower values are transparent)
/// Modifies a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `min`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Set_min(MR_ObjectVoxels_VolumeRenderingParams *_this, float value);

// minimum colored value (voxels with lower values are transparent)
/// Returns a mutable pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `min`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ObjectVoxels_VolumeRenderingParams_GetMutable_min(MR_ObjectVoxels_VolumeRenderingParams *_this);

// maximum colored value (voxels with higher values are transparent)
/// Returns a pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `max`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ObjectVoxels_VolumeRenderingParams_Get_max(const MR_ObjectVoxels_VolumeRenderingParams *_this);

// maximum colored value (voxels with higher values are transparent)
/// Modifies a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `max`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Set_max(MR_ObjectVoxels_VolumeRenderingParams *_this, float value);

// maximum colored value (voxels with higher values are transparent)
/// Returns a mutable pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `max`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ObjectVoxels_VolumeRenderingParams_GetMutable_max(MR_ObjectVoxels_VolumeRenderingParams *_this);

// step to sample each ray with
// if <= 0 then default sampling is used
/// Returns a pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `samplingStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_ObjectVoxels_VolumeRenderingParams_Get_samplingStep(const MR_ObjectVoxels_VolumeRenderingParams *_this);

// step to sample each ray with
// if <= 0 then default sampling is used
/// Modifies a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `samplingStep`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Set_samplingStep(MR_ObjectVoxels_VolumeRenderingParams *_this, float value);

// step to sample each ray with
// if <= 0 then default sampling is used
/// Returns a mutable pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `samplingStep`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_ObjectVoxels_VolumeRenderingParams_GetMutable_samplingStep(MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Returns a pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `alphaType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_ObjectVoxels_VolumeRenderingParams_AlphaType *MR_ObjectVoxels_VolumeRenderingParams_Get_alphaType(const MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Modifies a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `alphaType`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Set_alphaType(MR_ObjectVoxels_VolumeRenderingParams *_this, MR_ObjectVoxels_VolumeRenderingParams_AlphaType value);

/// Returns a mutable pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `alphaType`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectVoxels_VolumeRenderingParams_AlphaType *MR_ObjectVoxels_VolumeRenderingParams_GetMutable_alphaType(MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Returns a pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `alphaLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const uint8_t *MR_ObjectVoxels_VolumeRenderingParams_Get_alphaLimit(const MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Modifies a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `alphaLimit`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Set_alphaLimit(MR_ObjectVoxels_VolumeRenderingParams *_this, uint8_t value);

/// Returns a mutable pointer to a member variable of class `MR::ObjectVoxels::VolumeRenderingParams` named `alphaLimit`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API uint8_t *MR_ObjectVoxels_VolumeRenderingParams_GetMutable_alphaLimit(MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectVoxels_VolumeRenderingParams_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectVoxels_VolumeRenderingParams *MR_ObjectVoxels_VolumeRenderingParams_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_ObjectVoxels_VolumeRenderingParams_DestroyArray()`.
/// Use `MR_ObjectVoxels_VolumeRenderingParams_OffsetMutablePtr()` and `MR_ObjectVoxels_VolumeRenderingParams_OffsetPtr()` to access the array elements.
MRC_API MR_ObjectVoxels_VolumeRenderingParams *MR_ObjectVoxels_VolumeRenderingParams_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::ObjectVoxels::VolumeRenderingParams` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectVoxels_VolumeRenderingParams_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectVoxels_VolumeRenderingParams *MR_ObjectVoxels_VolumeRenderingParams_ConstructFrom(MR_FilterType volumeFilterType, MR_ObjectVoxels_VolumeRenderingParams_ShadingType shadingType, MR_ObjectVoxels_VolumeRenderingParams_LutType lutType, MR_Color oneColor, float min, float max, float samplingStep, MR_ObjectVoxels_VolumeRenderingParams_AlphaType alphaType, uint8_t alphaLimit);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectVoxels_VolumeRenderingParams *MR_ObjectVoxels_VolumeRenderingParams_OffsetPtr(const MR_ObjectVoxels_VolumeRenderingParams *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectVoxels_VolumeRenderingParams *MR_ObjectVoxels_VolumeRenderingParams_OffsetMutablePtr(MR_ObjectVoxels_VolumeRenderingParams *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::ObjectVoxels::VolumeRenderingParams`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_ObjectVoxels_VolumeRenderingParams_Destroy()` to free it when you're done using it.
MRC_API MR_ObjectVoxels_VolumeRenderingParams *MR_ObjectVoxels_VolumeRenderingParams_ConstructFromAnother(const MR_ObjectVoxels_VolumeRenderingParams *_other);

/// Destroys a heap-allocated instance of `MR_ObjectVoxels_VolumeRenderingParams`. Does nothing if the pointer is null.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_Destroy(const MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Destroys a heap-allocated array of `MR_ObjectVoxels_VolumeRenderingParams`. Does nothing if the pointer is null.
MRC_API void MR_ObjectVoxels_VolumeRenderingParams_DestroyArray(const MR_ObjectVoxels_VolumeRenderingParams *_this);

/// Generated from a method of class `MR::ObjectVoxels::VolumeRenderingParams` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_ObjectVoxels_VolumeRenderingParams *MR_ObjectVoxels_VolumeRenderingParams_AssignFromAnother(MR_ObjectVoxels_VolumeRenderingParams *_this, const MR_ObjectVoxels_VolumeRenderingParams *_other);

/// Generated from a method of class `MR::ObjectVoxels::VolumeRenderingParams` named `operator==`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_1` can not be null. It is a single object.
MRC_API bool MR_equal_MR_ObjectVoxels_VolumeRenderingParams(const MR_ObjectVoxels_VolumeRenderingParams *_this, const MR_ObjectVoxels_VolumeRenderingParams *_1);

/// returns file extension used to serialize ObjectVoxels by default (if not overridden in specific object),
/// the string starts with '.'
/// Generated from function `MR::defaultSerializeVoxelsFormat`.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_defaultSerializeVoxelsFormat(void);

/// sets file extension used to serialize serialize ObjectVoxels by default (if not overridden in specific object),
/// the string must start from '.'
/// Generated from function `MR::setDefaultSerializeVoxelsFormat`.
/// Parameter `newFormat` can not be null.
/// If `newFormat_end` is null, then `newFormat` is assumed to be null-terminated.
MRC_API void MR_setDefaultSerializeVoxelsFormat(const char *newFormat, const char *newFormat_end);

#ifdef __cplusplus
} // extern "C"
#endif
