#include "../inc/Triangle.hpp"



Triangle::Triangle(Point t1, Point t2, Point t3)
: m_p1(t1), m_p2(t2), m_p3(t3)
{}

float Triangle::Perimeter() const {
    float perimeterValue = 0;
    perimeterValue = coordinatesSubstraction(m_p1, m_p2, m_p3);
    return perimeterValue;
}
float Triangle::Square() const {
    float squareValue = 0;


    return squareValue;
}

