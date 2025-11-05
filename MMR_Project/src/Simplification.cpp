#include "Simplification.h"
using namespace MeshDecimation;
UnstructuredGrid3D* simpGrid = 0;
void Simplification::Simplify(std::string& inputFile, std::string& outputFile) {
    float avg_area = 0;
    FileOrganizer fo;
    FeatureExtraction fe;
    vector<float> positions;
    vector<unsigned int> indices;
    
    float surfaceAreaOriginal = fe.SurfaceArea(inputFile);

    simpGrid = fo.LoadObjGrid(inputFile.c_str());                           //6.  Read a 3D mesh stored in a file in the PLY format
    UnstructuredGrid3D* simpGridOriginal = fo.LoadObjGrid(inputFile.c_str());
    
    
    //DumpGridStats(grid);
    simpGrid->normalize();									//7.  Normalize the mesh in the [-1,1] cube. This makes setting the OpenGL projection easier.
    simpGrid->computeFaceNormals();							//8.  Compute face and vertex normals for the mesh. This allows us to shade the mesh next.
    simpGrid->computeVertexNormals();
    float maxDecError = std::numeric_limits<float>::infinity();
   
    int last = 0;
    MeshDecimator dec;
    dec.Initialize(*simpGrid);

    for (int i = 0; i < simpGrid->numPoints(); ++i) {
        float p[3];
        simpGrid->getPoint(i, p);
        float dist = glm::length(glm::vec3(p[0], p[1], p[2]));
        
    }

    while (simpGrid->numPoints() > 10000) {
        last = simpGrid->numPoints();

        int decPoints = simpGrid->numPoints() * 0.5;
        int decCells = simpGrid->numCells() * 0.1;
        
        dec.Decimate(decPoints, decCells, maxDecError);
        dec.GetDecimatedOutput(simpGrid);
        if (simpGrid->numPoints() == last) {
            break;
        }
        
    }

     fo.WriteObjGrid(outputFile.c_str(), simpGrid); 
     
     float surfaceAreaResamp = fe.SurfaceArea(outputFile);

     if (surfaceAreaResamp / surfaceAreaOriginal < 0.5f || surfaceAreaResamp / surfaceAreaOriginal > 1.5f) {
         std::cout << outputFile << " " << surfaceAreaResamp / surfaceAreaOriginal << std::endl;
         fo.WriteObjGrid(outputFile.c_str(), simpGridOriginal);
     }

    delete simpGrid;
}

