#pragma once

#include <string>
#include <vector>

#include "vec_2D.hpp"
#include "core.hpp"

class MM_API Cluster {
public:
    Cluster(int ID);
    Cluster(int ID, std::string name, Vec2D location, std::string description, std::vector<int> nodeIDs);
    Cluster();
    Cluster(Cluster& other);

    ~Cluster();

    int getID();

    std::string getName();
    void setName(std::string name);

    Vec2D getLocation();
    void setLocation(Vec2D location);

    std::string getDescription();
    void setDescription(std::string description);

    std::vector<int> getNodeIDs();
    void addNodeID(int nodeID);
    void removeNodeID(int nodeID);
    void setNodeIDs(std::vector<int> nodeIDs);

    int getNodeCount();
    int getNodeID(int index);


private:
    int ID;
    std::string name;
    Vec2D location;
    std::string description;
    std::vector<int> nodeIDs;
};