#include "GameFactory.h"

#include "SquareLogicGame.h"

GameFactory::GameFactory()
{
}


GameFactory::~GameFactory()
{
}

SquareLogicGame* GameFactory::CreateSquareLogicGame(void)
{
	return new SquareLogicGame();
}