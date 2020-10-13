#include "snake.h"
#include "border.h"
#include "screen.h"
#include "Userinput.h"
#include "food.h"
#include "area.h"
#include "Gameover.h"


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
	while (gameover.gameOver =false)
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
	//	bool continueo = gameover.gameContine(area1,snake1);
		/*if (continueo == false)
		{
			break;
		}*/
	}
	
		return 0;
}