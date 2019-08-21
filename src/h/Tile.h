enum class TileStatus {Water, Ship, Missile};

class Tile 
{
    TileStatus status;    
public: 
    Tile();
    ~Tile();
    void ChangeStatus(TileStatus newStatus);
};
