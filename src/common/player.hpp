#pragma once

#include <string>
#include <vector>

#include "vec_2D.hpp"
#include "core.hpp"

class MM_API Player {
public:
    Player(int ID);
    Player();
    Player(const Player& other);
    Player(int ID, std::string username, int chunkID, int nodeID, std::vector<int> ownershipIDs, std::vector<int> inventoryIDs, int teamID);
    ~Player();

    std::string getUsername();
    void setUsername(std::string username);

    int getID();

    int getChunkID();
    void setChunkID(int chunkID);

    int getNodeID();
    void setNodeID(int nodeID);

    int getTeamID();
    void setTeamID(int teamID);

    std::vector<int> getOwnershipIDs();
    void addOwnershipID(int gameObjectID);
    void removeOwnershipID(int gameObjectID);
    void setOwnershipIDs(std::vector<int> ownershipIDs);

    std::vector<int> getInventoryIDs();
    void addInventoryID(int gameObjectID);
    void removeInventoryID(int gameObjectID);
    void setInventoryIDs(std::vector<int> inventoryIDs);

    void clearInventory();
    void clearOwnership();

private:
    int ID;
    std::string username;
    int chunkID;
    int nodeID;
    std::vector<int> ownershipIDs;
    std::vector<int> inventoryIDs;
    int teamID;
};