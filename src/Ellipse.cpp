#include "Ellipse.hpp"

Ellipse::Ellipse(Point a, Point b, Point c)
    : m_a(a), m_b(b), m_c(c)
    {}
float Ellipse::Perimeter() const {
    float ab = hypotenuse(m_a, m_b);
    float ac = hypotenuse(m_a, m_c);

/// P = (4 * (pi*a*b + (a-b))) / a+b
    return (4.0f * (static_cast<float>(M_PI) * ab * ac + (ab - ac))) / ab+ac;
}
float Ellipse::Square() const {
    float ab = hypotenuse(m_a, m_b);
    float ac = hypotenuse(m_a, m_c);
    return static_cast<float>(M_PI) * ab * ac;
}