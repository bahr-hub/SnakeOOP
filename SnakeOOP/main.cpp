#include "Snake.h"
#include "border.h"
#include "screen.h"
#include "Userinput.h"


int main()
{
	Screen screen;
	screen.hideCursor();
	Userinput inPt;
	area area1 = screen.getSize();
	Border border(area1);
	border.draw();
	snake snake1(area1);
	snake1.print();
	while (true)
	{
		snake1.dir = inPt.Khit(snake1.dir);
		snake1.nextMove();
		snake1.print();
		Sleep(100 );
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