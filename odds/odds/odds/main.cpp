#include <allegro5/allegro.h>
#include <allegro5/allegro_primitives.h>
#include <allegro5/allegro_font.h>
#include <allegro5/allegro_ttf.h>
#include <stdio.h>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "StateManager.h"
#include "KeyInput.h"

#ifdef WINDOWS
#include <direct.h>
#define GetCurrentDir _getcwd
#else
#define GetCurrentDir _getcwd
#endif



int main(void){
	char cCurrentPath[FILENAME_MAX];
	if (!GetCurrentDir(cCurrentPath, sizeof(cCurrentPath)))
	{
		return errno;
	}
	cCurrentPath[sizeof(cCurrentPath)-1] = '\0'; // not really required 

	printf("The current working directory is %s", cCurrentPath);
	bool done = false, inputted = false, redraw = true, canThink = true;
	ALLEGRO_DISPLAY *display = NULL;
	ALLEGRO_EVENT_QUEUE *event_queue = NULL;
	ALLEGRO_TIMER *timer = NULL;
	if (!al_init())
		return -1;
	al_set_new_display_flags(ALLEGRO_WINDOWED);
	al_set_new_display_flags(ALLEGRO_RESIZABLE);
	display = al_create_display(1250, 580);
	StateManager stateManager(1250, 580);
	stateManager.changeState(0);
	KeyInput keyInput;
	if (!display)
		return -1;
	al_set_window_title(display, "ihearthmath");
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
			if (canThink){
				switch (stateManager.getState()){
				case 0:
					break;
				case 1:
					break;
				case 2:
					break;
				}
				keyInput.resetTapped();
			}
									break;
		case (ALLEGRO_EVENT_KEY_DOWN) :
			keyInput.handleKeysDown(ev.keyboard.keycode);
			break;
		case(ALLEGRO_KEY_UP) :
			keyInput.handleKeysUp(ev.keyboard.keycode);
			break;
		case (ALLEGRO_EVENT_DISPLAY_SWITCH_OUT) ://alt tab
			keyInput.resetTapped();
			keyInput.resetDowned();
			canThink = false;
			redraw = false;
			break;
		case (ALLEGRO_EVENT_DISPLAY_SWITCH_IN) ://alt tab
			keyInput.resetDowned();
			keyInput.resetTapped();
			canThink = false;
			redraw = false;
			break;
		}
		if (redraw && al_is_event_queue_empty(event_queue) && !done){//on the perfect comp every 1/60 of a sec
			switch (stateManager.getState()){
			case 0://main menu
				redraw = false;
				stateManager.menuState.draw(display);
				break;
			case 1://computing
				redraw = false;
				stateManager.playingState.draw(display);
				break;
			case 2://decklist menu
				redraw = false;
				stateManager.creatingState.draw(display);
				break;
			}
			al_flip_display();
		}
	}
	return 0;
}
