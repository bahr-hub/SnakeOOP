#pragma once
#include <Windows.h>
#include <iostream>
#include <ctime>
#include "snake.h"
#include "area.h"
#include "screen.h"
using namespace std;


class food
{
public:
	bool isFoodExest;
	COORD postion;
	void addFood(area screensize, snake allsnake);
	void checkfoodeat(snake& allsnake1);

private:
	void initFood();
	

};

