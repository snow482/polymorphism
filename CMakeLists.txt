cmake_minimum_required(VERSION 3.15)
project(polymorphism)

set(CMAKE_CXX_STANDARD 17)

add_executable(
        main.cpp
        Figure.hpp
        Figure.cpp
        Triangle.hpp
        Triangle.cpp
        Rectangle.hpp
        Rectangle.cpp
        Circle.hpp
        Circle.cpp
        Ellipse.hpp
        Ellipse.cpp)

