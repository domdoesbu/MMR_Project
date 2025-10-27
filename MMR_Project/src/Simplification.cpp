#include "Simplification.h"
using namespace MeshDecimation;
UnstructuredGrid3D* simpGrid = 0;
void Simplification::Simplify(std::string& inputFile, std::string& outputFile) {
    float avg_area = 0;
    FileOrganizer fo;
    
    simpGrid = fo.LoadObjGrid(inputFile.c_str());                           //6.  Read a 3D mesh stored in a file in the PLY format
    //DumpGridStats(grid);
    simpGrid->normalize();									//7.  Normalize the mesh in the [-1,1] cube. This makes setting the OpenGL projection easier.
    simpGrid->computeFaceNormals();							//8.  Compute face and vertex normals for the mesh. This allows us to shade the mesh next.
    simpGrid->computeVertexNormals();
    float maxDecError = std::numeric_limits<float>::infinity();
    MeshDecimator dec;
    int last = 0;
    dec.Initialize(*simpGrid);
    while (simpGrid->numPoints() > 10000) {
        last = simpGrid->numPoints();

        int decPoints = simpGrid->numPoints() * 0.9;
        int decCells = simpGrid->numCells() * 0.9;
        dec.Decimate(decPoints, decCells, std::numeric_limits<float>::infinity());
        dec.GetDecimatedOutput(simpGrid);
        std::cout << simpGrid->numPoints() << std::endl;
        if (simpGrid->numPoints() == last) {
            break;
        }
    }
    fo.WriteObjGrid(outputFile.c_str(), simpGrid);
}

