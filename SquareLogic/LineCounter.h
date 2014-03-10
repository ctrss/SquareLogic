#pragma once

#ifndef _SS_LINECOUNTER_H_
#define _SS_LINECOUNTER_H_
#include "stdafx.h"

#include "Counter.h"

class LineCounter :
	public Counter
{
public:
	LineCounter();
	~LineCounter();

	virtual bool IsSolved(void) override;
	virtual CNT_TYPE GetType(void) override;

private:
	std::vector<Counter*> m_cnts;
};

#endif // _SS_LINECOUNTER_H_
