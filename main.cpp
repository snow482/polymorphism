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

class Triangle : public Figure {
public:
    Triangle() = delete;
    ~Triangle() = default;
    Triangle(Point a, Point b, Point c)
            : m_a(a), m_b(b), m_c(c)
    {}
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

class Rectangle : public Figure {
public:
    Rectangle(Point a, Point b, Point c, Point d)
    : m_a(a), m_b(b), m_c(c), m_d(d)
    {}

    ~Rectangle()= default;
    float Perimeter() const override {
        float ab = gipotenuza(m_a, m_b);
        float bc = gipotenuza(m_b, m_c);
        float cd = gipotenuza(m_c, m_d);
        float ad = gipotenuza(m_a, m_d);
        if(ab == bc == cd == ad) {
            return 4*ab;
        }
        else{
            return 2*ab + 2*bc;
        }


    };
    float Square() const override {
        float ab = gipotenuza(m_a, m_b);
        float bc = gipotenuza(m_b, m_c);

        return ab * bc;
    }

private:
    Point m_a;
    Point m_b;
    Point m_c;
    Point m_d;

};


/// Колличество фигур
///     открыть файл
std::vector<Figure*> fileReading(const std::string& filePath) {
    std::ifstream input {filePath};
    /*if(!input.good()) {
        return {};
    }*/
    std::vector<Figure*> figure;

    while (!input.eof()) {
        ///        прочитать файл
        if(input.bad()) {
            std::cout << "Error" << std::endl;
        }
        else {
            int n;
            input >> n >> std::ws;
            switch (n)
            {
                case 1:
                {
                    Point t[3];
                    input >> t[0].x >> t[0].y >> t[1].x >> t[1].y >> t[2].x >> t[2].y;
                    auto ptr = new Triangle(t[0], t[1], t[2]);
                    figure.push_back(ptr);
                }
                break;
                case 2:
                {
                    Point r[4];
                    input >> r[0].x >> r[0].y >> r[1].x >> r[1].y >>
                             r[2].x >> r[2].y >> r[3].x >>r[3].y;
                    auto ptr = new Rectangle(r[0], r[1], r[2], r[3]);
                    figure.push_back(ptr);
                }
                break;
                /*case 3:
                break;
                case 4:
                break;*/
                default:
                    std::cout << "something wrong" << std::endl;
            }
        }
    }
    return figure;
}


std::vector<float> sumOfAll ( std::vector<Figure*> figures) {
    float Psum = 0;
    float Ssum = 0;
    std::vector<float> sum;
    for (auto& it : figures) {
        Psum += it->Perimeter();
        Ssum += it->Square();
    }
    sum.push_back(Psum);
    sum.push_back(Ssum);

    return sum;
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

    auto numbers = fileReading("input.txt");
    auto sumVec = sumOfAll(numbers);
    float Psum = 0;
    float Ssum = 0;
    for (int i = 0; i < sumVec.size(); ++i) {
        Psum = sumVec[0];
        Ssum = sumVec[1];
    }

    std::cout << "Perimeter sum: " << Psum << std::endl;
    std::cout << "Square sum: " << Ssum << std::endl;


    /// 3 раза вызвать функцию coordinatesSubstraction



    return 0;
}








































