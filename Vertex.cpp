#include "Vertex.h"


Vertex::Vertex(Vector3f pos_, Vector2f texCoord_, Vector3f normal_)
{
	init(pos_, texCoord_, normal_);
}

Vertex::Vertex(Vector3f pos_, Vector2f texCoord_)
{
	this->init(pos_, texCoord_);
}

Vertex::Vertex(Vector3f pos_)
{
	this->init(pos_);
}

void Vertex::init(Vector3f pos_, Vector2f texCoord_ =  Vector2f(), Vector3f normal_ = Vector3f() )
{
	pos = pos_;
	texCoord = texCoord_;
	normal = normal_;
}

Vector3f Vertex::getPos()
{
	return pos;
}

void Vertex::setPos(Vector3f pos_)
{
	pos = pos_;
}

Vector2f Vertex::getTexCoord()
{
	return texCoord;
}

void Vertex::setTexCoord(Vector2f texCoord_)
{
	texCoord = texCoord_;
}

Vector3f Vertex::getNormal()
{
	return normal;
}

void Vertex::setNormal(Vector3f normal_)
{
	normal = normal_;
}


