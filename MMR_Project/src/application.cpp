#define GLM_ENABLE_EXPERIMENTAL
#define TINYOBJLOADER_IMPLEMENTATION
#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include "glm/glm.hpp"
#include "glm/gtc/type_ptr.hpp"
#include <glm/gtx/string_cast.hpp>
#include "./include/tiny_obj_loader.h"
#include "Camera.h"
#include "Shader.h"
#include "Preprocessing.h"
#include <iostream>
#include <direct.h>
#include <fstream>
#include <string>
#include <sstream>

struct ShaderProgramSource
{
	std::string VertexSource;
	std::string FragmentSource;
};


bool drawWireframe = false;
bool togglePan = false;
bool simplifyMesh = false;
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

Camera camera(glm::vec3(0,0,-4), glm::vec3(0), 60.0f, 16/9);

struct Vertex {
	float position[3];
	float normal[3];
	float texcoord[2];
};

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

static bool LoadObj(const char* inputFile, std::vector<float>&outVertices, std::vector<unsigned int>&outIndices)
{
    tinyobj::ObjReaderConfig readerConfig;
    readerConfig.mtl_search_path = "./test_objs/";
    tinyobj::ObjReader reader;

    if (!reader.ParseFromFile(inputFile, readerConfig)) {
        if (!reader.Error().empty()) {
            std::cerr << "TinyObjReader: " << reader.Error() << std::endl;
        }
        return false;
    }

    if (!reader.Warning().empty()) {
        std::cout << "TinyObjReader: " << reader.Warning() << std::endl;
    }

    const tinyobj::attrib_t& attrib = reader.GetAttrib();
    const std::vector<tinyobj::shape_t>& shapes = reader.GetShapes();

    outVertices.clear();
    outIndices.clear();

    // Temporary arrays
    std::vector<glm::vec3> positions(attrib.vertices.size() / 3);
    for (size_t i = 0; i < positions.size(); i++) {
        positions[i] = glm::vec3(
            attrib.vertices[3 * i + 0],
            attrib.vertices[3 * i + 1],
            attrib.vertices[3 * i + 2]
        );
    }

    std::vector<glm::vec3> normals;
    bool hasNormals = !attrib.normals.empty();
    if (hasNormals) {
        normals.resize(attrib.normals.size() / 3);
        for (size_t i = 0; i < normals.size(); i++) {
            normals[i] = glm::vec3(
                attrib.normals[3 * i + 0],
                attrib.normals[3 * i + 1],
                attrib.normals[3 * i + 2]
            );
        }
    }
    else {
        normals.resize(positions.size(), glm::vec3(0.0f));
    }

    for (const auto& shape : shapes) {
        size_t index_offset = 0;
        for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++) {
            int fv = shape.mesh.num_face_vertices[f];
            if (fv != 3) {
                std::cerr << "Warning: non-triangle face detected. Skipping.\n";
                index_offset += fv;
                continue;
            }

            glm::vec3 faceNormal(0.0f);

            for (int v = 0; v < fv; v++) {
                tinyobj::index_t idx = shape.mesh.indices[index_offset + v];
                outIndices.push_back(idx.vertex_index);

                // If normals are missing, compute face normal
                if (!hasNormals) {
                    glm::vec3 v0 = positions[shape.mesh.indices[index_offset + 0].vertex_index];
                    glm::vec3 v1 = positions[shape.mesh.indices[index_offset + 1].vertex_index];
                    glm::vec3 v2 = positions[shape.mesh.indices[index_offset + 2].vertex_index];
                    faceNormal = glm::normalize(glm::cross(v1 - v0, v2 - v0));
                }
            }

            if (!hasNormals) {
                // Accumulate face normal into vertex normals
                for (int v = 0; v < fv; v++) {
                    tinyobj::index_t idx = shape.mesh.indices[index_offset + v];
                    normals[idx.vertex_index] += faceNormal;
                }
            }

            index_offset += fv;
        }
    }

    if (!hasNormals) {
        for (auto& n : normals) {
            n = glm::normalize(n);
        }
    }

    // Interleave position + normal
    outVertices.reserve(positions.size() * 6);
    for (size_t i = 0; i < positions.size(); i++) {
        outVertices.push_back(positions[i].x);
        outVertices.push_back(positions[i].y);
        outVertices.push_back(positions[i].z);
        outVertices.push_back(normals[i].x);
        outVertices.push_back(normals[i].y);
        outVertices.push_back(normals[i].z);
    }

    return true;
}


// fragment shader is the pixel shader. ran once for each pixel: colour of specific pixel
// vertex shader is ran once for each vertex, so with a triangle, its ran 3 times


int main(void)
{
    GLFWwindow* window;

    /* Initialize the library */
    if (!glfwInit())
        return -1;


	Preprocessing prep;
	std::string databsePath = "./ShapeDatabase_INFOMR-master/";
	//prep.AnalyzeShapes(databsePath);
	//prep.AnalyzeShapes(databsePath);
	//prep.DatabaseStatistics("./shape_analysis.csv");

    // Request object to user
    std::cout << "Specify path for the desired object:" << std::endl;
    std::string userInput;
    std::cin >> userInput;
    std::string inputFile = "./ShapeDatabase_INFOMR-master/" + userInput;

    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
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
 	std::vector<float> positions = std::vector<float> ();
	std::vector<unsigned int> indices;

	if (!LoadObj(inputFile.c_str(), positions, indices))
	{
		std::cerr << "Failed to load obj" << std::endl;
		return -1;
	}

    std::vector<float> outBarycenter;

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
        
        if (simplifyMesh) {
			// Call the simplification function here
            MeshData simplified = prep.ResamplingOutliers(positions, indices);

			std::cout << "Simplified positions " << simplified.positions.size() << std::endl;
			std::cout << "Simplified indices " << simplified.indices.size() << std::endl;

			positions = simplified.positions;
			indices = simplified.indices;
			simplifyMesh = false; // Reset the flag to avoid continuous simplification
            glBindBuffer(GL_ARRAY_BUFFER, buffer);
            glBufferData(GL_ARRAY_BUFFER, positions.size() * sizeof(float), positions.data(), GL_STATIC_DRAW);

            glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
            glBufferData(GL_ELEMENT_ARRAY_BUFFER, indices.size() * sizeof(unsigned int), indices.data(), GL_STATIC_DRAW);
			std::cout << "Mesh simplified. New vertex count: " << positions.size() / 6 << ", New index count: " << indices.size() << std::endl;
        }
        

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