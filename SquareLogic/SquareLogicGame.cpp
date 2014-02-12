#include "SquareLogicGame.h"

#include "SquareLogic.h"

namespace Game
{

	SquareLogicGame::SquareLogicGame()
	{
	}


	SquareLogicGame::~SquareLogicGame()
	{
	}

	void SquareLogicGame::InitGame(void)
	{
		m_sqLogic = new SquareLogic();
		m_sqLogic->LoadAnswerSquareSquare();
		m_sqLogic->InitSquareCounter();

		m_sqLogicView = new SquareLogicView();
		m_sqLogicView->Refresh();

		Start();
	}

	void SquareLogicGame::StartGame(void)
	{
		while (!m_sqLogic->IsSolved())
		{
			if (UI->InputEvent())
			{
				switch (UI->InputEvent())
				{
				case EVT_FILL_BLACK:
					Position pos = UI->GetSquarePosition();
					m_sqLogic->FillBlack(pos);
					m_sqLogic->CheckSolvedCounter();
					break;
				case EVT_FILL_WHITE:
					Position pos = UI->GetSquarePosition();
					m_sqLogic->FillWhite(pos);
					m_sqLogic->CheckSolvedCounter();
					break;
				case EVT_FILL_CROSS:
					Position pos = UI->GetSquarePosition();
					m_sqLogic->FillCross(pos);
					m_sqLogic->CheckSolvedCounter();
					break;
				case EVT_STOP_GAME:
					Stop();
					break;
				case EVT_RESUME_GAME:
					Resume();
					break;
				case EVT_EXIT_GAME:
					Exit();
					return;
				default:
					// Input Event Error
				}

				Refresh();
			}
		}
		m_sqLogicView->ShowResult();
		Exit();
	}

	void SquareLogicGame::RefreshGame(void)
	{
		m_sqLogicView->Refresh();
	}

	void SquareLogicGame::StopGame(void)
	{
		UI->SetStop();
	}

	void SquareLogicGame::ResumeGame(void)
	{
		UI->SetResume();
	}

	void SquareLogicGame::ExitGame(void)
	{
		delete m_sqLogic;
		delete m_sqLogicView;
	}

} // namespace Game