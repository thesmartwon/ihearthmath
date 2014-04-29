#pragma once
#include <vector>
#include <string>
#include "Card.h"
class Deck
{
private:
	int classSpecific;
	std::string classPlayed;
	std::vector<Card> deckList[30];
public:
	Deck();
	~Deck();
};

