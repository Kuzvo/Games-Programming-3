#pragma once

#include "Mesh.h"
#include "transform.h"
#include "Shader.h"




class GameObject
{

public:
	GameObject();
	void transformPositions(glm::vec3 pos, glm::vec3 rot, glm::vec3 scale);
	void update(Mesh* mesh);
	void draw(Mesh* mesh);
	void setActive(bool set);

	bool getActive() { return active; }
	glm::mat4 getModel() { return tObject.GetModel(); }
	Transform getTM() { return tObject; }

	glm::vec3 pos;
	glm::vec3 rot;
	glm::vec3 scale;
	glm::vec3 forward;
	glm::vec3 up;

	glm::vec3 GetPos() { return pos; } //getters
	glm::vec3 GetRot() { return rot; }
	glm::vec3 GetScale() { return scale; }

	void SetPos(glm::vec3& pos) { this->pos = pos; } // setters
	void SetRot(glm::vec3& rot) { this->rot = rot; }
	void SetScale(glm::vec3& scale) { this->scale = scale; }

private:
	Transform tObject;
	Camera cameraIn;
	Shader shaderIn;
	
	bool active;
	float counter = 0.0f;

	float deltaTime;
};


