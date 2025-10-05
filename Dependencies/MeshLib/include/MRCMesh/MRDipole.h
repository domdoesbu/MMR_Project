// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRId.h>
#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_AABBTree MR_AABBTree; // Defined in `#include <MRCMesh/MRAABBTree.h>`.
typedef struct MR_Dipoles MR_Dipoles; // Defined in `#include <MRCMesh/MRVector.h>`.
typedef struct MR_Mesh MR_Mesh; // Defined in `#include <MRCMesh/MRMesh.h>`.


/// Single oriented point or two oppositely charged points close together, representing a mesh part (one or more triangles)
/// https://www.dgp.toronto.edu/projects/fast-winding-numbers/fast-winding-numbers-for-soups-and-clouds-siggraph-2018-barill-et-al.pdf
/// Generated from class `MR::Dipole`.
typedef struct MR_Dipole MR_Dipole;

/// Returns a pointer to a member variable of class `MR::Dipole` named `pos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Dipole_Get_pos(const MR_Dipole *_this);

/// Modifies a member variable of class `MR::Dipole` named `pos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Dipole_Set_pos(MR_Dipole *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Dipole` named `pos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Dipole_GetMutable_pos(MR_Dipole *_this);

/// Returns a pointer to a member variable of class `MR::Dipole` named `area`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Dipole_Get_area(const MR_Dipole *_this);

/// Modifies a member variable of class `MR::Dipole` named `area`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Dipole_Set_area(MR_Dipole *_this, float value);

/// Returns a mutable pointer to a member variable of class `MR::Dipole` named `area`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Dipole_GetMutable_area(MR_Dipole *_this);

/// Returns a pointer to a member variable of class `MR::Dipole` named `dirArea`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Dipole_Get_dirArea(const MR_Dipole *_this);

/// Modifies a member variable of class `MR::Dipole` named `dirArea`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Dipole_Set_dirArea(MR_Dipole *_this, MR_Vector3f value);

/// Returns a mutable pointer to a member variable of class `MR::Dipole` named `dirArea`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Dipole_GetMutable_dirArea(MR_Dipole *_this);

// maximum squared distance from pos to any corner of the bounding box
/// Returns a pointer to a member variable of class `MR::Dipole` named `rr`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Dipole_Get_rr(const MR_Dipole *_this);

// maximum squared distance from pos to any corner of the bounding box
/// Modifies a member variable of class `MR::Dipole` named `rr`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Dipole_Set_rr(MR_Dipole *_this, float value);

// maximum squared distance from pos to any corner of the bounding box
/// Returns a mutable pointer to a member variable of class `MR::Dipole` named `rr`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Dipole_GetMutable_rr(MR_Dipole *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Dipole_Destroy()` to free it when you're done using it.
MRC_API MR_Dipole *MR_Dipole_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Dipole_DestroyArray()`.
/// Use `MR_Dipole_OffsetMutablePtr()` and `MR_Dipole_OffsetPtr()` to access the array elements.
MRC_API MR_Dipole *MR_Dipole_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::Dipole` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Dipole_Destroy()` to free it when you're done using it.
MRC_API MR_Dipole *MR_Dipole_ConstructFrom(MR_Vector3f pos, float area, MR_Vector3f dirArea, float rr);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Dipole *MR_Dipole_OffsetPtr(const MR_Dipole *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Dipole *MR_Dipole_OffsetMutablePtr(MR_Dipole *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Dipole`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Dipole_Destroy()` to free it when you're done using it.
MRC_API MR_Dipole *MR_Dipole_ConstructFromAnother(const MR_Dipole *_other);

/// Destroys a heap-allocated instance of `MR_Dipole`. Does nothing if the pointer is null.
MRC_API void MR_Dipole_Destroy(const MR_Dipole *_this);

/// Destroys a heap-allocated array of `MR_Dipole`. Does nothing if the pointer is null.
MRC_API void MR_Dipole_DestroyArray(const MR_Dipole *_this);

/// Generated from a method of class `MR::Dipole` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Dipole *MR_Dipole_AssignFromAnother(MR_Dipole *_this, const MR_Dipole *_other);

/// returns true if this dipole is good approximation for a point \param q;
/// and adds the contribution of this dipole to the winding number at point \param q to \param addTo
/// Generated from a method of class `MR::Dipole` named `addIfGoodApprox`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `q` can not be null. It is a single object.
/// Parameter `addTo` can not be null. It is a single object.
MRC_API bool MR_Dipole_addIfGoodApprox(const MR_Dipole *_this, const MR_Vector3f *q, float betaSq, float *addTo);

/// calculates dipoles for given mesh and AABB-tree
/// Generated from function `MR::calcDipoles`.
/// Parameter `dipoles` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
MRC_API void MR_calcDipoles_3(MR_Dipoles *dipoles, const MR_AABBTree *tree, const MR_Mesh *mesh);

/// Generated from function `MR::calcDipoles`.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Dipoles_Destroy()` to free it when you're done using it.
MRC_API MR_Dipoles *MR_calcDipoles_2(const MR_AABBTree *tree, const MR_Mesh *mesh);

/// compute approximate winding number at \param q;
/// \param beta determines the precision of the approximation: the more the better, recommended value 2 or more;
/// if distance from q to the center of some triangle group is more than beta times the distance from the center to most distance triangle in the group then we use approximate formula
/// \param skipFace this triangle (if it is close to \param q) will be skipped from summation
/// Generated from function `MR::calcFastWindingNumber`.
/// Parameter `dipoles` can not be null. It is a single object.
/// Parameter `tree` can not be null. It is a single object.
/// Parameter `mesh` can not be null. It is a single object.
/// Parameter `q` can not be null. It is a single object.
MRC_API float MR_calcFastWindingNumber(const MR_Dipoles *dipoles, const MR_AABBTree *tree, const MR_Mesh *mesh, const MR_Vector3f *q, float beta, MR_FaceId skipFace);

#ifdef __cplusplus
} // extern "C"
#endif
