/*
 Dinesh Balakrishnan 300991342
 C++ slot machine
 Created: Feb 18 2020
 Last Edited: Feb 18th 2020
*/
#pragma once
#ifndef __ROLL_BUTTON__
#define __ROLL_BUTTON__

#include "Button.h"

class RollButton : public Button
{
public:
	RollButton();
	~RollButton();


	bool ButtonClick() override;
	int countClickOnce();
	void setClickOnce(int clickCount);

private:
	bool m_isClicked;
	int m_pClickFlag;
};

#endif /* defined (__ROLL_BUTTON__) */
