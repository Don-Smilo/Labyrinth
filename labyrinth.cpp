#include <ctime>
#include <cstdlib>
#include "Functions.h"
using namespace std;



int main() {
    int cols, rows;
    cell** matrix;
    srand(time(0));
    cout << "number of rows: ";
    cin >> rows;
    cout << "number of columns: ";
    cin >> cols;
    if (rows % 2 == 0)
        rows++;
    if (cols % 2 == 0)
        cols++;
    matrix = new cell* [rows];
    for (int i = 0; i < cols; i++) {
        matrix[i] = new cell[cols];
    }
    MakeMatr(matrix, rows, cols);
    Output(matrix, rows, cols);
}