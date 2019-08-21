#include "../h/Board.h"
#include <iostream>
#include <sstream>

//Some day there'll be a rectangular board, not just square
Board::Board() 
{}

void Board::PrintBoard()
{
    char letter = 'A';
    std::cout << "\n     A    B    C    D    E    F    G    H    I    J";
    std::cout << "\n   --------------------------------------------------" <<std::endl;
    for(int y = 0; y < NUM_COLS; ++y)
    {
        int rowNo = y + 1;
        std::cout << rowNo << (rowNo >= 10 ? " " : "  ");
        for(int x = 0; x < NUM_ROWS; ++x) 
        {
            std::cout << "[ " << (char)Gameboard[x][y].GetStatus() << " ]";
        }
        std::cout << "\n   --------------------------------------------------" <<std::endl;
    }
}

void Board::MissileImpact(std::string coordinates)
{
    int colCoord = static_cast<int>(coordinates[0]) - ALPHABET_OFFSET;
    int rowCoord = std::stoi(coordinates.substr(1, coordinates.length()));
    
    if(Gameboard[colCoord][rowCoord].GetStatus() != TileStatus::Missile)
    {

    }
}