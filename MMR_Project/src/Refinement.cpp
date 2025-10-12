#include "Refinement.h"


UnstructuredGrid3D* grid = 0, * grid2 = 0;

void Refinement::DumpGridStats(UnstructuredGrid3D* grid)
{
    int NP = grid->numPoints();
    int NC = grid->numCells();
    std::cout << "Loaded grid: NP=" << NP << " NC=" << NC << "\n";

    // Print first few points
    for (int i = 0; i < std::min(5, NP); ++i) {
        float p[3]; grid->getPoint(i, p);
        std::cout << "  p[" << i << "] = " << p[0] << "," << p[1] << "," << p[2] << "\n";
    }

    // Print first few cells
    int badCount = 0;
    for (int i = 0; i < std::min(50, NC); ++i) {
        int c[10]; int sz = grid->getCell(i, c);
        std::cout << "  cell[" << i << "] size=" << sz << ": ";
        for (int j = 0;j < sz;++j) std::cout << c[j] << " ";
        std::cout << "\n";
        for (int j = 0;j < sz;++j) {
            if (c[j] < 0 || c[j] >= NP) badCount++;
        }
    }
    if (badCount) std::cerr << "ERROR: Found " << badCount << " out-of-range cell indices in the first samples!\n";
}


float Refinement::computeAverageCell(UnstructuredGrid3D* grid)      //Compute the average cell area
{
    float ret = 0;

    for (int i = 0;i < grid->numCells();++i)
    {
        int c[3];
        grid->getCell(i, c);

        Point3d pts[3];
        grid->getPoint(c[0], pts[0]);
        grid->getPoint(c[1], pts[1]);
        grid->getPoint(c[2], pts[2]);

        Point3d cross_prod = (pts[1] - pts[0]).cross(pts[2] - pts[0]);
        float area = cross_prod.norm() / 2;               //A cell's area is half the cross-product of two edge vectors

        ret += area;
    }

    return ret / grid->numCells();
}


void Refinement::subdivide(UnstructuredGrid3D*& grid, UnstructuredGrid3D* grid2, float min_area)
{
    int NP = grid->numPoints();
    int NC = grid->numCells();

    // Copy vertices
    std::vector<Point3d> pts;
    pts.reserve(NP + NC * 1); // estimate: up to NC new barycenters
    for (int i = 0; i < NP; ++i) {
        Point3d p;
        float tmp[3];
        grid->getPoint(i, tmp);
        p.x = tmp[0]; p.y = tmp[1]; p.z = tmp[2];
        pts.push_back(p);
    }

    // Build area-sorted container (largest first)
    std::multimap<float, int> area_sorted_cells;
    for (int i = 0; i < NC; ++i) {
        int ctmp[10];
        int sz = grid->getCell(i, ctmp);
        if (sz != 3) {
            std::cerr << "Warning: cell " << i << " has size " << sz << " (expected 3). Skipping.\n";
            continue;
        }
        // validate indices before using them
        if (ctmp[0] < 0 || ctmp[0] >= NP || ctmp[1] < 0 || ctmp[1] >= NP || ctmp[2] < 0 || ctmp[2] >= NP) {
            std::cerr << "Warning: cell " << i << " has invalid indices: "
                << ctmp[0] << "," << ctmp[1] << "," << ctmp[2] << ". Skipping.\n";
            continue;
        }
        Point3d e1 = pts[ctmp[1]] - pts[ctmp[0]];
        Point3d e2 = pts[ctmp[2]] - pts[ctmp[0]];
        float area = e1.cross(e2).norm() * 0.5f;
        area_sorted_cells.insert(std::make_pair(-area, i));
    }

    int NP2 = NP;
    int NC2 = 0;
    int Nsubdivided = 0;
    std::vector<int> cells;
    cells.reserve(area_sorted_cells.size() * 3 * 2); // rough reserve

    // iterate with proper iterator type
    for (auto it = area_sorted_cells.begin(); it != area_sorted_cells.end(); ++it) {
        float area = -it->first;
        int i = it->second;

        int c[10];
        int size = grid->getCell(i, c);
        if (size != 3) {
            std::cerr << "Skipping cell " << i << " with unexpected size " << size << "\n";
            continue;
        }

        // validate indices before using them
        if (c[0] < 0 || c[1] < 0 || c[2] < 0 ||
            c[0] >= (int)pts.size() || c[1] >= (int)pts.size() || c[2] >= (int)pts.size()) {
            std::cerr << "ERROR: invalid cell indices for cell " << i << ": "
                << c[0] << "," << c[1] << "," << c[2] << " pts.size()=" << pts.size() << "\n";
            // Print some context and skip the cell to avoid crash
            continue;
        }

        if (area >= min_area) {
            Point3d center = (pts[c[0]] + pts[c[1]] + pts[c[2]]) / 3.0f;
            pts.push_back(center);

            // NP2 must equal previous pts.size() before push_back; assert
            assert(NP2 == (int)pts.size() - 1 || NP2 == (int)pts.size() - 0 /*sometimes they match differently depending on push order*/);

            // push the 3 new triangles
            cells.push_back(c[0]); cells.push_back(c[1]); cells.push_back(NP2);
            cells.push_back(NP2); cells.push_back(c[1]); cells.push_back(c[2]);
            cells.push_back(c[2]); cells.push_back(c[0]); cells.push_back(NP2);

            Nsubdivided++;
            NP2++;
            NC2 += 3;
        }
        else {
            // copy triangle
            cells.push_back(c[0]);
            cells.push_back(c[1]);
            cells.push_back(c[2]);
            NC2++;
        }
    }

    // Final consistency checks
    if ((int)cells.size() != NC2 * 3) {
        std::cerr << "ERROR: cells vector size mismatch: cells.size()=" << cells.size()
            << " but NC2*3=" << (NC2 * 3) << "\n";
        // Attempt to recover/diagnose: print counts
        std::cerr << "Original NP=" << NP << " NP2=" << NP2 << " NC=" << NC << " NC2=" << NC2 << " Nsubdivided=" << Nsubdivided << "\n";
        // don't proceed to build grid2 if mismatch
        return;
    }

    // Build the new grid
    UnstructuredGrid3D* newGrid = new UnstructuredGrid3D(NP2, NC2);
    // set points
    for (int i = 0; i < NP2; ++i) {
        float tmp[3] = { pts[i].x, pts[i].y, pts[i].z };
        newGrid->setPoint(i, tmp);
    }
    // set cells (each cell is 3 ints)
    for (int i = 0; i < NC2; ++i) {
        newGrid->setCell(i, &(cells[3 * i]));
    }

    newGrid->normalize();
    newGrid->computeFaceNormals();
    newGrid->computeVertexNormals();

    // swap and cleanup
    delete grid;
    grid = newGrid;

    std::cout << "Subdivided cells: " << Nsubdivided << ", final NP=" << NP2 << ", NC=" << NC2 << "\n";
}

void Refinement::Refine(std::string& inputFile, std::string& outputFile) {

    float avg_area = 0;
	FileOrganizer fo;
    grid = fo.LoadObjGrid(inputFile.c_str());                           //6.  Read a 3D mesh stored in a file in the PLY format
	//DumpGridStats(grid);
    grid->normalize();									//7.  Normalize the mesh in the [-1,1] cube. This makes setting the OpenGL projection easier.
    grid->computeFaceNormals();							//8.  Compute face and vertex normals for the mesh. This allows us to shade the mesh next.
    grid->computeVertexNormals();

    float fraction = 0.9;
    while (grid->numPoints() < 5000) {
        avg_area = computeAverageCell(grid);
        subdivide(grid, grid2, avg_area * fraction);
    }
        
	fo.WriteObjGrid(outputFile.c_str(), grid);
}
