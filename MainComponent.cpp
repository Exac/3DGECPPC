#include "MainComponent.h"

using namespace std;

//variables
const int MainComponent::WIDTH = 800;
const int MainComponent::HEIGHT = 600;
const string MainComponent::TITLE = "3D Game Engine";
const double MainComponent::FRAME_CAP = 500.0;

MainComponent::MainComponent(){
	initilize();
}
void MainComponent::initilize(){
	
}

int main()
{
	MainComponent game;
	cin.ignore();
	cin.get();
	return 0;
}
