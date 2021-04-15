#pragma once
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>



// Figure - базовый класс, другие фигуры будут наследоваться от него
// есть S - площадь, P - периметр
// main() - взаимодействует с файлом input.txt, берет оттуда значения {x,y} для построения по координатам
// нужновывести сумму всех площадей и периметров всех фигур

/*struct Point {
    float x, y;
};*/

/// Теорема Пифагора
/*inline float gipotenuza(Point a, Point b) {
    return sqrt(pow(a.x-b.x, 2) + pow(a.y-b.y, 2));
}*/

class Figure {
public:

    virtual ~Figure() = default;
    virtual float Perimeter() const = 0;
    virtual float Square() const = 0;

};





