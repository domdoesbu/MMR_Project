#version 330 core
	
layout(location = 0) out vec4 FragColor;

uniform vec3 barycenter;
uniform int toggleWireframe;

in vec3 FragPos;
in vec3 vertexColor;
in vec3 Normal;

void main()
{
	
		FragColor = vec4(vertexColor, 1.0);
	
};