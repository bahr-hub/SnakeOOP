#include "Gameover.h"

bool Gameover::gameContine(area area2)
{
	
	if (gameOver == true)
	{
		system("CLS");
		char cha;
		Screen::setPosition(area2.width / 3, area2.hight / 2);
		cout << "Do you want to play again y/n ? ";
		cin >> cha;

		if (cha == 'n')
		{
			gameOver = true;
			return false;
			cout << endl;
			//bestscore();
		}
		else if (cha == 'y')
		{
			cout << endl;

			//bestscore();
			cout << endl;
			system("pause");

			
			/*initScreen();
			getusername();
			getspeedLevel();
			drawborder();
			drawBloks();
			initsnake();
			printSnake();*/

			gameOver = false;
			return true;
		}

	}
	return true;
}
