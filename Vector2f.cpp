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
float Vector2f::length()
{
	return (float)sqrtf(x*x+y*y);
}
float Vector2f::dot(Vector2f)
{

}
Vector2f Vector2f::normalized()
{

}
Vector2f Vector2f::rotate(float)
{

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