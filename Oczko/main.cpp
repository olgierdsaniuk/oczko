#include <iostream>
#include <string>
#include "Card.h"
using namespace std;

int main() {
	Card karta(12, 3);
	cout << karta.GetSymbol()<<endl;

	std::cout << "Hello World"<< std::endl;
	system("PAUSE");
}