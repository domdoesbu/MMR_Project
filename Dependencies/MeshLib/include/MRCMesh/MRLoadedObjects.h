// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/common.h>
#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectLines MR_std_shared_ptr_MR_ObjectLines; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectLines.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectMesh MR_std_shared_ptr_MR_ObjectMesh; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectMesh.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectPoints MR_std_shared_ptr_MR_ObjectPoints; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectPoints.h>`.
typedef struct MR_std_shared_ptr_MR_ObjectVoxels MR_std_shared_ptr_MR_ObjectVoxels; // Defined in `#include <MRCMisc/std_shared_ptr_MR_ObjectVoxels.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.
typedef struct MR_std_vector_std_shared_ptr_MR_Object MR_std_vector_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_vector_std_shared_ptr_MR_Object.h>`.


/// result of loading (e.g. from a file) as one object (with possible subobjects)
/// Generated from class `MR::LoadedObjectT<>`.
typedef struct MR_LoadedObjectT MR_LoadedObjectT;

/// result of loading (e.g. from a file) as one object (with possible subobjects)
/// Generated from class `MR::LoadedObjectT<MR::ObjectMesh>`.
typedef struct MR_LoadedObjectT_MR_ObjectMesh MR_LoadedObjectT_MR_ObjectMesh;

/// result of loading (e.g. from a file) as one object (with possible subobjects)
/// Generated from class `MR::LoadedObjectT<MR::ObjectPoints>`.
typedef struct MR_LoadedObjectT_MR_ObjectPoints MR_LoadedObjectT_MR_ObjectPoints;

/// result of loading (e.g. from a file) as one object (with possible subobjects)
/// Generated from class `MR::LoadedObjectT<MR::ObjectLines>`.
typedef struct MR_LoadedObjectT_MR_ObjectLines MR_LoadedObjectT_MR_ObjectLines;

/// result of loading (e.g. from a file) as one object (with possible subobjects)
/// Generated from class `MR::LoadedObjectT<MR::ObjectVoxels>`.
typedef struct MR_LoadedObjectT_MR_ObjectVoxels MR_LoadedObjectT_MR_ObjectVoxels;

/// result of loading (e.g. from a file) as a number of objects
/// Generated from class `MR::LoadedObjects`.
typedef struct MR_LoadedObjects MR_LoadedObjects;

/// Returns a pointer to a member variable of class `MR::LoadedObjectT<>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_Object *MR_LoadedObjectT_Get_obj(const MR_LoadedObjectT *_this);

/// Modifies a member variable of class `MR::LoadedObjectT<>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LoadedObjectT_Set_obj(MR_LoadedObjectT *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_Object *value);

/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_Object *MR_LoadedObjectT_GetMutable_obj(MR_LoadedObjectT *_this);

//either empty or ends with '\n'
/// Returns a pointer to a member variable of class `MR::LoadedObjectT<>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_LoadedObjectT_Get_warnings(const MR_LoadedObjectT *_this);

//either empty or ends with '\n'
/// Modifies a member variable of class `MR::LoadedObjectT<>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_LoadedObjectT_Set_warnings(MR_LoadedObjectT *_this, const char *value, const char *value_end);

//either empty or ends with '\n'
/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_LoadedObjectT_GetMutable_warnings(MR_LoadedObjectT *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT *MR_LoadedObjectT_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LoadedObjectT_DestroyArray()`.
/// Use `MR_LoadedObjectT_OffsetMutablePtr()` and `MR_LoadedObjectT_OffsetPtr()` to access the array elements.
MRC_API MR_LoadedObjectT *MR_LoadedObjectT_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LoadedObjectT<>` elementwise.
/// Parameter `warnings` can not be null.
/// If `warnings_end` is null, then `warnings` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT *MR_LoadedObjectT_ConstructFrom(MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_Object *obj, const char *warnings, const char *warnings_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LoadedObjectT *MR_LoadedObjectT_OffsetPtr(const MR_LoadedObjectT *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LoadedObjectT *MR_LoadedObjectT_OffsetMutablePtr(MR_LoadedObjectT *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LoadedObjectT<>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT *MR_LoadedObjectT_ConstructFromAnother(MR_PassBy _other_pass_by, MR_LoadedObjectT *_other);

/// Destroys a heap-allocated instance of `MR_LoadedObjectT`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_Destroy(const MR_LoadedObjectT *_this);

/// Destroys a heap-allocated array of `MR_LoadedObjectT`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_DestroyArray(const MR_LoadedObjectT *_this);

/// Generated from a method of class `MR::LoadedObjectT<>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LoadedObjectT *MR_LoadedObjectT_AssignFromAnother(MR_LoadedObjectT *_this, MR_PassBy _other_pass_by, MR_LoadedObjectT *_other);

/// Returns a pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectMesh>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_ObjectMesh *MR_LoadedObjectT_MR_ObjectMesh_Get_obj(const MR_LoadedObjectT_MR_ObjectMesh *_this);

/// Modifies a member variable of class `MR::LoadedObjectT<MR::ObjectMesh>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LoadedObjectT_MR_ObjectMesh_Set_obj(MR_LoadedObjectT_MR_ObjectMesh *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_ObjectMesh *value);

/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectMesh>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_ObjectMesh *MR_LoadedObjectT_MR_ObjectMesh_GetMutable_obj(MR_LoadedObjectT_MR_ObjectMesh *_this);

//either empty or ends with '\n'
/// Returns a pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectMesh>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_LoadedObjectT_MR_ObjectMesh_Get_warnings(const MR_LoadedObjectT_MR_ObjectMesh *_this);

//either empty or ends with '\n'
/// Modifies a member variable of class `MR::LoadedObjectT<MR::ObjectMesh>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_LoadedObjectT_MR_ObjectMesh_Set_warnings(MR_LoadedObjectT_MR_ObjectMesh *_this, const char *value, const char *value_end);

//either empty or ends with '\n'
/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectMesh>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_LoadedObjectT_MR_ObjectMesh_GetMutable_warnings(MR_LoadedObjectT_MR_ObjectMesh *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectMesh_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectMesh *MR_LoadedObjectT_MR_ObjectMesh_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LoadedObjectT_MR_ObjectMesh_DestroyArray()`.
/// Use `MR_LoadedObjectT_MR_ObjectMesh_OffsetMutablePtr()` and `MR_LoadedObjectT_MR_ObjectMesh_OffsetPtr()` to access the array elements.
MRC_API MR_LoadedObjectT_MR_ObjectMesh *MR_LoadedObjectT_MR_ObjectMesh_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LoadedObjectT<MR::ObjectMesh>` elementwise.
/// Parameter `warnings` can not be null.
/// If `warnings_end` is null, then `warnings` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectMesh_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectMesh *MR_LoadedObjectT_MR_ObjectMesh_ConstructFrom(MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectMesh *obj, const char *warnings, const char *warnings_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LoadedObjectT_MR_ObjectMesh *MR_LoadedObjectT_MR_ObjectMesh_OffsetPtr(const MR_LoadedObjectT_MR_ObjectMesh *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LoadedObjectT_MR_ObjectMesh *MR_LoadedObjectT_MR_ObjectMesh_OffsetMutablePtr(MR_LoadedObjectT_MR_ObjectMesh *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LoadedObjectT<MR::ObjectMesh>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectMesh_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectMesh *MR_LoadedObjectT_MR_ObjectMesh_ConstructFromAnother(MR_PassBy _other_pass_by, MR_LoadedObjectT_MR_ObjectMesh *_other);

/// Destroys a heap-allocated instance of `MR_LoadedObjectT_MR_ObjectMesh`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_MR_ObjectMesh_Destroy(const MR_LoadedObjectT_MR_ObjectMesh *_this);

/// Destroys a heap-allocated array of `MR_LoadedObjectT_MR_ObjectMesh`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_MR_ObjectMesh_DestroyArray(const MR_LoadedObjectT_MR_ObjectMesh *_this);

/// Generated from a method of class `MR::LoadedObjectT<MR::ObjectMesh>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LoadedObjectT_MR_ObjectMesh *MR_LoadedObjectT_MR_ObjectMesh_AssignFromAnother(MR_LoadedObjectT_MR_ObjectMesh *_this, MR_PassBy _other_pass_by, MR_LoadedObjectT_MR_ObjectMesh *_other);

/// Returns a pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectPoints>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_ObjectPoints *MR_LoadedObjectT_MR_ObjectPoints_Get_obj(const MR_LoadedObjectT_MR_ObjectPoints *_this);

/// Modifies a member variable of class `MR::LoadedObjectT<MR::ObjectPoints>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LoadedObjectT_MR_ObjectPoints_Set_obj(MR_LoadedObjectT_MR_ObjectPoints *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_ObjectPoints *value);

/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectPoints>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_ObjectPoints *MR_LoadedObjectT_MR_ObjectPoints_GetMutable_obj(MR_LoadedObjectT_MR_ObjectPoints *_this);

//either empty or ends with '\n'
/// Returns a pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectPoints>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_LoadedObjectT_MR_ObjectPoints_Get_warnings(const MR_LoadedObjectT_MR_ObjectPoints *_this);

//either empty or ends with '\n'
/// Modifies a member variable of class `MR::LoadedObjectT<MR::ObjectPoints>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_LoadedObjectT_MR_ObjectPoints_Set_warnings(MR_LoadedObjectT_MR_ObjectPoints *_this, const char *value, const char *value_end);

//either empty or ends with '\n'
/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectPoints>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_LoadedObjectT_MR_ObjectPoints_GetMutable_warnings(MR_LoadedObjectT_MR_ObjectPoints *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectPoints_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectPoints *MR_LoadedObjectT_MR_ObjectPoints_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LoadedObjectT_MR_ObjectPoints_DestroyArray()`.
/// Use `MR_LoadedObjectT_MR_ObjectPoints_OffsetMutablePtr()` and `MR_LoadedObjectT_MR_ObjectPoints_OffsetPtr()` to access the array elements.
MRC_API MR_LoadedObjectT_MR_ObjectPoints *MR_LoadedObjectT_MR_ObjectPoints_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LoadedObjectT<MR::ObjectPoints>` elementwise.
/// Parameter `warnings` can not be null.
/// If `warnings_end` is null, then `warnings` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectPoints_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectPoints *MR_LoadedObjectT_MR_ObjectPoints_ConstructFrom(MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectPoints *obj, const char *warnings, const char *warnings_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LoadedObjectT_MR_ObjectPoints *MR_LoadedObjectT_MR_ObjectPoints_OffsetPtr(const MR_LoadedObjectT_MR_ObjectPoints *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LoadedObjectT_MR_ObjectPoints *MR_LoadedObjectT_MR_ObjectPoints_OffsetMutablePtr(MR_LoadedObjectT_MR_ObjectPoints *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LoadedObjectT<MR::ObjectPoints>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectPoints_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectPoints *MR_LoadedObjectT_MR_ObjectPoints_ConstructFromAnother(MR_PassBy _other_pass_by, MR_LoadedObjectT_MR_ObjectPoints *_other);

/// Destroys a heap-allocated instance of `MR_LoadedObjectT_MR_ObjectPoints`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_MR_ObjectPoints_Destroy(const MR_LoadedObjectT_MR_ObjectPoints *_this);

/// Destroys a heap-allocated array of `MR_LoadedObjectT_MR_ObjectPoints`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_MR_ObjectPoints_DestroyArray(const MR_LoadedObjectT_MR_ObjectPoints *_this);

/// Generated from a method of class `MR::LoadedObjectT<MR::ObjectPoints>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LoadedObjectT_MR_ObjectPoints *MR_LoadedObjectT_MR_ObjectPoints_AssignFromAnother(MR_LoadedObjectT_MR_ObjectPoints *_this, MR_PassBy _other_pass_by, MR_LoadedObjectT_MR_ObjectPoints *_other);

/// Returns a pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectLines>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_ObjectLines *MR_LoadedObjectT_MR_ObjectLines_Get_obj(const MR_LoadedObjectT_MR_ObjectLines *_this);

/// Modifies a member variable of class `MR::LoadedObjectT<MR::ObjectLines>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LoadedObjectT_MR_ObjectLines_Set_obj(MR_LoadedObjectT_MR_ObjectLines *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_ObjectLines *value);

/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectLines>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_ObjectLines *MR_LoadedObjectT_MR_ObjectLines_GetMutable_obj(MR_LoadedObjectT_MR_ObjectLines *_this);

//either empty or ends with '\n'
/// Returns a pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectLines>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_LoadedObjectT_MR_ObjectLines_Get_warnings(const MR_LoadedObjectT_MR_ObjectLines *_this);

//either empty or ends with '\n'
/// Modifies a member variable of class `MR::LoadedObjectT<MR::ObjectLines>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_LoadedObjectT_MR_ObjectLines_Set_warnings(MR_LoadedObjectT_MR_ObjectLines *_this, const char *value, const char *value_end);

//either empty or ends with '\n'
/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectLines>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_LoadedObjectT_MR_ObjectLines_GetMutable_warnings(MR_LoadedObjectT_MR_ObjectLines *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectLines_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectLines *MR_LoadedObjectT_MR_ObjectLines_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LoadedObjectT_MR_ObjectLines_DestroyArray()`.
/// Use `MR_LoadedObjectT_MR_ObjectLines_OffsetMutablePtr()` and `MR_LoadedObjectT_MR_ObjectLines_OffsetPtr()` to access the array elements.
MRC_API MR_LoadedObjectT_MR_ObjectLines *MR_LoadedObjectT_MR_ObjectLines_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LoadedObjectT<MR::ObjectLines>` elementwise.
/// Parameter `warnings` can not be null.
/// If `warnings_end` is null, then `warnings` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectLines_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectLines *MR_LoadedObjectT_MR_ObjectLines_ConstructFrom(MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectLines *obj, const char *warnings, const char *warnings_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LoadedObjectT_MR_ObjectLines *MR_LoadedObjectT_MR_ObjectLines_OffsetPtr(const MR_LoadedObjectT_MR_ObjectLines *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LoadedObjectT_MR_ObjectLines *MR_LoadedObjectT_MR_ObjectLines_OffsetMutablePtr(MR_LoadedObjectT_MR_ObjectLines *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LoadedObjectT<MR::ObjectLines>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectLines_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectLines *MR_LoadedObjectT_MR_ObjectLines_ConstructFromAnother(MR_PassBy _other_pass_by, MR_LoadedObjectT_MR_ObjectLines *_other);

/// Destroys a heap-allocated instance of `MR_LoadedObjectT_MR_ObjectLines`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_MR_ObjectLines_Destroy(const MR_LoadedObjectT_MR_ObjectLines *_this);

/// Destroys a heap-allocated array of `MR_LoadedObjectT_MR_ObjectLines`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_MR_ObjectLines_DestroyArray(const MR_LoadedObjectT_MR_ObjectLines *_this);

/// Generated from a method of class `MR::LoadedObjectT<MR::ObjectLines>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LoadedObjectT_MR_ObjectLines *MR_LoadedObjectT_MR_ObjectLines_AssignFromAnother(MR_LoadedObjectT_MR_ObjectLines *_this, MR_PassBy _other_pass_by, MR_LoadedObjectT_MR_ObjectLines *_other);

/// Returns a pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectVoxels>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_shared_ptr_MR_ObjectVoxels *MR_LoadedObjectT_MR_ObjectVoxels_Get_obj(const MR_LoadedObjectT_MR_ObjectVoxels *_this);

/// Modifies a member variable of class `MR::LoadedObjectT<MR::ObjectVoxels>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LoadedObjectT_MR_ObjectVoxels_Set_obj(MR_LoadedObjectT_MR_ObjectVoxels *_this, MR_PassBy value_pass_by, MR_std_shared_ptr_MR_ObjectVoxels *value);

/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectVoxels>` named `obj`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_shared_ptr_MR_ObjectVoxels *MR_LoadedObjectT_MR_ObjectVoxels_GetMutable_obj(MR_LoadedObjectT_MR_ObjectVoxels *_this);

//either empty or ends with '\n'
/// Returns a pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectVoxels>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_LoadedObjectT_MR_ObjectVoxels_Get_warnings(const MR_LoadedObjectT_MR_ObjectVoxels *_this);

//either empty or ends with '\n'
/// Modifies a member variable of class `MR::LoadedObjectT<MR::ObjectVoxels>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_LoadedObjectT_MR_ObjectVoxels_Set_warnings(MR_LoadedObjectT_MR_ObjectVoxels *_this, const char *value, const char *value_end);

//either empty or ends with '\n'
/// Returns a mutable pointer to a member variable of class `MR::LoadedObjectT<MR::ObjectVoxels>` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_LoadedObjectT_MR_ObjectVoxels_GetMutable_warnings(MR_LoadedObjectT_MR_ObjectVoxels *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectVoxels_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectVoxels *MR_LoadedObjectT_MR_ObjectVoxels_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LoadedObjectT_MR_ObjectVoxels_DestroyArray()`.
/// Use `MR_LoadedObjectT_MR_ObjectVoxels_OffsetMutablePtr()` and `MR_LoadedObjectT_MR_ObjectVoxels_OffsetPtr()` to access the array elements.
MRC_API MR_LoadedObjectT_MR_ObjectVoxels *MR_LoadedObjectT_MR_ObjectVoxels_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LoadedObjectT<MR::ObjectVoxels>` elementwise.
/// Parameter `warnings` can not be null.
/// If `warnings_end` is null, then `warnings` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectVoxels_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectVoxels *MR_LoadedObjectT_MR_ObjectVoxels_ConstructFrom(MR_PassBy obj_pass_by, MR_std_shared_ptr_MR_ObjectVoxels *obj, const char *warnings, const char *warnings_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LoadedObjectT_MR_ObjectVoxels *MR_LoadedObjectT_MR_ObjectVoxels_OffsetPtr(const MR_LoadedObjectT_MR_ObjectVoxels *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LoadedObjectT_MR_ObjectVoxels *MR_LoadedObjectT_MR_ObjectVoxels_OffsetMutablePtr(MR_LoadedObjectT_MR_ObjectVoxels *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LoadedObjectT<MR::ObjectVoxels>`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjectT_MR_ObjectVoxels_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjectT_MR_ObjectVoxels *MR_LoadedObjectT_MR_ObjectVoxels_ConstructFromAnother(MR_PassBy _other_pass_by, MR_LoadedObjectT_MR_ObjectVoxels *_other);

/// Destroys a heap-allocated instance of `MR_LoadedObjectT_MR_ObjectVoxels`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_MR_ObjectVoxels_Destroy(const MR_LoadedObjectT_MR_ObjectVoxels *_this);

/// Destroys a heap-allocated array of `MR_LoadedObjectT_MR_ObjectVoxels`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjectT_MR_ObjectVoxels_DestroyArray(const MR_LoadedObjectT_MR_ObjectVoxels *_this);

/// Generated from a method of class `MR::LoadedObjectT<MR::ObjectVoxels>` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LoadedObjectT_MR_ObjectVoxels *MR_LoadedObjectT_MR_ObjectVoxels_AssignFromAnother(MR_LoadedObjectT_MR_ObjectVoxels *_this, MR_PassBy _other_pass_by, MR_LoadedObjectT_MR_ObjectVoxels *_other);

/// Returns a pointer to a member variable of class `MR::LoadedObjects` named `objs`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_vector_std_shared_ptr_MR_Object *MR_LoadedObjects_Get_objs(const MR_LoadedObjects *_this);

/// Modifies a member variable of class `MR::LoadedObjects` named `objs`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_LoadedObjects_Set_objs(MR_LoadedObjects *_this, MR_PassBy value_pass_by, MR_std_vector_std_shared_ptr_MR_Object *value);

/// Returns a mutable pointer to a member variable of class `MR::LoadedObjects` named `objs`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_vector_std_shared_ptr_MR_Object *MR_LoadedObjects_GetMutable_objs(MR_LoadedObjects *_this);

//either empty or ends with '\n'
/// Returns a pointer to a member variable of class `MR::LoadedObjects` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_std_string *MR_LoadedObjects_Get_warnings(const MR_LoadedObjects *_this);

//either empty or ends with '\n'
/// Modifies a member variable of class `MR::LoadedObjects` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `value` can not be null.
/// If `value_end` is null, then `value` is assumed to be null-terminated.
MRC_API void MR_LoadedObjects_Set_warnings(MR_LoadedObjects *_this, const char *value, const char *value_end);

//either empty or ends with '\n'
/// Returns a mutable pointer to a member variable of class `MR::LoadedObjects` named `warnings`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_string *MR_LoadedObjects_GetMutable_warnings(MR_LoadedObjects *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjects_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjects *MR_LoadedObjects_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_LoadedObjects_DestroyArray()`.
/// Use `MR_LoadedObjects_OffsetMutablePtr()` and `MR_LoadedObjects_OffsetPtr()` to access the array elements.
MRC_API MR_LoadedObjects *MR_LoadedObjects_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::LoadedObjects` elementwise.
/// Parameter `warnings` can not be null.
/// If `warnings_end` is null, then `warnings` is assumed to be null-terminated.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjects_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjects *MR_LoadedObjects_ConstructFrom(MR_PassBy objs_pass_by, MR_std_vector_std_shared_ptr_MR_Object *objs, const char *warnings, const char *warnings_end);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_LoadedObjects *MR_LoadedObjects_OffsetPtr(const MR_LoadedObjects *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_LoadedObjects *MR_LoadedObjects_OffsetMutablePtr(MR_LoadedObjects *ptr, ptrdiff_t i);

/// Generated from a constructor of class `MR::LoadedObjects`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_LoadedObjects_Destroy()` to free it when you're done using it.
MRC_API MR_LoadedObjects *MR_LoadedObjects_ConstructFromAnother(MR_PassBy _other_pass_by, MR_LoadedObjects *_other);

/// Destroys a heap-allocated instance of `MR_LoadedObjects`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjects_Destroy(const MR_LoadedObjects *_this);

/// Destroys a heap-allocated array of `MR_LoadedObjects`. Does nothing if the pointer is null.
MRC_API void MR_LoadedObjects_DestroyArray(const MR_LoadedObjects *_this);

/// Generated from a method of class `MR::LoadedObjects` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_LoadedObjects *MR_LoadedObjects_AssignFromAnother(MR_LoadedObjects *_this, MR_PassBy _other_pass_by, MR_LoadedObjects *_other);

#ifdef __cplusplus
} // extern "C"
#endif
