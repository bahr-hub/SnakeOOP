#pragma once
#include <Windows.h>
#include "area.h"
#include "snake.h"

class Border
{
private:
	int width;
	int hight;
	
public:
	Border();
	Border(area screenSize );
	Border(int width, int hight);
	void draw();
	void checkbordercollison(snake& allsnake);
	
};

