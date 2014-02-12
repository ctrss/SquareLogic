#pragma once

#ifndef _SS_SQUARESQUARE_H_
#define _SS_SQUARESQUARE_H_

#include "Square.h"

class SquareSquare :
	public Square
{
public:
	SquareSquare();
	~SquareSquare();

	void Fill(SQUARE_COLOR clr) override;
	bool IsSolved(void) override;
};

#endif // _SS_SQUARESQUARE_H_