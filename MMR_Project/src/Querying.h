#pragma once
#include "FeatureExtraction.h"
#include "FileOrganizer.h"
#include <string>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <limits>
#include <vector>
#include <array>

class Querying
{
public:
	Querying() {};

	void Normalization(std::string databasePath, std::string csvFile);

};

