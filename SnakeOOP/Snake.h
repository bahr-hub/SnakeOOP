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
	int speedLevel;
	int snakeLength;
	COORD body[1000];
	

	

	
	
public:
	int score ;
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
	void printScore(area area1);
	void clear();
	void nextMove();
	void setSpeed(Userinput speed);
	void chekeSelfCollision();
	
	

};

