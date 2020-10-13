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
	for (int i = 0; i <= width; i++) // up
	{
		cout << "-";
	}
	cout << endl;

	for (int i = 1; i < hight ; i++) // right
	{
		Screen::setPosition (0, i);
		cout << "|";
	}

	for (int i = 1; i < hight ; i++) // left
	{
		
		Screen::setPosition(width , i);
		cout << "|";
	}

	Screen::setPosition(0, hight );
	for (int i = 0; i <= width; i++) //down
	{
		cout << "-";
	}
	cout << endl;
}

void Border::checkbordercollison( snake& allsnake)
{
	/*
	if (allsnake.getBody()[0].Y > hight - 2) //downe border 
	{
		allsnake.getBody()[0].Y = 1;
	}
	else if (allsnake.getBody()[0].Y <= 0) // uper border 
	{
		allsnake.getBody()[0].Y = hight - 2;
	}
	else if (allsnake.getBody()[0].X >= width - 1) // right border
	{
		allsnake.getBody()[0].X = 1;
	}
	else if (allsnake.getBody()[0].X <= 0) // left birder 
	{
		allsnake.getBody()[0].X = width - 2;
	}*/

	if (allsnake.getBodyElement(0).Y > hight - 1) //downe border 
	{
		COORD value1;
		value1.X = allsnake.getBodyElement(0).X;
		value1.Y = 1;
		allsnake.setBody(0, value1);
	}
	else if (allsnake.getBodyElement(0).Y < 1) // uper border 
	{
		COORD value1;
		value1.X = allsnake.getBodyElement(0).X;
		value1.Y = hight - 1;
		allsnake.setBody(0,value1) ;
	}
	else if (allsnake.getBodyElement(0).X > width - 1) // right border
	{
		COORD value1;
		value1.X = 1;
		value1.Y = allsnake.getBodyElement(0).Y;
		allsnake.setBody(0, value1);
	}
	else if (allsnake.getBodyElement(0).X < 1) // left birder 
	{
		COORD value1;
		value1.X = width - 1;
		value1.Y = allsnake.getBodyElement(0).Y;
		allsnake.setBody(0, value1);
	}
}
