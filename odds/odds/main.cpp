#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "StateManager.h"


int main(void){
	bool done = false, inputted = false;
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	if (!al_init())
		return -1;
	al_set_new_display_flags(ALLEGRO_WINDOWED);
	al_set_new_display_flags(ALLEGRO_RESIZABLE);
	display = al_create_display(1250, 580);

	if (!display)
		return -1;
	al_set_window_title(display, "Towers of Hanoi Autosolver");
	al_init_primitives_addon();
	al_init_font_addon();
	al_init_ttf_addon();
	al_install_keyboard();

	event_queue = al_create_event_queue();
	timer = al_create_timer(1.0 / 60);
	al_register_event_source(event_queue, al_get_keyboard_event_source());
	al_register_event_source(event_queue, al_get_timer_event_source(timer));
	al_register_event_source(event_queue, al_get_display_event_source(display));

	//hug him
	al_start_timer(timer);
	while (!done){
		ALLEGRO_EVENT ev;
		al_wait_for_event(event_queue, &ev);
		switch (ev.type){
		case (ALLEGRO_EVENT_DISPLAY_CLOSE) ://x button pressed
			done = true;
			break;
		case (ALLEGRO_EVENT_DISPLAY_RESIZE) :
			al_acknowledge_resize(display);
			break;
		case (ALLEGRO_EVENT_TIMER) ://main logic
			break;
		}
	}
	return 0;
}
