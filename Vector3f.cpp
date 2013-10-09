#include "Vector3f.h"
#include <math.h>

Vector3f::Vector3f(float x_, float y_, float z_)
{
	x = x_;
	y = y_;
	z = z_;
}
float Vector3f::length()
{
	return (float)sqrtf(x * x + y * y + z * z);
}
float Vector3f::dot(Vector3f r_)
{
	return x * r_.getX() + y * r_.getY() + z * r_.getZ();
}
Vector3f Vector3f::cross(Vector3f r)
{
	float x_ = y * r.getZ() - z * r.getY();
	float y_ = z * r.getX() - x * r.getZ();
	float z_ = x * r.getY() - y * r.getX();

	Vector3f *crossed = new Vector3f(x_, y_, z_);
	return *crossed;
}
Vector3f Vector3f::normalized()
{
	float length = this->length();

	Vector3f *normalized = new Vector3f(x / length, y / length, z / length);
	return *normalized;
}
Vector3f Vector3f::rotate(float, Vector3f)
{

}
Vector3f Vector3f::add(Vector3f r)
{

}
Vector3f Vector3f::add(float r)
{

}
Vector3f Vector3f::sub(Vector3f r)
{

}
Vector3f Vector3f::sub(float r)
{

}
Vector3f Vector3f::mul(Vector3f r)
{

}
Vector3f Vector3f::mul(float r)
{

}
Vector3f Vector3f::div(Vector3f r)
{

}
Vector3f Vector3f::div(float r)
{

}
Vector3f Vector3f::abs()
{

}
string Vector3f::toString()
{

}
float Vector3f::getX()
{

}
void Vector3f::setX(float x_)
{

}
float Vector3f::getY()
{

}
void Vector3f::setY(float y_)
{

}
float Vector3f::getZ()
{

}
void Vector3f::setZ(float z_)
{

}