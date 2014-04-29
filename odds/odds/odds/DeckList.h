#pragma once
#include <vector>
#include "Card.h"

class DeckList
{
private:
	int race;
	std::string classPlayed;
	std::vector<Card> allCards[382];
public:
	DeckList();
	~DeckList();
	int addToDeckList(int id);
	void removeFromDeckList(int id);
};

