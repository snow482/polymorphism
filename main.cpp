#include <iostream>
#include <iomanip>
#include <algorithm>
#include <vector>
#include <string>
#include <cmath>
#include <fstream>


struct Point {
    int x, y = 0;
};

/// Колличество фигур
///     открыть файл
std::vector<float> fileReading(const std::string& filePath) {
std::ifstream input {filePath};
int n = 0;
char ch;
input >> n;

///        прочитать файл
if(input.bad()) {
    std::cout << "Error" << std::endl;
}
else {
    switch (n)
    {
        case 1:
            Point t[3];
            input >> t[0].x >> t[0].y >> t[1].x >> t[1].y >> t[2].x >> t[2].y;
            break;
        /*case 2:
            break;
        case 3:
            break;
        case 4:
            break;*/
    }
    }
}





///
/// SumP = 0; SumS = 0;
/// for(int i = 0; i < кол-во
///    Читаем фигуру
///    P, S - вычислить
///    SumP += P
///    SumS += S
/// вывод SumP,SumS

/*!
 * Прочитать фигуру
 *     прочитать тип фигуры - t
 *     if (t == triangle)
 *         Прочитать 3 точки (а, b, c)
 *         Создать triangle из a, b, c (new triangle(a,b,c))
 *         Вернуть triangle
 *     if  (t == rectangle)
 *         ... (как в triangle)
 *
 */

class Figure {
public:
    

private:


};

class Triangle : Figure {
public:


private:


};


/*!
 * Figure
 *     P
 *     S
 *     print() // debug
 *
 * triangle : Figure
 *     Constructor triangle (a,b,c)
 *     P() { }
 *     S() { }
 *     print()
 *
 * private:
 * a,b,c
 */



/*!
 * точка {x, y}
 * для треугольника - 3 точки
 * для прямоугольника (квадрата) - 4 точки
 * круг - 1 точка и радиус
 */

/// чтение файла и запись значений из файла в vector<pair<float, float>>
/*std::vector<std::pair<float, float>> fileReading(const std::string& filePath) {
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
}*/

int main() {
    /// положили все в векторПар, чтобы далее с ним работать 
    /*std::vector<std::pair<float, float>> pairsOfNumbers = fileReading("numbers.txt");*/

    /// 3 раза вызвать функцию coordinatesSubstraction


    return 0;
}








































