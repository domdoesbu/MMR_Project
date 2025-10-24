#include "Evidence.h"

namespace fs = std::filesystem;
namespace plt = matplotlibcpp;

void Evidence::ResamplingEvidence(std::string databasePath, std::string resampledDatabasePath)
{
    // Check if database actually exists
    if (!fs::exists(databasePath) || !fs::is_directory(databasePath)) {
        std::cerr << "Database folder does not exist: " << databasePath << std::endl;
        return;
    }

    std::vector<shapeInfo> originalShapes, resampledShapes;
    originalShapes = getShapeInfoEntireDB(databasePath);
    resampledShapes = getShapeInfoEntireDB(resampledDatabasePath);

    std::vector<int> vertNumber(originalShapes.size());
    for (int i = 0; i < originalShapes.size(); ++i)
    {
        vertNumber[i] = originalShapes[i].vertexNum;
    }

    plt::figure();
    
}

std::vector<shapeInfo> getShapeInfoEntireDB(std::string databasePath)
{
    Preprocessing prep;
    shapeInfo currentShapeInfo;
    std::vector<shapeInfo> totalShapeInfo;
    // loop over every sub folder, aka the class itself
    for (const auto& classDir : fs::directory_iterator(databasePath)) {
        if (!fs::is_directory(classDir)) continue;

        // Get the class
        currentShapeInfo.className = classDir.path().filename().string();

        // For each obj in the folder, get the information about it
        for (const auto& file : fs::directory_iterator(classDir)) {
            prep.AnalyzeShape(file.path(), currentShapeInfo);
            totalShapeInfo.push_back(currentShapeInfo);
        }
    }
    return totalShapeInfo;
}