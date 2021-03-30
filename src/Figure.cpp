#include "../inc/Figure.hpp"

std::vector<std::pair<float, float>> coordinatesSubstraction(Point p1, Point p2) {
    float x = 0;
    std::vector<std::pair<float, float>> vec;
    vec.emplace_back(std::make_pair(p1.x-p2.x, p1.y - p2.y));
    return vec;
}
/// принятие вектора пар, возврат длины гипотенузы
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