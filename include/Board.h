#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <fstream>
#include "Location.h"
#include "io.h"
#include <conio.h>

using namespace std;

class Board {
public:
	Board();
	void readBoard();
	void render() const;
	void handleSpecialKey();
	



private:
	std::vector <std::vector<char>> m_vector;
	int m_row, m_col;
};