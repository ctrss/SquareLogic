#pragma once

#ifndef _SS_SQUARE_H_
#define _SS_SQUARE_H_
#include "stdafx.h"

class Square
{
public:
	enum SQUARE_COLOR
	{
		CLR_NONE = 0,
		CLR_BLACK,
		CLR_WHITE,
		CLR_CROSS
	};
	enum SQUARE_TYPE
	{
		SQT_NONE = 0,
		SQT_SQUARE,
		SQT_LINE,
		SQT_DOT
	};

	Square();
	~Square();

	virtual void Fill(SQUARE_COLOR clr) = 0;
	virtual bool IsSolved(void) = 0;
	virtual bool Check(SQUARE_COLOR clr) = 0;
	virtual SQUARE_TYPE GetType(void);

	virtual void SetAnswerSquare(SQUARE_COLOR clr) = 0;
};

#endif // _SS_SQUARE_H_