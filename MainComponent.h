#include <iostream>
#include <string>
#include "Game.cpp"

void run();

class MainComponent
{
private:
	bool isRunning_;
	Game game_;

	void initilize();
public:
	static const int MainComponent::WIDTH;
	static const int MainComponent::HEIGHT;
	static const string MainComponent::TITLE;
	static const double MainComponent::FRAME_CAP;
	MainComponent();
};
