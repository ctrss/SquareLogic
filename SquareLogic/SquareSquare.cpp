#include "SquareSquare.h"


SquareSquare::SquareSquare()
{
}


SquareSquare::~SquareSquare()
{
}

void SquareSquare::Fill(SQUARE_COLOR clr)
{
	for (auto& dots : m_dots)
	{
		for (auto& dot : dots)
		{
			dot->Fill(clr);
		}
	}
}

bool SquareSquare::IsSolved(void)
{
}

bool SquareSquare::Check(SQUARE_COLOR clr)
{
}