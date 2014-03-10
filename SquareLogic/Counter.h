#pragma once

#ifndef _SS_COUNTER_H_
#define _SS_COUNTER_H_
#include "stdafx.h"

class Counter
{
public:
	enum CNT_TYPE
	{
		CTT_NONE = 0,
		CTT_SQUARE,
		CTT_LINE,
		CTT_DOT
	};

	Counter();
	~Counter();

	virtual bool IsSolved(void) = 0;
	virtual CNT_TYPE GetType(void);
};

#endif // _SS_COUNTER_H_
