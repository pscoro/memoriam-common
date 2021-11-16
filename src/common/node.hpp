# pragma once

#include <string>
#include <vector>

#include "vec_2D.hpp"
#include "tile.hpp"
#include "core.hpp"

class MM_API Node {
public:
    Node(int ID);
    Node(int ID, std::string name, Vec2D position, Vec2D size, std::string description, std::vector<int> chunkIDs, int clusterID, std::vector<int> playerIDs);
    Node(Node& other);
    Node();
    ~Node();

    int getID();

    std::string getName();
    void setName(std::string name);

    Vec2D getLocation();
    void setLocation(Vec2D location);

    Vec2D getSize();
    void setSize(Vec2D size);

    std::string getDescription();
    void setDescription(std::string description);

    std::vector<int> getChunkIDs();
    int getChunkID(int index);
    void setChunkIDs(std::vector<int> chunkIDs);
    void addChunkID(int chunkID);
    void removeChunkID(int chunkID);

    int getClusterID();
    void setClusterID(int clusterID);

    std::vector<int> getPlayerIDs();
    void setPlayerIDs(std::vector<int> playerIDs);

    void addPlayer(int playerID);
    void removePlayer(int playerID);

    int getPlayerID(int index);

    bool isPlayerHere(int playerID);
    bool isChunkHere(int chunkID);

    int getNumPlayers();

    void toString();
private:
    int ID;
    std::string name;
    Vec2D location;
    Vec2D size;
    std::string description;
    std::vector<int> chunkIDs;
    int clusterID;
    std::vector<int> playerIDs;
};