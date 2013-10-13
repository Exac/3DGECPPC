#include "Vector2f.h"

#define _USE_MATH_DEFINES	//toRadians()

#include <math.h>			//toRadians(), rotate()
#include <sstream>			//toString()

Vector2f::Vector2f()
{
	x = y = 0;
}
Vector2f::Vector2f(float x_, float y_)
{
	x = x_;
	y = y_;
}
float Vector2f::toRadians(float degrees_)
{
	double radians = (degrees_ / 360) * (2.0 * M_PI);
	return radians;
}
float Vector2f::length()
{
	return (float)sqrtf(x*x+y*y);
}
float Vector2f::dot(Vector2f r)
{
	return x * r.getX() + y * r.getY();
}
Vector2f Vector2f::normalized()
{
	float length = this->length();

	return Vector2f(x / length, y / length);
}
Vector2f Vector2f::rotate(float angle)
{
	double rad = this->toRadians(angle);
	double cos = cosf(rad);
	double sin = sinf(rad);

	return Vector2f( (float)(x*cos-y*sin), (float)(x*sin+y*cos) );
}
Vector2f Vector2f::add(Vector2f)
{

}
Vector2f Vector2f::add(float)
{

}
Vector2f Vector2f::sub(Vector2f)
{

}
Vector2f Vector2f::sub(float)
{

}
Vector2f Vector2f::mul(Vector2f)
{

}
Vector2f Vector2f::mul(float)
{

}
Vector2f Vector2f::div(Vector2f)
{

}
Vector2f Vector2f::div(float)
{

}
Vector2f Vector2f::abs()
{

}
string Vector2f::toString()
{

}
float Vector2f::getX()
{
	return x;
}
void Vector2f::setX(float x_)
{
	x = x_;
}
float Vector2f::getY()
{
	return y;
}
void Vector2f::setY(float y_)
{
	y = y_;
}