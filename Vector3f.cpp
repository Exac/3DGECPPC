#include "Vector3f.h"

#define _USE_MATH_DEFINES

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
float Vector3f::toRadians(float degrees_)
{
	double radians = (degrees_ / 360) * (2.0 * M_PI);
	return radians;
}
Vector3f Vector3f::rotate(float angle, Vector3f axis)
{
	float sinHalfAngle = (float)sin(this->toRadians(angle / 2));
	float cosHalfAngle = (float)cos(this->toRadians(angle / 2));

	float rX = axis.getX() * sinHalfAngle;
	float rY = axis.getY() * sinHalfAngle;
	float rZ = axis.getZ() * sinHalfAngle;
	float rW = cosHalfAngle;

	Quaternion rotation = new Quaternion(rX, rY, rZ, rW);
	Quaternion conjugate = rotation.conjugate();

	Quaternion w = rotation.mul(this).mul(conjugate);

	Vector3f *rotated =  new Vector3f(w.getX(), w.getY(), w.getZ());
	return *rotated;
}
Vector3f Vector3f::add(Vector3f r)
{
	Vector3f *added = new Vector3f(x + r.getX(), y + r.getY(), z + r.getZ());
	return *added;
}
Vector3f Vector3f::add(float r)
{
	Vector3f *added = new Vector3f(x + r, y + r, z + r);
	return *added;
}
Vector3f Vector3f::sub(Vector3f r)
{
	Vector3f *subtracted = new Vector3f(x - r.getX(), y - r.getY(), z - r.getZ());
	return *subtracted;
}
Vector3f Vector3f::sub(float r)
{
	Vector3f *subtracted = new Vector3f(x - r, y - r, z - r);
	return *subtracted;
}
Vector3f Vector3f::mul(Vector3f r)
{
	Vector3f *subtracted = new Vector3f(x * r.getX(), y * r.getY(), z * r.getZ());
	return *subtracted;
}
Vector3f Vector3f::mul(float r)
{
	Vector3f *subtracted = new Vector3f(x * r, y * r, z * r);
	return *subtracted;
}
Vector3f Vector3f::div(Vector3f r)
{
	Vector3f *subtracted = new Vector3f(x / r.getX(), y / r.getY(), z / r.getZ());
	return *subtracted;
}
Vector3f Vector3f::div(float r)
{
	Vector3f *subtracted = new Vector3f(x / r, y / r, z / r);
	return *subtracted;
}
Vector3f Vector3f::abs()
{
	Vector3f *absoluteValue = new Vector3f(fabs(x),fabs(y),fabs(z));
	return *absoluteValue;
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