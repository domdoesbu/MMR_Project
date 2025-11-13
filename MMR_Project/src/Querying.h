#pragma once
#include "FeatureExtraction.h"
#include "FileOrganizer.h"
#include <string>
#include <filesystem>
#include <iostream>
#include <fstream>
#include <sstream>
#include <limits>
#include <vector>
#include <array>
#include <ANN/ANN.h>
class Querying
{
public:
	Querying() {};

	void Normalization(std::string databasePath, std::string csvFile);

	void NormalizeQueriedShape(ShapeFeatures& shape);

	// Takes in the path of the shape and returns the k most similar shapes using a naive approach
	std::pair<std::vector<std::string>, std::vector<float>>  ExecuteQuery(std::string shapePath, std::string databasePath, int k, float thresh, bool euc);
	std::pair<std::vector<std::string>, std::vector<float>>  ExecuteQueryANN(std::string shapePath, std::string databasePath, int k);

private:
	std::vector<double> GetFeatureVecFromShapeFeatures(ShapeFeatures feats);

	std::vector<std::vector<double>> GetFeatVecFromCsv(std::string databasePath, std::vector<ShapeFeatures>& outshapeFeatVec);

	std::vector<ShapeFeatures> ReadShapeFeaturesFromCsv(std::string csvFilename);

	// calculates euclidean distance between two feature vectors of the same size
	double nDimEuDistance(std::vector<double> feat1, std::vector<double> feat2);

	double nDimManDistance(std::vector<double> feat1, std::vector<double> feat2);

	std::pair <std::vector<int>, std::vector<float>> GetKSmallestDistanceIndices(std::vector<double> distanceVec, int k);

	std::pair <std::vector<int>, std::vector<float>> GetRNN(std::vector<double> distanceVec, float threshold);

	std::vector<int> SortDist(std::vector<double>& distanceVec);


};

