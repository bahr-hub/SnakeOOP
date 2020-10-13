
#include "snake.h"



snake::snake(area border)
{
	init(border);
}

int snake::getSnakeLength()
{
	return snakeLength;
}

void snake::foodEaten()
{
	snakeLength += 4;
	score = score + 10;
}



COORD snake::getBodyElement(int index)
{
	return body[index];
}

void snake::setBody(int index, COORD value)
{
	body[index].X = value.X;
	body[index].Y = value.Y;


}

void snake::init(area area1)
{
	dir = RIGHT;
	snakeLength = 3;
	score = 0;
	
	for (int i = 0; i < snakeLength; i++)
	{
		if (i == 0)
		{
			body[0].X = area1.width / 2;
			body[0].Y = area1.hight / 2;
			continue;
		}
		body[i] = { body[i - 1].X - 1, body[i - 1].Y };
	}
}


void snake::print()
{
	for (int i = 0; i < snakeLength; i++)
	{
		Screen::setPosition(body[i].X, body[i].Y);
		if (i == 0)
		{
			Screen::setColor(3);
			cout << "O";
			continue;
		}
		Screen::setColor(6);
		cout << "o";
	}
}

void snake::clear()
{
	for (int i = 0; i < snakeLength; i++)
	{
		Screen::setPosition(body[i].X, body[i].Y);
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

void snake::printScore(area area1)
{
	Screen::setPosition(0, area1.hight + 2);
	Screen::setColor(7);;
	cout << "Score:  " << score;
}

void snake::setSpeed(Userinput speed)
{
	Sleep(500 / speed.speedlevel);
}

void snake::chekeSelfCollision()
{
	for (int i = 1; i < snakeLength; i++)
	{
		if ((body[0].X == body[i].X && body[0].Y == body[i].Y))
		{
			gameOver = true;
			system("CLS");

			Screen::setPosition(50, 4);
			cout << "Gameover" << endl;
			system("pause");
		}
	}
}
