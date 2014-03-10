#include "SquareSquare.h"


SquareSquare::SquareSquare()
: Square(), m_width(0), m_height(0)
{
}


SquareSquare::~SquareSquare()
{
}

void SquareSquare::Fill(SQUARE_COLOR clr)
{
	for (auto& dot : m_dots)
	{
		dot->Fill(clr);
	}
}

bool SquareSquare::IsSolved(void)
{
	bool solved = true;

	for (auto& dot : m_dots)
	{
		if (!dot->IsSolved()) solved = false;
	}

	return solved;
}

bool SquareSquare::Check(SQUARE_COLOR clr)
{
	bool checked = true;

	for (auto& dot : m_dots)
	{
		if (!dot->Check(clr)) checked = false;
	}

	return checked;
}

Square::SQUARE_TYPE SquareSquare::GetType(void)
{
	return SQT_SQUARE;
}

void SquareSquare::InitSquareSize(int width, int height)
{
	m_width = width;
	m_height = height;
}

//! x, y 는 0부터 시작
void SquareSquare::SetAnswerSquare(int x, int y, SQUARE_COLOR clr)
{
	Square* dot = m_dots.at(x + y * m_width);
	dot->SetAnswerSquare(clr);
}