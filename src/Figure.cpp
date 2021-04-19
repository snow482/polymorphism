#include <fstream>
#include <stdexcept>

#include "Figure.hpp"
#include "Triangle.hpp"
#include "Rectangle.hpp"
#include "Circle.hpp"
#include "Ellipse.hpp"

namespace {
    std::shared_ptr<Triangle> ReadTriangle(std::ifstream &input) {
        Point a, b, c;
        input >> a.x >> a.y
              >> b.x >> b.y
              >> c.x >> c.y;
        return std::make_shared<Triangle>(a, b, c);
    }

    std::shared_ptr<Rectangle> ReadRectange(std::ifstream& input) {
        Point a,b,c,d;
        input >> a.x >> a.y
              >> b.x >> b.y
              >> c.x >> c.y
              >> d.x >> d.y;
        return std::make_shared<Rectangle>(a,b,c,d);
    }

    std::shared_ptr<Circle> ReadCircle(std::ifstream& input) {
        Point c, p;
        input >> c.x >> c.y
              >> p.x >> p.y;
        return std::make_shared<Circle>(c,p);
    }

    std::shared_ptr<Ellipse> ReadEllipse(std::ifstream& input) {
        Point c1,c2,p;
        input >> c1.x >> c1.y
              >> c2.x >> c2.y
              >> p.x  >> p.y;
        return std::make_shared<Ellipse>(c1,c2,p);
    }
}

FigureType FigureTypeCast(int t) {
    if (t<1 || t>4)
        return FigureType::Unknown;
    return static_cast<FigureType>(t);
}

std::vector<std::shared_ptr<Figure>> Figure::fileExtractor(const std::string& filePath) {
    std::ifstream input {filePath};
    if(!input.good())
        throw std::runtime_error{"file not open"};

    std::vector<std::shared_ptr<Figure>> figures;
    while (!input.eof()) {
        int type;
        input >> type;

        switch (FigureTypeCast(type)) {
            case FigureType::Triangle:
                figures.push_back(ReadTriangle(input));
                break;
            case FigureType::Rectangle:
                figures.push_back(ReadRectange(input));
                break;
            case FigureType::Circle:
                figures.push_back(ReadCircle(input));
                break;
            case FigureType::Ellipse:
                figures.push_back(ReadEllipse(input));
                break;
            default:
                throw std::runtime_error{"enexpected figure"};
        }
    }
    return figures;
}
