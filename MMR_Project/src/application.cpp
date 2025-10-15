#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include <direct.h>
#include <fstream>
#include <string>
#include <sstream>
#include <iostream>
#include <crtdbg.h>
#include <filesystem>
#include "FileOrganizer.h"
#include "Camera.h"
#include "Shader.h"
#include "Preprocessing.h"
#include "Simplification.h"
#include "Refinement.h"
#include "FeatureExtraction.h"

namespace fs = std::filesystem;
struct ShaderProgramSource
{
	std::string VertexSource;
	std::string FragmentSource;
};

bool drawWireframe = false;
bool togglePan = false;
bool simplifyMesh = false;
bool refineMesh = false;
bool reloadMesh = false;
void KeyCallback(GLFWwindow* window, int key, int scancode, int action, int mods)
{
    if (action == GLFW_PRESS)
    {
        switch (key)
        {
        case GLFW_KEY_O:
            togglePan = !togglePan;
            break;
        case GLFW_KEY_P:
            drawWireframe = !drawWireframe;
            break;
        case GLFW_KEY_M:
			simplifyMesh = !simplifyMesh;
            break;
        case GLFW_KEY_N:
            refineMesh = !refineMesh;
            break;
		case GLFW_KEY_L:
			reloadMesh = true;
			break;
        }        
    }
}

void HandleInput(GLFWwindow* window, Camera& camera, float deltaTime)
{	
	int wState = glfwGetKey(window, GLFW_KEY_W);
	bool wDown = wState == GLFW_PRESS || wState == GLFW_REPEAT;

	int sState = glfwGetKey(window, GLFW_KEY_S);
	bool sDown = sState == GLFW_PRESS || sState == GLFW_REPEAT;

	int aState = glfwGetKey(window, GLFW_KEY_A);
	bool aDown = aState == GLFW_PRESS || aState == GLFW_REPEAT;

	int dState = glfwGetKey(window, GLFW_KEY_D);
	bool dDown = dState == GLFW_PRESS || dState == GLFW_REPEAT;

	int qState = glfwGetKey(window, GLFW_KEY_Q);
	bool qDown = qState == GLFW_PRESS || qState == GLFW_REPEAT;

	int eState = glfwGetKey(window, GLFW_KEY_E);
	bool eDown = eState == GLFW_PRESS || eState == GLFW_REPEAT;

	int pState = glfwGetKey(window, GLFW_KEY_P);
	bool pDown = pState == GLFW_PRESS;

	camera.firstPerson = togglePan;
	if (wDown) { camera.position += deltaTime * camera.GetForward(); }
	if (sDown) { camera.position -= deltaTime * camera.GetForward(); }
	if (aDown) { camera.position -= deltaTime * camera.GetRight(); }
	if (dDown) { camera.position += deltaTime * camera.GetRight(); }
	if (qDown) { camera.position += deltaTime * camera.GetUp(); }
	if (eDown) { camera.position -= deltaTime * camera.GetUp(); }

}

Camera camera(glm::vec3(0,0,-2), glm::vec3(0), 60.0f, 16/9);

struct Vertex {
	float position[3];
	float normal[3];
	float texcoord[2];
};

void CSVSetup(const std::string& csv, std::string& database) {
    std::cout << "Creating " << csv << std::endl;
    Preprocessing prep;

    prep.AnalyzeShapes(database, csv);
    prep.DatabaseStatistics(csv);
}

static void findBarycenter(std::vector<float> positions, std::vector<unsigned int> indices, std::vector<float>&outBarycenter)
{
    float sumX = 0.0, sumY = 0.0, sumZ = 0.0;
    for (int i = 0; i < positions.size() - 3; ++i) 
    {
        sumX += positions[i + 0];
        sumY += positions[i + 1];
        sumZ += positions[i + 2];
    }
    unsigned int size = positions.size()/3;

    float avgX = sumX / size;
    float avgY = sumY / size;
    float avgZ = sumZ / size;

    std::vector<float> distX, distY, distZ;
    for (int i = 0; i < positions.size() - 3; ++i)
    {
        distX.push_back(abs(avgX - positions[i + 0]));
        distY.push_back(abs(avgY - positions[i + 1]));
        distZ.push_back(abs(avgZ - positions[i + 2]));
    }

    float avgPosX = *std::min_element(distX.begin(), distX.end());
    float avgPosY= *std::min_element(distY.begin(), distY.end());
    float avgPosZ = *std::min_element(distZ.begin(), distZ.end());

    std::cout << avgPosX << std::endl;

    outBarycenter = { avgPosX, avgPosY, avgPosZ };
}

void NormalizeDatabase(std::string& databasePath) {

    FileOrganizer fo;
    Preprocessing prep;
    fs::path sourcePath = databasePath;
    std::vector<float> positions;
    std::vector<unsigned int> indices;
    std::vector<glm::vec3> barycenters;
    std::vector<Eigen::Vector3f> eigenValues;
    for (const auto& classDir : fs::directory_iterator(sourcePath)) {
        if (!fs::is_directory(classDir)) continue;
        std::string className = classDir.path().filename().string();
        // For each obj in the folder, get the information about it
        std::string classPath = sourcePath.string() + '/' + className;
        for (const auto& file : fs::directory_iterator(classDir)) {
            positions.clear();
            indices.clear();
            std::string currentFile = file.path().filename().string();
            std::string fullFilePath = classPath + "/" + currentFile;
            if (!fo.LoadObj(fullFilePath.c_str(), positions, indices))
            {
                std::cerr << "Failed to load obj" << std::endl;

            }
            glm::vec3 barycenter = prep.ComputeBarycenter(positions);
            barycenters.push_back(barycenter);
            for (int i = 0; i < positions.size(); i += 6) {
                positions[i + 0] -= barycenter.x;
                positions[i + 1] -= barycenter.y;
                positions[i + 2] -= barycenter.z;
            }

            // Pose
            Eigen::Vector3f eigVals = prep.NormalizeAlign(positions, 6, 0);
            eigenValues.push_back(eigVals);
         

            // Flipping
            prep.NormalizeFlipping(positions, indices, 6, 0);

            // Size
            positions = prep.NormalizeScale(positions, fullFilePath);
            prep.CheckNormalOrientation(positions, indices, barycenter);
            MeshData data;
            data.positions = positions;
            data.indices = indices;
            fo.WriteNewObj(fullFilePath, data);
        }
    }
    CSVSetup("./shape_analysis_resamp_norm.csv", databasePath);
    fo.WriteCSVAfterNorm(databasePath, "Bary_Eigs.csv", barycenters, eigenValues);
}

void ExtractFeaturesOneShape(std::string inputFile, std::vector<float> positions) {

    FeatureExtraction fe;

    FileOrganizer fo;
    fs::path path = inputFile;
    baryAndEigInfo info = fo.getBaryAndEigFromCSV("Bary_Eigs.csv", path.filename().string());

    // InputFile is the full path

    // 1. Surface area S
    float surfaceArea = fe.SurfaceArea(inputFile);
    std::cout << "Surface Area: " << surfaceArea << std::endl;

    // 2. Compactness
    float volume = fe.Volume(inputFile);
    float compactness = fe.Compactness(surfaceArea, volume);
    std::cout << "Volume : " << volume << "|| Compactness : " << compactness << std::endl;

    // 3. Recantgularity
    glm::vec3 barycenter = { info.baryX, info.baryY, info.baryZ };
    float rectangularity = fe.Rectangularity(positions, barycenter, inputFile, path.filename().string(), "./shape_analysis_resamp.csv");
    std::cout << "Rectangularity: " << rectangularity << std::endl;
  
    // 4. Diameter
    float diameter = fe.Diameter(positions);
    std::cout << "Diameter: " << diameter << std::endl;

    // 5. Convexity
    float convexity = fe.Convexity(positions, barycenter, path.filename().string(), inputFile);
    std::cout << "Convexity: " << convexity << std::endl;

    // 6. Eccentricity
    float eccentricity = fe.Eccentricity(info.eigLarge, info.eigSmall);
    std::cout << "Eccentricity: " << eccentricity << std::endl;
}

void ExtractFeatures( const std::string& databasePath) {
    // FEATURE EXTRACTION
    std::cout << "--- FEATURE EXTRACTION ---" << std::endl;
    FeatureExtraction fe;
    FileOrganizer fo;
    fs::path sourcePath = databasePath;
    // 7. A3 -> D4
    //// A3
    
  //  for (const auto& classDir : fs::directory_iterator(sourcePath)) {
  //      if (!fs::is_directory(classDir)) continue;
  //      std::string className = classDir.path().filename().string();
  //      // For each obj in the folder, get the information about it
		//std::string classPath = sourcePath.string() + '/' + className;
  //      fe.ExtractA3Features(classPath);
  //  }
  // 
    //// D1
    //for (const auto& classDir : fs::directory_iterator(sourcePath)) {
    //    if (!fs::is_directory(classDir)) continue;
    //    std::string className = classDir.path().filename().string();
    //    // For each obj in the folder, get the information about it
    //    std::string classPath = sourcePath.string() + '/' + className;
    //    fe.ExtractD1Features(classPath);
    //}

    ////   //// D2
    //for (const auto& classDir : fs::directory_iterator(sourcePath)) {
    //    if (!fs::is_directory(classDir)) continue;
    //    std::string className = classDir.path().filename().string();
    //    // For each obj in the folder, get the information about it
    //    std::string classPath = sourcePath.string() + '/' + className;
    //    fe.ExtractD2Features(classPath);
    //}
    ////   //// D3
    //fe.D3(positions, 10000, 20, hist);
    ////   //// D4
    //fe.D4(positions, 10000, 20, hist);

    std::cout << "--- END FEATURE EXTRACTION ---" << std::endl;
}


int main(void)
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF | _CRTDBG_CHECK_ALWAYS_DF);
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "MMR Project", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwSetKeyCallback(window, KeyCallback);

    glewInit();

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

    glfwSwapInterval(1);

    if (glewInit() != GLEW_OK)
    {
        std::cout << "Error!" << std::endl;
    }

    // Load Obj
    std::vector<float> positions = std::vector<float>();
    std::vector<unsigned int> indices;

    FileOrganizer fo;
    Preprocessing prep;

    std::string databsePath = "./ShapeDatabaseFixed/";
    //std::string databsePath = "./test2/";
    std::string databsePathResampled = "./ResampledDatabase/";

    /*
        DO NOT UNCOMMENT!!!!!!!
        WE HAVE STATS FOR THE WHOLE DATABASE NOW AND IF YOU UNCOMMENT I HAVE TO RERUN THE WHOLE DATABASEEEEEE
    */

    std::cout << "--- PREPROCESSING ---" << std::endl;

    //CSVSetup("./shape_analysis.csv", databsePath);

    // Remeshing
    std::cout << "--- REMESHING ---" << std::endl;

    //prep.Resampling(databsePath, databsePathResampled);

    std::cout << "--- REMESHING END---" << std::endl;

    //CSVSetup("./shape_analysis_resamp.csv", databsePathResampled);

    // -------------------------------------------------------------------------------
    // PREPROCESSING
    std::cout << "--- PREPROCESSING START ---" << std::endl;

    //NormalizeDatabase(databsePathResampled);

    std::cout << "--- PREPROCESSING END ---" << std::endl;
    // -------------------------------------------------------------------------------


    // ---------------------------------------------------------------------------------
    ExtractFeatures(databsePathResampled);
    // --------------------------------------------------------------------------------- 

    std::cout << "Specify path for the desired object:" << std::endl;

    std::string userInput;
    std::cin >> userInput;
    std::string inputFile = userInput;
    std::string fileName = fs::path(inputFile).filename().string();

    if (!fo.LoadObj(inputFile.c_str(), positions, indices))
    {
        std::cerr << "Failed to load obj" << std::endl;
        return -1;
    }

    ExtractFeaturesOneShape(inputFile, positions);
    unsigned int vao;
    glGenVertexArrays(1, &vao);
    glBindVertexArray(vao);

    unsigned int buffer;
    glGenBuffers(1, &buffer);
    // This is whats being drawn since its bound
    glBindBuffer(GL_ARRAY_BUFFER, buffer);
    glBufferData(GL_ARRAY_BUFFER, positions.size() * sizeof(float), positions.data(), GL_STATIC_DRAW);

    unsigned int stride = 6 * sizeof(float);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, stride, (void*)0);
    glEnableVertexAttribArray(0);

    // Normal
    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, stride, (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);
    // index buffer obejct
    unsigned int ibo;
    glGenBuffers(1, &ibo);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(unsigned int), indices.data(), GL_STATIC_DRAW);

    Shader wireframeShader("res/shaders/Vertex.shader", "res/shaders/wireframeFragment.shader");
    Shader solidShader("res/shaders/Vertex.shader", "res/shaders/Fragment.shader");

    solidShader.use();

    float previousTime = glfwGetTime();
    float currentTime = glfwGetTime();

    // Lighting
    glm::vec3 lightColor(1.0f, 1.0f, 1.0f);

    unsigned int lightVAO;
    glGenVertexArrays(1, &lightVAO);

    glBindBuffer(GL_ARRAY_BUFFER, buffer);

    Refinement ref;

    //glEnable(GL_CULL_FACE);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        // Get input from user keyboard
        currentTime = glfwGetTime(); // Get the time to regulate how fast the movement speed is
        HandleInput(window, camera, currentTime - previousTime);

        // Calculate camera angle
        glm::mat4 viewMatrix = camera.GetViewMatrix();
        glm::mat4 projectionMatrix = camera.GetProjectionMatrix();


        glm::mat4 model = glm::mat4(1.0f);
        model = glm::rotate(model, glm::radians(0.0f), glm::vec3(1, 0, 0));

        solidShader.use();
        glUniformMatrix4fv(glGetUniformLocation(solidShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(model));
        glUniformMatrix4fv(glGetUniformLocation(solidShader.ID, "view"), 1, GL_FALSE, glm::value_ptr(viewMatrix));
        glUniformMatrix4fv(glGetUniformLocation(solidShader.ID, "projection"), 1, GL_FALSE, glm::value_ptr(projectionMatrix));

        glUniform3f(glGetUniformLocation(solidShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z);
        glUniform3f(glGetUniformLocation(solidShader.ID, "objectColor"), 0.5f, 0.5f, 0.5f);
        glUniform3f(glGetUniformLocation(solidShader.ID, "lightPos"), 1.0f, 4.0f, 0.0f);

        glUniform1i(glGetUniformLocation(solidShader.ID, "toggleWireframe"), drawWireframe ? 1 : 0);

        // Update

        glClearColor(1.0, 1.0, 1.0, 1.0);

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        glBindVertexArray(vao);
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, nullptr);

        if (drawWireframe) {
            glEnable(GL_POLYGON_OFFSET_LINE);
            glPolygonOffset(-1.0f, -1.0f);
            glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);
            glLineWidth(1.0f);
            wireframeShader.use();
            glUniformMatrix4fv(glGetUniformLocation(wireframeShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(model));
            glUniformMatrix4fv(glGetUniformLocation(wireframeShader.ID, "view"), 1, GL_FALSE, glm::value_ptr(viewMatrix));
            glUniformMatrix4fv(glGetUniformLocation(wireframeShader.ID, "projection"), 1, GL_FALSE, glm::value_ptr(projectionMatrix));
            glUniform3f(glGetUniformLocation(wireframeShader.ID, "wireColor"), 0.0f, 0.0f, 0.0f);

            glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, nullptr);
        }

        if (reloadMesh)
        {
            reloadMesh = false; // reset flag

            std::cout << "Enter new mesh path: ";
            std::string newPath;
            std::cin >> newPath;
            positions.clear();
            indices.clear();
            if (fo.LoadObj(newPath.c_str(), positions, indices))
            {
               
                // Update GPU buffers with new mesh data
                glBindBuffer(GL_ARRAY_BUFFER, buffer);
                glBufferData(GL_ARRAY_BUFFER, positions.size() * sizeof(float), positions.data(), GL_STATIC_DRAW);

                glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
                glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(unsigned int), indices.data(), GL_STATIC_DRAW);

                std::cout << "Mesh reloaded successfully!\n";
            }
            else
            {
                std::cerr << "Failed to reload mesh.\n";
            }
        }
            /* Swap front and back buffers */
            glfwSwapBuffers(window);

            /* Poll for and process events */
            glfwPollEvents();
            previousTime = currentTime;

            glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
            glDisable(GL_POLYGON_OFFSET_LINE);
        
    }

        glDeleteProgram(solidShader.ID);

        glfwTerminate();
        return 0;
}
