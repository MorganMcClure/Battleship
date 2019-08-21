#pragma once

enum class TileStatus {Water = 'W', Ship = 'B', Missile = 'X'};

class Tile 
{
public: 
    TileStatus status;    
    Tile();
    ~Tile();
    void ChangeStatus(TileStatus newStatus);
};
