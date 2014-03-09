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
	virtual SQUARE_TYPE GetType(void) override;

private:
	std::vector<Square*> m_dots;
	unsigned int m_width;
	unsigned int m_height;
};

#endif // _SS_SQUARESQUARE_H_