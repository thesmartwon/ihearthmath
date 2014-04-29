#include "Card.h"

using namespace std;
std::fstream& GotoLine(std::fstream& file, unsigned int num){
	std::string nothing;
	file.seekg(std::ios::beg);
	for (int i = 0; i < num - 1; ++i){
		std::getline(cin, nothing);
	}
	return file;
}

Card::Card(int i)
{
	std::string temp;
	std::fstream myfile;
	id = i;
	cost = -1;
	race = -1;
	health = -1;
	attack = -1;
	type = -1;
	set = -1;
	name = "";
	text = "";
	img = nullptr;
	
	myfile.open("cards2.txt");
	GotoLine(myfile, 10 * id);
	std::getline(std::cin, name);
	std::getline(std::cin, name);
	std::getline(std::cin, temp);
	if (temp == "Neutral")
		race = 0;
	else if (temp == "Warrior")
		race = 1;
	else if (temp == "Shaman")
		race = 2;
	else if (temp == "Rogue")
		race = 3;
	else if (temp == "Paladin")
		race = 4;
	else if (temp == "Hunter")
		race = 5;
	else if (temp == "Druid")
		race = 6;
	else if (temp == "Warlock")
		race = 7;
	else if (temp == "Mage")
		race = 8;
	else if (temp == "Priest")
		race = 9;
	std::getline(std::cin, temp);
	std::stringstream convert(temp);
	if (!(convert >> cost))
		cost = -1;
	std::getline(std::cin, temp);
	std::stringstream convert2(temp);
	if (!(convert >> attack))
		attack = -1;
	std::getline(std::cin, temp);
	std::stringstream convert3(temp);
	if (!(convert >> health))
		health = -1;
	std::getline(std::cin, temp);
	if (temp == "Basic")
		set = 0;
	else if (temp == "Expert")
		set = 1;
	std::getline(std::cin, temp);
	if (temp.substr(0, 6) == "Minion")
		type = 0;
	else if (temp == "Spell")
		type = 1;
	else if (temp.substr(0, 6) == "Weapon")
		type = 2;

}


Card::~Card()
{
}

void Card::setID(int i){
	id = i;
}
void Card::setCost(int c){
	cost = c;
}
void Card::setType(int t){
	type = t;
}
void Card::setHealth(int h){
	health = h;
}
void Card::setAttack(int a){
	attack = a;
}
void Card::setRace(int r){
	race = r;
}
void Card::addEffect(int e){
	effects.push_back(e);
}
void Card::setSet(int s){
	set = s;
}
void Card::setName(std::string n){
	name = n;
}
void Card::setText(std::string t){
	text = t;
}
void Card::setImage(ALLEGRO_BITMAP *b){
	img = b;
}
void Card::draw(int x, int y, int scale){
	if (img){
		al_draw_scaled_bitmap(img, 0, 0, al_get_bitmap_width(img), al_get_bitmap_height(img), 0, 0, scale*al_get_bitmap_width(img), scale*al_get_bitmap_height(img), 0);
	}
}



int Card::getID(){
	return id;
}
int Card::getRace(){
	return race;
}
int Card::getCost(){
	return cost;
}
int Card::getHealth(){
	return health;
}
int Card::getAttack(){
	return attack;
}
int Card::getType(){
	return type;
}
int Card::getSet(){
	return set;
}
std::vector<int> Card::getEffects(){
	return effects;
}

std::string Card::getName(){
	return name;
}
std::string Card::getText(){
	return text;
}
ALLEGRO_BITMAP* Card::getImage(){
	return img;
}