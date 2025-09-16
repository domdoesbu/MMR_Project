#pragma once

#ifndef SHADER_H
#define SHADER_H

#include <string>
#include <GL/glew.h> // or <GL/glew.h>
#include <glm/glm.hpp>

class Shader
{
public:
    GLuint ID;

    Shader(const char* vertexPath, const char* fragmentPath);
    void use() const;

    void setMat4(const std::string& name, const glm::mat4& mat) const;
    void setVec3(const std::string& name, const glm::vec3& vec) const;
    void setFloat(const std::string& name, float value) const;
};

#endif

