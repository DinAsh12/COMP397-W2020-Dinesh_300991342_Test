/*
 Dinesh Balakrishnan 300991342
 C++ slot machine
 Created: Feb 18 2020
 Last Edited: Feb 18th 2020
*/
#include "RollButton.h"
#include "Game.h"

RollButton::RollButton()
// call super constructor
	:Button(
		"../Assets/textures/rollButton.png",
		"roll",
		ROLL_BUTTON, glm::vec2(300, 334.0f)), m_isClicked(false)
{

}

RollButton::~RollButton()
{
}

bool RollButton::ButtonClick()
{
	if (m_mouseOver() && m_mouseButtonClicked)
	{
		if (!m_isClicked)
		{
			TheSoundManager::Instance()->load("../Assets/audio/mouseclick.wav", "yay", SOUND_SFX);
			std::cout << "Roll Button Clicked!" << std::endl;

			m_isClicked = true;
		}
		return true;
	}
	else
	{
		m_isClicked = false;
	}

	return false;
}
int RollButton::countClickOnce()
{
	return m_pClickFlag;
}

void RollButton::setClickOnce(int clickFlag)
{
	m_pClickFlag = clickFlag;
}