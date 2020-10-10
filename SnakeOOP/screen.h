#pragma once
#include <Windows.h>
#include "area.h"
class Screen
{
public:

	int width;
	int hight;
	area getSize();

	static void setPosition(int X, int Y);
	static void setColor(int i);
	void hideCursor();
private:

	HANDLE handler;


	void clean();



};

