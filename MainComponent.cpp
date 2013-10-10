#pragma once

#include "MainComponent.h"

using namespace std;

//variables                                                   // TO COMMENT: CTRL-K, CTRL-C               TO UN-COMMENT: CTRL-K, CTRL-U
const int MainComponent::WIDTH = 800;
const int MainComponent::HEIGHT = 600;
const string MainComponent::TITLE = "3D Game Engine";
const double MainComponent::FRAME_CAP = 500.0;

MainComponent::MainComponent(){
	/*Window.createWindow(800, 600, "3D Game Engine");
	cout << RenderUtil.getOpenGLVersion() << endl;
	RenderUtil.initGraphics();
	isRunning = false;
	game = new Game();
	game.start();*/
}

void MainComponent::start(){
	/*if(isRunning)
	return;
	run();*/
}

void MainComponent::stop()
{
	/*if(!isRunning)
	return;
	isRunning = false;*/
}

void MainComponent::run()
{
	//isRunning = true;

	//int frames = 0;
	//long frameCounter = 0;

	//const double frameTime = 1.0 / FRAME_CAP;

	//long lastTime = Time.getTime();
	//double unProcessedTime = 0;

	//while(isRunning)
	//{
	//	bool render = false;

	//	long startTime = Time.getTime();
	//	long passedTime = startTime - lastTime;
	//	lastTime = startTime;

	//	unProcessedTime += passedTime / (double)Time.SECOND;
	//	frameCounter += passedTime;
	//	while(unprocessedTime > frameTime)
	//	{
	//		render = true;

	//		unprocessedTime -= frameTime;

	//		if(Window.isCloseRequested())
	//			stop();

	//		Time.setDelta(frameTime);

	//		game.input();
	//		Input.update();

	//		game.update();

	//		if(frameCounter >= Time.SECOND)
	//		{
	//			cout << frames << endl;
	//			frames = 0;
	//			frameCounter = 0;
	//		}
	//	}
	//	if(render)
	//	{
	//		render();
	//		frames++;
	//	}
	//	else
	//	{
	//		try 
	//		{
	//			Sleep(1);//Windows only
	//		} 
	//		catch (const ios::failure &) 
	//		{
	//			cerr << "Failure in MainComponent::Run()" >> endl;
	//		}
	//	}
	//}
	//cleanUp();
}

void MainComponent::render()
{
	/*RenderUtil.clearScreen();
	game.render();
	Window.render();*/
}

void MainComponent::cleanUp()
{
	/*Window.dispose();*/
}

int main()
{
	MainComponent g;
	cin.ignore();
	cin.get();
	return 0;
}
