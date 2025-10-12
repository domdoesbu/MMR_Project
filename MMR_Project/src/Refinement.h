#pragma once

#include <string>
#include <filesystem>
#include <iostream>
#include <unordered_set>
#include <fstream>
#include <sstream>
#include <vector>
#include <unordered_map>
#include <queue>
#include "CodeFromProf/UnstructuredGrid3D.h"
#include "FileOrganizer.h"
#include <tuple>
#include <map>
#include <glut.h>


class Refinement
{
public:

    Refinement() {};
    void DumpGridStats(UnstructuredGrid3D* grid);
    void Refine(std::string& inputFile, std::string& outputFile);
    float computeAverageCell(UnstructuredGrid3D* grid);
    void subdivide(UnstructuredGrid3D*& grid, UnstructuredGrid3D* grid2, float min_area);
    // gets file
    // change ply reader to  obj
    // create a grid
    /*
        grid->normalize();									//7.  Normalize the mesh in the [-1,1] cube. This makes setting the OpenGL projection easier.
       grid->computeFaceNormals();							//8.  Compute face and vertex normals for the mesh. This allows us to shade the mesh next.
       grid->computeVertexNormals();
	   avg_area = computeAverageCell(grid);          //Compute average cell area
       subdivide(grid,grid2,fraction*avg_area);
    */
};

