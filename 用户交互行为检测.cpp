#include<stdio.h>
#include<graphics.h>
#include<easyx.h>
#include"qjsm.h"

void mouse(void);
void mouse_cd_2(void);
void mouse_cd_sz_1_3(void);
int mouse_cd_3(void);
void mouse_fbl(void);

void mouse(void)
{
	if (pd_ms <= 0 && start <= 0)
	{
		pd_ms = mouse_test(windows_x_3_1, windows_x_3_2, windows_y - (300.0 * windows_y_bl), windows_y_3_2);
		if (pd_ms == -11.0) pd_cd_1 = 0;
		if (pd_ms == -10.0 && pd_cd_1 == 0)
		{
			cdxxsy();
			pd_cd_1 = 1;
		}
		if (pd_ms == 10.0)
		{
			if(BGM_sz == 0) StopBGM();
			cdqdsy();
		}
	}
	if (pd_ms >= 2.0)
	{
		if (pd_ms_2 = mouse_test(0, 40.0 * windows_x_bl, 0, 40.0 * windows_y_bl) >= 1.0)
		{
			cdxxsy();
			GameInit();
			pd_ms = 0;
			pd_ms_2 = 0;
		}
	}
}
int mouse_cd_3(void)
{
	if ((pd_cd_3 = (int)(mouse_test(windows_x_3_1, windows_x_3_2, (windows_y - (100 * windows_y_bl)), (windows_y_3_2 + (200 * windows_y_bl))))) && start <= 0)
	{
		if (pd_cd_3 >= 1) return 1;
		if (pd_cd_3 == -10 && pd_cd_3_3 == 0)
		{
			pd_cd_3_3 = 1;
			cdxxsy();
		}
		if (pd_cd_3 == -11) pd_cd_3_3 = 0;
	}
	return 0;
}
void mouse_cd_2(void)
{
	if ((pd_cd_2 = (int)(mouse_test(windows_x_3_1, windows_x_3_2, (windows_y - (200 * windows_y_bl)), (windows_y_3_2 + (100 * windows_y_bl))))) && start <= 0)
	{
		if (pd_cd_2 >= 1 && cd_2_qd == 0) cd_2_qd = 1;
		if (pd_cd_2 == -10 && pd_cd_2_2 == 0)
		{
			pd_cd_2_2 = 1;
			cdxxsy();
		}
		if (pd_cd_2 == -11) pd_cd_2_2 = 0;
	}
}
void mouse_cd_sz_1_3(void)
{
	if (cd_sz_1 == 1)
	{
		if (mouse_test((int)(windows_x / 12.0 * 9.5), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 1.7), (int)(windows_y / 12.0 * 2.3)) >= 1.0) cd_sz_1 = 0;
	}
	if (cd_sz_1 == 0)
	{
		if (mouse_test((int)(windows_x / 12.0 * 9.5), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 1.7), (int)(windows_y / 12.0 * 2.3)) >= 1.0) cd_sz_1 = 1;
	}
	if (cd_sz_2 == 1)
	{
		if (mouse_test((int)(windows_x / 12.0 * 9.5), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 2.7), (int)(windows_y / 12.0 * 3.3)) >= 1.0) cd_sz_2 = 0;
	}
	if (cd_sz_2 == 0)
	{
		if (mouse_test((int)(windows_x / 12.0 * 9.5), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 2.7), (int)(windows_y / 12.0 * 3.3)) >= 1.0) cd_sz_2 = 1;
	}
	if (cd_sz_3 == 1)
	{
		if (mouse_test((int)(windows_x / 12.0 * 9.5), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 3.7), (int)(windows_y / 12.0 * 4.3)) >= 1.0) cd_sz_3 = 0;
	}
	if (cd_sz_3 == 0)
	{
		if (mouse_test((int)(windows_x / 12.0 * 9.5), (int)(windows_x / 12.0 * 10.0), (int)(windows_y / 12.0 * 3.7), (int)(windows_y / 12.0 * 4.3)) >= 1.0) cd_sz_3 = 1;
	}
}
void mouse_fbl(void)
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 2; ++j)
		{
			if (mouse_test(windows_x / 12.0 * ((j * 4.0) + 4.7), (windows_x / 12.0 * ((j * 4.0) + 5.3)), (windows_y / 12.0 * (i + 4.7)), (windows_y / 12.0 * (i + 5.3))) >= 1.0)
			{
				if (shuzu_fbl_1[i][j] == 0) 
				{
					fbl_cz();
					shuzu_fbl_1[i][j] = 1;
					shuzu_fbl_2[i][j] = 1;
					fbl_gb = 1;
					break;
				}
			}
		}
	}
}