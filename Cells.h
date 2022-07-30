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