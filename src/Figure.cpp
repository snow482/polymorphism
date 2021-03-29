#include "../inc/Figure.hpp"

float coordinatesSubstraction(Point p) {
    float value = 0;

    return value;
}

std::vector<float> PithagorasFunction (std::vector<std::pair<float, float>> vec) {
    float legLength = 0;
    std::vector<float> figureLegLengths;
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = 0; j < vec.size(); ++j) {
            legLength = static_cast<float>(sqrt(pow(vec[j].first, 2) + pow(vec[j].second, 2)));
            figureLegLengths.push_back(round(legLength * 10));
        }
    }
    return figureLegLengths;
}

void Figure::Perimeter() const {

}