#include "Vec2.hpp"

Vec2:Vec2(float x,float y): m_x(x), m_y(y) {}

float Vec2::x() const{
    return m_x;
}

float Vec2::y() const{
    return m_y;
}

void Vec2::setX(float x){
    m_x = x;
}

void Vec2:setY(float y){
    m_y = y;
}
