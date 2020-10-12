#pragma once
#include <Windows.h>
#include "direction.h"
#include <iostream>
#include "area.h"
#include "screen.h"
#include "Userinput.h"
#include "direction.h"
using namespace std;


class snake
{
private:
	int length;
	int speed;
	int speedLevel;
	int snakeLength;
	COORD body[1000];
	

	
	
public:
	COORD* getBody();
	DIRECTION dir;

	snake(area border);

	int getSnakeLength();
	void foodEaten();
	void init(area area1);
	void print();
	void clear();
	void nextMove();
	void setSpeed();
	void chekeSelfCollision();
	

};

