#pragma once
#include <Windows.h>
#include "direction.h"
#include <iostream>
#include "area.h"
using namespace std;


class snake
{
private:
	int length;
	int speed;
	int snakeLength;
	int speedLevel;
	COORD body[1000];
	DIRECTION dir;
public:
	snake(area border);
	void init(area area1);
	void print();
	void clear();
	void nextMove();
	void setSpeed();
	void chekeSelfCollision();
	

};

