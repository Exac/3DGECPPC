class Attenuation
{
private:
	float Attenuation::constant;
	float Attenuation::linear;
	float Attenuation::exponent;

public:
	Attenuation(float, float, float);
	float getConstant();
	void setConstant(float);
	float getLinear();
	void setLinear(float);
	float getExponent();
	void setExponent(float);
};