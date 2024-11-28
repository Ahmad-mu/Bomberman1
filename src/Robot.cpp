#include "Robot.h"

Robot::Robot() :
	m_row(1) , m_col(1)
{
}

void Robot::changelocation(int r, int c)
{
	m_row = r;
	m_col = c;
}
