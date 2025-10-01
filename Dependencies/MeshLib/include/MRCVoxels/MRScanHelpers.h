// (C) 2024, AMV Consulting
#pragma once

#include <MRCMesh/MRVector3.h>
#include <MRCMisc/exports.h>

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_vector_MR_SliceInfo MR_std_vector_MR_SliceInfo; // Defined in `#include <MRCMisc/std_vector_MR_SliceInfo.h>`.
typedef struct MR_std_vector_std_filesystem_path MR_std_vector_std_filesystem_path; // Defined in `#include <MRCMisc/std_vector_std_filesystem_path.h>`.


/// slice information
/// \sa SliceInfo
/// Generated from class `MR::SliceInfoBase`.
/// Derived classes:
///   Direct: (non-virtual)
///     `MR::SliceInfo`
typedef struct MR_SliceInfoBase MR_SliceInfoBase;

/// slice information
/// these fields will be ignored in sorting
/// \sa SliceInfoBase
/// Generated from class `MR::SliceInfo`.
/// Base classes:
///   Direct: (non-virtual)
///     `MR::SliceInfoBase`
typedef struct MR_SliceInfo MR_SliceInfo;

/// instance number
/// Returns a pointer to a member variable of class `MR::SliceInfoBase` named `instanceNum`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SliceInfoBase_Get_instanceNum(const MR_SliceInfoBase *_this);

/// instance number
/// Modifies a member variable of class `MR::SliceInfoBase` named `instanceNum`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SliceInfoBase_Set_instanceNum(MR_SliceInfoBase *_this, int32_t value);

/// instance number
/// Returns a mutable pointer to a member variable of class `MR::SliceInfoBase` named `instanceNum`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SliceInfoBase_GetMutable_instanceNum(MR_SliceInfoBase *_this);

/// layer height
/// Returns a pointer to a member variable of class `MR::SliceInfoBase` named `z`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const double *MR_SliceInfoBase_Get_z(const MR_SliceInfoBase *_this);

/// layer height
/// Modifies a member variable of class `MR::SliceInfoBase` named `z`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SliceInfoBase_Set_z(MR_SliceInfoBase *_this, double value);

/// layer height
/// Returns a mutable pointer to a member variable of class `MR::SliceInfoBase` named `z`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API double *MR_SliceInfoBase_GetMutable_z(MR_SliceInfoBase *_this);

/// file index
/// Returns a pointer to a member variable of class `MR::SliceInfoBase` named `fileNum`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const int32_t *MR_SliceInfoBase_Get_fileNum(const MR_SliceInfoBase *_this);

/// file index
/// Modifies a member variable of class `MR::SliceInfoBase` named `fileNum`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SliceInfoBase_Set_fileNum(MR_SliceInfoBase *_this, int32_t value);

/// file index
/// Returns a mutable pointer to a member variable of class `MR::SliceInfoBase` named `fileNum`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API int32_t *MR_SliceInfoBase_GetMutable_fileNum(MR_SliceInfoBase *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SliceInfoBase_Destroy()` to free it when you're done using it.
MRC_API MR_SliceInfoBase *MR_SliceInfoBase_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SliceInfoBase_DestroyArray()`.
/// Use `MR_SliceInfoBase_OffsetMutablePtr()` and `MR_SliceInfoBase_OffsetPtr()` to access the array elements.
MRC_API MR_SliceInfoBase *MR_SliceInfoBase_DefaultConstructArray(size_t num_elems);

/// Constructs `MR::SliceInfoBase` elementwise.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SliceInfoBase_Destroy()` to free it when you're done using it.
MRC_API MR_SliceInfoBase *MR_SliceInfoBase_ConstructFrom(int32_t instanceNum, double z, int32_t fileNum);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SliceInfoBase *MR_SliceInfoBase_OffsetPtr(const MR_SliceInfoBase *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SliceInfoBase *MR_SliceInfoBase_OffsetMutablePtr(MR_SliceInfoBase *ptr, ptrdiff_t i);

/// Downcasts an instance of `MR::SliceInfoBase` to a derived class `MR::SliceInfo`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
/// This version is acting on mutable pointers.
MRC_API const MR_SliceInfo *MR_SliceInfoBase_StaticDowncastTo_MR_SliceInfo(const MR_SliceInfoBase *object);

/// Downcasts an instance of `MR::SliceInfoBase` to a derived class `MR::SliceInfo`.
/// This is a static downcast, it trusts the programmer that the target type is correct. Results in UB and returns an invalid pointer otherwise.
MRC_API MR_SliceInfo *MR_SliceInfoBase_MutableStaticDowncastTo_MR_SliceInfo(MR_SliceInfoBase *object);

/// Generated from a constructor of class `MR::SliceInfoBase`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SliceInfoBase_Destroy()` to free it when you're done using it.
MRC_API MR_SliceInfoBase *MR_SliceInfoBase_ConstructFromAnother(const MR_SliceInfoBase *_other);

/// Destroys a heap-allocated instance of `MR_SliceInfoBase`. Does nothing if the pointer is null.
MRC_API void MR_SliceInfoBase_Destroy(const MR_SliceInfoBase *_this);

/// Destroys a heap-allocated array of `MR_SliceInfoBase`. Does nothing if the pointer is null.
MRC_API void MR_SliceInfoBase_DestroyArray(const MR_SliceInfoBase *_this);

/// Generated from a method of class `MR::SliceInfoBase` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SliceInfoBase *MR_SliceInfoBase_AssignFromAnother(MR_SliceInfoBase *_this, const MR_SliceInfoBase *_other);

/// image position
/// Returns a pointer to a member variable of class `MR::SliceInfo` named `imagePos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API const MR_Vector3d *MR_SliceInfo_Get_imagePos(const MR_SliceInfo *_this);

/// image position
/// Modifies a member variable of class `MR::SliceInfo` named `imagePos`.
/// Parameter `_this` can not be null. It is a single object.
MRC_API void MR_SliceInfo_Set_imagePos(MR_SliceInfo *_this, MR_Vector3d value);

/// image position
/// Returns a mutable pointer to a member variable of class `MR::SliceInfo` named `imagePos`.
/// Parameter `_this` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_Vector3d *MR_SliceInfo_GetMutable_imagePos(MR_SliceInfo *_this);

/// Constructs an empty (default-constructed) instance.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SliceInfo_Destroy()` to free it when you're done using it.
MRC_API MR_SliceInfo *MR_SliceInfo_DefaultConstruct(void);

/// Constructs an array of empty (default-constructed) instances, of the specified size. Will never return null.
/// The array must be destroyed using `MR_SliceInfo_DestroyArray()`.
/// Use `MR_SliceInfo_OffsetMutablePtr()` and `MR_SliceInfo_OffsetPtr()` to access the array elements.
MRC_API MR_SliceInfo *MR_SliceInfo_DefaultConstructArray(size_t num_elems);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_SliceInfo *MR_SliceInfo_OffsetPtr(const MR_SliceInfo *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_SliceInfo *MR_SliceInfo_OffsetMutablePtr(MR_SliceInfo *ptr, ptrdiff_t i);

/// Upcasts an instance of `MR::SliceInfo` to its base class `MR::SliceInfoBase`.
/// This version is acting on mutable pointers.
MRC_API const MR_SliceInfoBase *MR_SliceInfo_UpcastTo_MR_SliceInfoBase(const MR_SliceInfo *object);

/// Upcasts an instance of `MR::SliceInfo` to its base class `MR::SliceInfoBase`.
MRC_API MR_SliceInfoBase *MR_SliceInfo_MutableUpcastTo_MR_SliceInfoBase(MR_SliceInfo *object);

/// Generated from a constructor of class `MR::SliceInfo`.
/// Parameter `_other` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_SliceInfo_Destroy()` to free it when you're done using it.
MRC_API MR_SliceInfo *MR_SliceInfo_ConstructFromAnother(const MR_SliceInfo *_other);

/// Destroys a heap-allocated instance of `MR_SliceInfo`. Does nothing if the pointer is null.
MRC_API void MR_SliceInfo_Destroy(const MR_SliceInfo *_this);

/// Destroys a heap-allocated array of `MR_SliceInfo`. Does nothing if the pointer is null.
MRC_API void MR_SliceInfo_DestroyArray(const MR_SliceInfo *_this);

/// Generated from a method of class `MR::SliceInfo` named `operator=`.
/// Parameter `_this` can not be null. It is a single object.
/// Parameter `_other` can not be null. It is a single object.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_SliceInfo *MR_SliceInfo_AssignFromAnother(MR_SliceInfo *_this, const MR_SliceInfo *_other);

/// Sort scan files in given vector by given slice information
/// Generated from function `MR::sortScansByOrder`.
/// Parameter `scans` can not be null. It is a single object.
/// Parameter `zOrder` can not be null. It is a single object.
MRC_API void MR_sortScansByOrder(MR_std_vector_std_filesystem_path *scans, MR_std_vector_MR_SliceInfo *zOrder);

/// Read layer heights from given scan file names
/// Generated from function `MR::putScanFileNameInZ`.
/// Parameter `scans` can not be null. It is a single object.
/// Parameter `zOrder` can not be null. It is a single object.
MRC_API void MR_putScanFileNameInZ(const MR_std_vector_std_filesystem_path *scans, MR_std_vector_MR_SliceInfo *zOrder);

/// Sort scan files in given vector by names (respect numbers in it)
/// Generated from function `MR::sortScanFilesByName`.
/// Parameter `scans` can not be null. It is a single object.
MRC_API void MR_sortScanFilesByName(MR_std_vector_std_filesystem_path *scans);

#ifdef __cplusplus
} // extern "C"
#endif
