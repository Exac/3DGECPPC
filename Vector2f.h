#pragma once
#include <string>
using namespace std;

class Vector2f
{
private:
	float x;
	float y;
public:
	Vector2f();
	Vector2f(float, float);

	float getX();
	void setX(float);
	float getY();
	void setY(float);
};