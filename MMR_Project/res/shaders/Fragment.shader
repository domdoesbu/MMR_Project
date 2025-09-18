#version 330 core
	
layout(location = 0) out vec4 FragColor;

uniform vec3 lightPos;
uniform vec3 lightColor;
uniform vec3 objectColor;
uniform int toggleWireframe;

in vec3 FragPos;
in vec3 BarycentricCoord;
in vec3 Normal;

void main()
{
	float ambientStrength = 0.1;
	vec3 ambient = ambientStrength * lightColor;
	
	vec3 norm = normalize(Normal);
	vec3 lightDir = normalize(lightPos - FragPos);
	
	float diff = max(dot(norm, lightDir), 0.0);
	vec3 diffuse = diff * lightColor;
	vec3 result = clamp((ambient + diffuse) * objectColor, 0.0, 1.0);
	// vec3 normColor = normalize(Normal) * 0.5 + 0.5;
	FragColor = vec4(1.0, 0.0, 0.0, 1.0);
	
	// if(toggleWireframe == 0)
	// 	return;

	// if(BarycentricCoord.x < 0.05f || BarycentricCoord.y < 0.05f || BarycentricCoord.z < 0.05f)
	// {
	// 	FragColor = vec4(0.5, 0.5, 0.5, 1.0f);
	// }
	
};