#pragma once

enum class TileStatus: char {Water = ' ', Ship = 'B', Missile = 'X'};

class Tile 
{
    TileStatus status = TileStatus::Water;    
public: 
    Tile();
    ~Tile();
    TileStatus GetStatus() { return status; }
    void SetStatus(TileStatus newStatus);
};
