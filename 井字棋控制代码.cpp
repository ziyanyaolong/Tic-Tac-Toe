#include<stdio.h>
#include<graphics.h>
#include"qjsm.h"
#include"struct_jgt.h"

int jzq(void);

int jzq(void)
{
	unsigned short pd_lz1_2 = 0;
	initgraph(windows_x, windows_y, EW_SHOWCONSOLE);
	GameInit();
	if (game_start_jz == 0)
	{
		game_start_jz = 1;
		setbkcolor(WHITE);
		cleardevice();
		setfillstyle(BS_DIBPATTERN, NULL, &p_a);
		for (int i = 0; i < windows_x; i += (windows_y / 10))
		{
			for (int j = 0; j < windows_x; j += (windows_x / 10))
			{
				Sleep(5);
				start_dh(j, i);
			}
		}
		graphdefaults();
	}
	while (1)
	{
		BeginBatchDraw();
		if (pd_lz1 <= rand() % LZ_1_DRAW_MAX + LZ_1_DRAW_MIN) ++pd_lz1_2;
		if (pd_lz1_2 > 5)
		{
			pd_lz1 = 0;
			pd_lz1_2 = 0;
			p_lz1->lz1_js_x = rand() % windows_x;
			p_lz1->lz1_js_y = rand() % windows_y;
		}
		draw();
		if (jz_pd == 1)
		{
			GameInit();
			jz_pd = 0;
		}
		if (cd_2_qd == 1 && ((fbl_kg_mr = mouse_test(windows_x / 12.0 * 2.5, windows_x / 12.0 * 3.5, windows_y / 12.0 * 9.5, windows_y / 12.0 * 10.5) >= 1.0)))
		{
			if (((windows_fbl_xy_hc[0] != windows_x) || (windows_fbl_xy_hc[1] != windows_y)) && (fbl_gb == 1))
			{
				windows_x = windows_fbl_xy_hc[0];
				windows_y = windows_fbl_xy_hc[1];
				fbl_gb = 0;
				jz_pd = 1;
				cleardevice();
				return 1;
			}
			GameInit();
		}
		if (cd_2_qd == 0)
		{
			if (start <= 0) mouse_cd_2();
			mouse();
			if (start >= 1)
			{
				ii2 = ht_xo(ii2);
				ii1 = win();
				win_2(ii1);
				draw_2();
			}
			if (mouse_cd_3()) break;
		}
		Sleep(20);
		EndBatchDraw();
	}
	return 0;
}