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

	// Takes in the path of the shape and returns the k most similar shapes using a naive approach
	std::vector<std::string> ExecuteQuery(std::string shapePath, std::string databasePath);

private:
	std::vector<double> GetFeatureVecFromShapeFeatures(ShapeFeatures feats);

	std::vector<std::vector<double>> Querying::GetFeatVecFromCsv(std::string databasePath, std::vector<ShapeFeatures>& outshapeFeatVec);

	std::vector<ShapeFeatures> ReadShapeFeaturesFromCsv(std::string csvFilename);

	// calculates euclidean distance between two feature vectors of the same size
	double nDimEuDistance(std::vector<double> feat1, std::vector<double> feat2);

};

