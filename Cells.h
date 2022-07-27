#pragma once

class Cell {
public:
	Cell() {
		symbol = '#';
	}


	void SetSymbol(char new_symbol) {
		symbol = new_symbol;
	}
	char GetSymbol() {
		return symbol;
	}


protected:
	char symbol;
};


class Row {
public:
	Row() {

	}
};

class Matrix {
public:

	Matrix(unsigned int rows, unsigned int cols) {
		this->rows = rows;
		this->cols = cols;
	}



	unsigned int rows, cols;
};