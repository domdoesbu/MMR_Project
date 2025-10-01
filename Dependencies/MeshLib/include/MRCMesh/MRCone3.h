// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_Line3d MR_Line3d; // Defined in `#include <MRCMesh/MRLine.h>`.
typedef struct MR_Line3f MR_Line3f; // Defined in `#include <MRCMesh/MRLine.h>`.


// Base class for cone parameterization
/// Generated from class `MR::Cone3f`.
typedef struct MR_Cone3f MR_Cone3f;

// Base class for cone parameterization
/// Generated from class `MR::Cone3d`.
typedef struct MR_Cone3d MR_Cone3d;

// the combination of the apex of the cone and the direction of its main axis in space. 
/// Returns a pointer to a member variable of class `MR::Cone3f` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line3f *MR_Cone3f_Get_axis(const MR_Cone3f *_this);

// the combination of the apex of the cone and the direction of its main axis in space. 
/// Modifies a member variable of class `MR::Cone3f` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_Cone3f_Set_axis(MR_Cone3f *_this, const MR_Line3f *value);

// the combination of the apex of the cone and the direction of its main axis in space. 
/// Returns a mutable pointer to a member variable of class `MR::Cone3f` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3f *MR_Cone3f_GetMutable_axis(MR_Cone3f *_this);

// cone angle, main axis vs side
/// Returns a pointer to a member variable of class `MR::Cone3f` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Cone3f_Get_angle(const MR_Cone3f *_this);

// cone angle, main axis vs side
/// Modifies a member variable of class `MR::Cone3f` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cone3f_Set_angle(MR_Cone3f *_this, float value);

// cone angle, main axis vs side
/// Returns a mutable pointer to a member variable of class `MR::Cone3f` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Cone3f_GetMutable_angle(MR_Cone3f *_this);

// cone height
/// Returns a pointer to a member variable of class `MR::Cone3f` named `height`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const float *MR_Cone3f_Get_height(const MR_Cone3f *_this);

// cone height
/// Modifies a member variable of class `MR::Cone3f` named `height`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cone3f_Set_height(MR_Cone3f *_this, float value);

// cone height
/// Returns a mutable pointer to a member variable of class `MR::Cone3f` named `height`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API float *MR_Cone3f_GetMutable_height(MR_Cone3f *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cone3f_Destroy()` to free it when you're done using it.
MRC_API MR_Cone3f *MR_Cone3f_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Cone3f_DestroyArray()`.
/// Use `MR_Cone3f_OffsetMutablePtr()` and `MR_Cone3f_OffsetPtr()` to access the array elements.
MRC_API MR_Cone3f *MR_Cone3f_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Cone3f *MR_Cone3f_OffsetPtr(const MR_Cone3f *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Cone3f *MR_Cone3f_OffsetMutablePtr(MR_Cone3f *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Cone3f`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cone3f_Destroy()` to free it when you're done using it.
MRC_API MR_Cone3f *MR_Cone3f_ConstructFromAnother(const MR_Cone3f *_other);

// inAxis -- apex position and main axis direction.  For any cone point dot( point , direction ) >=0
// inAngle -- cone angle, main axis vs side
// inHeight -- cone inHeight
// main axis direction could be non normalized.
/// Generated from a constructor of class `MR::Cone3f`.
/// Parameter `inAxis` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cone3f_Destroy()` to free it when you're done using it.
MRC_API MR_Cone3f *MR_Cone3f_Construct(const MR_Line3f *inAxis, float inAngle, float inHeight);

/// Destroys a heap-allocated instance of `MR_Cone3f`. Does nothing if the pointer is null.
MRC_API void MR_Cone3f_Destroy(const MR_Cone3f *_this);

/// Destroys a heap-allocated array of `MR_Cone3f`. Does nothing if the pointer is null.
MRC_API void MR_Cone3f_DestroyArray(const MR_Cone3f *_this);

/// Generated from a method of class `MR::Cone3f` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Cone3f *MR_Cone3f_AssignFromAnother(MR_Cone3f *_this, const MR_Cone3f *_other);

// now we use an apex as center of the cone. 
/// Generated from a method of class `MR::Cone3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Cone3f_center(MR_Cone3f *_this);

// now we use an apex as center of the cone. 
/// Generated from a method of class `MR::Cone3f` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Cone3f_center_const(const MR_Cone3f *_this);

// main axis direction. It could be non normalized. For any cone point dot( point , direction ) >=0
/// Generated from a method of class `MR::Cone3f` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Cone3f_direction(MR_Cone3f *_this);

// main axis direction. It could be non normalized. For any cone point dot( point , direction ) >=0
/// Generated from a method of class `MR::Cone3f` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Cone3f_direction_const(const MR_Cone3f *_this);

// return cone apex position 
/// Generated from a method of class `MR::Cone3f` named `apex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3f *MR_Cone3f_apex(MR_Cone3f *_this);

// return cone apex position
/// Generated from a method of class `MR::Cone3f` named `apex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3f *MR_Cone3f_apex_const(const MR_Cone3f *_this);

/// Generated from a method of class `MR::Cone3f` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
MRC_API MR_Vector3f MR_Cone3f_projectPoint(const MR_Cone3f *_this, const MR_Vector3f *point);

// the combination of the apex of the cone and the direction of its main axis in space. 
/// Returns a pointer to a member variable of class `MR::Cone3d` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Line3d *MR_Cone3d_Get_axis(const MR_Cone3d *_this);

// the combination of the apex of the cone and the direction of its main axis in space. 
/// Modifies a member variable of class `MR::Cone3d` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null. It is a single object.
MRC_API void MR_Cone3d_Set_axis(MR_Cone3d *_this, const MR_Line3d *value);

// the combination of the apex of the cone and the direction of its main axis in space. 
/// Returns a mutable pointer to a member variable of class `MR::Cone3d` named `axis`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Line3d *MR_Cone3d_GetMutable_axis(MR_Cone3d *_this);

// cone angle, main axis vs side
/// Returns a pointer to a member variable of class `MR::Cone3d` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Cone3d_Get_angle(const MR_Cone3d *_this);

// cone angle, main axis vs side
/// Modifies a member variable of class `MR::Cone3d` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cone3d_Set_angle(MR_Cone3d *_this, double value);

// cone angle, main axis vs side
/// Returns a mutable pointer to a member variable of class `MR::Cone3d` named `angle`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Cone3d_GetMutable_angle(MR_Cone3d *_this);

// cone height
/// Returns a pointer to a member variable of class `MR::Cone3d` named `height`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_Cone3d_Get_height(const MR_Cone3d *_this);

// cone height
/// Modifies a member variable of class `MR::Cone3d` named `height`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_Cone3d_Set_height(MR_Cone3d *_this, double value);

// cone height
/// Returns a mutable pointer to a member variable of class `MR::Cone3d` named `height`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_Cone3d_GetMutable_height(MR_Cone3d *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cone3d_Destroy()` to free it when you're done using it.
MRC_API MR_Cone3d *MR_Cone3d_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_Cone3d_DestroyArray()`.
/// Use `MR_Cone3d_OffsetMutablePtr()` and `MR_Cone3d_OffsetPtr()` to access the array elements.
MRC_API MR_Cone3d *MR_Cone3d_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_Cone3d *MR_Cone3d_OffsetPtr(const MR_Cone3d *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_Cone3d *MR_Cone3d_OffsetMutablePtr(MR_Cone3d *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::Cone3d`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cone3d_Destroy()` to free it when you're done using it.
MRC_API MR_Cone3d *MR_Cone3d_ConstructFromAnother(const MR_Cone3d *_other);

// inAxis -- apex position and main axis direction.  For any cone point dot( point , direction ) >=0
// inAngle -- cone angle, main axis vs side
// inHeight -- cone inHeight
// main axis direction could be non normalized.
/// Generated from a constructor of class `MR::Cone3d`.
/// Parameter `inAxis` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_Cone3d_Destroy()` to free it when you're done using it.
MRC_API MR_Cone3d *MR_Cone3d_Construct(const MR_Line3d *inAxis, double inAngle, double inHeight);

/// Destroys a heap-allocated instance of `MR_Cone3d`. Does nothing if the pointer is null.
MRC_API void MR_Cone3d_Destroy(const MR_Cone3d *_this);

/// Destroys a heap-allocated array of `MR_Cone3d`. Does nothing if the pointer is null.
MRC_API void MR_Cone3d_DestroyArray(const MR_Cone3d *_this);

/// Generated from a method of class `MR::Cone3d` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Cone3d *MR_Cone3d_AssignFromAnother(MR_Cone3d *_this, const MR_Cone3d *_other);

// now we use an apex as center of the cone. 
/// Generated from a method of class `MR::Cone3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Cone3d_center(MR_Cone3d *_this);

// now we use an apex as center of the cone. 
/// Generated from a method of class `MR::Cone3d` named `center`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Cone3d_center_const(const MR_Cone3d *_this);

// main axis direction. It could be non normalized. For any cone point dot( point , direction ) >=0
/// Generated from a method of class `MR::Cone3d` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Cone3d_direction(MR_Cone3d *_this);

// main axis direction. It could be non normalized. For any cone point dot( point , direction ) >=0
/// Generated from a method of class `MR::Cone3d` named `direction`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Cone3d_direction_const(const MR_Cone3d *_this);

// return cone apex position 
/// Generated from a method of class `MR::Cone3d` named `apex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_Cone3d_apex(MR_Cone3d *_this);

// return cone apex position
/// Generated from a method of class `MR::Cone3d` named `apex`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_Cone3d_apex_const(const MR_Cone3d *_this);

/// Generated from a method of class `MR::Cone3d` named `projectPoint`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `point` can not be null. It is a single object.
MRC_API MR_Vector3d MR_Cone3d_projectPoint(const MR_Cone3d *_this, const MR_Vector3d *point);

#ifdef __cplusplus
} // extern "C"
#endif
