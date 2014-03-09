#pragma once

#ifndef _SS_GAMEFACTORY_H_
#define _SS_GAMEFACTORY_H_

#include "Factory.h"

namespace Game
{
	class SquareLogicGame;
}

class GameFactory :
	public Factory
{
public:
	GameFactory();
	~GameFactory();

	virtual Game::SquareLogicGame* CreateSquareLogicGame(void);
};

#endif // _SS_GAMEFACTORY_H_