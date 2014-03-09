#include "GameFactory.h"

#include "SquareLogicGame.h"

GameFactory::GameFactory()
{
}


GameFactory::~GameFactory()
{
}

Game::SquareLogicGame* GameFactory::CreateSquareLogicGame(void)
{
	Game::SquareLogicGame* slGame = new Game::SquareLogicGame();
	g_game = slGame;
	return slGame;
}