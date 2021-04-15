#pragma once
#include "Figure.hpp"
#include "Formulae.hpp"

class Rectangle : public Figure {
public:
    Rectangle(Point a, Point b, Point c, Point d);
    ~Rectangle() = default;

    float Perimeter() const override;
    float Square() const override;

private:
    Point m_a;
    Point m_b;
    Point m_c;
    Point m_d;
};


/*! Периметр
 * 1) P = 2a+2b, где a,b - стороны
 *
 * Площадь
 * 1) S = ab
 */
