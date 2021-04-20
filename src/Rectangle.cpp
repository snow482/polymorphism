#include <cassert>
#include "Rectangle.hpp"

Rectangle::Rectangle(Point a, Point b, Point c, Point d) {
    auto ab = hypotenuse(a,b);
    auto cd = hypotenuse(c,d);
    assert(ab == cd);
    m_a = ab;

    auto ac = hypotenuse(a,c);
    auto bd = hypotenuse(b,d);
    assert(ac == bd);
    m_b = ac;
}

float Rectangle::Perimeter() const {
    return 2.0f * (m_a + m_b);
};
float Rectangle::Square() const {
    return m_a * m_b;
}
