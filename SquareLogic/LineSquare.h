#pragma once

#ifndef _SS_LINESQUARE_H_
#define _SS_LINESQUARE_H_
#include "stdafx.h"

#include "Square.h"

class LineSquare :
	public Square
{
public:
	LineSquare();
	~LineSquare();

	virtual void Fill(SQUARE_COLOR clr) override;
	virtual bool IsSolved(void) override;
	virtual bool Check(SQUARE_COLOR clr) override;
	virtual SQUARE_TYPE GetType(void) override;

	virtual void SetAnswerSquare(SQUARE_COLOR clr) override;
	void SetAnswerSquare(int len, SQUARE_COLOR clr);

private:
	std::vector<Square*> m_dots;
};

#endif // _SS_LINESQUARE_H_
