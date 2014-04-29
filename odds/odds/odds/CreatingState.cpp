#include "CreatingState.h"


CreatingState::CreatingState()
{
}


CreatingState::~CreatingState()
{
}

void CreatingState::init(const char *arial){
	arialFont12 = al_load_font(arial, 12, 0);
	arialFont18 = al_load_font(arial, 18, 0);
}

void CreatingState::deInit(){
	al_destroy_font(arialFont12);
	al_destroy_font(arialFont18);
}

int CreatingState::process(ALLEGRO_TIMER *timer, const bool keysDown[], const bool keysTap[], bool &redraw, bool &done, const int worldWidth, const int worldHeight){
	return 0;
}
void CreatingState::draw(ALLEGRO_DISPLAY *display){
	al_set_target_backbuffer(display);
	al_clear_to_color(al_map_rgb(50, 142, 203));
}