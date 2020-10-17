#include<stdio.h>
#include<easyx.h>
#include <graphics.h>
#include"qjsm.h"
#include"struct_jgt.h"
#include"changliang.h"

void lizi_1(void);
void start_dh(int, int);
void lizi_2(int x, int y);

void start_dh(int x, int y)
{
	putpixel(x, y, BLUE);
	setfillcolor(getpixel(x, y));
	solidrectangle(x, y, x + (windows_x / 10), y + (windows_y / 10));
}
void lizi_1(void)
{
	if (lizi1_kg_pd)
	{
		for (int i = 0; i < LZ_SL; i++)
		{
			setfillstyle(BS_DIBPATTERN, NULL, &p_a);
			solidrectangle(p_lz1[i].history_x, p_lz1[i].history_y, (int)(762.0 / 50.0 * windows_x_bl), (int)(641.0 / 50.0 * windows_y_bl));
			setfillstyle(BS_SOLID);
			p_lz1[i].lz1_js_x += (int)(762.0 / 50.0 * windows_x_bl);
			p_lz1[i].lz1_js_y += (int)(641.0 / 50.0 * windows_y_bl);
			putimage(p_lz1[i].lz1_js_x, p_lz1[i].lz1_js_y, &p_e, NOTSRCERASE);
			putimage(p_lz1[i].lz1_js_x, p_lz1[i].lz1_js_y, &p_d, SRCINVERT);
			p_lz1[i].history_x = p_lz1[i].lz1_js_x;
			p_lz1[i].history_y = p_lz1[i].lz1_js_y;
		}
		if (pd_lz1 >= rand() % LZ_1_DRAW_MAX + LZ_1_DRAW_MIN) ++pd_lz1_2;
		if (pd_lz1_2)
		{
			pd_lz1 = 0;
			pd_lz1_2 = 0;
			for (int i = 0; i < LZ_SL; i++)
			{
				p_lz1[i].lz1_js_x = rand() % windows_x;
				p_lz1[i].lz1_js_y = rand() % windows_y;
			}
		}
		++pd_lz1;
	}
}
void lizi_2(int x, int y)
{
	setfillstyle(BS_DIBPATTERN, NULL, &p_a);
	putpixel(x, y, BLUE);
	setfillcolor(getpixel(x, y));
	solidcircle(x, y, 5);
	graphdefaults();
}
