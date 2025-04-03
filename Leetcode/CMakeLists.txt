cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(Leetcode)

# Establecer el estándar de C++
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Agregar el ejecutable
add_executable(twoSum twoSum.cpp)

# Agregar el ejecutable
add_executable(addStrings addStrings.cpp)

# Agregar el ejecutable
add_executable(validSudoku validSudoku.cpp)

# Agregar el ejecutable
add_executable(designParking DesignParking.cpp)