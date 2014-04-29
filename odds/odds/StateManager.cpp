#include "StateManager.h"
#include <iostream>

//0 = main menu
//1 = playing
//2 = pause
//3 = keybinding


StateManager::StateManager(int nworldWidth, int nworldHeight, int windowWidth, int windowHeight)
{
	state = -1;
	worldWidth = nworldWidth;
	worldHeight = nworldHeight;
	WIDTH = windowWidth;
	HEIGHT = windowHeight;
	stackSize = sizeof(stateStack) / sizeof(int);
	for (int i = 0; i<stackSize; i++)
		stateStack[i] = -1;
}
StateManager::~StateManager(void)
{
}

void StateManager::rotateAround(){
	for (int i = 0; i<stackSize - 1; i++){
		stateStack[i] = stateStack[i + 1];
	}
}
void StateManager::changeState(const int newState){
	switch (state){
	case 0:
		std::cout << "ending main menu state\n";
		for (int i = 0; i<stackSize; i++){
			if (stateStack[i] == -1){
				stateStack[i] = 0;
				break;
			}
			else if (stateStack[stackSize - 1] != -1){
				rotateAround();
				stateStack[stackSize - 1] = 0;
				break;
			}
		}
		menuState.deInit();
		break;
	case 1:
		std::cout << "ending playing state\n";
		for (int i = 0; i<stackSize; i++){
			if (stateStack[i] == -1){
				stateStack[i] = 1;
				break;
			}
			else if (stateStack[stackSize - 1] != -1){
				rotateAround();
				stateStack[stackSize - 1] = 1;
				break;
			}
		}
		playingState.deInit();
		break;
	case 2:
		std::cout << "ending pause state\n";
		for (int i = 0; i<stackSize; i++){
			if (stateStack[i] == -1){
				stateStack[i] = 2;
				break;
			}
			else if (stateStack[stackSize - 1] != -1){
				rotateAround();
				stateStack[stackSize - 1] = 2;
				break;
			}
		}
		break;
	case 3:
		std::cout << "ending keybinding menu state\n";
		for (int i = 0; i<stackSize; i++){
			if (stateStack[i] == -1){
				stateStack[i] = 3;
				break;
			}
			else{
				rotateAround();
				stateStack[stackSize - 1] = 3;
				break;
			}
		}
		break;
	}

	state = newState;

	switch (state){
	case 0:
		std::cout << "starting main menu state\n";
		menuState.init(WIDTH, HEIGHT, "achafsex.ttf", "arial.ttf");
		break;
	case 1:
		std::cout << "starting playing state\n";
		playingState.init(WIDTH, HEIGHT, "arial.ttf");
		break;
	case 2:
		std::cout << "starting pause state\n";
		break;
	case 3:
		std::cout << "starting keybinding menu state\n";
		break;
	case 99:
		break;
	}

	//std::cout << "\nHey there, here is stateStack\n";
	//for(int i=0; i<stackSize;i++)
	//	std::cout << stateStack[i] << ", "; 
}
