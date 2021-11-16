#pragma once

#include <string>
#include <vector>

#include "core.hpp"

class MM_API Team
{
public:
    Team(int ID);
    Team();
    Team(const Team& other);
    Team(int ID, std::string name, std::vector<int>* memberIDs);
    ~Team();

    int getID();

    std::string getName();
    void setName(std::string name);

    std::vector<int>* getMemberIDs();
    void setMemberIDs(std::vector<int>* memberIDs);
    void addMemberID(int memberID);
    void removeMemberID(int memberID);

    int getMemberCount();
    int getMemberID(int index);

private:
    int ID;
    std::string name;
    std::vector<int>* memberIDs;
};