#pragma once

using namespace std;
class Vector2f;
class Vector3f;

class Vertex
{
private:
	int SIZE;
	Vector3f pos;
	Vector2f texCoord;
	Vector3f normal;
public:
	Vertex(Vector3f);
	Vertex(Vector3f, Vector2f);
	Vertex(Vector3f, Vector2f, Vector3f);
	Vector3f getPos();
	void setPos(Vector3f);
	Vector3f getTexCoord();
	void setTexCoord(Vector2f);
	Vector3f getNormal();
	void setNormal(Vector3f);
};