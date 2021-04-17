#pragma once
#include "Figure.hpp"

class Triangle : public Figure {
public:
    Triangle(Point a, Point b, Point c);
    ~Triangle() = default;

    float Perimeter() const override;
    float Square() const override;

private:
  Point m_a;
  Point m_b;
  Point m_c;
};
