/*
 Dinesh Balakrishnan 300991342
 C++ slot machine
 Created: Feb 18 2020
 Last Edited: Feb 18th 2020
*/
#pragma once
#ifndef __LEVEL_1_SCENE__
#define __LEVEL_1_SCENE__

#include "RollButton.h"
#include "Scene.h"
#include "LeftDice.h"
#include "RightDice.h"


class Level1Scene : public Scene
{
public:
	Level1Scene();
	~Level1Scene();
	
	void draw() override;
	void update() override;
	void clean() override;
	void roll();
	void handleEvents() override;
	void start() override;
	void changeDice(int Sides);

	// getters
	glm::vec2 getMousePosition();

private:
	// game objects
	LeftDice* m_pLeftDice_;
	RightDice* m_pRightDice_;
	RollButton* m_roll_button_;
	LeftDice* m_pLDice;
	RightDice* m_pRDice;


	// private data member
	glm::vec2 m_mousePosition;
	std::string m_LeftDice_ImageString = "LeftDice";
	std::string m_RightDice_ImageString = "RightDice";
	
	
};

#endif /* defined (__LEVEL_1_SCENE__) */
