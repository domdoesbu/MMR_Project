#version 330 core


layout(location = 0) in vec3 position;
layout(location = 1) in vec3 normal;

uniform mat4 model;
uniform mat4 view;
uniform mat4 projection;

out vec3 FragPos;
out vec3 BarycentricCoord;
out vec3 Normal;

void main()
{
	gl_Position = projection * view * model * vec4(position, 1.0);
	FragPos = vec3(model * vec4(position, 1.0));

	// int vertexID = gl_VertexID;
	// int vertexNumber = vertexID % 3;

	// BarycentricCoord = vec3(0,0,0);
	// BarycentricCoord[vertexNumber] = 1.0f;

	// if (vertexNumber == 0)
	// {
	// 	BarycentricCoord = vec3(1,0,0);
	// }
	// else if (vertexNumber == 1)
	// {
	// 	BarycentricCoord = vec3(0,1,0);
	// }
	// else
	// {
	// 	BarycentricCoord = vec3(0,0,1);
	// }

	Normal = normal;
};