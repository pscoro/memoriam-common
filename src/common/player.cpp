#include "player.hpp"

Player::Player() {
    this->ID = -1;
    this->username = "INVALID";
    this->nodeID = -1;
    this->chunkID = -1;
    this->teamID = -1;
    this->inventoryIDs = std::vector<int>();
    this->ownershipIDs = std::vector<int>();
}

Player::Player(int ID) {
    this->ID = ID;
    this->username = "INVALID";
    this->nodeID = -1;
    this->chunkID = -1;
    this->teamID = -1;
    this->inventoryIDs = std::vector<int>();
    this->ownershipIDs = std::vector<int>();
}

Player::Player(const Player& other) {
    this->ID = other.ID;
    this->username = other.username;
    this->nodeID = other.nodeID;
    this->chunkID = other.chunkID;
    this->teamID = other.teamID;
    this->inventoryIDs = other.inventoryIDs;
    this->ownershipIDs = other.ownershipIDs;
}

Player::~Player() {
}

Player::Player(int ID, std::string username, int chunkID, int nodeID, std::vector<int> ownershipIDs, std::vector<int> inventoryIDs, int teamID) {
    this->ID = ID;
    this->username = username;
    this->nodeID = nodeID;
    this->chunkID = chunkID;
    this->teamID = teamID;
    this->inventoryIDs = inventoryIDs;
    this->ownershipIDs = ownershipIDs;
}

std::string Player::getUsername() {
    return this->username;
}

int Player::getID() {
    return this->ID;
}

int Player::getChunkID() {
    return this->chunkID;
}

int Player::getNodeID() {
    return this->nodeID;
}   

std::vector<int> Player::getInventoryIDs() {
    return this->inventoryIDs;
}

std::vector<int> Player::getOwnershipIDs() {
    return this->ownershipIDs;
}

int Player::getTeamID() {
    return this->teamID;
}

void Player::setUsername(std::string username) {
    this->username = username;
}

void Player::setChunkID(int chunkID) {
    this->chunkID = chunkID;
}

void Player::setNodeID(int nodeID) {
    this->nodeID = nodeID;
}

void Player::setInventoryIDs(std::vector<int> inventoryIDs) {
    this->inventoryIDs = inventoryIDs;
}

void Player::setOwnershipIDs(std::vector<int> ownershipIDs) {
    this->ownershipIDs = ownershipIDs;
}

void Player::setTeamID(int teamID) {
    this->teamID = teamID;
}

void Player::addInventoryID(int inventoryID) {
    this->inventoryIDs.push_back(inventoryID);
}

void Player::addOwnershipID(int ownershipID) {
    this->ownershipIDs.push_back(ownershipID);
}

void Player::removeInventoryID(int inventoryID) {
    for (int i = 0; i < this->inventoryIDs.size(); i++) {
        if (this->inventoryIDs.at(i) == inventoryID) {
            this->inventoryIDs.erase(this->inventoryIDs.begin() + i);
            return;
        }
    }
}

void Player::removeOwnershipID(int ownershipID) {
    for (int i = 0; i < this->ownershipIDs.size(); i++) {
        if (this->ownershipIDs.at(i) == ownershipID) {
            this->ownershipIDs.erase(this->ownershipIDs.begin() + i);
            return;
        }
    }
}

void Player::clearInventory() {
    this->inventoryIDs.clear();
}

void Player::clearOwnership() {
    this->ownershipIDs.clear();
}

