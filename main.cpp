#include <iostream>
#include <functional>
#include "Figure.hpp"

using Extractor = std::function<float(const std::shared_ptr<Figure>&)>;
float Accumulate(const std::vector<std::shared_ptr<Figure>>& figures, const Extractor& ext) {
    float ans = 0;
    for(const auto& f : figures)
        ans+=ext(f);

    return ans;
}

int main(int argc, char* argv[]) {
    try {
        auto numbers = Figure::fileExtractor("input.txt");
        float pSum = Accumulate(numbers, [](const std::shared_ptr<Figure>& f) {return f->Perimeter();});
        float sSum = Accumulate(numbers, [](const std::shared_ptr<Figure>& f) {return f->Square();});

        std::cout << "Perimeter sum: " << pSum << std::endl;
        std::cout << "Square sum: " << sSum << std::endl;
    } catch (const std::exception& e) {
        std::cout << e.what() << std::endl;
    } catch (...) {
        std::cout << "unexpected exception type" << std::endl;
    }

    return 0;
}








































