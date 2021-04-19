#pragma once
#include "Figure.hpp"

class Circle : public Figure {
public:
    Circle(Point a, Point b);
    ~Circle() override = default;

    float Perimeter() const override;
    float Square() const override;

private:
    Point m_point;
    Point m_radius;
};
