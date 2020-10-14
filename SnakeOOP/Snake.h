#pragma once
#include <Windows.h>
#include "direction.h"
#include <iostream>
#include "area.h"
#include "screen.h"
#include "Userinput.h"
#include "direction.h"
#include "Gameover.h"
using namespace std;


class snake
{
private:
	int length;
	int speedLevel;
	int snakeLength;
	COORD body[1000];
	

	

	
	
public:
	int score ;
	COORD getBodyElement(int index);
	DIRECTION dir;
	snake(area border);

	
	int getSnakeLength();
	void setBody(int index, COORD value);
	void foodEaten();
	void init(area area1);
	void print();
	void printScore(area area1);
	void clear();
	void nextMove();
	void setSpeed(Userinput speed);
	bool chekeSelfCollision(Gameover& gameover);
	
	

};

