#include "../inc/Formulae.hpp"
#include <cmath>

float gipotenuza(Point a, Point b) {
    return sqrt(pow(a.x-b.x, 2) + pow(a.y-b.y, 2));
}

