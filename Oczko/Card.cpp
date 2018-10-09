#include "Card.h"
#include <String>


Card::Card(int rank, int color)
{
	DefineRank(rank);
	DefineColor(color);
}


Card::~Card()
{
}

void Card::DefineRank(int rank)
{
	switch (rank)
	{
	case 1:
		this->rank = "Ace";
		break;
	case 2:
		this->rank = "2";
		break;
	case 3:
		this->rank = "3";
		break;
	case 4:
		this->rank = "4";
		break;
	case 5:
		this->rank = "5";
		break;
	case 6:
		this->rank = "6";
		break;
	case 7:
		this->rank = "7";
		break;
	case 8:
		this->rank = "8";
		break;
	case 9:
		this->rank = "9";
		break;
	case 10:
		this->rank = "10";
		break;
	case 11:
		this->rank = "Jack";
		break;
	case 12:
		this->rank = "Queen";
		break;
	case 13:
		this->rank = "King";
		break;
	default:
		this->rank = "RankErr";
		break;
	}
}

void Card::DefineColor(int color)
{
	switch (color)
	{
	case 1:
		this->color = "Spades";
		break;
	case 2:
		this->color = "Clubs";
		break;
	case 3:
		this->color = "Diamonds";
		break;
	case 4:
		this->color = "Hearts";
		break;
	default:
		this->color = "ColorErr";
		break;
	}
}