#pragma once

#ifndef _SS_SQUARESQUARE_H_
#define _SS_SQUARESQUARE_H_

#include "Square.h"
#include <vector>

class SquareSquare :
	public Square
{
public:
	SquareSquare();
	~SquareSquare();

	virtual void Fill(SQUARE_COLOR clr) override;
	virtual bool IsSolved(void) override;
	virtual bool Check(SQUARE_COLOR clr) override;

private:
	std::vector<std::vector<Square*>> m_dots;
};

#endif // _SS_SQUARESQUARE_H_