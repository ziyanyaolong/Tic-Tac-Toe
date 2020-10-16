#include<stdio.h>
#include<graphics.h>
#include <Windows.h>
#include"qjsm.h"

double mouse_test(double, double, double, double);
void GameInit(void);
void draw_get(void);
int ht_xo(int a);
int win(void);
void win_2(int i);

void draw_get(void)
{
	lineto(0, 0);
	setlinecolor(RED);
	line(0, (int)windows_y_3_1, (int)windows_x, (int)windows_y_3_1);
	line(0, (int)windows_y_3_2, (int)windows_x, (int)windows_y_3_2);
	line((int)windows_x_3_1, 0, (int)windows_x_3_1, (int)windows_x);
	line((int)windows_x_3_2, 0, (int)windows_x_3_2, (int)windows_x);
}

double mouse_test(double x1, double x2, double y1, double y2)
{
	POINT gm;
	HWND cc = GetHWnd();
	GetCursorPos(&gm);
	ScreenToClient(cc, &gm);
		if (gm.x <= windows_x && gm.x >= 0 && gm.y <= windows_y && gm.y >= 0)
		{
			if (((double)gm.x >= x1) && ((double)gm.x <= x2))
			{
				if (((double)gm.y >= y1) && ((double)gm.y <= y2))
				{
					if (GetAsyncKeyState(VK_LBUTTON) == 0xffff8001)
					{
						return 10.0;
					}
					else
					{
						return -10.0;
					}
				}
				else
				{
					return -11.0;
				}
			}
			else
			{
				return -11.0;
			}
		}
		else
		{
			return -11.0;
		}
	return 0;
}

int ht_xo(int a)
{
	for (int i = 0; i <= 2; ++i)
	{
		for (int j = 0; j <= 2; ++j)
		{
			if ((mouse_test((windows_x_3_1)*i, (windows_x_3_1) * (i + 1.0), (windows_y_3_1)*j, (windows_y_3_1) * (j + 1.0))) >= 1.0)
			{
				if (a == 1 && shuzu[i][j] == 0)
				{
					shuzu[i][j] = -1;
					shuzu_2[i][j] = 1;
					return 2;
				}
				if (a == 2 && shuzu[i][j] == 0)
				{
					shuzu[i][j] = -2;
					shuzu_2[i][j] = 1;
					return 1;
				}
			}
		}
	}
	return a;
}

int win(void)
{
	if (shuzu_2[0][0] == 1 && shuzu[0][0] == 1)
	{
		if (shuzu_2[1][1] == 1 && shuzu[1][1] == 1)
		{
			if (shuzu_2[2][2] == 1 && shuzu[2][2] == 1)
			{
				return 1;
			}
		}
	}
	if (shuzu_2[0][0] == 1 && shuzu[0][0] == 2)
	{
		if (shuzu_2[1][1] == 1 && shuzu[1][1] == 2)
		{
			if (shuzu_2[2][2] == 1 && shuzu[2][2] == 2)
			{
				return 2;
			}
		}
	}
	if (shuzu_2[0][2] == 1 && shuzu[0][2] == 1)
	{
		if (shuzu_2[1][1] == 1 && shuzu[1][1] == 1)
		{
			if (shuzu_2[2][0] == 1 && shuzu[2][0] == 1)
			{
				return 1;
			}
		}
	}
	if (shuzu_2[0][2] == 1 && shuzu[0][2] == 2)
	{
		if (shuzu_2[1][1] == 1 && shuzu[1][1] == 2)
		{
			if (shuzu_2[2][0] == 1 && shuzu[2][0] == 2)
			{
				return 2;
			}
		}
	}
	for (int i = 0; i <= 2; ++i)
	{
		if (shuzu_2[i][0] == 1 && shuzu[i][0] == 1)
		{
			if (shuzu_2[i][1] == 1 && shuzu[i][1] == 1)
			{
				if (shuzu_2[i][2] == 1 && shuzu[i][2] == 1)
				{
					return 1;
				}
			}
		}
		if (shuzu_2[0][i] == 1 && shuzu[0][i] == 1)
		{
			if (shuzu_2[1][i] == 1 && shuzu[1][i] == 1)
			{
				if (shuzu_2[2][i] == 1 && shuzu[2][i] == 1)
				{
					return 1;
				}
			}
		}
		if (shuzu_2[i][0] == 1 && shuzu[i][0] == 2)
		{
			if (shuzu_2[i][1] == 1 && shuzu[i][1] == 2)
			{
				if (shuzu_2[i][2] == 1 && shuzu[i][2] == 2)
				{
					return 2;
				}
			}
		}
		if (shuzu_2[0][i] == 1 && shuzu[0][i] == 2)
		{
			if (shuzu_2[1][i] == 1 && shuzu[1][i] == 2)
			{
				if (shuzu_2[2][i] == 1 && shuzu[2][i] == 2)
				{
					return 2;
				}
			}
		}
	}
	if (shuzu_2[0][0])if (shuzu_2[0][1])if (shuzu_2[0][2])if (shuzu_2[1][0])if (shuzu_2[1][1])if (shuzu_2[1][2])if (shuzu_2[2][0])if (shuzu_2[2][1])if (shuzu_2[2][2])if (pj_zcpd != 1)
	{
		pj_zcpd = 1;
		return 0;
	}
	if (pj_zcpd == 1) return 3;
	return 0;
}
void win_2(int i)
{
	if (i == 3)
	{
		settextstyle((int)(300.0 * windows_y_bl), (int)(200.0 * windows_x_bl), "");
		outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 2.5), "平局！");
		FlushBatchDraw();
		while (mouse_test(0, windows_x, 0, windows_y) <= 1.0) Sleep(5);
		GameInit();
	}
	if (i == 1)
	{
		settextstyle((int)(200.0 * windows_y_bl), (int)(100.0 * windows_x_bl), "");
		outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 3.5), "X方胜利！");
		FlushBatchDraw();
		while (mouse_test(0, windows_x, 0, windows_y) <= 1.0) Sleep(5);
		GameInit();
	}
	if(i == 2)
	{
		settextstyle((int)(200.0 * windows_y_bl), (int)(100.0 * windows_x_bl), "");
		outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 3.5), "O方胜利！");
		FlushBatchDraw();
		while (mouse_test(0, windows_x, 0, windows_y) <= 1.0) Sleep(5);
		GameInit();
	}
}