#pragma once

#ifndef _SS_LINECOUNTER_H_
#define _SS_LINECOUNTER_H_

#include "Counter.h"
#include <vector>

class LineCounter :
	public Counter
{
public:
	LineCounter();
	~LineCounter();

	virtual bool IsSolved(void) override;

private:
	std::vector<Counter*> m_cnts;
};

#endif // _SS_LINECOUNTER_H_
