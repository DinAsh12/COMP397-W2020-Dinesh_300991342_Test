/*
 Dinesh Balakrishnan 300991342
 C++ slot machine
 Created: Feb 18 2020
 Last Edited: Feb 18th 2020
*/
#include"RightDice.h"
#include "Game.h"

RightDice::RightDice()
{
    TheTextureManager::Instance()->load("../Assets/textures/1.png",
        "RSide1", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/2.png",
        "RSide2", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/3.png",
        "RSide3", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/4.png",
        "RSide4", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/5.png",
        "RSide5", TheGame::Instance()->getRenderer());
    TheTextureManager::Instance()->load("../Assets/textures/6.png",
        "RSide6", TheGame::Instance()->getRenderer());

    glm::vec2 size = TheTextureManager::Instance()->getTextureSize("RSide1");
    setWidth(size.x);
    setHeight(size.y);
    setPosition(glm::vec2(455, 155));
    setType(DICES);
}

RightDice::~RightDice()
{

}
void RightDice::roll()
{
    // set the amount of spins, spin it and set the number to the wheel slot
    int rolls = (10 + rand() % 50);

    for (int i = 0; i < rolls; i++) {

        m_pRDice_++;
        if (m_pRDice_ > 6)
        {
            m_pRDice_ = 0;
        }
    }
}

void RightDice::draw()
{
    int xComponent = getPosition().x;
    int yComponent = getPosition().y;



    TheTextureManager::Instance()->draw("RSide1", xComponent, yComponent,
        TheGame::Instance()->getRenderer(), 0, 255, true);
}

void RightDice::update()
{
}

void RightDice::clean()
{
}

int RightDice::getRightDice()
{
    return m_pRDice_;
}