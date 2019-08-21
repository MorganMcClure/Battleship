#include <iostream>
#include "../h/Board.h"

int main() 
{
    Board b;
    std::string coordinates;
	std::string input;
	std::getline(std::cin, input);
    b.PrintBoard();
    //b.MissileImpact(input);
}