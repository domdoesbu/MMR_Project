#pragma once
#define GLM_ENABLE_EXPERIMENTAL
#include "glm/glm.hpp"
#include <glm/gtx/transform.hpp>

class Camera
{
public:
	Camera(const glm::vec3& position, const glm::vec3& rotation, float verticalFov, float aspectRatio):
		position{ position }, rotation{ rotation }, verticalFov{ verticalFov }, aspectRatio{ aspectRatio }, firstPerson{ false } {
	}

	glm::vec3 position;
	glm::vec3 rotation;
	float verticalFov;
	float aspectRatio;
	bool firstPerson;

	glm::mat4 GetTransformMatrix();
	glm::mat4 GetViewMatrix();
	glm::mat4 GetProjectionMatrix();

	glm::vec3 GetUp() { return up; };
	glm::vec3 GetBack() { return back; };
	glm::vec3 GetRight() { return right; };
	glm::vec3 GetForward() { return forward; };

private:
	glm::vec3 up;
	glm::vec3 back;
	glm::vec3 right;
	glm::vec3 forward;

};