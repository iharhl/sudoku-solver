#include <iostream>
#include <iomanip>
#include "types.hpp"
#include "constants.hpp"
#include "generate.hpp"
#include "solve.hpp"

void printOut(Vector2& grid){
    for (int x{0}; x < SIZE; x++){
        for (int y{0}; y < SIZE; y++){
            std::cout << " " << std::setw(2) << grid[x][y] << " ";
        }
        std::cout << std::endl;
    }
}

int main(){

    // Initialize sudoku grid
    Vector2 grid;

    // Partially fill the grid
    generateGrid(grid);

    // Solve the sudoku
    solve(grid);

    // Print out the grid
    printOut(grid);

    return 0;
}