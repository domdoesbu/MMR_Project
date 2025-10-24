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
#include "Querying.h"

namespace fs = std::filesystem;
struct ShaderProgramSource
{
	std::string VertexSource;
	std::string FragmentSource;
};
struct Mesh {
    unsigned int vao;
    unsigned int indexCount;
};

Mesh createMesh(const std::vector<float>& pos,const std::vector<unsigned int>& idx)
{
    Mesh m;
    glGenVertexArrays(1, &m.vao);
    glBindVertexArray(m.vao);

    unsigned int vbo, ibo;
    glGenBuffers(1, &vbo);
    glGenBuffers(1, &ibo);

    glBindBuffer(GL_ARRAY_BUFFER, vbo);
    glBufferData(GL_ARRAY_BUFFER, pos.size() * sizeof(float), pos.data(), GL_STATIC_DRAW);

    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, idx.size() * sizeof(unsigned int), idx.data(), GL_STATIC_DRAW);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    glVertexAttribPointer(1, 3, GL_FLOAT, GL_FALSE, 6 * sizeof(float), (void*)(3 * sizeof(float)));
    glEnableVertexAttribArray(1);

    m.indexCount = idx.size();
    return m;
}


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

Camera camera(glm::vec3(0,0,-5), glm::vec3(0), 60.0f, 16/9);

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


int main(void)
{
    _CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF | _CRTDBG_CHECK_ALWAYS_DF);
    GLFWwindow* window;

    if (!glfwInit())
        return -1;

    window = glfwCreateWindow(1400, 1050, "MMR Project", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glfwSetKeyCallback(window, KeyCallback);
    glewInit();
    glfwMakeContextCurrent(window);
    glfwSwapInterval(1);

    if (glewInit() != GLEW_OK) { std::cout << "Error!" << std::endl; }

    // Load Obj
    std::vector<float> positions = std::vector<float>();
    std::vector<unsigned int> indices;

    FileOrganizer fo;
    FeatureExtraction fe;
    Preprocessing prep;
    Querying q;

    std::string databsePath = "./ShapeDatabaseFixed/";
    //std::string databsePath = "./test_objs/";
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

    //prep.NormalizeDatabase(databsePathResampled);
    //CSVSetup("./shape_analysis_resamp_norm.csv", databsePathResampled);
    std::cout << "--- PREPROCESSING END ---" << std::endl;
    // -------------------------------------------------------------------------------
    // FEATURE EXTRACTION
    fe.ExtractFeaturesOthers(databsePathResampled);
    //fe.ExtractFeaturesAtoD(databsePathResampled);
    
    q.Normalization(databsePathResampled, "feature_extraction_complete.csv");

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

    std::vector<std::string> queryResults = q.ExecuteQuery(inputFile, databsePathResampled);
    
    std::vector<Mesh> meshes;
    meshes.push_back(createMesh(positions, indices));


    for (auto& path : queryResults) {
        positions.clear();
        indices.clear();
        if (fo.LoadObj(path.c_str(), positions, indices)) {
            meshes.push_back(createMesh(positions, indices));
        }
    }

    Shader wireframeShader("res/shaders/Vertex.shader", "res/shaders/wireframeFragment.shader");
    Shader solidShader("res/shaders/Vertex.shader", "res/shaders/Fragment.shader");

    solidShader.use();

    float previousTime = glfwGetTime();
    float currentTime = glfwGetTime();

    glm::vec3 lightColor(1.0f, 1.0f, 1.0f);

    Refinement ref;

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
        currentTime = glfwGetTime(); 
        HandleInput(window, camera, currentTime - previousTime);

        glm::mat4 viewMatrix = camera.GetViewMatrix();
        glm::mat4 projectionMatrix = camera.GetProjectionMatrix();
        glm::mat4 model = glm::mat4(1.0f);
        model = glm::rotate(model, glm::radians(0.0f), glm::vec3(1, 0, 0));

        solidShader.use();
        glUniformMatrix4fv(glGetUniformLocation(solidShader.ID, "view"), 1, GL_FALSE, glm::value_ptr(viewMatrix));
        glUniformMatrix4fv(glGetUniformLocation(solidShader.ID, "projection"), 1, GL_FALSE, glm::value_ptr(projectionMatrix));


        glUniform3f(glGetUniformLocation(solidShader.ID, "lightColor"), lightColor.x, lightColor.y, lightColor.z);
        glUniform3f(glGetUniformLocation(solidShader.ID, "objectColor"), 0.5f, 0.5f, 0.5f);
        glUniform3f(glGetUniformLocation(solidShader.ID, "lightPos"), 1.0f, 4.0f, 0.0f);
        glUniform1i(glGetUniformLocation(solidShader.ID, "toggleWireframe"), drawWireframe ? 1 : 0);

        glClearColor(1.0, 1.0, 1.0, 1.0);
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

        float x = 3.25f;
        for (const auto& m : meshes) {
            glm::mat4 model = glm::translate(glm::mat4(1.0f), glm::vec3(x, 0.0f, 0.0f));
            x -= 2.5f;

            glUniformMatrix4fv(glGetUniformLocation(solidShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(model));
            glBindVertexArray(m.vao);
            glDrawElements(GL_TRIANGLES, m.indexCount, GL_UNSIGNED_INT, nullptr);

            if (drawWireframe) {
                wireframeShader.use();
                glUniformMatrix4fv(glGetUniformLocation(wireframeShader.ID, "model"), 1, GL_FALSE, glm::value_ptr(model));
                glBindVertexArray(m.vao);
                glDrawElements(GL_TRIANGLES, m.indexCount, GL_UNSIGNED_INT, nullptr);
                solidShader.use();
            }
        }

        if (reloadMesh) {
            reloadMesh = false;
            std::cout << "Enter new mesh path: ";
            std::string newPath;
            std::cin >> newPath;
            positions.clear();
            indices.clear();
            if (fo.LoadObj(newPath.c_str(), positions, indices)) {
                meshes.push_back(createMesh(positions, indices));
                std::cout << "Mesh reloaded successfully!\n";
            }
            else {
                std::cerr << "Failed to reload mesh.\n";
            }
        }


        glfwSwapBuffers(window);
        glfwPollEvents();
        previousTime = currentTime;
        glPolygonMode(GL_FRONT_AND_BACK, GL_FILL);
        glDisable(GL_POLYGON_OFFSET_LINE);
    }


    glDeleteProgram(solidShader.ID);
    glfwTerminate();
    return 0;
}
