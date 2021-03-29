#pragma once
#include "Figure.hpp"




class Triangle : public Figure {
public:
    Triangle(int x1, int y1, int x2, int y2, int x3, int y3);
    ~Triangle() = default;

    float Perimeter() const override {

    };
    float Square() const override {

    };

private:
    int findCoordinate(std::vector<int>& coordinateVec) {
        for (int i = 0; i < coordinateVec.size(); ++i) {

        }
    }

private:
    std::vector<std::pair<int, int>> coordinate;


};


/* Периметр
 * 1) надо найти стороны по гипотенуза^2 = катет^2 + катет^2
 * 2) P = a+b+c
 *
 * Площадь
 * 1) найти полупериметр - p = 1/2 (a+b+c)
 * 2) Sтр = корень квадратный p(p-a)(p-b)(p-c)
 */

/// написать функцию рассчета гипотенузы
/// написать функцию рассчета разницы м/у точками