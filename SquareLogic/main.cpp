#include "IGame.h"
#include "GameFactory.h"

int main(void)
{
	GameFactory* gameFactory = new GameFactory();
	Game::IGame *game = (Game::IGame*)gameFactory->CreateSquareLogicGame();

	game->InitGame();
	game->StartGame(); // game->ExitGame()을 호출한 후 반환됨(이후 변경 요망(thread 사용 등))

	delete game;
	delete gameFactory;
}