#pragma once
#include "area.h"
#include "snake.h"
#include "border.h"
#include "food.h"
#include "Gameover.h"
#include "screen.h"
#include "Userinput.h"




int main()
{
	Screen screen;
	Userinput inPt;
	area area1 = screen.getSize();
	Border border(area1);
	snake snake1(area1);
	food food1;
	Gameover gameover;

	inPt.getUsername();
	inPt.getspeedLevel();
	screen.hideCursor();
	border.draw();
	snake1.print();
	gameover.gameOver = false;
	while (gameover.gameOver == false)
	{
		snake1.dir = inPt.Khit(snake1.dir);
		snake1.nextMove();
		food1.addFood(area1, snake1);
		food1.checkfoodeat(snake1);
		snake1.chekeSelfCollision(gameover);
		border.checkbordercollison(snake1);
		snake1.clear();
		snake1.printScore(area1);
		snake1.print();
		snake1.setSpeed(inPt);
		bool continueo = gameover.gameContine(area1);
			/*if (continueo == true)
			{
				inPt.getUsername();
				inPt.getspeedLevel();
				screen.hideCursor();
				border.draw();
				snake1.print();
				gameover.gameOver = false;

				for (int i = 0; i < snake1.getSnakeLength(); i++)
				{
					snake1.getBodyElement(i) = { NULL };
				}
			}

			else if (continueo == false)
			{
				break;
			}*/
		


	}

	return 0;
}