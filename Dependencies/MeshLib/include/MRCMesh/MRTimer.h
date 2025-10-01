// (C) 2024, AMV Consulting
#pragma once

#include <MRCMisc/exports.h>

#include <stdbool.h>

#ifdef __cplusplus
extern "C" {
#endif


/// enables or disables printing of timing tree when application terminates
/// \param minTimeSec omit printing records with time spent less than given value in seconds
/// Generated from function `MR::printTimingTreeAtEnd`.
/// Parameter `minTimeSec` has a default argument: `0.10000000000000001`, pass a null pointer to use it.
MRC_API void MR_printTimingTreeAtEnd(bool on, const double *minTimeSec);

/// prints current timer branch
/// Generated from function `MR::printCurrentTimerBranch`.
MRC_API void MR_printCurrentTimerBranch(void);

/// prints the current timing tree
/// \param minTimeSec omit printing records with time spent less than given value in seconds
/// Generated from function `MR::printTimingTree`.
/// Parameter `minTimeSec` has a default argument: `0.10000000000000001`, pass a null pointer to use it.
MRC_API void MR_printTimingTree(const double *minTimeSec);

#ifdef __cplusplus
} // extern "C"
#endif
