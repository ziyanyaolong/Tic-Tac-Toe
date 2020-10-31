#include<stdio.h>
#include<graphics.h>
#include"Class1.h"
#include"qjsm.h"

void GameInit(void);

void GameInit(void)
{
	BeginBatchDraw();
	cai_dan_1.sz_assignment(0, 1, false);
	cai_dan_1.sz_assignment(3, 0, false);
	xo_.sz_assignment(0, 0, false);
	gm.x = 0;
	gm.y = 0;
	cleardevice();
	graphdefaults();
	li_zi_1_create_1.rest();
	windows_x_bl = (double)windows_x / 1152.0;
	windows_y_bl = (double)windows_y / 648.0;
	windows_x_3_1 = (double)windows_x / 3.0;
	windows_x_3_2 = (double)windows_x / 3.0 * 2.0;
	windows_y_3_1 = (double)windows_y / 3.0;
	windows_y_3_2 = (double)windows_y / 3.0 * 2.0;
	xo = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			shuzu[i][j] = 0;
		}
	}
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			shuzu_2[i][j] = 0;
		}
	}
	pj_zcpd = 0;
	setorigin(0, 0);
	loadimage(&p_a, "./res/zhucaidan.jpg", (int)windows_x, (int)windows_y);
	loadimage(&p_b, "./res/XXX.png", (int)windows_x_3_1, (int)windows_y_3_1);
	loadimage(&p_c, "./res/OOO.png", (int)windows_x_3_1, (int)windows_y_3_1);
	loadimage(&p_d, "./res/lizi_1_1.png", (int)(762.0 / 50.0 * windows_x_bl), (int)(641.0 / 50.0 * windows_y_bl));
	loadimage(&p_e, "./res/lizi_1_2.png", (int)(762.0 / 50.0 * windows_x_bl), (int)(641.0 / 50.0 * windows_y_bl));
	Resize(&p_d, (int)(762.0 / 50.0 * windows_x_bl), (int)(641.0 / 50.0 * windows_y_bl));
	Resize(&p_e, (int)(762.0 / 50.0 * windows_x_bl), (int)(641.0 / 50.0 * windows_y_bl));
	Resize(&p_a, (int)windows_x, (int)windows_y);
	Resize(&p_b, (int)windows_x_3_1, (int)windows_y_3_1);
	Resize(&p_c, (int)windows_x_3_1, (int)windows_y_3_1);
	setlinestyle(PS_SOLID, 2);
	setbkcolor(WHITE);
	cleardevice();
	putimage(0, 0, &p_a);
	StopBGM();
	PlayBGM();
	EndBatchDraw();
}

/*void fbl_cz(void)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			shuzu_fbl_1[i][j] = 0;
		}
	}
}*/