#pragma once

#include <glm/glm.hpp>

#include <vector>
#include <memory>

struct MaterialInfo
{
	glm::vec3 color;
	float roughness;
	float metallic;
};

class Material
{
public :


	Material(MaterialInfo matInfo):
		Albedo(matInfo.color),roughness(matInfo.roughness),metallic(matInfo.metallic){}
	glm::vec3 Albedo;
	float roughness;
	float metallic;
private:

};