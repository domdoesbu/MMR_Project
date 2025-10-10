#include "Shader.h"

Shader::Shader(const char* vertexPath, const char* fragmentPath) {
    std::string vCode, fCode;
    std::ifstream vShaderFile(vertexPath), fShaderFile(fragmentPath);

    if (!vShaderFile.is_open() || !fShaderFile.is_open()) {
        std::cerr << "Failed to open shader files!" << std::endl;
        return;
    }

    std::stringstream vStream, fStream;
    vStream << vShaderFile.rdbuf();
    fStream << fShaderFile.rdbuf();

    vCode = vStream.str();
    fCode = fStream.str();

    const char* vShaderCode = vCode.c_str();
    const char* fShaderCode = fCode.c_str();

    // Compile vertex shader
    GLuint vertex = glCreateShader(GL_VERTEX_SHADER);
    glShaderSource(vertex, 1, &vShaderCode, nullptr);
    glCompileShader(vertex);

    int success;
    char infoLog[512];
    glGetShaderiv(vertex, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(vertex, 512, nullptr, infoLog);
        std::cerr << "ERROR: Vertex shader compilation failed:\n" << infoLog << std::endl;
    }

    // Compile fragment shader
    GLuint fragment = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragment, 1, &fShaderCode, nullptr);
    glCompileShader(fragment);

    glGetShaderiv(fragment, GL_COMPILE_STATUS, &success);
    if (!success) {
        glGetShaderInfoLog(fragment, 512, nullptr, infoLog);
        std::cerr << "ERROR: Fragment shader compilation failed:\n" << infoLog << std::endl;
    }

    // Link program
    ID = glCreateProgram();
    glAttachShader(ID, vertex);
    glAttachShader(ID, fragment);
    glLinkProgram(ID);

    glGetProgramiv(ID, GL_LINK_STATUS, &success);
    if (!success) {
        glGetProgramInfoLog(ID, 512, nullptr, infoLog);
        std::cerr << "ERROR: Shader program linking failed:\n" << infoLog << std::endl;
    }

    // Clean up shaders (they are now linked into the program)
    glDeleteShader(vertex);
        glDeleteShader(fragment);
   }


void Shader::use() const {
    glUseProgram(ID);
}

void Shader::setMat4(const std::string& name, const glm::mat4& mat) const {
    glUniformMatrix4fv(glGetUniformLocation(ID, name.c_str()), 1, GL_FALSE, &mat[0][0]);
}

void Shader::setVec3(const std::string& name, const glm::vec3& vec) const {
    glUniform3f(glGetUniformLocation(ID, name.c_str()), vec.x, vec.y, vec.z);
}

void Shader::setFloat(const std::string& name, float value) const {
    glUniform1f(glGetUniformLocation(ID, name.c_str()), value);
}