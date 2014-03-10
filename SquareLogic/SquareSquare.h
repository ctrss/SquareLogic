#pragma once

#ifndef _SS_SQUARESQUARE_H_
#define _SS_SQUARESQUARE_H_
#include "stdafx.h"

#include "Square.h"

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

	void InitSquareSize(int width, int height);

	virtual void SetAnswerSquare(SQUARE_COLOR clr) override;
	void SetAnswerSquare(int x, int y, SQUARE_COLOR clr);

private:
	std::vector<Square*> m_dots;
	int m_width;
	int m_height;
};

#endif // _SS_SQUARESQUARE_H_