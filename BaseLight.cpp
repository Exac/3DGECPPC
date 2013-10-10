#include "Vector3f.h"
#include "BaseLight.h"

BaseLight::BaseLight(Vector3f color_, float intensity_)
{
	color = color_;
	intensity = intensity_;
}
Vector3f BaseLight::getColor()
{
	return color;
}
void BaseLight::setColor(Vector3f color_)
{
	color = color_;
}
float BaseLight::getIntensity()
{
	return intensity;
}
void BaseLight::setIntensity(float intensity_)
{
	intensity = intensity_;
}