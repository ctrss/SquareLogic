#include "IGame.h"
#include "GameFactory.h"

int main(void)
{
	GameFactory* gameFactory = new GameFactory();
	Game::IGame *game = (Game::IGame*)gameFactory->CreateSquareLogicGame();

	game->InitGame();
	game->StartGame(); // game->ExitGame()�� ȣ���� �� ��ȯ��(���� ���� ���(thread ��� ��))

	delete game;
	delete gameFactory;
}