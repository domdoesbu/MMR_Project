#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include <string>
#include <filesystem>
#include "Preprocessing.h"
#include "FileOrganizer.h"

class Evidence
{
public:
	Evidence() {};

	// Shows vertex and face count before and after resampling on histograms
	void ResamplingEvidence(std::string databasePath, std::string ResampledDatabasePath);

	// Shows max edge size of the axis aligned bb before and after scale normalization on histograms
	void ScaleNormEvidence(std::string databasePath, std::string NormalizedDatabasePath);
};

