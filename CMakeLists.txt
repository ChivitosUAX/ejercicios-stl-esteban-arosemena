cmake_minimum_required(VERSION 3.10)
project(ColeccionEjerciciosSTL)

set(CMAKE_CXX_STANDARD 11)

include_directories(
    matematicas
    geometria
    ciencias
    ciencias/física
)

add_executable(ColeccionEjerciciosSTL
        main.cpp
        matematicas/matematicas.cpp
        geometria/triangulo.cpp
        geometria/circulo.cpp
        ciencias/física/fisica.cpp
)