#include<stdio.h>
#include<easyx.h>
#include <graphics.h>
#include "Class1.h"
#include"changliang.h"
#include"qjsm.h"

using LIZI::Li_zi_1;

void Li_zi_1::lizi_1(Li_zi_1& a)
{
	if (a.lizi1_kg_pd)
	{
		putimage(0, 0, &p_a);
		for (int i = 0; i < LZ_SL; i++)
		{
			a.lz1_js_x[i] += (int)((762.0 / 50.0 * windows_x_bl) / LZ_1_DRAW_SD);
			a.lz1_js_y[i] += (int)((641.0 / 50.0 * windows_y_bl) / LZ_1_DRAW_SD);
			putimage(a.lz1_js_x[i], a.lz1_js_y[i], &p_e, SRCAND);
			putimage(a.lz1_js_x[i], a.lz1_js_y[i], &p_d, SRCPAINT);
		}
		if (a.pd_lz1 >= rand() % LZ_1_DRAW_MAX + LZ_1_DRAW_MIN) ++a.pd_lz1_2;
		if (a.pd_lz1_2)
		{
			a.pd_lz1 = 0;
			a.pd_lz1_2 = 0;
			for (int i = 0; i < LZ_SL; i++)
			{
				a.lz1_js_x[i] = rand() % windows_x + 0;
				a.lz1_js_y[i] = rand() % windows_y + 0;
			}
		}
		++a.pd_lz1;
	}
}
bool Li_zi_1::lizi1_kg(bool a, Li_zi_1& b)
{
	if (a)
	{
		b.lizi1_kg_pd = true;
		return true;
	}
	else
	{
		b.lizi1_kg_pd = false;
		return false;
	}

}
bool Li_zi_1::lizi1_kg(const Li_zi_1& a)
{
	if (a.lizi1_kg_pd)
	{
		return true;
	}
	else
	{
		return false;
	}
}