#include<stdio.h>
#include<graphics.h>
#include<easyx.h>
#include<iostream>
#include"Class1.h"
#include"qjsm.h"

void mouse_lei();
void mouse_cd_sz_fbl();
void mouse_zd_fbl_cz();

//菜单界面检测
void mouse_lei()
{
	if (!cai_dan_2.sz_back(0, 1) && !cai_dan_1.sz_back(0, 1))
	{
		if (cai_dan_1.sz_assignment_int(0, cai_dan_1.mtest(2, 0)) == 1)
		{
			cai_dan_1.sz_assignment(0, 1, true);
		}
		if (cai_dan_2.sz_assignment_int(0, cai_dan_2.mtest(3, 0)) == 1)
		{
			cai_dan_2.sz_assignment(0, 1, true);
		}
		if (cai_dan_3.sz_assignment_int(0, cai_dan_3.mtest(1, 0)) == 1)
		{
			cai_dan_3.sz_assignment(0, 1, true);
		}
	}
	else if (cai_dan_2.sz_back(0, 1))
	{
		if (cai_dan_2_qd.sz_assignment_int(0, cai_dan_2_qd.mtest(0, 0)) == 1)
		{
			cai_dan_2_qd.sz_assignment(0, 1, true);
		}
		if (cai_dan_2_1.sz_assignment_int(0, cai_dan_2_1.mtest(1, 0)) == 1 && !cai_dan_2_1.sz_back(0, 0))
		{
			cai_dan_2_1.sz_assignment(0, 0, true);
			cai_dan_2_1.sz_assignment(0, 1, true);
			cai_dan_2.sz_assignment(2, 0, true);
		}
		else if (cai_dan_2_1.sz_back_int(0) == 1 && cai_dan_2_1.sz_back(0, 0))
		{
			std::cout << cai_dan_2_1.sz_back_int(0) << std::endl;
			cai_dan_2_1.sz_assignment(0, 0, false);
			cai_dan_2_1.sz_assignment(0, 1, false);
			cai_dan_2.sz_assignment(2, 0, true);
		}
		if (cai_dan_2_2.sz_assignment_int(0, cai_dan_2_2.mtest(1, 0)) == 1 && !cai_dan_2_2.sz_back(0, 0))
		{
			cai_dan_2_2.sz_assignment(0, 0, true);
			cai_dan_2_2.sz_assignment(0, 1, true);
			cai_dan_2.sz_assignment(2, 0, true);
		}
		else if (cai_dan_2_2.sz_back_int(0) == 1 && cai_dan_2_2.sz_back(0, 0))
		{
			cai_dan_2_2.sz_assignment(0, 0, false);
			cai_dan_2_2.sz_assignment(0, 1, false);
			cai_dan_2.sz_assignment(2, 0, true);
		}
		if (cai_dan_2_3.sz_assignment_int(0, cai_dan_2_3.mtest(1, 0)) == 1 && !cai_dan_2_3.sz_back(0, 0))
		{
			cai_dan_2_3.sz_assignment(0, 0, true);
			cai_dan_2_3.sz_assignment(0, 1, true);
			cai_dan_2.sz_assignment(2, 0, true);
		}
		else if (cai_dan_2_3.sz_back_int(0) == 1 && cai_dan_2_3.sz_back(0, 0))
		{
			cai_dan_2_3.sz_assignment(0, 0, false);
			cai_dan_2_3.sz_assignment(0, 1, false);
			cai_dan_2.sz_assignment(2, 0, true);
		}
	}
	else if (cai_dan_1.sz_back(0, 1))
	{
		if (return_cd.mtest() == 1)
		{
			GameInit();
			cai_dan_1.sz_assignment(0, 1, false);
		}
	}

}
//分辨率检测
void mouse_cd_sz_fbl()
{
	for (int i= 0; i < 6; i++)
	{
		if (cai_dan_2_fbl[i].mtest(0, 0) == 1)
		{
			mouse_zd_fbl_cz();
			cai_dan_2_fbl[i].sz_assignment(0, 1, true);
			cai_dan_2.sz_assignment(2, 0, true);
		}
	}
}
//分辨率重置
void mouse_zd_fbl_cz()
{
	for (int j = 0; j < 6; ++j)
	{
		cai_dan_2_fbl[j].sz_assignment(0, 1, false);
	}
	draw_fbl_xz();
}