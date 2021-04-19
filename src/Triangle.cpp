#include <cmath>
#include "Triangle.hpp"

Triangle::Triangle(Point a, Point b, Point c)
    : m_a(a), m_b(b), m_c(c)
{}

float Triangle::Perimeter() const {
    float ab = hypotenuse(m_a, m_b);
    float bc = hypotenuse(m_b, m_c);
    float ac = hypotenuse(m_a, m_c);

    //P = a+b+c
    return ab+bc+ac;
}

float Triangle::Square() const {
    //half perimeter = 1/2 (a+b+c)
    float halfPerimeter = Perimeter() / 2;

    //S(triangle) = square_root p(p-a)(p-b)(p-c)
    return sqrt(
            halfPerimeter *
            (halfPerimeter - hypotenuse(m_a, m_b)) *
            (halfPerimeter - hypotenuse(m_b, m_c)) *
            (halfPerimeter - hypotenuse(m_a, m_c)) );
}

