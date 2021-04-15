#include "../inc/Ellipse.hpp"

Ellipse::Ellipse(Point a, Point b, Point c)
    : m_a(a), m_b(b), m_c(c)
    {}
float Ellipse::Perimeter() const {
    float ab = gipotenuza(m_a, m_b);
    float ac = gipotenuza(m_a, m_c);
    float perimeter = (4 * (3.14f * ab * ac + (ab - ac))) / ab+ac;
    return perimeter;
/// P = (4 * (pi*a*b + (a-b))) / a+b
}
float Ellipse::Square() const {
    float ab = gipotenuza(m_a, m_b);
    float ac = gipotenuza(m_a, m_c);
    float square = 3.14f * ab * ac;
    return square;
}