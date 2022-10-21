#ifndef CHECK_HPP_
#define CHECK_HPP_

#include "types.hpp"
#include "constants.hpp"

int isValid(int row, int col, int num, const Vector2& grid);

int isValidRow(int row, int num, const Vector2& grid);
int isValidCol(int col, int num, const Vector2& grid);
int isValidBox(int row, int col, int num, const Vector2& grid);

#endif