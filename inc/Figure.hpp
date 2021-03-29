#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>


// Figure - базовый класс, другие фигуры будут наследоваться от него
// есть S - площадь, P - периметр
// main() - взаимодействует с файлом input.txt, берет оттуда значения {x,y} для построения по координатам
// нужновывести сумму всех площадей и периметров всех фигур


/// написать функцию рассчета стороны (по 2 точкам)





class Figure {
public:

    virtual ~Figure() = default;
    virtual float Perimeter() const = 0;
    virtual float Square() const = 0;

    float sumOf

};





