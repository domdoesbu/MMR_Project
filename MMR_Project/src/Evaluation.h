#pragma once
#include "FileOrganizer.h"
#include "Querying.h"
#include <string>
#include <filesystem>
#include <sstream>
#include <iostream>

class Evaluation {

public:
	Evaluation() {};
	void EvaluateDatabase(string databasePath, int k);
};