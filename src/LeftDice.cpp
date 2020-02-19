/*
 Dinesh Balakrishnan 300991342
 C++ slot machine
 Created: Feb 18 2020
 Last Edited: Feb 18th 2020
*/
#include"LeftDice.h"
#include "Game.h"

LeftDice::LeftDice()
{
    TheTextureManager::Instance()->load("../Assets/textures/1.png",
        "Side1", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/2.png",
        "Side2", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/3.png",
        "Side3", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/4.png",
        "Side4", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/5.png",
        "Side5", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/6.png",
        "Side6", TheGame::Instance()->getRenderer());

    glm::vec2 size = TheTextureManager::Instance()->getTextureSize("Side1");
    setWidth(size.x);
    setHeight(size.y);
    setPosition(glm::vec2(155, 155));
    setType(DICES);
}

LeftDice::~LeftDice()
{
   
}

void LeftDice::draw()
{
    int xComponent = getPosition().x;
    int yComponent = getPosition().y;



    TheTextureManager::Instance()->draw("Side1", xComponent, yComponent,
        TheGame::Instance()->getRenderer(), 0, 255, true);
}

void LeftDice::update()
{
}

void LeftDice::clean()
{
}
