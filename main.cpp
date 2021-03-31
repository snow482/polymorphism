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
                for (int i = 0; i <= 6; ++i) {
                    input >> vecForReading[i];
                }
                break;
            case 2:
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
