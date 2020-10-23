#include<stdio.h>
#include<graphics.h>
#include<easyx.h>
#include"qjsm.h"
#include"Class1.h"

void draw(void);
void draw_3(void);
void draw_2(void);
void draw_cd_2(void);
void draw_sz_zt(void);
void draw_sz_1_3(void);
void draw_fbl(void);
void draw_fbl_xz(void);
void start_dh(int, int);

//启动加载绘图函数
void start_dh(int x, int y)
{
	putpixel(x, y, BLUE);
	setfillcolor(getpixel(x, y));
	solidrectangle(x, y, x + (windows_x / 10), y + (windows_y / 10));
}

void draw(void)
{
	while (end_jzq == 1)
	{
		draw_tb = 0;
		BeginBatchDraw();
		li_zi_1_create_1.lizi_1(li_zi_1_create_1);
		if (cd_2_qd == 1)
		{
			if (cd_sz_pd == 0)
			{
				for (int i = 0; i < 3; ++i)
				{
					for (int j = 0; j < 2; ++j)
					{
						if (shuzu_fbl_1[i][j]) shuzu_fbl_2[i][j] = 1;
						else shuzu_fbl_2[i][j] = 0;
					}
				}
				cd_sz_pd = 1;
				draw_cd_2();
				draw_sz_zt();
				if (cd_sz_1) cd_sz_1_1 = 1;
				else cd_sz_1_1 = 0;
				if (cd_sz_2) cd_sz_2_2 = 1;
				else cd_sz_2_2 = 0;
				if (cd_sz_3) cd_sz_3_3 = 1;
				else cd_sz_3_3 = 0;
			}
			if (cd_sz_2) draw_fbl_xz();
			mouse_cd_sz_1_3();
			draw_sz_1_3();
		}
		else
		{
			if (pd_ms >= 1.0)
			{
				start = 1;
				if ((li_zi_1_create_1.lizi1_kg(li_zi_1_create_1)) == 0)
				{
					setfillcolor(RED);
					solidrectangle(0, 0, (int)(40.0 * windows_x_bl), (int)(40.0 * windows_y_bl));
					setfillcolor(WHITE);
					draw_get();
					draw_3();
					pd_ms = 2.0;
				}
			}
			else
			{
				setfillcolor(BLUE);
				if (pd_cd_1 == 1)
				{
					setlinecolor(RED);
				}
				else setlinecolor(BLACK);
				fillroundrect((int)windows_x_3_1, (int)(windows_y_3_2), (int)(windows_x_3_2), (int)(windows_y - (300 * windows_y_bl)), (int)(100 * windows_x_bl), (int)(100 * windows_y_bl));
				if (pd_cd_2_2 == 1)
				{
					setlinecolor(RED);
				}
				else setlinecolor(BLACK);
				fillroundrect((int)windows_x_3_1, (int)(windows_y_3_2 + (100 * windows_y_bl)), (int)windows_x_3_2, (int)(windows_y - (200 * windows_y_bl)), (int)(100 * windows_x_bl), (int)(100 * windows_y_bl));
				if (pd_cd_3_3 == 1)
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
		}
		EndBatchDraw();
		draw_tb = 1;
		Sleep(10);
	}
}

void draw_3(void)
{
	if (draw_33 == 0)
	{
		cleardevice();
		setbkcolor(WHITE);
		draw_33 = 1;
	}
}

void draw_2(void)
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
void draw_cd_2(void)
{
	cleardevice();
	putimage(0, 0, &p_a);
	setfillstyle(BS_DIBPATTERN, NULL, &p_a);
	setlinecolor(BLUE);
	setlinestyle(PS_SOLID, 10);
	fillroundrect((int)(windows_x / 12.0 * 1.0), (int)(windows_y / 12.0 * 1.0), (int)(windows_x / 12.0 * 11.0), (int)(windows_y / 12.0 * 11.0), (int)(10 * windows_x_bl), (int)(10 * windows_y_bl));
}
void draw_sz_zt(void)
{
	setbkmode(TRANSPARENT);
	settextcolor(WHITE);
	settextstyle((int)(50.0 * windows_y_bl), (int)(25.0 * windows_x_bl), "");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 1.5), "BGM设置");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 2.5), "画面分辨率设置");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 3.5), "提示声音设置");
	outtextxy((int)(windows_x / 12.0 * 2.5), (int)(windows_y / 12.0 * 9.5), "确定");
}
void draw_sz_1_3(void)
{
	setlinecolor(BLUE);
	setlinestyle(PS_SOLID, 10);
	if (cd_sz_1 == 0 && cd_sz_1_1 == 0)
	{
		cd_sz_1_1 = 1;
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 1.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 2.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		BGM_sz = 0;
	}
	else if(cd_sz_1 == 1 && cd_sz_1_1 == 1)
	{ 
		cd_sz_1_1 = 0;
		setfillstyle(BS_SOLID); 
		setfillcolor(RED);
		fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 1.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 2.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		BGM_sz = 1;
	}
	if (cd_sz_2 == 0 && cd_sz_2_2 == 0)
	{
		fbl_cz();
		shuzu_fbl_1[1][0] = 1;
		windows_fbl_xy_hc[0] = 1152;
		windows_fbl_xy_hc[1] = 648;
		fbl_gb = 1;
		cd_sz_2_2 = 1;
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 2.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 3.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
		solidrectangle((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 4.5), (int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 7.5));
	}
	else if (cd_sz_2 == 1 && cd_sz_2_2 == 1)
	{
		for (int i = 0; i < 3; ++i)
		{
			for (int j = 0; j < 2; ++j)
			{
				if (shuzu_fbl_1[i][j]) shuzu_fbl_2[i][j] = 1;
				else shuzu_fbl_2[i][j] = 0;
			}
		}
		draw_fbl();
		cd_sz_2_2 = 0;
		setfillstyle(BS_SOLID);
		setfillcolor(RED);
		fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 2.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 3.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
	}
	if (cd_sz_3 == 0 && cd_sz_3_3 == 0)
	{
		cd_sz_3_3 = 1;
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 3.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 4.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
	}
	else if (cd_sz_3 == 1 && cd_sz_3_3 == 1)
	{
		cd_sz_3_3 = 0;
		setfillstyle(BS_SOLID);
		setfillcolor(RED);
		fillroundrect((int)(windows_x / 12.0 * 9.5), (int)(windows_y / 12.0 * 3.7), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 4.3), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
	}
}
void draw_fbl(void)
{
	setbkmode(TRANSPARENT);
	settextcolor(WHITE);
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 4.5), "800 X 600");
	outtextxy((int)(windows_x / 12.0 * 5.5), (int)(windows_y / 12.0 * 4.5), "1024 X768");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 5.5), "1152 X 648");
	outtextxy((int)(windows_x / 12.0 * 5.5), (int)(windows_y / 12.0 * 5.5), "1280 X 1024");
	outtextxy((int)(windows_x / 12.0 * 1.5), (int)(windows_y / 12.0 * 6.5), "1680 X 1050");
	outtextxy((int)(windows_x / 12.0 * 5.5), (int)(windows_y / 12.0 * 6.5), "1920 X 1080");
}
void draw_fbl_xz(void)
{
	mouse_fbl();
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (shuzu_fbl_1[i][j] == 0 && shuzu_fbl_2[i][j] == 0)
			{
				shuzu_fbl_2[i][j] = 1;
				setfillstyle(BS_DIBPATTERN, NULL, &p_a);
				fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
			}
			else if (shuzu_fbl_1[i][j] == 1 && shuzu_fbl_2[i][j] == 1)
			{
				shuzu_fbl_2[i][j] = 0;
				setfillstyle(BS_SOLID);
				setfillcolor(RED);
				fillroundrect((int)(windows_x / 12.0 * ((double)(j * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(i + 4.7)), (int)(windows_x / 12.0 * ((double)(j * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(i + 5.3)), (int)(30 * windows_x_bl), (int)(30 * windows_y_bl));
				if (i == 0 && j == 0)
				{
					windows_fbl_xy_hc[0] = windows_fbl_xy[0][0];
					windows_fbl_xy_hc[1] = windows_fbl_xy[0][1];
				}
				if (i == 0 && j == 1)
				{
					windows_fbl_xy_hc[0] = windows_fbl_xy[1][0];
					windows_fbl_xy_hc[1] = windows_fbl_xy[1][1];
				}
				if (i == 1 && j == 0)
				{
					windows_fbl_xy_hc[0] = windows_fbl_xy[2][0];
					windows_fbl_xy_hc[1] = windows_fbl_xy[2][1];
				}
				if (i == 1 && j == 1)
				{
					windows_fbl_xy_hc[0] = windows_fbl_xy[3][0];
					windows_fbl_xy_hc[1] = windows_fbl_xy[3][1];
				}
				if (i == 2 && j == 0)
				{
					windows_fbl_xy_hc[0] = windows_fbl_xy[4][0];
					windows_fbl_xy_hc[1] = windows_fbl_xy[4][1];
				}
				if (i == 2 && j == 1)
				{
					windows_fbl_xy_hc[0] = windows_fbl_xy[5][0];
					windows_fbl_xy_hc[1] = windows_fbl_xy[5][1];
				}
			}
		}
	}

}