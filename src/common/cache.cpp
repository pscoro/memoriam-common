#include "cache.hpp"

Cache::Cache()
{
    this->clusters = std::map<int, Cluster*>();
    this->chunks = std::map<int, Chunk*>();
    this->nodes = std::map<int, Node*>();
    this->gameObjects = std::map<int, GameObject*>();
    this->players = std::map<int, Player*>();

}

Cache::~Cache()
{
    this->clearClusters();
    this->clearChunks();
    this->clearNodes();
    this->clearGameObjects();
    this->clearPlayers();
}

Cache::Cache(const Cache& other)
{
    this->clusters = other.clusters;
    this->chunks = other.chunks;
    this->nodes = other.nodes;
    this->gameObjects = other.gameObjects;
    this->players = other.players;
}

Cluster* Cache::getCluster(int clusterID)
{
    return this->clusters.at(clusterID);
}

Cluster* Cache::getCluster(int x, int y)
{
    for (auto cluster : this->clusters)
    {
        if (cluster.second->getLocation().getX() == x && cluster.second->getLocation().getY() == y)
        {
            return cluster.second;
        }
    }
}

Cluster* Cache::getCluster(Vec2D location)
{
    for (auto cluster : this->clusters)
    {
        if (cluster.second->getLocation() == location)
        {
            return cluster.second;
        }
    }
    return nullptr;
}

std::vector<Cluster*> Cache::getClustersVec()
{
    std::vector<Cluster*> clustersVec;
    for (auto cluster : this->clusters)
    {
        clustersVec.push_back(cluster.second);
    }
    return clustersVec;
}

std::map<int, Cluster*> Cache::getClustersMap()
{
    return this->clusters;
}

Chunk* Cache::getChunk(int chunkID)
{
    return this->chunks.at(chunkID);
}

Chunk* Cache::getChunk(int nodeID, int x, int y)
{
    for (auto chunk : this->chunks)
    {
        if (chunk.second->getNodeID() == nodeID && chunk.second->getLocation().getX() == x && chunk.second->getLocation().getY() == y)
        {
            return chunk.second;
        }
    }
    return nullptr;
}

Chunk* Cache::getChunk(int nodeID, Vec2D location)
{
    for (auto chunk : this->chunks)
    {
        if (chunk.second->getNodeID() == nodeID && chunk.second->getLocation() == location)
        {
            return chunk.second;
        }
    }
    return nullptr;
}

Chunk* Cache::getChunk(int nodeX, int nodeY, int chunkX, int chunkY)
{
    for (auto chunk : this->chunks)
    {
        if (getNode(chunk.second->getNodeID())->getLocation().getX() == nodeX && getNode(chunk.second->getNodeID())->getLocation().getX() == nodeY && chunk.second->getLocation().getX() == chunkX && chunk.second->getLocation().getY() == chunkY)
        {
            return chunk.second;
        }
    }
    return nullptr;
}

Chunk* Cache::getChunk(Vec2D nodeLocation, Vec2D chunkLocation)
{
    for (auto chunk : this->chunks)
    {
        if (getNode(chunk.second->getNodeID())->getLocation() == nodeLocation && chunk.second->getLocation() == chunkLocation)
        {
            return chunk.second;
        }
    }
    return nullptr;
}

std::vector<Chunk*> Cache::getChunksVec()
{
    std::vector<Chunk*> chunksVec;
    for (auto chunk : this->chunks)
    {
        chunksVec.push_back(chunk.second);
    }
    return chunksVec;
}

std::map<int, Chunk*> Cache::getChunksMap()
{
    return this->chunks;
}

Node* Cache::getNode(int nodeID)
{
    return this->nodes.at(nodeID);
}

Node* Cache::getNode(int x, int y)
{
    for (auto node : this->nodes)
    {
        if (node.second->getLocation().getX() == x && node.second->getLocation().getY() == y)
        {
            return node.second;
        }
    }
}

Node* Cache::getNode(Vec2D location)
{
    for (auto node : this->nodes)
    {
        if (node.second->getLocation() == location)
        {
            return node.second;
        }
    }
    return nullptr;
}

Node* Cache::getNode(std::string name)
{
    for (auto node : this->nodes)
    {
        if (node.second->getName() == name)
        {
            return node.second;
        }
    }
    return nullptr;
}

std::vector<Node*> Cache::getNodesVec()
{
    std::vector<Node*> nodesVec;
    for (auto node : this->nodes)
    {
        nodesVec.push_back(node.second);
    }
    return nodesVec;
}

std::map<int, Node*> Cache::getNodesMap()
{
    return this->nodes;
}   

GameObject* Cache::getGameObject(int gameObjectID)
{
    return this->gameObjects.at(gameObjectID);
}

GameObject* Cache::getGameObject(int nodeID, int chunkID, int x, int y)
{
    for (auto gameObject : this->gameObjects)
    {
        if (gameObject.second->getNodeID() == nodeID && gameObject.second->getChunkID() == chunkID && gameObject.second->getLocation().getX() == x && gameObject.second->getLocation().getY() == y)
        {
            return gameObject.second;
        }
    }
    return nullptr;
}

GameObject* Cache::getGameObject(int nodeID, int chunkID, Vec2D location)
{
    for (auto gameObject : this->gameObjects)
    {
        if (gameObject.second->getNodeID() == nodeID && gameObject.second->getChunkID() == chunkID && gameObject.second->getLocation() == location)
        {
            return gameObject.second;
        }
    }
    return nullptr;
}

GameObject* Cache::getGameObject(int nodeX, int nodeY, int chunkX, int chunkY, int x, int y)
{
    for (auto gameObject : this->gameObjects)
    {
        if (getNode(gameObject.second->getNodeID())->getLocation().getX() == nodeX && getNode(gameObject.second->getNodeID())->getLocation().getX() == nodeY 
        && getChunk(gameObject.second->getChunkID())->getLocation().getX() == chunkX &&  getChunk(gameObject.second->getChunkID())->getLocation().getY() == chunkY
        && gameObject.second->getLocation().getX() == x && gameObject.second->getLocation().getY() == y)
        {
            return gameObject.second;
        }
    }
    return nullptr;
}

GameObject* Cache::getGameObject(Vec2D nodeLocation, Vec2D chunkLocation, Vec2D location)
{
    for (auto gameObject : this->gameObjects)
    {
        if (getNode(gameObject.second->getNodeID())->getLocation() == nodeLocation && getChunk(gameObject.second->getChunkID())->getLocation() == chunkLocation && gameObject.second->getLocation() == location)
        {
            return gameObject.second;
        }
    }
    return nullptr;
}

std::vector<GameObject*> Cache::getGameObjectsVec()
{  
    std::vector<GameObject*> gameObjectsVec;
    for (auto gameObject : this->gameObjects)
    {
        gameObjectsVec.push_back(gameObject.second);
    }
    return gameObjectsVec;
}

std::map<int, GameObject*> Cache::getGameObjectsMap()
{
    return this->gameObjects;
}

Player* Cache::getPlayer(int playerID)
{
    return this->players.at(playerID);
}

std::vector<Player*> Cache::getPlayers(int nodeID, int chunkID)
{
    std::vector<Player*> players;
    for (auto player : this->players)
    {
        if (player.second->getNodeID() == nodeID && player.second->getChunkID() == chunkID)
        {
            players.push_back(player.second);
        }
    }
    return players;
}

std::vector<Player*> Cache::getPlayers(int nodeID)
{
    std::vector<Player*> players;
    for (auto player : this->players)
    {
        if (player.second->getNodeID() == nodeID)
        {
            players.push_back(player.second);
        }
    }
    return players;
}

std::vector<Player*> Cache::getPlayers(int nodeX, int nodeY, int chunkX, int chunkY)
{
    std::vector<Player*> players;
    for (auto player : this->players)
    {
        if (getNode(player.second->getNodeID())->getLocation().getX() == nodeX && getNode(player.second->getNodeID())->getLocation().getX() == nodeY 
        && getChunk(player.second->getChunkID())->getLocation().getX() == chunkX &&  getChunk(player.second->getChunkID())->getLocation().getY() == chunkY)
        {
            players.push_back(player.second);
        }
    }
    return players;
}

std::vector<Player*> Cache::getPlayers(Vec2D nodeLocation, Vec2D chunkLocation)
{
    std::vector<Player*> players;
    for (auto player : this->players)
    {
        if (getNode(player.second->getNodeID())->getLocation() == nodeLocation && getChunk(player.second->getChunkID())->getLocation() == chunkLocation)
        {
            players.push_back(player.second);
        }
    }
    return players;
}

std::vector<Player*> Cache::getPlayers(Vec2D nodeLocation)
{
    std::vector<Player*> players;
    for (auto player : this->players)
    {
        if (getNode(player.second->getNodeID())->getLocation() == nodeLocation)
        {
            players.push_back(player.second);
        }
    }
    return players;
}

std::vector<Player*> Cache::getPlayersVec()
{
    std::vector<Player*> players;
    for (auto player : this->players)
    {
        players.push_back(player.second);
    }
    return players;
}

std::map<int, Player*> Cache::getPlayersMap()
{
    return this->players;
}

void Cache::clear()
{
    clearClusters();
    clearNodes();
    clearChunks();
    clearGameObjects();
    clearPlayers();


}

void Cache::clearNodes()
{
    std::map<int, Node*>::iterator it;
    for (it = this->nodes.begin(); it != this->nodes.end(); it++)
    {
        delete it->second;
    }
    this->nodes.clear();
}

void Cache::clearClusters()
{
    std::map<int, Cluster*>::iterator it;
    for (it = this->clusters.begin(); it != this->clusters.end(); it++)
    {
        delete it->second;
    }
    this->clusters.clear();   
}

void Cache::clearChunks()
{
    std::map<int, Chunk*>::iterator it;
    for (it = this->chunks.begin(); it != this->chunks.end(); it++)
    {
        delete it->second;
    }
    this->chunks.clear();
}

void Cache::clearGameObjects()
{
    std::map<int, GameObject*>::iterator it;
    for (it = this->gameObjects.begin(); it != this->gameObjects.end(); it++)
    {
        delete it->second;
    }
    this->gameObjects.clear();
}

void Cache::clearPlayers()
{
    std::map<int, Player*>::iterator it;
    for (it = this->players.begin(); it != this->players.end(); it++)
    {
        delete it->second;
    }
    this->players.clear();
}

void update() {

}

Cluster* Cache::addCluster(Cluster* cluster)
{
    this->clusters.insert(std::pair<int, Cluster*>(cluster->getID(), cluster));
    return cluster;
}

Chunk* Cache::addChunk(Chunk* chunk)
{
    this->chunks.insert(std::pair<int, Chunk*>(chunk->getID(), chunk));
    return chunk;
}

Node* Cache::addNode(Node* node)
{
    this->nodes.insert(std::pair<int, Node*>(node->getID(), node));
    return node;
}

GameObject* Cache::addGameObject(GameObject* gameObject)
{
    this->gameObjects.insert(std::pair<int, GameObject*>(gameObject->getID(), gameObject));
    return gameObject;
}

Player* Cache::addPlayer(Player* player)
{
    this->players.insert(std::pair<int, Player*>(player->getID(), player));
    return player;
}

void Cache::removeCluster(int clusterID)
{
    this->clusters.erase(clusterID);
}

void Cache::removeChunk(int chunkID)
{
    this->chunks.erase(chunkID);
}

void Cache::removeNode(int nodeID)
{
    this->nodes.erase(nodeID);
}

void Cache::removeGameObject(int gameObjectID)
{
    this->gameObjects.erase(gameObjectID);
}

void Cache::removePlayer(int playerID)
{
    this->players.erase(playerID);
}

void Cache::removePlayer(Player* player)
{
    this->players.erase(player->getID());
}

void Cache::removeCluster(Cluster* cluster)
{
    this->clusters.erase(cluster->getID());
}   

void Cache::removeChunk(Chunk* chunk)
{
    this->chunks.erase(chunk->getID());
}   

void Cache::removeNode(Node* node)
{
    this->nodes.erase(node->getID());
}

void Cache::removeGameObject(GameObject* gameObject)
{
    this->gameObjects.erase(gameObject->getID());
}
