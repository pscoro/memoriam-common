#pragma once

#include <map>
#include <vector>
#include <string>

#include "chunk.hpp"
#include "game_object.hpp"
#include "node.hpp"
#include "player.hpp"
#include "cluster.hpp"
#include "vec_2D.hpp"
#include "core.hpp"

class MM_API Cache {
public:
    Cache();
    Cache(const Cache&);
    ~Cache();

    Cluster* getCluster(int clusterID);
    Cluster* getCluster(int x, int y);
    Cluster* getCluster(Vec2D location);
    std::vector<Cluster*> getClustersVec();
    std::map<int, Cluster*> getClustersMap();
    
    Chunk* getChunk(int chunkID);
    Chunk* getChunk(int nodeID, int x, int y);
    Chunk* getChunk(int nodeID, Vec2D location);
    Chunk* getChunk(int nodeX, int nodeY, int chunkX, int chunkY);
    Chunk* getChunk(Vec2D nodeLocation, Vec2D chunkLocation);
    std::vector<Chunk*> getChunksVec();
    std::map<int, Chunk*> getChunksMap();
    
    Node* getNode(int nodeID);
    Node* getNode(int x, int y);
    Node* getNode(Vec2D location);
    Node* getNode(std::string name);
    std::vector<Node*> getNodesVec();
    std::map<int, Node*> getNodesMap();

    GameObject* getGameObject(int gameObjectID);
    GameObject* getGameObject(int nodeID, int chunkID, int x, int y);
    GameObject* getGameObject(int nodeID, int chunkID, Vec2D tileLocation);
    GameObject* getGameObject(int nodeX, int nodeY, int chunkX, int chunkY, int tileX, int tileY);
    GameObject* getGameObject(Vec2D nodeLocation, Vec2D chunkLocation, Vec2D tileLocation);
    std::vector<GameObject*> getGameObjectsVec();
    std::map<int, GameObject*> getGameObjectsMap();

    Player* getPlayer(int playerID);
    std::vector<Player*> getPlayers(int nodeID, int chunkID);
    std::vector<Player*> getPlayers(int nodeID);
    std::vector<Player*> getPlayers(int nodeX, int nodeY, int chunkX, int chunkY);
    std::vector<Player*> getPlayers(Vec2D nodeLocation, Vec2D chunkLocation);
    std::vector<Player*> getPlayers(Vec2D nodeLocation);
    std::vector<Player*> getPlayersVec();
    std::map<int, Player*> getPlayersMap();

    void clear();
    void clearClusters();
    void clearChunks();
    void clearNodes();
    void clearGameObjects();
    void clearPlayers();

    void update();

    Cluster* addCluster(Cluster* clusterID);
    void removeCluster(Cluster* clusterID);
    void removeCluster(int clusterID);

    Chunk* addChunk(Chunk* chunk);
    void removeChunk(Chunk* chunk);
    void removeChunk(int chunkID);

    Node* addNode(Node* node);
    void removeNode(Node* node);
    void removeNode(int nodeID);

    GameObject* addGameObject(GameObject* gameObject);
    void removeGameObject(GameObject* gameObject);
    void removeGameObject(int gameObjectID);

    Player* addPlayer(Player* player);
    void removePlayer(Player* player);
    void removePlayer(int playerID);

private:
    std::map<int, Cluster*> clusters;
    std::map<int, Chunk*> chunks;
    std::map<int, Node*> nodes;
    std::map<int, GameObject*> gameObjects;
    std::map<int, Player*> players;

    bool clustersUpdateFlag = false;
    bool chunksUpdateFlag = false;
    bool nodesUpdateFlag = false;
    bool gameObjectsUpdateFlag = false;
    bool playersUpdateFlag = false;
    
};