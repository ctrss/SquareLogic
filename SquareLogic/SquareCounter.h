#pragma once

#ifndef _SS_SQUARECOUNTER_H_
#define _SS_SQUARECOUNTER_H_
#include "stdafx.h"

#include "Counter.h"

class SquareCounter :
	public Counter
{
public:
	SquareCounter();
	~SquareCounter();

	virtual bool IsSolved(void) override;
	virtual CNT_TYPE GetType(void) override;

private:
	std::vector<Counter*> m_cnts;
	int m_width;
	int m_height;
};

#endif // _SS_SQUARECOUNTER_H_
