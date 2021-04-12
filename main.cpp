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

float gipotenuza(Point a, Point b) {
    return sqrt(pow(a.x-b.x, 2) + pow(a.y-b.y, 2));
}

class Figure {
public:
   virtual float Perimeter() const = 0;
   virtual float Square() const = 0;
};

class Triangle : Figure {
public:
    Triangle(Point a, Point b, Point c)
            : m_a(a), m_b(b), m_c(c)
    {}
    ~Triangle() = default;
    float Perimeter() const override {
        float ab = gipotenuza(m_a, m_b);
        float bc = gipotenuza(m_b, m_c);
        float ac = gipotenuza(m_a, m_c);
        float trianglePerimeter = ab+bc+ac;

        return trianglePerimeter;
    }

    float Square() const override {
        float halfPerimeter = Perimeter() / 2;
        float triangleSquare = sqrt(halfPerimeter*((halfPerimeter - gipotenuza(m_a, m_b))*
                                                       (halfPerimeter - gipotenuza(m_b, m_c))*
                                                        (halfPerimeter - gipotenuza(m_a, m_c))));
        return triangleSquare;
    }
    /// Sтр = корень квадратный p(p-a)(p-b)(p-c)
private:
    Point m_a;
    Point m_b;
    Point m_c;
};



/// Колличество фигур
///     открыть файл
std::vector<Figure*> fileReading(const std::string& filePath) {
    std::ifstream input {filePath};
    int n = 0;
    char ch;
    input >> n;

    std::vector<Figure*> figure;
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
    return figure;
}
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

int main() {
    /// положили все в векторПар, чтобы далее с ним работать 
    auto numbers = fileReading("numbers.txt");

    /// 3 раза вызвать функцию coordinatesSubstraction



    return 0;
}








































