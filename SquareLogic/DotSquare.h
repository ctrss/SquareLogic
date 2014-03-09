#pragma once

#ifndef _SS_DOTSQUARE_H_
#define _SS_DOTSQUARE_H_

#include "Square.h"
class DotSquare :
	public Square
{
public:
	DotSquare();
	~DotSquare();

	virtual void Fill(SQUARE_COLOR clr) override;
	virtual bool IsSolved(void) override;
	virtual bool Check(SQUARE_COLOR clr) override;
	virtual SQUARE_TYPE GetType(void) override;

private:
	SQUARE_COLOR m_color;
	bool m_isSolved;
};

#endif // _SS_DOTSQUARE_H_
