#include "food.h"

void food::initFood()
{
	isFoodExest = false;
}


void food::addFood(area screensize,snake allsnake)
{
	if (isFoodExest == true)
	{
		return;
	}

	bool isValedFood = false;
	while (isValedFood == false)
	{
		srand((unsigned)time(0));
		
		postion.X = (rand() % (screensize.width - 3)) + 1;
		postion.Y = (rand() % (screensize.hight - 3)) + 1;

		for (int i = 0; i < allsnake.getSnakeLength(); i++)
		{
			if ((postion.X == allsnake.getBodyElement(i).X) && (postion.Y == allsnake.getBodyElement(i).Y))
			{
				isValedFood = false;
				return;
			}
			else
			{
				isValedFood = true;
			}
		}

	}
	Screen::setPosition(postion.X, postion.Y);
	Screen::setColor(3);
	cout << "f";
	isFoodExest = true;

}

void food::checkfoodeat(snake& allsnake1)
{

	if ((postion.X == allsnake1.getBodyElement(0).X) && (postion.Y == allsnake1.getBodyElement(0).Y))
	{
		isFoodExest = false;
		allsnake1.foodEaten();
		//score = score + 10;
		return;
	}
}


