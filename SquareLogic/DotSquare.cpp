#include "DotSquare.h"


DotSquare::DotSquare()
{
}


DotSquare::~DotSquare()
{
}

void DotSquare::Fill(SQUARE_COLOR clr)
{
	m_color = clr;
}

bool DotSquare::IsSolved(void)
{
	return m_isSolved;
}

bool DotSquare::Check(SQUARE_COLOR clr)
{
	if (m_color == clr) return true;
	else return false;
}