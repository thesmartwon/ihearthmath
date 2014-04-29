#pragma once
#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>

class CreatingState
{
public:
	CreatingState();
	~CreatingState();

	void init(const char *arial);
	void deInit();
	int process(ALLEGRO_TIMER *timer, const bool keysDown[], const bool keysTap[], bool &redraw, bool &done, const int worldWidth, const int worldHeight);
	void draw(ALLEGRO_DISPLAY *display);

private:
	ALLEGRO_FONT *arialFont12;
	ALLEGRO_FONT *arialFont18;
};

