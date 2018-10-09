#pragma once
#include <string>
using namespace std;

class Card
{
public:
	Card(int rank, int color);
	~Card();

	inline string GetRank() { return rank; };
	inline string GetColor() { return color; };
	inline string GetSymbol() { return rank + " of " + color; };

private:
	string rank;
	string color;
	string symbol;

	void DefineRank(int rank);
	void DefineColor(int color);
};

