#include "Level1Scene.h"
#include "Game.h"
#include "LeftDice.h"
#include "RightDice.h"
#include <iostream>

Level1Scene::Level1Scene()
{
	start();
}
void Level1Scene::roll()
{
//	//Checks if the button is clicked or not
//	if (m_roll_button_->countClickOnce() == 0)
//	{
//		//spin the slots and select random image
//			m_pLDice[0]->roll();
//			m_pRDice[1]->roll();
//
//			int LeftDice = m_pLDice[0].getLeftDice();
//			int RightDice = m_pRDice[1].getRightDice();
//
//
//			changeDice(m_pLDice);
//			changeDice(m_pRDice);
//			
//		}
//
//	}
//	//set click count after all spinning functions are done
//	m_roll_button->setClickOnce(1);
//
}

Level1Scene::~Level1Scene()
{
}

void Level1Scene::draw()
{
	m_pLeftDice_->draw();
	m_pRightDice_->draw();
	m_roll_button_->draw();
}

void Level1Scene::update()
{
	m_roll_button_->setMousePosition(m_mousePosition);
	m_roll_button_->ButtonClick();

}
//void Level1Scene::changeDice(int Sides)
//{
//	switch (Sides)
//	{
//	case DICES:
//		m_LeftDice_ImageString = "LSide1";
//		break;
//	case DICES:
//		m_LeftDice_ImageString = "LSide2";
//		break;
//	case DICES:
//		m_LeftDice_ImageString = "LSide3";
//		break;
//	case DICES:
//		m_LeftDice_ImageString = "LSide4";
//		break;
//	case DICES:
//		m_LeftDice_ImageString = "LSide5";
//		break;
//	case DICES:
//		m_LeftDice_ImageString = "LSide6";
//		break;
//	default:
//		break;
//	}
//}

void Level1Scene::clean()
{
}

void Level1Scene::handleEvents()
{
	int wheel = 0;

	SDL_Event event;
	while(SDL_PollEvent(&event))
	{
		switch (event.type)
		{
		case SDL_QUIT:
			TheGame::Instance()->quit();
			break;
		case SDL_MOUSEMOTION:
			m_mousePosition.x = event.motion.x;
			m_mousePosition.y = event.motion.y;
			break;

		case SDL_MOUSEBUTTONDOWN:
			switch(event.button.button)
			{
			case SDL_BUTTON_LEFT:
				
				break;
			}
		
			break;
		case SDL_MOUSEBUTTONUP:
			switch (event.button.button)
			{
			case SDL_BUTTON_LEFT:
				
				break;
			}
			break;
		case SDL_MOUSEWHEEL:
			wheel = event.wheel.y;
			break;
		case SDL_KEYDOWN:
			switch (event.key.keysym.sym)
			{
			case SDLK_ESCAPE:
				TheGame::Instance()->quit();
				break;
			case SDLK_1:
				TheGame::Instance()->changeSceneState(SceneState::START_SCENE);
				break;
			case SDLK_2:
				TheGame::Instance()->changeSceneState(SceneState::END_SCENE);
				break;
			

				/************************************************************************/
			case SDLK_w:
				
				break;
			case SDLK_s:
				
				break;
			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		case SDL_KEYUP:
			switch (event.key.keysym.sym)
			{
			case SDLK_w:
				
				break;

			case SDLK_s:
				
				break;

			case SDLK_a:

				break;
			case SDLK_d:

				break;
			}
			
			break;
		default:
			break;
		}
	}
}

void Level1Scene::start()
{
	m_pLeftDice_ = new LeftDice();
	addChild(m_pLeftDice_);
	m_pRightDice_ = new RightDice();
	addChild(m_pRightDice_);
	m_roll_button_ = new RollButton();
	m_roll_button_->setClickEvents(false);
	addChild(m_roll_button_);
}

glm::vec2 Level1Scene::getMousePosition()
{
	return m_mousePosition;
}

