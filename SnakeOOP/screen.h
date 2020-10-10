#pragma once
#include <Windows.h>
#include "area.h"
class Screen
{
public:
	
		int width;
		int hight;
		static void setPosition(int X, int Y);
		static void setColor(int i);
		area getSize();
private:

	HANDLE handler;
   

	void clean();
	
	void hideCursor();
	

};

