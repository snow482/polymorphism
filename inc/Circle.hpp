#pragma once
#include "Figure.hpp"
#include "Formulae.hpp"

class Circle : public Figure {
public:
    Circle(Point a, Point b);
    ~Circle() = default;

    float Perimeter() const override;
    float Square() const override;

private:
    Point m_a;
    Point m_b;
};



/*! Периметр
 * 1) P = 2*pi*r или pi*d
 *
 * Площадь
 * 1) S = pi*r
 */
