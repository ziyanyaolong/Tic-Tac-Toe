#include <graphics.h>
#include "Class1.h"
#include"changliang.h"
#include"qjsm.h"
#include<iostream>

//ID获取
unsigned int& USER::User::ID()
{
	return ID_;
}
//名字获取
std::string& USER::User::name()
{
	return name_;
}
std::string& USER::User::name_set(std::string& a)
{
	return name_ = a;
}
//运算符重载（区域1）:
void QUYU::Qu_yu_lei_1::operator=(const QUYU::Qu_yu_lei_1 & a)
{
	x1 = a.x1;
	x2 = a.x2;
	y1 = a.y2;
	y2 = a.y2;
}
void QUYU::Qu_yu_lei_1::xy_overloading(double x_1, double y_1, double x_2, double y_2)
{
	x1 = x_1;
	x2 = x_2;
	y1 = y_1;
	y2 = y_2;
}
//鼠标检测返回(区域类1)：
int QUYU::Qu_yu_lei_1::mtest()
{
	return mouse_test(this->x1, this->x2, this->y1, this->y2);
}
int QUYU::Qu_yu_lei_1::mtest(unsigned int a, unsigned int b)
{
	if (gm.x <= windows_x && gm.x >= 0 && gm.y <= windows_y && gm.y >= 0)
	{
		if (((double)gm.x >= x1) && ((double)gm.x <= x2))
		{
			if (((double)gm.y >= y1) && ((double)gm.y <= y2))
			{
				if (!(GetAsyncKeyState(VK_LBUTTON) & 0x8000) && (this->sz_back(a, b) == false))
				{
					this->sz_assignment(a, b, true);
					return -3;
				}
				else if ((GetAsyncKeyState(VK_LBUTTON) & 0x8000) && ( this->sz_back(a, b) == true ))
				{
					this->sz_assignment(a, b, false);
					return 1;
				}
				else
				{
					return -1;
				}
			}
			else
			{
				return -2;
			}
		}
		else
		{
			return -2;
		}
	}
	else
	{
		return 0;
	}
}

//动画和粒子：
void LIZI::Li_zi_1::lizi_1()
{
	if (this->lizi1_kg_pd)
	{
		putimage(0, 0, &p_a);
		for (int i = 0; i < LZ_SL; i++)
		{
			this->lz1_js_x[i] += (int)((762.0 / 50.0 * windows_x_bl) / LZ_1_DRAW_SD);
			this->lz1_js_y[i] += (int)((641.0 / 50.0 * windows_y_bl) / LZ_1_DRAW_SD);
			putimage(this->lz1_js_x[i], this->lz1_js_y[i], &p_e, SRCAND);
			putimage(this->lz1_js_x[i], this->lz1_js_y[i], &p_d, SRCPAINT);
		}
		if (this->pd_lz1 >= rand() % LZ_1_DRAW_MAX + LZ_1_DRAW_MIN) ++this->pd_lz1_2;
		if (this->pd_lz1_2)
		{
			this->pd_lz1 = 0;
			this->pd_lz1_2 = 0;
			for (int i = 0; i < LZ_SL; i++)
			{
				this->lz1_js_x[i] = rand() % windows_x + 0;
				this->lz1_js_y[i] = rand() % windows_y + 0;
			}
		}
		++this->pd_lz1;
	}
}
//真与否设置（粒子1）：
bool LIZI::Li_zi_1::lizi1_kg(bool a)
{
	if (a)
	{
		this->lizi1_kg_pd = true;
		return true;
	}
	else
	{
		this->lizi1_kg_pd = false;
		return false;
	}

}
//真与否返回（粒子1）
bool LIZI::Li_zi_1::lizi1_kg()
{
	if (this->lizi1_kg_pd)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//真与否设置（区域类1）
bool QUYU::Qu_yu_lei_1::sz_assignment(unsigned int sz_bh, int a, bool b)
{
	if (a == 0)
	{
		if (sz_bh >= 0 && sz_bh < (this->i))
		{
			return (this->pd[sz_bh] = b);
		}
		else return false;
	}
	else if (a == 1)
	{
		if (sz_bh >= 0 && sz_bh < (this->j))
		{
			return (this->sz_cc[sz_bh] = b);
		}
		else return false;
	}
	else return false;
}
int QUYU::Qu_yu_lei_1::sz_assignment_int(unsigned int sz_bh, int b)
{
	if (sz_bh >= 0 && sz_bh < (this->k))
	{
		return (this->zc[sz_bh] = b);
	}
	return -10;
}
//真与否返回（区域类1）
bool QUYU::Qu_yu_lei_1::sz_back(unsigned int sz_bh, int a)
{
	if (a == 0)
	{
		if (sz_bh >= 0 && sz_bh < (this->i))
		{
			return this->pd[sz_bh];
		}
		else return false;
	}
	else if(a == 1)
	{
		if (sz_bh >= 0 && sz_bh < (this->j))
		{
			return this->sz_cc[sz_bh];
		}
		else return false;
	}
	else return false;
}
int QUYU::Qu_yu_lei_1::sz_back_int(unsigned int sz_bh)
{
	if (sz_bh >= 0 && sz_bh < (this->k))
	{
		return this->zc[sz_bh];
	}
	else return -10;
}
void QUYU::Qu_yu_lei_1::see_xy()
{
	std::cout << this->x1 << "------" << this->y1 << "------" << this->x2 << "------" << this->y2 << std::endl;
}