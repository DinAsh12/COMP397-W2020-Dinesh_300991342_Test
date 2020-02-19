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
        "LSide1", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/2.png",
        "LSide2", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/3.png",
        "LSide3", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/4.png",
        "LSide4", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/5.png",
        "LSide5", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/6.png",
        "LSide6", TheGame::Instance()->getRenderer());

    glm::vec2 size = TheTextureManager::Instance()->getTextureSize("LSide1");
    setWidth(size.x);
    setHeight(size.y);
    setPosition(glm::vec2(155, 155));
    setType(DICES);
}

LeftDice::~LeftDice()
{
   
}

void LeftDice::roll()
{
    // set the amount of spins, spin it and set the number to the wheel slot
    int rolls = (10 + rand() % 50);

    for (int i = 0; i < rolls; i++) {

        m_pLDice++;
        if (m_pLDice > 6)
        {
            m_pLDice = 0;
        }
    }
}
void LeftDice::draw()
{
    int xComponent = getPosition().x;
    int yComponent = getPosition().y;



    TheTextureManager::Instance()->draw("LSide1", xComponent, yComponent,
        TheGame::Instance()->getRenderer(), 0, 255, true);
}

void LeftDice::update()
{
}

void LeftDice::clean()
{
}
int LeftDice::getLeftDice()
{
    return m_pLDice;
}
