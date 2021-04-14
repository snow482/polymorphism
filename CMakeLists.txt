cmake_minimum_required(VERSION 3.15)
project(polymorphism)

set(CMAKE_CXX_STANDARD 17)

add_executable( polymorphism
        inc/Figure.hpp
        src/Figure.cpp
        inc/Triangle.hpp
        src/Triangle.cpp
        inc/Rectangle.hpp
        src/Rectangle.cpp
        inc/Circle.hpp
        src/Circle.cpp
        inc/Ellipse.hpp
        src/Ellipse.cpp
        main.cpp
        )

