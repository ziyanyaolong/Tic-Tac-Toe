#include<stdio.h>
#include<easyx.h>
#include <graphics.h>
#include"qjsm.h"
#include"struct_jgt.h"

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
	setfillstyle(BS_DIBPATTERN, NULL, &p_a);
	solidrectangle(p_lz1->history_x, p_lz1->history_y, (int)(762.0 / 50.0 * windows_x_bl), (int)(641.0 / 50.0 * windows_y_bl));
	setfillstyle(BS_SOLID);
	p_lz1->lz1_js_x += (int)(762.0 / 50.0 * windows_x_bl);
	p_lz1->lz1_js_y += (int)(641.0 / 50.0 * windows_y_bl);
	++pd_lz1;
	putimage(x, y, &p_e, NOTSRCERASE);
	putimage(x, y, &p_d, SRCINVERT);
	p_lz1->history_x = x;
	p_lz1->history_y = y;
}
void lizi_2(int x, int y)
{
	setfillstyle(BS_DIBPATTERN, NULL, &p_a);
	putpixel(x, y, BLUE);
	setfillcolor(getpixel(x, y));
	solidcircle(x, y, 5);
	graphdefaults();
}
