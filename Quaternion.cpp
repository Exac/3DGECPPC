#include "Vector3f.h"
#include "Quaternion.h"

#include <math.h>			//length()

Quaternion::Quaternion(float x_, float y_, float z_, float w_)
{
	x = x_;
	y = y_;
	z = z_;
	w = w_;
}
float Quaternion::length()
{
	return (float)sqrt(x * x + y * y + z * z + w * w);
}
Quaternion Quaternion::normalized()
{
	float length = this->length();
}
Quaternion Quaternion::conjugate()
{
	Quaternion *conjugated = new Quaternion(-x, -y, -z, w);
	return *conjugated;
}
Quaternion Quaternion::mul(Quaternion r)
{
	float w_ = w * r.getW() - x * r.getX() - y * r.getY() - z * r.getZ();
	float x_ = x * r.getW() + w * r.getX() + y * r.getZ() - z * r.getY();
	float y_ = y * r.getW() + w * r.getY() + z * r.getX() - x * r.getZ();
	float z_ = z * r.getW() + w * r.getZ() + x * r.getY() - y * r.getX();

	Quaternion *product =  new Quaternion(x_, y_, z_, w_);
	return *product;
}
Quaternion Quaternion::mul(Vector3f r)
{
	float w_ = -x * r.getX() - y * r.getY() - z * r.getZ();
	float x_ =  w * r.getX() + y * r.getZ() - z * r.getY();
	float y_ =  w * r.getY() + z * r.getX() - x * r.getZ();
	float z_ =  w * r.getZ() + x * r.getY() - y * r.getX();

	Quaternion *product =  new Quaternion(x_, y_, z_, w_);
	return *product;
}
float Quaternion::getX()
{
	return x;
}
void Quaternion::setX(float x_)
{
	x = x_;
}
float Quaternion::getY()
{
	return y;
}
void Quaternion::setY(float y_)
{
	y = y_;
}
float Quaternion::getZ()
{
	return z;
}
void Quaternion::setZ(float z_)
{
	z = z_;
}
float Quaternion::getW()
{
	return w;
}
void Quaternion::setW(float w_)
{
	w = w_;
}