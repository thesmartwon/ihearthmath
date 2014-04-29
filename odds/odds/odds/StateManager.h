#pragma once
#include "MenuState.h"
#include "PlayingState.h"
#include "CreatingState.h"

class StateManager
{
private:
	int state;
	int stateStack[50];
	int stackSize;
	void rotateAround();
public:
	StateManager(int nworldWidth, int nworldHeight);
	~StateManager(void);
	void changeState(const int newState);
	int getState();
	void *getStateInstance();
	int worldWidth;
	int worldHeight;
	MenuState menuState;
	PlayingState playingState;
	CreatingState creatingState;
};