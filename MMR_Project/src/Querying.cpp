#include "Querying.h"

// massive horrible function from hell to normalize the single value features
void Querying::Normalization(std::string databasePath, std::string csvFilename)
{
    std::ifstream csvFile(csvFilename);

	std::vector<ShapeFeatures> totalFeatures;
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open input CSV file: " << csvFilename << std::endl;
        return;
    }
    std::string line;

    float avgArea = 0.0;
    float avgVolume = 0.0;
    float avgCompactness = 0.0;
    float avgRectangularity = 0.0;
    float avgDiameter = 0.0;
    float avgConvexity = 0.0;
    float avgEccentricity = 0.0;
    int totalCount = 0;

    // reading feature values and accumulating to calculate averages
    while (std::getline(csvFile, line)) {
        std::istringstream iss(line);
        std::string token;
        ShapeFeatures currentFeatures;
        std::getline(iss, token, ',');
        std::getline(iss, token, ',');
        std::getline(iss, token, ','); currentFeatures.surfaceArea = std::stof(token); avgArea += std::stof(token);
        std::getline(iss, token, ','); currentFeatures.volume = std::stof(token); avgVolume += std::stof(token);
        std::getline(iss, token, ','); currentFeatures.compactness = std::stof(token); avgCompactness += std::stof(token);
        std::getline(iss, token, ','); currentFeatures.rectangularity = std::stof(token); avgRectangularity += std::stof(token);
        std::getline(iss, token, ','); currentFeatures.diameter = std::stof(token); avgDiameter += std::stof(token);
        std::getline(iss, token, ','); currentFeatures.convexity = std::stof(token); avgConvexity += std::stof(token);
        std::getline(iss, token, ','); currentFeatures.eccentricity = std::stof(token); avgEccentricity += std::stof(token);
        std::vector<double> a3;
        std::vector<double> d1;
        std::vector<double> d2;
        std::vector<double> d3;
        std::vector<double> d4;

        for (int i = 0; i < (20 + 30 + 20 + 20 + 20); ++i)
        {
            if (i < 20)
            {
                std::getline(iss, token, ','); a3[i] = std::stof(token);
            }
            else if (i < (20 + 30))
            {
                std::getline(iss, token, ','); d1[i] = std::stof(token);
            }
            else if (i < (20 + 30 + 20))
            {
                std::getline(iss, token, ','); d2[i] = std::stof(token);
            }
            else if (i < (20 + 30 + 20 + 20))
            {
                std::getline(iss, token, ','); d3[i] = std::stof(token);
            }
            else
            {
                std::getline(iss, token, ','); d4[i] = std::stof(token);
            }
        }
        currentFeatures.A3 = a3;
        currentFeatures.D1 = d1;
        currentFeatures.D2 = d2;
        currentFeatures.D3 = d3;
        currentFeatures.D4 = d4;
        totalFeatures.push_back(currentFeatures);
    }
    csvFile.close();

    // computing means
    avgArea /= totalCount;
    avgVolume /= totalCount;
    avgCompactness /= totalCount;
    avgRectangularity /= totalCount;
    avgDiameter /= totalCount;
    avgConvexity /= totalCount;
    avgEccentricity /= totalCount;

    // computing std deviation
    float stdDevArea = 0.0;
    float stdDevVolume = 0.0;
    float stdDevCompactness = 0.0;
    float stdDevRectangularity = 0.0;
    float stdDevDiameter = 0.0;
    float stdDevConvexity = 0.0;
    float stdDevEccentricity = 0.0;

    for (int i = 0; i < totalFeatures.size(); ++i)
    {
        stdDevArea += pow(totalFeatures[i].surfaceArea - avgArea, 2.0);
        stdDevVolume += pow(totalFeatures[i].volume - avgVolume, 2.0);
        stdDevCompactness += pow(totalFeatures[i].compactness - avgCompactness, 2.0);
        stdDevDiameter += pow(totalFeatures[i].diameter - avgDiameter, 2.0);
        stdDevConvexity += pow(totalFeatures[i].convexity - avgConvexity, 2.0);
        stdDevEccentricity += pow(totalFeatures[i].eccentricity - avgEccentricity, 2.0);
    }

    stdDevArea = sqrt(stdDevArea / totalFeatures.size());
    stdDevVolume = sqrt(stdDevVolume / totalFeatures.size());
    stdDevCompactness = sqrt(stdDevCompactness / totalFeatures.size());
    stdDevRectangularity =sqrt(stdDevRectangularity / totalFeatures.size());
    stdDevDiameter = sqrt(stdDevDiameter / totalFeatures.size());
    stdDevConvexity = sqrt(stdDevConvexity / totalFeatures.size());
    stdDevEccentricity = sqrt(stdDevEccentricity / totalFeatures.size());

    // actually normalizing feature values

    std::vector<float> normSurfaceArea, normVolume, normCompactness, normRectangularity, normDiameter, normConvexity, normEccentricity;
    std::vector<std::vector<double>> a3;
    std::vector<std::vector<double>> d1;
    std::vector<std::vector<double>> d2;
    std::vector<std::vector<double>> d3;
    std::vector<std::vector<double>> d4;
    for (int i = 0; i < totalFeatures.size(); ++i)
    {
        normSurfaceArea[i] = (totalFeatures[i].surfaceArea - avgArea) / stdDevArea;
        normVolume[i]= (totalFeatures[i].volume- avgVolume) / stdDevVolume;
        normCompactness[i] = (totalFeatures[i].compactness- avgCompactness) / stdDevCompactness;
        normRectangularity[i] = (totalFeatures[i].rectangularity- avgRectangularity) / stdDevRectangularity;
        normDiameter[i] = (totalFeatures[i].diameter- avgDiameter) / stdDevDiameter;
        normConvexity[i] = (totalFeatures[i].convexity - avgConvexity) / stdDevConvexity;
        normEccentricity[i] = (totalFeatures[i].eccentricity - avgEccentricity) / stdDevEccentricity;
        a3.push_back(totalFeatures[i].A3); // Ayo Dom do you think this are gonna be in the right order when we put them in the csv?
        d1.push_back(totalFeatures[i].D1);
        d2.push_back(totalFeatures[i].D2);
        d3.push_back(totalFeatures[i].D3);
        d4.push_back(totalFeatures[i].D4);
    }

    FileOrganizer fo;
    
    fo.WriteCSVFeatureExtraction(databasePath, "feature_extraction_complete.csv",
        normSurfaceArea,
        normVolume,
        normCompactness,
        normRectangularity,
        normDiameter,
        normConvexity,
        normEccentricity,
        a3,
        d1,
        d2,
        d3,
        d4
    );

}