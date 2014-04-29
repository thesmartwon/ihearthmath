#pragma once
#include <string>
class Card
{
private:
	int num;
	int classSpecific;
	int cost;
	std::string text;
public:
	Card();
	~Card();
};

