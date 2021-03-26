#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>


// Figure - базовый класс, другие фигуры будут наследоваться от него
// есть S - площадь, P - периметр
// main() - взаимодействует с файлом input.txt, берет оттуда значения {x,y} для построения по координатам
// нужновывести сумму всех площадей и периметров всех фигур


/// написать функцию рассчета стороны (по 2 точкам)



float sumOfPerimeters(float trianglePerimeter,
                      float rectanglePerimeter,
                      float circlePerimeter,
                      float ellipsePerimeter);
float sumOfSquares(float triangleSquare,
                   float rectangleSquare,
                   float circleSquare,
                   float ellipseSquare);


class Figure {
public:

    virtual ~Figure() = default;
    virtual void Perimeter() const = 0;
    virtual void Square() const = 0;


};





