#include "../h/Board.h"

//Some day there'll be a rectangular board, not just square
Board::Board() 
{
    for(int y = 0; y < NUM_COLS; ++y)
    {
        for(int x = 1; x <= NUM_ROWS; ++x) 
        {
            Gameboard[x][y].status = TileStatus::Water;
        }
    }
    PrintBoard();
}

void Board::PrintBoard()
{
    char letter = 'A';
    int letterOffset = (int)letter - ALPHABET_OFFSET;
    std::cout << "\n     ";
    //Eliminate this for loop?
    for(int y = 0; y < NUM_COLS; ++y)
    {
        std::cout << letter++ << "    ";
    }
    std::cout << "\n   --------------------------------------------------" <<std::endl;
    for(int y = 0; y < NUM_COLS; ++y)
    {
        int rowNo = y + 1;
        std::cout << rowNo << (rowNo >= 10 ? " " : "  ");
        for(int x = 1; x <= NUM_ROWS; ++x) 
        {
            std::cout << "[ " << (char)Gameboard[0][0].status << " ]";
        }
        std::cout << "\n   --------------------------------------------------" <<std::endl;
    }
}

void Board::MissileImpact()
{
    
}