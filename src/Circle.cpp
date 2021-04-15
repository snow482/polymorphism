#include "../inc/Circle.hpp"

Circle::Circle(Point a, Point b)
    : m_a(a), m_b(b)
    {}

float Circle::Perimeter() const {
    float ab = gipotenuza(m_a, m_b);
    float perimeter = ab * 2 * 3.14;
    return perimeter;
}
float Circle::Square() const {
    float ab = gipotenuza(m_a, m_b);
    float square = 3.14f * ab;
    return square;
}