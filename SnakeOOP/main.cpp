#include "Snake.h"
#include "border.h"
#include "screen.h"


int main()
{
	Screen screen;
	area area1 = screen.getSize();
	Border border(area1);
	border.draw();
	snake snake1(area1);
	snake1.print();
		return 0;
}