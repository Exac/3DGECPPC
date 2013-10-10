#include <string>

using namespace std;
class Vector3f;

class Quaternion
{
private:
	float x;
	float y;
	float z;
	float w;
public:
	Quaternion(float, float, float, float);
	float length();
	Quaternion normalized();
	Quaternion conjugate();
	Quaternion mul(Quaternion);
	Quaternion mul(Vector3f);
	float getX();
	void setX(float);
	float getY();
	void setY(float);
	float getZ();
	void setZ(float);
	float getW();
	void setW(float);
};