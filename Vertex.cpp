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

void Vertex::init(Vector3f* pos_, Vector2f* texCoord_ = new Vector2f, Vector3f* normal_ = new Vector3f)
{
	pos = *pos_;

	texCoord_->setX(0)->setY(0);
	texCoord = *texCoord_;
	normal = *normal_;
}

