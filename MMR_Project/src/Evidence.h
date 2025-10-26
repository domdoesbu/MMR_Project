#pragma once
#include <vector>
#include <iostream>
#include <math.h>
#include <string>
#include <filesystem>
#include "Preprocessing.h"
#include "FileOrganizer.h"
#include "matplotlibcpp.h"


class Evidence
{
public:
	std::vector<shapeInfo> originalShapes;
	std::vector<shapeInfo> resampledShapes;
	std::vector<shapeInfo> normalizedShapes;

	Evidence(std::string originalDbPath, std::string resampledDbPath, std::string normalizedDbPath)
	{
		originalShapes = GetShapeInfoEntireDB(originalDbPath);
		resampledShapes = GetShapeInfoEntireDB(resampledDbPath);
		normalizedShapes = GetShapeInfoEntireDB(normalizedDbPath);
	};

	// Shows vertex and face count before and after resampling on histograms
	void ResamplingEvidence();


	// Shows max edge size of the axis aligned bb before and after scale normalization on histograms
	void ScaleNormEvidence();

	// Shows histogram of distance of all vertices from origin for each shape so that for normalized ones it should be 
	// balanced while for non normalized it should be all skewed to one side
	void AlignmentNormEvidence();

private:
	std::vector<shapeInfo> GetShapeInfoEntireDB(std::string databasePath);
	
	float GetMaxEdgeLen(shapeInfo currentShape);

	
	float EuDist3d(float p1[3], float p2[3]);
};

