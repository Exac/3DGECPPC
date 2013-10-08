#include "Attenuation.h"

Attenuation::Attenuation(float constant_, float linear_, float exponent_)
{
	constant = constant_;
	linear = linear_;
	exponent = exponent_;
}
float Attenuation::getConstant()
{
	return constant;
}
void Attenuation::setConstant(float constant_)
{
	constant = constant_;
}
float Attenuation::getLinear()
{
	return linear;
}
void Attenuation::setLinear(float linear_)
{
	linear = linear_;
}
float Attenuation::getExponent()
{
	return exponent;
}
void Attenuation::setExponent(float exponent_)
{
	exponent = exponent_;
}