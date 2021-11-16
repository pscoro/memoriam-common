#include "node.hpp"

Node::Node(int ID)
{
    this->ID = ID;
    this->name = std::to_string(ID);
    this->location = Vec2D(0, 0);
    this->size = Vec2D(0, 0);
    this->description = "";
    this->chunkIDs = std::vector<int>();
    this->clusterID = -1;
    this->playerIDs = std::vector<int>();

    // this->chunkIDs[this->size.getX() * this->size.getY()];
}

Node::Node(int ID, std::string name, Vec2D position, Vec2D size, std::string description, std::vector<int> chunkIDs, int clusterID, std::vector<int> playerIDs)
{
    this->ID = ID;
    this->name = name;
    this->location = position;
    this->size = size;
    this->description = description;
    this->chunkIDs = chunkIDs;
    this->clusterID = clusterID;
    this->playerIDs = playerIDs;
}

Node::Node(Node& other)
{
    this->ID = other.ID;
    this->name = other.name;
    this->location = other.location;
    this->size = other.size;
    this->description = other.description;
    this->chunkIDs = other.chunkIDs;
    this->clusterID = other.clusterID;
    this->playerIDs = other.playerIDs;
}

Node::Node()
{
    this->ID = -1;
    this->name = "NULL";
    this->location = Vec2D(0, 0);
    this->size = Vec2D(0, 0);
    this->description = "Technically not a node.";
    this->chunkIDs = std::vector<int>();
    this->clusterID = -1;
    this->playerIDs = std::vector<int>();
}

Node::~Node()
{
    // delete[] this->chunkIDs;
}

void Node::setName(std::string name)
{
    this->name = name;
}

void Node::setLocation(Vec2D location)
{
    this->location = location;
}

void Node::setSize(Vec2D size)
{
    this->size = size;
}

void Node::setDescription(std::string description)
{
    this->description = description;
}

void Node::setChunkIDs(std::vector<int> chunkIDs)
{
    this->chunkIDs = chunkIDs;
}

void Node::setClusterID(int clusterID)
{
    this->clusterID = clusterID;
}

void Node::setPlayerIDs(std::vector<int> playerIDs)
{
    this->playerIDs = playerIDs;
}

void Node::addPlayer(int playerID)
{
    this->playerIDs.push_back(playerID);
}

void Node::removePlayer(int playerID)
{
    this->playerIDs.erase(this->playerIDs.begin() + playerID);
}

int Node::getID()
{
    return this->ID;
}

int Node::getClusterID()
{
    return this->clusterID;
}

std::string Node::getName()
{
    return this->name;
}

std::string Node::getDescription()
{
    return this->description;
}

std::vector<int> Node::getPlayerIDs()
{
    return this->playerIDs;
}

int Node::getPlayerID(int index)
{
    return this->playerIDs.at(index);
}   

bool Node::isPlayerHere(int playerID)
{
    for (int i = 0; i < this->playerIDs.size(); i++)
    {
        if (this->playerIDs.at(i) == playerID)
        {
            return true;
        }
    }

    return false;
}

bool Node::isChunkHere(int chunkID)
{
    for (int i = 0; i < this->chunkIDs.size(); i++)
    {
        if (this->chunkIDs.at(i) == chunkID)
        {
            return true;
        }
    }

    return false;
}

Vec2D Node::getLocation()
{
    return this->location;
}