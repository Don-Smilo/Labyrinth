#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Cells.h"

using namespace std;


void Output(Cell** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j].GetSymbol() << ' ';
        }
        cout << endl;
    }
}

void MakeTemp(Cell** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if ((i % 2 != 0) && (j % 2 != 0)) {
                matrix[i][j].SetSymbol(' ');
            }
            else {
                matrix[i][j].SetSymbol('#');
            }
        }
    }
}

void RemoveWallUp(Cell** matrix, int i, int j) {
    matrix[i - 1][j].SetSymbol(' ');
}

void RemoveWallRight(Cell** matrix, int i, int j) {
    matrix[i][j + 1].SetSymbol(' ');
}

//int CurrentGroup(Cell* row, int num, int group) {
//    while ((num > 1)&&(row[num-1].GetGroup()==row[num].GetGroup())) {
//        num--;
//    }
//}

void GenLabyrinth(Cell** matrix, unsigned int rows, unsigned int cols) {
    srand(time(0));
    unsigned int i, j;
    for (j = 1; j < cols - 3; j += 2) {
        RemoveWallRight(matrix, 1, j);
    }
    unsigned int group = 1;
    for (i = 3; i < rows - 1; i += 2) { 
        for (j = 1; j < cols - 1; j += 2) {
            group++;
            if (rand() % 2) {
                RemoveWallRight(matrix, i, j);
            }
            else {
                RemoveWallUp(matrix, i, (j - rand() % group));
                group = 0;
            }
            group = 0;
        }
    }
}
