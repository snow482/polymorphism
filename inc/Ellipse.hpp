#pragma once
#include "Figure.hpp"

class Ellipse : public Figure {

    ~Ellipse() = default;
};

/* Периметр
 * 1) P = 4 * (pi*ab + (a-b)) / a+b
 *
 * Площадь
 * 1) S = pi*a*b
 */
