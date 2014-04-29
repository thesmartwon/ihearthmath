#pragma once
#include <vector>
#include <string>
#include "DeckList.h"

class Deck
{
private:
	int race;
	std::string classPlayed;

	//gameplay
	std::vector<Card> inDeck;
	std::vector<Card> inHand;
	std::vector<Card> inDiscard;
public:
	Deck();
	~Deck();
	void setRace(int c);
	int pushInDeck(int id);
	int pushInHand(int id);
	void pushInDiscard(int id);
	void playFromHand(int id);
};

