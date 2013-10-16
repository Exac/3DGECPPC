#pragma once

using namespace std;

class Time
{
private:
	long SECOND;
	double delta;
public:
	long getTime();
	long getDelta();
	void setDelta(double delta);
};