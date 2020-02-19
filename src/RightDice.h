/*
 Dinesh Balakrishnan 300991342
 C++ slot machine
 Created: Feb 16 2020
 Last Edited: Feb 18th 2020
*/

#pragma once
#include"DisplayObject.h"
#ifndef __RDICE__
#define __RDICE__
class RightDice : public DisplayObject
{
public:
    RightDice();
    ~RightDice();

    void draw()override;
    void update()override;
    void roll();
    void clean()override;
    int getRightDice();

private:
    int m_pRDice_;
};
#endif /* defined (__RDICE__)*/

