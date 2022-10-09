cmake_minimum_required(VERSION 3.12)
project(Sudoku-solver VERSION 0.1.0)

include_directories(${PROJECT_SOURCE_DIR}/src)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES src/main.cpp 
            src/generate.cpp
            src/generate.hpp
            src/types.hpp)

add_executable(main ${SOURCES})