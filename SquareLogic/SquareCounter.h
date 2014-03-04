#pragma once

#ifndef _SS_SQUARECOUNTER_H_
#define _SS_SQUARECOUNTER_H_

#include "Counter.h"
#include <vector>

class SquareCounter :
	public Counter
{
public:
	SquareCounter();
	~SquareCounter();

	virtual bool IsSolved(void) override;

private:
	std::vector<Counter*> m_cnts;
};

#endif // _SS_SQUARECOUNTER_H_
