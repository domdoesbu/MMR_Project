#define GLM_ENABLE_EXPERIMENTAL
#define TINYOBJLOADER_IMPLEMENTATION
#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include "glm/glm.hpp"
#include "glm/gtc/type_ptr.hpp"
#include <glm/gtx/string_cast.hpp>
#include "./include/tiny_obj_loader.h"
#include "Camera.h"

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

static ShaderProgramSource ParseShader(const std::string& filepath) 
{
	std::ifstream stream(filepath);

	enum class ShaderType 
	{
		NONE = -1, VERTEX = 0, FRAGMENT = 1
	};
	ShaderType type = ShaderType::NONE;
	std::string line;
	std::stringstream ss[2];

	while (getline(stream, line)) 
	{
		if (line.find("#shader") != std::string::npos)
		{
			if (line.find("vertex") != std::string::npos)
			{
				// Vertex shader
				type = ShaderType::VERTEX;

			}
			else if (line.find("fragment") != std::string::npos)
			{
				// Fragment shader
				type = ShaderType::FRAGMENT;
			}
		}
		else 
		{
			ss[(int)type] << line << '\n';
		}
	}

	return { ss[0].str(), ss[1].str() };
}

static unsigned int CompileShader(unsigned int type, const std::string& source)
{
	unsigned int id = glCreateShader(type);
	const char* src = source.c_str();
	glShaderSource(id, 1, &src, nullptr);
	glCompileShader(id);
	int result;
	// iv: i --> integer :: v --> vector, basically it wants a pointer
	glGetShaderiv(id, GL_COMPILE_STATUS, &result);
	if (result == GL_FALSE)
	{
		int length;
		glGetShaderiv(id, GL_INFO_LOG_LENGTH, &length);
		char* message = (char*)alloca(length * sizeof(char));
		glGetShaderInfoLog(id, length, &length, message);
		std::cout << "Failed to compile " << (type == GL_VERTEX_SHADER ? "vertex" : "fragment") << " shader!" << std::endl;
		std::cout << message << std::endl;
		glDeleteShader(id);
		return 0;
	}
	return id;
}

static unsigned int CreateShader(const std::string& vertexShader, const std::string& fragmentShader) 
{
    unsigned int program = glCreateProgram();
	unsigned int vs = CompileShader(GL_VERTEX_SHADER, vertexShader);
	unsigned int fs = CompileShader(GL_FRAGMENT_SHADER, fragmentShader);

	glAttachShader(program, vs);
	glAttachShader(program, fs);

	glLinkProgram(program);
	glValidateProgram(program);

	// Can delete because they've already been linked to the program
	glDeleteShader(vs);
	glDeleteShader(fs);

	return program;
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

	int oState = glfwGetKey(window, GLFW_KEY_O);
	bool oDown = oState == GLFW_PRESS;


	if (wDown) { camera.position += deltaTime * camera.GetForward(); }
	if (sDown) { camera.position -= deltaTime * camera.GetForward(); }
	if (aDown) { camera.position -= deltaTime * camera.GetRight(); }
	if (dDown) { camera.position += deltaTime * camera.GetRight(); }
	if (qDown) { camera.position += deltaTime * camera.GetUp(); }
	if (eDown) { camera.position -= deltaTime * camera.GetUp(); }

	if (pDown) { glPolygonMode(GL_FRONT_AND_BACK, GL_LINE); }
	if (oDown) { glPolygonMode(GL_FRONT_AND_BACK, GL_FILL); }
}

Camera camera(glm::vec3(0,0,-4), glm::vec3(0), 60.0f, 16/9);

static bool LoadObj(const char* inputFile, std::vector<float>& outPositions, std::vector<unsigned int>& outIndices)
{
	///* Load object */
	//// current working directory is MMR_Project/MMR_Project/
	//tinyobj::ObjReaderConfig readerConfig;
	//readerConfig.mtl_search_path = "./test_objs/";
	//tinyobj::ObjReader reader;

	//if (!reader.ParseFromFile(inputFile, readerConfig))
	//{
	//	if (!reader.Error().empty())
	//	{
	//		std::cerr << "TinyObjReader: " << reader.Error() << std::endl;
	//	}
	//	exit(1);
	//}

	//if (!reader.Warning().empty()) {
	//	std::cout << "TinyObjReader: " << reader.Warning();
	//}

	//tinyobj::attrib_t inattrib;
	//std::vector<tinyobj::shape_t> inshapes;
	//std::vector<tinyobj::material_t> materials = reader.GetMaterials();
	//std::string warn;
	//std::string err;
	//bool success = tinyobj::LoadObj(&inattrib, &inshapes, &materials, &warn, &err, inputFile, readerConfig.mtl_search_path.c_str());

	//if (!warn.empty()) {
	//	std::cout << "WARN: " << warn << std::endl;
	//}
	//if (!err.empty()) {
	//	std::cerr << err << std::endl;
	//}
	//if (!success) {
	//	std::cerr << "Failed to load " << inputFile << std::endl;
	//	return false;
	//}

	//printf("# of vertices  = %d\n", (int)(inattrib.vertices.size()) / 3);
	//printf("# of normals   = %d\n", (int)(inattrib.normals.size()) / 3);
	//printf("# of texcoords = %d\n", (int)(inattrib.texcoords.size()) / 2);
	//printf("# of materials = %d\n", (int)materials.size());
	//printf("# of shapes    = %d\n", (int)inshapes.size());

	//// TODO: put the vertex positions in the buffer and draw? maybe more complex
	//outPositions.clear();
	//outIndices.clear();

	//for (size_t s = 0; s < inshapes.size(); s++)
	//{
	//	size_t index_offset = 0;
	//	// For each face
	//	for (size_t f = 0; f < inshapes[s].mesh.num_face_vertices.size(); f++)
	//	{
	//		int fv = inshapes[s].mesh.num_face_vertices[f];
	//		// For each vertex in the face
	//		for (size_t v = 0; v < fv; v++)
	//		{
	//			// access to vertex
	//			tinyobj::index_t idx = inshapes[s].mesh.indices[index_offset + v];
	//			tinyobj::real_t vx = inattrib.vertices[3 * idx.vertex_index + 0];
	//			tinyobj::real_t vy = inattrib.vertices[3 * idx.vertex_index + 1];
	//			tinyobj::real_t vz = inattrib.vertices[3 * idx.vertex_index + 2];
	//			outPositions.push_back(vx);
	//			outPositions.push_back(vy);
	//			outPositions.push_back(vz);
	//			outIndices.push_back((unsigned int)(outIndices.size()));
	//		}
	//		index_offset += fv;
	//	}
	//}

	//return true;
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
		std::cout << "TinyObjReader: " << reader.Warning();
	}

	const tinyobj::attrib_t& inattrib = reader.GetAttrib();
	const std::vector<tinyobj::shape_t>& inshapes = reader.GetShapes();

	outPositions.clear();
	outIndices.clear();

	// Temporary arrays for per-vertex positions and normals
	std::vector<glm::vec3> positions;
	std::vector<glm::vec3> normals;

	// First collect all positions as glm::vec3
	positions.reserve(inattrib.vertices.size() / 3);
	for (size_t i = 0; i < inattrib.vertices.size(); i += 3) {
		positions.emplace_back(
			inattrib.vertices[i + 0],
			inattrib.vertices[i + 1],
			inattrib.vertices[i + 2]);
	}

	normals.resize(positions.size(), glm::vec3(0.0f)); // initialize to zero

	// Generate normals manually
	for (const auto& shape : inshapes) {
		size_t index_offset = 0;
		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++) {
			int fv = shape.mesh.num_face_vertices[f];
			if (fv != 3) {
				std::cerr << "Warning: non-triangle face detected. Skipping.\n";
				index_offset += fv;
				continue;
			}

			// Get three vertices of the face
			tinyobj::index_t idx0 = shape.mesh.indices[index_offset + 0];
			tinyobj::index_t idx1 = shape.mesh.indices[index_offset + 1];
			tinyobj::index_t idx2 = shape.mesh.indices[index_offset + 2];

			glm::vec3 v0 = positions[idx0.vertex_index];
			glm::vec3 v1 = positions[idx1.vertex_index];
			glm::vec3 v2 = positions[idx2.vertex_index];

			// Compute face normal
			glm::vec3 edge1 = v1 - v0;
			glm::vec3 edge2 = v2 - v0;
			glm::vec3 faceNormal = glm::normalize(glm::cross(edge1, edge2));

			// Accumulate to vertex normals
			normals[idx0.vertex_index] += faceNormal;
			normals[idx1.vertex_index] += faceNormal;
			normals[idx2.vertex_index] += faceNormal;

			// Add indices
			outIndices.push_back(idx0.vertex_index);
			outIndices.push_back(idx1.vertex_index);
			outIndices.push_back(idx2.vertex_index);

			index_offset += fv;
		}
	}

	// Normalize all vertex normals
	for (auto& n : normals) {
		n = glm::normalize(n);
	}

	// Interleave position + normal into one array
	outPositions.reserve(positions.size() * 6);
	for (size_t i = 0; i < positions.size(); i++) {
		outPositions.push_back(positions[i].x);
		outPositions.push_back(positions[i].y);
		outPositions.push_back(positions[i].z);

		outPositions.push_back(normals[i].x);
		outPositions.push_back(normals[i].y);
		outPositions.push_back(normals[i].z);
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




    /* Create a windowed mode window and its OpenGL context */
    window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
    if (!window)
    {
        glfwTerminate();
        return -1;
    }

    glewInit();

    /* Make the window's context current */
    glfwMakeContextCurrent(window);

	glfwSwapInterval(1);

	if (glewInit() != GLEW_OK)
	{
		std::cout << "Error!" << std::endl;
	}

	// Load Obj
	std::string inputFile = "./test_objs/D00174.obj";

	std::vector<float> positions;
	std::vector<unsigned int> indices;

	if (!LoadObj(inputFile.c_str(), positions, indices))
	{
		std::cerr << "Failed to load obj" << std::endl;
		return -1;
	}

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

	ShaderProgramSource source = ParseShader("res/shaders/Basic.shader");
	
	unsigned int shader = CreateShader(source.VertexSource, source.FragmentSource);
	glUseProgram(shader);
	
	float previousTime = glfwGetTime();
	float currentTime = glfwGetTime();

	// Lighting
	glm::vec3 lightColor(1.0f, 1.0f, 1.0f);

	unsigned int lightVAO;
	glGenVertexArrays(1, &lightVAO);

	glBindBuffer(GL_ARRAY_BUFFER, buffer);


	glEnable(GL_CULL_FACE);
	glEnable(GL_DEPTH_TEST);
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
		// Get input from user keyboard
		currentTime = glfwGetTime(); // Get the time to regulate how fast the movement speed is
		HandleInput(window, camera, currentTime - previousTime);

		// Calculate camera angle
		glm::mat4 viewMatrix = camera.GetViewMatrix();
		glm::mat4 projectionMatrix = camera.GetProjectionMatrix();
		glm::mat4 viewProjectionMatrix = projectionMatrix * viewMatrix;
		glm::mat4 model = glm::mat4(1.0f);
		model = glm::rotate(model, glm::radians(90.0f), glm::vec3(1, 0, 0));
		glUniformMatrix4fv(glGetUniformLocation(shader, "model"), 1, GL_FALSE, glm::value_ptr(model));
		glUniformMatrix4fv(glGetUniformLocation(shader, "view"), 1, GL_FALSE, glm::value_ptr(viewMatrix));
		glUniformMatrix4fv(glGetUniformLocation(shader, "projection"), 1, GL_FALSE, glm::value_ptr(projectionMatrix));
		
		glUniform3f(glGetUniformLocation(shader, "lightColor"), lightColor.x, lightColor.y, lightColor.z);
		glUniform3f(glGetUniformLocation(shader, "objectColor"), 0.2f, 0.3f, 0.8f);
		glUniform3f(glGetUniformLocation(shader, "lightPos"), 0.0f, 4.0f, 0.0f);
		// Update

		// glClearColor(1, 0, 0, 1);

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

		glUniformMatrix4fv(glGetUniformLocation(shader, "u_ViewProjectionMatrix"), 1, GL_FALSE, glm::value_ptr(viewProjectionMatrix));
		
		glDrawElements(GL_TRIANGLES, indices.size(), GL_UNSIGNED_INT, nullptr);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        glfwPollEvents();
		previousTime = currentTime;
    }

	glDeleteProgram(shader);

    glfwTerminate();
    return 0;
}