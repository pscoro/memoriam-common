#include "game_object.hpp"

GameObject::GameObject()
{
    this->ID = -1;
    this->name = "Object #" + std::to_string(this->ID);
    this->location = Vec2D(0,0);
    this->nodeID = -1;
    this->chunkID = -1;
}

GameObject::GameObject(int ID)
{
    this->ID = ID;
    this->name = "Object #" + std::to_string(this->ID);
    this->location = Vec2D(0,0);
    this->nodeID = -1;
    this->chunkID = -1;
}

GameObject::GameObject(int ID, std::string name, Vec2D location, std::string description, int nodeID, int chunkID)
{
    this->ID = ID;
    this->name = name;
    this->location = location;
    this->description = description;
    this->nodeID = nodeID;
    this->chunkID = chunkID;
}

GameObject::GameObject(const GameObject& other)
{
    this->ID = other.ID;
    this->name = other.name;
    this->location = other.location;
    this->description = other.description;
    this->nodeID = other.nodeID;
    this->chunkID = other.chunkID;
}

GameObject::~GameObject()
{
}


int GameObject::getID()
{
    return this->ID;
}   

std::string GameObject::getName()
{
    return this->name;
}   

Vec2D GameObject::getLocation()
{
    return this->location;
}   

std::string GameObject::getDescription()
{   
    return this->description;
}   

int GameObject::getNodeID()
{
    return this->nodeID;
}       

int GameObject::getChunkID()
{
    return this->chunkID;
}        

void GameObject::setName(std::string name)
{   
    this->name = name;
}       

void GameObject::setLocation(Vec2D location)
{   
    this->location = location;
}       
 void GameObject::setDescription(std::string description)
{   
    this->description = description;   
}

void GameObject::setNodeID(int nodeID)
{
    this->nodeID = nodeID;
}

void GameObject::setChunkID(int chunkID)
{
    this->chunkID = chunkID;
}
