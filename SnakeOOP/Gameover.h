#pragma once
#include <Windows.h>
#include <iostream>
#include <ctime>
#include "snake.h"
#include "area.h"
#include "screen.h"
#include "food.h"
#include "Userinput.h"
#include "area.h"

class Gameover
{
public:
	bool gameOver ;
	bool gameContine( area area2, snake snake2);
};

