#pragma once

#ifndef _SS_SQUARELOGICGAME_H_
#define _SS_SQUARELOGICGAME_H_

#include "IGame.h"

class SquareLogic;

namespace Game
{

	class SquareLogicGame :
		public IGame
	{
	public:
		SquareLogicGame();
		~SquareLogicGame();

		virtual void InitGame(void) override;
		virtual void StartGame(void) override;
		virtual void RefreshGame(void) override;
		virtual void StopGame(void) override;
		virtual void ResumeGame(void) override;
		virtual void ExitGame(void) override;

	private:
		SquareLogic* m_sqLogic;
	};

} // namespace Game

#endif // _SS_SQUARELOGICGAME_H_