#pragma once
#include <allegro5\allegro.h>
#include <allegro5\allegro_font.h>
#include "KeyEnumerations.h"

class MenuState
{
public:
	MenuState(void);
	~MenuState(void);

	void init(const int w, const int h, const char *charmFont, const char *arialFont);
	void deInit();

	int process(const bool keysDown[], const bool keysTap[], bool &redraw, bool &done);
	void draw(ALLEGRO_DISPLAY *display);

private:
	int menuSelection;
	int menuSelect;
	int width, height;
	float menuSceneAlpha;
	bool menuInitialHold;
	ALLEGRO_BITMAP *buf;
	ALLEGRO_FONT *charmFont96;
	ALLEGRO_FONT *charmFont66;
	ALLEGRO_FONT *arialFont18;
};

