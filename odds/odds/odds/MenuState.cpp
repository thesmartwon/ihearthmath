#include "MenuState.h"

MenuState::MenuState(void)
{
}


MenuState::~MenuState(void)
{
}

void MenuState::init(const int w, const int h, const char *charmFont, const char *arialFont){
	menuSelection = 0;
	menuSelect = 0;
	menuInitialHold = 0;
	menuSceneAlpha = 1.0f;
	width = w;
	height = h;
	charmFont96 = al_load_font(charmFont, 96, 0);
	charmFont66 = al_load_font(charmFont, 66, 0);
	arialFont18 = al_load_font(arialFont, 18, 0);
	buf = al_create_bitmap(width, height);
	if (!charmFont96)
		std::cout << "didn't load assetts";
}
void MenuState::deInit(){
	al_destroy_bitmap(buf);
	al_destroy_font(charmFont96);
	al_destroy_font(charmFont66);
	al_destroy_font(arialFont18);
}

int MenuState::process(const bool keysDown[], const bool keysTap[], bool &redraw, bool &done)
{
	if (keysDown[KEY_DOWN]){
		menuSelect++;
		if (menuSelect>8 && menuSelect != 0 && menuInitialHold){
			menuSelection++;
			menuSelect = 0;
		}
		else if (menuSelect > 50)
			menuInitialHold = true;
	}
	else if (keysDown[KEY_UP]){
		menuSelect++;
		if (menuSelect>8 && menuSelect != 0 && menuInitialHold){
			menuSelection--;
			menuSelect = 0;
		}
		else if (menuSelect > 50)
			menuInitialHold = true;
	}
	else{
		menuSelect = 0;
		menuInitialHold = false;
	}

	if (keysTap[KEY_UP]){
		menuSelect = 0;
		menuSelection--;
	}
	else if (keysTap[KEY_DOWN]){
		menuSelect = 0;
		menuSelection++;
	}

	if (menuSelection < 0)
		menuSelection = 5;
	else if (menuSelection > 5)
		menuSelection = 0;

	if (menuSceneAlpha > 0.0f){
		menuSceneAlpha -= 0.005f;
		if (menuSceneAlpha < 0.0f)
			menuSceneAlpha = 0.0f;
	}
	if (keysTap[KEY_ESCAPE]){
		done = true;
		redraw = false;
	}
	if ((keysTap[KEY_SPACE] || keysTap[KEY_ENTER] || keysTap[KEY_PAD_ENTER]) && menuSelection == 0)
		return 1;
	else if ((keysTap[KEY_SPACE] || keysTap[KEY_ENTER] || keysTap[KEY_PAD_ENTER]) && menuSelection == 3)
		return 3;
	else if ((keysTap[KEY_SPACE] || keysTap[KEY_ENTER] || keysTap[KEY_PAD_ENTER]) && menuSelection == 5)
		done = true;

	redraw = true;
	return -1;
}
void MenuState::draw(ALLEGRO_DISPLAY *display){
	//jim.drawProperties(display2, arialFont18, StateManager.wallManager.collisionWalls);
	if (menuSceneAlpha > 0){
		al_set_target_bitmap(buf);
		al_clear_to_color(al_map_rgba_f(255, 255, 255, menuSceneAlpha));
	}

	al_set_target_backbuffer(display);
	al_clear_to_color(al_map_rgb(255, 255, 255));
	al_draw_text(charmFont96, al_map_rgb(0, 0, 0), 100, 100, 0, "Menu");

	if (menuSelection == 0)
		al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 250, 200, 0, "Play");
	else al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 200, 200, 0, "Play");
	if (menuSelection == 1)
		al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 250, 300, 0, "Options");
	else al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 200, 300, 0, "Options");
	if (menuSelection == 2)
		al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 250, 400, 0, "Display Options");
	else al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 200, 400, 0, "Display Options");
	if (menuSelection == 3)
		al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 250, 500, 0, "Key Bindings");
	else al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 200, 500, 0, "Key Bindings");
	if (menuSelection == 4)
		al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 250, 600, 0, "Help");
	else al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 200, 600, 0, "Help");
	if (menuSelection == 5)
		al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 250, 700, 0, "Exit");
	else al_draw_text(charmFont66, al_map_rgb(0, 0, 0), 200, 700, 0, "Exit");

	if (menuSceneAlpha > 0)
		al_draw_bitmap(buf, 0, 0, 0);

	al_draw_textf(charmFont66, al_map_rgb(0,0,0), 100, 900, 0, "Selection: %i", menuSelection);
}