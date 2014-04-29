#pragma once
#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <fstream>
#include <limits>
#include "allegro5/allegro_primitives.h"
#include "allegro5/allegro_image.h"

class Card
{
private:
	ALLEGRO_BITMAP *img;
	int id;
	int race;
	int cost;
	int health;
	int attack;
	int type;
	int set;
	std::vector<int> effects;
	std::string name;
	std::string text;
public:
	Card(int i);
	~Card();
	void setID(int i);
	void setRace(int r);
	void setCost(int c);
	void setHealth(int h);
	void setAttack(int a);
	void setType(int t);
	void addEffect(int e);
	void setSet(int s);
	void setName(std::string n);
	void setText(std::string t);
	void setImage(ALLEGRO_BITMAP *b);
	

	int getID();
	int getRace();
	int getCost();
	int getHealth();
	int getAttack();
	int getType();
	int getSet();
	std::vector<int> getEffects();
	std::string getName();
	std::string getText();
	ALLEGRO_BITMAP* getImage();

	void draw(int x, int y, int scale);
};

