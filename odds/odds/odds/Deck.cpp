#include "Deck.h"


Deck::Deck()
{
}


Deck::~Deck()
{
}

void Deck::setRace(int c){
	race = c;
}
int Deck::pushInDeck(int id){
	Card bob(id);
	inDeck.push_back(bob);
	return 0;
}
int Deck::pushInHand(int id){
	return 0;
}
void Deck::pushInDiscard(int id){
	
}

void Deck::playFromHand(int id){

}