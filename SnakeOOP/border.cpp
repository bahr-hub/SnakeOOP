#include "border.h"
#include "screen.h"
#include <iostream>
using namespace std;
Border::Border()
{
	width = 40;
	hight = 40;

}

Border::Border(area screenSize)
{
	width = screenSize.width;
	hight = screenSize.hight;

}

Border::Border(int width, int hight)
{
	this->width = width;
	this->hight = hight;
}

void Border::draw()
{
	for (int i = 0; i < width; i++) // up
	{
		cout << "-";
	}
	cout << endl;

	for (int i = 1; i < hight - 1; i++) // right
	{
		Screen::setPosition (0, i);
		cout << "|";
	}

	for (int i = 1; i < hight - 1; i++) // left
	{
		
		Screen::setPosition(width - 1, i);
		cout << "|";
	}

	Screen::setPosition(0, hight - 1);
	for (int i = 0; i < width; i++) //down
	{
		cout << "-";
	}
	cout << endl;
}
