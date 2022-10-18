cmake_minimum_required(VERSION 3.12)
project(Sudoku-solver VERSION 1.0.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES src/main.cpp 
            src/generate.cpp
            src/check.cpp
            src/solve.cpp
            src/generate.hpp
            src/check.hpp
            src/solve.hpp
            src/constants.hpp
            src/types.hpp)

add_executable(main ${SOURCES})