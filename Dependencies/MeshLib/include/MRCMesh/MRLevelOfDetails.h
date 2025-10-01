// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.
typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.


/// divides given mesh into hierarchy of mesh objects:
/// the deepest level of the hierarchy has all details from the original mesh;
/// top levels have progressively less number of objects and less details in each;
/// the number of faces in any object on any level is about the same.
/// Generated from function `MR::makeLevelOfDetails`.
/// Parameter `mesh` can not be null. It is a single object.
/// In C++ this parameter takes an rvalue reference: it might invalidate the passed object,
///   but if your pointer is owning, you must still destroy it manually later.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_makeLevelOfDetails(MR_Mesh *mesh, int32_t maxDepth);

#ifdef __cplusplus
} // extern "C"
#endif
