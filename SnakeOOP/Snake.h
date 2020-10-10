#pragma once
#include <Windows.h>
#include "direction.h"
#include <iostream>
using namespace std;


class snake
{
	int length;
	int speed;
	int snakeLength;
	int speedLevel;
	COORD body[1000];
	DIRECTION dir;

	void init();
	void print();
	void clear();
	void nextMove();
	void setSpeed();
	void chekeSelfCollision();

};

