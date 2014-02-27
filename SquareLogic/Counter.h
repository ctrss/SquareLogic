#pragma once

#ifndef _SS_COUNTER_H_
#define _SS_COUNTER_H_

class Counter
{
public:
	Counter();
	~Counter();

	virtual bool IsSolved(void) = 0;
};

#endif // _SS_COUNTER_H_
