#include "Refinement.h"


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
    int NP = grid->numPoints(), NC = grid->numCells();

    vector<Point3d> pts(NP);                            //Copy all vertices; we will reuse all of them
    for (int i = 0;i < NP;++i)
    {
        Point3d& pi = pts[i];
        grid->getPoint(i, &pi.x);
    }

    multimap<float, int> area_sorted_cells;              //Used to sort cells from largest to smallest
    for (int i = 0;i < NC;++i)                               //Sort cells from largest to smallest in 'area_sorted_cells'
    {
        int c[3];
        grid->getCell(i, c);

        Point3d cross_prod = (pts[c[1]] - pts[c[0]]).cross(pts[c[2]] - pts[c[0]]);
        float area = cross_prod.norm() / 2;
        //Since multimap<> is ascendingly-sorted by definition, add
        area_sorted_cells.insert(make_pair(-area, i));   //cells with their negative areas so largest cells come first
    }

    int NP2 = NP;
    int NC2 = 0;
    int Nsubdivided = 0;
    vector<int> cells;

    for (map<float, int>::const_iterator it = area_sorted_cells.begin();it != area_sorted_cells.end();++it)
    {                                                   //Treat cells from largest to smallest
        float area = -(*it).first;
        int      i = (*it).second;

        int c[3];
        grid->getCell(i, c);
        if (area >= min_area)                           //Cell larger than the min-area allowed for subdivision?
        {                                               //Then subdivide the cell into 3 cells using its barycenter
            Point3d center = (pts[c[0]] + pts[c[1]] + pts[c[2]]) / 3;
            pts.push_back(center);
			std::cout << "New point: " << center.x << " " << center.y << " " << center.z << std::endl;
            cells.push_back(c[0]); cells.push_back(c[1]); cells.push_back(NP2);
            cells.push_back(NP2); cells.push_back(c[1]); cells.push_back(c[2]);
            cells.push_back(c[2]); cells.push_back(c[0]); cells.push_back(NP2);

            Nsubdivided++;                              //One more cell was subdivided
            NP2++;
            NC2 += 3;
        }
        else                                            //Cell smaller than subdivision threshold?
        {                                               //Then simply copy it
            cells.push_back(c[0]);
            cells.push_back(c[1]);
            cells.push_back(c[2]);
            NC2++;
        }
    }

    grid2 = new UnstructuredGrid3D(NP2, NC2);            //Now that we have all vertices and cells of the refined grid,
    for (int i = 0;i < NP2;++i)                              //make the new grid
        grid2->setPoint(i, (float*)pts[i]);

    for (int i = 0;i < NC2;++i)
        grid2->setCell(i, &(cells[3 * i]));

    grid2->normalize();                                 //Renormalize the grid since we changed it
    grid2->computeFaceNormals();                        //Recompute face normals since we made new cells
    grid2->computeVertexNormals();                      //Recompute vertex normals since we made new vertices and cells

    delete grid;                                        //Delete the old grid and
    grid = grid2;                                       //replace it by the new, subdivided, one

    cout << "Subdivided cells: " << Nsubdivided << endl;
}

void Refinement::Refine(std::string& inputFile, std::string& outputFile) {

    UnstructuredGrid3D* grid = 0, * grid2 = 0;
	FileOrganizer fo;
    grid = fo.LoadObjGrid(inputFile.c_str());                           //6.  Read a 3D mesh stored in a file in the PLY format
    grid->normalize();									//7.  Normalize the mesh in the [-1,1] cube. This makes setting the OpenGL projection easier.
    grid->computeFaceNormals();							//8.  Compute face and vertex normals for the mesh. This allows us to shade the mesh next.
    grid->computeVertexNormals();

    float avg_area = computeAverageCell(grid);
    float fraction = 0.5;
    subdivide(grid, grid2, fraction * avg_area);
	fo.WriteObjGrid(outputFile.c_str(), grid2);
}
