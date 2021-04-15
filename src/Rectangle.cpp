#include "../inc/Rectangle.hpp"

Rectangle::Rectangle(Point a, Point b, Point c, Point d)
    : m_a(a), m_b(b), m_c(c), m_d(d)
    {}

float Rectangle::Perimeter() const {
    float ab = gipotenuza(m_a, m_b);
    float bc = gipotenuza(m_b, m_c);
    float cd = gipotenuza(m_c, m_d);
    float ad = gipotenuza(m_a, m_d);
    if(ab == bc == cd == ad) {
        return 4*ab;
    }
    else {
        return 2*ab + 2*bc;
    }
};
float Rectangle::Square() const {
    float ab = gipotenuza(m_a, m_b);
    float bc = gipotenuza(m_b, m_c);

    return ab * bc;
}
