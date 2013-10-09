using namespace std;

class Vector3f
{
private:
	float x;
	float y;
	float z;
public:
	Vector3f(float, float, float);
	float toRadians(float);
	float length();
	float dot(Vector3f);
	Vector3f cross(Vector3f);
	Vector3f normalized();
	Vector3f rotate(float, Vector3f);
	Vector3f add(Vector3f r);
	Vector3f add(float r);
	Vector3f sub(Vector3f r);
	Vector3f sub(float r);
	Vector3f mul(Vector3f r);
	Vector3f mul(float r);
	Vector3f div(Vector3f r);
	Vector3f div(float r);
	Vector3f abs();
	string toString();
	float getX();
	void setX(float x_);
	float getY();
	void setY(float y_);
	float getZ();
	void setZ(float z_);
};