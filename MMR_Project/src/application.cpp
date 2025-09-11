#define GLM_ENABLE_EXPERIMENTAL
#include "GL/glew.h"
#include "GLFW/glfw3.h"
#include "glm/glm.hpp"
#include "glm/gtc/type_ptr.hpp"
#include <glm/gtx/string_cast.hpp>
#include "Camera.h"

#include <iostream>
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

	if (wDown) { camera.position += deltaTime * camera.GetForward(); }
	if (sDown) { camera.position -= deltaTime * camera.GetForward(); }
	if (aDown) { camera.position -= deltaTime * camera.GetRight(); }
	if (dDown) { camera.position += deltaTime * camera.GetRight(); }
	if (qDown) { camera.position += deltaTime * camera.GetUp(); }
	if (eDown) { camera.position -= deltaTime * camera.GetUp(); }
}

Camera camera(glm::vec3(0,0,-4), glm::vec3(0), 60.0f, 16/9);

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

	float positions[] = {
		-0.5f, -0.5f, 0.0f,
		0.5f, -0.5f, 0.0f,
		0.5f, 0.5f, 0.0f,
		-0.5f, 0.5f, 0.0f,

    };

	unsigned int indices[] = {
		0, 1, 2,
		2, 3, 0
	};

    unsigned int buffer;
    glGenBuffers(1, &buffer);
    // This is whats being drawn since its bound
	glBindBuffer(GL_ARRAY_BUFFER, buffer);
	glBufferData(GL_ARRAY_BUFFER, 6 * 3 * sizeof(float), positions, GL_STATIC_DRAW);

	glEnableVertexAttribArray(0);
	glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, sizeof(float) * 3, 0);

	// index buffer obejct
	unsigned int ibo;
	glGenBuffers(1, &ibo);
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, ibo);
	glBufferData(GL_ELEMENT_ARRAY_BUFFER, 6 * sizeof(unsigned int), indices, GL_STATIC_DRAW);

	ShaderProgramSource source = ParseShader("res/shaders/Basic.shader");
	
	unsigned int shader = CreateShader(source.VertexSource, source.FragmentSource);
	glUseProgram(shader);

	glUniform4f(glGetUniformLocation(shader, "u_Color"), 0.2f, 0.3f, 0.8f, 1.0f);
	float r = 0.0f;
	float incrememnt = 0.05f;
	
	float previousTime = glfwGetTime();
	float currentTime = glfwGetTime();

    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(window))
    {
		glfwPollEvents();
		currentTime = glfwGetTime();
		HandleInput(window, camera, currentTime - previousTime);
		glm::mat4 viewMatrix = camera.GetViewMatrix();
		glm::mat4 projectionMatrix = camera.GetProjectionMatrix();
		glm::mat4 viewProjectionMatrix = projectionMatrix * viewMatrix;

		// glClearColor(1, 0, 0, 1);

        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

		glUniform4f(glGetUniformLocation(shader, "u_Color"), r, 0.3f, 0.8f, 1.0f);
		glUniformMatrix4fv(glGetUniformLocation(shader, "u_ViewProjectionMatrix"), 1, GL_FALSE, glm::value_ptr(viewProjectionMatrix));
		
		glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, nullptr);
		if (r > 1.0f)
			incrememnt = -0.05f;
		else if (r < 0.0f)
			incrememnt = 0.05f;
		r += incrememnt;
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