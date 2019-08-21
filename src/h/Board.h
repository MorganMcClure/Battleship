#pragma once
#include <map>
#include "Tile.h"

class Board
{
    const int MAX_SIZE = 26;
    int x_dim = 10;
    int y_dim = 10;
    std::map<char*, Tile> Gameboard;
public:
    Board(int dim);
    ~Board();
    void PrintBoard();
    void MissileImpact();
};