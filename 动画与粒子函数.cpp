#include<stdio.h>
#include<easyx.h>
#include <graphics.h>
#include"qjsm.h"

void lizi_1(int, int);
void start_dh(int, int);
void lizi_2(int x, int y);

void start_dh(int x, int y)
{
	putpixel(x, y, BLUE);
	setfillcolor(getpixel(x, y));
	solidrectangle(x, y, x + (windows_x / 10), y + (windows_y / 10));
}
void lizi_1(int x, int y)
{
	graphdefaults();
	putpixel(x, y, rand());
	setfillcolor(getpixel(x, y));
	solidcircle(x, y, 5);
}
void lizi_2(int x, int y)
{
	setfillstyle(BS_DIBPATTERN, NULL, &p_a);
	putpixel(x, y, BLUE);
	setfillcolor(getpixel(x, y));
	solidcircle(x, y, 5);
	graphdefaults();
}