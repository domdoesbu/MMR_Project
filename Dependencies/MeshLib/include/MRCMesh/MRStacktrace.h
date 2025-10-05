// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MR_std_string MR_std_string; // Defined in `#include <MRCMisc/std_string.h>`.


/// returns string representation of the current stacktrace;
/// the function is inlined, to put the code in any shared library;
/// if std::stacktrace is first called from MRMesh.dll then it is not unloaded propely
/// Generated from function `MR::getCurrentStacktraceInline`.
/// Never returns null. Returns an instance allocated on the heap! Must call `MR_std_string_Destroy()` to free it when you're done using it.
MRC_API MR_std_string *MR_getCurrentStacktraceInline(void);

/// Print stacktrace on application crash
/// Generated from function `MR::printStacktraceOnCrash`.
MRC_API void MR_printStacktraceOnCrash(void);

#ifdef __cplusplus
} // extern "C"
#endif
