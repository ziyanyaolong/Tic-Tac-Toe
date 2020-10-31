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
	initgraph(windows_x, windows_y, EW_SHOWCONSOLE);
	cc = NULL;
	cc = GetHWnd();
	//initgraph(windows_x, windows_y);
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
	int jz_pd = 1;
	//启用多线程运行绘图操作
	std::thread sss(draw);
	while (end_jzq)
	{
		GetCursorPos(&gm);
		ScreenToClient(cc, &gm);
		mouse_lei();
		if (cai_dan_2.sz_back(0, 1) || cai_dan_1.sz_back(0, 1))
		{
			li_zi_1_create_1.lizi1_kg(false);
		}
		else li_zi_1_create_1.lizi1_kg(true);
		if (jz_pd == 1)
		{
			//第一次设置
			GameInit();
			jz_pd = 0;
		}
		//BGM配置
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
		//菜单界面
		if (!cai_dan_2.sz_back(0, 1) && !cai_dan_1.sz_back(0, 1))
		{
			if (cai_dan_3.sz_back_int(0) == 1)
			{
				end_jzq = 0;
				sss.join();
				jz_pd = 1;
				return 0;
			}
			if (cai_dan_1.sz_back_int(0) == -1 && !cai_dan_1.sz_back(0, 0))
			{
				cai_dan_1.sz_assignment(0, 0, true);
				cdxxsy();
			}
			else if (cai_dan_1.sz_back_int(0) == -2)
			{
				cai_dan_1.sz_assignment(0, 0, false);
			}
			if (cai_dan_2.sz_back_int(0) == -1 && !cai_dan_2.sz_back(0, 0))
			{
				cai_dan_2.sz_assignment(0, 0, true);
				cdxxsy();
			}
			else if (cai_dan_2.sz_back_int(0) == -2)
			{
				cai_dan_2.sz_assignment(0, 0, false);
			}
			if (cai_dan_3.sz_back_int(0) == -1 && !cai_dan_3.sz_back(0, 0))
			{
				cai_dan_3.sz_assignment(0, 0, true);
				cdxxsy();
			}
			else if (cai_dan_3.sz_back_int(0) == -2)
			{
				cai_dan_3.sz_assignment(0, 0, false);
			}
		}
		if (((windows_x != windows_fbl_xy_hc[0]) || (windows_y != windows_fbl_xy_hc[1])) && (cai_dan_2_qd.sz_back(0, 1) == 1))
		{
			cai_dan_2_qd.sz_assignment(0, 1, false);
			cai_dan_2.sz_assignment(1, 1, false);
			cai_dan_2.sz_assignment(0, 1, false);
			GameInit();
			windows_x = windows_fbl_xy_hc[0];
			windows_y = windows_fbl_xy_hc[1];
			end_jzq = 0;
			sss.join();
			return 1;
		}
		if (cai_dan_2.sz_back(0, 1) && cai_dan_2_qd.sz_back(0, 1) == 1)
		{
			cai_dan_2_qd.sz_assignment(0, 1, false);
			cai_dan_2.sz_assignment(1, 1, false);
			cai_dan_2.sz_assignment(0, 1, false);
			GameInit();
		}
		//胜利判定
		if (cai_dan_1.sz_back(0, 1))
		{
			BeginBatchDraw();
			if (!cai_dan_1.sz_back(3, 0))
			{
				StopBGM();
				cdqdsy();
				cai_dan_1.sz_assignment(3, 0, true);
				cleardevice();
			}
			draw_get();
			ht_xo(a, b);
			win_2(win());
			draw_2();
			EndBatchDraw();
		}
		Sleep(10);
	}
	end_jzq = 0;
	sss.join();
	return 0;
}