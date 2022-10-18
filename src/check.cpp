#include "check.hpp"

/* Returns a boolean which indicates whether it will 
be legal to assign num to the given location. */
int isValid(int row, int col, int num, Vector2& grid){

    int rowValid = isValidRow(row, num, grid);
    int colValid = isValidCol(col, num, grid);
    int boxValid = isValidBox(row, col, num, grid);

    return (rowValid && colValid && boxValid);
}

// Checks for duplicate in the row
int isValidRow(int row, int num, Vector2& grid){
    for (int x{0}; x < SIZE; x++){
        if(grid[row][x] == num){
            return false;
        }
    }
    return true;
};

// Checks for duplicate in the column
int isValidCol(int col, int num, Vector2& grid){
    for (int x{0}; x < SIZE; x++){
        if(grid[x][col] == num){
            return false;
        }
    }
    return true;
};

// Checks for duplicate in the box
int isValidBox(int row, int col, int num, Vector2& grid){

    // Start (row,col) for 3x3 box
    int startRow = row - row % 3;
    int startCol = col - col % 3;

    for (int i{0}; i < 3; i++){
        for (int j{0}; j < 3; j++){
            if (grid[i+startRow][j+startCol] == num){
                return false;
            }
        }
    }
    return true;    
};