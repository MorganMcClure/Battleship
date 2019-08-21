#pragma once
#include <iostream>
#include <sstream>
#include <array>
#include "Tile.h"

class Board
{
    static constexpr int NUM_ROWS = 10;
    static constexpr int NUM_COLS = 10;
    static constexpr int ALPHABET_OFFSET = 65;
    using Row = std::array<Tile, NUM_COLS>;
    std::array<Row, NUM_ROWS> Gameboard;
public:
    Board();
    ~Board() = default;
    void PrintBoard();
    void MissileImpact();
};