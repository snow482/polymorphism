#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>


// Figure - базовый класс, другие фигуры будут наследоваться от него
// есть S - площадь, P - периметр
// main() - взаимодействует с файлом input.txt, берет оттуда значения {x,y} для построения по координатам
// нужновывести сумму всех площадей и периметров всех фигур


class Figure {
public:

    virtual ~Figure() = default;
    virtual float Perimeter() const = 0;
    virtual float Square() const = 0;

private:
    float getPerimeter(float perimeter);
    float sumOfPerimeters(float trianglePerimeter,
                          float rectanglePerimeter,
                          float circlePerimeter,
                          float ellipsePerimeter);
    float sumOfSquares(float triangleSquare,
                       float rectangleSquare,
                       float circleSquare,
                       float ellipseSquare);

private:
    float m_perimeterSum = 0;
    float m_squareSum = 0;
};





