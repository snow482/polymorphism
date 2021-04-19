#include <cmath>
#include "Formulae.hpp"

float hypotenuse(Point a, Point b) {
    return sqrtf(powf(a.x-b.x, 2) + powf(a.y-b.y, 2));
}

