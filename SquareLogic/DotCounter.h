#pragma once

#ifndef _SS_DOTCOUNTER_H_
#define _SS_DOTCOUNTER_H_

#include "Counter.h"
class DotCounter :
	public Counter
{
public:
	DotCounter();
	~DotCounter();

	virtual bool IsSolved(void) override;

private:
	int m_cnt;
	bool m_isSolved;
};

#endif // _SS_DOTCOUNTER_H_
