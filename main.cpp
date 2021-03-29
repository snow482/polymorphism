#include "inc/Figure.hpp"
#include <fstream>
#include <cmath>

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
