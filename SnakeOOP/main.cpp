#include "snake.h"
#include "border.h"
#include "screen.h"
#include "Userinput.h"
#include "food.h"
#include "area.h"


int main()
{
	Screen screen;
	Userinput inPt;
	area area1 = screen.getSize();
	Border border(area1);
	snake snake1(area1);
	food food1;

	screen.hideCursor();
	border.draw();
	snake1.print();
	while (snake1.gameOver =true)
	{
		snake1.dir = inPt.Khit(snake1.dir);
		snake1.nextMove();
		food1.addFood(area1, snake1);
		food1.checkfoodeat(snake1);
		snake1.chekeSelfCollision();
		border.checkbordercollison(snake1);
		snake1.clear();
		snake1.print();
		Sleep(50 );
	}
	
	/*ShowConsoleCursor(false);
	initScreen();
	getusername();
	getspeedLevel();
	drawborder();
	drawBloks();
	initsnake();
	printSnake();

	while (gameOver == false)
	{
		checkuserinput();

		addfood();
		snakenextmove();

		checkfoodeat();
		checkselfcollision();
		checkbordercollison();

		printSnake();
		printScore();

		Sleep(500 / speedlevel);

		bool countinio = gameContine();
		if (countinio == false)
		{
			break;
		}
	}*/

		return 0;
}