#include "cluster.hpp"

Cluster::Cluster(int ID)
{
    this->ID = ID;
    this->name = "";
    this->location = Vec2D(0, 0);
    this->nodeIDs = std::vector<int>();
}

Cluster::Cluster(int ID, std::string name, Vec2D location, std::string description, std::vector<int> nodeIDs)
{
    this->ID = ID;
    this->name = name;
    this->location = location;
    this->description = description;
    this->nodeIDs = nodeIDs;
}

Cluster::Cluster()
{
    this->ID = -1;
    this->name = "VOID";
    this->location = Vec2D(-1, -1);
    this->description = "Technically not a cluster.";
    this->nodeIDs = std::vector<int>();
}

Cluster::Cluster(Cluster& other)
{
    this->ID = other.ID;
    this->name = other.name;
    this->location = other.location;
    this->description = other.description;
    this->nodeIDs = other.nodeIDs;
}

Cluster::~Cluster()
{
}

int Cluster::getID()
{
    return this->ID;
}

int Cluster::getNodeID(int index)
{
    return this->nodeIDs.at(index);
}

int Cluster::getNodeCount()
{
    return this->nodeIDs.size();
}

std::string Cluster::getName()
{
    return this->name;
}

std::string Cluster::getDescription()
{        
    return this->description;
}

std::vector<int> Cluster::getNodeIDs()
{
    return this->nodeIDs;
}

void Cluster::setName(std::string name)
{
    this->name = name;
}

void Cluster::setDescription(std::string description)
{
    this->description = description;
}     

void Cluster::setNodeIDs(std::vector<int> nodeIDs)
{
    this->nodeIDs = nodeIDs;
}

void Cluster::addNodeID(int nodeID)
{
    this->nodeIDs.push_back(nodeID);
}   

void Cluster::removeNodeID(int nodeID)
{
    for (int i = 0; i < this->nodeIDs.size(); i++)
    {
        if (this->nodeIDs.at(i) == nodeID)
        {
            this->nodeIDs.erase(this->nodeIDs.begin() + i);
            break;
        }
    }
}

Vec2D Cluster::getLocation()
{
    return this->location;
}