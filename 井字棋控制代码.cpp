#include<stdio.h>
#include<graphics.h>
#include<thread>
#include"Class1.h"
#include"qjsm.h"

int jzq(void);

int jzq(void)
{
	//设置随机数种子
	srand(time(0));
	//initgraph(windows_x, windows_y, EW_SHOWCONSOLE);
	initgraph(windows_x, windows_y);
	//初始化
	GameInit();
	//启动加载绘图
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
		setfillstyle(BS_SOLID);
	}
	end_jzq = 1;
	//启用多线程运行绘图操作
	std::thread sss(draw);
	while (end_jzq)
	{
		if (cd_2_qd == 1 || start >= 1)
		{
			li_zi_1_create_1.lizi1_kg(false, li_zi_1_create_1);
		}
		else li_zi_1_create_1.lizi1_kg(true, li_zi_1_create_1);
		if (jz_pd == 1)
		{
			GameInit();
			jz_pd = 0;
		}
		if (BGM_pd == 1 && BGM_sz == 1)
		{
			BGM_pd = 0;
			StopBGM();
			PlayBGM();
		}
		else if (BGM_pd == 0 && BGM_sz == 0)
		{
			BGM_pd = 1; 
			StopBGM();
		}
		if (cd_2_qd == 1 && ((fbl_kg_mr = mouse_test(windows_x / 12.0 * 2.5, windows_x / 12.0 * 3.5, windows_y / 12.0 * 9.5, windows_y / 12.0 * 10.5) >= 1.0)))
		{
			//分辨率调节
			if (((windows_fbl_xy_hc[0] != windows_x) || (windows_fbl_xy_hc[1] != windows_y)) && (fbl_gb == 1))
			{
				windows_x = windows_fbl_xy_hc[0];
				windows_y = windows_fbl_xy_hc[1];
				fbl_gb = 0;
				jz_pd = 1;
				end_jzq = 2;
				sss.join();
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
	}
	end_jzq = 0;
	sss.join();
	return 0;
}