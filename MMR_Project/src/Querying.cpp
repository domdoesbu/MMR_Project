#include "Querying.h"


namespace fs = std::filesystem;
// massive horrible function from hell to normalize the single value features
void Querying::Normalization(std::string databasePath, std::string csvFilename)
{
    std::ifstream csvFile(csvFilename);

	
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open input CSV file: " << csvFilename << std::endl;
        return;
    }
    std::string line;

    std::vector<ShapeFeatures> totalFeatures = ReadShapeFeaturesFromCsv(csvFilename);

    float avgArea = 0.0;
    float avgVolume = 0.0;
    float avgCompactness = 0.0;
    float avgRectangularity = 0.0;
    float avgDiameter = 0.0;
    float avgConvexity = 0.0;
    float avgEccentricity = 0.0;

    int totalCount = totalFeatures.size();
    
    for (int i = 0; i < totalCount; i++)
    {
        avgArea += totalFeatures[i].surfaceArea;
        avgVolume += totalFeatures[i].volume;
        avgCompactness += totalFeatures[i].compactness;
        avgRectangularity+= totalFeatures[i].rectangularity;
        avgDiameter+= totalFeatures[i].diameter;
        avgConvexity += totalFeatures[i].convexity;
        avgEccentricity += totalFeatures[i].eccentricity;
    }

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
        stdDevRectangularity += pow(totalFeatures[i].rectangularity - avgRectangularity, 2.0);
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

    std::vector<float> normSurfaceArea(totalFeatures.size()), normVolume(totalFeatures.size()), normCompactness(totalFeatures.size()), normRectangularity(totalFeatures.size()), normDiameter(totalFeatures.size()), normConvexity(totalFeatures.size()), normEccentricity(totalFeatures.size());
    std::vector<std::vector<double>> a3;
    std::vector<std::vector<double>> d1;
    std::vector<std::vector<double>> d2;
    std::vector<std::vector<double>> d3;
    std::vector<std::vector<double>> d4;
    for (int i = 0; i < totalFeatures.size(); i++)
    {
        normSurfaceArea[i] = (totalFeatures[i].surfaceArea - avgArea) / stdDevArea;
        normVolume[i]= (totalFeatures[i].volume - avgVolume) / stdDevVolume;
        normCompactness[i] = (totalFeatures[i].compactness - avgCompactness) / stdDevCompactness;
        normRectangularity[i] = (totalFeatures[i].rectangularity - avgRectangularity) / stdDevRectangularity;
        normDiameter[i] = (totalFeatures[i].diameter - avgDiameter) / stdDevDiameter;
        normConvexity[i] = (totalFeatures[i].convexity - avgConvexity) / stdDevConvexity;
        normEccentricity[i] = (totalFeatures[i].eccentricity - avgEccentricity) / stdDevEccentricity;
        a3.push_back(totalFeatures[i].A3);
        d1.push_back(totalFeatures[i].D1);
        d2.push_back(totalFeatures[i].D2);
        d3.push_back(totalFeatures[i].D3);
        d4.push_back(totalFeatures[i].D4);
    }


  
    std::ofstream csvFileAvg("avg_and_sd.csv");
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open output CSV file: avg_and_sd"<< std::endl;
        return;
    }

    csvFileAvg << "avgArea,stdDevArea,avgVolume,stdDevVolume,avgCompactness,stdDevCompactness,avgRectangularity,stdDevRectangularity,avgDiameter,stdDevDiameter,avgConvexity,stdDevConvexity,avgEccentricity,stdDevEccentricity\n";


    csvFileAvg << avgArea << "," <<
            stdDevArea << "," <<
            avgVolume << "," <<
            stdDevVolume << "," <<
            avgCompactness << "," <<
            stdDevCompactness << "," <<
            avgRectangularity << "," <<
            stdDevRectangularity << "," <<
            avgDiameter << "," <<
            stdDevDiameter << "," <<
            avgConvexity << "," <<
            stdDevConvexity << "," <<
            avgEccentricity << "," <<
            stdDevEccentricity 
            << "\n";

    
    FileOrganizer fo;
    
    fo.WriteCSVFeatureExtraction(databasePath, "feature_extraction_complete_normalized.csv",
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

void Querying::NormalizeQueriedShape(ShapeFeatures& shape) {
    std::ifstream csvFile("avg_and_sd.csv");

    if (!csvFile.is_open()) {
        std::cerr << "Failed to open input CSV file: avg_and_sd.csv" << std::endl;
        return;
    }
    float avgArea = 0.0;
    float avgVolume = 0.0;
    float avgCompactness = 0.0;
    float avgRectangularity = 0.0;
    float avgDiameter = 0.0;
    float avgConvexity = 0.0;
    float avgEccentricity = 0.0;
    float stdDevArea = 0.0;
    float stdDevVolume = 0.0;
    float stdDevCompactness = 0.0;
    float stdDevRectangularity = 0.0;
    float stdDevDiameter = 0.0;
    float stdDevConvexity = 0.0;
    float stdDevEccentricity = 0.0;


    std::string line;
    std::getline(csvFile, line);
    std::getline(csvFile, line);

    std::istringstream iss(line);   

    std::string token;
    std::getline(iss, token, ','); 
    avgArea = std::stof(token);
    std::getline(iss, token, ','); 
    stdDevArea = std::stof(token);
    std::getline(iss, token, ','); 
    avgVolume = std::stof(token);
    std::getline(iss, token, ','); 
    stdDevVolume = std::stof(token);
    std::getline(iss, token, ','); 
    avgCompactness = std::stof(token);
    std::getline(iss, token, ','); 
    stdDevCompactness = std::stof(token);
    std::getline(iss, token, ','); 
    avgRectangularity = std::stof(token);
    std::getline(iss, token, ','); 
    stdDevRectangularity = std::stof(token);
    std::getline(iss, token, ','); 
    avgDiameter = std::stof(token);
    std::getline(iss, token, ','); 
    stdDevDiameter = std::stof(token);
    std::getline(iss, token, ','); 
    avgConvexity = std::stof(token);
    std::getline(iss, token, ','); 
    stdDevConvexity = std::stof(token);
    std::getline(iss, token, ','); 
    avgEccentricity = std::stof(token);
    std::getline(iss, token, ','); 
    stdDevEccentricity = std::stof(token);

    shape.surfaceArea = (shape.surfaceArea - avgArea) / stdDevArea;
    shape.volume = (shape.volume - avgVolume) / stdDevVolume;
    shape.compactness = (shape.compactness - avgCompactness) / stdDevCompactness;
    shape.rectangularity = (shape.rectangularity - avgRectangularity) / stdDevRectangularity;
    shape.diameter = (shape.diameter - avgDiameter) / stdDevDiameter;
    shape.convexity = (shape.convexity - avgConvexity) / stdDevConvexity;
    shape.eccentricity = (shape.eccentricity - avgEccentricity) / stdDevEccentricity;

    csvFile.close();

}

// Takes in the path of the shape and returns the k most similar shapes using a naive approach
std::pair<std::vector<std::string>, std::vector<float>> Querying::ExecuteQueryANN(std::string shapePath, std::string databasePath, int k)
{
    // load object from path
    FileOrganizer fo;
    std::vector<float> positions;
    std::vector<unsigned int> indices;
    fo.LoadObj(shapePath.c_str(), positions, indices);

    // extract features of the object
    FeatureExtraction fe;
    ShapeFeatures features;
    features = fe.ExtractFeaturesOneShape(shapePath, positions);
    NormalizeQueriedShape(features);
    // transform feat extr. results into one big feat vector
    std::vector<double> inputFeatureVec;
    inputFeatureVec = GetFeatureVecFromShapeFeatures(features);

    std::vector<ShapeFeatures> shapeFeatVecs; // save these in order to retrieve the file names later

    // get all of the feature vectors from the csv file
    std::vector<std::vector<double>> dbFeatureVecs = GetFeatVecFromCsv("feature_extraction_complete_normalized.csv", shapeFeatVecs);

    int n = static_cast<int>(dbFeatureVecs.size()); // number of database points
    int d = static_cast<int>(inputFeatureVec.size()); // dimentionality
    ANNpointArray annPts = annAllocPts(n, d);

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < d; ++j) {
            annPts[i][j] = dbFeatureVecs[i][j];
        }
    }

    // Built kd-tree
    ANNkd_tree* kdTree = new ANNkd_tree(annPts, n, d);

    // Query point
    ANNpoint queryPt = annAllocPt(d);
    for (int j = 0; j < d; ++j) queryPt[j] = inputFeatureVec[j];

    ANNidxArray nnIdx = new ANNidx[k];
    ANNdistArray dists = new ANNdist[k];

    double eps = 0.0;
    kdTree->annkSearch(queryPt, k, nnIdx, dists, eps);

    std::vector<int> minDistIndices;
    std::vector<float> distanceValues;

    for (int i = 0; i < k; ++i) {
        minDistIndices.push_back(nnIdx[i]);
        distanceValues.push_back(static_cast<float>(sqrt(dists[i])));
    }

    std::vector<std::string> resultFilenames;

    for (int i = 0; i < minDistIndices.size(); ++i)
    {
        std::string filePath = shapeFeatVecs[minDistIndices[i]].className + "/" + shapeFeatVecs[minDistIndices[i]].fileName;
        std::cout << filePath << std::endl;
        resultFilenames.push_back(filePath); // i am so smart
    }
    delete[] nnIdx;
    delete[] dists;
    annDeallocPt(queryPt);
    delete kdTree;
    annDeallocPts(annPts);
    annClose(); // free ANN internal memory
    // return the path of the files
    return { resultFilenames, distanceValues };
}


// Takes in the path of the shape and returns the k most similar shapes using a naive approach
std::pair<std::vector<std::string>, std::vector<float>> Querying::ExecuteQuery(std::string shapePath, std::string databasePath)
{
    // load object from path
    FileOrganizer fo;
    std::vector<float> positions;
    std::vector<unsigned int> indices;
    fo.LoadObj(shapePath.c_str(), positions, indices);

    // extract features of the object
    FeatureExtraction fe;
    ShapeFeatures features;
    features = fe.ExtractFeaturesOneShape(shapePath, positions);
    NormalizeQueriedShape(features);
    
    // transform feat extr. results into one big feat vector
    std::vector<double> inputFeatureVec;
    inputFeatureVec = GetFeatureVecFromShapeFeatures(features);

    std::vector<ShapeFeatures> shapeFeatVecs; // save these in order to retrieve the file names later

    // get all of the feature vectors from the csv file
    std::vector<std::vector<double>> dbFeatureVecs = GetFeatVecFromCsv("feature_extraction_complete_normalized.csv", shapeFeatVecs);

    // declare distance vector with same size as the database feature vectors
    // at position i, we have distance between the input shape and the i th shape in the db
    vector<double> distanceVec(dbFeatureVecs.size());

    // compute the distance between each of them and the input
    for (int i = 0; i < dbFeatureVecs.size(); ++i)
    {
        distanceVec[i] = nDimEuDistance(inputFeatureVec, dbFeatureVecs[i]);
    }

    // find the minimum k distances
    std::pair<std::vector<int>, std::vector<float>> results = GetKSmallestDistanceIndices(distanceVec, 3);
    std::vector<int> minDistIndices = results.first;
    std::vector<float> distanceValues = results.second;
    std::vector<std::string> resultFilenames;

    for (int i = 0; i < minDistIndices.size(); ++i)
    {
        std::string filePath = shapeFeatVecs[minDistIndices[i]].className + "/" + shapeFeatVecs[minDistIndices[i]].fileName;
        std::cout << filePath << std::endl;
        resultFilenames.push_back(filePath); // i am so smart
    }

    // return the path of the files
    return { resultFilenames, distanceValues };
}

std::vector<double> Querying::GetFeatureVecFromShapeFeatures(ShapeFeatures feats)
{
    std::vector<double> featVec;

    // insert feature value in array multiplying it by its weight
    featVec.push_back(feats.surfaceArea * feats.areaW);
    featVec.push_back(feats.compactness * feats.compW);
    featVec.push_back(feats.rectangularity * feats.rectW);
    featVec.push_back(feats.diameter * feats.diamW);
    featVec.push_back(feats.convexity * feats.convW);
    featVec.push_back(feats.eccentricity * feats.ecceW);
    
    // insert histo feature value in array one by one multiplying it by its weight
    for (int i = 0; i < feats.A3.size(); ++i)
    {
        featVec.push_back(feats.A3[i] * feats.histoW);
    }
    for (int i = 0; i < feats.D1.size(); ++i)
    {
        featVec.push_back(feats.D1[i] * feats.histoW);
    }
    for (int i = 0; i < feats.D2.size(); ++i)
    {
        featVec.push_back(feats.D2[i] * feats.histoW);
    }
    for (int i = 0; i < feats.D3.size(); ++i)
    {
        featVec.push_back(feats.D3[i] * feats.histoW);
    }
    for (int i = 0; i < feats.D4.size(); ++i)
    {
        featVec.push_back(feats.D4[i] * feats.histoW);
    }
    
    return featVec;
}

std::vector<std::vector<double>> Querying::GetFeatVecFromCsv(std::string databasePath, std::vector<ShapeFeatures>& outshapeFeatVec)
{
    // cycle through every line and fill up the shapefeature vector
    outshapeFeatVec = ReadShapeFeaturesFromCsv(databasePath);
    
    // transform the shapefeature vector into a vector of feature vectors
    std::vector<std::vector<double>> featVecs;
    for (int i = 0; i < outshapeFeatVec.size(); ++i)
    {
        featVecs.push_back(GetFeatureVecFromShapeFeatures(outshapeFeatVec[i]));
    }

    return featVecs;
}

std::vector<ShapeFeatures> Querying::ReadShapeFeaturesFromCsv(std::string csvFilename)
{
    auto stripQuotes = [](std::string& s) {
        if (!s.empty() && s.front() == '"') s.erase(0, 1);
        if (!s.empty() && s.back() == '"') s.pop_back();
        };
    std::ifstream csvFile(csvFilename);

    std::vector<ShapeFeatures> totalFeatures;
    if (!csvFile.is_open()) {
        std::cerr << "Failed to open input CSV file: " << csvFilename << std::endl;
        return totalFeatures;
    }
    std::string line;

    //read first line of column names
    std::getline(csvFile, line);

    // reading feature values and accumulating to calculate averages
    while (std::getline(csvFile, line)) {
        std::istringstream iss(line);
        std::string token;
        ShapeFeatures currentFeatures;
        std::getline(iss, token, ',');
        stripQuotes(token);
        currentFeatures.className =token;
        std::getline(iss, token, ',');
        currentFeatures.fileName = std::string(token);
        std::getline(iss, token, ',');
        float v = std::stof(token);
        currentFeatures.surfaceArea = v;
        std::getline(iss, token, ','); currentFeatures.volume = std::stof(token);
        std::getline(iss, token, ','); currentFeatures.compactness = std::stof(token); 
        std::getline(iss, token, ','); currentFeatures.rectangularity = std::stof(token);
        std::getline(iss, token, ','); currentFeatures.diameter = std::stof(token);
        std::getline(iss, token, ','); currentFeatures.convexity = std::stof(token);
        std::getline(iss, token, ','); currentFeatures.eccentricity = std::stof(token);

        std::vector<double> a3vector;
        std::vector<double> d1;
        std::vector<double> d2;
        std::vector<double> d3;
        std::vector<double> d4;
        for (int i = 0; i < 20; i++)
        {
            std::getline(iss, token, ',');
            float a = std::stof(token);
            a3vector.push_back(a);
        }
        for (int i = 0; i < 30; i++)
        {
            std::getline(iss, token, ',');
            float a = std::stof(token);
            d1.push_back(a);
        }
        for (int i = 0; i < 20; i++)
        {
            std::getline(iss, token, ',');
            float a = std::stof(token);
            d2.push_back(a);
        }
        for (int i = 0; i < 20; i++)
        {
            std::getline(iss, token, ',');
            float a = std::stof(token);
            d3.push_back(a);
        }
        for (int i = 0; i < 20; i++)
        {
            std::getline(iss, token, ',');
            float a = std::stof(token);
            d4.push_back(a);
        }

        currentFeatures.A3 = a3vector;
        currentFeatures.D1 = d1;
        currentFeatures.D2 = d2;
        currentFeatures.D3 = d3;
        currentFeatures.D4 = d4;
        totalFeatures.push_back(currentFeatures);
    }
    csvFile.close();
    return totalFeatures;
}

// calculates euclidean distance between two feature vectors of the same size
// hope this shit is right
double Querying::nDimEuDistance(std::vector<double> feat1, std::vector<double> feat2)
{
    double sumOfSquares = 0.0;
    for (int i = 0; i < feat1.size(); ++i)
    {
        sumOfSquares += pow(feat1[i] - feat2[i], 2.0);
    }
    return sqrt(sumOfSquares);
}

// this gets a distance vector and returns the k indices of the shapes with the smallest distance
std::pair <std::vector<int>, std::vector<float>> Querying::GetKSmallestDistanceIndices(std::vector<double> distanceVec, int k) 
{
    // initialize index vector that we'll use to keep track of shape indices during sorting to get filenames later
    std::vector<int> indexVec(distanceVec.size());
    std::vector<float> distanceValues;
    for (int i = 0; i < distanceVec.size(); ++i)
    {
        indexVec[i] = i;
    }

    // Chat implementation of bubblesort cause I cant even implement bubblesort correctly on my own I am going to cry
    bool swapped;
    for (int i = 0; i < distanceVec.size() - 1; ++i)
    {
        swapped = false;
        for (int j = 0; j < distanceVec.size() - i - 1; ++j)
        {
            if (distanceVec[j] > distanceVec[j + 1])
            {
                std::swap(distanceVec[j], distanceVec[j + 1]);
                swapped = true;
                std::swap(indexVec[j], indexVec[j + 1]);
            }
        }
        if (!swapped)
            break; // already sorted
    }

    // get the first k elements and return them
    std::vector<int> outIndices;
    for (int i = 0; i < k; ++i)
    {
        distanceValues.push_back(distanceVec[i]);
        std::cout << distanceVec[i] << std::endl;
        outIndices.push_back(indexVec[i]);
    }
    return { outIndices, distanceValues };
}