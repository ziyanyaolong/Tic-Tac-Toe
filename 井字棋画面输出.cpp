#include<stdio.h>
#include<graphics.h>
#include<easyx.h>
#include<iostream>
#include<thread>
#include"qjsm.h"
#include"Class1.h"

void draw();
void draw_2();
void draw_cd_2();
void draw_sz_zt();
void draw_sz_1_3();
void draw_fbl();
void draw_fbl_xz();
void start_dh(int, int);
void draw_zcd();
void draw_return_cd();

//启动加载绘图函数
void start_dh(int x, int y)
{
	putpixel(x, y, BLUE);
	setfillcolor(getpixel(x, y));
	solidrectangle(x, y, x + (windows_x / 10), y + (windows_y / 10));
}

void draw_return_cd()
{
	setfillstyle(RED);
	solidrectangle(0, 0, (int)(40.0 * windows_x_bl), (int)(40.0 * windows_y_bl));
}

void draw()
{
	while (end_jzq == 1)
	{
		while (cai_dan_1.sz_back(0, 1)) Sleep(10);
		draw_tb = 0;
		BeginBatchDraw();
		li_zi_1_create_1.lizi_1();
		if (cai_dan_2.sz_back(0, 1))
		{
			if (cai_dan_2.sz_back(1, 1) == false)
			{
				cai_dan_2.sz_assignment(1, 1, true);
				cai_dan_2.sz_assignment(2, 0, true);
				draw_cd_2();
			}
			if (cai_dan_2_2.sz_back(0, 1)) mouse_cd_sz_fbl();
			draw_sz_1_3();
			draw_sz_zt();
		}
		else
		{
			draw_zcd();
		}
		EndBatchDraw();
		Sleep(10);
		draw_tb = 1;
	}
}

void draw_2()
{
	for (int i = 0 ; i <= 2; ++i)
	{
		for (int j = 0; j <= 2; ++j)
		{
			if (shuzu[i][j] == -1)
			{
				shuzu[i][j] = 1;
				putimage(((int)windows_x_3_1 * i), ((int)windows_y_3_1 * j), &p_b);
			}
			if (shuzu[i][j] == -2)
			{
				shuzu[i][j] = 2;
				putimage(((int)windows_x_3_1 * i), ((int)windows_y_3_1 * j), &p_c);
			}
		}
			
			
	}
}

void draw_zcd()
{
	setfillcolor(BLUE);
	if (cai_dan_1.sz_back_int(0) == -1 || cai_dan_1.sz_back_int(0) == -3)
	{
		setlinecolor(RED);
	}
	else setlinecolor(BLACK);
	fillroundrect((int)windows_x_3_1, (int)(windows_y_3_2), (int)(windows_x_3_2), (int)(windows_y - (300 * windows_y_bl)), (int)(100 * windows_x_bl), (int)(100 * windows_y_bl));
	if (cai_dan_2.sz_back_int(0) == -1 || cai_dan_2.sz_back_int(0) == -3)
	{
		setlinecolor(RED);
	}
	else setlinecolor(BLACK);
	fillroundrect((int)windows_x_3_1, (int)(windows_y_3_2 + (100 * windows_y_bl)), (int)windows_x_3_2, (int)(windows_y - (200 * windows_y_bl)), (int)(100 * windows_x_bl), (int)(100 * windows_y_bl));
	if (cai_dan_3.sz_back_int(0) == -1 || cai_dan_3.sz_back_int(0) == -3)
	{
		setlinecolor(RED);
	}
	else setlinecolor(BLACK);
	fillroundrect((int)windows_x_3_1, (int)(windows_y_3_2 + (200 * windows_y_bl)), (int)windows_x_3_2, (int)(windows_y - (100 * windows_y_bl)), (int)(100 * windows_x_bl), (int)(100 * windows_y_bl));
	settextstyle((int)(50.0 * windows_y_bl), (int)(25.0 * windows_x_bl), "");
	setbkmode(TRANSPARENT);
	settextcolor(YELLOW);
	outtextxy((int)(windows_x_3_1 + (100.0 * windows_x_bl)), (int)(windows_y - (80.0 * windows_y_bl)), "结束游戏");
	outtextxy((int)(windows_x_3_1 + (138.0 * windows_x_bl)), (int)(windows_y - (180.0 * windows_y_bl)), "设置");
	outtextxy((int)(windows_x_3_1 + (100.0 * windows_x_bl)), (int)(windows_y - (280.0 * windows_y_bl)), "开始游戏");
	settextcolor(GREEN);
	outtextxy((int)(windows_x_3_1 + (125 * windows_x_bl)), (int)(windows_y_3_1 - (50.0 * windows_y_bl)), "井字棋");
	settextcolor(RED);
	settextstyle((int)(50.0 * windows_y_bl), (int)(25.0 * windows_x_bl), "");
	outtextxy((int)(windows_x / 20.0), (int)(windows_y / 12.0 * 10.0), "by 紫焰耀龙");
}

void draw_cd_2()
{
	cleardevice();
	putimage(0, 0, &p_a);
	setfillstyle(BS_DIBPATTERN, NULL, &p_a);
	setlinecolor(BLUE);
	setlinestyle(PS_SOLID, 10);
	fillroundrect((int)(windows_x / 12.0 * 1.0), (int)(windows_y / 12.0 * 1.0), (int)(windows_x / 12.0 * 11.0), (int)(windows_y / 12.0 * 11.0), (int)(10 * windows_x_bl), (int)(10 * windows_y_bl));
}
void draw_sz_zt()
{
	setbkmode(TRANSPARENT);
	settextcolor(WHITE);
	settextstyle((int)(50.0 * windows_y_bl), (int)(25.0 * windows_x_bl), "");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 1.5), "BGM设置");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 2.5), "画面分辨率设置");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 3.5), "提示声音设置");
	outtextxy((int)(windows_x / 12.0 * 2.5), (int)(windows_y / 12.0 * 9.5), "确定");
}

void draw_sz_1_3()
{
	if (cai_dan_2.sz_back(2, 0))
	{
		cai_dan_2.sz_assignment(2, 0, false);
		setlinecolor(BLUE);
		setlinestyle(PS_SOLID, 10);
		if (!cai_dan_2_1.sz_back(0, 1))
		{
			setfillstyle(BS_DIBPATTERN, NULL, &p_a);
			fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 1.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 2.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
			BGM_sz = 0;
		}
		else if (cai_dan_2_1.sz_back(0, 1))
		{
			setfillstyle(BS_SOLID);
			setfillcolor(RED);
			fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 1.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 2.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
			BGM_sz = 1;
		}
		if (!cai_dan_2_2.sz_back(0, 1))
		{
			windows_fbl_xy_hc[0] = 1152;
			windows_fbl_xy_hc[1] = 648;
			setfillstyle(BS_DIBPATTERN, NULL, &p_a);
			fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 2.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 3.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
			solidrectangle((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 4.5), (int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 7.5));
		}
		else if (cai_dan_2_2.sz_back(0, 1))
		{
			draw_fbl();
			setfillstyle(BS_SOLID);
			setfillcolor(RED);
			fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 2.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 3.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		}
		if (!cai_dan_2_3.sz_back(0, 1))
		{
			sounds.sz_assignment(0, 1, false);
			setfillstyle(BS_DIBPATTERN, NULL, &p_a);
			fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 3.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 4.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		}
		else if (cai_dan_2_3.sz_back(0, 1))
		{
			sounds.sz_assignment(0, 1, true);
			setfillstyle(BS_SOLID);
			setfillcolor(RED);
			fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 3.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 4.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		}
	}
}
void draw_fbl()
{
	setbkmode(TRANSPARENT);
	settextcolor(WHITE);
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 4.5), "800 X 600");
	outtextxy((int)(windows_x / 12.0 * 5.5), (int)(windows_y / 12.0 * 4.5), "1024 X768");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 5.5), "1152 X 648");
	outtextxy((int)(windows_x / 12.0 * 5.5), (int)(windows_y / 12.0 * 5.5), "1280 X 1024");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 6.5), "1680 X 1050");
	outtextxy((int)(windows_x / 12.0 * 5.5), (int)(windows_y / 12.0 * 6.5), "1920 X 1080");
	draw_fbl_xz();
}

void draw_fbl_xz()
{
	int i = 0;
	int j = 0;
	if (cai_dan_2_fbl[0].sz_back(0, 1))
	{
		setfillstyle(BS_SOLID);
		setfillcolor(RED);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		windows_fbl_xy_hc[0] = windows_fbl_xy[0][0];
		windows_fbl_xy_hc[1] = windows_fbl_xy[0][1];
	}
	else
	{
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
	}
	++j;
	if (cai_dan_2_fbl[1].sz_back(0, 1))
	{
		setfillstyle(BS_SOLID);
		setfillcolor(RED);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		windows_fbl_xy_hc[0] = windows_fbl_xy[1][0];
		windows_fbl_xy_hc[1] = windows_fbl_xy[1][1];
	}
	else
	{
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
	}
	--j;
	++i;
	if (cai_dan_2_fbl[2].sz_back(0, 1))
	{
		setfillstyle(BS_SOLID);
		setfillcolor(RED);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		windows_fbl_xy_hc[0] = windows_fbl_xy[2][0];
		windows_fbl_xy_hc[1] = windows_fbl_xy[2][1];
	}
	else
	{
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
	}
	++j;
	if (cai_dan_2_fbl[3].sz_back(0, 1))
	{
		setfillstyle(BS_SOLID);
		setfillcolor(RED);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		windows_fbl_xy_hc[0] = windows_fbl_xy[3][0];
		windows_fbl_xy_hc[1] = windows_fbl_xy[3][1];
	}
	else
	{
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
	}
	--j;
	++i;
	if (cai_dan_2_fbl[4].sz_back(0, 1))
	{
		setfillstyle(BS_SOLID);
		setfillcolor(RED);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		windows_fbl_xy_hc[0] = windows_fbl_xy[4][0];
		windows_fbl_xy_hc[1] = windows_fbl_xy[4][1];
	}
	else
	{
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
	}
	++j;
	if (cai_dan_2_fbl[5].sz_back(0, 1))
	{
		setfillstyle(BS_SOLID);
		setfillcolor(RED);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		windows_fbl_xy_hc[0] = windows_fbl_xy[5][0];
		windows_fbl_xy_hc[1] = windows_fbl_xy[5][1];
	}
	else
	{
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
	}
}
