#include "Vector2f.h"

Vector2f::Vector2f()
{
	x = y = 0;
}
Vector2f::Vector2f(float x_, float y_)
{
	x = x_;
	y = y_;
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