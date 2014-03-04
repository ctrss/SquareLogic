#include "FileManager.h"

#include <fstream>

FileManager::FileManager()
{
}


FileManager::~FileManager()
{
}

int FileManager::LoadAnswerSquare(void)
{
	std::ifstream inStrm = std::ifstream("answer.txt");

	inStrm >> 
	fgets(buf, 1024, ansFile);
	std::string str(buf);
	int width = atoi(str.substr(0, str.find_first_of(' ')).c_str());
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