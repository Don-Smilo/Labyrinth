#include "Functions.h"
using namespace std;



int main() {
    int cols = 61, rows = 31;
    Cell** matrix;
    matrix = new Cell * [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new Cell[cols];
    }
    MakeTemp(matrix, rows, cols);
    GenLabyrinth(matrix, rows, cols);
    Output(matrix, rows, cols);
    system("pause");
}