#include "Functions.h"
using namespace std;



int main() {
    int cols=61, rows=31;
    Cell** matrix;
    //cout << "number of rows: ";
    //cin >> rows;
    //cout << "number of columns: ";
    //cin >> cols;
    //if (rows % 2 == 0)
    //    rows++;
    //if (cols % 2 == 0)
    //    cols++;
    matrix = new Cell * [rows];
    for (int i = 0; i < rows; i++) {
        matrix[i] = new Cell[cols];
    }
    MakeTemp(matrix, rows, cols);
    GenLabyrinth(matrix, rows, cols);
    MakeExit(matrix, rows, cols);
    Output(matrix, rows, cols);
}