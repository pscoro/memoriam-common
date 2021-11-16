#include "vec_2D.hpp"

Vec2D::Vec2D() {
    this->vec2D = std::make_pair(0, 0);
}

Vec2D::Vec2D(int x, int y) {
    this->vec2D = std::make_pair(x, y);
}

Vec2D::Vec2D(const Vec2D& other) {
    this->vec2D = other.vec2D;
}

Vec2D::Vec2D(std::pair<int, int> vec2D) {
    this->vec2D = vec2D;
}

Vec2D& Vec2D::operator=(const Vec2D& other) {
    this->vec2D = other.vec2D;
    return *this;
}

Vec2D& Vec2D::operator+=(const Vec2D& other) {
    this->vec2D.first += other.vec2D.first;
    this->vec2D.second += other.vec2D.second;
    return *this;
}

Vec2D& Vec2D::operator-=(const Vec2D& other) {
    this->vec2D.first -= other.vec2D.first;
    this->vec2D.second -= other.vec2D.second;
    return *this;
}

Vec2D Vec2D::operator+(const Vec2D& other) {
    return Vec2D(this->vec2D.first + other.vec2D.first, this->vec2D.second + other.vec2D.second);
}

Vec2D Vec2D::operator-(const Vec2D& other) {
    return Vec2D(this->vec2D.first - other.vec2D.first, this->vec2D.second - other.vec2D.second);
}

Vec2D& Vec2D::operator*=(const Vec2D& other) {
    this->vec2D.first *= other.vec2D.first;
    this->vec2D.second *= other.vec2D.second;
    return *this;
}

Vec2D& Vec2D::operator/=(const Vec2D& other) {
    this->vec2D.first /= other.vec2D.first;
    this->vec2D.second /= other.vec2D.second;
    return *this;
}

Vec2D& Vec2D::operator*=(int scalar) {
    this->vec2D.first *= scalar;
    this->vec2D.second *= scalar;
    return *this;
}

Vec2D& Vec2D::operator/=(int scalar) {
    this->vec2D.first /= scalar;
    this->vec2D.second /= scalar;
    return *this;
}

Vec2D Vec2D::operator*(const Vec2D& other) {
    return Vec2D(this->vec2D.first * other.vec2D.first, this->vec2D.second * other.vec2D.second);
}

Vec2D Vec2D::operator/(const Vec2D& other) {
    return Vec2D(this->vec2D.first / other.vec2D.first, this->vec2D.second / other.vec2D.second);
}

Vec2D Vec2D::operator*(int scalar) {
    return Vec2D(this->vec2D.first * scalar, this->vec2D.second * scalar);
}

Vec2D Vec2D::operator/(int scalar) {
    return Vec2D(this->vec2D.first / scalar, this->vec2D.second / scalar);
}

Vec2D Vec2D::operator-() {
    return Vec2D(-this->vec2D.first, -this->vec2D.second);
}

Vec2D Vec2D::operator+() {
    return Vec2D(this->vec2D.first, this->vec2D.second);
}

Vec2D& Vec2D::operator++() {
    this->vec2D.first++;
    this->vec2D.second++;
    return *this;
}

Vec2D& Vec2D::operator--() {
    this->vec2D.first--;
    this->vec2D.second--;
    return *this;
}

bool Vec2D::operator==(const Vec2D& other) {
    return this->vec2D.first == other.vec2D.first && this->vec2D.second == other.vec2D.second;
}

bool Vec2D::operator!=(const Vec2D& other) {
    return this->vec2D.first != other.vec2D.first || this->vec2D.second != other.vec2D.second;
}

bool Vec2D::operator<(const Vec2D& other) {
    return this->vec2D.first < other.vec2D.first && this->vec2D.second < other.vec2D.second;
}

bool Vec2D::operator>(const Vec2D& other) {
    return this->vec2D.first > other.vec2D.first && this->vec2D.second > other.vec2D.second;
}

bool Vec2D::operator<=(const Vec2D& other) {
    return this->vec2D.first <= other.vec2D.first && this->vec2D.second <= other.vec2D.second;
}

bool Vec2D::operator>=(const Vec2D& other) {
    return this->vec2D.first >= other.vec2D.first && this->vec2D.second >= other.vec2D.second;
}

int Vec2D::getX() {
    return this->vec2D.first;
}

int Vec2D::getY() {
    return this->vec2D.second;
}   

Vec2D::~Vec2D() {
}

void Vec2D::setX(int x) {
    this->vec2D.first = x;
}

void Vec2D::setY(int y) {
    this->vec2D.second = y;
}   


