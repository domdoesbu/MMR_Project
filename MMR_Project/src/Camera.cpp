#include "Camera.h"
#include <iostream>
glm::mat4 Camera::GetTransformMatrix()
{
	glm::mat4 translationMatrix = glm::translate(glm::mat4(1), position);
	glm::mat4 rotationMatrix = glm::rotate(glm::mat4(1), glm::radians(rotation.x), glm::vec3(1, 0, 0));
	rotationMatrix = glm::rotate(rotationMatrix, glm::radians(rotation.y), glm::vec3(0, 1, 0));
	rotationMatrix = glm::rotate(rotationMatrix, glm::radians(rotation.z), glm::vec3(0, 0, 1));

	return translationMatrix * rotationMatrix;
}

glm::mat4 Camera::GetViewMatrix()
{
	if (firstPerson)
	{
		forward = glm::vec3(glm::vec4(position + glm::vec3(0, 0, 1), 1.0f) * GetTransformMatrix());
		
	}
	else
	{
		forward = glm::vec3(0, 0, 0) - position;
	}
	back = glm::normalize(position - forward);
	right = glm::cross(glm::vec3(0, 1, 0), back);
	up = glm::normalize(glm::cross(back, right));
	glm::mat4 viewMatrix = glm::lookAt(position, forward, up);
	return viewMatrix;
}

glm::mat4 Camera::GetProjectionMatrix()
{
	glm::mat4 projectionMatrix = glm::perspective(glm::radians(verticalFov), aspectRatio, 0.1f, 100.0f);
	return projectionMatrix;
}



