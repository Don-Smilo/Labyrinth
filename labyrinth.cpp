#include "Functions.h"
using namespace std;



int main() {
    int cols=51, rows=51;
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
    for (int i = 0; i < cols; i++) {
        matrix[i] = new Cell[cols];
    }
    MakeTemp(matrix, rows, cols);
    GenLabyrinth(matrix, rows, cols);
    Output(matrix, rows, cols);
}
