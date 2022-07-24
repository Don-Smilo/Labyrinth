#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

void MakeMatr(char** matrix, int rows, int cols) {
    if (rows % 2 == 0)
        rows++;
    if (cols % 2 == 0)
        cols++;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j]='#';
        }
    }
}

void Output(char** matrix, int rows, int cols) {
    for(int i = 0; i<rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j];
        }
        cout << endl;
    }
}

void GenLabyrinth(char** matrix, int rows, int cols) {

}



int main() {
    int cols, rows;
    char** matrix;
    srand(time(0));
    cout << "number of rows: ";
    cin >> rows;
    cout << "number of columns: ";
    cin >> cols;
    matrix = new char* [rows];
    for (int i = 0; i < cols; i++) {
        matrix[i] = new char[cols];
    }
    MakeMatr(matrix, rows, cols);
    Output(matrix, rows, cols);
}