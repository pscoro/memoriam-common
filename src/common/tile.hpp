#pragma once

#include "vec_2D.hpp"
#include "core.hpp"


enum MM_API TileType {
    TILE_TYPE_NONE,
    TILE_TYPE_SURFACE,
    TILE_TYPE_GAME_OBJECT,
};

class MM_API Tile {
public:
    Tile(TileType type, int x, int y);
    Tile(int x, int y);
    Tile(Vec2D location);
    Tile(TileType type, Vec2D location);
    Tile(Tile& other);
    Tile();
    ~Tile();

    Vec2D getLocation();
    int getX();
    int getY();
    TileType getType();
    void setType(TileType type);
    void setLocation(int x, int y);
    void setLocation(Vec2D location);
    void setX(int x);
    void setY(int y);

private:
    TileType type;
    Vec2D location;
    
};