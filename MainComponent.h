#include <iostream>
#include <string>
#include <windows.h>

#include "Attenuation.h"
#include "BaseLight.h"
#include "Vector3f.h"

#include "Game.h"

using namespace std;

class MainComponent
{
private:
	bool isRunning;
	Game game;

	void run();
	void render();
	void cleanUp();
public:
	static const int MainComponent::WIDTH;
	static const int MainComponent::HEIGHT;
	static const string MainComponent::TITLE;
	static const double MainComponent::FRAME_CAP;

	MainComponent();
	void start();
	void stop();
};
