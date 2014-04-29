#include "StateManager.h"
#include <iostream>

//0 = main menu
//1 = playing
//2 = creating

StateManager::StateManager(int nworldWidth, int nworldHeight)
{
	state = -1;
	worldWidth = nworldWidth;
	worldHeight = nworldHeight;
	stackSize = sizeof(stateStack) / sizeof(int);
	for (int i = 0; i<stackSize; i++)
		stateStack[i] = -1;
}
StateManager::~StateManager(void)
{
}
int StateManager::getState(){
	return state;
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
		std::cout << "ending creating state\n";
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
		creatingState.deInit();
		break;
	}

	state = newState;

	switch (state){
	case 0:
		std::cout << "starting main menu state\n";
		menuState.init(worldWidth, worldHeight, "Achafsex.ttf", "arial.ttf");
		break;
	case 1:
		std::cout << "starting playing state\n";
		playingState.init("arial.ttf");
		break;
	case 2:
		std::cout << "starting creating state\n";
		creatingState.init("arial.ttf");
		break;
	case 99:
		break;
	}

	//std::cout << "\nHey there, here is stateStack\n";
	//for(int i=0; i<stackSize;i++)
	//	std::cout << stateStack[i] << ", "; 
}
