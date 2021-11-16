#pragma once

#include <utility>

#include "core.hpp"

class MM_API Vec2D {
public:
    Vec2D();
    Vec2D(int x, int y);
    Vec2D(const Vec2D& other);
    Vec2D(std::pair<int, int> vec2D);
    ~Vec2D();
    std::pair<int, int> get();
    void set(std::pair<int, int> vec2D);
    int getX();
    void setX(int x);
    int getY();
    void setY(int y);

    Vec2D& operator=(const Vec2D& other);
    Vec2D& operator+=(const Vec2D& other);
    Vec2D& operator-=(const Vec2D& other);
    Vec2D& operator*=(const Vec2D& other);
    Vec2D& operator/=(const Vec2D& other);
    Vec2D& operator*=(int scalar);
    Vec2D& operator/=(int scalar);
    Vec2D operator+(const Vec2D& other);
    Vec2D operator-(const Vec2D& other);
    Vec2D operator*(const Vec2D& other);
    Vec2D operator/(const Vec2D& other);
    Vec2D operator*(int scalar);
    Vec2D operator/(int scalar);
    bool operator==(const Vec2D& other);
    bool operator!=(const Vec2D& other);
    bool operator<(const Vec2D& other);
    bool operator>(const Vec2D& other);
    bool operator<=(const Vec2D& other);
    bool operator>=(const Vec2D& other);
    Vec2D& operator++();
    Vec2D& operator--();
    Vec2D operator-();
    Vec2D operator+();
private:
    std::pair<int, int> vec2D;
};