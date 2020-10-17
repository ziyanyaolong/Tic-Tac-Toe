#include<stdio.h>
#include<graphics.h>
#include"qjsm.h"

void GameInit(void);
void fbl_cz(void);

void GameInit(void)
{
	BeginBatchDraw();
	cleardevice();
	graphdefaults();
	windows_x_bl = (double)windows_x / 1152;
	windows_y_bl = (double)windows_y / 648;
	windows_x_3_1 = (double)windows_x / 3.0;
	windows_x_3_2 = (double)windows_x / 3.0 * 2.0;
	windows_y_3_1 = (double)windows_y / 3.0;
	windows_y_3_2 = (double)windows_y / 3.0 * 2.0;
	pd_ms_2 = 0;
	pd_ms = 0;
	ii1 = -1;
	ii2 = 1;
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
	start = 0;
	draw_33 = 0;
	pd_cd_1 = 0;
	pd_cd_2 = 0;
	pd_cd_2_2 = 0;
	pd_cd_3_3 = 0;
	pd_cd_3 = 0;
	cd_2_qd = 0;
	cd_sz_pd = 0;
	pj_zcpd = 0;
	pd_lz1 = 0;
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
	EndBatchDraw();
}

void fbl_cz(void)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			shuzu_fbl_1[i][j] = 0;
		}
	}
}