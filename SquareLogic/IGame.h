#pragma once

#ifndef _SS_IGAME_H_
#define _SS_IGAME_H_
#include "stdafx.h"

namespace Game
{

	class IGame
	{
	public:
		IGame();
		~IGame();

		virtual void InitGame(void) = 0;
		virtual void StartGame(void) = 0;
		virtual void RefreshGame(void) = 0;
		virtual void StopGame(void) = 0;
		virtual void ResumeGame(void) = 0;
		virtual void ExitGame(void) = 0;

		void Start(void) { StartGame(); }
		void Refresh(void) { RefreshGame(); }
		void Stop(void) { StopGame(); }
		void Resume(void) { Resume(); }
		void Exit(void) { ExitGame(); }
	};

} // namespace Game

#endif // _SS_IGAME_H_