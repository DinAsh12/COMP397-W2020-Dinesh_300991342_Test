/*
 Dinesh Balakrishnan 300991342
 C++ slot machine
 Created: Feb 16 2020
 Last Edited: Feb 18th 2020
*/

#pragma once
#include"DisplayObject.h"
#ifndef __LDICE__
#define __LDICE__
class LeftDice : public DisplayObject
{
public:
    LeftDice();
    ~LeftDice();

    void draw()override;
    void update()override;
    void roll();
    void clean()override;
    int getLeftDice();

private:
    int m_pLDice;
};
#endif /* defined (__LDICE__)*/
