#include "Evidence.h"

namespace fs = std::filesystem;
namespace plt = matplotlibcpp;

void Evidence::ResamplingEvidence()
{
    // make a single big vector of vertex numbers of all the shapes
    std::vector<int> vertNumberOriginal(originalShapes.size()), vertNumberResampled(originalShapes.size());
    for (int i = 0; i < originalShapes.size(); ++i)
    {
        vertNumberOriginal[i] = originalShapes[i].vertexNum;
        vertNumberResampled[i] = resampledShapes[i].vertexNum;
    }

    plt::figure();
    plt::plot(vertNumberOriginal,"");
    plt::plot(vertNumberResampled, "");
}

void Evidence::ScaleNormEvidence()
{
    // get vector of max edge lengths of bbs for both resampled and normalized shapes
    std::vector<float> maxEdgeLenVecRes(resampledShapes.size()), maxEdgeLenVecNorm(resampledShapes.size());
    for (int i = 0; i < resampledShapes.size(); ++i)
    {
        maxEdgeLenVecRes[i] = GetMaxEdgeLen(resampledShapes[i]);
        maxEdgeLenVecNorm[i] = GetMaxEdgeLen(normalizedShapes[i]);
    }
    
    // plotting goes here:
}

void Evidence::AlignmentNormEvidence()
{

}

std::vector<shapeInfo> Evidence::GetShapeInfoEntireDB(std::string databasePath)
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

float Evidence::GetMaxEdgeLen(shapeInfo currentShape)
{
    float p1[3] = { currentShape.maxX, currentShape.maxY, currentShape.minZ };
    float p2[3] = { currentShape.minX, currentShape.maxY, currentShape.minZ };
    float p3[3] = { currentShape.maxX, currentShape.minY, currentShape.minZ };
    float p4[3] = { currentShape.maxX, currentShape.maxY, currentShape.maxZ };

    float lengths[3] = { EuDist3d(p1, p2), EuDist3d(p1, p3), EuDist3d(p1, p4) };
    float max = -1.0;
    for (int i = 0; i < 3; ++i)
    {
        if (lengths[i] > max)
            max = lengths[i];
    }
    return max;
}

float Evidence::EuDist3d(float p1[3], float p2[3])
{
    float dist = 0.0;
    for (int i = 0; i < 3; ++i)
    {
        dist += pow(p1[i] - p2[i], 2);
    }
    return dist;
}