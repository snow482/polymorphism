#include "../inc/Triangle.hpp"


Triangle::Triangle(Point a, Point b, Point c)
: m_a(a), m_b(b), m_c(c)
{}

float Triangle::Perimeter() const {
    float ab = gipotenuza(m_a, m_b);
    float bc = gipotenuza(m_b, m_c);
    float ac = gipotenuza(m_a, m_c);
    float perimeter = ab+bc+ac;

    return perimeter;
}

float Triangle::Square() const {
    float halfPerimeter = Perimeter() / 2;
    float square = sqrt(halfPerimeter*((halfPerimeter - gipotenuza(m_a, m_b))*
                                               (halfPerimeter - gipotenuza(m_b, m_c))*
                                               (halfPerimeter - gipotenuza(m_a, m_c))));
    return square;
}

