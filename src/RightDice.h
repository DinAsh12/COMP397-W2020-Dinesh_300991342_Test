/*
 Dinesh Balakrishnan 300991342
 C++ slot machine
 Created: Feb 16 2020
 Last Edited: Feb 18th 2020
*/

#pragma once
#include"DisplayObject.h"
#ifndef __DICE__
#define __DICE__
class RightDice : public DisplayObject
{
public:
    RightDice();
    ~RightDice();

    void draw()override;
    void update()override;
    void clean()override;
};
#endif /* defined (__DICE__)*/

