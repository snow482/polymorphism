#include "Circle.hpp"
#include <cmath>

Circle::Circle(Point a, Point b)
    : m_point(a), m_radius(b)
{}

float Circle::Perimeter() const {
    //P = 2*pi*r или pi*d
    return 2.0f * static_cast<float>(M_PI) * hypotenuse(m_point, m_radius);
}
float Circle::Square() const {
    //S = pi*r
    return static_cast<float>(M_PI) * hypotenuse(m_point, m_radius);
}