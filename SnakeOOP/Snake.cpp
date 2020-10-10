
#include "snake.h"

void snake::init()
{
	dir = RIGHT;
	snakeLength = 3;
	//score = 0;
	//isFoodExest = false;
	for (int i = 0; i < snakeLength; i++)
	{
		if (i == 0)
		{
			//body[0].X = width / 2;
			//body[0].Y = hight / 2;
			continue;
		}
		body[i] = { body[i - 1].X - 1, body[i - 1].Y };
	}
}

void snake::print()
{
	for (int i = 0; i < snakeLength; i++)
	{
		//setPostion(body[i].X, body[i].Y);
		if (i == 0)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 3);
			cout << "O";
			continue;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
		cout << "o";
	}
}

void snake::clear()
{
	for (int i = 0; i < snakeLength; i++)
	{
		//setPostion(body[i].X, body[i].Y);
		cout << " ";
	}
}

void snake::nextMove()
{
	clear();
	COORD previousPoint, temp;
	previousPoint = body[0];

	switch (dir)
	{
	case UP:
		body[0] = { body[0].X  , body[0].Y - 1 };
		break;
	case DOWNE:
		body[0] = { body[0].X  , body[0].Y + 1 };
		break;
	case LEFT:
		body[0] = { body[0].X - 1 , body[0].Y };
		break;
	case RIGHT:
		body[0] = { body[0].X + 1 , body[0].Y };
		break;
	default:
		break;
	}

	for (int i = 1; i < snakeLength; i++)
	{
		temp = body[i];
		body[i] = previousPoint;
		previousPoint = temp;
	}
}

void snake::setSpeed()
{
	Sleep(500 / speedLevel);
}

void snake::chekeSelfCollision()
{
	for (int i = 1; i < snakeLength; i++)
	{
		if ((body[0].X == body[i].X && body[0].Y == body[i].Y))
		{
			//gameOver = true;
			system("CLS");

			//setPostion(50, 4);
			cout << "Gameover" << endl;
			system("pause");
		}
	}
}
