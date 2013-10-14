#include "Matrix4f.h"

Matrix4f::Matrix4f()
{

}
Matrix4f Matrix4f::initIdentity()
{

}
float Matrix4f::toRadians(float angle)
{

}
Matrix4f Matrix4f::initTranslation(float, float, float)
{

}
Matrix4f Matrix4f::initRotation(float, float, float)
{

}
Matrix4f Matrix4f::initProjection(float fox, float width, float height, float zNear, float zFar)
{

}
Matrix4f Matrix4f::initCamera(Vector3f forward, Vector3f up)
{

}
Matrix4f Matrix4f::mul(Matrix4f)
{

}
float* Matrix4f::getM()
{
	float res[4][4];
	for(int i = 0; i < 4; i++)
	{
		for(int j = 0; j < 4; j++)
		{
			res[i][j] = m[i][j];
		}
	}
	return *res;
}
void Matrix4f::setM(float m_[4][4])
{
	for(int x = 0; x < 4; x++)
	{
		for(int y = 0; y < 4; y++)
		{
			m[x][y] = m_[x][y];
		}
	}
}
void Matrix4f::set(int x, int y, float value)
{
	m[x][y] = value;
}