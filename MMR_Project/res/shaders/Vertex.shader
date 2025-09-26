#version 330 core

layout(location = 0) in vec3 position;
layout(location = 1) in vec3 normal;

uniform vec3 lightPos;
uniform vec3 lightColor;
uniform vec3 objectColor;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;


out vec3 FragPos;
out vec3 vertexColor; 
out vec3 Normal;

void main()
{
	// Transform vertex position to world space
    vec3 FragPos = vec3(model * vec4(position, 1.0));
    gl_Position = projection * view * model * vec4(position, 1.0);

	


    // Transform normal to world space (important if model is scaled/rotated)
    mat3 normalMatrix = transpose(inverse(mat3(model)));
    vec3 norm = normalize(normalMatrix * normal);

    // === Per-vertex lighting calculation ===
    float ambientStrength = 0.5;
    vec3 ambient = ambientStrength * lightColor;

    vec3 lightDir = normalize(lightPos - FragPos);
    float diff = max(dot(norm, lightDir), 0.0);
    vec3 diffuse = diff * lightColor;

    // Final vertex color (ambient + diffuse)
    vertexColor = clamp((ambient + diffuse) * objectColor, 0.0, 1.0);
};