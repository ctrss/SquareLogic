#include "SquareLogic.h"

#include "SquareLogicGame.h"
#include "IDataManager.h"

SquareLogic::SquareLogic()
{
}


SquareLogic::~SquareLogic()
{
}

void SquareLogic::LoadAnswerSquare(void)
{
	g_game->_dataMgr->LoadAnswerSquare((Square*)m_sqSquare);
}