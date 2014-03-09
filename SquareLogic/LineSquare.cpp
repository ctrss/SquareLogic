#include "LineSquare.h"


LineSquare::LineSquare()
{
}


LineSquare::~LineSquare()
{
}

void LineSquare::Fill(SQUARE_COLOR clr)
{
	for (auto& dot : m_dots)
	{
		dot->Fill(clr);
	}
}

bool LineSquare::IsSolved(void)
{
	bool solved = true;

	for (auto& dot : m_dots)
	{
		if (!dot->IsSolved()) solved = false;
	}

	return solved;
}

bool LineSquare::Check(SQUARE_COLOR clr)
{
	bool checked = true;

	for (auto& dot : m_dots)
	{
		if (!dot->Check(clr)) checked = false;
	}

	return checked;
}

Square::SQUARE_TYPE LineSquare::GetType(void)
{
	return SQT_LINE;
}