#include <iostream>
#include <sstream>
#include "../h/Board.h"

int main() 
{
    bool gameOver = false;
    Board b;
    //b.PrintBoard();

    while(!gameOver) 
    {
    	std::string input;
	    std::getline(std::cin, input);
        if(input == "x")
        { 
            gameOver = true;
            continue;
        }
        b.MissileImpact(input);
        b.PrintBoard();
    }
}