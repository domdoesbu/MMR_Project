// (C) 2024, AMV Consulting
#pragma once
#include "exports.h"
#include <string>

namespace MR
{

MRVIEWER_API std::string getPointsVertexShader();
MRVIEWER_API std::string getPointsFragmentShader( bool alphaSort );

}