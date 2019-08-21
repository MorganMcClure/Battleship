#include "../h/Board.h"
#include <iostream>

Board::Board(int dim) : x_dim(dim), y_dim(dim)
{
    if(dim < MAX_SIZE)
    {
        char alphabetStart = 'A';
        int numberStart = 0;

        for(int i = 0; i < dim; ++i)
        {
            std::cout << alphabetStart++ << " : " << numberStart++ << std::endl;
        }

    }
}

Board::~Board() 
{
    
}
void PrintBoard()
{

}

void MissileImpact()
{
    
}