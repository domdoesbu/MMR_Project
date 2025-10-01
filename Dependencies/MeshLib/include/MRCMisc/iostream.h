// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#ifdef __cplusplus
extern "C" {
#endif


/// A C++ output stream.
typedef struct MR_std_ostream MR_std_ostream;

/// A C++ input stream.
typedef struct MR_std_istream MR_std_istream;

/// Returns the `stdout` stream.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_ostream *MR_GetStdCout(void);

/// Returns the `stderr` stream, buffered.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_ostream *MR_GetStdCerr(void);

/// Returns the `stderr` stream, unbuffered.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_ostream *MR_GetStdClog(void);

/// Returns the `stdin` stream.
/// The returned pointer will never be null. It is non-owning, do NOT destroy it.
MRC_API MR_std_istream *MR_GetStdCin(void);

#ifdef __cplusplus
} // extern "C"
#endif
