#pragma once

#include "vec_2D.hpp"
#include "tile.hpp"
#include "core.hpp"

class MM_API Chunk {
public:
    Chunk(int ID);
    Chunk(int ID, Vec2D location, int nodeID, Tile** tiles);
    ~Chunk();

    int getID();

    Vec2D getLocation();
    void setLocation(Vec2D location);
    void setLocation(int x, int y);

    int getNodeID();
    int setNodeID(int nodeID);

    Tile getTile(int x, int y);
    Tile getTile(Vec2D location);
    void setTile(int x, int y, Tile tile);
    void setTile(Vec2D location, Tile tile);

    void setTiles(Tile** tiles);

public:
    static const int CHUNK_SIZE = 16;
private:
    int ID;
    Vec2D location;
    int nodeID;
    Tile tiles[CHUNK_SIZE][CHUNK_SIZE];
};