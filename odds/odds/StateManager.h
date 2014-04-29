#pragma once
#include "MenuState.h"
#include "PlayingState.h"
#include "CreatingState.h"

class StateManager
{
public:
	StateManager(int nworldWidth, int nworldHeight, int windowWidth, int windowHeight);
	~StateManager(void);

	void changeState(const int newState);
	int currentState();
	void *currentStateInstance();

	int worldWidth;
	int worldHeight;
	int WIDTH;
	int HEIGHT;

	MenuState menuState;
	PlayingState playingState;
	CreatingState creatingState;

private:
	int state;
	int stateStack[50];
	int stackSize;
	void rotateAround();
};