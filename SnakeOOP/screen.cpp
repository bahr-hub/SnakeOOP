#include "Screen.h"
#include <conio.h>


void Screen::setPosition(int X, int Y)
{
	COORD coord;
	coord.X = X;
	coord.Y = Y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
	
}

void Screen::setColor(int i)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), i);
}

void Screen::clean()
{
	system("CLS");
}

area Screen::getSize()
{ 
	area area1;
	CONSOLE_SCREEN_BUFFER_INFO csbi;

	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	area1.width = csbi.srWindow.Right - csbi.srWindow.Left - 10;
	area1.hight = csbi.srWindow.Bottom - csbi.srWindow.Top - 5;
	return area1;
}


void Screen::hideCursor()
{
	HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_CURSOR_INFO     cursorInfo;

	GetConsoleCursorInfo(out, &cursorInfo);
	cursorInfo.bVisible = false; // set the cursor visibility
	SetConsoleCursorInfo(out, &cursorInfo);
}

