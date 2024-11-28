#pragma once
#include "Board.h"


class Robot {
public:
	Robot();
	void changelocation(int r,int c);

private:
	int m_row, m_col;
};