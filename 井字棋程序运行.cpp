#include<stdio.h>
#include<graphics.h>
#include<Windows.h>
#include"Class1.h"
#include"qjsm.h"

int mouse_test(const double, const double, const double, const double);
int mouse_test(const double x1, const double x2, const double y1, const double y2, QUYU::Qu_yu_lei_1& a, unsigned int pd_1, unsigned int pd_2);
void GameInit(void);
void draw_get(void);
void ht_xo(USER::User&, USER::User&);
int win(void);
void win_2(int i);

//绘制网格
void draw_get(void)
{
	lineto(0, 0);
	setlinecolor(RED);
	line(0, (int)windows_y_3_1, (int)windows_x, (int)windows_y_3_1);
	line(0, (int)windows_y_3_2, (int)windows_x, (int)windows_y_3_2);
	line((int)windows_x_3_1, 0, (int)windows_x_3_1, (int)windows_x);
	line((int)windows_x_3_2, 0, (int)windows_x_3_2, (int)windows_x);
}
//鼠标区域检测函数
int mouse_test(const double x1, const double x2, const double y1, const double y2)
{
	if (gm.x <= windows_x && gm.x >= 0 && gm.y <= windows_y && gm.y >= 0)
	{
		if (((double)gm.x >= x1) && ((double)gm.x <= x2))
		{
			if (((double)gm.y >= y1) && ((double)gm.y <= y2))
			{
				if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000))
				{
					return 1;
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -2;
			}
		}
		else
		{
			return -2;
		}
	}
	else
	{
		return 0;
	}
}
//xo绘图
void ht_xo(USER::User& a, USER::User& b)
{
	for (int i = 0; i <= 2; ++i)
	{
		for (int j = 0; j <= 2; ++j)
		{
			xo_.xy_overloading((windows_x_3_1)*i, (windows_y_3_1)*j, (windows_x_3_1) * (i + 1.0), (windows_y_3_1) * (j + 1.0));
			if ((xo_.mtest(0, 0)) == 1)
			{
				if (xo == 0 && shuzu[i][j] == 0)
				{
					std::cout << "轮到玩家" << a.name() << std::endl;
					xo = 1;
					shuzu[i][j] = -1;
					shuzu_2[i][j] = 1;
					return;
				}
				if (xo == 1 && shuzu[i][j] == 0)
				{
					std::cout << "轮到玩家" << b.name() << std::endl;
					xo = 0;
					shuzu[i][j] = -2;
					shuzu_2[i][j] = 1;
					return;
				}
			}
		}
	}
	return;
}

//胜利判定
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

//胜利成功判定
void win_2(int i)
{
	if (i == 3)
	{
		settextstyle((int)(300.0 * windows_y_bl), (int)(200.0 * windows_x_bl), "");
		outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 2.5), "平局！");
		FlushBatchDraw();
		while (win_mtest.mtest(0, 0) != 1) Sleep(10);
		GameInit();
		Sleep(10);
	}
	if (i == 1)
	{
		settextstyle((int)(200.0 * windows_y_bl), (int)(100.0 * windows_x_bl), "");
		outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 3.5), "X方胜利！");
		FlushBatchDraw();
		while (win_mtest.mtest(0, 0) != 1) Sleep(10);
		GameInit();
		Sleep(10);
	}
	if(i == 2)
	{
		settextstyle((int)(200.0 * windows_y_bl), (int)(100.0 * windows_x_bl), "");
		outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 3.5), "O方胜利！");
		FlushBatchDraw();
		while (win_mtest.mtest(0, 0) != 1) Sleep(10);
		GameInit();
		Sleep(10);
	}
}