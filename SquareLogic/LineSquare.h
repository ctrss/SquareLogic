#pragma once

#ifndef _SS_LINESQUARE_H_
#define _SS_LINESQUARE_H_

#include "Square.h"
#include <vector>

class LineSquare :
	public Square
{
public:
	LineSquare();
	~LineSquare();

	virtual void Fill(SQUARE_COLOR clr) override;
	virtual bool IsSolved(void) override;
	virtual bool Check(SQUARE_COLOR clr) override;

private:
	std::vector<Square*> m_dots;
};

#endif // _SS_LINESQUARE_H_
