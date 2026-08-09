#pragma once
#include <cmath>

class Vec2{
    public:
        Vec2(float x, float y);
        float x const;
        float y const;
        float length () const;

        void setX(float x);
        void setY(float y);
        Vec2 plus(const Vec2&) const;


    private:
        float m_x;
        float m_y;
};