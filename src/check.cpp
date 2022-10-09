#include "check.hpp"

int isValid(int row, int col, int num, Vector2& grid){

    int rowValid = isValidRow(row, num, grid);
    int colValid = isValidCol(col, num, grid);
    int boxValid = isValidBox(row, col, num, grid);

    return (rowValid && colValid && boxValid);
}

int isValidRow(int row, int num, Vector2& grid){
    for (int x{0}; x <= 8; x++){
        if(grid[row][x] == num){
            return false;
        }
    }
    return true;
};

int isValidCol(int col, int num, Vector2& grid){
    for (int x{0}; x <= 8; x++){
        if(grid[x][col] == num){
            return false;
        }
    }
    return true;
};

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