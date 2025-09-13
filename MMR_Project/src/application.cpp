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

bool drawWireframe = false;
 
void HandleInput(GLFWwindow* window, Camera& camera, float deltaTime)
{
	bool togglePan = false;

	int oState = glfwGetKey(window, GLFW_KEY_O);
	bool oDown = oState == GLFW_PRESS;

	if (oDown) {
		togglePan = !togglePan;
	}

	
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

	if (togglePan) {
		camera.firstPerson = true;
		if (wDown) { camera.position += deltaTime * camera.GetForward(); }
		if (sDown) { camera.position -= deltaTime * camera.GetForward(); }
		if (aDown) { camera.position -= deltaTime * camera.GetRight(); }
		if (dDown) { camera.position += deltaTime * camera.GetRight(); }
		if (qDown) { camera.position += deltaTime * camera.GetUp(); }
		if (eDown) { camera.position -= deltaTime * camera.GetUp(); }
	}
	else {
		camera.firstPerson = false;
		if (wDown) { camera.position.y += deltaTime * 0.5f; }
		if (sDown) { camera.position.y -= deltaTime * 0.5f;}
		if (aDown) { camera.position.x -= deltaTime * 0.5f; }
		if (dDown) { camera.position.x += deltaTime * 0.5f;}
		if (qDown) { camera.position.z += deltaTime * 0.5f; }
		if (eDown) { camera.position.z -= deltaTime * 0.5f;}
	}
	

	if (pDown) { drawWireframe = !drawWireframe; }

}

Camera camera(glm::vec3(0,0,-4), glm::vec3(0), 60.0f, 16/9);

struct Vertex {
	float position[3];
	float normal[3];
	float texcoord[2];
};

bool LoadObj(const std::string& filepath,std::vector<float>& outVertices) {
	tinyobj::attrib_t attrib;
	std::vector<tinyobj::shape_t> shapes;
	std::vector<tinyobj::material_t> materials;
	std::string warn, err;
	std::vector<glm::vec3> normals;
	bool ret = tinyobj::LoadObj(&attrib, &shapes, &materials, &warn, &err, filepath.c_str());
	if (!warn.empty()) {
		std::cerr << "tinyobj warning: " << warn << std::endl;
	}
	if (!err.empty()) {
		std::cerr << "tinyobj error: " << err << std::endl;
	}
	if (!ret) {
		return false;
	}

	outVertices.clear();

	for (const auto& shape : shapes) {
		size_t indexOffset = 0;
		for (size_t f = 0; f < shape.mesh.num_face_vertices.size(); f++) {
			int fv = shape.mesh.num_face_vertices[f];

			// We want to force triangulation
			if (fv != 3) {
				std::cerr << "Warning: Non-triangle face detected. Skipping." << std::endl;
				indexOffset += fv;
				continue;
			}

			glm::vec3 v0;
			glm::vec3 v1;
			glm::vec3 v2;

			for (int v = 0; v < fv; v++) {
				tinyobj::index_t idx = shape.mesh.indices[indexOffset + v];

				glm::vec3 vertexPos = glm::vec3(attrib.vertices[3 * idx.vertex_index + 0], attrib.vertices[3 * idx.vertex_index + 1], attrib.vertices[3 * idx.vertex_index + 2]);
				switch(v)
				{
				case 0:
					v0 = vertexPos;
					break;
				case 1:
					v1 = vertexPos;
					break;
				case 2:
					v2 = vertexPos;
					break;
				}
			}
			glm::vec3 edge1 = v1 - v0;
			glm::vec3 edge2 = v2 - v0;
			glm::vec3 faceNormal = glm::normalize(glm::cross(edge1, edge2));

			outVertices.push_back(v0.x);
			outVertices.push_back(v0.y);
			outVertices.push_back(v0.z);
			outVertices.push_back(faceNormal.x);
			outVertices.push_back(faceNormal.y);
			outVertices.push_back(faceNormal.z);

			outVertices.push_back(v1.x);
			outVertices.push_back(v1.y);
			outVertices.push_back(v1.z);
			outVertices.push_back(faceNormal.x);
			outVertices.push_back(faceNormal.y);
			outVertices.push_back(faceNormal.z);

			outVertices.push_back(v2.x);
			outVertices.push_back(v2.y);
			outVertices.push_back(v2.z);
			outVertices.push_back(faceNormal.x);
			outVertices.push_back(faceNormal.y);
			outVertices.push_back(faceNormal.z);

			indexOffset += fv;
		}
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

	std::vector<float> positions = std::vector<float> ();
	std::vector<unsigned int> indices;

	if (!LoadObj(inputFile.c_str(), positions))
	{
		std::cerr << "Failed to load obj" << std::endl;
		return -1;
	}

	for (int i = 0; i < positions.size() / 6; i++) {
		indices.push_back(i);
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
		glm::mat4 viewProjectionMatrix = projectionMatrix * viewMatrix;
		glm::mat4 model = glm::mat4(1.0f);
		model = glm::rotate(model, glm::radians(0.0f), glm::vec3(1, 0, 0));
		glUniformMatrix4fv(glGetUniformLocation(shader, "model"), 1, GL_FALSE, glm::value_ptr(model));
		glUniformMatrix4fv(glGetUniformLocation(shader, "view"), 1, GL_FALSE, glm::value_ptr(viewMatrix));
		glUniformMatrix4fv(glGetUniformLocation(shader, "projection"), 1, GL_FALSE, glm::value_ptr(projectionMatrix));
		
		glUniform3f(glGetUniformLocation(shader, "lightColor"), lightColor.x, lightColor.y, lightColor.z);
		glUniform3f(glGetUniformLocation(shader, "objectColor"), 0.2f, 0.3f, 0.8f);
		glUniform3f(glGetUniformLocation(shader, "lightPos"), 0.0f, 4.0f, 0.0f);

		glUniform1i(glGetUniformLocation(shader, "toggleWireframe"), drawWireframe ? 1 : 0);

		// Update

		glClearColor(0.2, 0.2, 0.2, 1);

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

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