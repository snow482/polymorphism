#pragma once
#include "Figure.hpp"

class Ellipse : public Figure {
public:
    Ellipse(Point a, Point b, Point c);
    ~Ellipse() = default;

    float Perimeter() const override;
    float Square() const override;

private:
    Point m_a;
    Point m_b;
    Point m_c;

};

/*! Периметр
 * 1) P = 4 * (pi*a*b + (a-b)) / a+b
 *
 * Площадь
 * 1) S = pi*a*b
 */
