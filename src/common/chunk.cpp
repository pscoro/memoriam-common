#include "chunk.hpp"

Chunk::Chunk(int ID) {
    this->ID = ID;
    for (int i = 0; i < CHUNK_SIZE; i++) {
        for (int j = 0; j < CHUNK_SIZE; j++) {
            this->tiles[i][j] = Tile(i,j);
        }
    }

    this->location = Vec2D(0,0);
    this->nodeID = 0;
}

Chunk::~Chunk() {
    //
}

Chunk::Chunk(int ID, Vec2D location, int nodeID, Tile** tiles) {
    this->ID = ID;
    this->location = location;
    this->nodeID = nodeID;

    for (int i = 0; i < CHUNK_SIZE; i++) {
        for (int j = 0; j < CHUNK_SIZE; j++) {
            this->tiles[i][j] = tiles[i][j];
        }
    }

    // this->tiles = tiles;
}

int Chunk::getID() {
    return this->ID;
}

int Chunk::getNodeID() {
    return this->nodeID;
}

Vec2D Chunk::getLocation() {
    return this->location;
}

void Chunk::setTile(int x, int y, Tile tile) {
    this->tiles[x][y] = tile;
}

void Chunk::setTile(Vec2D location, Tile tile) {
    this->tiles[location.getX()][location.getY()] = tile;
}

void Chunk::setLocation(int x, int y) {
    this->location = Vec2D(x,y);
}

void Chunk::setLocation(Vec2D location) {
    this->location = location;
}

Tile Chunk::getTile(int x, int y) {
    return this->tiles[x][y];
}

Tile Chunk::getTile(Vec2D location) {
    return this->tiles[location.getX()][location.getY()];
}

void Chunk::setTiles(Tile** tiles) {
    for (int i = 0; i < CHUNK_SIZE; i++) {
        for (int j = 0; j < CHUNK_SIZE; j++) {
            this->tiles[i][j] = tiles[i][j];
        }
    }
}




