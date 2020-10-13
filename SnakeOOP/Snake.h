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
	COORD getBodyElement(int index);
	//	COORD* getBody();
	DIRECTION dir;
	void setBody(int index, COORD value);

	snake(area border);
	bool gameOver;
	int getSnakeLength();
	void foodEaten();
	void init(area area1);
	void print();
	void clear();
	void nextMove();
	void setSpeed();
	void chekeSelfCollision();
	
	

};

