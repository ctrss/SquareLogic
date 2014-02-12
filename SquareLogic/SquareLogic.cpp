#include "SquareLogic.h"

#include <filesystem>

#include "SquareSquare.h"

SquareLogic::SquareLogic()
{
}


SquareLogic::~SquareLogic()
{
}

void SquareLogic::LoadAnswerSquareSquare(void)
{
	// DataManager 사용으로 수정
	FILE* ansFile = fopen("answer.txt", "r");

	char buf[1024];
	fgets(buf, 1024, ansFile);
	std::string str(buf);
	int width = atoi(str.substr(0,str.find_first_of(' ')).c_str());
	int height = atoi(str.substr(str.find_first_of(' ') + 1, str.find_last_of("\0") - str.find_first_of(' ')).c_str());

	m_sqSquare->InitSquareSquare(width, height);

	char ch;
	int _x = 0;
	int _y = 0;
	while ((ch = fgetc(ansFile)) != EOF)
	{
		if (ch == 'O') m_sqSquare->SetAnswerDotSquare(_x, _y, Square::CLR_BLACK);
		else if (ch == 'X') m_sqSquare->SetAnswerDotSquare(_x, _y, Square::CLR_WHITE);
		
		if (ch == '\n')
		{
			_x = 0;
			++_y;
		}
		else ++_x;
	}
}