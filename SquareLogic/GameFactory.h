#pragma once

#ifndef _SS_GAMEFACTORY_H_
#define _SS_GAMEFACTORY_H_

#include "Factory.h"

class SquareLogicGame;

class GameFactory :
	public Factory
{
public:
	GameFactory();
	~GameFactory();

	virtual SquareLogicGame* CreateSquareLogicGame(void);
};

#endif // _SS_GAMEFACTORY_H_