cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(TareaSTL)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Agregar el ejecutable
add_executable(ejemplosSTL ejemplosSTL.cpp)