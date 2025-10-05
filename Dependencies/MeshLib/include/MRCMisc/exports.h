// (C) 2024, AMV Consulting
#pragma once

#ifndef MRC_API
#  ifdef _WIN32
#    ifdef MRC_BUILD_LIBRARY
#      define MRC_API __declspec(dllexport)
#    else
#      define MRC_API __declspec(dllimport)
#    endif
#  else
#    define MRC_API __attribute__((__visibility__("default")))
#  endif
#endif

