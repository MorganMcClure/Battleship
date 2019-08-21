#include <iostream>
#include <sstream>
#include "../h/Board.h"

int main() 
{
    Board b;
    b.PrintBoard();
	std::string input;
	std::getline(std::cin, input);
    //b.MissileImpact(input);
}