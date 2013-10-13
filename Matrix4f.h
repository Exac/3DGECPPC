#pragma once
#include "Vector3f.h"
#include <vector>

using namespace std;
class Vector3f;

class Matrix4f
{
private:
	float m[4][4];
public:
	Matrix4f();
	Matrix4f initIdentity();
	float toRadians(float angle);
	Matrix4f initTranslation(float, float, float);
	Matrix4f initRotation(float, float, float);
	Matrix4f initProjection(float fox, float width, float height, float zNear, float zFar);
	Matrix4f initCamera(Vector3f forward, Vector3f up);
	Matrix4f mul(Matrix4f);
	vector<float vector<float> > getM();
};