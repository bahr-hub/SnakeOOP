#include "Userinput.h"

DIRECTION Userinput::Khit(DIRECTION dir)
{

	if (_kbhit())
	{
		_getch(); // this workaround to handle problem of arrow keys make 2 charecters 224 and required charecter
		switch (_getch())
		{
		case KEY_UP:
			if (dir != DOWNE)
			{
				dir = UP;
			}
			break;

		case KEY_LEFT:
			if (dir != RIGHT)
			{
				dir = LEFT;
			}
			break;

		case KEY_RIGHT:
			if (dir != LEFT)
			{
				dir = RIGHT;
			}
			break;

		case KEY_DOWN:
			if (dir != UP)
			{
				dir = DOWNE;
			}
			break;
		}
	}
	return dir;
}

void Userinput::getUsername()
{
	cout << "Enter your name: " << endl;
	cin >> name;
}

void Userinput::getspeedLevel()
{
	cout << "Enter the Speed level from 1 to 10: ";
	cin >> speedlevel;
	if (speedlevel < 1)
	{
		speedlevel = 1;
	}
	else if (speedlevel > 10)
	{
		speedlevel = 10;
	}
}
