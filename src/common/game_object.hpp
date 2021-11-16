#pragma once

#include <string>

#include "vec_2D.hpp"
#include "core.hpp"

class MM_API GameObject {
public:
    GameObject(int ID);
    GameObject();
    GameObject(const GameObject& other);
    GameObject(int ID, std::string name, Vec2D location, std::string description, int nodeID, int chunkID);

    virtual ~GameObject();
    
    int getID();

    std::string getName();
    void setName(std::string name);

    Vec2D getLocation();
    void setLocation(Vec2D location);
    void setLocation(int x, int y);

    std::string getDescription();
    void setDescription(std::string description);

    int getNodeID();
    void setNodeID(int nodeID);

    int getChunkID();
    void setChunkID(int chunkID);

private:
    int ID;
    std::string name;
    Vec2D location;
    std::string description;
    int nodeID;
    int chunkID;
};