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

	void AddToGroup(int num) {
		group = num;
	}
	int GetGroup() {
		return group;
	}



protected:
	char symbol;
	int group = 0;
};

//class Wall :public Cell {
//public:
//	Wall() {
//		symbol = '#';
//	}
//};
//
//class Path :public Cell {
//public:
//	Path() {
//		symbol = ' ';
//	}
//
//};