using namespace std;

class BaseLight
{
private:
	Vector3f BaseLight::color;
	float BaseLight::intensity;
public:
	BaseLight(Vector3f, float);
	Vector3f getColor();
	void setColor(Vector3f);
	float getIntensity();
	void setIntensity(float);
};