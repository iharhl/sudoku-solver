#include "solve.hpp"

/* Finds an entry in grid
that is still unassigned */
bool notAssigned(const Vector2& grid, int& row, int& col){
    for (row = 0; row < SIZE; row++){
        for (col = 0; col < SIZE; col++){
            if (grid[row][col] == NONE){
                return true;
            }
        }
    }
    return false;
}

/* Takes a partially filled-in grid and attempts
to assign values to all unassigned locations in
such a way to meet the requirements for
Sudoku solution (non-duplication across rows,
columns, and boxes) */
bool solve(Vector2& grid){

    int row, col;

    if (!notAssigned(grid, row, col)){
        return true;
    }

    // put number from 1 to 9 in the cell
    for (int k{1}; k <= 9; k++){

        // check if the number is valid
        if (isValid(row, col, k, grid)){

            // if valid -> assign
            grid[row][col] = k;

            // recurse (return on success)
            if (solve(grid)){
                return true;
            }

            // else -> unassign the cell
            grid[row][col] = NONE;
        }
    }

    // backtrack
    return false;
}