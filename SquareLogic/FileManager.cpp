#include "FileManager.h"
#include "Square.h"
#include "SquareSquare.h"

#include <fstream>

FileManager::FileManager()
{
}


FileManager::~FileManager()
{
}

int FileManager::LoadAnswerSquare(Square* sq)
{
	std::ifstream inStrm = std::ifstream("answer.txt");

	// 5 4
	// O X O O X
	// X O O O O
	// O X O O X
	// O O O X X

	if (sq->GetType() == Square::SQT_SQUARE)
	{
		SquareSquare* sqSquare = (SquareSquare*)sq;
		int width;
		int height;
		inStrm >> width;
		inStrm >> height;
		sqSquare->InitSquareSize(width, height);

		char ch = ' ';
		int _x = 0;
		int _y = 0;
		inStrm >> ch;
		while (ch == ' ' || ch == '\n' || ch == 'O' || ch == 'X')
		{
			if (ch == ' ') continue;
			if (ch == 'O') sqSquare->SetAnswerSquare(_x, _y, Square::CLR_BLACK);
			else if (ch == 'X') sqSquare->SetAnswerSquare(_x, _y, Square::CLR_WHITE);

			if (ch == '\n')
			{
				_x = 0;
				++_y;
			}
			else ++_x;

			inStrm >> ch;
		}
	}
}