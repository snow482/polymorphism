#pragma once
#include "Figure.hpp"

class Rectangle : public Figure {
public:
    Rectangle(Point a, Point b, Point c, Point d);
    ~Rectangle() = default;

    float Perimeter() const override;
    float Square() const override;

private:
    float m_a;
    float m_b;
};
