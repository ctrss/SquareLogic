#pragma once

#ifndef _SS_SQUARELOGIC_H_
#define _SS_SQUARELOGIC_H_

class SquareSquare;

class SquareLogic
{
public:
	SquareLogic();
	~SquareLogic();

	void LoadAnswerSquare(void);

private:
	SquareSquare* m_sqSquare;
};

#endif // _SS_SQUARELOGIC_H_