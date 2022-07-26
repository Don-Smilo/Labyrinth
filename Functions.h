#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Cells.h"

using namespace std;


void Output(Cell** matrix, unsigned int rows, unsigned int cols) {
    for (unsigned int i = 0; i < rows; i++) {
        for (unsigned int j = 0; j < cols; j++) {
            cout << matrix[i][j].GetSymbol() << ' ';
        }
        cout << endl;
    }
}

void MakeTemp(Cell** matrix, unsigned int rows, unsigned int cols) {
    for (unsigned int i = 0; i < rows; i++) {
        for (unsigned int j = 0; j < cols; j++) {
            if ((i % 2 != 0) && (j % 2 != 0)) {
                matrix[i][j].SetSymbol(' ');
            }
            else {
                matrix[i][j].SetSymbol('#');
            }
        }
    }
}

void RemoveWall(Cell** matrix, unsigned int i, unsigned int j) {
    matrix[i][j].SetSymbol(' ');
}

void MakeExit(Cell** matrix, unsigned int rows, unsigned int cols) {
    unsigned int pos = rand() % (cols - 3) + 2;
    if (pos % 2 == 0){
        RemoveWall(matrix, rows - 1, pos - 1);
    }
    else {
        RemoveWall(matrix, rows - 1, pos);
    }
}

void GenLabyrinth(Cell** matrix, unsigned int rows, unsigned int cols) {
    srand(time(0));
    unsigned int i, j;
    for (j = 1; j < cols - 3; j += 2) {
        RemoveWall(matrix, 1, j + 1);
    }
    unsigned int group = 0;
    for (i = 3; i < rows - 1; i += 2) { 
        for (j = 1; j < cols - 1; j += 2) {
            group++;
            if (j == cols - 2) {
                unsigned int pos = j - rand() % group;
                if (pos % 2 == 0) {
                    pos--;
                }
                RemoveWall(matrix, i - 1, pos);
                group = 0;
            }
            else {
                if (rand() % 2) {
                    RemoveWall(matrix, i, j + 1);
                }
                else {
                    unsigned int pos = j - rand() % group;
                    if (pos % 2 == 0) {
                        pos --;
                    }
                    RemoveWall(matrix, i - 1, pos);
                    group = 0;
                }
            }
        }
        group = 0;
    }
    MakeExit(matrix, rows, cols);
}
