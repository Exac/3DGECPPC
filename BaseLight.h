#pragma once
#include "Vector3f.h"

using namespace std;

class Vector3f;

class BaseLight
{
private:
	Vector3f color;
	float intensity;
public:
	BaseLight(Vector3f, float);
	Vector3f getColor();
	void setColor(Vector3f);
	float getIntensity();
	void setIntensity(float);
};