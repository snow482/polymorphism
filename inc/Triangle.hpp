#pragma once
#include "Figure.hpp"
#include "Formulae.hpp"

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


/*! Периметр
 * 1) надо найти стороны по гипотенуза^2 = катет^2 + катет^2
 * 2) P = a+b+c
 *
 * Площадь
 * 1) найти полупериметр - p = 1/2 (a+b+c)
 * 2) Sтр = корень квадратный p(p-a)(p-b)(p-c)
 */

/// написать функцию рассчета гипотенузы
/// написать функцию рассчета разницы м/у точками