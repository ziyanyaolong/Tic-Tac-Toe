#include<vector>
#include<iostream>
#include<time.h>
#include"Class1.h"
#include"qjsm.h"

//USER空间的User类的构建、析构函数
USER::User::User()
{
	name_ = "NULL";
	srand(time(0));
	ID_ = rand();
	permissions_ = 0;

}
USER::User::User(std::string a)
{
	name_ = a;
	srand(time(0));
	ID_ = rand();
	permissions_ = 0;
}
USER::User::~User()
{
}
//LIZI空间的Li_zi_1类的构建、析构函数
LIZI::Li_zi_1::Li_zi_1(unsigned short a, unsigned short b, bool c, int d, int e, int f, unsigned int g, unsigned int h)
{
	pd_lz1 = a;
	pd_lz1_2 = b;
	lizi1_kg_pd = c;
	x = d;
	y = e;
	color = f;
	for (int i = 0; i < LZ_SL; i++)
	{
		lz1_js_x[i] = g;
		lz1_js_y[i] = h;
	}
}
LIZI::Li_zi_1::~Li_zi_1()
{
}
LIZI::Li_zi_1::Li_zi_1()
{
	pd_lz1 = 0;
	pd_lz1_2 = 0;
	lizi1_kg_pd = 0;
	x = 0;
	y = 0;
	color = 0;
	for (int i = 0; i < LZ_SL; i++)
	{
		lz1_js_x[i] = 0;
		lz1_js_y[i] = 0;
	}
}
void LIZI::Li_zi_1::rest()
{
	pd_lz1 = 0;
	pd_lz1_2 = 0;
	lizi1_kg_pd = 0;
	x = 0;
	y = 0;
	color = 0;
	for (int i = 0; i < LZ_SL; i++)
	{
		lz1_js_x[i] = 0;
		lz1_js_y[i] = 0;
	}
}
//CAIDAN空间的Cai_dan_1类的构建、析构函数
QUYU::Qu_yu_lei_1::~Qu_yu_lei_1()
{
}
QUYU::Qu_yu_lei_1::Qu_yu_lei_1()
{
	i = j = k = 0;
	x1 = x2 = y1 = y2 = 0;
}
QUYU::Qu_yu_lei_1::Qu_yu_lei_1(unsigned int pd_pd, unsigned int sz_sz, unsigned int zc_zc)
{
	i = pd_pd;
	j = sz_sz;
	k = zc_zc;
	x1 = x2 = y1 = y2 = 0;
	if (i > 0)
	{
		for (unsigned int n = 0; n < pd_pd; ++n)
		{
			pd.push_back(false);
		}
	}
	if (j > 0)
	{
		for (unsigned int m = 0; m < sz_sz; ++m)
		{
			sz_cc.push_back(false);
		}
	}
	if (k > 0)
	{
		for (unsigned int v = 0; v < zc_zc; ++v)
		{
			zc.push_back(-11);
		}
	}
}
QUYU::Qu_yu_lei_1::Qu_yu_lei_1(unsigned int pd_pd, unsigned int sz_sz, unsigned int zc_zc, double x_1, double y_1, double x_2, double y_2)
{
	x1 = x_1;
	x2 = x_2;
	y1 = y_1;
	y2 = y_2;
	i = pd_pd;
	j = sz_sz;
	k = zc_zc;
	if (i > 0)
	{
		for (unsigned int n = 0; n < pd_pd; ++n)
		{
			pd.push_back(false);
		}
	}
	if (j > 0)
	{
		for (unsigned int m = 0; m < sz_sz; ++m)
		{
			sz_cc.push_back(false);
		}
	}
	if (k > 0)
	{
		for (unsigned int v = 0; v < zc_zc; ++v)
		{
			zc.push_back(-11);
		}
	}
}
void QUYU::Qu_yu_lei_1::rest()
{
	if (i > 0)
	{
		pd.clear();
		for (unsigned int n = 0; n < i; ++n)
		{
			pd.push_back(0);
		}
	}
	if (j > 0)
	{
		sz_cc.clear();
		for (unsigned int m = 0; m < j; ++m)
		{
			sz_cc.push_back(0);
		}
	}
	if (k > 0)
	{
		zc.clear();
		for (unsigned int v = 0; v < k; ++v)
		{
			zc.push_back(-11);
		}
	}
}