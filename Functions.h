#pragma once

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

typedef char cell;

void MakeMatr(cell** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = '#';
        }
    }
}

void Output(cell** matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j]<<' ';
        }
        cout << endl;
    }
}

void GenLabyrinth(cell** matrix, int rows, int cols) {
    int i = 1, j = 1;
    for (; i < rows - 1; i += 2) {
        for (; j < cols - 1; j += 2) {
        }
    }
}

void RemoveWallUp(cell** matrix, int i, int j) {
    matrix[i + 1][j] = ' ';
}

void RemoveWallDown(cell** matrix, int i, int j) {
    matrix[i - 1][j] = ' ';
}

void RemoveWalLeft(cell** matrix, int i, int j) {
    matrix[i][j - 1] = ' ';
}

void RemoveWallRight(cell** matrix, int i, int j) {
    matrix[i][j + 1] = ' ';
}
