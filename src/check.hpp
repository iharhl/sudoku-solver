#ifndef CHECK_HPP_
#define CHECK_HPP_

#include "types.hpp"

int isValid(int row, int col, int num, Vector2& grid);
int isValidRow(int row, int num, Vector2& grid);
int isValidColumn(int col, int num, Vector2& grid);
int isValidBox(int row, int col, int num, Vector2& grid);

#endif