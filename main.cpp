#include "inc/Figure.hpp"
#include <fstream>
#include <cmath>

/// вычитание из одной координаты, другой и возвращение значения в виде pair
std::vector<std::pair<float, float>> coordinatesSubstraction(std::vector<std::pair<float, float>> coordinatesVec) {
    std::vector<std::pair<float, float>> coordinateForPithagoras;
    for (int i = 0; i < coordinatesVec.size(); ++i) {
        for (int j = 0; j < coordinatesVec.size(); ++j) {
            coordinateForPithagoras[j].first = coordinatesVec[j].first - coordinatesVec[j+1].first;
            coordinateForPithagoras[j].second = coordinatesVec[j].second - coordinatesVec[j+1].second;
        }
    }
    return coordinateForPithagoras;
}

/// расчет сторон по теореме Пифагора и запись значений в вектор
std::vector<float> PithagorasFunction (std::vector<std::pair<float, float>> vec) {
    float legLength = 0;
    std::vector<float> figureLegLengths;
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec.size(); ++j) {
            legLength = static_cast<float>(sqrt(pow(vec[j].first, 2) + pow(vec[j].second, 2)));
            figureLegLengths.push_back(round(legLength * 10));
        }
    }
    return figureLegLengths;
}
/*!
 * точка {x, y}
 * для треугольника - 3 точки
 * для прямоугольника (квадрата) - 4 точки
 * круг - 1 точка и радиус
 */

/// чтение файла и запись значений из файла в vector<pair<float, float>>
std::vector<std::pair<float, float>> fileReading(const std::string& filePath) {
    std::ifstream input {filePath};
    char ch;
    std::vector<float> vecForReading;
    std::vector<std::pair<float, float>> vec;
    if(input.bad()) {
        std::cout << "fail is broken";
    }
    else {
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


    return 0;
}
