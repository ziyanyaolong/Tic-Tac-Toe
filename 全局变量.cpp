#include<graphics.h>
#include"Class1.h"
#include"changliang.h"
IMAGE p_a, p_b, p_c, p_d, p_e, p_f, p_g;
int windows_x = 1152;
int windows_y = 648;
double windows_x_bl = (double)windows_x / 1152.0;;
double windows_y_bl = (double)windows_y / 648.0;;
double windows_x_3_1 = (double)windows_x / 3.0;;
double windows_x_3_2 = (double)windows_x / 3.0 * 2.0;;
double windows_y_3_1 = (double)windows_y / 3.0;;
double windows_y_3_2 = (double)windows_y / 3.0 * 2.0;;
short windows_fbl_xy_hc[2] = { 1152, 648 };
short windows_fbl_xy[6][2] = { {800, 600}, {1024, 768}, {1152, 648}, {1280, 1024}, {1680, 1050}, {1920, 1080} };
bool BGM_sz = 1;
bool BGM_pd = 1;
short end_jzq = 0;
bool draw_tb = 0;
bool game_start_jz = false;
int shuzu[3][3] = { 0 };
int shuzu_2[3][3] = { 0 };
bool pj_zcpd = false;
bool xo = 0;
HWND cc;
POINT gm;

LIZI::Li_zi_1 li_zi_1_create_1(0, 0, 0, 0, 0, 0, 0, 0);
QUYU::Qu_yu_lei_1 cai_dan_1(4, 1, 1, (double)windows_x_3_1, (double)(windows_y - (300.0 * windows_y_bl)), (double)windows_x_3_2, (double)windows_y_3_2);
QUYU::Qu_yu_lei_1 cai_dan_2(4, 2, 1, (double)windows_x_3_1, (double)(windows_y - (200.0 * windows_y_bl)), (double)windows_x_3_2, (double)(windows_y_3_2 + (100.0 * windows_y_bl)));
QUYU::Qu_yu_lei_1 cai_dan_3(2, 0, 1, (double)windows_x_3_1, (double)(windows_y - (100.0 * windows_y_bl)), (double)windows_x_3_2, (double)(windows_y_3_2 + (200.0 * windows_y_bl)));

QUYU::Qu_yu_lei_1 cai_dan_2_1(2, 1, 1, (double)(windows_x / 12.0 * 9.5), (double)(windows_y / 12.0 * 1.7), (double)(windows_x / 12.0 * 10.0), (double)(windows_y / 12.0 * 2.3));
QUYU::Qu_yu_lei_1 cai_dan_2_2(2, 1, 1, (double)(windows_x / 12.0 * 9.5), (double)(windows_y / 12.0 * 2.7), (double)(windows_x / 12.0 * 10.0), (double)(windows_y / 12.0 * 3.3));
QUYU::Qu_yu_lei_1 cai_dan_2_3(2, 1, 1, (double)(windows_x / 12.0 * 9.5), (double)(windows_y / 12.0 * 3.7), (double)(windows_x / 12.0 * 10.0), (double)(windows_y / 12.0 * 4.3));
QUYU::Qu_yu_lei_1 cai_dan_2_qd(1, 1, 1, (double)(windows_x / 12.0 * 2.5), (double)(windows_y / 12.0 * 9.5), (double)(windows_x / 12.0 * 3.5), (double)(windows_y / 12.0 * 10.5));
QUYU::Qu_yu_lei_1 cai_dan_2_fbl[6] =
{
	{ QUYU::Qu_yu_lei_1(1, 1, 0, (double)(windows_x / 12.0 * ((double)(0 * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(0 + 4.7)), (int)(windows_x / 12.0 * ((double)(0 * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(0 + 5.3))) },
	{ QUYU::Qu_yu_lei_1(1, 1, 0, (double)(windows_x / 12.0 * ((double)(1 * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(0 + 4.7)), (int)(windows_x / 12.0 * ((double)(1 * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(0 + 5.3))) },
	{ QUYU::Qu_yu_lei_1(1, 1, 0, (double)(windows_x / 12.0 * ((double)(0 * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(1 + 4.7)), (int)(windows_x / 12.0 * ((double)(0 * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(1 + 5.3))) },
	{ QUYU::Qu_yu_lei_1(1, 1, 0, (double)(windows_x / 12.0 * ((double)(1 * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(1 + 4.7)), (int)(windows_x / 12.0 * ((double)(1 * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(1 + 5.3))) },
	{ QUYU::Qu_yu_lei_1(1, 1, 0, (double)(windows_x / 12.0 * ((double)(0 * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(2 + 4.7)), (int)(windows_x / 12.0 * ((double)(0 * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(2 + 5.3))) },
	{ QUYU::Qu_yu_lei_1(1, 1, 0, (double)(windows_x / 12.0 * ((double)(1 * 4.0) + 4.7)), (int)(windows_y / 12.0 * (double)(2 + 4.7)), (int)(windows_x / 12.0 * ((double)(1 * 4.0) + 5.3)), (int)(windows_y / 12.0 * (double)(2 + 5.3))) },
};

QUYU::Qu_yu_lei_1 return_cd(1, 0, 0, 0, 0, 40.0 * windows_x_bl, 40.0 * windows_y_bl);
QUYU::Qu_yu_lei_1 sounds(0, 1, 0);
QUYU::Qu_yu_lei_1 xo_(1, 0, 0);
QUYU::Qu_yu_lei_1 win_mtest(1, 0, 0, 0, 0, windows_x, windows_y);


USER::User a("A");
USER::User b("B");