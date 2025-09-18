#version 330 core
	
layout(location = 0) out vec4 FragColor;

uniform int toggleWireframe;

in vec3 FragPos;
in vec3 vertexColor;
in vec3 Normal;

void main()
{
	
	// Bilinear interpolation of each vertex color is automatically done by the GPU
	FragColor = vec4(vertexColor, 1.0);

	// if(BarycentricCoord.x < 0.05f || BarycentricCoord.y < 0.05f || BarycentricCoord.z < 0.05f)
	// {
	// 	FragColor = vec4(0.5, 0.5, 0.5, 1.0f);
	// }
	
};