#include "tile.hpp"

Tile::Tile(TileType type, int x, int y)
{
    this->type = type;
    this->location.setX(x);
    this->location.setY(y);
}

Tile::Tile(int x, int y)
{
    this->type = TileType::TILE_TYPE_NONE;
    this->location.setX(x);
    this->location.setY(y);
}

Tile::Tile()
{
    this->type = TileType::TILE_TYPE_NONE;
    this->location.setX(0);
    this->location.setY(0);
}

Tile::Tile(Vec2D location)
{
    this->type = TileType::TILE_TYPE_NONE;
    this->location = location;
}

Tile::Tile(TileType type, Vec2D location)
{
    this->type = type;
    this->location = location;
}

Tile::Tile(Tile& other)
{
    this->type = other.type;
    this->location = other.location;
}

Tile::~Tile()
{
}

TileType Tile::getType()
{
    return this->type;
}

int Tile::getX()
{
    return this->location.getX();
}

int Tile::getY()
{
    return this->location.getY();
}

void Tile::setType(TileType type)
{
    this->type = type;
}

void Tile::setX(int x)
{
    this->location.setX(x);
}

void Tile::setY(int y)
{
    this->location.setY(y);
}

void Tile::setLocation(int x, int y)
{
    this->location.setX(x);
    this->location.setY(y);
}

void Tile::setLocation(Vec2D location)
{
    this->location = location;
}