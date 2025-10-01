// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_shared_ptr_MR_Object MR_std_shared_ptr_MR_Object; // Defined in `#include <MRCMisc/std_shared_ptr_MR_Object.h>`.
typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// Generated from class `MR::ObjectFactoryBase`.
typedef struct MR_ObjectFactoryBase MR_ObjectFactoryBase;

/// the function to create new object instance by registered class name
/// Generated from function `MR::createObject`.
/// Parameter `className` can not be null. It is a single object.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_shared_ptr_MR_Object_Destroy()` to free it when you're done using it.
MRC_API MR_std_shared_ptr_MR_Object *MR_createObject(const MR_std_string *className);

/// Destroys a heap-allocated instance of `MR_ObjectFactoryBase`. Does nothing if the pointer is null.
MRC_API void MR_ObjectFactoryBase_Destroy(const MR_ObjectFactoryBase *_this);

/// Destroys a heap-allocated array of `MR_ObjectFactoryBase`. Does nothing if the pointer is null.
MRC_API void MR_ObjectFactoryBase_DestroyArray(const MR_ObjectFactoryBase *_this);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API const MR_ObjectFactoryBase *MR_ObjectFactoryBase_OffsetPtr(const MR_ObjectFactoryBase *ptr, ptrdiff_t i);

/// Offsets a pointer to an array element by `i` positions (not bytes). Use only if you're certain that the pointer points to an array element.
MRC_API MR_ObjectFactoryBase *MR_ObjectFactoryBase_OffsetMutablePtr(MR_ObjectFactoryBase *ptr, ptrdiff_t i);

#ifdef __cplusplus
} // extern "C"
#endif
