#pragma once

#ifndef _SS_SQUARE_H_
#define _SS_SQUARE_H_

class Square
{
public:
	enum SQUARE_COLOR
	{
		CLR_BLACK,
		CLR_WHITE,
		CLR_CROSS
	};

	Square();
	~Square();

	virtual void Fill(SQUARE_COLOR clr) = 0;
	virtual bool IsSolved(void) = 0;
};

#endif // _SS_SQUARE_H_