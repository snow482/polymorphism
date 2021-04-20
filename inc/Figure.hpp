#pragma once
#define _USE_MATH_DEFINES
#include <cstdint>
#include <math.h>
#include <memory>
#include <vector>
#include "Formulae.hpp"

enum class FigureType : uint8_t {
    Unknown = 0,
    Triangle = 1,
    Rectangle = 2,
    Circle = 3,
    Ellipse = 4
};
FigureType FigureTypeCast(int t);

// Figure - базовый класс, другие фигуры будут наследоваться от него
class Figure {
public:
    virtual ~Figure() = default;
    [[nodiscard]] virtual float Perimeter() const = 0;
    [[nodiscard]] virtual float Square() const = 0;

    //Factory method pattern (mutant version)
    static std::vector<std::shared_ptr<Figure>> fileExtractor(const std::string& filePath);
};