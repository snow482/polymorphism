#pragma once
#include "Figure.hpp"

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
