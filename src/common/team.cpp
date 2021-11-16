#include "team.hpp"

Team::Team()
{
    this->ID = -1;
    this->name = "NULLVOID";
    this->memberIDs = new std::vector<int>();
}

Team::Team(int ID)
{
    this->ID = ID;
    this->name = "";
    this->memberIDs = new std::vector<int>();
}

Team::Team(int ID, std::string name, std::vector<int>* memberIDs)
{
    this->ID = ID;
    this->name = name;
    this->memberIDs = memberIDs;
}

Team::Team(const Team& other)
{
    this->ID = other.ID;
    this->name = other.name;
    this->memberIDs = other.memberIDs;
}

Team::~Team()
{
    delete this->memberIDs;
}

int Team::getID()
{
    return this->ID;
}

int Team::getMemberCount()
{
    return this->memberIDs->size();
}

int Team::getMemberID(int index)
{
    return this->memberIDs->at(index);
}

std::string Team::getName()
{
    return this->name;
}   

std::vector<int>* Team::getMemberIDs()
{
    return this->memberIDs;
}   

void Team::setName(std::string name)
{
    this->name = name;
}

void Team::setMemberIDs(std::vector<int>* memberIDs)
{
    delete this->memberIDs;
    this->memberIDs = memberIDs;
}

void Team::addMemberID(int memberID)
{
    this->memberIDs->push_back(memberID);
}   

void Team::removeMemberID(int memberID)
{
    for (int i = 0; i < this->memberIDs->size(); i++)
    {
        if (this->memberIDs->at(i) == memberID)
        {
            this->memberIDs->erase(this->memberIDs->begin() + i);
            break;
        }
    }
}

