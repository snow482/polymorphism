cmake_minimum_required(VERSION 3.15)
project(polymorphism)

set(CMAKE_CXX_STANDARD 17)

set(TARGET_NAME figures)
set(SOURCES
    src/Formulae.cpp
    src/Figure.cpp
    src/Triangle.cpp
    src/Rectangle.cpp
    src/Circle.cpp
    src/Ellipse.cpp
    main.cpp)

set(INCLUDE
    inc/Formulae.hpp
    inc/Figure.hpp
    inc/Triangle.hpp
    inc/Rectangle.hpp
    inc/Circle.hpp
    inc/Ellipse.hpp)

add_executable( ${TARGET_NAME}
    ${INCLUDE}
    ${SOURCES})

target_include_directories(${TARGET_NAME} PUBLIC "inc")
