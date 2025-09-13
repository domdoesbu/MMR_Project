#shader vertex
#version 330 core


layout(location = 0) in vec3 position;
layout(location = 1) in vec3 normal;

uniform mat4 u_ViewProjectionMatrix;
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
	
	int vertexID = gl_VertexID;
	int vertexNumber = vertexID % 3;

	BarycentricCoord = vec3(0,0,0);
	BarycentricCoord[vertexNumber] = 1.0f;

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


#shader fragment
#version 330 core
	
layout(location = 0) out vec4 FragColor;

uniform vec3 lightPos[1];
uniform vec3 lightColor;
uniform vec3 objectColor;
uniform int toggleWireframe;

in vec3 FragPos;
in vec3 BarycentricCoord;
in vec3 Normal;

void main()
{
	float ambientStrength = 1.0;
    vec3 ambient = ambientStrength * lightColor;
	
	vec3 norm = normalize(Normal);
	vec3 lightDir = normalize(lightPos[0] - FragPos);

	float diff = max(dot(norm, lightDir), 0.0);
	vec3 diffuse = diff * lightColor;
	vec3 result = (ambient + diffuse) * objectColor;
	
	FragColor = vec4(result, 1.0);
	
	if(toggleWireframe == 0)
		return;

	if(BarycentricCoord.x < 0.05f || BarycentricCoord.y < 0.05f || BarycentricCoord.z < 0.05f)
	{
		FragColor = vec4(0.5, 0.5, 0.5, 1.0f);
	}
	
};
