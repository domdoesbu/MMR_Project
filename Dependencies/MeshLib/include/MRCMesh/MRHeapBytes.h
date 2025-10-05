// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Vector_MR_MeshTexture_MR_TextureId MR_Vector_MR_MeshTexture_MR_TextureId; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_std_shared_ptr_MR_Mesh MR_std_shared_ptr_MR_Mesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Mesh.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_MR_PointCloud MR_std_shared_ptr_MR_PointCloud; // Defined in `#include <MRCMisc/std_shared_ptr_MR_PointCloud.h>`.
typedef struct MR_std_shared_ptr_MR_Polyline3 MR_std_shared_ptr_MR_Polyline3; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Polyline3.h>`.
typedef struct MR_std_vector_MR_Color MR_std_vector_MR_Color; // Defined in `#include <MRCMisc/std_vector_MR_Color.h>`.
typedef struct MR_std_vector_float MR_std_vector_float; // Defined in `#include <MRCMisc/std_vector_float.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_Object MR_std_vector_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_vector_uint64_t MR_std_vector_uint64_t; // Defined in `#include <MRCMisc/std_vector_uint64_t.h>`.


/// returns the amount of memory given vector occupies on heap
/// Generated from function `MR::heapBytes<MR::Color>`.
/// Parameter `vec` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_MR_Color(const MR_std_vector_MR_Color *vec);

/// returns the amount of memory given vector occupies on heap
/// Generated from function `MR::heapBytes<std::shared_ptr<MR::Object>>`.
/// Parameter `vec` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_std_shared_ptr_MR_Object(const MR_std_vector_std_shared_ptr_MR_Object *vec);

/// returns the amount of memory given vector occupies on heap
/// Generated from function `MR::heapBytes<float>`.
/// Parameter `vec` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_float(const MR_std_vector_float *vec);

/// returns the amount of memory given vector occupies on heap
/// Generated from function `MR::heapBytes<MR_uint64_t>`.
/// Parameter `vec` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_uint64_t(const MR_std_vector_uint64_t *vec);

/// Generated from function `MR::heapBytes<MR::MeshTexture, MR::TextureId>`.
/// Parameter `vec` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_MR_MeshTexture_MR_TextureId(const MR_Vector_MR_MeshTexture_MR_TextureId *vec);

/// returns the amount of memory this smart pointer and its pointed object own together on heap
/// Generated from function `MR::heapBytes<MR::Mesh>`.
/// Parameter `ptr` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_MR_Mesh(const MR_std_shared_ptr_MR_Mesh *ptr);

/// returns the amount of memory this smart pointer and its pointed object own together on heap
/// Generated from function `MR::heapBytes<MR::Object>`.
/// Parameter `ptr` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_MR_Object(const MR_std_shared_ptr_MR_Object *ptr);

/// returns the amount of memory this smart pointer and its pointed object own together on heap
/// Generated from function `MR::heapBytes<MR::PointCloud>`.
/// Parameter `ptr` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_MR_PointCloud(const MR_std_shared_ptr_MR_PointCloud *ptr);

/// returns the amount of memory this smart pointer and its pointed object own together on heap
/// Generated from function `MR::heapBytes<MR::Polyline3>`.
/// Parameter `ptr` can not be null. It is a single object.
MRC_API MR_uint64_t MR_heapBytes_MR_Polyline3(const MR_std_shared_ptr_MR_Polyline3 *ptr);

#ifdef __cplusplus
} // extern "C"
#endif
