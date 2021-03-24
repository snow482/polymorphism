#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Ellipse.hpp"

// Figure - базовый класс, другие фигуры будут наследоваться от него
// есть S - площадь, P - периметр
// main() - взаимодействует с файлом input.txt, берет оттуда значения {x,y} для построения по координатам
// нужновывести сумму всех площадей и периметров всех фигур


class Figure {
public:
    Figure();
    void Perimeter(uint32_t a) {

    }


private:
    int a, b, c, d = 0;
    uint32_t m_perimeter = 0;
    uint32_t m_square = 0;

};





