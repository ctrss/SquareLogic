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
	if (m_color == m_ansColor) return true;
	else return false;
}

bool DotSquare::Check(SQUARE_COLOR clr)
{
	if (m_color == clr) return true;
	else return false;
}

Square::SQUARE_TYPE DotSquare::GetType(void)
{
	return SQT_DOT;
}

void DotSquare::SetAnswerSquare(SQUARE_COLOR clr)
{
	m_ansColor = clr;
}