#include "inc/Figure.hpp"
#include <fstream>



/*!
 * точка {x, y}
 * для треугольника - 3 точки
 * для прямоугольника (квадрата) - 4 точки
 * круг - 1 точка и радиус
 */

/// чтение файла и запись значений из файла в vector<pair<float, float>>
std::vector<std::pair<float, float>> fileReading(const std::string& filePath) {
    std::ifstream input {filePath};
    int n = 0;
    char ch;
    input >> n;
    std::vector<float> vecForReading;
    std::vector<std::pair<float, float>> vec;
    if(input.bad()) {
        std::cout << "fail is broken";
    }
    else {
        switch(n) {
            case 1:
                Point t[3];
                input >> t[0].x >> t[0].y >> t[1].x >> t[1].y >> t[2].x >> t[2].y;
                break;
            case 2:
                Point r[4];
                input >> r[0].x >> r[0].y >> r[1].x >> r[1].y >> r[2].x >> r[2].y >> r[3].x >> r[3].y;
                break;
            case 3:

                break;
            case 4:
                break;
        }
        while (input.get(ch)) {
            vecForReading.push_back(ch);
        }
        for (int i = 0; i < vecForReading.size(); ++i) {
            vec.emplace_back(std::make_pair(i, i+1));
        }
        return vec;
    }
}

int main() {
    /// положили все в векторПар, чтобы далее с ним работать 
    std::vector<std::pair<float, float>> pairsOfNumbers = fileReading("numbers.txt");

    /// 3 раза вызвать функцию coordinatesSubstraction



    return 0;
}


/*!
 *
 * 1.       Создание базового класса Figure
 * 1.1      Функция вычисления длины стороны Func()
 * 1.2      Добавление виртуальных методов Perimeter(), Square()
 *
 * 2.       Создание наследника, класс Triangle (остальные аналогично)
 * 2.1      Переопределение методов из Figure
 * 2.2      Нахождение длин сторон треугольника, посредством Func()
 *
 *
 * 3.       Считывание из файла и сохранение значений точек в вектор
 * 3.1      Создание объекта
 *
 *
 * */











































