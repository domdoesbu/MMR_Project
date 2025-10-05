// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_expected_MR_Mesh_std_string MR_expected_MR_Mesh_std_string; // Defined in `#include <MRCMisc/expected_MR_Mesh_std_string.h>`.
typedef struct MR_expected_void_std_string MR_expected_void_std_string; // Defined in `#include <MRCMisc/expected_void_std_string.h>`.
typedef struct MR_std_shared_ptr_MR_PointCloud MR_std_shared_ptr_MR_PointCloud; // Defined in `#include <MRCMisc/std_shared_ptr_MR_PointCloud.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.


/**
* \brief Class for making mesh from regular distance map
* \details distance for each lattice of map is defined as 
* point on ray from surface point cloud to direction point cloud,
* with length equal to 1/distance from distances file 
* (if distance in file == 0 ray had no point) 
*
*/
/// Generated from class `MR::RegularMapMesher`.
typedef struct MR_RegularMapMesher MR_RegularMapMesher;

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegularMapMesher_Destroy()` to free it when you're done using it.
MRC_API MR_RegularMapMesher *MR_RegularMapMesher_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_RegularMapMesher_DestroyArray()`.
/// Use `MR_RegularMapMesher_OffsetMutablePtr()` and `MR_RegularMapMesher_OffsetPtr()` to access the array elements.
MRC_API MR_RegularMapMesher *MR_RegularMapMesher_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_RegularMapMesher *MR_RegularMapMesher_OffsetPtr(const MR_RegularMapMesher *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_RegularMapMesher *MR_RegularMapMesher_OffsetMutablePtr(MR_RegularMapMesher *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::RegularMapMesher`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_RegularMapMesher_Destroy()` to free it when you're done using it.
MRC_API MR_RegularMapMesher *MR_RegularMapMesher_ConstructFromAnother(MR_PassBy _other_pass_by, MR_RegularMapMesher *_other);

/// Destroys a heap-allocated instance of `MR_RegularMapMesher`. Does nothing if the pointer is null.
MRC_API void MR_RegularMapMesher_Destroy(const MR_RegularMapMesher *_this);

/// Destroys a heap-allocated array of `MR_RegularMapMesher`. Does nothing if the pointer is null.
MRC_API void MR_RegularMapMesher_DestroyArray(const MR_RegularMapMesher *_this);

/// Generated from a method of class `MR::RegularMapMesher` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_RegularMapMesher *MR_RegularMapMesher_AssignFromAnother(MR_RegularMapMesher *_this, MR_PassBy _other_pass_by, MR_RegularMapMesher *_other);

/// Sets surface Point Cloud
/// Generated from a method of class `MR::RegularMapMesher` named `setSurfacePC`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `surfacePC` can not be null. It is a single object.
MRC_API void MR_RegularMapMesher_setSurfacePC(MR_RegularMapMesher *_this, const MR_std_shared_ptr_MR_PointCloud *surfacePC);

/// Sets directions Point Cloud
/// Generated from a method of class `MR::RegularMapMesher` named `setDirectionsPC`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `directionsPC` can not be null. It is a single object.
MRC_API void MR_RegularMapMesher_setDirectionsPC(MR_RegularMapMesher *_this, const MR_std_shared_ptr_MR_PointCloud *directionsPC);

/// Loads distances form distances file (1/distance)
/// Generated from a method of class `MR::RegularMapMesher` named `loadDistances`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `path` is a UTF-8 encoded filesystem path.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_void_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_void_std_string *MR_RegularMapMesher_loadDistances(MR_RegularMapMesher *_this, int32_t width, int32_t height, const char *path, const char *path_end);

/// Sets distances
/// Generated from a method of class `MR::RegularMapMesher` named `setDistances`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `distances` can not be null. It is a single object.
MRC_API void MR_RegularMapMesher_setDistances(MR_RegularMapMesher *_this, int32_t width, int32_t height, const MR_std_vector_float *distances);

/// Creates mesh if all components were successfully loaded
/// Generated from a method of class `MR::RegularMapMesher` named `createMesh`.
/// Parameter `_this` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_expected_MR_Mesh_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_expected_MR_Mesh_std_string *MR_RegularMapMesher_createMesh(const MR_RegularMapMesher *_this);

#ifdef __cplusplus
} // extern "C"
#endif
